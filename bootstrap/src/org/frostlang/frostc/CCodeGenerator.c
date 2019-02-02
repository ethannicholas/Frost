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
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/CCodeGenerator/ClassConstant.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/CCodeGenerator/MethodShim.h"
#include "frost/collections/Array.h"
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
#include "org/frostlang/frostc/ChoiceCase.h"
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
org$frostlang$frostc$CCodeGenerator$class_type org$frostlang$frostc$CCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$CCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$cleanup, org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit, org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$nextLabel$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$writeType$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$typeName$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim, org$frostlang$frostc$CCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit, org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant, org$frostlang$frostc$CCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant, org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$Variable$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$FieldDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$opClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$OpClass, org$frostlang$frostc$CCodeGenerator$getBinaryReference$org$frostlang$frostc$Type$frost$core$String$org$frostlang$frostc$expression$Binary$Operator$frost$core$String$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getMethodReference$frost$core$String$Q$org$frostlang$frostc$MethodDecl$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getIntReference$frost$core$UInt64$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getBitReference$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String, org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit, org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID, org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$CCodeGenerator$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$CCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64, org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerRealloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q, org$frostlang$frostc$CCodeGenerator$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value, org$frostlang$frostc$CCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement, org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$CCodeGenerator$writeIR$org$frostlang$frostc$IR, org$frostlang$frostc$CCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$CCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$CCodeGenerator$finish} };

typedef frost$core$Error* (*$fn153)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn237)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn248)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn259)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn270)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn300)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn329)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn391)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn481)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn485)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn490)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn564)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn603)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn665)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn732)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn760)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn764)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn769)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn811)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn842)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn846)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn851)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn877)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn927)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn933)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn976)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn998)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1017)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1067)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1104)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1134)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1194)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1230)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1273)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1285)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1303)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1322)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1341)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn1379)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1416)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1432)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Bit (*$fn1447)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1462)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1486)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1511)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1564)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1568)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1573)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1615)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1651)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1655)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1660)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1686)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1767)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1947)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1951)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1956)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1982)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2056)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2184)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2213)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn2249)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2492)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2502)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2521)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2550)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2574)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn2645)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2661)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2682)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2695)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn2713)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2737)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn2775)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn2816)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn2857)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn2876)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn2890)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2898)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2929)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2943)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2950)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2969)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn2983)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3005)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3016)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3024)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3059)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3070)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3081)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn3093)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3098)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3115)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn3127)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn3145)(frost$core$Object*);
typedef frost$core$Bit (*$fn3166)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3297)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3324)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3371)(frost$core$Object*);
typedef frost$core$String* (*$fn3375)(frost$core$Object*);
typedef frost$core$Error* (*$fn3428)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn3434)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3438)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3443)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn3452)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Error* (*$fn3462)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn3470)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3479)(frost$collections$Key*);
typedef frost$core$Error* (*$fn3486)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn3507)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3557)(frost$core$Object*);
typedef frost$core$String* (*$fn3569)(frost$core$Object*);
typedef frost$core$Bit (*$fn3754)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3774)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3790)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3800)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3830)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn3846)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3856)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3891)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4060)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4081)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4091)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4110)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn4131)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn4171)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4204)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4250)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn4259)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4263)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4268)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn4283)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4296)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4313)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4331)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn4348)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4365)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn4374)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4378)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4383)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn4390)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4401)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4414)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4456)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4525)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4568)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4597)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4615)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4640)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4657)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4685)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4730)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4748)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4763)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4779)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4794)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4810)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4825)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4867)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn4892)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4908)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4930)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4954)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn4973)(frost$io$OutputStream*, frost$core$String*);
typedef org$frostlang$frostc$Type* (*$fn4995)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5010)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5022)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn5033)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Error* (*$fn5063)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5101)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5122)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5127)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn5152)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn5170)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5186)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5202)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5217)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn5227)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn5231)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5236)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn5243)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5254)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5267)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5291)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5362)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5687)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn5703)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn5747)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5763)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5771)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn5803)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn5852)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn5866)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn5968)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn5992)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn6009)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn6013)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn6018)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn6040)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6058)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6075)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6084)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6092)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn6179)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn6207)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6216)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6225)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6234)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn6243)(frost$io$OutputStream*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 35, -2345644890872423107, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x74\x79\x70\x65\x20", 16, 7914278075631058822, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x4d\x65\x74\x68\x6f\x64\x54\x79\x70\x65\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x65\x6c\x66\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 163, 3276100450823531157, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x28", 2, 14382, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s719 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x73\x20\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 16, 538313452881261501, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s756 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static frost$core$String $s817 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s821 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s829 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s833 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s836 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s856 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s884 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static frost$core$String $s886 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s923 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s947 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s957 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static frost$core$String $s968 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x5f\x61\x74\x74\x72\x69\x62\x75\x74\x65\x5f\x5f\x28\x28\x77\x65\x61\x6b\x29\x29\x20", 22, 985746977287669079, NULL };
static frost$core$String $s970 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s974 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s996 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20\x73\x72\x65\x74", 6, 1506393962321, NULL };
static frost$core$String $s1010 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1012 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1048 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1060 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x70", 2, 13545, NULL };
static frost$core$String $s1065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1079 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s1125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70", 1, 213, NULL };
static frost$core$String $s1164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x2a\x29\x20", 21, 439094005818830454, NULL };
static frost$core$String $s1226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x46\x72\x6f\x73\x74\x24\x75\x6e\x72\x65\x66\x24\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x4f\x62\x6a\x65\x63\x74\x24\x51\x28", 43, 2176290240124383769, NULL };
static frost$core$String $s1283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static frost$core$String $s1301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1324 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x72\x65\x74", 4, 223718247, NULL };
static frost$core$String $s1334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s1456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static frost$core$String $s1458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s1460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s1488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1550 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x63\x72\x65\x61\x74\x65\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d\x28\x72\x61\x77\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x65\x66\x66\x65\x63\x74\x69\x76\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4d\x65\x74\x68\x6f\x64\x53\x68\x69\x6d", 206, -7873525039119771459, NULL };
static frost$core$String $s1558 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1596 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static frost$core$String $s1603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1609 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static frost$core$String $s1611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static frost$core$String $s1619 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static frost$core$String $s1621 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static frost$core$String $s1625 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s1630 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s1632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static frost$core$String $s1638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s1645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1665 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1667 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1680 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s1699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static frost$core$String $s1701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static frost$core$String $s1809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s1842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static frost$core$String $s1843 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s1866 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s1868 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1871 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1873 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1887 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s1890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s1898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s1900 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static frost$core$String $s1906 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static frost$core$String $s1912 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s1918 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s1920 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1925 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x30\x2c\x20", 5, 15122221901, NULL };
static frost$core$String $s1930 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1934 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1938 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s1941 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s1971 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1973 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1976 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static frost$core$String $s2003 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2021 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2028 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static frost$core$String $s2042 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2044 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2904858913866490275, NULL };
static frost$core$String $s2050 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static frost$core$String $s2054 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2084 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static frost$core$String $s2085 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static frost$core$String $s2104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s2136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b\x0a", 2, 16170, NULL };
static frost$core$String $s2142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static frost$core$String $s2148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s2154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s2156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x30\x2c\x20", 5, 15122221901, NULL };
static frost$core$String $s2166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static frost$core$String $s2177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s2243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static frost$core$String $s2282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static frost$core$String $s2296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24", 1, 137, NULL };
static frost$core$String $s2348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s2379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s2383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s2389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s2391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s2395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s2407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s2409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s2413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s2415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s2419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s2425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s2431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s2433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s2440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s2442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s2446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s2448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s2453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s2455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s2460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s2467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s2469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s2474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s2482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s2484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s2486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static frost$core$String $s2500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2519 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s2530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s2617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s2620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static frost$core$String $s2625 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static frost$core$String $s2638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static frost$core$String $s2640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static frost$core$String $s2651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static frost$core$String $s2653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, -2219903404419143126, NULL };
static frost$core$String $s2659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s2676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2680 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static frost$core$String $s2697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2789 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2809 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static frost$core$String $s2814 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s2831 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6c\x6c\x69\x6e\x67\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 17, 6273213310080951380, NULL };
static frost$core$String $s2844 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x61\x20\x74\x61\x72\x67\x65\x74", 17, 4566770767977439161, NULL };
static frost$core$String $s2845 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s2884 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s2888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s2894 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s2896 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static frost$core$String $s2923 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s2927 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s2945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2952 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static frost$core$String $s2967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static frost$core$String $s2985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s2999 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3003 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3020 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s3022 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static frost$core$String $s3038 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s3042 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3046 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 17, 6191911388433222465, NULL };
static frost$core$String $s3048 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 22, -4321982028467046391, NULL };
static frost$core$String $s3054 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x29\x3b", 15, -9084967859609473468, NULL };
static frost$core$String $s3065 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static frost$core$String $s3068 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s3095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static frost$core$String $s3113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x3b", 8, 14324500803727928, NULL };
static frost$core$String $s3129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s3133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static frost$core$String $s3181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s3183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static frost$core$String $s3187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static frost$core$String $s3191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static frost$core$String $s3199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static frost$core$String $s3204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static frost$core$String $s3207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static frost$core$String $s3218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s3356 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75", 1, 218, NULL };
static frost$core$String $s3380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s3386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static frost$core$String $s3389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x73", 2, 13952, NULL };
static frost$core$String $s3407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 329606069570935975, NULL };
static frost$core$String $s3417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static frost$core$String $s3421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20", 46, -2509429713584291557, NULL };
static frost$core$String $s3423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x30\x2c\x20", 5, 15122221901, NULL };
static frost$core$String $s3426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 21, 309785060753825527, NULL };
static frost$core$String $s3454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x78", 1, 221, NULL };
static frost$core$String $s3456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static frost$core$String $s3458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static frost$core$String $s3460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static frost$core$String $s3476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s3484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static frost$core$String $s3491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3493 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x74\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3a\x20", 14, 4299600041167827879, NULL };
static frost$core$String $s3514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static frost$core$String $s3543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28", 2, 14281, NULL };
static frost$core$String $s3545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x4e\x55\x4c\x4c\x29", 7, 151080389671230, NULL };
static frost$core$String $s3581 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x26\x6c\x6f\x63\x61\x6c", 7, 150085078960302, NULL };
static frost$core$String $s3583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3622 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static frost$core$String $s3624 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x64\x20", 3, 2111538, NULL };
static frost$core$String $s3657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x68\x61\x73\x20\x6e\x6f\x74\x20\x62\x65\x65\x6e\x20\x64\x65\x66\x69\x6e\x65\x64", 21, -4672138024147032761, NULL };
static frost$core$String $s3658 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3669 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x72\x65\x66\x3a\x20", 15, -4631094845120441450, NULL };
static frost$core$String $s3671 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3759 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s3764 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s3782 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3803 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3805 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static frost$core$String $s3808 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21", 1, 134, NULL };
static frost$core$String $s3810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static frost$core$String $s3815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static frost$core$String $s3838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s3859 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3861 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static frost$core$String $s3865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static frost$core$String $s3870 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static frost$core$String $s3922 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s3924 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s3928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s3930 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s3934 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s3936 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s3943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s3945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, 148, NULL };
static frost$core$String $s3949 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s3951 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x25", 1, 138, NULL };
static frost$core$String $s3955 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s3957 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static frost$core$String $s3961 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s3963 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s3970 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3972 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s3979 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s3981 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7c", 1, 225, NULL };
static frost$core$String $s3988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s3990 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5e", 1, 195, NULL };
static frost$core$String $s3997 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s3999 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s4006 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s4008 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s4012 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s4014 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s4018 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s4020 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s4024 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s4026 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s4030 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s4032 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s4034 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4042 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4046 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4050 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4054 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4058 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static frost$core$String $s4079 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4084 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4098 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static frost$core$String $s4100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static frost$core$String $s4104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static frost$core$String $s4108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 16, -1641588070395923110, NULL };
static frost$core$String $s4138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 310213931544332495, NULL };
static frost$core$String $s4140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s4148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x52\x4f\x53\x54\x5f\x41\x53\x53\x45\x52\x54\x28", 13, -7497314830958463460, NULL };
static frost$core$String $s4163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x3d\x20\x73\x69\x7a\x65\x6f\x66\x28", 11, 1457907249863020283, NULL };
static frost$core$String $s4169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static frost$core$String $s4183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x66\x72\x6f\x73\x74\x4f\x62\x6a\x65\x63\x74\x41\x6c\x6c\x6f\x63\x28", 19, 1107787609391233434, NULL };
static frost$core$String $s4197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s4254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d\x3b", 2, 22885, NULL };
static frost$core$String $s4310 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s4369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s4407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s4416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static frost$core$String $s4484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4508 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x29\x20\x28", 4, 147754556, NULL };
static frost$core$String $s4516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x64\x61\x74\x61\x20", 8, 15719379260890086, NULL };
static frost$core$String $s4520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2b\x20", 2, 14576, NULL };
static frost$core$String $s4522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x26", 4, 137655564, NULL };
static frost$core$String $s4561 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static frost$core$String $s4566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4589 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static frost$core$String $s4591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static frost$core$String $s4605 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static frost$core$String $s4607 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x66\x72\x6f\x73\x74\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, -2219903404419143126, NULL };
static frost$core$String $s4613 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s4634 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static frost$core$String $s4659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s4671 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4679 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static frost$core$String $s4683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s4700 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s4719 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20", 2, 14374, NULL };
static frost$core$String $s4723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static frost$core$String $s4727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s4741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4753 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4757 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x2a", 4, 137655568, NULL };
static frost$core$String $s4761 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4784 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4788 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x2d", 4, 137655571, NULL };
static frost$core$String $s4792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4803 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x21", 4, 137655559, NULL };
static frost$core$String $s4823 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4834 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static frost$core$String $s4852 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28\x28", 5, 13903212206, NULL };
static frost$core$String $s4856 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a\x29\x20\x66\x72\x6f\x73\x74\x41\x6c\x6c\x6f\x63\x28", 14, 1479774152278083113, NULL };
static frost$core$String $s4860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s4864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x29\x3b", 3, 1452742, NULL };
static frost$core$String $s4880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x46\x72\x65\x65\x28", 10, 1903662118626742793, NULL };
static frost$core$String $s4890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s4897 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4916 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4920 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4924 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s4928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static frost$core$String $s4943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s4959 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s4963 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s4967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static frost$core$String $s4971 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s4986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5013 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x66\x6f\x72\x20\x74\x79\x70\x65\x20", 22, 6026307984013519672, NULL };
static frost$core$String $s5015 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5016 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5027 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5031 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static frost$core$String $s5038 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x66\x72\x6f\x73\x74\x52\x65\x61\x6c\x6c\x6f\x63\x28", 15, -7010250365195627110, NULL };
static frost$core$String $s5042 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5046 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5051 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5055 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x2a\x20", 3, 1361007, NULL };
static frost$core$String $s5060 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5078 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5091 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s5095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d\x20\x3d\x20", 4, 200211019, NULL };
static frost$core$String $s5099 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static frost$core$String $s5120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static frost$core$String $s5131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s5213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s5215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s5269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static frost$core$String $s5277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s5285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static frost$core$String $s5289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x2f\x20", 3, 1514527, NULL };
static frost$core$String $s5360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5689 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x62\x6f\x72\x74\x28\x29\x3b\x20\x2f\x2f\x20\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c\x65", 23, 8273563093259754029, NULL };
static frost$core$String $s5691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x63\x61\x6c", 5, 21864007024, NULL };
static frost$core$String $s5728 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5745 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5765 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c", 7, 141826707331641, NULL };
static frost$core$String $s5773 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s5840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static frost$core$String $s5855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30", 1, 149, NULL };
static frost$core$String $s5859 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x30", 1, 149, NULL };
static frost$core$String $s5938 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s5962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s5966 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s5971 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5973 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s5985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static frost$core$String $s5990 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6002 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6004 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6026 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6033 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x70\x61\x72\x61\x6d", 6, 1409599243562, NULL };
static frost$core$String $s6038 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s6051 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6053 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s6060 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static frost$core$String $s6094 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s6106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x77\x72\x69\x74\x65\x28\x6d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2c\x20\x69\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x29", 137, -8068718440467774474, NULL };
static frost$core$String $s6121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 20, 3981553015544000362, NULL };
static frost$core$String $s6155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x63", 2, 14946, NULL };

void org$frostlang$frostc$CCodeGenerator$init$frost$io$File(org$frostlang$frostc$CCodeGenerator* param0, frost$io$File* param1) {

// line 59
FROST_ASSERT(152 == sizeof(org$frostlang$frostc$HCodeGenerator));
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
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp8 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp8, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$Weak** $tmp9 = &param0->compiler;
frost$core$Weak* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
frost$core$Weak** $tmp11 = &param0->compiler;
*$tmp11 = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// line 47
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
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
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
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
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
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
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
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
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
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
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
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
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
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
FROST_ASSERT(24 == sizeof(frost$collections$HashSet));
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
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
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
FROST_ASSERT(56 == sizeof(frost$collections$IdentityMap));
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
FROST_ASSERT(24 == sizeof(frost$collections$Stack));
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
FROST_ASSERT(56 == sizeof(frost$collections$IdentityMap));
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
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp95 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$collections$HashMap** $tmp96 = &param0->refs;
frost$collections$HashMap* $tmp97 = *$tmp96;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
frost$collections$HashMap** $tmp98 = &param0->refs;
*$tmp98 = $tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// line 64
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp99 = &param0->outDir;
frost$io$File* $tmp100 = *$tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$io$File** $tmp101 = &param0->outDir;
*$tmp101 = param1;
// line 65
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp102 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp103 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp103);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp102, ((frost$io$OutputStream*) $tmp103));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$io$IndentedOutputStream** $tmp104 = &param0->out;
frost$io$IndentedOutputStream* $tmp105 = *$tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$io$IndentedOutputStream** $tmp106 = &param0->out;
*$tmp106 = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// line 66
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp107 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp107, ((frost$core$Object*) param2));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Weak** $tmp108 = &param0->hCodeGen;
frost$core$Weak* $tmp109 = *$tmp108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Weak** $tmp110 = &param0->hCodeGen;
*$tmp110 = $tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1) {

// line 70
frost$core$Weak** $tmp111 = &param0->hCodeGen;
frost$core$Weak* $tmp112 = *$tmp111;
frost$core$Object* $tmp113 = frost$core$Weak$get$R$frost$core$Weak$T($tmp112);
frost$core$String* $tmp114 = org$frostlang$frostc$HCodeGenerator$escapeName$frost$core$String$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp113), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
return $tmp114;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 74
frost$core$Weak** $tmp115 = &param0->hCodeGen;
frost$core$Weak* $tmp116 = *$tmp115;
frost$core$Object* $tmp117 = frost$core$Weak$get$R$frost$core$Weak$T($tmp116);
frost$core$String* $tmp118 = org$frostlang$frostc$HCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp117), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
return $tmp118;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 78
frost$core$Weak** $tmp119 = &param0->hCodeGen;
frost$core$Weak* $tmp120 = *$tmp119;
frost$core$Object* $tmp121 = frost$core$Weak$get$R$frost$core$Weak$T($tmp120);
frost$core$Int64 $tmp122 = org$frostlang$frostc$HCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(((org$frostlang$frostc$HCodeGenerator*) $tmp121), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
return $tmp122;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 82
org$frostlang$frostc$ClassDecl** $tmp123 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp124 = *$tmp123;
bool $tmp125 = param1 != $tmp124;
frost$core$Bit $tmp126 = frost$core$Bit$init$builtin_bit($tmp125);
return $tmp126;

}
void org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 86
*(&local0) = ((frost$core$Error*) NULL);
// line 87
frost$core$String** $tmp127 = &param1->name;
frost$core$String* $tmp128 = *$tmp127;
frost$core$Bit $tmp129 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp128, &$s130);
bool $tmp131 = $tmp129.value;
if ($tmp131) goto block3; else goto block4;
block3:;
// line 88
frost$core$Error* $tmp132 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// line 90
frost$core$Weak** $tmp133 = &param0->hCodeGen;
frost$core$Weak* $tmp134 = *$tmp133;
frost$core$Object* $tmp135 = frost$core$Weak$get$R$frost$core$Weak$T($tmp134);
frost$core$String* $tmp136 = org$frostlang$frostc$HCodeGenerator$getRelativePath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp135), param1, &$s137);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$String* $tmp138 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local1) = $tmp136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q($tmp135);
// line 91
frost$collections$HashSet** $tmp139 = &param0->imports;
frost$collections$HashSet* $tmp140 = *$tmp139;
frost$core$String* $tmp141 = *(&local1);
frost$core$Bit $tmp142 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp140, ((frost$collections$Key*) $tmp141));
frost$core$Bit $tmp143 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp142);
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block5; else goto block6;
block5:;
// line 92
frost$io$MemoryOutputStream** $tmp145 = &param0->includes;
frost$io$MemoryOutputStream* $tmp146 = *$tmp145;
frost$core$String* $tmp147 = *(&local1);
frost$core$String* $tmp148 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s149, $tmp147);
frost$core$String* $tmp150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp148, &$s151);
$fn153 $tmp152 = ($fn153) ((frost$io$OutputStream*) $tmp146)->$class->vtable[19];
frost$core$Error* $tmp154 = $tmp152(((frost$io$OutputStream*) $tmp146), $tmp150);
if ($tmp154 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local0) = $tmp154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$String* $tmp155 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// line 93
frost$collections$HashSet** $tmp156 = &param0->imports;
frost$collections$HashSet* $tmp157 = *$tmp156;
frost$core$String* $tmp158 = *(&local1);
frost$collections$HashSet$add$frost$collections$HashSet$T($tmp157, ((frost$collections$Key*) $tmp158));
goto block6;
block6:;
frost$core$String* $tmp159 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 97
frost$core$Int64 $tmp160 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s161, $tmp160);
abort(); // unreachable
block2:;
frost$core$Error* $tmp162 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 102
frost$core$Bit* $tmp163 = &param1->resolved;
frost$core$Bit $tmp164 = *$tmp163;
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp166 = (frost$core$Int64) {102};
frost$core$String* $tmp167 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s168, ((frost$core$Object*) param1));
frost$core$String* $tmp169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp167, &$s170);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s171, $tmp166, $tmp169);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
abort(); // unreachable
block1:;
// line 103
frost$core$Bit $tmp172 = org$frostlang$frostc$Type$get_isClass$R$frost$core$Bit(param1);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block3; else goto block4;
block3:;
// line 104
frost$core$Weak** $tmp174 = &param0->compiler;
frost$core$Weak* $tmp175 = *$tmp174;
frost$core$Object* $tmp176 = frost$core$Weak$get$R$frost$core$Weak$T($tmp175);
org$frostlang$frostc$ClassDecl* $tmp177 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp176), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
org$frostlang$frostc$ClassDecl* $tmp178 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
*(&local0) = $tmp177;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q($tmp176);
// line 105
org$frostlang$frostc$ClassDecl* $tmp179 = *(&local0);
frost$core$Bit $tmp180 = frost$core$Bit$init$builtin_bit($tmp179 != NULL);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp182 = (frost$core$Int64) {105};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s183, $tmp182);
abort(); // unreachable
block5:;
// line 106
org$frostlang$frostc$ClassDecl* $tmp184 = *(&local0);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, $tmp184);
org$frostlang$frostc$ClassDecl* $tmp185 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block4;
block4:;
// line 108
org$frostlang$frostc$Type$Kind* $tmp186 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp187 = *$tmp186;
frost$core$Int64 $tmp188 = $tmp187.$rawValue;
frost$core$Int64 $tmp189 = (frost$core$Int64) {16};
frost$core$Bit $tmp190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp192 = (frost$core$Int64) {15};
frost$core$Bit $tmp193 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp192);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block8; else goto block10;
block8:;
// line 110
org$frostlang$frostc$Type* $tmp195 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$String* $tmp196 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp195);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
return $tmp196;
block10:;
frost$core$Int64 $tmp197 = (frost$core$Int64) {18};
frost$core$Bit $tmp198 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp200 = (frost$core$Int64) {17};
frost$core$Bit $tmp201 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block11; else goto block13;
block11:;
// line 113
org$frostlang$frostc$Type* $tmp203 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$String* $tmp204 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp203);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
return $tmp204;
block13:;
frost$core$Int64 $tmp205 = (frost$core$Int64) {11};
frost$core$Bit $tmp206 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp205);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block14; else goto block7;
block14:;
// line 116
org$frostlang$frostc$FixedArray* $tmp208 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp209 = (frost$core$Int64) {0};
frost$core$Object* $tmp210 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp208, $tmp209);
frost$core$String** $tmp211 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp210))->name;
frost$core$String* $tmp212 = *$tmp211;
frost$core$Bit $tmp213 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp212, &$s214);
bool $tmp215 = $tmp213.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp210);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
if ($tmp215) goto block17; else goto block16;
block17:;
org$frostlang$frostc$FixedArray* $tmp216 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp217 = (frost$core$Int64) {1};
frost$core$Object* $tmp218 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp216, $tmp217);
frost$core$Bit $tmp219 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp218));
bool $tmp220 = $tmp219.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp218);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
if ($tmp220) goto block15; else goto block16;
block15:;
// line 117
org$frostlang$frostc$FixedArray* $tmp221 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp222 = (frost$core$Int64) {1};
frost$core$Object* $tmp223 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp221, $tmp222);
frost$core$String* $tmp224 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp223), ((org$frostlang$frostc$Type*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q($tmp223);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
return $tmp224;
block16:;
goto block7;
block7:;
// line 121
frost$core$Weak** $tmp225 = &param0->hCodeGen;
frost$core$Weak* $tmp226 = *$tmp225;
frost$core$Object* $tmp227 = frost$core$Weak$get$R$frost$core$Weak$T($tmp226);
frost$core$String* $tmp228 = org$frostlang$frostc$HCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(((org$frostlang$frostc$HCodeGenerator*) $tmp227), param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q($tmp227);
return $tmp228;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, org$frostlang$frostc$Type* param2) {

frost$core$String* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$Int64 local3;
frost$core$Error* local4 = NULL;
org$frostlang$frostc$Type$Kind* $tmp229 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp230 = *$tmp229;
org$frostlang$frostc$Type$Kind$wrapper* $tmp231;
$tmp231 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp231->value = $tmp230;
frost$core$Int64 $tmp232 = (frost$core$Int64) {15};
org$frostlang$frostc$Type$Kind $tmp233 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp232);
org$frostlang$frostc$Type$Kind$wrapper* $tmp234;
$tmp234 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp234->value = $tmp233;
ITable* $tmp235 = ((frost$core$Equatable*) $tmp231)->$class->itable;
while ($tmp235->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp235 = $tmp235->next;
}
$fn237 $tmp236 = $tmp235->methods[0];
frost$core$Bit $tmp238 = $tmp236(((frost$core$Equatable*) $tmp231), ((frost$core$Equatable*) $tmp234));
bool $tmp239 = $tmp238.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp234)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp231)));
if ($tmp239) goto block1; else goto block5;
block5:;
org$frostlang$frostc$Type$Kind* $tmp240 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp241 = *$tmp240;
org$frostlang$frostc$Type$Kind$wrapper* $tmp242;
$tmp242 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp242->value = $tmp241;
frost$core$Int64 $tmp243 = (frost$core$Int64) {16};
org$frostlang$frostc$Type$Kind $tmp244 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp243);
org$frostlang$frostc$Type$Kind$wrapper* $tmp245;
$tmp245 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp245->value = $tmp244;
ITable* $tmp246 = ((frost$core$Equatable*) $tmp242)->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
frost$core$Bit $tmp249 = $tmp247(((frost$core$Equatable*) $tmp242), ((frost$core$Equatable*) $tmp245));
bool $tmp250 = $tmp249.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp245)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp242)));
if ($tmp250) goto block1; else goto block4;
block4:;
org$frostlang$frostc$Type$Kind* $tmp251 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp252 = *$tmp251;
org$frostlang$frostc$Type$Kind$wrapper* $tmp253;
$tmp253 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp253->value = $tmp252;
frost$core$Int64 $tmp254 = (frost$core$Int64) {17};
org$frostlang$frostc$Type$Kind $tmp255 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp254);
org$frostlang$frostc$Type$Kind$wrapper* $tmp256;
$tmp256 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp256->value = $tmp255;
ITable* $tmp257 = ((frost$core$Equatable*) $tmp253)->$class->itable;
while ($tmp257->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp257 = $tmp257->next;
}
$fn259 $tmp258 = $tmp257->methods[0];
frost$core$Bit $tmp260 = $tmp258(((frost$core$Equatable*) $tmp253), ((frost$core$Equatable*) $tmp256));
bool $tmp261 = $tmp260.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp256)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp253)));
if ($tmp261) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type$Kind* $tmp262 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp263 = *$tmp262;
org$frostlang$frostc$Type$Kind$wrapper* $tmp264;
$tmp264 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp264->value = $tmp263;
frost$core$Int64 $tmp265 = (frost$core$Int64) {18};
org$frostlang$frostc$Type$Kind $tmp266 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp265);
org$frostlang$frostc$Type$Kind$wrapper* $tmp267;
$tmp267 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp267->value = $tmp266;
ITable* $tmp268 = ((frost$core$Equatable*) $tmp264)->$class->itable;
while ($tmp268->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp268 = $tmp268->next;
}
$fn270 $tmp269 = $tmp268->methods[0];
frost$core$Bit $tmp271 = $tmp269(((frost$core$Equatable*) $tmp264), ((frost$core$Equatable*) $tmp267));
bool $tmp272 = $tmp271.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp267)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp264)));
if ($tmp272) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp273 = (frost$core$Int64) {126};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s274, $tmp273, &$s275);
abort(); // unreachable
block1:;
// line 127
frost$core$Int64* $tmp276 = &param0->varCount;
frost$core$Int64 $tmp277 = *$tmp276;
frost$core$Int64 $tmp278 = (frost$core$Int64) {1};
int64_t $tmp279 = $tmp277.value;
int64_t $tmp280 = $tmp278.value;
int64_t $tmp281 = $tmp279 + $tmp280;
frost$core$Int64 $tmp282 = (frost$core$Int64) {$tmp281};
frost$core$Int64* $tmp283 = &param0->varCount;
*$tmp283 = $tmp282;
// line 128
frost$core$Int64* $tmp284 = &param0->varCount;
frost$core$Int64 $tmp285 = *$tmp284;
frost$core$Int64$wrapper* $tmp286;
$tmp286 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp286->value = $tmp285;
frost$core$String* $tmp287 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s288, ((frost$core$Object*) $tmp286));
frost$core$String* $tmp289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp287, &$s290);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$String* $tmp291 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local0) = $tmp289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// line 129
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp292 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp292, &$s293);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$MutableString* $tmp294 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local1) = $tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// line 130
frost$core$MutableString* $tmp295 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp296 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
org$frostlang$frostc$FixedArray* $tmp297 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
ITable* $tmp298 = ((frost$collections$CollectionView*) $tmp297)->$class->itable;
while ($tmp298->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp298 = $tmp298->next;
}
$fn300 $tmp299 = $tmp298->methods[0];
frost$core$Int64 $tmp301 = $tmp299(((frost$collections$CollectionView*) $tmp297));
frost$core$Int64 $tmp302 = (frost$core$Int64) {1};
int64_t $tmp303 = $tmp301.value;
int64_t $tmp304 = $tmp302.value;
int64_t $tmp305 = $tmp303 - $tmp304;
frost$core$Int64 $tmp306 = (frost$core$Int64) {$tmp305};
frost$core$Object* $tmp307 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp296, $tmp306);
frost$core$String* $tmp308 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp307));
frost$core$MutableString$append$frost$core$String($tmp295, $tmp308);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$core$Frost$unref$frost$core$Object$Q($tmp307);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// line 131
frost$core$MutableString* $tmp309 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp309, &$s310);
// line 132
frost$core$MutableString* $tmp311 = *(&local1);
frost$core$String* $tmp312 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp311, $tmp312);
// line 133
frost$core$MutableString* $tmp313 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp313, &$s314);
// line 134
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s315));
frost$core$String* $tmp316 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local2) = &$s317;
// line 135
frost$core$Bit $tmp318 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block6; else goto block7;
block6:;
// line 136
frost$core$MutableString* $tmp320 = *(&local1);
frost$core$String* $tmp321 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$MutableString$append$frost$core$String($tmp320, $tmp321);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// line 137
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s322));
frost$core$String* $tmp323 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local2) = &$s324;
goto block7;
block7:;
// line 139
frost$core$Int64 $tmp325 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp326 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
ITable* $tmp327 = ((frost$collections$CollectionView*) $tmp326)->$class->itable;
while ($tmp327->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[0];
frost$core$Int64 $tmp330 = $tmp328(((frost$collections$CollectionView*) $tmp326));
frost$core$Int64 $tmp331 = (frost$core$Int64) {1};
int64_t $tmp332 = $tmp330.value;
int64_t $tmp333 = $tmp331.value;
int64_t $tmp334 = $tmp332 - $tmp333;
frost$core$Int64 $tmp335 = (frost$core$Int64) {$tmp334};
frost$core$Bit $tmp336 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp337 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp325, $tmp335, $tmp336);
frost$core$Int64 $tmp338 = $tmp337.min;
*(&local3) = $tmp338;
frost$core$Int64 $tmp339 = $tmp337.max;
frost$core$Bit $tmp340 = $tmp337.inclusive;
bool $tmp341 = $tmp340.value;
frost$core$Int64 $tmp342 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp343 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp342);
if ($tmp341) goto block11; else goto block12;
block11:;
int64_t $tmp344 = $tmp338.value;
int64_t $tmp345 = $tmp339.value;
bool $tmp346 = $tmp344 <= $tmp345;
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block8; else goto block9;
block12:;
int64_t $tmp349 = $tmp338.value;
int64_t $tmp350 = $tmp339.value;
bool $tmp351 = $tmp349 < $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block8; else goto block9;
block8:;
// line 140
frost$core$MutableString* $tmp354 = *(&local1);
frost$core$String* $tmp355 = *(&local2);
frost$core$MutableString$append$frost$core$String($tmp354, $tmp355);
// line 141
frost$core$MutableString* $tmp356 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp357 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp358 = *(&local3);
frost$core$Object* $tmp359 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp357, $tmp358);
frost$core$String* $tmp360 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp359));
frost$core$MutableString$append$frost$core$String($tmp356, $tmp360);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$core$Frost$unref$frost$core$Object$Q($tmp359);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
// line 142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s361));
frost$core$String* $tmp362 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local2) = &$s363;
goto block10;
block10:;
frost$core$Int64 $tmp364 = *(&local3);
int64_t $tmp365 = $tmp339.value;
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365 - $tmp366;
frost$core$Int64 $tmp368 = (frost$core$Int64) {$tmp367};
frost$core$UInt64 $tmp369 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp368);
if ($tmp341) goto block14; else goto block15;
block14:;
uint64_t $tmp370 = $tmp369.value;
uint64_t $tmp371 = $tmp343.value;
bool $tmp372 = $tmp370 >= $tmp371;
frost$core$Bit $tmp373 = (frost$core$Bit) {$tmp372};
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block13; else goto block9;
block15:;
uint64_t $tmp375 = $tmp369.value;
uint64_t $tmp376 = $tmp343.value;
bool $tmp377 = $tmp375 > $tmp376;
frost$core$Bit $tmp378 = (frost$core$Bit) {$tmp377};
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block13; else goto block9;
block13:;
int64_t $tmp380 = $tmp364.value;
int64_t $tmp381 = $tmp342.value;
int64_t $tmp382 = $tmp380 + $tmp381;
frost$core$Int64 $tmp383 = (frost$core$Int64) {$tmp382};
*(&local3) = $tmp383;
goto block8;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
// line 144
frost$core$MutableString* $tmp384 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp384, &$s385);
// line 145
*(&local4) = ((frost$core$Error*) NULL);
// line 146
frost$io$MemoryOutputStream** $tmp386 = &param0->types;
frost$io$MemoryOutputStream* $tmp387 = *$tmp386;
frost$core$MutableString* $tmp388 = *(&local1);
frost$core$String* $tmp389 = frost$core$MutableString$finish$R$frost$core$String($tmp388);
$fn391 $tmp390 = ($fn391) ((frost$io$OutputStream*) $tmp387)->$class->vtable[19];
frost$core$Error* $tmp392 = $tmp390(((frost$io$OutputStream*) $tmp387), $tmp389);
if ($tmp392 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local4) = $tmp392;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
goto block17;
block16:;
// line 149
frost$core$Int64 $tmp393 = (frost$core$Int64) {149};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s394, $tmp393);
abort(); // unreachable
block17:;
frost$core$Error* $tmp395 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local4) = ((frost$core$Error*) NULL);
// line 151
frost$core$String* $tmp396 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$String* $tmp397 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local2) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp398 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp399 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
*(&local0) = ((frost$core$String*) NULL);
return $tmp396;

}
void org$frostlang$frostc$CCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 156
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp400 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp400, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Weak** $tmp401 = &param0->compiler;
frost$core$Weak* $tmp402 = *$tmp401;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$core$Weak** $tmp403 = &param0->compiler;
*$tmp403 = $tmp400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// line 157
frost$core$Weak** $tmp404 = &param0->hCodeGen;
frost$core$Weak* $tmp405 = *$tmp404;
frost$core$Object* $tmp406 = frost$core$Weak$get$R$frost$core$Weak$T($tmp405);
org$frostlang$frostc$HCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(((org$frostlang$frostc$HCodeGenerator*) $tmp406), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp406);
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0) {

// line 234
frost$core$Int64* $tmp407 = &param0->varCount;
frost$core$Int64 $tmp408 = *$tmp407;
frost$core$Int64 $tmp409 = (frost$core$Int64) {1};
int64_t $tmp410 = $tmp408.value;
int64_t $tmp411 = $tmp409.value;
int64_t $tmp412 = $tmp410 + $tmp411;
frost$core$Int64 $tmp413 = (frost$core$Int64) {$tmp412};
frost$core$Int64* $tmp414 = &param0->varCount;
*$tmp414 = $tmp413;
// line 235
frost$core$Int64* $tmp415 = &param0->varCount;
frost$core$Int64 $tmp416 = *$tmp415;
frost$core$Int64$wrapper* $tmp417;
$tmp417 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp417->value = $tmp416;
frost$core$String* $tmp418 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s419, ((frost$core$Object*) $tmp417));
frost$core$String* $tmp420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp418, &$s421);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
return $tmp420;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nextLabel$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0) {

// line 239
frost$core$Int64* $tmp422 = &param0->varCount;
frost$core$Int64 $tmp423 = *$tmp422;
frost$core$Int64 $tmp424 = (frost$core$Int64) {1};
int64_t $tmp425 = $tmp423.value;
int64_t $tmp426 = $tmp424.value;
int64_t $tmp427 = $tmp425 + $tmp426;
frost$core$Int64 $tmp428 = (frost$core$Int64) {$tmp427};
frost$core$Int64* $tmp429 = &param0->varCount;
*$tmp429 = $tmp428;
// line 240
frost$core$Int64* $tmp430 = &param0->varCount;
frost$core$Int64 $tmp431 = *$tmp430;
frost$core$Int64$wrapper* $tmp432;
$tmp432 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp432->value = $tmp431;
frost$core$String* $tmp433 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s434, ((frost$core$Object*) $tmp432));
frost$core$String* $tmp435 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp433, &$s436);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
return $tmp435;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 244
frost$core$Weak** $tmp437 = &param0->hCodeGen;
frost$core$Weak* $tmp438 = *$tmp437;
frost$core$Object* $tmp439 = frost$core$Weak$get$R$frost$core$Weak$T($tmp438);
org$frostlang$frostc$LLVMCodeGenerator** $tmp440 = &((org$frostlang$frostc$HCodeGenerator*) $tmp439)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp441 = *$tmp440;
frost$core$Int64 $tmp442 = org$frostlang$frostc$LLVMCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64($tmp441, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp439);
return $tmp442;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 248
frost$core$Weak** $tmp443 = &param0->hCodeGen;
frost$core$Weak* $tmp444 = *$tmp443;
frost$core$Object* $tmp445 = frost$core$Weak$get$R$frost$core$Weak$T($tmp444);
org$frostlang$frostc$LLVMCodeGenerator** $tmp446 = &((org$frostlang$frostc$HCodeGenerator*) $tmp445)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp447 = *$tmp446;
frost$core$Int64 $tmp448 = org$frostlang$frostc$LLVMCodeGenerator$alignment$org$frostlang$frostc$Type$R$frost$core$Int64($tmp447, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp445);
return $tmp448;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 252
frost$core$Weak** $tmp449 = &param0->hCodeGen;
frost$core$Weak* $tmp450 = *$tmp449;
frost$core$Object* $tmp451 = frost$core$Weak$get$R$frost$core$Weak$T($tmp450);
org$frostlang$frostc$LLVMCodeGenerator** $tmp452 = &((org$frostlang$frostc$HCodeGenerator*) $tmp451)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp453 = *$tmp452;
frost$core$Int64 $tmp454 = org$frostlang$frostc$LLVMCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64($tmp453, param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp451);
return $tmp454;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$Bit local1;
frost$core$Int64 local2;
org$frostlang$frostc$FieldDecl* local3 = NULL;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 256
frost$core$Weak** $tmp455 = &param0->compiler;
frost$core$Weak* $tmp456 = *$tmp455;
frost$core$Object* $tmp457 = frost$core$Weak$get$R$frost$core$Weak$T($tmp456);
org$frostlang$frostc$ClassDecl* $tmp458 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp457), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
org$frostlang$frostc$ClassDecl* $tmp459 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local0) = $tmp458;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q($tmp457);
// line 257
org$frostlang$frostc$ClassDecl* $tmp460 = *(&local0);
frost$core$Bit $tmp461 = frost$core$Bit$init$builtin_bit($tmp460 != NULL);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block1; else goto block2;
block1:;
frost$core$Weak** $tmp463 = &param0->compiler;
frost$core$Weak* $tmp464 = *$tmp463;
frost$core$Object* $tmp465 = frost$core$Weak$get$R$frost$core$Weak$T($tmp464);
org$frostlang$frostc$ClassDecl* $tmp466 = *(&local0);
frost$core$Bit $tmp467 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp465), $tmp466);
frost$core$Frost$unref$frost$core$Object$Q($tmp465);
*(&local1) = $tmp467;
goto block3;
block2:;
*(&local1) = $tmp461;
goto block3;
block3:;
frost$core$Bit $tmp468 = *(&local1);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp470 = (frost$core$Int64) {257};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s471, $tmp470);
abort(); // unreachable
block4:;
// line 258
org$frostlang$frostc$Type* $tmp472 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Int64 $tmp473 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp472);
*(&local2) = $tmp473;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
// line 259
frost$core$Weak** $tmp474 = &param0->compiler;
frost$core$Weak* $tmp475 = *$tmp474;
frost$core$Object* $tmp476 = frost$core$Weak$get$R$frost$core$Weak$T($tmp475);
org$frostlang$frostc$ClassDecl* $tmp477 = *(&local0);
frost$collections$ListView* $tmp478 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(((org$frostlang$frostc$Compiler*) $tmp476), $tmp477);
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
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp488 = $tmp482->$class->itable;
while ($tmp488->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp488 = $tmp488->next;
}
$fn490 $tmp489 = $tmp488->methods[1];
frost$core$Object* $tmp491 = $tmp489($tmp482);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp491)));
org$frostlang$frostc$FieldDecl* $tmp492 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) $tmp491);
// line 260
frost$core$Weak** $tmp493 = &param0->compiler;
frost$core$Weak* $tmp494 = *$tmp493;
frost$core$Object* $tmp495 = frost$core$Weak$get$R$frost$core$Weak$T($tmp494);
org$frostlang$frostc$FieldDecl* $tmp496 = *(&local3);
frost$core$Bit $tmp497 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp495), $tmp496);
frost$core$Frost$unref$frost$core$Object$Q($tmp495);
// line 261
org$frostlang$frostc$FieldDecl* $tmp498 = *(&local3);
org$frostlang$frostc$Type** $tmp499 = &$tmp498->type;
org$frostlang$frostc$Type* $tmp500 = *$tmp499;
org$frostlang$frostc$Type* $tmp501 = org$frostlang$frostc$Type$ChoiceData$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp502 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp500, $tmp501);
bool $tmp503 = $tmp502.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
if ($tmp503) goto block9; else goto block11;
block9:;
// line 263
frost$core$Int64 $tmp504 = *(&local2);
frost$core$Weak** $tmp505 = &param0->hCodeGen;
frost$core$Weak* $tmp506 = *$tmp505;
frost$core$Object* $tmp507 = frost$core$Weak$get$R$frost$core$Weak$T($tmp506);
org$frostlang$frostc$LLVMCodeGenerator** $tmp508 = &((org$frostlang$frostc$HCodeGenerator*) $tmp507)->llvmCodeGen;
org$frostlang$frostc$LLVMCodeGenerator* $tmp509 = *$tmp508;
org$frostlang$frostc$ClassDecl* $tmp510 = *(&local0);
frost$core$Int64 $tmp511 = org$frostlang$frostc$LLVMCodeGenerator$getChoiceDataSize$org$frostlang$frostc$ClassDecl$R$frost$core$Int64($tmp509, $tmp510);
int64_t $tmp512 = $tmp504.value;
int64_t $tmp513 = $tmp511.value;
int64_t $tmp514 = $tmp512 + $tmp513;
frost$core$Int64 $tmp515 = (frost$core$Int64) {$tmp514};
*(&local2) = $tmp515;
frost$core$Frost$unref$frost$core$Object$Q($tmp507);
goto block10;
block11:;
// line 1
// line 266
org$frostlang$frostc$FieldDecl* $tmp516 = *(&local3);
org$frostlang$frostc$Type** $tmp517 = &$tmp516->type;
org$frostlang$frostc$Type* $tmp518 = *$tmp517;
frost$core$Int64 $tmp519 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp518);
*(&local4) = $tmp519;
// line 267
frost$core$Int64 $tmp520 = *(&local2);
frost$core$Int64 $tmp521 = *(&local4);
frost$core$Int64 $tmp522 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp520, $tmp521);
*(&local5) = $tmp522;
// line 268
frost$core$Int64 $tmp523 = *(&local5);
frost$core$Int64 $tmp524 = (frost$core$Int64) {0};
int64_t $tmp525 = $tmp523.value;
int64_t $tmp526 = $tmp524.value;
bool $tmp527 = $tmp525 != $tmp526;
frost$core$Bit $tmp528 = (frost$core$Bit) {$tmp527};
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block12; else goto block13;
block12:;
// line 269
frost$core$Int64 $tmp530 = *(&local2);
frost$core$Int64 $tmp531 = *(&local4);
frost$core$Int64 $tmp532 = *(&local5);
int64_t $tmp533 = $tmp531.value;
int64_t $tmp534 = $tmp532.value;
int64_t $tmp535 = $tmp533 - $tmp534;
frost$core$Int64 $tmp536 = (frost$core$Int64) {$tmp535};
int64_t $tmp537 = $tmp530.value;
int64_t $tmp538 = $tmp536.value;
int64_t $tmp539 = $tmp537 + $tmp538;
frost$core$Int64 $tmp540 = (frost$core$Int64) {$tmp539};
*(&local2) = $tmp540;
goto block13;
block13:;
// line 271
frost$core$Int64 $tmp541 = *(&local2);
frost$core$Int64 $tmp542 = *(&local4);
frost$core$Int64 $tmp543 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp541, $tmp542);
frost$core$Int64 $tmp544 = (frost$core$Int64) {0};
frost$core$Bit $tmp545 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp543, $tmp544);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp547 = (frost$core$Int64) {271};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s548, $tmp547);
abort(); // unreachable
block14:;
// line 272
frost$core$Int64 $tmp549 = *(&local2);
frost$core$Int64 $tmp550 = *(&local4);
int64_t $tmp551 = $tmp549.value;
int64_t $tmp552 = $tmp550.value;
int64_t $tmp553 = $tmp551 + $tmp552;
frost$core$Int64 $tmp554 = (frost$core$Int64) {$tmp553};
*(&local2) = $tmp554;
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp491);
org$frostlang$frostc$FieldDecl* $tmp555 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local3) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q($tmp476);
// line 275
org$frostlang$frostc$Type$Kind* $tmp556 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp557 = *$tmp556;
org$frostlang$frostc$Type$Kind$wrapper* $tmp558;
$tmp558 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp558->value = $tmp557;
frost$core$Int64 $tmp559 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp560 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp559);
org$frostlang$frostc$Type$Kind$wrapper* $tmp561;
$tmp561 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp561->value = $tmp560;
ITable* $tmp562 = ((frost$core$Equatable*) $tmp558)->$class->itable;
while ($tmp562->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp562 = $tmp562->next;
}
$fn564 $tmp563 = $tmp562->methods[0];
frost$core$Bit $tmp565 = $tmp563(((frost$core$Equatable*) $tmp558), ((frost$core$Equatable*) $tmp561));
bool $tmp566 = $tmp565.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp561)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp558)));
if ($tmp566) goto block16; else goto block17;
block16:;
// line 276
frost$core$Int64 $tmp567 = *(&local2);
frost$core$Int64 $tmp568 = (frost$core$Int64) {1};
int64_t $tmp569 = $tmp567.value;
int64_t $tmp570 = $tmp568.value;
int64_t $tmp571 = $tmp569 + $tmp570;
frost$core$Int64 $tmp572 = (frost$core$Int64) {$tmp571};
*(&local2) = $tmp572;
goto block17;
block17:;
// line 278
frost$core$Int64 $tmp573 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp574 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp573;

}
void org$frostlang$frostc$CCodeGenerator$writeType$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 282
frost$collections$HashSet** $tmp575 = &param0->writtenTypes;
frost$collections$HashSet* $tmp576 = *$tmp575;
frost$core$String** $tmp577 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp578 = *$tmp577;
frost$core$Bit $tmp579 = frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit($tmp576, ((frost$collections$Key*) $tmp578));
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block1; else goto block2;
block1:;
// line 283
return;
block2:;
return;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$typeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 288
frost$core$String** $tmp581 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp582 = *$tmp581;
frost$core$String* $tmp583 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp582);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
return $tmp583;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 292
frost$core$Weak** $tmp584 = &param0->compiler;
frost$core$Weak* $tmp585 = *$tmp584;
frost$core$Object* $tmp586 = frost$core$Weak$get$R$frost$core$Weak$T($tmp585);
org$frostlang$frostc$ClassDecl* $tmp587 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp586), param1);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
org$frostlang$frostc$ClassDecl* $tmp588 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local0) = $tmp587;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q($tmp586);
// line 293
org$frostlang$frostc$ClassDecl* $tmp589 = *(&local0);
frost$core$Bit $tmp590 = frost$core$Bit$init$builtin_bit($tmp589 != NULL);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp592 = (frost$core$Int64) {293};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s593, $tmp592);
abort(); // unreachable
block1:;
// line 294
org$frostlang$frostc$ClassDecl* $tmp594 = *(&local0);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, $tmp594);
// line 295
org$frostlang$frostc$Type$Kind* $tmp595 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp596 = *$tmp595;
org$frostlang$frostc$Type$Kind$wrapper* $tmp597;
$tmp597 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp597->value = $tmp596;
frost$core$Int64 $tmp598 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp599 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp598);
org$frostlang$frostc$Type$Kind$wrapper* $tmp600;
$tmp600 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp600->value = $tmp599;
ITable* $tmp601 = ((frost$core$Equatable*) $tmp597)->$class->itable;
while ($tmp601->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp601 = $tmp601->next;
}
$fn603 $tmp602 = $tmp601->methods[0];
frost$core$Bit $tmp604 = $tmp602(((frost$core$Equatable*) $tmp597), ((frost$core$Equatable*) $tmp600));
bool $tmp605 = $tmp604.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp600)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp597)));
if ($tmp605) goto block3; else goto block4;
block3:;
// line 296
org$frostlang$frostc$FixedArray* $tmp606 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp607 = (frost$core$Int64) {0};
frost$core$Object* $tmp608 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp606, $tmp607);
frost$core$String* $tmp609 = org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp608));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
frost$core$Frost$unref$frost$core$Object$Q($tmp608);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
org$frostlang$frostc$ClassDecl* $tmp610 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp609;
block4:;
// line 298
frost$core$String** $tmp611 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp612 = *$tmp611;
frost$core$String* $tmp613 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp612);
frost$core$String* $tmp614 = frost$core$String$get_asString$R$frost$core$String($tmp613);
frost$core$String* $tmp615 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp614, &$s616);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
org$frostlang$frostc$ClassDecl* $tmp617 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp615;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 302
frost$core$String* $tmp618 = org$frostlang$frostc$CCodeGenerator$wrapperTypeName$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp619 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp618, &$s620);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
return $tmp619;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
// line 306
frost$core$Weak** $tmp621 = &param0->compiler;
frost$core$Weak* $tmp622 = *$tmp621;
frost$core$Object* $tmp623 = frost$core$Weak$get$R$frost$core$Weak$T($tmp622);
org$frostlang$frostc$Type* $tmp624 = org$frostlang$frostc$Compiler$inheritedType$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp623), param1);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
org$frostlang$frostc$Type* $tmp625 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
*(&local0) = $tmp624;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Frost$unref$frost$core$Object$Q($tmp623);
// line 307
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp626 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp626);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$MutableString* $tmp627 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local1) = $tmp626;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
// line 308
frost$core$MutableString* $tmp628 = *(&local1);
org$frostlang$frostc$Type* $tmp629 = *(&local0);
org$frostlang$frostc$Type* $tmp630 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp629);
frost$core$String* $tmp631 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp630);
frost$core$MutableString$append$frost$core$String($tmp628, $tmp631);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
// line 309
frost$core$MutableString* $tmp632 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp632, &$s633);
// line 310
frost$core$Bit $tmp634 = org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(param1);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp636 = (frost$core$Int64) {310};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s637, $tmp636);
abort(); // unreachable
block1:;
// line 311
frost$core$MutableString* $tmp638 = *(&local1);
frost$core$Weak** $tmp639 = &param1->owner;
frost$core$Weak* $tmp640 = *$tmp639;
frost$core$Object* $tmp641 = frost$core$Weak$get$R$frost$core$Weak$T($tmp640);
frost$core$String** $tmp642 = &((org$frostlang$frostc$ClassDecl*) $tmp641)->name;
frost$core$String* $tmp643 = *$tmp642;
frost$core$String* $tmp644 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp643);
frost$core$String* $tmp645 = frost$core$String$get_asString$R$frost$core$String($tmp644);
frost$core$String* $tmp646 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp645, &$s647);
frost$core$MutableString$append$frost$core$String($tmp638, $tmp646);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
frost$core$Frost$unref$frost$core$Object$Q($tmp641);
// line 312
frost$core$Weak** $tmp648 = &param0->compiler;
frost$core$Weak* $tmp649 = *$tmp648;
frost$core$Object* $tmp650 = frost$core$Weak$get$R$frost$core$Weak$T($tmp649);
frost$core$Weak** $tmp651 = &param1->owner;
frost$core$Weak* $tmp652 = *$tmp651;
frost$core$Object* $tmp653 = frost$core$Weak$get$R$frost$core$Weak$T($tmp652);
frost$core$Bit $tmp654 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp650), ((org$frostlang$frostc$ClassDecl*) $tmp653));
bool $tmp655 = $tmp654.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp653);
frost$core$Frost$unref$frost$core$Object$Q($tmp650);
if ($tmp655) goto block3; else goto block4;
block3:;
// line 313
frost$core$MutableString* $tmp656 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp656, &$s657);
goto block4;
block4:;
// line 315
frost$core$MutableString* $tmp658 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp658, &$s659);
// line 316
frost$core$Int64 $tmp660 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp661 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp662 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp661);
ITable* $tmp663 = ((frost$collections$CollectionView*) $tmp662)->$class->itable;
while ($tmp663->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp663 = $tmp663->next;
}
$fn665 $tmp664 = $tmp663->methods[0];
frost$core$Int64 $tmp666 = $tmp664(((frost$collections$CollectionView*) $tmp662));
frost$core$Int64 $tmp667 = (frost$core$Int64) {1};
int64_t $tmp668 = $tmp666.value;
int64_t $tmp669 = $tmp667.value;
int64_t $tmp670 = $tmp668 - $tmp669;
frost$core$Int64 $tmp671 = (frost$core$Int64) {$tmp670};
frost$core$Bit $tmp672 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp673 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp660, $tmp671, $tmp672);
frost$core$Int64 $tmp674 = $tmp673.min;
*(&local2) = $tmp674;
frost$core$Int64 $tmp675 = $tmp673.max;
frost$core$Bit $tmp676 = $tmp673.inclusive;
bool $tmp677 = $tmp676.value;
frost$core$Int64 $tmp678 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp679 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp678);
if ($tmp677) goto block8; else goto block9;
block8:;
int64_t $tmp680 = $tmp674.value;
int64_t $tmp681 = $tmp675.value;
bool $tmp682 = $tmp680 <= $tmp681;
frost$core$Bit $tmp683 = (frost$core$Bit) {$tmp682};
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block5; else goto block6;
block9:;
int64_t $tmp685 = $tmp674.value;
int64_t $tmp686 = $tmp675.value;
bool $tmp687 = $tmp685 < $tmp686;
frost$core$Bit $tmp688 = (frost$core$Bit) {$tmp687};
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block5; else goto block6;
block5:;
// line 317
frost$core$MutableString* $tmp690 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp690, &$s691);
// line 318
frost$core$MutableString* $tmp692 = *(&local1);
org$frostlang$frostc$Type* $tmp693 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp694 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp693);
frost$core$Int64 $tmp695 = *(&local2);
frost$core$Object* $tmp696 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp694, $tmp695);
frost$core$String* $tmp697 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp696));
frost$core$MutableString$append$frost$core$String($tmp692, $tmp697);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
frost$core$Frost$unref$frost$core$Object$Q($tmp696);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
goto block7;
block7:;
frost$core$Int64 $tmp698 = *(&local2);
int64_t $tmp699 = $tmp675.value;
int64_t $tmp700 = $tmp698.value;
int64_t $tmp701 = $tmp699 - $tmp700;
frost$core$Int64 $tmp702 = (frost$core$Int64) {$tmp701};
frost$core$UInt64 $tmp703 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp702);
if ($tmp677) goto block11; else goto block12;
block11:;
uint64_t $tmp704 = $tmp703.value;
uint64_t $tmp705 = $tmp679.value;
bool $tmp706 = $tmp704 >= $tmp705;
frost$core$Bit $tmp707 = (frost$core$Bit) {$tmp706};
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block10; else goto block6;
block12:;
uint64_t $tmp709 = $tmp703.value;
uint64_t $tmp710 = $tmp679.value;
bool $tmp711 = $tmp709 > $tmp710;
frost$core$Bit $tmp712 = (frost$core$Bit) {$tmp711};
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block10; else goto block6;
block10:;
int64_t $tmp714 = $tmp698.value;
int64_t $tmp715 = $tmp678.value;
int64_t $tmp716 = $tmp714 + $tmp715;
frost$core$Int64 $tmp717 = (frost$core$Int64) {$tmp716};
*(&local2) = $tmp717;
goto block5;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// line 320
frost$core$MutableString* $tmp718 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp718, &$s719);
// line 321
frost$core$MutableString* $tmp720 = *(&local1);
frost$core$String* $tmp721 = frost$core$MutableString$finish$R$frost$core$String($tmp720);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$MutableString* $tmp722 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local1) = ((frost$core$MutableString*) NULL);
org$frostlang$frostc$Type* $tmp723 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp721;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 325
org$frostlang$frostc$Type$Kind* $tmp724 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp725 = *$tmp724;
org$frostlang$frostc$Type$Kind$wrapper* $tmp726;
$tmp726 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp726->value = $tmp725;
frost$core$Int64 $tmp727 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp728 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp727);
org$frostlang$frostc$Type$Kind$wrapper* $tmp729;
$tmp729 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp729->value = $tmp728;
ITable* $tmp730 = ((frost$core$Equatable*) $tmp726)->$class->itable;
while ($tmp730->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp730 = $tmp730->next;
}
$fn732 $tmp731 = $tmp730->methods[0];
frost$core$Bit $tmp733 = $tmp731(((frost$core$Equatable*) $tmp726), ((frost$core$Equatable*) $tmp729));
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp735 = (frost$core$Int64) {325};
frost$core$String* $tmp736 = org$frostlang$frostc$Type$get_asString$R$frost$core$String(param1);
frost$core$String* $tmp737 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp736, &$s738);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s739, $tmp735, $tmp737);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp729)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp726)));
// line 326
org$frostlang$frostc$FixedArray* $tmp740 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp741 = (frost$core$Int64) {0};
frost$core$Object* $tmp742 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp740, $tmp741);
frost$core$String* $tmp743 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp742));
frost$core$String* $tmp744 = frost$core$String$get_asString$R$frost$core$String($tmp743);
frost$core$String* $tmp745 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp744, &$s746);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q($tmp742);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
return $tmp745;

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
// line 330
frost$core$Weak** $tmp747 = &param0->compiler;
frost$core$Weak* $tmp748 = *$tmp747;
frost$core$Object* $tmp749 = frost$core$Weak$get$R$frost$core$Weak$T($tmp748);
org$frostlang$frostc$Type** $tmp750 = &param1->type;
org$frostlang$frostc$Type* $tmp751 = *$tmp750;
frost$collections$HashSet* $tmp752 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Compiler*) $tmp749), $tmp751);
*(&local0) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$collections$HashSet* $tmp753 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local0) = $tmp752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$Frost$unref$frost$core$Object$Q($tmp749);
// line 331
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s754));
frost$core$String* $tmp755 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local1) = &$s756;
// line 332
frost$collections$HashSet* $tmp757 = *(&local0);
ITable* $tmp758 = ((frost$collections$Iterable*) $tmp757)->$class->itable;
while ($tmp758->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp758 = $tmp758->next;
}
$fn760 $tmp759 = $tmp758->methods[0];
frost$collections$Iterator* $tmp761 = $tmp759(((frost$collections$Iterable*) $tmp757));
goto block1;
block1:;
ITable* $tmp762 = $tmp761->$class->itable;
while ($tmp762->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp762 = $tmp762->next;
}
$fn764 $tmp763 = $tmp762->methods[0];
frost$core$Bit $tmp765 = $tmp763($tmp761);
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp767 = $tmp761->$class->itable;
while ($tmp767->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp767 = $tmp767->next;
}
$fn769 $tmp768 = $tmp767->methods[1];
frost$core$Object* $tmp770 = $tmp768($tmp761);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp770)));
org$frostlang$frostc$Type* $tmp771 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local2) = ((org$frostlang$frostc$Type*) $tmp770);
// line 333
frost$core$Weak** $tmp772 = &param0->compiler;
frost$core$Weak* $tmp773 = *$tmp772;
frost$core$Object* $tmp774 = frost$core$Weak$get$R$frost$core$Weak$T($tmp773);
org$frostlang$frostc$Type* $tmp775 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp776 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp774), $tmp775);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
org$frostlang$frostc$ClassDecl* $tmp777 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
*(&local3) = $tmp776;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q($tmp774);
// line 334
org$frostlang$frostc$ClassDecl* $tmp778 = *(&local3);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp779 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp778);
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp780 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local4) = $tmp779;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// line 335
frost$core$Weak** $tmp781 = &param0->compiler;
frost$core$Weak* $tmp782 = *$tmp781;
frost$core$Object* $tmp783 = frost$core$Weak$get$R$frost$core$Weak$T($tmp782);
org$frostlang$frostc$Type* $tmp784 = *(&local2);
frost$collections$ListView* $tmp785 = org$frostlang$frostc$Compiler$interfaceMethods$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp783), param1, $tmp784);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$collections$ListView* $tmp786 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
*(&local5) = $tmp785;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q($tmp783);
// line 336
frost$core$String** $tmp787 = &param1->name;
frost$core$String* $tmp788 = *$tmp787;
frost$core$String* $tmp789 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp788);
frost$core$String* $tmp790 = frost$core$String$get_asString$R$frost$core$String($tmp789);
frost$core$String* $tmp791 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp790, &$s792);
org$frostlang$frostc$ClassDecl* $tmp793 = *(&local3);
frost$core$String** $tmp794 = &$tmp793->name;
frost$core$String* $tmp795 = *$tmp794;
frost$core$String* $tmp796 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp795);
frost$core$String* $tmp797 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp791, $tmp796);
frost$core$String* $tmp798 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp797, &$s799);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$String* $tmp800 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local6) = $tmp798;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
// line 337
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp801 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp802 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp803 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp802);
frost$core$String* $tmp804 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s805, $tmp803);
frost$core$String* $tmp806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp804, &$s807);
frost$collections$ListView* $tmp808 = *(&local5);
ITable* $tmp809 = ((frost$collections$CollectionView*) $tmp808)->$class->itable;
while ($tmp809->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp809 = $tmp809->next;
}
$fn811 $tmp810 = $tmp809->methods[0];
frost$core$Int64 $tmp812 = $tmp810(((frost$collections$CollectionView*) $tmp808));
frost$core$Int64$wrapper* $tmp813;
$tmp813 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp813->value = $tmp812;
frost$core$String* $tmp814 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s815, ((frost$core$Object*) $tmp813));
frost$core$String* $tmp816 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp814, &$s817);
frost$core$String* $tmp818 = *(&local6);
frost$core$String* $tmp819 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp816, $tmp818);
frost$core$String* $tmp820 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp819, &$s821);
frost$core$String* $tmp822 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp806, $tmp820);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp823 = *(&local4);
frost$core$String** $tmp824 = &$tmp823->name;
frost$core$String* $tmp825 = *$tmp824;
frost$core$String* $tmp826 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s827, $tmp825);
frost$core$String* $tmp828 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp826, &$s829);
frost$core$String* $tmp830 = *(&local1);
frost$core$String* $tmp831 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp828, $tmp830);
frost$core$String* $tmp832 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp831, &$s833);
frost$core$String* $tmp834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp822, $tmp832);
frost$core$MutableString$init$frost$core$String($tmp801, $tmp834);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
frost$core$MutableString* $tmp835 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local7) = $tmp801;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
// line 340
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s836));
frost$core$String* $tmp837 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local8) = &$s838;
// line 341
frost$collections$ListView* $tmp839 = *(&local5);
ITable* $tmp840 = ((frost$collections$Iterable*) $tmp839)->$class->itable;
while ($tmp840->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp840 = $tmp840->next;
}
$fn842 $tmp841 = $tmp840->methods[0];
frost$collections$Iterator* $tmp843 = $tmp841(((frost$collections$Iterable*) $tmp839));
goto block4;
block4:;
ITable* $tmp844 = $tmp843->$class->itable;
while ($tmp844->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp844 = $tmp844->next;
}
$fn846 $tmp845 = $tmp844->methods[0];
frost$core$Bit $tmp847 = $tmp845($tmp843);
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block6; else goto block5;
block5:;
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp849 = $tmp843->$class->itable;
while ($tmp849->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp849 = $tmp849->next;
}
$fn851 $tmp850 = $tmp849->methods[1];
frost$core$Object* $tmp852 = $tmp850($tmp843);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp852)));
org$frostlang$frostc$MethodDecl* $tmp853 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) $tmp852);
// line 342
frost$core$MutableString* $tmp854 = *(&local7);
frost$core$String* $tmp855 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp854, $tmp855);
// line 343
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s856));
frost$core$String* $tmp857 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local8) = &$s858;
// line 344
org$frostlang$frostc$MethodDecl* $tmp859 = *(&local9);
org$frostlang$frostc$Annotations** $tmp860 = &$tmp859->annotations;
org$frostlang$frostc$Annotations* $tmp861 = *$tmp860;
frost$core$Bit $tmp862 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp861);
bool $tmp863 = $tmp862.value;
if ($tmp863) goto block7; else goto block9;
block7:;
// line 345
frost$core$MutableString* $tmp864 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp864, &$s865);
goto block8;
block9:;
// line 1
// line 348
frost$core$MutableString* $tmp866 = *(&local7);
org$frostlang$frostc$MethodDecl* $tmp867 = *(&local9);
frost$core$String* $tmp868 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp867);
frost$core$MutableString$append$frost$core$String($tmp866, $tmp868);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
goto block8;
block8:;
frost$core$Frost$unref$frost$core$Object$Q($tmp852);
org$frostlang$frostc$MethodDecl* $tmp869 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
// line 351
frost$core$MutableString* $tmp870 = *(&local7);
frost$core$MutableString$append$frost$core$String($tmp870, &$s871);
// line 352
*(&local10) = ((frost$core$Error*) NULL);
// line 353
frost$io$MemoryOutputStream** $tmp872 = &param0->types;
frost$io$MemoryOutputStream* $tmp873 = *$tmp872;
frost$core$MutableString* $tmp874 = *(&local7);
frost$core$String* $tmp875 = frost$core$MutableString$finish$R$frost$core$String($tmp874);
$fn877 $tmp876 = ($fn877) ((frost$io$OutputStream*) $tmp873)->$class->vtable[19];
frost$core$Error* $tmp878 = $tmp876(((frost$io$OutputStream*) $tmp873), $tmp875);
if ($tmp878 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local10) = $tmp878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
goto block11;
block10:;
// line 356
frost$core$Int64 $tmp879 = (frost$core$Int64) {356};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s880, $tmp879);
abort(); // unreachable
block11:;
frost$core$Error* $tmp881 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local10) = ((frost$core$Error*) NULL);
// line 358
frost$core$String* $tmp882 = *(&local6);
frost$core$String* $tmp883 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s884, $tmp882);
frost$core$String* $tmp885 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp883, &$s886);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
frost$core$String* $tmp887 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp887));
*(&local1) = $tmp885;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$String* $tmp888 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
*(&local8) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp889 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp890 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp891 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp892 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp893 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp770);
org$frostlang$frostc$Type* $tmp894 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
// line 360
frost$core$String* $tmp895 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$core$String* $tmp896 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
*(&local1) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp897 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
*(&local0) = ((frost$collections$HashSet*) NULL);
return $tmp895;

}
org$frostlang$frostc$CCodeGenerator$MethodShim* org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$Type* param2) {

org$frostlang$frostc$CCodeGenerator$MethodShim* local0 = NULL;
frost$core$Error* local1 = NULL;
org$frostlang$frostc$CCodeGenerator$MethodShim* local2 = NULL;
frost$io$IndentedOutputStream* local3 = NULL;
frost$io$MemoryOutputStream* local4 = NULL;
frost$core$Bit local5;
org$frostlang$frostc$Type* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$MutableString* local8 = NULL;
frost$core$String* local9 = NULL;
frost$core$Int64 local10;
frost$core$String* local11 = NULL;
frost$io$MemoryOutputStream* local12 = NULL;
frost$collections$Array* local13 = NULL;
frost$core$Int64 local14;
frost$core$String* local15 = NULL;
org$frostlang$frostc$Type* local16 = NULL;
frost$core$String* local17 = NULL;
frost$core$Int64 local18;
org$frostlang$frostc$CCodeGenerator$MethodShim* local19 = NULL;
frost$io$IndentedOutputStream** $tmp898 = &param0->out;
frost$io$IndentedOutputStream* $tmp899 = *$tmp898;
// line 365
*(&local1) = ((frost$core$Error*) NULL);
// line 366
frost$collections$IdentityMap** $tmp900 = &param0->methodShims;
frost$collections$IdentityMap* $tmp901 = *$tmp900;
frost$core$Object* $tmp902 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp901, ((frost$core$Object*) param1));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$MethodShim*) $tmp902)));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp903 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) $tmp902);
frost$core$Frost$unref$frost$core$Object$Q($tmp902);
// line 367
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp904 = *(&local2);
frost$core$Bit $tmp905 = frost$core$Bit$init$builtin_bit($tmp904 != NULL);
bool $tmp906 = $tmp905.value;
if ($tmp906) goto block6; else goto block7;
block6:;
// line 368
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp907 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp908 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Error* $tmp909 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
*(&local1) = ((frost$core$Error*) NULL);
*(&local0) = $tmp907;
goto block1;
block7:;
// line 370
frost$io$IndentedOutputStream** $tmp910 = &param0->out;
frost$io$IndentedOutputStream* $tmp911 = *$tmp910;
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$io$IndentedOutputStream* $tmp912 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
*(&local3) = $tmp911;
// line 371
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp913 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp913);
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
frost$io$MemoryOutputStream* $tmp914 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local4) = $tmp913;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// line 372
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp915 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp916 = *(&local4);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp915, ((frost$io$OutputStream*) $tmp916));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$io$IndentedOutputStream** $tmp917 = &param0->out;
frost$io$IndentedOutputStream* $tmp918 = *$tmp917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
frost$io$IndentedOutputStream** $tmp919 = &param0->out;
*$tmp919 = $tmp915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// line 373
frost$core$Bit $tmp920 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(param2);
bool $tmp921 = $tmp920.value;
if ($tmp921) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp922 = (frost$core$Int64) {373};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s923, $tmp922);
abort(); // unreachable
block8:;
// line 374
org$frostlang$frostc$FixedArray* $tmp924 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
ITable* $tmp925 = ((frost$collections$CollectionView*) $tmp924)->$class->itable;
while ($tmp925->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp925 = $tmp925->next;
}
$fn927 $tmp926 = $tmp925->methods[0];
frost$core$Int64 $tmp928 = $tmp926(((frost$collections$CollectionView*) $tmp924));
frost$collections$Array** $tmp929 = &param1->parameters;
frost$collections$Array* $tmp930 = *$tmp929;
ITable* $tmp931 = ((frost$collections$CollectionView*) $tmp930)->$class->itable;
while ($tmp931->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp931 = $tmp931->next;
}
$fn933 $tmp932 = $tmp931->methods[0];
frost$core$Int64 $tmp934 = $tmp932(((frost$collections$CollectionView*) $tmp930));
frost$core$Int64 $tmp935 = (frost$core$Int64) {2};
int64_t $tmp936 = $tmp934.value;
int64_t $tmp937 = $tmp935.value;
int64_t $tmp938 = $tmp936 + $tmp937;
frost$core$Int64 $tmp939 = (frost$core$Int64) {$tmp938};
frost$core$Bit $tmp940 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp928, $tmp939);
bool $tmp941 = $tmp940.value;
if ($tmp941) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp942 = (frost$core$Int64) {374};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s943, $tmp942);
abort(); // unreachable
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
// line 375
frost$core$Bit $tmp944 = org$frostlang$frostc$MethodDecl$isInstance$R$frost$core$Bit(param1);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp946 = (frost$core$Int64) {375};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s947, $tmp946);
abort(); // unreachable
block12:;
// line 376
frost$core$Bit $tmp948 = org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param1);
*(&local5) = $tmp948;
// line 377
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
// line 378
frost$core$Bit $tmp949 = *(&local5);
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block14; else goto block16;
block14:;
// line 379
org$frostlang$frostc$Type* $tmp951 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
org$frostlang$frostc$Type* $tmp952 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
*(&local6) = $tmp951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
goto block15;
block16:;
// line 1
// line 382
org$frostlang$frostc$Type* $tmp953 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
org$frostlang$frostc$Type* $tmp954 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local6) = $tmp953;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
goto block15;
block15:;
// line 384
frost$core$String* $tmp955 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp956 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp955, &$s957);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
frost$core$String* $tmp958 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp958));
*(&local7) = $tmp956;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// line 385
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp959 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp960 = *(&local6);
frost$core$String* $tmp961 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp960);
frost$core$MutableString$init$frost$core$String($tmp959, $tmp961);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
frost$core$MutableString* $tmp962 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local8) = $tmp959;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
// line 386
frost$io$IndentedOutputStream** $tmp963 = &param0->out;
frost$io$IndentedOutputStream* $tmp964 = *$tmp963;
org$frostlang$frostc$Type* $tmp965 = *(&local6);
frost$core$String* $tmp966 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp965);
frost$core$String* $tmp967 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s968, $tmp966);
frost$core$String* $tmp969 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp967, &$s970);
frost$core$String* $tmp971 = *(&local7);
frost$core$String* $tmp972 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp969, $tmp971);
frost$core$String* $tmp973 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp972, &$s974);
$fn976 $tmp975 = ($fn976) ((frost$io$OutputStream*) $tmp964)->$class->vtable[17];
frost$core$Error* $tmp977 = $tmp975(((frost$io$OutputStream*) $tmp964), $tmp973);
if ($tmp977 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local1) = $tmp977;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$MutableString* $tmp978 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp979 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp980 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp981 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp982 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp983 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp967));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
// line 387
frost$core$MutableString* $tmp984 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp984, &$s985);
// line 388
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s986));
frost$core$String* $tmp987 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
*(&local9) = &$s988;
// line 389
frost$core$Bit $tmp989 = *(&local5);
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block19; else goto block20;
block19:;
// line 390
frost$io$IndentedOutputStream** $tmp991 = &param0->out;
frost$io$IndentedOutputStream* $tmp992 = *$tmp991;
org$frostlang$frostc$Type* $tmp993 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(param2);
frost$core$String* $tmp994 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp993);
frost$core$String* $tmp995 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp994, &$s996);
$fn998 $tmp997 = ($fn998) ((frost$io$OutputStream*) $tmp992)->$class->vtable[17];
frost$core$Error* $tmp999 = $tmp997(((frost$io$OutputStream*) $tmp992), $tmp995);
if ($tmp999 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
*(&local1) = $tmp999;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
frost$core$String* $tmp1000 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1001 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1002 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1003 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1004 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1005 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1006 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
// line 391
frost$core$MutableString* $tmp1007 = *(&local8);
org$frostlang$frostc$Type* $tmp1008 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(param2);
frost$core$String* $tmp1009 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1008);
frost$core$MutableString$append$frost$core$String($tmp1007, $tmp1009);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
// line 392
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1010));
frost$core$String* $tmp1011 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
*(&local9) = &$s1012;
goto block20;
block20:;
// line 394
frost$core$Int64 $tmp1013 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp1014 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
ITable* $tmp1015 = ((frost$collections$CollectionView*) $tmp1014)->$class->itable;
while ($tmp1015->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1015 = $tmp1015->next;
}
$fn1017 $tmp1016 = $tmp1015->methods[0];
frost$core$Int64 $tmp1018 = $tmp1016(((frost$collections$CollectionView*) $tmp1014));
frost$core$Int64 $tmp1019 = (frost$core$Int64) {1};
int64_t $tmp1020 = $tmp1018.value;
int64_t $tmp1021 = $tmp1019.value;
int64_t $tmp1022 = $tmp1020 - $tmp1021;
frost$core$Int64 $tmp1023 = (frost$core$Int64) {$tmp1022};
frost$core$Bit $tmp1024 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1025 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1013, $tmp1023, $tmp1024);
frost$core$Int64 $tmp1026 = $tmp1025.min;
*(&local10) = $tmp1026;
frost$core$Int64 $tmp1027 = $tmp1025.max;
frost$core$Bit $tmp1028 = $tmp1025.inclusive;
bool $tmp1029 = $tmp1028.value;
frost$core$Int64 $tmp1030 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1031 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1030);
if ($tmp1029) goto block26; else goto block27;
block26:;
int64_t $tmp1032 = $tmp1026.value;
int64_t $tmp1033 = $tmp1027.value;
bool $tmp1034 = $tmp1032 <= $tmp1033;
frost$core$Bit $tmp1035 = (frost$core$Bit) {$tmp1034};
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block23; else goto block24;
block27:;
int64_t $tmp1037 = $tmp1026.value;
int64_t $tmp1038 = $tmp1027.value;
bool $tmp1039 = $tmp1037 < $tmp1038;
frost$core$Bit $tmp1040 = (frost$core$Bit) {$tmp1039};
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block23; else goto block24;
block23:;
// line 395
org$frostlang$frostc$FixedArray* $tmp1042 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1043 = *(&local10);
frost$core$Object* $tmp1044 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1042, $tmp1043);
frost$core$String* $tmp1045 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp1044));
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
frost$core$String* $tmp1046 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
*(&local11) = $tmp1045;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
frost$core$Frost$unref$frost$core$Object$Q($tmp1044);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
// line 396
frost$core$MutableString* $tmp1047 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1047, &$s1048);
// line 397
frost$core$MutableString* $tmp1049 = *(&local8);
frost$core$String* $tmp1050 = *(&local11);
frost$core$MutableString$append$frost$core$String($tmp1049, $tmp1050);
// line 398
frost$io$IndentedOutputStream** $tmp1051 = &param0->out;
frost$io$IndentedOutputStream* $tmp1052 = *$tmp1051;
frost$core$String* $tmp1053 = *(&local9);
frost$core$String* $tmp1054 = frost$core$String$get_asString$R$frost$core$String($tmp1053);
frost$core$String* $tmp1055 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1054, &$s1056);
frost$core$String* $tmp1057 = *(&local11);
frost$core$String* $tmp1058 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1055, $tmp1057);
frost$core$String* $tmp1059 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1058, &$s1060);
frost$core$Int64 $tmp1061 = *(&local10);
frost$core$Int64$wrapper* $tmp1062;
$tmp1062 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1062->value = $tmp1061;
frost$core$String* $tmp1063 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1059, ((frost$core$Object*) $tmp1062));
frost$core$String* $tmp1064 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1063, &$s1065);
$fn1067 $tmp1066 = ($fn1067) ((frost$io$OutputStream*) $tmp1052)->$class->vtable[17];
frost$core$Error* $tmp1068 = $tmp1066(((frost$io$OutputStream*) $tmp1052), $tmp1064);
if ($tmp1068 == NULL) goto block28; else goto block29;
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local1) = $tmp1068;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
frost$core$String* $tmp1069 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
frost$core$String* $tmp1070 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1071 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1071));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1072 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1073 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1074 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1075 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1076 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1076));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
// line 399
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1077));
frost$core$String* $tmp1078 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local9) = &$s1079;
frost$core$String* $tmp1080 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local11) = ((frost$core$String*) NULL);
goto block25;
block25:;
frost$core$Int64 $tmp1081 = *(&local10);
int64_t $tmp1082 = $tmp1027.value;
int64_t $tmp1083 = $tmp1081.value;
int64_t $tmp1084 = $tmp1082 - $tmp1083;
frost$core$Int64 $tmp1085 = (frost$core$Int64) {$tmp1084};
frost$core$UInt64 $tmp1086 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1085);
if ($tmp1029) goto block31; else goto block32;
block31:;
uint64_t $tmp1087 = $tmp1086.value;
uint64_t $tmp1088 = $tmp1031.value;
bool $tmp1089 = $tmp1087 >= $tmp1088;
frost$core$Bit $tmp1090 = (frost$core$Bit) {$tmp1089};
bool $tmp1091 = $tmp1090.value;
if ($tmp1091) goto block30; else goto block24;
block32:;
uint64_t $tmp1092 = $tmp1086.value;
uint64_t $tmp1093 = $tmp1031.value;
bool $tmp1094 = $tmp1092 > $tmp1093;
frost$core$Bit $tmp1095 = (frost$core$Bit) {$tmp1094};
bool $tmp1096 = $tmp1095.value;
if ($tmp1096) goto block30; else goto block24;
block30:;
int64_t $tmp1097 = $tmp1081.value;
int64_t $tmp1098 = $tmp1030.value;
int64_t $tmp1099 = $tmp1097 + $tmp1098;
frost$core$Int64 $tmp1100 = (frost$core$Int64) {$tmp1099};
*(&local10) = $tmp1100;
goto block23;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
// line 401
frost$io$IndentedOutputStream** $tmp1101 = &param0->out;
frost$io$IndentedOutputStream* $tmp1102 = *$tmp1101;
$fn1104 $tmp1103 = ($fn1104) ((frost$io$OutputStream*) $tmp1102)->$class->vtable[19];
frost$core$Error* $tmp1105 = $tmp1103(((frost$io$OutputStream*) $tmp1102), &$s1106);
if ($tmp1105 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
*(&local1) = $tmp1105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
frost$core$String* $tmp1107 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1108 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1108));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1109 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1109));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1110 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1111 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1111));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1112 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1113 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1105));
// line 402
frost$io$IndentedOutputStream** $tmp1114 = &param0->out;
frost$io$IndentedOutputStream* $tmp1115 = *$tmp1114;
frost$core$Int64* $tmp1116 = &$tmp1115->level;
frost$core$Int64 $tmp1117 = *$tmp1116;
frost$core$Int64 $tmp1118 = (frost$core$Int64) {1};
int64_t $tmp1119 = $tmp1117.value;
int64_t $tmp1120 = $tmp1118.value;
int64_t $tmp1121 = $tmp1119 + $tmp1120;
frost$core$Int64 $tmp1122 = (frost$core$Int64) {$tmp1121};
frost$core$Int64* $tmp1123 = &$tmp1115->level;
*$tmp1123 = $tmp1122;
// line 403
frost$core$MutableString* $tmp1124 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1124, &$s1125);
// line 404
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp1126 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp1126);
*(&local12) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
frost$io$MemoryOutputStream* $tmp1127 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
*(&local12) = $tmp1126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
// line 405
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1128 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1128);
*(&local13) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
frost$collections$Array* $tmp1129 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
*(&local13) = $tmp1128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
// line 406
frost$core$Int64 $tmp1130 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp1131 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
ITable* $tmp1132 = ((frost$collections$CollectionView*) $tmp1131)->$class->itable;
while ($tmp1132->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1132 = $tmp1132->next;
}
$fn1134 $tmp1133 = $tmp1132->methods[0];
frost$core$Int64 $tmp1135 = $tmp1133(((frost$collections$CollectionView*) $tmp1131));
frost$core$Int64 $tmp1136 = (frost$core$Int64) {1};
int64_t $tmp1137 = $tmp1135.value;
int64_t $tmp1138 = $tmp1136.value;
int64_t $tmp1139 = $tmp1137 - $tmp1138;
frost$core$Int64 $tmp1140 = (frost$core$Int64) {$tmp1139};
frost$core$Bit $tmp1141 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1142 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1130, $tmp1140, $tmp1141);
frost$core$Int64 $tmp1143 = $tmp1142.min;
*(&local14) = $tmp1143;
frost$core$Int64 $tmp1144 = $tmp1142.max;
frost$core$Bit $tmp1145 = $tmp1142.inclusive;
bool $tmp1146 = $tmp1145.value;
frost$core$Int64 $tmp1147 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1148 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1147);
if ($tmp1146) goto block38; else goto block39;
block38:;
int64_t $tmp1149 = $tmp1143.value;
int64_t $tmp1150 = $tmp1144.value;
bool $tmp1151 = $tmp1149 <= $tmp1150;
frost$core$Bit $tmp1152 = (frost$core$Bit) {$tmp1151};
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block35; else goto block36;
block39:;
int64_t $tmp1154 = $tmp1143.value;
int64_t $tmp1155 = $tmp1144.value;
bool $tmp1156 = $tmp1154 < $tmp1155;
frost$core$Bit $tmp1157 = (frost$core$Bit) {$tmp1156};
bool $tmp1158 = $tmp1157.value;
if ($tmp1158) goto block35; else goto block36;
block35:;
// line 407
frost$core$Int64 $tmp1159 = *(&local14);
frost$core$Int64$wrapper* $tmp1160;
$tmp1160 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1160->value = $tmp1159;
frost$core$String* $tmp1161 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1162, ((frost$core$Object*) $tmp1160));
frost$core$String* $tmp1163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1161, &$s1164);
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$String* $tmp1165 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local15) = $tmp1163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
// line 408
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
// line 409
frost$core$Int64 $tmp1166 = *(&local14);
frost$core$Int64 $tmp1167 = (frost$core$Int64) {0};
frost$core$Bit $tmp1168 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1166, $tmp1167);
bool $tmp1169 = $tmp1168.value;
if ($tmp1169) goto block40; else goto block42;
block40:;
// line 410
frost$core$Weak** $tmp1170 = &param1->owner;
frost$core$Weak* $tmp1171 = *$tmp1170;
frost$core$Object* $tmp1172 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1171);
org$frostlang$frostc$Type** $tmp1173 = &((org$frostlang$frostc$ClassDecl*) $tmp1172)->type;
org$frostlang$frostc$Type* $tmp1174 = *$tmp1173;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
org$frostlang$frostc$Type* $tmp1175 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
*(&local16) = $tmp1174;
frost$core$Frost$unref$frost$core$Object$Q($tmp1172);
goto block41;
block42:;
// line 1
// line 413
frost$collections$Array** $tmp1176 = &param1->parameters;
frost$collections$Array* $tmp1177 = *$tmp1176;
frost$core$Int64 $tmp1178 = *(&local14);
frost$core$Int64 $tmp1179 = (frost$core$Int64) {1};
int64_t $tmp1180 = $tmp1178.value;
int64_t $tmp1181 = $tmp1179.value;
int64_t $tmp1182 = $tmp1180 - $tmp1181;
frost$core$Int64 $tmp1183 = (frost$core$Int64) {$tmp1182};
frost$core$Object* $tmp1184 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1177, $tmp1183);
org$frostlang$frostc$Type** $tmp1185 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1184)->type;
org$frostlang$frostc$Type* $tmp1186 = *$tmp1185;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
org$frostlang$frostc$Type* $tmp1187 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
*(&local16) = $tmp1186;
frost$core$Frost$unref$frost$core$Object$Q($tmp1184);
goto block41;
block41:;
// line 415
org$frostlang$frostc$Type* $tmp1188 = *(&local16);
org$frostlang$frostc$FixedArray* $tmp1189 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1190 = *(&local14);
frost$core$Object* $tmp1191 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1189, $tmp1190);
ITable* $tmp1192 = ((frost$core$Equatable*) $tmp1188)->$class->itable;
while ($tmp1192->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1192 = $tmp1192->next;
}
$fn1194 $tmp1193 = $tmp1192->methods[1];
frost$core$Bit $tmp1195 = $tmp1193(((frost$core$Equatable*) $tmp1188), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp1191)));
bool $tmp1196 = $tmp1195.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1191);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1189));
if ($tmp1196) goto block43; else goto block45;
block43:;
// line 416
frost$core$String* $tmp1197 = *(&local15);
org$frostlang$frostc$FixedArray* $tmp1198 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1199 = *(&local14);
frost$core$Object* $tmp1200 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1198, $tmp1199);
org$frostlang$frostc$Type* $tmp1201 = *(&local16);
frost$core$String* $tmp1202 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1197, ((org$frostlang$frostc$Type*) $tmp1200), $tmp1201);
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
frost$core$String* $tmp1203 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
*(&local17) = $tmp1202;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
frost$core$Frost$unref$frost$core$Object$Q($tmp1200);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
// line 417
frost$collections$Array* $tmp1204 = *(&local13);
frost$core$String* $tmp1205 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp1204, ((frost$core$Object*) $tmp1205));
// line 418
frost$core$Weak** $tmp1206 = &param0->compiler;
frost$core$Weak* $tmp1207 = *$tmp1206;
frost$core$Object* $tmp1208 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1207);
org$frostlang$frostc$FixedArray* $tmp1209 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp1210 = *(&local14);
frost$core$Object* $tmp1211 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1209, $tmp1210);
frost$core$Bit $tmp1212 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1208), ((org$frostlang$frostc$Type*) $tmp1211));
bool $tmp1213 = $tmp1212.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1211);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q($tmp1208);
if ($tmp1213) goto block48; else goto block47;
block48:;
frost$core$Weak** $tmp1214 = &param0->compiler;
frost$core$Weak* $tmp1215 = *$tmp1214;
frost$core$Object* $tmp1216 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1215);
org$frostlang$frostc$Type* $tmp1217 = *(&local16);
frost$core$Bit $tmp1218 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1216), $tmp1217);
frost$core$Bit $tmp1219 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1218);
bool $tmp1220 = $tmp1219.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1216);
if ($tmp1220) goto block46; else goto block47;
block46:;
// line 419
frost$io$MemoryOutputStream* $tmp1221 = *(&local12);
frost$core$String* $tmp1222 = *(&local17);
frost$core$String* $tmp1223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1224, $tmp1222);
frost$core$String* $tmp1225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1223, &$s1226);
frost$core$String* $tmp1227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1228, $tmp1225);
$fn1230 $tmp1229 = ($fn1230) ((frost$io$OutputStream*) $tmp1221)->$class->vtable[19];
frost$core$Error* $tmp1231 = $tmp1229(((frost$io$OutputStream*) $tmp1221), $tmp1227);
if ($tmp1231 == NULL) goto block49; else goto block50;
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
*(&local1) = $tmp1231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$String* $tmp1232 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local17) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1233 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1234 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
frost$collections$Array* $tmp1235 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local13) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1236 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local12) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1237 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1238 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1239 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1240 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1241 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1242 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1243 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
goto block47;
block47:;
frost$core$String* $tmp1244 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1244));
*(&local17) = ((frost$core$String*) NULL);
goto block44;
block45:;
// line 1
// line 424
frost$collections$Array* $tmp1245 = *(&local13);
frost$core$String* $tmp1246 = *(&local15);
frost$collections$Array$add$frost$collections$Array$T($tmp1245, ((frost$core$Object*) $tmp1246));
goto block44;
block44:;
org$frostlang$frostc$Type* $tmp1247 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1248 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1248));
*(&local15) = ((frost$core$String*) NULL);
goto block37;
block37:;
frost$core$Int64 $tmp1249 = *(&local14);
int64_t $tmp1250 = $tmp1144.value;
int64_t $tmp1251 = $tmp1249.value;
int64_t $tmp1252 = $tmp1250 - $tmp1251;
frost$core$Int64 $tmp1253 = (frost$core$Int64) {$tmp1252};
frost$core$UInt64 $tmp1254 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1253);
if ($tmp1146) goto block52; else goto block53;
block52:;
uint64_t $tmp1255 = $tmp1254.value;
uint64_t $tmp1256 = $tmp1148.value;
bool $tmp1257 = $tmp1255 >= $tmp1256;
frost$core$Bit $tmp1258 = (frost$core$Bit) {$tmp1257};
bool $tmp1259 = $tmp1258.value;
if ($tmp1259) goto block51; else goto block36;
block53:;
uint64_t $tmp1260 = $tmp1254.value;
uint64_t $tmp1261 = $tmp1148.value;
bool $tmp1262 = $tmp1260 > $tmp1261;
frost$core$Bit $tmp1263 = (frost$core$Bit) {$tmp1262};
bool $tmp1264 = $tmp1263.value;
if ($tmp1264) goto block51; else goto block36;
block51:;
int64_t $tmp1265 = $tmp1249.value;
int64_t $tmp1266 = $tmp1147.value;
int64_t $tmp1267 = $tmp1265 + $tmp1266;
frost$core$Int64 $tmp1268 = (frost$core$Int64) {$tmp1267};
*(&local14) = $tmp1268;
goto block35;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1131));
// line 427
org$frostlang$frostc$Type* $tmp1269 = *(&local6);
org$frostlang$frostc$Type* $tmp1270 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1271 = ((frost$core$Equatable*) $tmp1269)->$class->itable;
while ($tmp1271->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1271 = $tmp1271->next;
}
$fn1273 $tmp1272 = $tmp1271->methods[1];
frost$core$Bit $tmp1274 = $tmp1272(((frost$core$Equatable*) $tmp1269), ((frost$core$Equatable*) $tmp1270));
bool $tmp1275 = $tmp1274.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
if ($tmp1275) goto block54; else goto block55;
block54:;
// line 428
frost$io$IndentedOutputStream** $tmp1276 = &param0->out;
frost$io$IndentedOutputStream* $tmp1277 = *$tmp1276;
org$frostlang$frostc$Type** $tmp1278 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1279 = *$tmp1278;
frost$core$String* $tmp1280 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1279);
frost$core$String* $tmp1281 = frost$core$String$get_asString$R$frost$core$String($tmp1280);
frost$core$String* $tmp1282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1281, &$s1283);
$fn1285 $tmp1284 = ($fn1285) ((frost$io$OutputStream*) $tmp1277)->$class->vtable[17];
frost$core$Error* $tmp1286 = $tmp1284(((frost$io$OutputStream*) $tmp1277), $tmp1282);
if ($tmp1286 == NULL) goto block56; else goto block57;
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
*(&local1) = $tmp1286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
frost$collections$Array* $tmp1287 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
*(&local13) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1288 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local12) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1289 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1290 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1291 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1292 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1292));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1293 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1294 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1295 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
goto block55;
block55:;
// line 430
frost$io$IndentedOutputStream** $tmp1296 = &param0->out;
frost$io$IndentedOutputStream* $tmp1297 = *$tmp1296;
frost$core$String* $tmp1298 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1299 = frost$core$String$get_asString$R$frost$core$String($tmp1298);
frost$core$String* $tmp1300 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1299, &$s1301);
$fn1303 $tmp1302 = ($fn1303) ((frost$io$OutputStream*) $tmp1297)->$class->vtable[17];
frost$core$Error* $tmp1304 = $tmp1302(((frost$io$OutputStream*) $tmp1297), $tmp1300);
if ($tmp1304 == NULL) goto block58; else goto block59;
block59:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
*(&local1) = $tmp1304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$collections$Array* $tmp1305 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local13) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1306 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
*(&local12) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1307 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1308 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1309 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1310 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1311 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1312 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1312));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1313 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1313));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1300));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
// line 431
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1314));
frost$core$String* $tmp1315 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
*(&local9) = &$s1316;
// line 432
frost$core$Bit $tmp1317 = *(&local5);
bool $tmp1318 = $tmp1317.value;
if ($tmp1318) goto block60; else goto block61;
block60:;
// line 433
frost$io$IndentedOutputStream** $tmp1319 = &param0->out;
frost$io$IndentedOutputStream* $tmp1320 = *$tmp1319;
$fn1322 $tmp1321 = ($fn1322) ((frost$io$OutputStream*) $tmp1320)->$class->vtable[17];
frost$core$Error* $tmp1323 = $tmp1321(((frost$io$OutputStream*) $tmp1320), &$s1324);
if ($tmp1323 == NULL) goto block62; else goto block63;
block63:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local1) = $tmp1323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
frost$collections$Array* $tmp1325 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local13) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1326 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local12) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1327 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1328 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1329 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1330 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1330));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1331 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1332 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1333 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block62:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
// line 434
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1334));
frost$core$String* $tmp1335 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local9) = &$s1336;
goto block61;
block61:;
// line 436
frost$core$Int64 $tmp1337 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp1338 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
ITable* $tmp1339 = ((frost$collections$CollectionView*) $tmp1338)->$class->itable;
while ($tmp1339->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1339 = $tmp1339->next;
}
$fn1341 $tmp1340 = $tmp1339->methods[0];
frost$core$Int64 $tmp1342 = $tmp1340(((frost$collections$CollectionView*) $tmp1338));
frost$core$Int64 $tmp1343 = (frost$core$Int64) {1};
int64_t $tmp1344 = $tmp1342.value;
int64_t $tmp1345 = $tmp1343.value;
int64_t $tmp1346 = $tmp1344 - $tmp1345;
frost$core$Int64 $tmp1347 = (frost$core$Int64) {$tmp1346};
frost$core$Bit $tmp1348 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1349 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1337, $tmp1347, $tmp1348);
frost$core$Int64 $tmp1350 = $tmp1349.min;
*(&local18) = $tmp1350;
frost$core$Int64 $tmp1351 = $tmp1349.max;
frost$core$Bit $tmp1352 = $tmp1349.inclusive;
bool $tmp1353 = $tmp1352.value;
frost$core$Int64 $tmp1354 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1355 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1354);
if ($tmp1353) goto block67; else goto block68;
block67:;
int64_t $tmp1356 = $tmp1350.value;
int64_t $tmp1357 = $tmp1351.value;
bool $tmp1358 = $tmp1356 <= $tmp1357;
frost$core$Bit $tmp1359 = (frost$core$Bit) {$tmp1358};
bool $tmp1360 = $tmp1359.value;
if ($tmp1360) goto block64; else goto block65;
block68:;
int64_t $tmp1361 = $tmp1350.value;
int64_t $tmp1362 = $tmp1351.value;
bool $tmp1363 = $tmp1361 < $tmp1362;
frost$core$Bit $tmp1364 = (frost$core$Bit) {$tmp1363};
bool $tmp1365 = $tmp1364.value;
if ($tmp1365) goto block64; else goto block65;
block64:;
// line 437
frost$io$IndentedOutputStream** $tmp1366 = &param0->out;
frost$io$IndentedOutputStream* $tmp1367 = *$tmp1366;
frost$core$String* $tmp1368 = *(&local9);
frost$core$String* $tmp1369 = frost$core$String$get_asString$R$frost$core$String($tmp1368);
frost$core$String* $tmp1370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1369, &$s1371);
frost$collections$Array* $tmp1372 = *(&local13);
frost$core$Int64 $tmp1373 = *(&local18);
frost$core$Object* $tmp1374 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1372, $tmp1373);
frost$core$String* $tmp1375 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1370, ((frost$core$String*) $tmp1374));
frost$core$String* $tmp1376 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1375, &$s1377);
$fn1379 $tmp1378 = ($fn1379) ((frost$io$OutputStream*) $tmp1367)->$class->vtable[17];
frost$core$Error* $tmp1380 = $tmp1378(((frost$io$OutputStream*) $tmp1367), $tmp1376);
if ($tmp1380 == NULL) goto block69; else goto block70;
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
*(&local1) = $tmp1380;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
frost$core$Frost$unref$frost$core$Object$Q($tmp1374);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
frost$collections$Array* $tmp1381 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
*(&local13) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1382 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
*(&local12) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1383 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1384 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1385 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1386 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1387 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1388 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1389 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
frost$core$Frost$unref$frost$core$Object$Q($tmp1374);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
// line 438
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1390));
frost$core$String* $tmp1391 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
*(&local9) = &$s1392;
goto block66;
block66:;
frost$core$Int64 $tmp1393 = *(&local18);
int64_t $tmp1394 = $tmp1351.value;
int64_t $tmp1395 = $tmp1393.value;
int64_t $tmp1396 = $tmp1394 - $tmp1395;
frost$core$Int64 $tmp1397 = (frost$core$Int64) {$tmp1396};
frost$core$UInt64 $tmp1398 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1397);
if ($tmp1353) goto block72; else goto block73;
block72:;
uint64_t $tmp1399 = $tmp1398.value;
uint64_t $tmp1400 = $tmp1355.value;
bool $tmp1401 = $tmp1399 >= $tmp1400;
frost$core$Bit $tmp1402 = (frost$core$Bit) {$tmp1401};
bool $tmp1403 = $tmp1402.value;
if ($tmp1403) goto block71; else goto block65;
block73:;
uint64_t $tmp1404 = $tmp1398.value;
uint64_t $tmp1405 = $tmp1355.value;
bool $tmp1406 = $tmp1404 > $tmp1405;
frost$core$Bit $tmp1407 = (frost$core$Bit) {$tmp1406};
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block71; else goto block65;
block71:;
int64_t $tmp1409 = $tmp1393.value;
int64_t $tmp1410 = $tmp1354.value;
int64_t $tmp1411 = $tmp1409 + $tmp1410;
frost$core$Int64 $tmp1412 = (frost$core$Int64) {$tmp1411};
*(&local18) = $tmp1412;
goto block64;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
// line 440
frost$io$IndentedOutputStream** $tmp1413 = &param0->out;
frost$io$IndentedOutputStream* $tmp1414 = *$tmp1413;
$fn1416 $tmp1415 = ($fn1416) ((frost$io$OutputStream*) $tmp1414)->$class->vtable[19];
frost$core$Error* $tmp1417 = $tmp1415(((frost$io$OutputStream*) $tmp1414), &$s1418);
if ($tmp1417 == NULL) goto block74; else goto block75;
block75:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local1) = $tmp1417;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
frost$collections$Array* $tmp1419 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
*(&local13) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1420 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
*(&local12) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1421 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1422 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1423 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1424 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1425 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1426 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1427 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block74:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
// line 441
frost$io$IndentedOutputStream** $tmp1428 = &param0->out;
frost$io$IndentedOutputStream* $tmp1429 = *$tmp1428;
frost$io$MemoryOutputStream* $tmp1430 = *(&local12);
$fn1432 $tmp1431 = ($fn1432) ((frost$io$OutputStream*) $tmp1429)->$class->vtable[20];
frost$core$Error* $tmp1433 = $tmp1431(((frost$io$OutputStream*) $tmp1429), ((frost$core$Object*) $tmp1430));
if ($tmp1433 == NULL) goto block76; else goto block77;
block77:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
*(&local1) = $tmp1433;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
frost$collections$Array* $tmp1434 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1434));
*(&local13) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1435 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1435));
*(&local12) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1436 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1437 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1438 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1439 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1439));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1440 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1440));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1441 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1442 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1442));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block76:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
// line 442
org$frostlang$frostc$Type* $tmp1443 = *(&local6);
org$frostlang$frostc$Type* $tmp1444 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1445 = ((frost$core$Equatable*) $tmp1443)->$class->itable;
while ($tmp1445->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1445 = $tmp1445->next;
}
$fn1447 $tmp1446 = $tmp1445->methods[1];
frost$core$Bit $tmp1448 = $tmp1446(((frost$core$Equatable*) $tmp1443), ((frost$core$Equatable*) $tmp1444));
bool $tmp1449 = $tmp1448.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
if ($tmp1449) goto block78; else goto block79;
block78:;
// line 443
frost$io$IndentedOutputStream** $tmp1450 = &param0->out;
frost$io$IndentedOutputStream* $tmp1451 = *$tmp1450;
org$frostlang$frostc$Type** $tmp1452 = &param1->returnType;
org$frostlang$frostc$Type* $tmp1453 = *$tmp1452;
org$frostlang$frostc$Type* $tmp1454 = *(&local6);
frost$core$String* $tmp1455 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, &$s1456, $tmp1453, $tmp1454);
frost$core$String* $tmp1457 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1458, $tmp1455);
frost$core$String* $tmp1459 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1457, &$s1460);
$fn1462 $tmp1461 = ($fn1462) ((frost$io$OutputStream*) $tmp1451)->$class->vtable[19];
frost$core$Error* $tmp1463 = $tmp1461(((frost$io$OutputStream*) $tmp1451), $tmp1459);
if ($tmp1463 == NULL) goto block80; else goto block81;
block81:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
*(&local1) = $tmp1463;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
frost$collections$Array* $tmp1464 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1464));
*(&local13) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1465 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
*(&local12) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1466 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1466));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1467 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1468 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1469 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1470 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1471 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1472 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block80:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
goto block79;
block79:;
// line 446
frost$io$IndentedOutputStream** $tmp1473 = &param0->out;
frost$io$IndentedOutputStream* $tmp1474 = *$tmp1473;
frost$core$Int64* $tmp1475 = &$tmp1474->level;
frost$core$Int64 $tmp1476 = *$tmp1475;
frost$core$Int64 $tmp1477 = (frost$core$Int64) {1};
int64_t $tmp1478 = $tmp1476.value;
int64_t $tmp1479 = $tmp1477.value;
int64_t $tmp1480 = $tmp1478 - $tmp1479;
frost$core$Int64 $tmp1481 = (frost$core$Int64) {$tmp1480};
frost$core$Int64* $tmp1482 = &$tmp1474->level;
*$tmp1482 = $tmp1481;
// line 447
frost$io$IndentedOutputStream** $tmp1483 = &param0->out;
frost$io$IndentedOutputStream* $tmp1484 = *$tmp1483;
$fn1486 $tmp1485 = ($fn1486) ((frost$io$OutputStream*) $tmp1484)->$class->vtable[19];
frost$core$Error* $tmp1487 = $tmp1485(((frost$io$OutputStream*) $tmp1484), &$s1488);
if ($tmp1487 == NULL) goto block82; else goto block83;
block83:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
*(&local1) = $tmp1487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
frost$collections$Array* $tmp1489 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
*(&local13) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1490 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
*(&local12) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1491 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1492 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1493 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1494 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1495 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1496 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1497 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block82:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
// line 448
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$CCodeGenerator$MethodShim));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1498 = (org$frostlang$frostc$CCodeGenerator$MethodShim*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$MethodShim$class);
frost$core$String* $tmp1499 = *(&local7);
frost$core$MutableString* $tmp1500 = *(&local8);
frost$core$String* $tmp1501 = frost$core$MutableString$finish$R$frost$core$String($tmp1500);
org$frostlang$frostc$CCodeGenerator$MethodShim$init$frost$core$String$frost$core$String($tmp1498, $tmp1499, $tmp1501);
*(&local19) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1502 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
*(&local19) = $tmp1498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
// line 449
frost$collections$IdentityMap** $tmp1503 = &param0->methodShims;
frost$collections$IdentityMap* $tmp1504 = *$tmp1503;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1505 = *(&local19);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp1504, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp1505));
// line 450
frost$io$IndentedOutputStream** $tmp1506 = &param0->shims;
frost$io$IndentedOutputStream* $tmp1507 = *$tmp1506;
frost$io$MemoryOutputStream* $tmp1508 = *(&local4);
frost$core$String* $tmp1509 = frost$io$MemoryOutputStream$finish$R$frost$core$String($tmp1508);
$fn1511 $tmp1510 = ($fn1511) ((frost$io$OutputStream*) $tmp1507)->$class->vtable[17];
frost$core$Error* $tmp1512 = $tmp1510(((frost$io$OutputStream*) $tmp1507), $tmp1509);
if ($tmp1512 == NULL) goto block84; else goto block85;
block85:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
*(&local1) = $tmp1512;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1513 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1513));
*(&local19) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$collections$Array* $tmp1514 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
*(&local13) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1515 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
*(&local12) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1516 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1516));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1517 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1517));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1518 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1518));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1519 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1520 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1520));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1521 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1521));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1522 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1522));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block4;
block84:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1512));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
// line 451
frost$io$IndentedOutputStream* $tmp1523 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
frost$io$IndentedOutputStream** $tmp1524 = &param0->out;
frost$io$IndentedOutputStream* $tmp1525 = *$tmp1524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
frost$io$IndentedOutputStream** $tmp1526 = &param0->out;
*$tmp1526 = $tmp1523;
// line 452
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1527 = *(&local19);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1528 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1528));
*(&local19) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$collections$Array* $tmp1529 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
*(&local13) = ((frost$collections$Array*) NULL);
frost$io$MemoryOutputStream* $tmp1530 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
*(&local12) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp1531 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1532 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1532));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1533 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp1534 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$io$MemoryOutputStream* $tmp1535 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1535));
*(&local4) = ((frost$io$MemoryOutputStream*) NULL);
frost$io$IndentedOutputStream* $tmp1536 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1536));
*(&local3) = ((frost$io$IndentedOutputStream*) NULL);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1537 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Error* $tmp1538 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
*(&local1) = ((frost$core$Error*) NULL);
*(&local0) = $tmp1527;
goto block1;
block4:;
// line 455
frost$core$Int64 $tmp1539 = (frost$core$Int64) {455};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1540, $tmp1539);
abort(); // unreachable
block5:;
frost$core$Error* $tmp1541 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
*(&local1) = ((frost$core$Error*) NULL);
goto block86;
block86:;
block1:;
frost$io$IndentedOutputStream** $tmp1542 = &param0->out;
frost$io$IndentedOutputStream* $tmp1543 = *$tmp1542;
bool $tmp1544 = $tmp1543 == $tmp899;
frost$core$Bit $tmp1545 = frost$core$Bit$init$builtin_bit($tmp1544);
bool $tmp1546 = $tmp1545.value;
if ($tmp1546) goto block2; else goto block3;
block2:;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1547 = *(&local0);
return $tmp1547;
block3:;
frost$core$Int64 $tmp1548 = (frost$core$Int64) {364};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1549, $tmp1548, &$s1550);
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
// line 460
*(&local0) = ((frost$core$Error*) NULL);
// line 461
frost$core$Weak** $tmp1551 = &param0->compiler;
frost$core$Weak* $tmp1552 = *$tmp1551;
frost$core$Object* $tmp1553 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1552);
org$frostlang$frostc$Type** $tmp1554 = &param1->type;
org$frostlang$frostc$Type* $tmp1555 = *$tmp1554;
frost$collections$HashSet* $tmp1556 = org$frostlang$frostc$Compiler$allInterfaces$org$frostlang$frostc$Type$R$frost$collections$HashSet$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Compiler*) $tmp1553), $tmp1555);
*(&local1) = ((frost$collections$HashSet*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
frost$collections$HashSet* $tmp1557 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
*(&local1) = $tmp1556;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
frost$core$Frost$unref$frost$core$Object$Q($tmp1553);
// line 462
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1558));
frost$core$String* $tmp1559 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1559));
*(&local2) = &$s1560;
// line 463
frost$collections$HashSet* $tmp1561 = *(&local1);
ITable* $tmp1562 = ((frost$collections$Iterable*) $tmp1561)->$class->itable;
while ($tmp1562->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1562 = $tmp1562->next;
}
$fn1564 $tmp1563 = $tmp1562->methods[0];
frost$collections$Iterator* $tmp1565 = $tmp1563(((frost$collections$Iterable*) $tmp1561));
goto block3;
block3:;
ITable* $tmp1566 = $tmp1565->$class->itable;
while ($tmp1566->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1566 = $tmp1566->next;
}
$fn1568 $tmp1567 = $tmp1566->methods[0];
frost$core$Bit $tmp1569 = $tmp1567($tmp1565);
bool $tmp1570 = $tmp1569.value;
if ($tmp1570) goto block5; else goto block4;
block4:;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1571 = $tmp1565->$class->itable;
while ($tmp1571->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1571 = $tmp1571->next;
}
$fn1573 $tmp1572 = $tmp1571->methods[1];
frost$core$Object* $tmp1574 = $tmp1572($tmp1565);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1574)));
org$frostlang$frostc$Type* $tmp1575 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
*(&local3) = ((org$frostlang$frostc$Type*) $tmp1574);
// line 464
frost$core$Weak** $tmp1576 = &param0->compiler;
frost$core$Weak* $tmp1577 = *$tmp1576;
frost$core$Object* $tmp1578 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1577);
org$frostlang$frostc$Type* $tmp1579 = *(&local3);
org$frostlang$frostc$ClassDecl* $tmp1580 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1578), $tmp1579);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
org$frostlang$frostc$ClassDecl* $tmp1581 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
*(&local4) = $tmp1580;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
frost$core$Frost$unref$frost$core$Object$Q($tmp1578);
// line 465
org$frostlang$frostc$ClassDecl* $tmp1582 = *(&local4);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1583 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1582);
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1584 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
*(&local5) = $tmp1583;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1583));
// line 466
frost$core$Weak** $tmp1585 = &param0->compiler;
frost$core$Weak* $tmp1586 = *$tmp1585;
frost$core$Object* $tmp1587 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1586);
org$frostlang$frostc$Type* $tmp1588 = *(&local3);
frost$collections$ListView* $tmp1589 = org$frostlang$frostc$Compiler$interfaceMethods$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1587), param1, $tmp1588);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
frost$collections$ListView* $tmp1590 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1590));
*(&local6) = $tmp1589;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1589));
frost$core$Frost$unref$frost$core$Object$Q($tmp1587);
// line 467
frost$core$String** $tmp1591 = &param1->name;
frost$core$String* $tmp1592 = *$tmp1591;
frost$core$String* $tmp1593 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1592);
frost$core$String* $tmp1594 = frost$core$String$get_asString$R$frost$core$String($tmp1593);
frost$core$String* $tmp1595 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1594, &$s1596);
org$frostlang$frostc$ClassDecl* $tmp1597 = *(&local4);
frost$core$String** $tmp1598 = &$tmp1597->name;
frost$core$String* $tmp1599 = *$tmp1598;
frost$core$String* $tmp1600 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1599);
frost$core$String* $tmp1601 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1595, $tmp1600);
frost$core$String* $tmp1602 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1601, &$s1603);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
frost$core$String* $tmp1604 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
*(&local7) = $tmp1602;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1602));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
// line 468
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1605 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Type* $tmp1606 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1607 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1606);
frost$core$String* $tmp1608 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1609, $tmp1607);
frost$core$String* $tmp1610 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1608, &$s1611);
frost$collections$ListView* $tmp1612 = *(&local6);
ITable* $tmp1613 = ((frost$collections$CollectionView*) $tmp1612)->$class->itable;
while ($tmp1613->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1613 = $tmp1613->next;
}
$fn1615 $tmp1614 = $tmp1613->methods[0];
frost$core$Int64 $tmp1616 = $tmp1614(((frost$collections$CollectionView*) $tmp1612));
frost$core$Int64$wrapper* $tmp1617;
$tmp1617 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1617->value = $tmp1616;
frost$core$String* $tmp1618 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1619, ((frost$core$Object*) $tmp1617));
frost$core$String* $tmp1620 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1618, &$s1621);
frost$core$String* $tmp1622 = *(&local7);
frost$core$String* $tmp1623 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1620, $tmp1622);
frost$core$String* $tmp1624 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1623, &$s1625);
frost$core$String* $tmp1626 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1610, $tmp1624);
org$frostlang$frostc$Type* $tmp1627 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp1628 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1627);
frost$core$String* $tmp1629 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1630, $tmp1628);
frost$core$String* $tmp1631 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1629, &$s1632);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1633 = *(&local5);
frost$core$String** $tmp1634 = &$tmp1633->name;
frost$core$String* $tmp1635 = *$tmp1634;
frost$core$String* $tmp1636 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1631, $tmp1635);
frost$core$String* $tmp1637 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1636, &$s1638);
frost$core$String* $tmp1639 = *(&local2);
frost$core$String* $tmp1640 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1637, $tmp1639);
frost$core$String* $tmp1641 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1640, &$s1642);
frost$core$String* $tmp1643 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1626, $tmp1641);
frost$core$MutableString$init$frost$core$String($tmp1605, $tmp1643);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
frost$core$MutableString* $tmp1644 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1644));
*(&local8) = $tmp1605;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
// line 471
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1645));
frost$core$String* $tmp1646 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1646));
*(&local9) = &$s1647;
// line 472
frost$collections$ListView* $tmp1648 = *(&local6);
ITable* $tmp1649 = ((frost$collections$Iterable*) $tmp1648)->$class->itable;
while ($tmp1649->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1649 = $tmp1649->next;
}
$fn1651 $tmp1650 = $tmp1649->methods[0];
frost$collections$Iterator* $tmp1652 = $tmp1650(((frost$collections$Iterable*) $tmp1648));
goto block6;
block6:;
ITable* $tmp1653 = $tmp1652->$class->itable;
while ($tmp1653->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1653 = $tmp1653->next;
}
$fn1655 $tmp1654 = $tmp1653->methods[0];
frost$core$Bit $tmp1656 = $tmp1654($tmp1652);
bool $tmp1657 = $tmp1656.value;
if ($tmp1657) goto block8; else goto block7;
block7:;
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1658 = $tmp1652->$class->itable;
while ($tmp1658->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1658 = $tmp1658->next;
}
$fn1660 $tmp1659 = $tmp1658->methods[1];
frost$core$Object* $tmp1661 = $tmp1659($tmp1652);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1661)));
org$frostlang$frostc$MethodDecl* $tmp1662 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) $tmp1661);
// line 473
frost$core$MutableString* $tmp1663 = *(&local8);
frost$core$String* $tmp1664 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp1663, $tmp1664);
// line 474
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1665));
frost$core$String* $tmp1666 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
*(&local9) = &$s1667;
// line 475
org$frostlang$frostc$MethodDecl* $tmp1668 = *(&local10);
org$frostlang$frostc$Annotations** $tmp1669 = &$tmp1668->annotations;
org$frostlang$frostc$Annotations* $tmp1670 = *$tmp1669;
frost$core$Bit $tmp1671 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp1670);
bool $tmp1672 = $tmp1671.value;
if ($tmp1672) goto block9; else goto block11;
block9:;
// line 476
frost$core$MutableString* $tmp1673 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1673, &$s1674);
goto block10;
block11:;
// line 1
// line 479
frost$core$MutableString* $tmp1675 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp1676 = *(&local10);
frost$core$String* $tmp1677 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp1676);
frost$core$MutableString$append$frost$core$String($tmp1675, $tmp1677);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1661);
org$frostlang$frostc$MethodDecl* $tmp1678 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1652));
// line 482
frost$core$MutableString* $tmp1679 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1679, &$s1680);
// line 483
frost$io$MemoryOutputStream** $tmp1681 = &param0->types;
frost$io$MemoryOutputStream* $tmp1682 = *$tmp1681;
frost$core$MutableString* $tmp1683 = *(&local8);
frost$core$String* $tmp1684 = frost$core$MutableString$finish$R$frost$core$String($tmp1683);
$fn1686 $tmp1685 = ($fn1686) ((frost$io$OutputStream*) $tmp1682)->$class->vtable[19];
frost$core$Error* $tmp1687 = $tmp1685(((frost$io$OutputStream*) $tmp1682), $tmp1684);
if ($tmp1687 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
*(&local0) = $tmp1687;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
frost$core$String* $tmp1688 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1688));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1689 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1689));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1690 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1690));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1691 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1692 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1692));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1693 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1693));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1574);
org$frostlang$frostc$Type* $tmp1694 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1694));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
frost$core$String* $tmp1695 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1695));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1696 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1696));
*(&local1) = ((frost$collections$HashSet*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
// line 484
frost$core$String* $tmp1697 = *(&local7);
frost$core$String* $tmp1698 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1699, $tmp1697);
frost$core$String* $tmp1700 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1698, &$s1701);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
frost$core$String* $tmp1702 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
*(&local2) = $tmp1700;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1698));
frost$core$String* $tmp1703 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1703));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1704 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1704));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1705 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1705));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1706 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1707 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
org$frostlang$frostc$ClassDecl* $tmp1708 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1708));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1574);
org$frostlang$frostc$Type* $tmp1709 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1709));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
// line 486
frost$core$String* $tmp1710 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
frost$core$String* $tmp1711 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
*(&local2) = ((frost$core$String*) NULL);
frost$collections$HashSet* $tmp1712 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1712));
*(&local1) = ((frost$collections$HashSet*) NULL);
frost$core$Error* $tmp1713 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp1710;
block1:;
// line 489
frost$core$Int64 $tmp1714 = (frost$core$Int64) {489};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1715, $tmp1714);
abort(); // unreachable
block2:;
frost$core$Error* $tmp1716 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
*(&local0) = ((frost$core$Error*) NULL);
goto block14;
block14:;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 494
frost$core$Weak** $tmp1717 = &param0->hCodeGen;
frost$core$Weak* $tmp1718 = *$tmp1717;
frost$core$Object* $tmp1719 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1718);
frost$core$Bit $tmp1720 = org$frostlang$frostc$HCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$HCodeGenerator*) $tmp1719), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1719);
return $tmp1720;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$CCodeGenerator$MethodShim* local4 = NULL;
// line 498
frost$core$Weak** $tmp1721 = &param0->compiler;
frost$core$Weak* $tmp1722 = *$tmp1721;
frost$core$Object* $tmp1723 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1722);
frost$core$Bit $tmp1724 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1723), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1723);
// line 499
frost$core$Weak** $tmp1725 = &param1->owner;
frost$core$Weak* $tmp1726 = *$tmp1725;
frost$core$Object* $tmp1727 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1726);
frost$core$Bit $tmp1728 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp1727));
bool $tmp1729 = $tmp1728.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1727);
if ($tmp1729) goto block1; else goto block2;
block1:;
// line 500
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param1);
goto block2;
block2:;
// line 502
*(&local0) = ((frost$core$String*) NULL);
// line 503
frost$core$Weak** $tmp1730 = &param0->compiler;
frost$core$Weak* $tmp1731 = *$tmp1730;
frost$core$Object* $tmp1732 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1731);
frost$core$Weak** $tmp1733 = &param1->owner;
frost$core$Weak* $tmp1734 = *$tmp1733;
frost$core$Object* $tmp1735 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1734);
org$frostlang$frostc$Type** $tmp1736 = &((org$frostlang$frostc$ClassDecl*) $tmp1735)->type;
org$frostlang$frostc$Type* $tmp1737 = *$tmp1736;
frost$core$Bit $tmp1738 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1739 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp1732), param1, $tmp1737, $tmp1738);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
org$frostlang$frostc$Type* $tmp1740 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
*(&local1) = $tmp1739;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
frost$core$Frost$unref$frost$core$Object$Q($tmp1735);
frost$core$Frost$unref$frost$core$Object$Q($tmp1732);
// line 504
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
// line 505
frost$core$Weak** $tmp1741 = &param0->compiler;
frost$core$Weak* $tmp1742 = *$tmp1741;
frost$core$Object* $tmp1743 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1742);
frost$core$Weak** $tmp1744 = &param1->owner;
frost$core$Weak* $tmp1745 = *$tmp1744;
frost$core$Object* $tmp1746 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1745);
frost$core$Bit $tmp1747 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1743), ((org$frostlang$frostc$ClassDecl*) $tmp1746));
bool $tmp1748 = $tmp1747.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1746);
frost$core$Frost$unref$frost$core$Object$Q($tmp1743);
if ($tmp1748) goto block3; else goto block5;
block3:;
// line 506
org$frostlang$frostc$Type* $tmp1749 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
org$frostlang$frostc$Type* $tmp1750 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
*(&local2) = $tmp1749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1749));
goto block4;
block5:;
// line 1
// line 509
frost$core$Weak** $tmp1751 = &param1->owner;
frost$core$Weak* $tmp1752 = *$tmp1751;
frost$core$Object* $tmp1753 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1752);
org$frostlang$frostc$Type** $tmp1754 = &((org$frostlang$frostc$ClassDecl*) $tmp1753)->type;
org$frostlang$frostc$Type* $tmp1755 = *$tmp1754;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
org$frostlang$frostc$Type* $tmp1756 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
*(&local2) = $tmp1755;
frost$core$Frost$unref$frost$core$Object$Q($tmp1753);
goto block4;
block4:;
// line 511
frost$core$Weak** $tmp1757 = &param0->compiler;
frost$core$Weak* $tmp1758 = *$tmp1757;
frost$core$Object* $tmp1759 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1758);
org$frostlang$frostc$Type* $tmp1760 = *(&local2);
org$frostlang$frostc$Type* $tmp1761 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp1759), param1, $tmp1760);
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
org$frostlang$frostc$Type* $tmp1762 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
*(&local3) = $tmp1761;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
frost$core$Frost$unref$frost$core$Object$Q($tmp1759);
// line 512
org$frostlang$frostc$Type* $tmp1763 = *(&local1);
org$frostlang$frostc$Type* $tmp1764 = *(&local3);
ITable* $tmp1765 = ((frost$core$Equatable*) $tmp1763)->$class->itable;
while ($tmp1765->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1765 = $tmp1765->next;
}
$fn1767 $tmp1766 = $tmp1765->methods[1];
frost$core$Bit $tmp1768 = $tmp1766(((frost$core$Equatable*) $tmp1763), ((frost$core$Equatable*) $tmp1764));
bool $tmp1769 = $tmp1768.value;
if ($tmp1769) goto block6; else goto block8;
block6:;
// line 513
org$frostlang$frostc$Type* $tmp1770 = *(&local3);
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1771 = org$frostlang$frostc$CCodeGenerator$createMethodShim$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$MethodShim(param0, param1, $tmp1770);
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1772 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
*(&local4) = $tmp1771;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1771));
// line 514
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1773 = *(&local4);
frost$core$String** $tmp1774 = &$tmp1773->name;
frost$core$String* $tmp1775 = *$tmp1774;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
frost$core$String* $tmp1776 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
*(&local0) = $tmp1775;
org$frostlang$frostc$CCodeGenerator$MethodShim* $tmp1777 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
*(&local4) = ((org$frostlang$frostc$CCodeGenerator$MethodShim*) NULL);
goto block7;
block8:;
// line 1
// line 517
frost$core$String* $tmp1778 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
frost$core$String* $tmp1779 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
*(&local0) = $tmp1778;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
goto block7;
block7:;
// line 519
frost$core$String* $tmp1780 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1780));
org$frostlang$frostc$Type* $tmp1781 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1782 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1783 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp1784 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
*(&local0) = ((frost$core$String*) NULL);
return $tmp1780;

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
// line 523
*(&local0) = ((frost$core$Error*) NULL);
// line 524
frost$collections$HashMap** $tmp1785 = &param0->classConstants;
frost$collections$HashMap* $tmp1786 = *$tmp1785;
frost$core$String** $tmp1787 = &param1->name;
frost$core$String* $tmp1788 = *$tmp1787;
frost$core$Object* $tmp1789 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1786, ((frost$collections$Key*) $tmp1788));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp1789)));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1790 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp1789);
frost$core$Frost$unref$frost$core$Object$Q($tmp1789);
// line 525
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1791 = *(&local1);
frost$core$Bit $tmp1792 = frost$core$Bit$init$builtin_bit($tmp1791 == NULL);
bool $tmp1793 = $tmp1792.value;
if ($tmp1793) goto block3; else goto block4;
block3:;
// line 526
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, param1);
// line 527
frost$core$Weak** $tmp1794 = &param0->compiler;
frost$core$Weak* $tmp1795 = *$tmp1794;
frost$core$Object* $tmp1796 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1795);
frost$core$Bit $tmp1797 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp1796), param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp1796);
// line 528
*(&local2) = ((frost$core$String*) NULL);
// line 529
frost$core$Bit $tmp1798 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, param1);
bool $tmp1799 = $tmp1798.value;
if ($tmp1799) goto block5; else goto block6;
block5:;
// line 530
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$CCodeGenerator$ClassConstant));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1800 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
org$frostlang$frostc$Type** $tmp1801 = &param1->type;
org$frostlang$frostc$Type* $tmp1802 = *$tmp1801;
frost$core$String** $tmp1803 = &((org$frostlang$frostc$Symbol*) $tmp1802)->name;
frost$core$String* $tmp1804 = *$tmp1803;
frost$core$String* $tmp1805 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1804);
frost$core$String* $tmp1806 = frost$core$String$get_asString$R$frost$core$String($tmp1805);
frost$core$String* $tmp1807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1806, &$s1808);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp1800, $tmp1807, &$s1809);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1810 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1810));
*(&local1) = $tmp1800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
// line 532
frost$collections$HashMap** $tmp1811 = &param0->classConstants;
frost$collections$HashMap* $tmp1812 = *$tmp1811;
frost$core$String** $tmp1813 = &param1->name;
frost$core$String* $tmp1814 = *$tmp1813;
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1815 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1812, ((frost$collections$Key*) $tmp1814), ((frost$core$Object*) $tmp1815));
// line 533
frost$collections$HashMap** $tmp1816 = &param0->classConstants;
frost$collections$HashMap* $tmp1817 = *$tmp1816;
frost$core$String** $tmp1818 = &param1->name;
frost$core$String* $tmp1819 = *$tmp1818;
frost$core$Object* $tmp1820 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp1817, ((frost$collections$Key*) $tmp1819));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp1820)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1820);
frost$core$String* $tmp1821 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1821));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1822 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp1823 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
*(&local0) = ((frost$core$Error*) NULL);
return ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp1820);
block6:;
// line 535
frost$core$Weak** $tmp1824 = &param0->compiler;
frost$core$Weak* $tmp1825 = *$tmp1824;
frost$core$Object* $tmp1826 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1825);
frost$collections$Stack** $tmp1827 = &((org$frostlang$frostc$Compiler*) $tmp1826)->currentClass;
frost$collections$Stack* $tmp1828 = *$tmp1827;
frost$collections$Stack$push$frost$collections$Stack$T($tmp1828, ((frost$core$Object*) param1));
frost$core$Frost$unref$frost$core$Object$Q($tmp1826);
// line 536
frost$core$Weak** $tmp1829 = &param0->compiler;
frost$core$Weak* $tmp1830 = *$tmp1829;
frost$core$Object* $tmp1831 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1830);
frost$collections$ListView* $tmp1832 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp1831), param1);
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$collections$ListView* $tmp1833 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1833));
*(&local3) = $tmp1832;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q($tmp1831);
// line 537
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$CCodeGenerator$ClassConstant));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1834 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
org$frostlang$frostc$Type** $tmp1835 = &param1->type;
org$frostlang$frostc$Type* $tmp1836 = *$tmp1835;
frost$core$String** $tmp1837 = &((org$frostlang$frostc$Symbol*) $tmp1836)->name;
frost$core$String* $tmp1838 = *$tmp1837;
frost$core$String* $tmp1839 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp1838);
frost$core$String* $tmp1840 = frost$core$String$get_asString$R$frost$core$String($tmp1839);
frost$core$String* $tmp1841 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1840, &$s1842);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp1834, $tmp1841, &$s1843);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1844 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1844));
*(&local1) = $tmp1834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
// line 538
frost$collections$HashMap** $tmp1845 = &param0->classConstants;
frost$collections$HashMap* $tmp1846 = *$tmp1845;
frost$core$String** $tmp1847 = &param1->name;
frost$core$String* $tmp1848 = *$tmp1847;
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1849 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1846, ((frost$collections$Key*) $tmp1848), ((frost$core$Object*) $tmp1849));
// line 539
*(&local4) = ((frost$core$String*) NULL);
// line 540
org$frostlang$frostc$Type** $tmp1850 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1851 = *$tmp1850;
frost$core$Bit $tmp1852 = frost$core$Bit$init$builtin_bit($tmp1851 != NULL);
bool $tmp1853 = $tmp1852.value;
if ($tmp1853) goto block7; else goto block9;
block7:;
// line 541
frost$core$Weak** $tmp1854 = &param0->compiler;
frost$core$Weak* $tmp1855 = *$tmp1854;
frost$core$Object* $tmp1856 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1855);
org$frostlang$frostc$Type** $tmp1857 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1858 = *$tmp1857;
org$frostlang$frostc$ClassDecl* $tmp1859 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1856), $tmp1858);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1860 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1859);
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1861 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
*(&local5) = $tmp1860;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1859));
frost$core$Frost$unref$frost$core$Object$Q($tmp1856);
// line 542
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1862 = *(&local5);
frost$core$String** $tmp1863 = &$tmp1862->name;
frost$core$String* $tmp1864 = *$tmp1863;
frost$core$String* $tmp1865 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1866, $tmp1864);
frost$core$String* $tmp1867 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1865, &$s1868);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$String* $tmp1869 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1869));
*(&local4) = $tmp1867;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1870 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
*(&local5) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block8;
block9:;
// line 1
// line 545
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1871));
frost$core$String* $tmp1872 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
*(&local4) = &$s1873;
goto block8;
block8:;
// line 547
frost$core$Weak** $tmp1874 = &param0->compiler;
frost$core$Weak* $tmp1875 = *$tmp1874;
frost$core$Object* $tmp1876 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1875);
org$frostlang$frostc$Type* $tmp1877 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp1878 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp1876), $tmp1877);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1879 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp1878);
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1880 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1880));
*(&local6) = $tmp1879;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
frost$core$Frost$unref$frost$core$Object$Q($tmp1876);
// line 548
frost$core$String** $tmp1881 = &param1->name;
frost$core$String* $tmp1882 = *$tmp1881;
frost$core$String* $tmp1883 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp1882);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
frost$core$String* $tmp1884 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
*(&local7) = $tmp1883;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1883));
// line 549
frost$core$String* $tmp1885 = *(&local7);
frost$core$Bit $tmp1886 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp1885, &$s1887);
bool $tmp1888 = $tmp1886.value;
if ($tmp1888) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp1889 = (frost$core$Int64) {549};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1890, $tmp1889);
abort(); // unreachable
block10:;
// line 550
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp1891 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp1892 = *(&local7);
frost$core$Int64 $tmp1893 = (frost$core$Int64) {1};
frost$core$Bit $tmp1894 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp1895 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp1893, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp1894);
frost$core$String* $tmp1896 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp1892, $tmp1895);
frost$core$String* $tmp1897 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1898, $tmp1896);
frost$core$String* $tmp1899 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1897, &$s1900);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1901 = *(&local1);
frost$core$String** $tmp1902 = &$tmp1901->name;
frost$core$String* $tmp1903 = *$tmp1902;
frost$core$String* $tmp1904 = frost$core$String$get_asString$R$frost$core$String($tmp1903);
frost$core$String* $tmp1905 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1904, &$s1906);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1907 = *(&local1);
frost$core$String** $tmp1908 = &$tmp1907->name;
frost$core$String* $tmp1909 = *$tmp1908;
frost$core$String* $tmp1910 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1905, $tmp1909);
frost$core$String* $tmp1911 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1910, &$s1912);
frost$core$String* $tmp1913 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1899, $tmp1911);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1914 = *(&local6);
frost$core$String** $tmp1915 = &$tmp1914->name;
frost$core$String* $tmp1916 = *$tmp1915;
frost$core$String* $tmp1917 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1918, $tmp1916);
frost$core$String* $tmp1919 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1917, &$s1920);
frost$core$Int64 $tmp1921 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp1922;
$tmp1922 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1922->value = $tmp1921;
frost$core$String* $tmp1923 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1919, ((frost$core$Object*) $tmp1922));
frost$core$String* $tmp1924 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1923, &$s1925);
frost$core$String* $tmp1926 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1913, $tmp1924);
frost$core$String* $tmp1927 = *(&local7);
frost$core$String* $tmp1928 = frost$core$String$get_asString$R$frost$core$String($tmp1927);
frost$core$String* $tmp1929 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1928, &$s1930);
frost$core$String* $tmp1931 = *(&local4);
frost$core$String* $tmp1932 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1929, $tmp1931);
frost$core$String* $tmp1933 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1932, &$s1934);
frost$core$String* $tmp1935 = org$frostlang$frostc$CCodeGenerator$getITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp1936 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1933, $tmp1935);
frost$core$String* $tmp1937 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1936, &$s1938);
frost$core$String* $tmp1939 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1926, $tmp1937);
frost$core$MutableString$init$frost$core$String($tmp1891, $tmp1939);
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
frost$core$MutableString* $tmp1940 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1940));
*(&local8) = $tmp1891;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1933));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1932));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1917));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1897));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1896));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1891));
// line 554
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1941));
frost$core$String* $tmp1942 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1942));
*(&local9) = &$s1943;
// line 555
frost$collections$ListView* $tmp1944 = *(&local3);
ITable* $tmp1945 = ((frost$collections$Iterable*) $tmp1944)->$class->itable;
while ($tmp1945->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1945 = $tmp1945->next;
}
$fn1947 $tmp1946 = $tmp1945->methods[0];
frost$collections$Iterator* $tmp1948 = $tmp1946(((frost$collections$Iterable*) $tmp1944));
goto block12;
block12:;
ITable* $tmp1949 = $tmp1948->$class->itable;
while ($tmp1949->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1949 = $tmp1949->next;
}
$fn1951 $tmp1950 = $tmp1949->methods[0];
frost$core$Bit $tmp1952 = $tmp1950($tmp1948);
bool $tmp1953 = $tmp1952.value;
if ($tmp1953) goto block14; else goto block13;
block13:;
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1954 = $tmp1948->$class->itable;
while ($tmp1954->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1954 = $tmp1954->next;
}
$fn1956 $tmp1955 = $tmp1954->methods[1];
frost$core$Object* $tmp1957 = $tmp1955($tmp1948);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1957)));
org$frostlang$frostc$MethodDecl* $tmp1958 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) $tmp1957);
// line 556
frost$core$MutableString* $tmp1959 = *(&local8);
frost$core$String* $tmp1960 = *(&local9);
frost$core$MutableString$append$frost$core$String($tmp1959, $tmp1960);
// line 557
org$frostlang$frostc$MethodDecl* $tmp1961 = *(&local10);
org$frostlang$frostc$Annotations** $tmp1962 = &$tmp1961->annotations;
org$frostlang$frostc$Annotations* $tmp1963 = *$tmp1962;
frost$core$Bit $tmp1964 = org$frostlang$frostc$Annotations$get_isAbstract$R$frost$core$Bit($tmp1963);
bool $tmp1965 = $tmp1964.value;
if ($tmp1965) goto block15; else goto block17;
block15:;
// line 558
frost$core$MutableString* $tmp1966 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1966, &$s1967);
goto block16;
block17:;
// line 1
// line 561
frost$core$MutableString* $tmp1968 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp1969 = *(&local10);
frost$core$String* $tmp1970 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp1969);
frost$core$MutableString$append$frost$core$String($tmp1968, $tmp1970);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
goto block16;
block16:;
// line 563
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1971));
frost$core$String* $tmp1972 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
*(&local9) = &$s1973;
frost$core$Frost$unref$frost$core$Object$Q($tmp1957);
org$frostlang$frostc$MethodDecl* $tmp1974 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
*(&local10) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
// line 565
frost$core$MutableString* $tmp1975 = *(&local8);
frost$core$MutableString$append$frost$core$String($tmp1975, &$s1976);
// line 566
frost$io$MemoryOutputStream** $tmp1977 = &param0->types;
frost$io$MemoryOutputStream* $tmp1978 = *$tmp1977;
frost$core$MutableString* $tmp1979 = *(&local8);
frost$core$String* $tmp1980 = frost$core$MutableString$finish$R$frost$core$String($tmp1979);
$fn1982 $tmp1981 = ($fn1982) ((frost$io$OutputStream*) $tmp1978)->$class->vtable[19];
frost$core$Error* $tmp1983 = $tmp1981(((frost$io$OutputStream*) $tmp1978), $tmp1980);
if ($tmp1983 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
*(&local0) = $tmp1983;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$String* $tmp1984 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp1985 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp1986 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1987 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1987));
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp1988 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
*(&local4) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1989 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp1990 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1990));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp1991 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1991));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
// line 567
frost$core$Weak** $tmp1992 = &param0->compiler;
frost$core$Weak* $tmp1993 = *$tmp1992;
frost$core$Object* $tmp1994 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1993);
frost$collections$Stack** $tmp1995 = &((org$frostlang$frostc$Compiler*) $tmp1994)->currentClass;
frost$collections$Stack* $tmp1996 = *$tmp1995;
frost$core$Int64 $tmp1997 = (frost$core$Int64) {0};
frost$core$Object* $tmp1998 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1996, $tmp1997);
bool $tmp1999 = ((org$frostlang$frostc$ClassDecl*) $tmp1998) == param1;
frost$core$Bit $tmp2000 = frost$core$Bit$init$builtin_bit($tmp1999);
bool $tmp2001 = $tmp2000.value;
if ($tmp2001) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp2002 = (frost$core$Int64) {567};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2003, $tmp2002);
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp1998);
frost$core$Frost$unref$frost$core$Object$Q($tmp1994);
// line 568
frost$core$Weak** $tmp2004 = &param0->compiler;
frost$core$Weak* $tmp2005 = *$tmp2004;
frost$core$Object* $tmp2006 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2005);
frost$collections$Stack** $tmp2007 = &((org$frostlang$frostc$Compiler*) $tmp2006)->currentClass;
frost$collections$Stack* $tmp2008 = *$tmp2007;
frost$core$Object* $tmp2009 = frost$collections$Stack$pop$R$frost$collections$Stack$T($tmp2008);
frost$core$Frost$unref$frost$core$Object$Q($tmp2009);
frost$core$Frost$unref$frost$core$Object$Q($tmp2006);
frost$core$String* $tmp2010 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2010));
*(&local9) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2011 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
*(&local8) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2012 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2012));
*(&local7) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2013 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
*(&local6) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2014 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
*(&local4) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp2015 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2015));
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp2016 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
*(&local2) = ((frost$core$String*) NULL);
goto block4;
block4:;
// line 570
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2017 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2018 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp2019 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2017;
block1:;
// line 573
frost$core$Int64 $tmp2020 = (frost$core$Int64) {573};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2021, $tmp2020);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2022 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
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
// line 578
*(&local0) = ((frost$core$Error*) NULL);
// line 579
frost$core$String** $tmp2023 = &param1->name;
frost$core$String* $tmp2024 = *$tmp2023;
frost$core$String* $tmp2025 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2024);
frost$core$String* $tmp2026 = frost$core$String$get_asString$R$frost$core$String($tmp2025);
frost$core$String* $tmp2027 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2026, &$s2028);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
frost$core$String* $tmp2029 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
*(&local1) = $tmp2027;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2025));
// line 580
frost$collections$HashMap** $tmp2030 = &param0->classConstants;
frost$collections$HashMap* $tmp2031 = *$tmp2030;
frost$core$String* $tmp2032 = *(&local1);
frost$core$Object* $tmp2033 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp2031, ((frost$collections$Key*) $tmp2032));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2033)));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2034 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) $tmp2033);
frost$core$Frost$unref$frost$core$Object$Q($tmp2033);
// line 581
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2035 = *(&local2);
frost$core$Bit $tmp2036 = frost$core$Bit$init$builtin_bit($tmp2035 == NULL);
bool $tmp2037 = $tmp2036.value;
if ($tmp2037) goto block3; else goto block4;
block3:;
// line 582
frost$core$Bit $tmp2038 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, param1);
bool $tmp2039 = $tmp2038.value;
if ($tmp2039) goto block5; else goto block7;
block5:;
// line 583
org$frostlang$frostc$Type* $tmp2040 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
frost$core$String* $tmp2041 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp2040);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
// line 584
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2042));
frost$core$String* $tmp2043 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
*(&local3) = &$s2044;
// line 585
frost$io$MemoryOutputStream** $tmp2045 = &param0->types;
frost$io$MemoryOutputStream* $tmp2046 = *$tmp2045;
frost$core$String* $tmp2047 = *(&local1);
frost$core$String* $tmp2048 = frost$core$String$get_asString$R$frost$core$String($tmp2047);
frost$core$String* $tmp2049 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2048, &$s2050);
frost$core$String* $tmp2051 = *(&local3);
frost$core$String* $tmp2052 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2049, $tmp2051);
frost$core$String* $tmp2053 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2052, &$s2054);
$fn2056 $tmp2055 = ($fn2056) ((frost$io$OutputStream*) $tmp2046)->$class->vtable[19];
frost$core$Error* $tmp2057 = $tmp2055(((frost$io$OutputStream*) $tmp2046), $tmp2053);
if ($tmp2057 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
*(&local0) = $tmp2057;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
frost$core$String* $tmp2058 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2059 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2060 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
// line 586
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$CCodeGenerator$ClassConstant));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2061 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
frost$core$String* $tmp2062 = *(&local1);
frost$core$String* $tmp2063 = *(&local3);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2061, $tmp2062, $tmp2063);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2064 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
*(&local2) = $tmp2061;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
frost$core$String* $tmp2065 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block7:;
// line 1
// line 589
frost$core$Weak** $tmp2066 = &param0->compiler;
frost$core$Weak* $tmp2067 = *$tmp2066;
frost$core$Object* $tmp2068 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2067);
org$frostlang$frostc$Type* $tmp2069 = org$frostlang$frostc$Type$Value$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2070 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2068), $tmp2069);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
org$frostlang$frostc$ClassDecl* $tmp2071 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
*(&local4) = $tmp2070;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
frost$core$Frost$unref$frost$core$Object$Q($tmp2068);
// line 590
frost$core$Weak** $tmp2072 = &param0->compiler;
frost$core$Weak* $tmp2073 = *$tmp2072;
frost$core$Object* $tmp2074 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2073);
org$frostlang$frostc$ClassDecl* $tmp2075 = *(&local4);
frost$collections$ListView* $tmp2076 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2074), $tmp2075);
*(&local5) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
frost$collections$ListView* $tmp2077 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
*(&local5) = $tmp2076;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
frost$core$Frost$unref$frost$core$Object$Q($tmp2074);
// line 591
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$CCodeGenerator$ClassConstant));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2078 = (org$frostlang$frostc$CCodeGenerator$ClassConstant*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$ClassConstant$class);
frost$core$String** $tmp2079 = &param1->name;
frost$core$String* $tmp2080 = *$tmp2079;
frost$core$String* $tmp2081 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2080);
frost$core$String* $tmp2082 = frost$core$String$get_asString$R$frost$core$String($tmp2081);
frost$core$String* $tmp2083 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2082, &$s2084);
org$frostlang$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String($tmp2078, $tmp2083, &$s2085);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2086 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
*(&local2) = $tmp2078;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2081));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
// line 592
frost$core$Weak** $tmp2087 = &param0->compiler;
frost$core$Weak* $tmp2088 = *$tmp2087;
frost$core$Object* $tmp2089 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2088);
frost$collections$ListView* $tmp2090 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2089), param1);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
frost$collections$ListView* $tmp2091 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
*(&local6) = $tmp2090;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
frost$core$Frost$unref$frost$core$Object$Q($tmp2089);
// line 593
frost$core$Weak** $tmp2092 = &param0->compiler;
frost$core$Weak* $tmp2093 = *$tmp2092;
frost$core$Object* $tmp2094 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2093);
org$frostlang$frostc$Type** $tmp2095 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp2096 = *$tmp2095;
org$frostlang$frostc$ClassDecl* $tmp2097 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2094), $tmp2096);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2098 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2097);
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2099 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
*(&local7) = $tmp2098;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
frost$core$Frost$unref$frost$core$Object$Q($tmp2094);
// line 594
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2100 = *(&local7);
frost$core$String** $tmp2101 = &$tmp2100->name;
frost$core$String* $tmp2102 = *$tmp2101;
frost$core$String* $tmp2103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2104, $tmp2102);
frost$core$String* $tmp2105 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2103, &$s2106);
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
frost$core$String* $tmp2107 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
*(&local8) = $tmp2105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
// line 595
frost$core$String* $tmp2108 = org$frostlang$frostc$CCodeGenerator$getWrapperITable$org$frostlang$frostc$ClassDecl$R$frost$core$String(param0, param1);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
frost$core$String* $tmp2109 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
*(&local9) = $tmp2108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
// line 596
frost$core$Weak** $tmp2110 = &param0->compiler;
frost$core$Weak* $tmp2111 = *$tmp2110;
frost$core$Object* $tmp2112 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2111);
org$frostlang$frostc$Type* $tmp2113 = org$frostlang$frostc$Type$Class$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2114 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2112), $tmp2113);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2115 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, $tmp2114);
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2116 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2116));
*(&local10) = $tmp2115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
frost$core$Frost$unref$frost$core$Object$Q($tmp2112);
// line 597
frost$core$String** $tmp2117 = &param1->name;
frost$core$String* $tmp2118 = *$tmp2117;
frost$core$String* $tmp2119 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp2118);
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
frost$core$String* $tmp2120 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
*(&local11) = $tmp2119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
// line 598
frost$core$String* $tmp2121 = *(&local11);
frost$core$Bit $tmp2122 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp2121, &$s2123);
bool $tmp2124 = $tmp2122.value;
if ($tmp2124) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp2125 = (frost$core$Int64) {598};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2126, $tmp2125);
abort(); // unreachable
block10:;
// line 599
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2127 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$String* $tmp2128 = *(&local11);
frost$core$Int64 $tmp2129 = (frost$core$Int64) {1};
frost$core$Bit $tmp2130 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp2131 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp2129, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp2130);
frost$core$String* $tmp2132 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp2128, $tmp2131);
frost$core$String* $tmp2133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2134, $tmp2132);
frost$core$String* $tmp2135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2133, &$s2136);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2137 = *(&local2);
frost$core$String** $tmp2138 = &$tmp2137->name;
frost$core$String* $tmp2139 = *$tmp2138;
frost$core$String* $tmp2140 = frost$core$String$get_asString$R$frost$core$String($tmp2139);
frost$core$String* $tmp2141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2140, &$s2142);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2143 = *(&local2);
frost$core$String** $tmp2144 = &$tmp2143->name;
frost$core$String* $tmp2145 = *$tmp2144;
frost$core$String* $tmp2146 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2141, $tmp2145);
frost$core$String* $tmp2147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2146, &$s2148);
frost$core$String* $tmp2149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2135, $tmp2147);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2150 = *(&local10);
frost$core$String** $tmp2151 = &$tmp2150->name;
frost$core$String* $tmp2152 = *$tmp2151;
frost$core$String* $tmp2153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2154, $tmp2152);
frost$core$String* $tmp2155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2153, &$s2156);
frost$core$Int64 $tmp2157 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp2158;
$tmp2158 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2158->value = $tmp2157;
frost$core$String* $tmp2159 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2155, ((frost$core$Object*) $tmp2158));
frost$core$String* $tmp2160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2159, &$s2161);
frost$core$String* $tmp2162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2149, $tmp2160);
frost$core$String* $tmp2163 = *(&local11);
frost$core$String* $tmp2164 = frost$core$String$get_asString$R$frost$core$String($tmp2163);
frost$core$String* $tmp2165 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2164, &$s2166);
frost$core$String* $tmp2167 = *(&local8);
frost$core$String* $tmp2168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2165, $tmp2167);
frost$core$String* $tmp2169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2168, &$s2170);
frost$core$String* $tmp2171 = *(&local9);
frost$core$String* $tmp2172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2169, $tmp2171);
frost$core$String* $tmp2173 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2172, &$s2174);
frost$core$String* $tmp2175 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2162, $tmp2173);
frost$core$MutableString$init$frost$core$String($tmp2127, $tmp2175);
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
frost$core$MutableString* $tmp2176 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
*(&local12) = $tmp2127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
// line 603
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2177));
frost$core$String* $tmp2178 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
*(&local13) = &$s2179;
// line 604
frost$core$Int64 $tmp2180 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2181 = *(&local5);
ITable* $tmp2182 = ((frost$collections$CollectionView*) $tmp2181)->$class->itable;
while ($tmp2182->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2182 = $tmp2182->next;
}
$fn2184 $tmp2183 = $tmp2182->methods[0];
frost$core$Int64 $tmp2185 = $tmp2183(((frost$collections$CollectionView*) $tmp2181));
frost$core$Bit $tmp2186 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2187 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2180, $tmp2185, $tmp2186);
frost$core$Int64 $tmp2188 = $tmp2187.min;
*(&local14) = $tmp2188;
frost$core$Int64 $tmp2189 = $tmp2187.max;
frost$core$Bit $tmp2190 = $tmp2187.inclusive;
bool $tmp2191 = $tmp2190.value;
frost$core$Int64 $tmp2192 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2193 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2192);
if ($tmp2191) goto block15; else goto block16;
block15:;
int64_t $tmp2194 = $tmp2188.value;
int64_t $tmp2195 = $tmp2189.value;
bool $tmp2196 = $tmp2194 <= $tmp2195;
frost$core$Bit $tmp2197 = (frost$core$Bit) {$tmp2196};
bool $tmp2198 = $tmp2197.value;
if ($tmp2198) goto block12; else goto block13;
block16:;
int64_t $tmp2199 = $tmp2188.value;
int64_t $tmp2200 = $tmp2189.value;
bool $tmp2201 = $tmp2199 < $tmp2200;
frost$core$Bit $tmp2202 = (frost$core$Bit) {$tmp2201};
bool $tmp2203 = $tmp2202.value;
if ($tmp2203) goto block12; else goto block13;
block12:;
// line 605
frost$core$MutableString* $tmp2204 = *(&local12);
frost$core$String* $tmp2205 = *(&local13);
frost$core$String* $tmp2206 = frost$core$String$get_asString$R$frost$core$String($tmp2205);
frost$core$String* $tmp2207 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2206, &$s2208);
frost$collections$ListView* $tmp2209 = *(&local6);
frost$core$Int64 $tmp2210 = *(&local14);
ITable* $tmp2211 = $tmp2209->$class->itable;
while ($tmp2211->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2211 = $tmp2211->next;
}
$fn2213 $tmp2212 = $tmp2211->methods[0];
frost$core$Object* $tmp2214 = $tmp2212($tmp2209, $tmp2210);
frost$core$String* $tmp2215 = org$frostlang$frostc$CCodeGenerator$getMethodTableEntry$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, ((org$frostlang$frostc$MethodDecl*) $tmp2214));
frost$core$String* $tmp2216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2207, $tmp2215);
frost$core$String* $tmp2217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2216, &$s2218);
frost$core$MutableString$append$frost$core$String($tmp2204, $tmp2217);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
frost$core$Frost$unref$frost$core$Object$Q($tmp2214);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
// line 606
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2219));
frost$core$String* $tmp2220 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2220));
*(&local13) = &$s2221;
goto block14;
block14:;
frost$core$Int64 $tmp2222 = *(&local14);
int64_t $tmp2223 = $tmp2189.value;
int64_t $tmp2224 = $tmp2222.value;
int64_t $tmp2225 = $tmp2223 - $tmp2224;
frost$core$Int64 $tmp2226 = (frost$core$Int64) {$tmp2225};
frost$core$UInt64 $tmp2227 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2226);
if ($tmp2191) goto block18; else goto block19;
block18:;
uint64_t $tmp2228 = $tmp2227.value;
uint64_t $tmp2229 = $tmp2193.value;
bool $tmp2230 = $tmp2228 >= $tmp2229;
frost$core$Bit $tmp2231 = (frost$core$Bit) {$tmp2230};
bool $tmp2232 = $tmp2231.value;
if ($tmp2232) goto block17; else goto block13;
block19:;
uint64_t $tmp2233 = $tmp2227.value;
uint64_t $tmp2234 = $tmp2193.value;
bool $tmp2235 = $tmp2233 > $tmp2234;
frost$core$Bit $tmp2236 = (frost$core$Bit) {$tmp2235};
bool $tmp2237 = $tmp2236.value;
if ($tmp2237) goto block17; else goto block13;
block17:;
int64_t $tmp2238 = $tmp2222.value;
int64_t $tmp2239 = $tmp2192.value;
int64_t $tmp2240 = $tmp2238 + $tmp2239;
frost$core$Int64 $tmp2241 = (frost$core$Int64) {$tmp2240};
*(&local14) = $tmp2241;
goto block12;
block13:;
// line 608
frost$core$MutableString* $tmp2242 = *(&local12);
frost$core$MutableString$append$frost$core$String($tmp2242, &$s2243);
// line 609
frost$io$MemoryOutputStream** $tmp2244 = &param0->types;
frost$io$MemoryOutputStream* $tmp2245 = *$tmp2244;
frost$core$MutableString* $tmp2246 = *(&local12);
frost$core$String* $tmp2247 = frost$core$MutableString$finish$R$frost$core$String($tmp2246);
$fn2249 $tmp2248 = ($fn2249) ((frost$io$OutputStream*) $tmp2245)->$class->vtable[17];
frost$core$Error* $tmp2250 = $tmp2248(((frost$io$OutputStream*) $tmp2245), $tmp2247);
if ($tmp2250 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
*(&local0) = $tmp2250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
frost$core$String* $tmp2251 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
*(&local13) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2252 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2252));
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2253 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2253));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2254 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2255 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp2256 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2257 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$collections$ListView* $tmp2258 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp2259 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2260 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2261 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2262 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2262));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
frost$core$String* $tmp2263 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
*(&local13) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp2264 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2264));
*(&local12) = ((frost$core$MutableString*) NULL);
frost$core$String* $tmp2265 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
*(&local11) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2266 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
*(&local10) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2267 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp2268 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
*(&local8) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2269 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
*(&local7) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$collections$ListView* $tmp2270 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp2271 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
*(&local5) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2272 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block6;
block6:;
// line 611
frost$collections$HashMap** $tmp2273 = &param0->classConstants;
frost$collections$HashMap* $tmp2274 = *$tmp2273;
frost$core$String* $tmp2275 = *(&local1);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2276 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp2274, ((frost$collections$Key*) $tmp2275), ((frost$core$Object*) $tmp2276));
goto block4;
block4:;
// line 613
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2277 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2278 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
*(&local2) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$String* $tmp2279 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2280 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2277;
block1:;
// line 616
frost$core$Int64 $tmp2281 = (frost$core$Int64) {616};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2282, $tmp2281);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2283 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
*(&local0) = ((frost$core$Error*) NULL);
goto block22;
block22:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$Variable$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Variable* param1) {

frost$core$String* local0 = NULL;
// line 621
org$frostlang$frostc$Variable$Storage** $tmp2284 = &param1->storage;
org$frostlang$frostc$Variable$Storage* $tmp2285 = *$tmp2284;
frost$core$Int64* $tmp2286 = &$tmp2285->$rawValue;
frost$core$Int64 $tmp2287 = *$tmp2286;
frost$core$Int64 $tmp2288 = (frost$core$Int64) {1};
frost$core$Bit $tmp2289 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2287, $tmp2288);
bool $tmp2290 = $tmp2289.value;
if ($tmp2290) goto block2; else goto block1;
block2:;
// line 623
frost$core$String** $tmp2291 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2292 = *$tmp2291;
frost$core$String* $tmp2293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2294, $tmp2292);
frost$core$String* $tmp2295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2293, &$s2296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
return $tmp2295;
block1:;
// line 626
frost$collections$IdentityMap** $tmp2297 = &param0->variableNames;
frost$collections$IdentityMap* $tmp2298 = *$tmp2297;
frost$core$Object* $tmp2299 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q($tmp2298, ((frost$core$Object*) param1));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp2299)));
frost$core$String* $tmp2300 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
*(&local0) = ((frost$core$String*) $tmp2299);
frost$core$Frost$unref$frost$core$Object$Q($tmp2299);
// line 627
frost$core$String* $tmp2301 = *(&local0);
frost$core$Bit $tmp2302 = frost$core$Bit$init$builtin_bit($tmp2301 == NULL);
bool $tmp2303 = $tmp2302.value;
if ($tmp2303) goto block3; else goto block4;
block3:;
// line 628
frost$core$Int64* $tmp2304 = &param0->varCount;
frost$core$Int64 $tmp2305 = *$tmp2304;
frost$core$Int64 $tmp2306 = (frost$core$Int64) {1};
int64_t $tmp2307 = $tmp2305.value;
int64_t $tmp2308 = $tmp2306.value;
int64_t $tmp2309 = $tmp2307 + $tmp2308;
frost$core$Int64 $tmp2310 = (frost$core$Int64) {$tmp2309};
frost$core$Int64* $tmp2311 = &param0->varCount;
*$tmp2311 = $tmp2310;
// line 629
frost$core$String** $tmp2312 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2313 = *$tmp2312;
frost$core$String* $tmp2314 = frost$core$String$get_asString$R$frost$core$String($tmp2313);
frost$core$String* $tmp2315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2314, &$s2316);
frost$core$Int64* $tmp2317 = &param0->varCount;
frost$core$Int64 $tmp2318 = *$tmp2317;
frost$core$Int64$wrapper* $tmp2319;
$tmp2319 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2319->value = $tmp2318;
frost$core$String* $tmp2320 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2315, ((frost$core$Object*) $tmp2319));
frost$core$String* $tmp2321 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2320, &$s2322);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
frost$core$String* $tmp2323 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2323));
*(&local0) = $tmp2321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2314));
// line 630
frost$collections$IdentityMap** $tmp2324 = &param0->variableNames;
frost$collections$IdentityMap* $tmp2325 = *$tmp2324;
frost$core$String* $tmp2326 = *(&local0);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V($tmp2325, ((frost$core$Object*) param1), ((frost$core$Object*) $tmp2326));
goto block4;
block4:;
// line 632
frost$core$String* $tmp2327 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
frost$core$String* $tmp2328 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
*(&local0) = ((frost$core$String*) NULL);
return $tmp2327;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$FieldDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

// line 636
org$frostlang$frostc$Annotations** $tmp2329 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp2330 = *$tmp2329;
frost$core$Bit $tmp2331 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2330);
bool $tmp2332 = $tmp2331.value;
if ($tmp2332) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2333 = (frost$core$Int64) {636};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2334, $tmp2333);
abort(); // unreachable
block1:;
// line 637
frost$core$Weak** $tmp2335 = &param1->owner;
frost$core$Weak* $tmp2336 = *$tmp2335;
frost$core$Object* $tmp2337 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2336);
frost$core$String** $tmp2338 = &((org$frostlang$frostc$ClassDecl*) $tmp2337)->name;
frost$core$String* $tmp2339 = *$tmp2338;
frost$core$String* $tmp2340 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp2339);
frost$core$String* $tmp2341 = frost$core$String$get_asString$R$frost$core$String($tmp2340);
frost$core$String* $tmp2342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2341, &$s2343);
frost$core$String** $tmp2344 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp2345 = *$tmp2344;
frost$core$String* $tmp2346 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2342, $tmp2345);
frost$core$String* $tmp2347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2346, &$s2348);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2346));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
frost$core$Frost$unref$frost$core$Object$Q($tmp2337);
return $tmp2347;

}
org$frostlang$frostc$CCodeGenerator$OpClass org$frostlang$frostc$CCodeGenerator$opClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$CCodeGenerator$OpClass(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 648
org$frostlang$frostc$Type$Kind* $tmp2349 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp2350 = *$tmp2349;
frost$core$Int64 $tmp2351 = $tmp2350.$rawValue;
frost$core$Int64 $tmp2352 = (frost$core$Int64) {2};
frost$core$Bit $tmp2353 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2351, $tmp2352);
bool $tmp2354 = $tmp2353.value;
if ($tmp2354) goto block2; else goto block3;
block2:;
// line 650
frost$core$Int64 $tmp2355 = (frost$core$Int64) {0};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2356 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2355);
return $tmp2356;
block3:;
frost$core$Int64 $tmp2357 = (frost$core$Int64) {3};
frost$core$Bit $tmp2358 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2351, $tmp2357);
bool $tmp2359 = $tmp2358.value;
if ($tmp2359) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp2360 = (frost$core$Int64) {8};
frost$core$Bit $tmp2361 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2351, $tmp2360);
bool $tmp2362 = $tmp2361.value;
if ($tmp2362) goto block4; else goto block6;
block4:;
// line 653
frost$core$Int64 $tmp2363 = (frost$core$Int64) {1};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2364 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2363);
return $tmp2364;
block6:;
frost$core$Int64 $tmp2365 = (frost$core$Int64) {9};
frost$core$Bit $tmp2366 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2351, $tmp2365);
bool $tmp2367 = $tmp2366.value;
if ($tmp2367) goto block7; else goto block8;
block7:;
// line 656
frost$core$Int64 $tmp2368 = (frost$core$Int64) {2};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2369 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2368);
return $tmp2369;
block8:;
// line 659
frost$core$Int64 $tmp2370 = (frost$core$Int64) {3};
org$frostlang$frostc$CCodeGenerator$OpClass $tmp2371 = org$frostlang$frostc$CCodeGenerator$OpClass$init$frost$core$Int64($tmp2370);
return $tmp2371;
block1:;
goto block9;
block9:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getBinaryReference$org$frostlang$frostc$Type$frost$core$String$org$frostlang$frostc$expression$Binary$Operator$frost$core$String$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$String* param2, org$frostlang$frostc$expression$Binary$Operator param3, frost$core$String* param4, frost$io$IndentedOutputStream* param5) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Bit local2;
frost$core$String* local3 = NULL;
// line 666
*(&local0) = ((frost$core$Error*) NULL);
// line 667
*(&local1) = ((frost$core$String*) NULL);
// line 668
frost$core$Bit $tmp2372 = frost$core$Bit$init$builtin_bit(false);
*(&local2) = $tmp2372;
// line 669
frost$core$Int64 $tmp2373 = param3.$rawValue;
frost$core$Int64 $tmp2374 = (frost$core$Int64) {0};
frost$core$Bit $tmp2375 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2374);
bool $tmp2376 = $tmp2375.value;
if ($tmp2376) goto block4; else goto block5;
block4:;
// line 671
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2377));
frost$core$String* $tmp2378 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2378));
*(&local1) = &$s2379;
goto block3;
block5:;
frost$core$Int64 $tmp2380 = (frost$core$Int64) {1};
frost$core$Bit $tmp2381 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2380);
bool $tmp2382 = $tmp2381.value;
if ($tmp2382) goto block6; else goto block7;
block6:;
// line 674
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2383));
frost$core$String* $tmp2384 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2384));
*(&local1) = &$s2385;
goto block3;
block7:;
frost$core$Int64 $tmp2386 = (frost$core$Int64) {2};
frost$core$Bit $tmp2387 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2386);
bool $tmp2388 = $tmp2387.value;
if ($tmp2388) goto block8; else goto block9;
block8:;
// line 677
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2389));
frost$core$String* $tmp2390 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
*(&local1) = &$s2391;
goto block3;
block9:;
frost$core$Int64 $tmp2392 = (frost$core$Int64) {4};
frost$core$Bit $tmp2393 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2392);
bool $tmp2394 = $tmp2393.value;
if ($tmp2394) goto block10; else goto block11;
block10:;
// line 680
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2395));
frost$core$String* $tmp2396 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
*(&local1) = &$s2397;
goto block3;
block11:;
frost$core$Int64 $tmp2398 = (frost$core$Int64) {3};
frost$core$Bit $tmp2399 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2398);
bool $tmp2400 = $tmp2399.value;
if ($tmp2400) goto block12; else goto block13;
block12:;
// line 683
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2401));
frost$core$String* $tmp2402 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
*(&local1) = &$s2403;
goto block3;
block13:;
frost$core$Int64 $tmp2404 = (frost$core$Int64) {5};
frost$core$Bit $tmp2405 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2404);
bool $tmp2406 = $tmp2405.value;
if ($tmp2406) goto block14; else goto block15;
block14:;
// line 686
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2407));
frost$core$String* $tmp2408 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
*(&local1) = &$s2409;
goto block3;
block15:;
frost$core$Int64 $tmp2410 = (frost$core$Int64) {18};
frost$core$Bit $tmp2411 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2410);
bool $tmp2412 = $tmp2411.value;
if ($tmp2412) goto block16; else goto block17;
block16:;
// line 689
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2413));
frost$core$String* $tmp2414 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
*(&local1) = &$s2415;
goto block3;
block17:;
frost$core$Int64 $tmp2416 = (frost$core$Int64) {19};
frost$core$Bit $tmp2417 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2416);
bool $tmp2418 = $tmp2417.value;
if ($tmp2418) goto block18; else goto block19;
block18:;
// line 692
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2419));
frost$core$String* $tmp2420 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
*(&local1) = &$s2421;
goto block3;
block19:;
frost$core$Int64 $tmp2422 = (frost$core$Int64) {15};
frost$core$Bit $tmp2423 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2422);
bool $tmp2424 = $tmp2423.value;
if ($tmp2424) goto block20; else goto block21;
block20:;
// line 695
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2425));
frost$core$String* $tmp2426 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
*(&local1) = &$s2427;
goto block3;
block21:;
frost$core$Int64 $tmp2428 = (frost$core$Int64) {13};
frost$core$Bit $tmp2429 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2428);
bool $tmp2430 = $tmp2429.value;
if ($tmp2430) goto block22; else goto block23;
block22:;
// line 698
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2431));
frost$core$String* $tmp2432 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
*(&local1) = &$s2433;
goto block3;
block23:;
frost$core$Int64 $tmp2434 = (frost$core$Int64) {16};
frost$core$Bit $tmp2435 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2434);
bool $tmp2436 = $tmp2435.value;
if ($tmp2436) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp2437 = (frost$core$Int64) {17};
frost$core$Bit $tmp2438 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2437);
bool $tmp2439 = $tmp2438.value;
if ($tmp2439) goto block24; else goto block26;
block24:;
// line 701
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2440));
frost$core$String* $tmp2441 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
*(&local1) = &$s2442;
goto block3;
block26:;
frost$core$Int64 $tmp2443 = (frost$core$Int64) {6};
frost$core$Bit $tmp2444 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2443);
bool $tmp2445 = $tmp2444.value;
if ($tmp2445) goto block27; else goto block28;
block27:;
// line 704
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2446));
frost$core$String* $tmp2447 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2447));
*(&local1) = &$s2448;
// line 705
frost$core$Bit $tmp2449 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2449;
goto block3;
block28:;
frost$core$Int64 $tmp2450 = (frost$core$Int64) {7};
frost$core$Bit $tmp2451 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2450);
bool $tmp2452 = $tmp2451.value;
if ($tmp2452) goto block29; else goto block30;
block29:;
// line 708
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2453));
frost$core$String* $tmp2454 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
*(&local1) = &$s2455;
// line 709
frost$core$Bit $tmp2456 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2456;
goto block3;
block30:;
frost$core$Int64 $tmp2457 = (frost$core$Int64) {8};
frost$core$Bit $tmp2458 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2457);
bool $tmp2459 = $tmp2458.value;
if ($tmp2459) goto block31; else goto block32;
block31:;
// line 712
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2460));
frost$core$String* $tmp2461 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
*(&local1) = &$s2462;
// line 713
frost$core$Bit $tmp2463 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2463;
goto block3;
block32:;
frost$core$Int64 $tmp2464 = (frost$core$Int64) {9};
frost$core$Bit $tmp2465 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2464);
bool $tmp2466 = $tmp2465.value;
if ($tmp2466) goto block33; else goto block34;
block33:;
// line 716
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2467));
frost$core$String* $tmp2468 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
*(&local1) = &$s2469;
// line 717
frost$core$Bit $tmp2470 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2470;
goto block3;
block34:;
frost$core$Int64 $tmp2471 = (frost$core$Int64) {10};
frost$core$Bit $tmp2472 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2471);
bool $tmp2473 = $tmp2472.value;
if ($tmp2473) goto block35; else goto block36;
block35:;
// line 720
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2474));
frost$core$String* $tmp2475 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
*(&local1) = &$s2476;
// line 721
frost$core$Bit $tmp2477 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2477;
goto block3;
block36:;
frost$core$Int64 $tmp2478 = (frost$core$Int64) {11};
frost$core$Bit $tmp2479 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2373, $tmp2478);
bool $tmp2480 = $tmp2479.value;
if ($tmp2480) goto block37; else goto block38;
block37:;
// line 724
frost$core$Bit $tmp2481 = frost$core$Bit$init$builtin_bit(true);
*(&local2) = $tmp2481;
// line 725
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s2482));
frost$core$String* $tmp2483 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
*(&local1) = &$s2484;
goto block3;
block38:;
// line 728
frost$core$Int64 $tmp2485 = (frost$core$Int64) {728};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2486, $tmp2485);
abort(); // unreachable
block3:;
// line 731
frost$core$String* $tmp2487 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
frost$core$String* $tmp2488 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2488));
*(&local3) = $tmp2487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
// line 732
frost$core$Bit $tmp2489 = *(&local2);
bool $tmp2490 = $tmp2489.value;
if ($tmp2490) goto block39; else goto block41;
block39:;
// line 733
$fn2492 $tmp2491 = ($fn2492) ((frost$io$OutputStream*) param5)->$class->vtable[17];
frost$core$Error* $tmp2493 = $tmp2491(((frost$io$OutputStream*) param5), &$s2494);
if ($tmp2493 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
*(&local0) = $tmp2493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
frost$core$String* $tmp2495 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2495));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2496 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2496));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2493));
goto block40;
block41:;
// line 1
// line 736
frost$core$String* $tmp2497 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp2498 = frost$core$String$get_asString$R$frost$core$String($tmp2497);
frost$core$String* $tmp2499 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2498, &$s2500);
$fn2502 $tmp2501 = ($fn2502) ((frost$io$OutputStream*) param5)->$class->vtable[17];
frost$core$Error* $tmp2503 = $tmp2501(((frost$io$OutputStream*) param5), $tmp2499);
if ($tmp2503 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
*(&local0) = $tmp2503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
frost$core$String* $tmp2504 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2505 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2505));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
goto block40;
block40:;
// line 738
frost$core$String* $tmp2506 = *(&local3);
frost$core$String* $tmp2507 = frost$core$String$get_asString$R$frost$core$String($tmp2506);
frost$core$String* $tmp2508 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2507, &$s2509);
frost$core$String* $tmp2510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2508, param2);
frost$core$String* $tmp2511 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2510, &$s2512);
frost$core$String* $tmp2513 = *(&local1);
frost$core$String* $tmp2514 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2511, $tmp2513);
frost$core$String* $tmp2515 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2514, &$s2516);
frost$core$String* $tmp2517 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2515, param4);
frost$core$String* $tmp2518 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2517, &$s2519);
$fn2521 $tmp2520 = ($fn2521) ((frost$io$OutputStream*) param5)->$class->vtable[19];
frost$core$Error* $tmp2522 = $tmp2520(((frost$io$OutputStream*) param5), $tmp2518);
if ($tmp2522 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
*(&local0) = $tmp2522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
frost$core$String* $tmp2523 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2524 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
// line 739
frost$core$String* $tmp2525 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2525));
frost$core$String* $tmp2526 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2527 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2528 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2525;
block1:;
// line 742
frost$core$Int64 $tmp2529 = (frost$core$Int64) {742};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2530, $tmp2529);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2531 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
*(&local0) = ((frost$core$Error*) NULL);
goto block48;
block48:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$MethodDecl* param2, frost$io$IndentedOutputStream* param3) {

org$frostlang$frostc$CCodeGenerator$ClassConstant* local0 = NULL;
frost$core$Int64 local1;
frost$collections$ListView* local2 = NULL;
frost$core$Int64 local3;
// line 747
frost$core$Weak** $tmp2532 = &param2->owner;
frost$core$Weak* $tmp2533 = *$tmp2532;
frost$core$Object* $tmp2534 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2533);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2535 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2534));
*(&local0) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2536 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
*(&local0) = $tmp2535;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
frost$core$Frost$unref$frost$core$Object$Q($tmp2534);
// line 748
frost$core$Int64 $tmp2537 = (frost$core$Int64) {18446744073709551615};
*(&local1) = $tmp2537;
// line 749
frost$core$Weak** $tmp2538 = &param0->compiler;
frost$core$Weak* $tmp2539 = *$tmp2538;
frost$core$Object* $tmp2540 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2539);
frost$core$Weak** $tmp2541 = &param2->owner;
frost$core$Weak* $tmp2542 = *$tmp2541;
frost$core$Object* $tmp2543 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2542);
frost$collections$ListView* $tmp2544 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2540), ((org$frostlang$frostc$ClassDecl*) $tmp2543));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
frost$collections$ListView* $tmp2545 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2545));
*(&local2) = $tmp2544;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
frost$core$Frost$unref$frost$core$Object$Q($tmp2543);
frost$core$Frost$unref$frost$core$Object$Q($tmp2540);
// line 750
frost$core$Int64 $tmp2546 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2547 = *(&local2);
ITable* $tmp2548 = ((frost$collections$CollectionView*) $tmp2547)->$class->itable;
while ($tmp2548->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2548 = $tmp2548->next;
}
$fn2550 $tmp2549 = $tmp2548->methods[0];
frost$core$Int64 $tmp2551 = $tmp2549(((frost$collections$CollectionView*) $tmp2547));
frost$core$Bit $tmp2552 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2553 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2546, $tmp2551, $tmp2552);
frost$core$Int64 $tmp2554 = $tmp2553.min;
*(&local3) = $tmp2554;
frost$core$Int64 $tmp2555 = $tmp2553.max;
frost$core$Bit $tmp2556 = $tmp2553.inclusive;
bool $tmp2557 = $tmp2556.value;
frost$core$Int64 $tmp2558 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2559 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2558);
if ($tmp2557) goto block4; else goto block5;
block4:;
int64_t $tmp2560 = $tmp2554.value;
int64_t $tmp2561 = $tmp2555.value;
bool $tmp2562 = $tmp2560 <= $tmp2561;
frost$core$Bit $tmp2563 = (frost$core$Bit) {$tmp2562};
bool $tmp2564 = $tmp2563.value;
if ($tmp2564) goto block1; else goto block2;
block5:;
int64_t $tmp2565 = $tmp2554.value;
int64_t $tmp2566 = $tmp2555.value;
bool $tmp2567 = $tmp2565 < $tmp2566;
frost$core$Bit $tmp2568 = (frost$core$Bit) {$tmp2567};
bool $tmp2569 = $tmp2568.value;
if ($tmp2569) goto block1; else goto block2;
block1:;
// line 751
frost$collections$ListView* $tmp2570 = *(&local2);
frost$core$Int64 $tmp2571 = *(&local3);
ITable* $tmp2572 = $tmp2570->$class->itable;
while ($tmp2572->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2572 = $tmp2572->next;
}
$fn2574 $tmp2573 = $tmp2572->methods[0];
frost$core$Object* $tmp2575 = $tmp2573($tmp2570, $tmp2571);
bool $tmp2576 = ((org$frostlang$frostc$MethodDecl*) $tmp2575) == param2;
frost$core$Bit $tmp2577 = frost$core$Bit$init$builtin_bit($tmp2576);
bool $tmp2578 = $tmp2577.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2575);
if ($tmp2578) goto block6; else goto block7;
block6:;
// line 752
frost$core$Int64 $tmp2579 = *(&local3);
*(&local1) = $tmp2579;
// line 753
goto block2;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp2580 = *(&local3);
int64_t $tmp2581 = $tmp2555.value;
int64_t $tmp2582 = $tmp2580.value;
int64_t $tmp2583 = $tmp2581 - $tmp2582;
frost$core$Int64 $tmp2584 = (frost$core$Int64) {$tmp2583};
frost$core$UInt64 $tmp2585 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2584);
if ($tmp2557) goto block9; else goto block10;
block9:;
uint64_t $tmp2586 = $tmp2585.value;
uint64_t $tmp2587 = $tmp2559.value;
bool $tmp2588 = $tmp2586 >= $tmp2587;
frost$core$Bit $tmp2589 = (frost$core$Bit) {$tmp2588};
bool $tmp2590 = $tmp2589.value;
if ($tmp2590) goto block8; else goto block2;
block10:;
uint64_t $tmp2591 = $tmp2585.value;
uint64_t $tmp2592 = $tmp2559.value;
bool $tmp2593 = $tmp2591 > $tmp2592;
frost$core$Bit $tmp2594 = (frost$core$Bit) {$tmp2593};
bool $tmp2595 = $tmp2594.value;
if ($tmp2595) goto block8; else goto block2;
block8:;
int64_t $tmp2596 = $tmp2580.value;
int64_t $tmp2597 = $tmp2558.value;
int64_t $tmp2598 = $tmp2596 + $tmp2597;
frost$core$Int64 $tmp2599 = (frost$core$Int64) {$tmp2598};
*(&local3) = $tmp2599;
goto block1;
block2:;
// line 756
frost$core$Int64 $tmp2600 = *(&local1);
frost$core$Int64 $tmp2601 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2602 = $tmp2600.value;
int64_t $tmp2603 = $tmp2601.value;
bool $tmp2604 = $tmp2602 != $tmp2603;
frost$core$Bit $tmp2605 = (frost$core$Bit) {$tmp2604};
bool $tmp2606 = $tmp2605.value;
if ($tmp2606) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2607 = (frost$core$Int64) {756};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2608, $tmp2607);
abort(); // unreachable
block11:;
// line 757
frost$core$Weak** $tmp2609 = &param0->compiler;
frost$core$Weak* $tmp2610 = *$tmp2609;
frost$core$Object* $tmp2611 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2610);
org$frostlang$frostc$Type* $tmp2612 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp2611), param2);
frost$core$String* $tmp2613 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, $tmp2612, ((org$frostlang$frostc$Type*) NULL));
frost$core$String* $tmp2614 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2615, $tmp2613);
frost$core$String* $tmp2616 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2614, &$s2617);
frost$core$String* $tmp2618 = frost$core$String$get_asString$R$frost$core$String(param1);
frost$core$String* $tmp2619 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2618, &$s2620);
frost$core$Int64 $tmp2621 = *(&local1);
frost$core$Int64$wrapper* $tmp2622;
$tmp2622 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2622->value = $tmp2621;
frost$core$String* $tmp2623 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2619, ((frost$core$Object*) $tmp2622));
frost$core$String* $tmp2624 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2623, &$s2625);
frost$core$String* $tmp2626 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2616, $tmp2624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
frost$core$Frost$unref$frost$core$Object$Q($tmp2611);
frost$collections$ListView* $tmp2627 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
*(&local2) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2628 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
*(&local0) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
return $tmp2626;

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
// line 763
*(&local0) = ((frost$core$Error*) NULL);
// line 764
frost$core$Weak** $tmp2629 = &param2->owner;
frost$core$Weak* $tmp2630 = *$tmp2629;
frost$core$Object* $tmp2631 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2630);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2632 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2631));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2633 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2633));
*(&local1) = $tmp2632;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
frost$core$Frost$unref$frost$core$Object$Q($tmp2631);
// line 765
frost$core$String* $tmp2634 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
frost$core$String* $tmp2635 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
*(&local2) = $tmp2634;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
// line 766
frost$core$String* $tmp2636 = *(&local2);
frost$core$String* $tmp2637 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2638, $tmp2636);
frost$core$String* $tmp2639 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2637, &$s2640);
frost$core$String* $tmp2641 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2639, param1);
frost$core$String* $tmp2642 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2641, &$s2643);
$fn2645 $tmp2644 = ($fn2645) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2646 = $tmp2644(((frost$io$OutputStream*) param3), $tmp2642);
if ($tmp2646 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
*(&local0) = $tmp2646;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
frost$core$String* $tmp2647 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2648 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
// line 767
frost$core$String* $tmp2649 = *(&local2);
frost$core$String* $tmp2650 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2651, $tmp2649);
frost$core$String* $tmp2652 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2650, &$s2653);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2654 = *(&local1);
frost$core$String** $tmp2655 = &$tmp2654->name;
frost$core$String* $tmp2656 = *$tmp2655;
frost$core$String* $tmp2657 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2652, $tmp2656);
frost$core$String* $tmp2658 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2657, &$s2659);
$fn2661 $tmp2660 = ($fn2661) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2662 = $tmp2660(((frost$io$OutputStream*) param3), $tmp2658);
if ($tmp2662 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
*(&local0) = $tmp2662;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
frost$core$String* $tmp2663 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2664 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
// line 768
frost$core$Int64* $tmp2665 = &param3->level;
frost$core$Int64 $tmp2666 = *$tmp2665;
frost$core$Int64 $tmp2667 = (frost$core$Int64) {1};
int64_t $tmp2668 = $tmp2666.value;
int64_t $tmp2669 = $tmp2667.value;
int64_t $tmp2670 = $tmp2668 + $tmp2669;
frost$core$Int64 $tmp2671 = (frost$core$Int64) {$tmp2670};
frost$core$Int64* $tmp2672 = &param3->level;
*$tmp2672 = $tmp2671;
// line 769
frost$core$String* $tmp2673 = *(&local2);
frost$core$String* $tmp2674 = frost$core$String$get_asString$R$frost$core$String($tmp2673);
frost$core$String* $tmp2675 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2674, &$s2676);
frost$core$String* $tmp2677 = *(&local2);
frost$core$String* $tmp2678 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2675, $tmp2677);
frost$core$String* $tmp2679 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2678, &$s2680);
$fn2682 $tmp2681 = ($fn2682) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2683 = $tmp2681(((frost$io$OutputStream*) param3), $tmp2679);
if ($tmp2683 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
*(&local0) = $tmp2683;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
frost$core$String* $tmp2684 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2685 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
// line 770
frost$core$Int64* $tmp2686 = &param3->level;
frost$core$Int64 $tmp2687 = *$tmp2686;
frost$core$Int64 $tmp2688 = (frost$core$Int64) {1};
int64_t $tmp2689 = $tmp2687.value;
int64_t $tmp2690 = $tmp2688.value;
int64_t $tmp2691 = $tmp2689 - $tmp2690;
frost$core$Int64 $tmp2692 = (frost$core$Int64) {$tmp2691};
frost$core$Int64* $tmp2693 = &param3->level;
*$tmp2693 = $tmp2692;
// line 771
$fn2695 $tmp2694 = ($fn2695) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2696 = $tmp2694(((frost$io$OutputStream*) param3), &$s2697);
if ($tmp2696 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
*(&local0) = $tmp2696;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
frost$core$String* $tmp2698 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2699 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2696));
// line 772
frost$core$Int64 $tmp2700 = (frost$core$Int64) {18446744073709551615};
*(&local3) = $tmp2700;
// line 773
frost$core$Weak** $tmp2701 = &param0->compiler;
frost$core$Weak* $tmp2702 = *$tmp2701;
frost$core$Object* $tmp2703 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2702);
frost$core$Weak** $tmp2704 = &param2->owner;
frost$core$Weak* $tmp2705 = *$tmp2704;
frost$core$Object* $tmp2706 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2705);
frost$collections$ListView* $tmp2707 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2703), ((org$frostlang$frostc$ClassDecl*) $tmp2706));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
frost$collections$ListView* $tmp2708 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2708));
*(&local4) = $tmp2707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
frost$core$Frost$unref$frost$core$Object$Q($tmp2706);
frost$core$Frost$unref$frost$core$Object$Q($tmp2703);
// line 774
frost$core$Int64 $tmp2709 = (frost$core$Int64) {0};
frost$collections$ListView* $tmp2710 = *(&local4);
ITable* $tmp2711 = ((frost$collections$CollectionView*) $tmp2710)->$class->itable;
while ($tmp2711->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2711 = $tmp2711->next;
}
$fn2713 $tmp2712 = $tmp2711->methods[0];
frost$core$Int64 $tmp2714 = $tmp2712(((frost$collections$CollectionView*) $tmp2710));
frost$core$Bit $tmp2715 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2716 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2709, $tmp2714, $tmp2715);
frost$core$Int64 $tmp2717 = $tmp2716.min;
*(&local5) = $tmp2717;
frost$core$Int64 $tmp2718 = $tmp2716.max;
frost$core$Bit $tmp2719 = $tmp2716.inclusive;
bool $tmp2720 = $tmp2719.value;
frost$core$Int64 $tmp2721 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2722 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2721);
if ($tmp2720) goto block14; else goto block15;
block14:;
int64_t $tmp2723 = $tmp2717.value;
int64_t $tmp2724 = $tmp2718.value;
bool $tmp2725 = $tmp2723 <= $tmp2724;
frost$core$Bit $tmp2726 = (frost$core$Bit) {$tmp2725};
bool $tmp2727 = $tmp2726.value;
if ($tmp2727) goto block11; else goto block12;
block15:;
int64_t $tmp2728 = $tmp2717.value;
int64_t $tmp2729 = $tmp2718.value;
bool $tmp2730 = $tmp2728 < $tmp2729;
frost$core$Bit $tmp2731 = (frost$core$Bit) {$tmp2730};
bool $tmp2732 = $tmp2731.value;
if ($tmp2732) goto block11; else goto block12;
block11:;
// line 775
frost$collections$ListView* $tmp2733 = *(&local4);
frost$core$Int64 $tmp2734 = *(&local5);
ITable* $tmp2735 = $tmp2733->$class->itable;
while ($tmp2735->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2735 = $tmp2735->next;
}
$fn2737 $tmp2736 = $tmp2735->methods[0];
frost$core$Object* $tmp2738 = $tmp2736($tmp2733, $tmp2734);
bool $tmp2739 = ((org$frostlang$frostc$MethodDecl*) $tmp2738) == param2;
frost$core$Bit $tmp2740 = frost$core$Bit$init$builtin_bit($tmp2739);
bool $tmp2741 = $tmp2740.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2738);
if ($tmp2741) goto block16; else goto block17;
block16:;
// line 776
frost$core$Int64 $tmp2742 = *(&local5);
*(&local3) = $tmp2742;
// line 777
goto block12;
block17:;
goto block13;
block13:;
frost$core$Int64 $tmp2743 = *(&local5);
int64_t $tmp2744 = $tmp2718.value;
int64_t $tmp2745 = $tmp2743.value;
int64_t $tmp2746 = $tmp2744 - $tmp2745;
frost$core$Int64 $tmp2747 = (frost$core$Int64) {$tmp2746};
frost$core$UInt64 $tmp2748 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2747);
if ($tmp2720) goto block19; else goto block20;
block19:;
uint64_t $tmp2749 = $tmp2748.value;
uint64_t $tmp2750 = $tmp2722.value;
bool $tmp2751 = $tmp2749 >= $tmp2750;
frost$core$Bit $tmp2752 = (frost$core$Bit) {$tmp2751};
bool $tmp2753 = $tmp2752.value;
if ($tmp2753) goto block18; else goto block12;
block20:;
uint64_t $tmp2754 = $tmp2748.value;
uint64_t $tmp2755 = $tmp2722.value;
bool $tmp2756 = $tmp2754 > $tmp2755;
frost$core$Bit $tmp2757 = (frost$core$Bit) {$tmp2756};
bool $tmp2758 = $tmp2757.value;
if ($tmp2758) goto block18; else goto block12;
block18:;
int64_t $tmp2759 = $tmp2743.value;
int64_t $tmp2760 = $tmp2721.value;
int64_t $tmp2761 = $tmp2759 + $tmp2760;
frost$core$Int64 $tmp2762 = (frost$core$Int64) {$tmp2761};
*(&local5) = $tmp2762;
goto block11;
block12:;
// line 780
frost$core$Int64 $tmp2763 = *(&local3);
frost$core$Weak** $tmp2764 = &param0->compiler;
frost$core$Weak* $tmp2765 = *$tmp2764;
frost$core$Object* $tmp2766 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2765);
frost$core$Weak** $tmp2767 = &param0->compiler;
frost$core$Weak* $tmp2768 = *$tmp2767;
frost$core$Object* $tmp2769 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2768);
org$frostlang$frostc$Type* $tmp2770 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp2771 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp2769), $tmp2770);
frost$collections$ListView* $tmp2772 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(((org$frostlang$frostc$Compiler*) $tmp2766), $tmp2771);
ITable* $tmp2773 = ((frost$collections$CollectionView*) $tmp2772)->$class->itable;
while ($tmp2773->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2773 = $tmp2773->next;
}
$fn2775 $tmp2774 = $tmp2773->methods[0];
frost$core$Int64 $tmp2776 = $tmp2774(((frost$collections$CollectionView*) $tmp2772));
int64_t $tmp2777 = $tmp2763.value;
int64_t $tmp2778 = $tmp2776.value;
int64_t $tmp2779 = $tmp2777 - $tmp2778;
frost$core$Int64 $tmp2780 = (frost$core$Int64) {$tmp2779};
*(&local3) = $tmp2780;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
frost$core$Frost$unref$frost$core$Object$Q($tmp2769);
frost$core$Frost$unref$frost$core$Object$Q($tmp2766);
// line 781
frost$core$Int64 $tmp2781 = *(&local3);
frost$core$Int64 $tmp2782 = (frost$core$Int64) {18446744073709551615};
int64_t $tmp2783 = $tmp2781.value;
int64_t $tmp2784 = $tmp2782.value;
bool $tmp2785 = $tmp2783 != $tmp2784;
frost$core$Bit $tmp2786 = (frost$core$Bit) {$tmp2785};
bool $tmp2787 = $tmp2786.value;
if ($tmp2787) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp2788 = (frost$core$Int64) {781};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2789, $tmp2788);
abort(); // unreachable
block21:;
// line 782
frost$core$String* $tmp2790 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
frost$core$String* $tmp2791 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
*(&local6) = $tmp2790;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
// line 783
frost$core$Weak** $tmp2792 = &param0->compiler;
frost$core$Weak* $tmp2793 = *$tmp2792;
frost$core$Object* $tmp2794 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2793);
org$frostlang$frostc$Type* $tmp2795 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Compiler*) $tmp2794), param2);
frost$core$String* $tmp2796 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, $tmp2795, ((org$frostlang$frostc$Type*) NULL));
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
frost$core$String* $tmp2797 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
*(&local7) = $tmp2796;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2795));
frost$core$Frost$unref$frost$core$Object$Q($tmp2794);
// line 784
frost$core$String* $tmp2798 = *(&local7);
frost$core$String* $tmp2799 = frost$core$String$get_asString$R$frost$core$String($tmp2798);
frost$core$String* $tmp2800 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2799, &$s2801);
frost$core$String* $tmp2802 = *(&local6);
frost$core$String* $tmp2803 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2800, $tmp2802);
frost$core$String* $tmp2804 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2803, &$s2805);
frost$core$String* $tmp2806 = *(&local2);
frost$core$String* $tmp2807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2804, $tmp2806);
frost$core$String* $tmp2808 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2807, &$s2809);
frost$core$Int64 $tmp2810 = *(&local3);
frost$core$Int64$wrapper* $tmp2811;
$tmp2811 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp2811->value = $tmp2810;
frost$core$String* $tmp2812 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp2808, ((frost$core$Object*) $tmp2811));
frost$core$String* $tmp2813 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2812, &$s2814);
$fn2816 $tmp2815 = ($fn2816) ((frost$io$OutputStream*) param3)->$class->vtable[19];
frost$core$Error* $tmp2817 = $tmp2815(((frost$io$OutputStream*) param3), $tmp2813);
if ($tmp2817 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
*(&local0) = $tmp2817;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
frost$core$String* $tmp2818 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp2819 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp2820 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp2821 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2821));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2822 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2822));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
// line 785
frost$core$String* $tmp2823 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
frost$core$String* $tmp2824 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
*(&local7) = ((frost$core$String*) NULL);
frost$core$String* $tmp2825 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2825));
*(&local6) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp2826 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp2827 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp2828 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Error* $tmp2829 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2823;
block1:;
// line 788
frost$core$Int64 $tmp2830 = (frost$core$Int64) {788};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2831, $tmp2830);
abort(); // unreachable
block2:;
frost$core$Error* $tmp2832 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
*(&local0) = ((frost$core$Error*) NULL);
goto block25;
block25:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getMethodReference$frost$core$String$Q$org$frostlang$frostc$MethodDecl$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$MethodDecl* param2, frost$core$Bit param3, frost$io$IndentedOutputStream* param4) {

// line 794
frost$core$Bit $tmp2833 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp2834 = $tmp2833.value;
if ($tmp2834) goto block4; else goto block3;
block4:;
frost$core$Bit $tmp2835 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit(param2);
bool $tmp2836 = $tmp2835.value;
if ($tmp2836) goto block1; else goto block3;
block1:;
// line 795
frost$core$Bit $tmp2837 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp2838 = $tmp2837.value;
if ($tmp2838) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp2839 = (frost$core$Int64) {795};
frost$core$String* $tmp2840 = org$frostlang$frostc$MethodDecl$get_signature$R$frost$core$String(param2);
frost$core$String* $tmp2841 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2842, $tmp2840);
frost$core$String* $tmp2843 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2841, &$s2844);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2845, $tmp2839, $tmp2843);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2840));
abort(); // unreachable
block5:;
// line 796
frost$core$Weak** $tmp2846 = &param2->owner;
frost$core$Weak* $tmp2847 = *$tmp2846;
frost$core$Object* $tmp2848 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2847);
org$frostlang$frostc$ClassDecl$Kind* $tmp2849 = &((org$frostlang$frostc$ClassDecl*) $tmp2848)->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp2850 = *$tmp2849;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2851;
$tmp2851 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2851->value = $tmp2850;
frost$core$Int64 $tmp2852 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp2853 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp2852);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp2854;
$tmp2854 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp2854->value = $tmp2853;
ITable* $tmp2855 = ((frost$core$Equatable*) $tmp2851)->$class->itable;
while ($tmp2855->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2855 = $tmp2855->next;
}
$fn2857 $tmp2856 = $tmp2855->methods[0];
frost$core$Bit $tmp2858 = $tmp2856(((frost$core$Equatable*) $tmp2851), ((frost$core$Equatable*) $tmp2854));
bool $tmp2859 = $tmp2858.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2854)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2851)));
frost$core$Frost$unref$frost$core$Object$Q($tmp2848);
if ($tmp2859) goto block7; else goto block9;
block7:;
// line 797
frost$core$String* $tmp2860 = org$frostlang$frostc$CCodeGenerator$getInterfaceMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2860));
return $tmp2860;
block9:;
// line 1
// line 800
frost$core$String* $tmp2861 = org$frostlang$frostc$CCodeGenerator$getVirtualMethodReference$frost$core$String$org$frostlang$frostc$MethodDecl$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2861));
return $tmp2861;
block8:;
goto block2;
block3:;
// line 1
// line 804
frost$core$Weak** $tmp2862 = &param2->owner;
frost$core$Weak* $tmp2863 = *$tmp2862;
frost$core$Object* $tmp2864 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2863);
frost$core$Bit $tmp2865 = org$frostlang$frostc$CCodeGenerator$isExternal$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp2864));
bool $tmp2866 = $tmp2865.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2864);
if ($tmp2866) goto block10; else goto block11;
block10:;
// line 805
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param2);
goto block11;
block11:;
// line 807
frost$core$String* $tmp2867 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
return $tmp2867;
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
// line 812
*(&local0) = ((frost$core$Error*) NULL);
// line 813
org$frostlang$frostc$Type$Kind* $tmp2868 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp2869 = *$tmp2868;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2870;
$tmp2870 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2870->value = $tmp2869;
frost$core$Int64 $tmp2871 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp2872 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2871);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2873;
$tmp2873 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2873->value = $tmp2872;
ITable* $tmp2874 = ((frost$core$Equatable*) $tmp2870)->$class->itable;
while ($tmp2874->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2874 = $tmp2874->next;
}
$fn2876 $tmp2875 = $tmp2874->methods[0];
frost$core$Bit $tmp2877 = $tmp2875(((frost$core$Equatable*) $tmp2870), ((frost$core$Equatable*) $tmp2873));
bool $tmp2878 = $tmp2877.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2873)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2870)));
if ($tmp2878) goto block3; else goto block4;
block3:;
// line 815
frost$core$String* $tmp2879 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
frost$core$String* $tmp2880 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
*(&local1) = $tmp2879;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
// line 816
frost$core$String* $tmp2881 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp2882 = frost$core$String$get_asString$R$frost$core$String($tmp2881);
frost$core$String* $tmp2883 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2882, &$s2884);
frost$core$String* $tmp2885 = *(&local1);
frost$core$String* $tmp2886 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2883, $tmp2885);
frost$core$String* $tmp2887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2886, &$s2888);
$fn2890 $tmp2889 = ($fn2890) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2891 = $tmp2889(((frost$io$OutputStream*) param4), $tmp2887);
if ($tmp2891 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
*(&local0) = $tmp2891;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
frost$core$String* $tmp2892 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2881));
// line 817
frost$core$String* $tmp2893 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2894, param1);
frost$core$String* $tmp2895 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2893, &$s2896);
$fn2898 $tmp2897 = ($fn2898) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2899 = $tmp2897(((frost$io$OutputStream*) param4), $tmp2895);
if ($tmp2899 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local0) = $tmp2899;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
frost$core$String* $tmp2900 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2900));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
// line 818
frost$core$Int64* $tmp2901 = &param4->level;
frost$core$Int64 $tmp2902 = *$tmp2901;
frost$core$Int64 $tmp2903 = (frost$core$Int64) {1};
int64_t $tmp2904 = $tmp2902.value;
int64_t $tmp2905 = $tmp2903.value;
int64_t $tmp2906 = $tmp2904 + $tmp2905;
frost$core$Int64 $tmp2907 = (frost$core$Int64) {$tmp2906};
frost$core$Int64* $tmp2908 = &param4->level;
*$tmp2908 = $tmp2907;
// line 819
org$frostlang$frostc$FixedArray* $tmp2909 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp2910 = (frost$core$Int64) {0};
frost$core$Object* $tmp2911 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2909, $tmp2910);
frost$core$String* $tmp2912 = org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, ((org$frostlang$frostc$Type*) $tmp2911), param4);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
frost$core$String* $tmp2913 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
*(&local2) = $tmp2912;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2912));
frost$core$Frost$unref$frost$core$Object$Q($tmp2911);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
// line 820
frost$core$String* $tmp2914 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp2915 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp2916 = (frost$core$Int64) {0};
frost$core$Object* $tmp2917 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2915, $tmp2916);
frost$core$String* $tmp2918 = org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, $tmp2914, ((org$frostlang$frostc$Type*) $tmp2917), param3, param4);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
frost$core$String* $tmp2919 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
*(&local3) = $tmp2918;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2918));
frost$core$Frost$unref$frost$core$Object$Q($tmp2917);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2915));
// line 821
frost$core$String* $tmp2920 = *(&local1);
frost$core$String* $tmp2921 = frost$core$String$get_asString$R$frost$core$String($tmp2920);
frost$core$String* $tmp2922 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2921, &$s2923);
frost$core$String* $tmp2924 = *(&local3);
frost$core$String* $tmp2925 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2922, $tmp2924);
frost$core$String* $tmp2926 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2925, &$s2927);
$fn2929 $tmp2928 = ($fn2929) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2930 = $tmp2928(((frost$io$OutputStream*) param4), $tmp2926);
if ($tmp2930 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
*(&local0) = $tmp2930;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
frost$core$String* $tmp2931 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2932 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2933 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2933));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2921));
// line 822
frost$core$Int64* $tmp2934 = &param4->level;
frost$core$Int64 $tmp2935 = *$tmp2934;
frost$core$Int64 $tmp2936 = (frost$core$Int64) {1};
int64_t $tmp2937 = $tmp2935.value;
int64_t $tmp2938 = $tmp2936.value;
int64_t $tmp2939 = $tmp2937 - $tmp2938;
frost$core$Int64 $tmp2940 = (frost$core$Int64) {$tmp2939};
frost$core$Int64* $tmp2941 = &param4->level;
*$tmp2941 = $tmp2940;
// line 823
$fn2943 $tmp2942 = ($fn2943) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2944 = $tmp2942(((frost$io$OutputStream*) param4), &$s2945);
if ($tmp2944 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
*(&local0) = $tmp2944;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
frost$core$String* $tmp2946 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2947 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2948 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
// line 824
$fn2950 $tmp2949 = ($fn2950) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2951 = $tmp2949(((frost$io$OutputStream*) param4), &$s2952);
if ($tmp2951 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
*(&local0) = $tmp2951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
frost$core$String* $tmp2953 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2954 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2955 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
// line 825
frost$core$Int64* $tmp2956 = &param4->level;
frost$core$Int64 $tmp2957 = *$tmp2956;
frost$core$Int64 $tmp2958 = (frost$core$Int64) {1};
int64_t $tmp2959 = $tmp2957.value;
int64_t $tmp2960 = $tmp2958.value;
int64_t $tmp2961 = $tmp2959 + $tmp2960;
frost$core$Int64 $tmp2962 = (frost$core$Int64) {$tmp2961};
frost$core$Int64* $tmp2963 = &param4->level;
*$tmp2963 = $tmp2962;
// line 826
frost$core$String* $tmp2964 = *(&local1);
frost$core$String* $tmp2965 = frost$core$String$get_asString$R$frost$core$String($tmp2964);
frost$core$String* $tmp2966 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2965, &$s2967);
$fn2969 $tmp2968 = ($fn2969) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2970 = $tmp2968(((frost$io$OutputStream*) param4), $tmp2966);
if ($tmp2970 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
*(&local0) = $tmp2970;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
frost$core$String* $tmp2971 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2972 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2973 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
// line 827
frost$core$Int64* $tmp2974 = &param4->level;
frost$core$Int64 $tmp2975 = *$tmp2974;
frost$core$Int64 $tmp2976 = (frost$core$Int64) {1};
int64_t $tmp2977 = $tmp2975.value;
int64_t $tmp2978 = $tmp2976.value;
int64_t $tmp2979 = $tmp2977 - $tmp2978;
frost$core$Int64 $tmp2980 = (frost$core$Int64) {$tmp2979};
frost$core$Int64* $tmp2981 = &param4->level;
*$tmp2981 = $tmp2980;
// line 828
$fn2983 $tmp2982 = ($fn2983) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp2984 = $tmp2982(((frost$io$OutputStream*) param4), &$s2985);
if ($tmp2984 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
*(&local0) = $tmp2984;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
frost$core$String* $tmp2986 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2987 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2987));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2988 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
// line 829
frost$core$String* $tmp2989 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2989));
frost$core$String* $tmp2990 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2990));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp2991 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp2992 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp2993 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2993));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp2989;
block4:;
// line 831
frost$core$String* $tmp2994 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
frost$core$String* $tmp2995 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2995));
*(&local4) = $tmp2994;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2994));
// line 832
frost$core$String* $tmp2996 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$String* $tmp2997 = frost$core$String$get_asString$R$frost$core$String($tmp2996);
frost$core$String* $tmp2998 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2997, &$s2999);
frost$core$String* $tmp3000 = *(&local4);
frost$core$String* $tmp3001 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2998, $tmp3000);
frost$core$String* $tmp3002 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3001, &$s3003);
$fn3005 $tmp3004 = ($fn3005) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3006 = $tmp3004(((frost$io$OutputStream*) param4), $tmp3002);
if ($tmp3006 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
*(&local0) = $tmp3006;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
frost$core$String* $tmp3007 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3001));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2996));
// line 833
org$frostlang$frostc$Type$Kind* $tmp3008 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3009 = *$tmp3008;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3010;
$tmp3010 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3010->value = $tmp3009;
frost$core$Int64 $tmp3011 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3012 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3011);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3013;
$tmp3013 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3013->value = $tmp3012;
ITable* $tmp3014 = ((frost$core$Equatable*) $tmp3010)->$class->itable;
while ($tmp3014->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3014 = $tmp3014->next;
}
$fn3016 $tmp3015 = $tmp3014->methods[0];
frost$core$Bit $tmp3017 = $tmp3015(((frost$core$Equatable*) $tmp3010), ((frost$core$Equatable*) $tmp3013));
bool $tmp3018 = $tmp3017.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3013)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3010)));
if ($tmp3018) goto block21; else goto block22;
block21:;
// line 834
frost$core$String* $tmp3019 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3020, param1);
frost$core$String* $tmp3021 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3019, &$s3022);
$fn3024 $tmp3023 = ($fn3024) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3025 = $tmp3023(((frost$io$OutputStream*) param4), $tmp3021);
if ($tmp3025 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
*(&local0) = $tmp3025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
frost$core$String* $tmp3026 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3026));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
// line 835
frost$core$Int64* $tmp3027 = &param4->level;
frost$core$Int64 $tmp3028 = *$tmp3027;
frost$core$Int64 $tmp3029 = (frost$core$Int64) {1};
int64_t $tmp3030 = $tmp3028.value;
int64_t $tmp3031 = $tmp3029.value;
int64_t $tmp3032 = $tmp3030 + $tmp3031;
frost$core$Int64 $tmp3033 = (frost$core$Int64) {$tmp3032};
frost$core$Int64* $tmp3034 = &param4->level;
*$tmp3034 = $tmp3033;
goto block22;
block22:;
// line 837
frost$core$String* $tmp3035 = *(&local4);
frost$core$String* $tmp3036 = frost$core$String$get_asString$R$frost$core$String($tmp3035);
frost$core$String* $tmp3037 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3036, &$s3038);
frost$core$String* $tmp3039 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
frost$core$String* $tmp3040 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3037, $tmp3039);
frost$core$String* $tmp3041 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3040, &$s3042);
frost$core$Int64 $tmp3043 = org$frostlang$frostc$CCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param2);
frost$core$Int64$wrapper* $tmp3044;
$tmp3044 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3044->value = $tmp3043;
frost$core$String* $tmp3045 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3046, ((frost$core$Object*) $tmp3044));
frost$core$String* $tmp3047 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3045, &$s3048);
frost$core$String* $tmp3049 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3041, $tmp3047);
frost$core$String** $tmp3050 = &((org$frostlang$frostc$Symbol*) param2)->name;
frost$core$String* $tmp3051 = *$tmp3050;
frost$core$String* $tmp3052 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp3051);
frost$core$String* $tmp3053 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3054, $tmp3052);
frost$core$String* $tmp3055 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3053, &$s3056);
frost$core$String* $tmp3057 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3049, $tmp3055);
$fn3059 $tmp3058 = ($fn3059) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3060 = $tmp3058(((frost$io$OutputStream*) param4), $tmp3057);
if ($tmp3060 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3060));
*(&local0) = $tmp3060;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
frost$core$String* $tmp3061 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3061));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3055));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
// line 840
frost$core$String* $tmp3062 = *(&local4);
frost$core$String* $tmp3063 = frost$core$String$get_asString$R$frost$core$String($tmp3062);
frost$core$String* $tmp3064 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3063, &$s3065);
frost$core$String* $tmp3066 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3064, param1);
frost$core$String* $tmp3067 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3066, &$s3068);
$fn3070 $tmp3069 = ($fn3070) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3071 = $tmp3069(((frost$io$OutputStream*) param4), $tmp3067);
if ($tmp3071 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
*(&local0) = $tmp3071;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
frost$core$String* $tmp3072 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3072));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3067));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
// line 841
org$frostlang$frostc$Type$Kind* $tmp3073 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3074 = *$tmp3073;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3075;
$tmp3075 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3075->value = $tmp3074;
frost$core$Int64 $tmp3076 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3077 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3076);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3078;
$tmp3078 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3078->value = $tmp3077;
ITable* $tmp3079 = ((frost$core$Equatable*) $tmp3075)->$class->itable;
while ($tmp3079->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3079 = $tmp3079->next;
}
$fn3081 $tmp3080 = $tmp3079->methods[0];
frost$core$Bit $tmp3082 = $tmp3080(((frost$core$Equatable*) $tmp3075), ((frost$core$Equatable*) $tmp3078));
bool $tmp3083 = $tmp3082.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3078)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3075)));
if ($tmp3083) goto block29; else goto block30;
block29:;
// line 842
frost$core$Int64* $tmp3084 = &param4->level;
frost$core$Int64 $tmp3085 = *$tmp3084;
frost$core$Int64 $tmp3086 = (frost$core$Int64) {1};
int64_t $tmp3087 = $tmp3085.value;
int64_t $tmp3088 = $tmp3086.value;
int64_t $tmp3089 = $tmp3087 - $tmp3088;
frost$core$Int64 $tmp3090 = (frost$core$Int64) {$tmp3089};
frost$core$Int64* $tmp3091 = &param4->level;
*$tmp3091 = $tmp3090;
// line 843
$fn3093 $tmp3092 = ($fn3093) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3094 = $tmp3092(((frost$io$OutputStream*) param4), &$s3095);
if ($tmp3094 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
*(&local0) = $tmp3094;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
frost$core$String* $tmp3096 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3096));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3094));
// line 844
$fn3098 $tmp3097 = ($fn3098) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3099 = $tmp3097(((frost$io$OutputStream*) param4), &$s3100);
if ($tmp3099 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
*(&local0) = $tmp3099;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
frost$core$String* $tmp3101 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3101));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3099));
// line 845
frost$core$Int64* $tmp3102 = &param4->level;
frost$core$Int64 $tmp3103 = *$tmp3102;
frost$core$Int64 $tmp3104 = (frost$core$Int64) {1};
int64_t $tmp3105 = $tmp3103.value;
int64_t $tmp3106 = $tmp3104.value;
int64_t $tmp3107 = $tmp3105 + $tmp3106;
frost$core$Int64 $tmp3108 = (frost$core$Int64) {$tmp3107};
frost$core$Int64* $tmp3109 = &param4->level;
*$tmp3109 = $tmp3108;
// line 846
frost$core$String* $tmp3110 = *(&local4);
frost$core$String* $tmp3111 = frost$core$String$get_asString$R$frost$core$String($tmp3110);
frost$core$String* $tmp3112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3111, &$s3113);
$fn3115 $tmp3114 = ($fn3115) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3116 = $tmp3114(((frost$io$OutputStream*) param4), $tmp3112);
if ($tmp3116 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
*(&local0) = $tmp3116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3111));
frost$core$String* $tmp3117 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3117));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3111));
// line 847
frost$core$Int64* $tmp3118 = &param4->level;
frost$core$Int64 $tmp3119 = *$tmp3118;
frost$core$Int64 $tmp3120 = (frost$core$Int64) {1};
int64_t $tmp3121 = $tmp3119.value;
int64_t $tmp3122 = $tmp3120.value;
int64_t $tmp3123 = $tmp3121 - $tmp3122;
frost$core$Int64 $tmp3124 = (frost$core$Int64) {$tmp3123};
frost$core$Int64* $tmp3125 = &param4->level;
*$tmp3125 = $tmp3124;
// line 848
$fn3127 $tmp3126 = ($fn3127) ((frost$io$OutputStream*) param4)->$class->vtable[19];
frost$core$Error* $tmp3128 = $tmp3126(((frost$io$OutputStream*) param4), &$s3129);
if ($tmp3128 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
*(&local0) = $tmp3128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
frost$core$String* $tmp3130 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3130));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
goto block30;
block30:;
// line 850
frost$core$String* $tmp3131 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3133, $tmp3131);
frost$core$String* $tmp3134 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3132, &$s3135);
frost$core$String* $tmp3136 = *(&local4);
frost$core$String* $tmp3137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3134, $tmp3136);
frost$core$String* $tmp3138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3137, &$s3139);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3131));
frost$core$String* $tmp3140 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3140));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3138;
block1:;
// line 853
frost$core$Int64 $tmp3142 = (frost$core$Int64) {853};
frost$core$Error* $tmp3143 = *(&local0);
$fn3145 $tmp3144 = ($fn3145) ((frost$core$Object*) $tmp3143)->$class->vtable[0];
frost$core$String* $tmp3146 = $tmp3144(((frost$core$Object*) $tmp3143));
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3147, $tmp3142, $tmp3146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
abort(); // unreachable
block2:;
frost$core$Error* $tmp3148 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
*(&local0) = ((frost$core$Error*) NULL);
goto block39;
block39:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 858
frost$core$String* $tmp3149 = org$frostlang$frostc$CCodeGenerator$wrapperType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3151, $tmp3149);
frost$core$String* $tmp3152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3150, &$s3153);
frost$core$String* $tmp3154 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3152, param1);
frost$core$String* $tmp3155 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3154, &$s3156);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
frost$core$String* $tmp3157 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
*(&local0) = $tmp3155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3149));
// line 859
org$frostlang$frostc$Type$Kind* $tmp3158 = &param3->typeKind;
org$frostlang$frostc$Type$Kind $tmp3159 = *$tmp3158;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3160;
$tmp3160 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3160->value = $tmp3159;
frost$core$Int64 $tmp3161 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3162 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3161);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3163;
$tmp3163 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3163->value = $tmp3162;
ITable* $tmp3164 = ((frost$core$Equatable*) $tmp3160)->$class->itable;
while ($tmp3164->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3164 = $tmp3164->next;
}
$fn3166 $tmp3165 = $tmp3164->methods[0];
frost$core$Bit $tmp3167 = $tmp3165(((frost$core$Equatable*) $tmp3160), ((frost$core$Equatable*) $tmp3163));
bool $tmp3168 = $tmp3167.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3163)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3160)));
if ($tmp3168) goto block1; else goto block2;
block1:;
// line 861
org$frostlang$frostc$FixedArray* $tmp3169 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param3);
frost$core$Int64 $tmp3170 = (frost$core$Int64) {0};
frost$core$Object* $tmp3171 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3169, $tmp3170);
frost$core$String* $tmp3172 = org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, ((org$frostlang$frostc$Type*) $tmp3171), param4);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3172));
frost$core$String* $tmp3173 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3173));
*(&local1) = $tmp3172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3172));
frost$core$Frost$unref$frost$core$Object$Q($tmp3171);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
// line 862
frost$core$String* $tmp3174 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp3175 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param3);
frost$core$Int64 $tmp3176 = (frost$core$Int64) {0};
frost$core$Object* $tmp3177 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3175, $tmp3176);
frost$core$String* $tmp3178 = org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, $tmp3174, ((org$frostlang$frostc$Type*) $tmp3177), param3, param4);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
frost$core$String* $tmp3179 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3179));
*(&local2) = $tmp3178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3178));
frost$core$Frost$unref$frost$core$Object$Q($tmp3177);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3175));
// line 863
frost$core$String* $tmp3180 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3181, param1);
frost$core$String* $tmp3182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3180, &$s3183);
frost$core$String* $tmp3184 = *(&local2);
frost$core$String* $tmp3185 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3182, $tmp3184);
frost$core$String* $tmp3186 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3185, &$s3187);
frost$core$String* $tmp3188 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3189 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3186, $tmp3188);
frost$core$String* $tmp3190 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3189, &$s3191);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3180));
frost$core$String* $tmp3192 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp3193 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3194 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3194));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3190;
block2:;
// line 865
frost$core$String* $tmp3195 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
frost$core$String* $tmp3196 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3195;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

// line 870
frost$core$String* $tmp3197 = org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3198 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3199, $tmp3197);
frost$core$String* $tmp3200 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3198, &$s3201);
frost$core$String* $tmp3202 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3200, param1);
frost$core$String* $tmp3203 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3202, &$s3204);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3197));
return $tmp3203;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3, frost$io$IndentedOutputStream* param4) {

// line 875
frost$core$String* $tmp3205 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3207, $tmp3205);
frost$core$String* $tmp3208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3206, &$s3209);
frost$core$String* $tmp3210 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3208, param1);
frost$core$String* $tmp3211 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3210, &$s3212);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
return $tmp3211;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 879
frost$core$Bit $tmp3213 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param3);
bool $tmp3214 = $tmp3213.value;
if ($tmp3214) goto block1; else goto block3;
block1:;
// line 880
frost$core$Bit $tmp3215 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit(param2);
bool $tmp3216 = $tmp3215.value;
if ($tmp3216) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp3217 = (frost$core$Int64) {880};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3218, $tmp3217);
abort(); // unreachable
block4:;
// line 881
frost$core$String* $tmp3219 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
frost$core$String* $tmp3220 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3221, $tmp3219);
frost$core$String* $tmp3222 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3220, &$s3223);
frost$core$String* $tmp3224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3222, param1);
frost$core$String* $tmp3225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3224, &$s3226);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
return $tmp3225;
block3:;
// line 1
// line 884
frost$core$Weak** $tmp3227 = &param0->compiler;
frost$core$Weak* $tmp3228 = *$tmp3227;
frost$core$Object* $tmp3229 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3228);
org$frostlang$frostc$ClassDecl* $tmp3230 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3229), param2);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
org$frostlang$frostc$ClassDecl* $tmp3231 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3231));
*(&local0) = $tmp3230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
frost$core$Frost$unref$frost$core$Object$Q($tmp3229);
// line 885
org$frostlang$frostc$ClassDecl* $tmp3232 = *(&local0);
frost$core$Bit $tmp3233 = frost$core$Bit$init$builtin_bit($tmp3232 != NULL);
bool $tmp3234 = $tmp3233.value;
if ($tmp3234) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3235 = (frost$core$Int64) {885};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3236, $tmp3235);
abort(); // unreachable
block6:;
// line 886
frost$core$Weak** $tmp3237 = &param0->compiler;
frost$core$Weak* $tmp3238 = *$tmp3237;
frost$core$Object* $tmp3239 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3238);
org$frostlang$frostc$ClassDecl* $tmp3240 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3239), param3);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
org$frostlang$frostc$ClassDecl* $tmp3241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3241));
*(&local1) = $tmp3240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3240));
frost$core$Frost$unref$frost$core$Object$Q($tmp3239);
// line 887
org$frostlang$frostc$ClassDecl* $tmp3242 = *(&local1);
frost$core$Bit $tmp3243 = frost$core$Bit$init$builtin_bit($tmp3242 != NULL);
bool $tmp3244 = $tmp3243.value;
if ($tmp3244) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3245 = (frost$core$Int64) {887};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3246, $tmp3245);
abort(); // unreachable
block8:;
// line 888
frost$core$Weak** $tmp3247 = &param0->compiler;
frost$core$Weak* $tmp3248 = *$tmp3247;
frost$core$Object* $tmp3249 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3248);
org$frostlang$frostc$ClassDecl* $tmp3250 = *(&local0);
frost$core$Bit $tmp3251 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3249), $tmp3250);
bool $tmp3252 = $tmp3251.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3249);
if ($tmp3252) goto block13; else goto block12;
block13:;
frost$core$Weak** $tmp3253 = &param0->compiler;
frost$core$Weak* $tmp3254 = *$tmp3253;
frost$core$Object* $tmp3255 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3254);
org$frostlang$frostc$ClassDecl* $tmp3256 = *(&local1);
frost$core$Bit $tmp3257 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3255), $tmp3256);
frost$core$Bit $tmp3258 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3257);
bool $tmp3259 = $tmp3258.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3255);
if ($tmp3259) goto block10; else goto block12;
block10:;
// line 889
frost$io$IndentedOutputStream** $tmp3260 = &param0->out;
frost$io$IndentedOutputStream* $tmp3261 = *$tmp3260;
frost$core$String* $tmp3262 = org$frostlang$frostc$CCodeGenerator$wrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3261);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3262));
org$frostlang$frostc$ClassDecl* $tmp3263 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3263));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3264 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3264));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3262;
block12:;
// line 891
frost$core$Weak** $tmp3265 = &param0->compiler;
frost$core$Weak* $tmp3266 = *$tmp3265;
frost$core$Object* $tmp3267 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3266);
org$frostlang$frostc$ClassDecl* $tmp3268 = *(&local0);
frost$core$Bit $tmp3269 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3267), $tmp3268);
frost$core$Bit $tmp3270 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3269);
bool $tmp3271 = $tmp3270.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3267);
if ($tmp3271) goto block17; else goto block16;
block17:;
frost$core$Weak** $tmp3272 = &param0->compiler;
frost$core$Weak* $tmp3273 = *$tmp3272;
frost$core$Object* $tmp3274 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3273);
org$frostlang$frostc$ClassDecl* $tmp3275 = *(&local1);
frost$core$Bit $tmp3276 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3274), $tmp3275);
bool $tmp3277 = $tmp3276.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3274);
if ($tmp3277) goto block14; else goto block16;
block14:;
// line 892
frost$io$IndentedOutputStream** $tmp3278 = &param0->out;
frost$io$IndentedOutputStream* $tmp3279 = *$tmp3278;
frost$core$String* $tmp3280 = org$frostlang$frostc$CCodeGenerator$unwrapValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3279);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3280));
org$frostlang$frostc$ClassDecl* $tmp3281 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3281));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3282));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3280;
block16:;
// line 894
frost$core$Weak** $tmp3283 = &param0->compiler;
frost$core$Weak* $tmp3284 = *$tmp3283;
frost$core$Object* $tmp3285 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3284);
org$frostlang$frostc$ClassDecl* $tmp3286 = *(&local0);
frost$core$Bit $tmp3287 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3285), $tmp3286);
bool $tmp3288 = $tmp3287.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3285);
if ($tmp3288) goto block22; else goto block20;
block22:;
org$frostlang$frostc$Type$Kind* $tmp3289 = &param3->typeKind;
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
if ($tmp3299) goto block21; else goto block20;
block21:;
org$frostlang$frostc$FixedArray* $tmp3300 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param3);
frost$core$Int64 $tmp3301 = (frost$core$Int64) {0};
frost$core$Object* $tmp3302 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3300, $tmp3301);
frost$core$Bit $tmp3303 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp3302), param2);
bool $tmp3304 = $tmp3303.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3302);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3300));
if ($tmp3304) goto block18; else goto block20;
block18:;
// line 896
frost$io$IndentedOutputStream** $tmp3305 = &param0->out;
frost$io$IndentedOutputStream* $tmp3306 = *$tmp3305;
frost$core$String* $tmp3307 = org$frostlang$frostc$CCodeGenerator$toNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3306);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3307));
org$frostlang$frostc$ClassDecl* $tmp3308 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3308));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3309 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3309));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3307;
block20:;
// line 898
frost$core$Weak** $tmp3310 = &param0->compiler;
frost$core$Weak* $tmp3311 = *$tmp3310;
frost$core$Object* $tmp3312 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3311);
org$frostlang$frostc$ClassDecl* $tmp3313 = *(&local1);
frost$core$Bit $tmp3314 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3312), $tmp3313);
bool $tmp3315 = $tmp3314.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3312);
if ($tmp3315) goto block26; else goto block24;
block26:;
org$frostlang$frostc$Type$Kind* $tmp3316 = &param2->typeKind;
org$frostlang$frostc$Type$Kind $tmp3317 = *$tmp3316;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3318;
$tmp3318 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3318->value = $tmp3317;
frost$core$Int64 $tmp3319 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3320 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3319);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3321;
$tmp3321 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3321->value = $tmp3320;
ITable* $tmp3322 = ((frost$core$Equatable*) $tmp3318)->$class->itable;
while ($tmp3322->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3322 = $tmp3322->next;
}
$fn3324 $tmp3323 = $tmp3322->methods[0];
frost$core$Bit $tmp3325 = $tmp3323(((frost$core$Equatable*) $tmp3318), ((frost$core$Equatable*) $tmp3321));
bool $tmp3326 = $tmp3325.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3321)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3318)));
if ($tmp3326) goto block25; else goto block24;
block25:;
org$frostlang$frostc$FixedArray* $tmp3327 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param2);
frost$core$Int64 $tmp3328 = (frost$core$Int64) {0};
frost$core$Object* $tmp3329 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3327, $tmp3328);
frost$core$Bit $tmp3330 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp3329), param3);
bool $tmp3331 = $tmp3330.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3329);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3327));
if ($tmp3331) goto block23; else goto block24;
block23:;
// line 900
frost$io$IndentedOutputStream** $tmp3332 = &param0->out;
frost$io$IndentedOutputStream* $tmp3333 = *$tmp3332;
frost$core$String* $tmp3334 = org$frostlang$frostc$CCodeGenerator$toNonNullableValue$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$io$IndentedOutputStream$R$frost$core$String(param0, param1, param2, param3, $tmp3333);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3334));
org$frostlang$frostc$ClassDecl* $tmp3335 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3336 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3336));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3334;
block24:;
goto block19;
block19:;
goto block15;
block15:;
goto block11;
block11:;
org$frostlang$frostc$ClassDecl* $tmp3337 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3337));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3338 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3338));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block2:;
// line 903
frost$core$String* $tmp3339 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param2);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3339));
frost$core$String* $tmp3340 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3340));
*(&local2) = $tmp3339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3339));
// line 904
frost$core$String* $tmp3341 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
frost$core$String* $tmp3342 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3342));
*(&local3) = $tmp3341;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3341));
// line 905
frost$core$String* $tmp3343 = *(&local2);
frost$core$String* $tmp3344 = *(&local3);
frost$core$Bit $tmp3345 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3343, $tmp3344);
bool $tmp3346 = $tmp3345.value;
if ($tmp3346) goto block27; else goto block28;
block27:;
// line 906
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String* $tmp3347 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3347));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3348 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3348));
*(&local2) = ((frost$core$String*) NULL);
return param1;
block28:;
// line 908
frost$core$String* $tmp3349 = *(&local3);
frost$core$String* $tmp3350 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3351, $tmp3349);
frost$core$String* $tmp3352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3350, &$s3353);
frost$core$String* $tmp3354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3352, param1);
frost$core$String* $tmp3355 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3354, &$s3356);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3350));
frost$core$String* $tmp3357 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3357));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp3358 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3358));
*(&local2) = ((frost$core$String*) NULL);
return $tmp3355;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getIntReference$frost$core$UInt64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$UInt64 param1) {

// line 912
frost$core$Int64 $tmp3359 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp3360 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3359);
uint64_t $tmp3361 = param1.value;
uint64_t $tmp3362 = $tmp3360.value;
bool $tmp3363 = $tmp3361 > $tmp3362;
frost$core$Bit $tmp3364 = (frost$core$Bit) {$tmp3363};
bool $tmp3365 = $tmp3364.value;
if ($tmp3365) goto block1; else goto block2;
block1:;
// line 913
frost$core$UInt64$wrapper* $tmp3366;
$tmp3366 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3366->value = param1;
frost$core$String* $tmp3367 = frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(((frost$core$Object*) $tmp3366), &$s3368);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3367));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3366));
return $tmp3367;
block2:;
// line 915
frost$core$UInt64$wrapper* $tmp3369;
$tmp3369 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3369->value = param1;
$fn3371 $tmp3370 = ($fn3371) ((frost$core$Object*) $tmp3369)->$class->vtable[0];
frost$core$String* $tmp3372 = $tmp3370(((frost$core$Object*) $tmp3369));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3369));
return $tmp3372;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1, frost$core$Real64 param2) {

frost$core$String* local0 = NULL;
// line 919
frost$core$Real64$wrapper* $tmp3373;
$tmp3373 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp3373->value = param2;
$fn3375 $tmp3374 = ($fn3375) ((frost$core$Object*) $tmp3373)->$class->vtable[0];
frost$core$String* $tmp3376 = $tmp3374(((frost$core$Object*) $tmp3373));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3376));
frost$core$String* $tmp3377 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3377));
*(&local0) = $tmp3376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
// line 920
frost$core$String* $tmp3378 = *(&local0);
frost$core$Bit $tmp3379 = frost$core$String$contains$frost$core$String$R$frost$core$Bit($tmp3378, &$s3380);
bool $tmp3381 = $tmp3379.value;
if ($tmp3381) goto block1; else goto block2;
block1:;
// line 921
frost$core$String* $tmp3382 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3382));
frost$core$String* $tmp3383 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3383));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3382;
block2:;
// line 923
frost$core$String* $tmp3384 = *(&local0);
frost$core$String* $tmp3385 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3384, &$s3386);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3385));
frost$core$String* $tmp3387 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3387));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3385;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getBitReference$frost$core$Bit$frost$io$IndentedOutputStream$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$Bit param1, frost$io$IndentedOutputStream* param2) {

// line 927
bool $tmp3388 = param1.value;
if ($tmp3388) goto block1; else goto block2;
block1:;
// line 928
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3389));
return &$s3390;
block2:;
// line 930
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3391));
return &$s3392;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, frost$core$String* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Char8 local2;
// line 934
*(&local0) = ((frost$core$Error*) NULL);
// line 935
frost$core$Int64* $tmp3393 = &param0->varCount;
frost$core$Int64 $tmp3394 = *$tmp3393;
frost$core$Int64 $tmp3395 = (frost$core$Int64) {1};
int64_t $tmp3396 = $tmp3394.value;
int64_t $tmp3397 = $tmp3395.value;
int64_t $tmp3398 = $tmp3396 + $tmp3397;
frost$core$Int64 $tmp3399 = (frost$core$Int64) {$tmp3398};
frost$core$Int64* $tmp3400 = &param0->varCount;
*$tmp3400 = $tmp3399;
// line 936
frost$core$Int64* $tmp3401 = &param0->varCount;
frost$core$Int64 $tmp3402 = *$tmp3401;
frost$core$Int64$wrapper* $tmp3403;
$tmp3403 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3403->value = $tmp3402;
frost$core$String* $tmp3404 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3405, ((frost$core$Object*) $tmp3403));
frost$core$String* $tmp3406 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3404, &$s3407);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3406));
frost$core$String* $tmp3408 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3408));
*(&local1) = $tmp3406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3403));
// line 937
org$frostlang$frostc$Type* $tmp3409 = org$frostlang$frostc$Type$StringType$R$org$frostlang$frostc$Type();
frost$core$String* $tmp3410 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3409);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
// line 938
frost$io$MemoryOutputStream** $tmp3411 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3412 = *$tmp3411;
frost$core$String* $tmp3413 = *(&local1);
frost$core$String* $tmp3414 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3415, $tmp3413);
frost$core$String* $tmp3416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3414, &$s3417);
frost$core$Int64 $tmp3418 = (frost$core$Int64) {18446744073709550617};
frost$core$Int64$wrapper* $tmp3419;
$tmp3419 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3419->value = $tmp3418;
frost$core$String* $tmp3420 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3421, ((frost$core$Object*) $tmp3419));
frost$core$String* $tmp3422 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3420, &$s3423);
frost$core$String* $tmp3424 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3416, $tmp3422);
frost$core$String* $tmp3425 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3424, &$s3426);
$fn3428 $tmp3427 = ($fn3428) ((frost$io$OutputStream*) $tmp3412)->$class->vtable[17];
frost$core$Error* $tmp3429 = $tmp3427(((frost$io$OutputStream*) $tmp3412), $tmp3425);
if ($tmp3429 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3429));
*(&local0) = $tmp3429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3414));
frost$core$String* $tmp3430 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3430));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3420));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3414));
// line 941
frost$collections$ListView* $tmp3431 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param1);
ITable* $tmp3432 = ((frost$collections$Iterable*) $tmp3431)->$class->itable;
while ($tmp3432->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp3432 = $tmp3432->next;
}
$fn3434 $tmp3433 = $tmp3432->methods[0];
frost$collections$Iterator* $tmp3435 = $tmp3433(((frost$collections$Iterable*) $tmp3431));
goto block5;
block5:;
ITable* $tmp3436 = $tmp3435->$class->itable;
while ($tmp3436->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3436 = $tmp3436->next;
}
$fn3438 $tmp3437 = $tmp3436->methods[0];
frost$core$Bit $tmp3439 = $tmp3437($tmp3435);
bool $tmp3440 = $tmp3439.value;
if ($tmp3440) goto block7; else goto block6;
block6:;
ITable* $tmp3441 = $tmp3435->$class->itable;
while ($tmp3441->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3441 = $tmp3441->next;
}
$fn3443 $tmp3442 = $tmp3441->methods[1];
frost$core$Object* $tmp3444 = $tmp3442($tmp3435);
*(&local2) = ((frost$core$Char8$wrapper*) $tmp3444)->value;
// line 942
frost$io$MemoryOutputStream** $tmp3445 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3446 = *$tmp3445;
frost$core$Char8 $tmp3447 = *(&local2);
frost$core$UInt8 $tmp3448 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8($tmp3447);
frost$core$UInt8$wrapper* $tmp3449;
$tmp3449 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp3449->value = $tmp3448;
ITable* $tmp3450 = ((frost$core$Formattable*) $tmp3449)->$class->itable;
while ($tmp3450->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp3450 = $tmp3450->next;
}
$fn3452 $tmp3451 = $tmp3450->methods[0];
frost$core$String* $tmp3453 = $tmp3451(((frost$core$Formattable*) $tmp3449), &$s3454);
frost$core$String* $tmp3455 = frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String($tmp3453, &$s3456);
frost$core$String* $tmp3457 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3458, $tmp3455);
frost$core$String* $tmp3459 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3457, &$s3460);
$fn3462 $tmp3461 = ($fn3462) ((frost$io$OutputStream*) $tmp3446)->$class->vtable[17];
frost$core$Error* $tmp3463 = $tmp3461(((frost$io$OutputStream*) $tmp3446), $tmp3459);
if ($tmp3463 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3463));
*(&local0) = $tmp3463;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3449)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3444);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
frost$core$String* $tmp3464 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3464));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3449)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3444);
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3431));
// line 944
frost$io$MemoryOutputStream** $tmp3465 = &param0->strings;
frost$io$MemoryOutputStream* $tmp3466 = *$tmp3465;
frost$collections$ListView* $tmp3467 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param1);
ITable* $tmp3468 = ((frost$collections$CollectionView*) $tmp3467)->$class->itable;
while ($tmp3468->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3468 = $tmp3468->next;
}
$fn3470 $tmp3469 = $tmp3468->methods[0];
frost$core$Int64 $tmp3471 = $tmp3469(((frost$collections$CollectionView*) $tmp3467));
frost$core$Int64$wrapper* $tmp3472;
$tmp3472 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3472->value = $tmp3471;
frost$core$String* $tmp3473 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3474, ((frost$core$Object*) $tmp3472));
frost$core$String* $tmp3475 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3473, &$s3476);
ITable* $tmp3477 = ((frost$collections$Key*) param1)->$class->itable;
while ($tmp3477->$class != (frost$core$Class*) &frost$collections$Key$class) {
    $tmp3477 = $tmp3477->next;
}
$fn3479 $tmp3478 = $tmp3477->methods[0];
frost$core$Int64 $tmp3480 = $tmp3478(((frost$collections$Key*) param1));
frost$core$Int64$wrapper* $tmp3481;
$tmp3481 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3481->value = $tmp3480;
frost$core$String* $tmp3482 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3475, ((frost$core$Object*) $tmp3481));
frost$core$String* $tmp3483 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3482, &$s3484);
$fn3486 $tmp3485 = ($fn3486) ((frost$io$OutputStream*) $tmp3466)->$class->vtable[19];
frost$core$Error* $tmp3487 = $tmp3485(((frost$io$OutputStream*) $tmp3466), $tmp3483);
if ($tmp3487 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3487));
*(&local0) = $tmp3487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3467));
frost$core$String* $tmp3488 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3488));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3473));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3467));
// line 945
frost$core$String* $tmp3489 = *(&local1);
frost$core$String* $tmp3490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3491, $tmp3489);
frost$core$String* $tmp3492 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3490, &$s3493);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3490));
frost$core$String* $tmp3494 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3494));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp3495 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3495));
*(&local0) = ((frost$core$Error*) NULL);
return $tmp3492;
block1:;
// line 948
frost$core$Int64 $tmp3496 = (frost$core$Int64) {948};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3497, $tmp3496);
abort(); // unreachable
block2:;
frost$core$Error* $tmp3498 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3498));
*(&local0) = ((frost$core$Error*) NULL);
goto block12;
block12:;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
// line 953
org$frostlang$frostc$Type$Kind* $tmp3499 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp3500 = *$tmp3499;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3501;
$tmp3501 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3501->value = $tmp3500;
frost$core$Int64 $tmp3502 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3503 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3502);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3504;
$tmp3504 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3504->value = $tmp3503;
ITable* $tmp3505 = ((frost$core$Equatable*) $tmp3501)->$class->itable;
while ($tmp3505->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3505 = $tmp3505->next;
}
$fn3507 $tmp3506 = $tmp3505->methods[0];
frost$core$Bit $tmp3508 = $tmp3506(((frost$core$Equatable*) $tmp3501), ((frost$core$Equatable*) $tmp3504));
bool $tmp3509 = $tmp3508.value;
if ($tmp3509) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3510 = (frost$core$Int64) {953};
frost$core$String* $tmp3511 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3512, ((frost$core$Object*) param1));
frost$core$String* $tmp3513 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3511, &$s3514);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3515, $tmp3510, $tmp3513);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
abort(); // unreachable
block1:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3504)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3501)));
// line 954
frost$core$Weak** $tmp3516 = &param0->compiler;
frost$core$Weak* $tmp3517 = *$tmp3516;
frost$core$Object* $tmp3518 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3517);
org$frostlang$frostc$FixedArray* $tmp3519 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp3520 = (frost$core$Int64) {0};
frost$core$Object* $tmp3521 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3519, $tmp3520);
org$frostlang$frostc$ClassDecl* $tmp3522 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3518), ((org$frostlang$frostc$Type*) $tmp3521));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3522));
org$frostlang$frostc$ClassDecl* $tmp3523 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3523));
*(&local0) = $tmp3522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3522));
frost$core$Frost$unref$frost$core$Object$Q($tmp3521);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3519));
frost$core$Frost$unref$frost$core$Object$Q($tmp3518);
// line 955
org$frostlang$frostc$ClassDecl* $tmp3524 = *(&local0);
frost$core$Bit $tmp3525 = frost$core$Bit$init$builtin_bit($tmp3524 != NULL);
bool $tmp3526 = $tmp3525.value;
if ($tmp3526) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp3527 = (frost$core$Int64) {955};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3528, $tmp3527);
abort(); // unreachable
block3:;
// line 956
frost$core$Weak** $tmp3529 = &param0->compiler;
frost$core$Weak* $tmp3530 = *$tmp3529;
frost$core$Object* $tmp3531 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3530);
org$frostlang$frostc$ClassDecl* $tmp3532 = *(&local0);
frost$core$Bit $tmp3533 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3531), $tmp3532);
bool $tmp3534 = $tmp3533.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3531);
if ($tmp3534) goto block5; else goto block7;
block5:;
// line 957
frost$core$String* $tmp3535 = org$frostlang$frostc$CCodeGenerator$nullableType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp3536 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3537, $tmp3535);
frost$core$String* $tmp3538 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3536, &$s3539);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3535));
org$frostlang$frostc$ClassDecl* $tmp3540 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3540));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3538;
block7:;
// line 1
// line 960
frost$core$String* $tmp3541 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param1);
frost$core$String* $tmp3542 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3543, $tmp3541);
frost$core$String* $tmp3544 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3542, &$s3545);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3541));
org$frostlang$frostc$ClassDecl* $tmp3546 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3546));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3544;
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
// line 965
frost$core$Int64* $tmp3547 = &param1->$rawValue;
frost$core$Int64 $tmp3548 = *$tmp3547;
frost$core$Int64 $tmp3549 = (frost$core$Int64) {0};
frost$core$Bit $tmp3550 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3548, $tmp3549);
bool $tmp3551 = $tmp3550.value;
if ($tmp3551) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp3552 = (frost$core$Bit*) (param1->$data + 0);
frost$core$Bit $tmp3553 = *$tmp3552;
*(&local0) = $tmp3553;
// line 967
frost$core$Bit $tmp3554 = *(&local0);
frost$core$Bit$wrapper* $tmp3555;
$tmp3555 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3555->value = $tmp3554;
$fn3557 $tmp3556 = ($fn3557) ((frost$core$Object*) $tmp3555)->$class->vtable[0];
frost$core$String* $tmp3558 = $tmp3556(((frost$core$Object*) $tmp3555));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3555));
return $tmp3558;
block3:;
frost$core$Int64 $tmp3559 = (frost$core$Int64) {1};
frost$core$Bit $tmp3560 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3548, $tmp3559);
bool $tmp3561 = $tmp3560.value;
if ($tmp3561) goto block4; else goto block5;
block4:;
frost$core$UInt64* $tmp3562 = (frost$core$UInt64*) (param1->$data + 0);
frost$core$UInt64 $tmp3563 = *$tmp3562;
*(&local1) = $tmp3563;
org$frostlang$frostc$Type** $tmp3564 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3565 = *$tmp3564;
// line 970
frost$core$UInt64 $tmp3566 = *(&local1);
frost$core$UInt64$wrapper* $tmp3567;
$tmp3567 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp3567->value = $tmp3566;
$fn3569 $tmp3568 = ($fn3569) ((frost$core$Object*) $tmp3567)->$class->vtable[0];
frost$core$String* $tmp3570 = $tmp3568(((frost$core$Object*) $tmp3567));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3570));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3567));
return $tmp3570;
block5:;
frost$core$Int64 $tmp3571 = (frost$core$Int64) {2};
frost$core$Bit $tmp3572 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3548, $tmp3571);
bool $tmp3573 = $tmp3572.value;
if ($tmp3573) goto block6; else goto block7;
block6:;
frost$core$Int64* $tmp3574 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp3575 = *$tmp3574;
*(&local2) = $tmp3575;
org$frostlang$frostc$Type** $tmp3576 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3577 = *$tmp3576;
// line 973
frost$core$Int64 $tmp3578 = *(&local2);
frost$core$Int64$wrapper* $tmp3579;
$tmp3579 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3579->value = $tmp3578;
frost$core$String* $tmp3580 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3581, ((frost$core$Object*) $tmp3579));
frost$core$String* $tmp3582 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3580, &$s3583);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3580));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3579));
return $tmp3582;
block7:;
frost$core$Int64 $tmp3584 = (frost$core$Int64) {3};
frost$core$Bit $tmp3585 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3548, $tmp3584);
bool $tmp3586 = $tmp3585.value;
if ($tmp3586) goto block8; else goto block9;
block8:;
org$frostlang$frostc$MethodDecl** $tmp3587 = (org$frostlang$frostc$MethodDecl**) (param1->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp3588 = *$tmp3587;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3588));
org$frostlang$frostc$MethodDecl* $tmp3589 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
*(&local3) = $tmp3588;
org$frostlang$frostc$Type** $tmp3590 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3591 = *$tmp3590;
// line 976
org$frostlang$frostc$MethodDecl* $tmp3592 = *(&local3);
frost$core$Weak** $tmp3593 = &$tmp3592->owner;
frost$core$Weak* $tmp3594 = *$tmp3593;
frost$core$Object* $tmp3595 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3594);
frost$core$Bit* $tmp3596 = &((org$frostlang$frostc$ClassDecl*) $tmp3595)->external;
frost$core$Bit $tmp3597 = *$tmp3596;
bool $tmp3598 = $tmp3597.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3595);
if ($tmp3598) goto block10; else goto block11;
block10:;
// line 977
org$frostlang$frostc$MethodDecl* $tmp3599 = *(&local3);
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, $tmp3599);
goto block11;
block11:;
// line 979
org$frostlang$frostc$MethodDecl* $tmp3600 = *(&local3);
frost$core$String* $tmp3601 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, $tmp3600);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3601));
org$frostlang$frostc$MethodDecl* $tmp3602 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3602));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
return $tmp3601;
block9:;
frost$core$Int64 $tmp3603 = (frost$core$Int64) {4};
frost$core$Bit $tmp3604 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3548, $tmp3603);
bool $tmp3605 = $tmp3604.value;
if ($tmp3605) goto block12; else goto block13;
block12:;
org$frostlang$frostc$Type** $tmp3606 = (org$frostlang$frostc$Type**) (param1->$data + 0);
org$frostlang$frostc$Type* $tmp3607 = *$tmp3606;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3607));
org$frostlang$frostc$Type* $tmp3608 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3608));
*(&local4) = $tmp3607;
// line 982
org$frostlang$frostc$Type* $tmp3609 = *(&local4);
frost$core$String* $tmp3610 = org$frostlang$frostc$CCodeGenerator$getNullReference$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
org$frostlang$frostc$Type* $tmp3611 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3611));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp3610;
block13:;
frost$core$Int64 $tmp3612 = (frost$core$Int64) {5};
frost$core$Bit $tmp3613 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3548, $tmp3612);
bool $tmp3614 = $tmp3613.value;
if ($tmp3614) goto block14; else goto block15;
block14:;
frost$core$Int64* $tmp3615 = (frost$core$Int64*) (param1->$data + 0);
frost$core$Int64 $tmp3616 = *$tmp3615;
*(&local5) = $tmp3616;
org$frostlang$frostc$Type** $tmp3617 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3618 = *$tmp3617;
// line 985
frost$core$Int64 $tmp3619 = *(&local5);
frost$core$Int64$wrapper* $tmp3620;
$tmp3620 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3620->value = $tmp3619;
frost$core$String* $tmp3621 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3622, ((frost$core$Object*) $tmp3620));
frost$core$String* $tmp3623 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3621, &$s3624);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3620));
return $tmp3623;
block15:;
frost$core$Int64 $tmp3625 = (frost$core$Int64) {6};
frost$core$Bit $tmp3626 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3548, $tmp3625);
bool $tmp3627 = $tmp3626.value;
if ($tmp3627) goto block16; else goto block17;
block16:;
frost$core$Real64* $tmp3628 = (frost$core$Real64*) (param1->$data + 0);
frost$core$Real64 $tmp3629 = *$tmp3628;
*(&local6) = $tmp3629;
org$frostlang$frostc$Type** $tmp3630 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3631 = *$tmp3630;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3631));
org$frostlang$frostc$Type* $tmp3632 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3632));
*(&local7) = $tmp3631;
// line 988
org$frostlang$frostc$Type* $tmp3633 = *(&local7);
frost$core$Real64 $tmp3634 = *(&local6);
frost$core$String* $tmp3635 = org$frostlang$frostc$CCodeGenerator$getRealReference$org$frostlang$frostc$Type$frost$core$Real64$R$frost$core$String(param0, $tmp3633, $tmp3634);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3635));
org$frostlang$frostc$Type* $tmp3636 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3636));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp3635;
block17:;
frost$core$Int64 $tmp3637 = (frost$core$Int64) {7};
frost$core$Bit $tmp3638 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3548, $tmp3637);
bool $tmp3639 = $tmp3638.value;
if ($tmp3639) goto block18; else goto block19;
block18:;
org$frostlang$frostc$IR$Statement$ID* $tmp3640 = (org$frostlang$frostc$IR$Statement$ID*) (param1->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp3641 = *$tmp3640;
*(&local8) = $tmp3641;
org$frostlang$frostc$Type** $tmp3642 = (org$frostlang$frostc$Type**) (param1->$data + 8);
org$frostlang$frostc$Type* $tmp3643 = *$tmp3642;
// line 991
frost$collections$HashMap** $tmp3644 = &param0->refs;
frost$collections$HashMap* $tmp3645 = *$tmp3644;
org$frostlang$frostc$IR$Statement$ID $tmp3646 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3647;
$tmp3647 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3647->value = $tmp3646;
frost$core$Object* $tmp3648 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3645, ((frost$collections$Key*) $tmp3647));
frost$core$Bit $tmp3649 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp3648) != NULL);
bool $tmp3650 = $tmp3649.value;
if ($tmp3650) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp3651 = (frost$core$Int64) {991};
org$frostlang$frostc$IR$Statement$ID $tmp3652 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3653;
$tmp3653 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3653->value = $tmp3652;
frost$core$String* $tmp3654 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3655, ((frost$core$Object*) $tmp3653));
frost$core$String* $tmp3656 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3654, &$s3657);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3658, $tmp3651, $tmp3656);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3654));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3653));
abort(); // unreachable
block20:;
frost$core$Frost$unref$frost$core$Object$Q($tmp3648);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3647)));
// line 992
frost$collections$HashMap** $tmp3659 = &param0->refs;
frost$collections$HashMap* $tmp3660 = *$tmp3659;
org$frostlang$frostc$IR$Statement$ID $tmp3661 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3662;
$tmp3662 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3662->value = $tmp3661;
frost$core$Object* $tmp3663 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3660, ((frost$collections$Key*) $tmp3662));
frost$core$Bit $tmp3664 = frost$core$Bit$init$builtin_bit(((frost$core$String*) $tmp3663) == NULL);
bool $tmp3665 = $tmp3664.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3663);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3662)));
if ($tmp3665) goto block22; else goto block23;
block22:;
// line 993
org$frostlang$frostc$IR$Statement$ID $tmp3666 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3667;
$tmp3667 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3667->value = $tmp3666;
frost$core$String* $tmp3668 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3669, ((frost$core$Object*) $tmp3667));
frost$core$String* $tmp3670 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3668, &$s3671);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
return $tmp3670;
block23:;
// line 995
frost$collections$HashMap** $tmp3672 = &param0->refs;
frost$collections$HashMap* $tmp3673 = *$tmp3672;
org$frostlang$frostc$IR$Statement$ID $tmp3674 = *(&local8);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3675;
$tmp3675 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3675->value = $tmp3674;
frost$core$Object* $tmp3676 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q($tmp3673, ((frost$collections$Key*) $tmp3675));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp3676)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3676);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3675)));
return ((frost$core$String*) $tmp3676);
block19:;
frost$core$Int64 $tmp3677 = (frost$core$Int64) {8};
frost$core$Bit $tmp3678 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3548, $tmp3677);
bool $tmp3679 = $tmp3678.value;
if ($tmp3679) goto block24; else goto block25;
block24:;
frost$core$String** $tmp3680 = (frost$core$String**) (param1->$data + 0);
frost$core$String* $tmp3681 = *$tmp3680;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3681));
frost$core$String* $tmp3682 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3682));
*(&local9) = $tmp3681;
// line 998
frost$core$String* $tmp3683 = *(&local9);
frost$core$String* $tmp3684 = org$frostlang$frostc$CCodeGenerator$getStringReference$frost$core$String$R$frost$core$String(param0, $tmp3683);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3684));
frost$core$String* $tmp3685 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3685));
*(&local9) = ((frost$core$String*) NULL);
return $tmp3684;
block25:;
// line 1001
frost$core$Int64 $tmp3686 = (frost$core$Int64) {1001};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3687, $tmp3686);
abort(); // unreachable
block1:;
goto block26;
block26:;

}
frost$core$Int64 org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1, frost$core$Int64 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 1007
frost$core$Int64 $tmp3688 = (frost$core$Int64) {0};
*(&local0) = $tmp3688;
// line 1008
frost$core$Int64 $tmp3689 = (frost$core$Int64) {0};
frost$core$Bit $tmp3690 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3691 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3689, param2, $tmp3690);
frost$core$Int64 $tmp3692 = $tmp3691.min;
*(&local1) = $tmp3692;
frost$core$Int64 $tmp3693 = $tmp3691.max;
frost$core$Bit $tmp3694 = $tmp3691.inclusive;
bool $tmp3695 = $tmp3694.value;
frost$core$Int64 $tmp3696 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3697 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3696);
if ($tmp3695) goto block4; else goto block5;
block4:;
int64_t $tmp3698 = $tmp3692.value;
int64_t $tmp3699 = $tmp3693.value;
bool $tmp3700 = $tmp3698 <= $tmp3699;
frost$core$Bit $tmp3701 = (frost$core$Bit) {$tmp3700};
bool $tmp3702 = $tmp3701.value;
if ($tmp3702) goto block1; else goto block2;
block5:;
int64_t $tmp3703 = $tmp3692.value;
int64_t $tmp3704 = $tmp3693.value;
bool $tmp3705 = $tmp3703 < $tmp3704;
frost$core$Bit $tmp3706 = (frost$core$Bit) {$tmp3705};
bool $tmp3707 = $tmp3706.value;
if ($tmp3707) goto block1; else goto block2;
block1:;
// line 1010
frost$core$Int64 $tmp3708 = *(&local0);
frost$collections$Array** $tmp3709 = &param1->fields;
frost$collections$Array* $tmp3710 = *$tmp3709;
frost$core$Int64 $tmp3711 = *(&local1);
frost$core$Object* $tmp3712 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3710, $tmp3711);
frost$core$Int64 $tmp3713 = org$frostlang$frostc$CCodeGenerator$fieldSize$org$frostlang$frostc$Type$R$frost$core$Int64(param0, ((org$frostlang$frostc$Type*) $tmp3712));
int64_t $tmp3714 = $tmp3708.value;
int64_t $tmp3715 = $tmp3713.value;
int64_t $tmp3716 = $tmp3714 + $tmp3715;
frost$core$Int64 $tmp3717 = (frost$core$Int64) {$tmp3716};
*(&local0) = $tmp3717;
frost$core$Frost$unref$frost$core$Object$Q($tmp3712);
goto block3;
block3:;
frost$core$Int64 $tmp3718 = *(&local1);
int64_t $tmp3719 = $tmp3693.value;
int64_t $tmp3720 = $tmp3718.value;
int64_t $tmp3721 = $tmp3719 - $tmp3720;
frost$core$Int64 $tmp3722 = (frost$core$Int64) {$tmp3721};
frost$core$UInt64 $tmp3723 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3722);
if ($tmp3695) goto block7; else goto block8;
block7:;
uint64_t $tmp3724 = $tmp3723.value;
uint64_t $tmp3725 = $tmp3697.value;
bool $tmp3726 = $tmp3724 >= $tmp3725;
frost$core$Bit $tmp3727 = (frost$core$Bit) {$tmp3726};
bool $tmp3728 = $tmp3727.value;
if ($tmp3728) goto block6; else goto block2;
block8:;
uint64_t $tmp3729 = $tmp3723.value;
uint64_t $tmp3730 = $tmp3697.value;
bool $tmp3731 = $tmp3729 > $tmp3730;
frost$core$Bit $tmp3732 = (frost$core$Bit) {$tmp3731};
bool $tmp3733 = $tmp3732.value;
if ($tmp3733) goto block6; else goto block2;
block6:;
int64_t $tmp3734 = $tmp3718.value;
int64_t $tmp3735 = $tmp3696.value;
int64_t $tmp3736 = $tmp3734 + $tmp3735;
frost$core$Int64 $tmp3737 = (frost$core$Int64) {$tmp3736};
*(&local1) = $tmp3737;
goto block1;
block2:;
// line 1012
frost$core$Int64 $tmp3738 = *(&local0);
return $tmp3738;

}
frost$core$String* org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$String* local0 = NULL;
// line 1016
frost$core$Weak** $tmp3739 = &param1->owner;
frost$core$Weak* $tmp3740 = *$tmp3739;
frost$core$Object* $tmp3741 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3740);
org$frostlang$frostc$Type** $tmp3742 = &((org$frostlang$frostc$ClassDecl*) $tmp3741)->type;
org$frostlang$frostc$Type* $tmp3743 = *$tmp3742;
frost$core$String* $tmp3744 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp3743);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3744));
frost$core$String* $tmp3745 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3745));
*(&local0) = $tmp3744;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3744));
frost$core$Frost$unref$frost$core$Object$Q($tmp3741);
// line 1017
org$frostlang$frostc$MethodDecl$Kind* $tmp3746 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3747 = *$tmp3746;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3748;
$tmp3748 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3748->value = $tmp3747;
frost$core$Int64 $tmp3749 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3750 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3749);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3751;
$tmp3751 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3751->value = $tmp3750;
ITable* $tmp3752 = ((frost$core$Equatable*) $tmp3748)->$class->itable;
while ($tmp3752->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3752 = $tmp3752->next;
}
$fn3754 $tmp3753 = $tmp3752->methods[0];
frost$core$Bit $tmp3755 = $tmp3753(((frost$core$Equatable*) $tmp3748), ((frost$core$Equatable*) $tmp3751));
bool $tmp3756 = $tmp3755.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3751)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3748)));
if ($tmp3756) goto block3; else goto block2;
block3:;
frost$core$String* $tmp3757 = *(&local0);
frost$core$Bit $tmp3758 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp3757, &$s3759);
frost$core$Bit $tmp3760 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3758);
bool $tmp3761 = $tmp3760.value;
if ($tmp3761) goto block1; else goto block2;
block1:;
// line 1018
frost$core$String* $tmp3762 = *(&local0);
frost$core$String* $tmp3763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3762, &$s3764);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3763));
frost$core$String* $tmp3765 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3765));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3763;
block2:;
// line 1020
frost$core$String* $tmp3766 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3766));
frost$core$String* $tmp3767 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3767));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3766;

}
void org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1024
frost$core$String* $tmp3768 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3768));
frost$core$String* $tmp3769 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3769));
*(&local0) = $tmp3768;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3768));
// line 1025
frost$core$Weak** $tmp3770 = &param0->compiler;
frost$core$Weak* $tmp3771 = *$tmp3770;
frost$core$Object* $tmp3772 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3771);
$fn3774 $tmp3773 = ($fn3774) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3775 = $tmp3773(param2);
org$frostlang$frostc$ClassDecl* $tmp3776 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3772), $tmp3775);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
org$frostlang$frostc$ClassDecl* $tmp3777 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
*(&local1) = $tmp3776;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3775));
frost$core$Frost$unref$frost$core$Object$Q($tmp3772);
// line 1026
org$frostlang$frostc$ClassDecl* $tmp3778 = *(&local1);
frost$core$Bit $tmp3779 = frost$core$Bit$init$builtin_bit($tmp3778 != NULL);
bool $tmp3780 = $tmp3779.value;
if ($tmp3780) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3781 = (frost$core$Int64) {1026};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3782, $tmp3781);
abort(); // unreachable
block1:;
// line 1027
*(&local2) = ((frost$core$String*) NULL);
// line 1028
frost$core$Weak** $tmp3783 = &param0->compiler;
frost$core$Weak* $tmp3784 = *$tmp3783;
frost$core$Object* $tmp3785 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3784);
org$frostlang$frostc$ClassDecl* $tmp3786 = *(&local1);
frost$core$Bit $tmp3787 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3785), $tmp3786);
bool $tmp3788 = $tmp3787.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3785);
if ($tmp3788) goto block3; else goto block5;
block3:;
// line 1029
$fn3790 $tmp3789 = ($fn3790) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3791 = $tmp3789(param2);
org$frostlang$frostc$Type$Kind* $tmp3792 = &$tmp3791->typeKind;
org$frostlang$frostc$Type$Kind $tmp3793 = *$tmp3792;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3794;
$tmp3794 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3794->value = $tmp3793;
frost$core$Int64 $tmp3795 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3796 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3795);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3797;
$tmp3797 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3797->value = $tmp3796;
ITable* $tmp3798 = ((frost$core$Equatable*) $tmp3794)->$class->itable;
while ($tmp3798->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3798 = $tmp3798->next;
}
$fn3800 $tmp3799 = $tmp3798->methods[1];
frost$core$Bit $tmp3801 = $tmp3799(((frost$core$Equatable*) $tmp3794), ((frost$core$Equatable*) $tmp3797));
bool $tmp3802 = $tmp3801.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3797)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3794)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3791));
if ($tmp3802) goto block6; else goto block8;
block6:;
// line 1030
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3803));
frost$core$String* $tmp3804 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3804));
*(&local2) = &$s3805;
goto block7;
block8:;
// line 1
// line 1033
frost$core$String* $tmp3806 = *(&local0);
frost$core$String* $tmp3807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3808, $tmp3806);
frost$core$String* $tmp3809 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3807, &$s3810);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3809));
frost$core$String* $tmp3811 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3811));
*(&local2) = $tmp3809;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3807));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1037
frost$core$String* $tmp3812 = *(&local0);
frost$core$String* $tmp3813 = frost$core$String$get_asString$R$frost$core$String($tmp3812);
frost$core$String* $tmp3814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3813, &$s3815);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3814));
frost$core$String* $tmp3816 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3816));
*(&local2) = $tmp3814;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3813));
goto block4;
block4:;
// line 1039
frost$collections$HashMap** $tmp3817 = &param0->refs;
frost$collections$HashMap* $tmp3818 = *$tmp3817;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3819;
$tmp3819 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3819->value = param1;
frost$core$String* $tmp3820 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp3818, ((frost$collections$Key*) $tmp3819), ((frost$core$Object*) $tmp3820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3819)));
frost$core$String* $tmp3821 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3821));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3822 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3822));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp3823 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ClassDecl* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1043
frost$core$String* $tmp3824 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3824));
frost$core$String* $tmp3825 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3825));
*(&local0) = $tmp3824;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3824));
// line 1044
frost$core$Weak** $tmp3826 = &param0->compiler;
frost$core$Weak* $tmp3827 = *$tmp3826;
frost$core$Object* $tmp3828 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3827);
$fn3830 $tmp3829 = ($fn3830) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3831 = $tmp3829(param2);
org$frostlang$frostc$ClassDecl* $tmp3832 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(((org$frostlang$frostc$Compiler*) $tmp3828), $tmp3831);
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3832));
org$frostlang$frostc$ClassDecl* $tmp3833 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3833));
*(&local1) = $tmp3832;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
frost$core$Frost$unref$frost$core$Object$Q($tmp3828);
// line 1045
org$frostlang$frostc$ClassDecl* $tmp3834 = *(&local1);
frost$core$Bit $tmp3835 = frost$core$Bit$init$builtin_bit($tmp3834 != NULL);
bool $tmp3836 = $tmp3835.value;
if ($tmp3836) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp3837 = (frost$core$Int64) {1045};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3838, $tmp3837);
abort(); // unreachable
block1:;
// line 1046
*(&local2) = ((frost$core$String*) NULL);
// line 1047
frost$core$Weak** $tmp3839 = &param0->compiler;
frost$core$Weak* $tmp3840 = *$tmp3839;
frost$core$Object* $tmp3841 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3840);
org$frostlang$frostc$ClassDecl* $tmp3842 = *(&local1);
frost$core$Bit $tmp3843 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp3841), $tmp3842);
bool $tmp3844 = $tmp3843.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3841);
if ($tmp3844) goto block3; else goto block5;
block3:;
// line 1048
$fn3846 $tmp3845 = ($fn3846) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3847 = $tmp3845(param2);
org$frostlang$frostc$Type$Kind* $tmp3848 = &$tmp3847->typeKind;
org$frostlang$frostc$Type$Kind $tmp3849 = *$tmp3848;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3850;
$tmp3850 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3850->value = $tmp3849;
frost$core$Int64 $tmp3851 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp3852 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3851);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3853;
$tmp3853 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3853->value = $tmp3852;
ITable* $tmp3854 = ((frost$core$Equatable*) $tmp3850)->$class->itable;
while ($tmp3854->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3854 = $tmp3854->next;
}
$fn3856 $tmp3855 = $tmp3854->methods[1];
frost$core$Bit $tmp3857 = $tmp3855(((frost$core$Equatable*) $tmp3850), ((frost$core$Equatable*) $tmp3853));
bool $tmp3858 = $tmp3857.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3853)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3850)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3847));
if ($tmp3858) goto block6; else goto block8;
block6:;
// line 1049
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3859));
frost$core$String* $tmp3860 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3860));
*(&local2) = &$s3861;
goto block7;
block8:;
// line 1
// line 1052
frost$core$String* $tmp3862 = *(&local0);
frost$core$String* $tmp3863 = frost$core$String$get_asString$R$frost$core$String($tmp3862);
frost$core$String* $tmp3864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3863, &$s3865);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3864));
frost$core$String* $tmp3866 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3866));
*(&local2) = $tmp3864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3863));
goto block7;
block7:;
goto block4;
block5:;
// line 1
// line 1056
frost$core$String* $tmp3867 = *(&local0);
frost$core$String* $tmp3868 = frost$core$String$get_asString$R$frost$core$String($tmp3867);
frost$core$String* $tmp3869 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3868, &$s3870);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3869));
frost$core$String* $tmp3871 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3871));
*(&local2) = $tmp3869;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3868));
goto block4;
block4:;
// line 1058
frost$collections$HashMap** $tmp3872 = &param0->refs;
frost$collections$HashMap* $tmp3873 = *$tmp3872;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp3874;
$tmp3874 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp3874->value = param1;
frost$core$String* $tmp3875 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp3873, ((frost$collections$Key*) $tmp3874), ((frost$core$Object*) $tmp3875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp3874)));
frost$core$String* $tmp3876 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3877 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3877));
*(&local1) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp3878 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3878));
*(&local0) = ((frost$core$String*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

// line 1062
frost$core$Int64* $tmp3879 = &param1->$rawValue;
frost$core$Int64 $tmp3880 = *$tmp3879;
frost$core$Int64 $tmp3881 = (frost$core$Int64) {4};
frost$core$Bit $tmp3882 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3880, $tmp3881);
bool $tmp3883 = $tmp3882.value;
if ($tmp3883) goto block2; else goto block1;
block2:;
// line 1064
frost$core$Bit $tmp3884 = frost$core$Bit$init$builtin_bit(true);
return $tmp3884;
block1:;
// line 1067
frost$core$Bit $tmp3885 = frost$core$Bit$init$builtin_bit(false);
return $tmp3885;

}
void org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$expression$Binary$Operator param3, org$frostlang$frostc$IR$Value* param4, org$frostlang$frostc$Type* param5) {

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Error* local4 = NULL;
// line 1072
frost$core$String* $tmp3886 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3886));
frost$core$String* $tmp3887 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3887));
*(&local0) = $tmp3886;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3886));
// line 1073
frost$core$String* $tmp3888 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param4);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3888));
frost$core$String* $tmp3889 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3889));
*(&local1) = $tmp3888;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3888));
// line 1074
$fn3891 $tmp3890 = ($fn3891) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3892 = $tmp3890(param2);
frost$core$Bit $tmp3893 = org$frostlang$frostc$Type$get_isNullable$R$frost$core$Bit($tmp3892);
bool $tmp3894 = $tmp3893.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3892));
if ($tmp3894) goto block1; else goto block2;
block1:;
// line 1075
frost$core$Int64 $tmp3895 = param3.$rawValue;
frost$core$Int64 $tmp3896 = (frost$core$Int64) {21};
frost$core$Bit $tmp3897 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3895, $tmp3896);
bool $tmp3898 = $tmp3897.value;
if ($tmp3898) goto block4; else goto block5;
block4:;
// line 1077
frost$core$Bit $tmp3899 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param2);
bool $tmp3900 = $tmp3899.value;
if ($tmp3900) goto block6; else goto block7;
block6:;
// line 1078
org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param4);
// line 1079
frost$core$String* $tmp3901 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3901));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3902 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3902));
*(&local0) = ((frost$core$String*) NULL);
return;
block7:;
// line 1081
frost$core$Bit $tmp3903 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param4);
bool $tmp3904 = $tmp3903.value;
if ($tmp3904) goto block8; else goto block9;
block8:;
// line 1082
org$frostlang$frostc$CCodeGenerator$writeIsNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param2);
// line 1083
frost$core$String* $tmp3905 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3905));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3906 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3906));
*(&local0) = ((frost$core$String*) NULL);
return;
block9:;
goto block3;
block5:;
frost$core$Int64 $tmp3907 = (frost$core$Int64) {22};
frost$core$Bit $tmp3908 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3895, $tmp3907);
bool $tmp3909 = $tmp3908.value;
if ($tmp3909) goto block10; else goto block3;
block10:;
// line 1087
frost$core$Bit $tmp3910 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param2);
bool $tmp3911 = $tmp3910.value;
if ($tmp3911) goto block11; else goto block12;
block11:;
// line 1088
org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param4);
// line 1089
frost$core$String* $tmp3912 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3912));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3913 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3913));
*(&local0) = ((frost$core$String*) NULL);
return;
block12:;
// line 1091
frost$core$Bit $tmp3914 = org$frostlang$frostc$CCodeGenerator$isNull$org$frostlang$frostc$IR$Value$R$frost$core$Bit(param0, param4);
bool $tmp3915 = $tmp3914.value;
if ($tmp3915) goto block13; else goto block14;
block13:;
// line 1092
org$frostlang$frostc$CCodeGenerator$writeIsNonNull$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, param2);
// line 1093
frost$core$String* $tmp3916 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3916));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp3917 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3917));
*(&local0) = ((frost$core$String*) NULL);
return;
block14:;
goto block3;
block3:;
goto block2;
block2:;
// line 1098
*(&local2) = ((frost$core$String*) NULL);
// line 1099
frost$core$Int64 $tmp3918 = param3.$rawValue;
frost$core$Int64 $tmp3919 = (frost$core$Int64) {0};
frost$core$Bit $tmp3920 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3919);
bool $tmp3921 = $tmp3920.value;
if ($tmp3921) goto block16; else goto block17;
block16:;
// line 1101
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3922));
frost$core$String* $tmp3923 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3923));
*(&local2) = &$s3924;
goto block15;
block17:;
frost$core$Int64 $tmp3925 = (frost$core$Int64) {1};
frost$core$Bit $tmp3926 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3925);
bool $tmp3927 = $tmp3926.value;
if ($tmp3927) goto block18; else goto block19;
block18:;
// line 1104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3928));
frost$core$String* $tmp3929 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3929));
*(&local2) = &$s3930;
goto block15;
block19:;
frost$core$Int64 $tmp3931 = (frost$core$Int64) {2};
frost$core$Bit $tmp3932 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3931);
bool $tmp3933 = $tmp3932.value;
if ($tmp3933) goto block20; else goto block21;
block20:;
// line 1107
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3934));
frost$core$String* $tmp3935 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3935));
*(&local2) = &$s3936;
goto block15;
block21:;
frost$core$Int64 $tmp3937 = (frost$core$Int64) {3};
frost$core$Bit $tmp3938 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3937);
bool $tmp3939 = $tmp3938.value;
if ($tmp3939) goto block22; else goto block23;
block23:;
frost$core$Int64 $tmp3940 = (frost$core$Int64) {4};
frost$core$Bit $tmp3941 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3940);
bool $tmp3942 = $tmp3941.value;
if ($tmp3942) goto block22; else goto block24;
block22:;
// line 1110
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3943));
frost$core$String* $tmp3944 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3944));
*(&local2) = &$s3945;
goto block15;
block24:;
frost$core$Int64 $tmp3946 = (frost$core$Int64) {5};
frost$core$Bit $tmp3947 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3946);
bool $tmp3948 = $tmp3947.value;
if ($tmp3948) goto block25; else goto block26;
block25:;
// line 1113
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3949));
frost$core$String* $tmp3950 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3950));
*(&local2) = &$s3951;
goto block15;
block26:;
frost$core$Int64 $tmp3952 = (frost$core$Int64) {18};
frost$core$Bit $tmp3953 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3952);
bool $tmp3954 = $tmp3953.value;
if ($tmp3954) goto block27; else goto block28;
block27:;
// line 1116
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3955));
frost$core$String* $tmp3956 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3956));
*(&local2) = &$s3957;
goto block15;
block28:;
frost$core$Int64 $tmp3958 = (frost$core$Int64) {19};
frost$core$Bit $tmp3959 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3958);
bool $tmp3960 = $tmp3959.value;
if ($tmp3960) goto block29; else goto block30;
block29:;
// line 1119
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3961));
frost$core$String* $tmp3962 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3962));
*(&local2) = &$s3963;
goto block15;
block30:;
frost$core$Int64 $tmp3964 = (frost$core$Int64) {14};
frost$core$Bit $tmp3965 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3964);
bool $tmp3966 = $tmp3965.value;
if ($tmp3966) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp3967 = (frost$core$Int64) {15};
frost$core$Bit $tmp3968 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3967);
bool $tmp3969 = $tmp3968.value;
if ($tmp3969) goto block31; else goto block33;
block31:;
// line 1122
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3970));
frost$core$String* $tmp3971 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3971));
*(&local2) = &$s3972;
goto block15;
block33:;
frost$core$Int64 $tmp3973 = (frost$core$Int64) {12};
frost$core$Bit $tmp3974 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3973);
bool $tmp3975 = $tmp3974.value;
if ($tmp3975) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp3976 = (frost$core$Int64) {13};
frost$core$Bit $tmp3977 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3976);
bool $tmp3978 = $tmp3977.value;
if ($tmp3978) goto block34; else goto block36;
block34:;
// line 1125
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3979));
frost$core$String* $tmp3980 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
*(&local2) = &$s3981;
goto block15;
block36:;
frost$core$Int64 $tmp3982 = (frost$core$Int64) {16};
frost$core$Bit $tmp3983 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3982);
bool $tmp3984 = $tmp3983.value;
if ($tmp3984) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp3985 = (frost$core$Int64) {17};
frost$core$Bit $tmp3986 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3985);
bool $tmp3987 = $tmp3986.value;
if ($tmp3987) goto block37; else goto block39;
block37:;
// line 1128
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3988));
frost$core$String* $tmp3989 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3989));
*(&local2) = &$s3990;
goto block15;
block39:;
frost$core$Int64 $tmp3991 = (frost$core$Int64) {6};
frost$core$Bit $tmp3992 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3991);
bool $tmp3993 = $tmp3992.value;
if ($tmp3993) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp3994 = (frost$core$Int64) {21};
frost$core$Bit $tmp3995 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3994);
bool $tmp3996 = $tmp3995.value;
if ($tmp3996) goto block40; else goto block42;
block40:;
// line 1131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s3997));
frost$core$String* $tmp3998 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3998));
*(&local2) = &$s3999;
goto block15;
block42:;
frost$core$Int64 $tmp4000 = (frost$core$Int64) {7};
frost$core$Bit $tmp4001 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp4000);
bool $tmp4002 = $tmp4001.value;
if ($tmp4002) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp4003 = (frost$core$Int64) {22};
frost$core$Bit $tmp4004 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp4003);
bool $tmp4005 = $tmp4004.value;
if ($tmp4005) goto block43; else goto block45;
block43:;
// line 1134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4006));
frost$core$String* $tmp4007 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4007));
*(&local2) = &$s4008;
goto block15;
block45:;
frost$core$Int64 $tmp4009 = (frost$core$Int64) {8};
frost$core$Bit $tmp4010 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp4009);
bool $tmp4011 = $tmp4010.value;
if ($tmp4011) goto block46; else goto block47;
block46:;
// line 1137
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4012));
frost$core$String* $tmp4013 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4013));
*(&local2) = &$s4014;
goto block15;
block47:;
frost$core$Int64 $tmp4015 = (frost$core$Int64) {9};
frost$core$Bit $tmp4016 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp4015);
bool $tmp4017 = $tmp4016.value;
if ($tmp4017) goto block48; else goto block49;
block48:;
// line 1140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4018));
frost$core$String* $tmp4019 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4019));
*(&local2) = &$s4020;
goto block15;
block49:;
frost$core$Int64 $tmp4021 = (frost$core$Int64) {10};
frost$core$Bit $tmp4022 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp4021);
bool $tmp4023 = $tmp4022.value;
if ($tmp4023) goto block50; else goto block51;
block50:;
// line 1143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4024));
frost$core$String* $tmp4025 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4025));
*(&local2) = &$s4026;
goto block15;
block51:;
frost$core$Int64 $tmp4027 = (frost$core$Int64) {11};
frost$core$Bit $tmp4028 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp4027);
bool $tmp4029 = $tmp4028.value;
if ($tmp4029) goto block52; else goto block53;
block52:;
// line 1146
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4030));
frost$core$String* $tmp4031 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4031));
*(&local2) = &$s4032;
goto block15;
block53:;
// line 1149
frost$core$Int64 $tmp4033 = (frost$core$Int64) {1149};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4034, $tmp4033);
abort(); // unreachable
block15:;
// line 1152
frost$core$String* $tmp4035 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4035));
frost$core$String* $tmp4036 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4036));
*(&local3) = $tmp4035;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4035));
// line 1153
*(&local4) = ((frost$core$Error*) NULL);
// line 1154
frost$io$IndentedOutputStream** $tmp4037 = &param0->out;
frost$io$IndentedOutputStream* $tmp4038 = *$tmp4037;
frost$core$String* $tmp4039 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param5);
frost$core$String* $tmp4040 = frost$core$String$get_asString$R$frost$core$String($tmp4039);
frost$core$String* $tmp4041 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4040, &$s4042);
frost$core$String* $tmp4043 = *(&local3);
frost$core$String* $tmp4044 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4041, $tmp4043);
frost$core$String* $tmp4045 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4044, &$s4046);
frost$core$String* $tmp4047 = *(&local0);
frost$core$String* $tmp4048 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4045, $tmp4047);
frost$core$String* $tmp4049 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4048, &$s4050);
frost$core$String* $tmp4051 = *(&local2);
frost$core$String* $tmp4052 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4049, $tmp4051);
frost$core$String* $tmp4053 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4052, &$s4054);
frost$core$String* $tmp4055 = *(&local1);
frost$core$String* $tmp4056 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4053, $tmp4055);
frost$core$String* $tmp4057 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4056, &$s4058);
$fn4060 $tmp4059 = ($fn4060) ((frost$io$OutputStream*) $tmp4038)->$class->vtable[19];
frost$core$Error* $tmp4061 = $tmp4059(((frost$io$OutputStream*) $tmp4038), $tmp4057);
if ($tmp4061 == NULL) goto block56; else goto block57;
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4061));
*(&local4) = $tmp4061;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4039));
goto block54;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4056));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4039));
goto block55;
block54:;
// line 1157
frost$core$Int64 $tmp4062 = (frost$core$Int64) {1157};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4063, $tmp4062);
abort(); // unreachable
block55:;
frost$core$Error* $tmp4064 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4064));
*(&local4) = ((frost$core$Error*) NULL);
// line 1159
frost$collections$HashMap** $tmp4065 = &param0->refs;
frost$collections$HashMap* $tmp4066 = *$tmp4065;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4067;
$tmp4067 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4067->value = param1;
frost$core$String* $tmp4068 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4066, ((frost$collections$Key*) $tmp4067), ((frost$core$Object*) $tmp4068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4067)));
frost$core$String* $tmp4069 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4069));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4070 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4070));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4071 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4071));
*(&local1) = ((frost$core$String*) NULL);
frost$core$String* $tmp4072 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4072));
*(&local0) = ((frost$core$String*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Block$ID param1) {

frost$core$Error* local0 = NULL;
// line 1163
*(&local0) = ((frost$core$Error*) NULL);
// line 1164
frost$io$IndentedOutputStream** $tmp4073 = &param0->out;
frost$io$IndentedOutputStream* $tmp4074 = *$tmp4073;
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4075;
$tmp4075 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4075->value = param1;
frost$core$String* $tmp4076 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4077, ((frost$core$Object*) $tmp4075));
frost$core$String* $tmp4078 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4076, &$s4079);
$fn4081 $tmp4080 = ($fn4081) ((frost$io$OutputStream*) $tmp4074)->$class->vtable[19];
frost$core$Error* $tmp4082 = $tmp4080(((frost$io$OutputStream*) $tmp4074), $tmp4078);
if ($tmp4082 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4082));
*(&local0) = $tmp4082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4076));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4075));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4082));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4076));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4075));
goto block2;
block1:;
// line 1167
frost$core$Int64 $tmp4083 = (frost$core$Int64) {1167};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4084, $tmp4083);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4085 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4085));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

// line 1172
frost$collections$HashMap** $tmp4086 = &param0->refs;
frost$collections$HashMap* $tmp4087 = *$tmp4086;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4088;
$tmp4088 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4088->value = param1;
frost$core$String* $tmp4089 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
$fn4091 $tmp4090 = ($fn4091) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4092 = $tmp4090(param2);
frost$core$String* $tmp4093 = org$frostlang$frostc$CCodeGenerator$getCastReference$frost$core$String$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4089, $tmp4092, param3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4087, ((frost$collections$Key*) $tmp4088), ((frost$core$Object*) $tmp4093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4088)));
return;

}
void org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Block$ID param2, org$frostlang$frostc$IR$Block$ID param3) {

frost$core$Error* local0 = NULL;
// line 1176
*(&local0) = ((frost$core$Error*) NULL);
// line 1177
frost$io$IndentedOutputStream** $tmp4094 = &param0->out;
frost$io$IndentedOutputStream* $tmp4095 = *$tmp4094;
frost$core$String* $tmp4096 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp4097 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4098, $tmp4096);
frost$core$String* $tmp4099 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4097, &$s4100);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4101;
$tmp4101 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4101->value = param2;
frost$core$String* $tmp4102 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4099, ((frost$core$Object*) $tmp4101));
frost$core$String* $tmp4103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4102, &$s4104);
org$frostlang$frostc$IR$Block$ID$wrapper* $tmp4105;
$tmp4105 = (org$frostlang$frostc$IR$Block$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Block$ID$wrapperclass);
$tmp4105->value = param3;
frost$core$String* $tmp4106 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4103, ((frost$core$Object*) $tmp4105));
frost$core$String* $tmp4107 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4106, &$s4108);
$fn4110 $tmp4109 = ($fn4110) ((frost$io$OutputStream*) $tmp4095)->$class->vtable[19];
frost$core$Error* $tmp4111 = $tmp4109(((frost$io$OutputStream*) $tmp4095), $tmp4107);
if ($tmp4111 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4111));
*(&local0) = $tmp4111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4096));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4099));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4096));
goto block2;
block1:;
// line 1180
frost$core$Int64 $tmp4112 = (frost$core$Int64) {1180};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4113, $tmp4112);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4114));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$ClassDecl* param2) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
// line 1185
*(&local0) = ((frost$core$Error*) NULL);
// line 1186
frost$core$Weak** $tmp4115 = &param0->compiler;
frost$core$Weak* $tmp4116 = *$tmp4115;
frost$core$Object* $tmp4117 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4116);
frost$core$Bit $tmp4118 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4117), param2);
frost$core$Bit $tmp4119 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp4118);
bool $tmp4120 = $tmp4119.value;
if ($tmp4120) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4121 = (frost$core$Int64) {1186};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4122, $tmp4121);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4117);
// line 1187
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4123 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param2);
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4123));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4124 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4124));
*(&local1) = $tmp4123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4123));
// line 1188
*(&local2) = ((frost$core$String*) NULL);
// line 1189
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4125 = *(&local1);
frost$core$String** $tmp4126 = &$tmp4125->type;
frost$core$String* $tmp4127 = *$tmp4126;
ITable* $tmp4129 = ((frost$core$Equatable*) $tmp4127)->$class->itable;
while ($tmp4129->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4129 = $tmp4129->next;
}
$fn4131 $tmp4130 = $tmp4129->methods[1];
frost$core$Bit $tmp4132 = $tmp4130(((frost$core$Equatable*) $tmp4127), ((frost$core$Equatable*) &$s4128));
bool $tmp4133 = $tmp4132.value;
if ($tmp4133) goto block5; else goto block7;
block5:;
// line 1190
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4134 = *(&local1);
frost$core$String** $tmp4135 = &$tmp4134->name;
frost$core$String* $tmp4136 = *$tmp4135;
frost$core$String* $tmp4137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4138, $tmp4136);
frost$core$String* $tmp4139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4137, &$s4140);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4139));
frost$core$String* $tmp4141 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4141));
*(&local2) = $tmp4139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4137));
goto block6;
block7:;
// line 1
// line 1193
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4142 = *(&local1);
frost$core$String** $tmp4143 = &$tmp4142->name;
frost$core$String* $tmp4144 = *$tmp4143;
frost$core$String* $tmp4145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4146, $tmp4144);
frost$core$String* $tmp4147 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4145, &$s4148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4147));
frost$core$String* $tmp4149 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4149));
*(&local2) = $tmp4147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4145));
goto block6;
block6:;
// line 1195
frost$core$String* $tmp4150 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4150));
frost$core$String* $tmp4151 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4151));
*(&local3) = $tmp4150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4150));
// line 1196
org$frostlang$frostc$Type** $tmp4152 = &param2->type;
org$frostlang$frostc$Type* $tmp4153 = *$tmp4152;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4153));
org$frostlang$frostc$Type* $tmp4154 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4154));
*(&local4) = $tmp4153;
// line 1197
frost$io$IndentedOutputStream** $tmp4155 = &param0->out;
frost$io$IndentedOutputStream* $tmp4156 = *$tmp4155;
org$frostlang$frostc$Type* $tmp4157 = *(&local4);
frost$core$Int64 $tmp4158 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp4157);
frost$core$Int64$wrapper* $tmp4159;
$tmp4159 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4159->value = $tmp4158;
frost$core$String* $tmp4160 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4161, ((frost$core$Object*) $tmp4159));
frost$core$String* $tmp4162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4160, &$s4163);
frost$core$String** $tmp4164 = &param2->name;
frost$core$String* $tmp4165 = *$tmp4164;
frost$core$String* $tmp4166 = org$frostlang$frostc$CCodeGenerator$escapeName$frost$core$String$R$frost$core$String(param0, $tmp4165);
frost$core$String* $tmp4167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4162, $tmp4166);
frost$core$String* $tmp4168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4167, &$s4169);
$fn4171 $tmp4170 = ($fn4171) ((frost$io$OutputStream*) $tmp4156)->$class->vtable[19];
frost$core$Error* $tmp4172 = $tmp4170(((frost$io$OutputStream*) $tmp4156), $tmp4168);
if ($tmp4172 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4172));
*(&local0) = $tmp4172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4159));
org$frostlang$frostc$Type* $tmp4173 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4173));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4174 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4174));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4175 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4175));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4176 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4176));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4159));
// line 1198
frost$io$IndentedOutputStream** $tmp4177 = &param0->out;
frost$io$IndentedOutputStream* $tmp4178 = *$tmp4177;
org$frostlang$frostc$Type* $tmp4179 = *(&local4);
frost$core$String* $tmp4180 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4179);
frost$core$String* $tmp4181 = frost$core$String$get_asString$R$frost$core$String($tmp4180);
frost$core$String* $tmp4182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4181, &$s4183);
frost$core$String* $tmp4184 = *(&local3);
frost$core$String* $tmp4185 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4182, $tmp4184);
frost$core$String* $tmp4186 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4185, &$s4187);
org$frostlang$frostc$Type* $tmp4188 = *(&local4);
frost$core$String* $tmp4189 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4188);
frost$core$String* $tmp4190 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4186, $tmp4189);
frost$core$String* $tmp4191 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4190, &$s4192);
org$frostlang$frostc$Type* $tmp4193 = *(&local4);
frost$core$Int64 $tmp4194 = org$frostlang$frostc$CCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int64(param0, $tmp4193);
frost$core$String* $tmp4195 = frost$core$Int64$get_asString$R$frost$core$String($tmp4194);
frost$core$String* $tmp4196 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4195, &$s4197);
frost$core$String* $tmp4198 = *(&local2);
frost$core$String* $tmp4199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4196, $tmp4198);
frost$core$String* $tmp4200 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4199, &$s4201);
frost$core$String* $tmp4202 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4191, $tmp4200);
$fn4204 $tmp4203 = ($fn4204) ((frost$io$OutputStream*) $tmp4178)->$class->vtable[19];
frost$core$Error* $tmp4205 = $tmp4203(((frost$io$OutputStream*) $tmp4178), $tmp4202);
if ($tmp4205 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4205));
*(&local0) = $tmp4205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4180));
org$frostlang$frostc$Type* $tmp4206 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4206));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4207 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4207));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4208 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4208));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4209 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4209));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4191));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4180));
// line 1200
frost$collections$HashMap** $tmp4210 = &param0->refs;
frost$collections$HashMap* $tmp4211 = *$tmp4210;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4212;
$tmp4212 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4212->value = param1;
frost$core$String* $tmp4213 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4211, ((frost$collections$Key*) $tmp4212), ((frost$core$Object*) $tmp4213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4212)));
org$frostlang$frostc$Type* $tmp4214 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4214));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4215 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4215));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4216 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4216));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4217 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4217));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block2;
block1:;
// line 1203
frost$core$Int64 $tmp4218 = (frost$core$Int64) {1203};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4219, $tmp4218);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4220 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4220));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$ClassDecl* param2, org$frostlang$frostc$FixedArray* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
// line 1208
*(&local0) = ((frost$core$Error*) NULL);
// line 1209
frost$core$Weak** $tmp4221 = &param0->compiler;
frost$core$Weak* $tmp4222 = *$tmp4221;
frost$core$Object* $tmp4223 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4222);
frost$core$Bit $tmp4224 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4223), param2);
bool $tmp4225 = $tmp4224.value;
if ($tmp4225) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4226 = (frost$core$Int64) {1209};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4227, $tmp4226);
abort(); // unreachable
block3:;
frost$core$Frost$unref$frost$core$Object$Q($tmp4223);
// line 1210
frost$core$String* $tmp4228 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4228));
frost$core$String* $tmp4229 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4229));
*(&local1) = $tmp4228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4228));
// line 1211
org$frostlang$frostc$Type** $tmp4230 = &param2->type;
org$frostlang$frostc$Type* $tmp4231 = *$tmp4230;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4231));
org$frostlang$frostc$Type* $tmp4232 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4232));
*(&local2) = $tmp4231;
// line 1212
frost$io$IndentedOutputStream** $tmp4233 = &param0->out;
frost$io$IndentedOutputStream* $tmp4234 = *$tmp4233;
org$frostlang$frostc$Type* $tmp4235 = *(&local2);
frost$core$String* $tmp4236 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4235);
frost$core$String* $tmp4237 = frost$core$String$get_asString$R$frost$core$String($tmp4236);
frost$core$String* $tmp4238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4237, &$s4239);
frost$core$String* $tmp4240 = *(&local1);
frost$core$String* $tmp4241 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4238, $tmp4240);
frost$core$String* $tmp4242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4241, &$s4243);
org$frostlang$frostc$Type* $tmp4244 = *(&local2);
frost$core$String* $tmp4245 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4244);
frost$core$String* $tmp4246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4242, $tmp4245);
frost$core$String* $tmp4247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4246, &$s4248);
$fn4250 $tmp4249 = ($fn4250) ((frost$io$OutputStream*) $tmp4234)->$class->vtable[17];
frost$core$Error* $tmp4251 = $tmp4249(((frost$io$OutputStream*) $tmp4234), $tmp4247);
if ($tmp4251 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4251));
*(&local0) = $tmp4251;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4236));
org$frostlang$frostc$Type* $tmp4252 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4252));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4253 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4253));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4245));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4236));
// line 1213
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4254));
frost$core$String* $tmp4255 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4255));
*(&local3) = &$s4256;
// line 1214
ITable* $tmp4257 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp4257->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4257 = $tmp4257->next;
}
$fn4259 $tmp4258 = $tmp4257->methods[0];
frost$collections$Iterator* $tmp4260 = $tmp4258(((frost$collections$Iterable*) param3));
goto block7;
block7:;
ITable* $tmp4261 = $tmp4260->$class->itable;
while ($tmp4261->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4261 = $tmp4261->next;
}
$fn4263 $tmp4262 = $tmp4261->methods[0];
frost$core$Bit $tmp4264 = $tmp4262($tmp4260);
bool $tmp4265 = $tmp4264.value;
if ($tmp4265) goto block9; else goto block8;
block8:;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp4266 = $tmp4260->$class->itable;
while ($tmp4266->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4266 = $tmp4266->next;
}
$fn4268 $tmp4267 = $tmp4266->methods[1];
frost$core$Object* $tmp4269 = $tmp4267($tmp4260);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp4269)));
org$frostlang$frostc$IR$Value* $tmp4270 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4270));
*(&local4) = ((org$frostlang$frostc$IR$Value*) $tmp4269);
// line 1215
frost$io$IndentedOutputStream** $tmp4271 = &param0->out;
frost$io$IndentedOutputStream* $tmp4272 = *$tmp4271;
frost$core$String* $tmp4273 = *(&local3);
frost$core$String* $tmp4274 = frost$core$String$get_asString$R$frost$core$String($tmp4273);
frost$core$String* $tmp4275 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4274, &$s4276);
org$frostlang$frostc$IR$Value* $tmp4277 = *(&local4);
frost$core$String* $tmp4278 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp4277);
frost$core$String* $tmp4279 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4275, $tmp4278);
frost$core$String* $tmp4280 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4279, &$s4281);
$fn4283 $tmp4282 = ($fn4283) ((frost$io$OutputStream*) $tmp4272)->$class->vtable[17];
frost$core$Error* $tmp4284 = $tmp4282(((frost$io$OutputStream*) $tmp4272), $tmp4280);
if ($tmp4284 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4284));
*(&local0) = $tmp4284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4274));
frost$core$Frost$unref$frost$core$Object$Q($tmp4269);
org$frostlang$frostc$IR$Value* $tmp4285 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4285));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4260));
frost$core$String* $tmp4286 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4286));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4287 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4287));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4288 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4288));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4274));
// line 1216
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4289));
frost$core$String* $tmp4290 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4290));
*(&local3) = &$s4291;
frost$core$Frost$unref$frost$core$Object$Q($tmp4269);
org$frostlang$frostc$IR$Value* $tmp4292 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4292));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block7;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4260));
// line 1218
frost$io$IndentedOutputStream** $tmp4293 = &param0->out;
frost$io$IndentedOutputStream* $tmp4294 = *$tmp4293;
$fn4296 $tmp4295 = ($fn4296) ((frost$io$OutputStream*) $tmp4294)->$class->vtable[19];
frost$core$Error* $tmp4297 = $tmp4295(((frost$io$OutputStream*) $tmp4294), &$s4298);
if ($tmp4297 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
*(&local0) = $tmp4297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
frost$core$String* $tmp4299 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4299));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4300 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4301 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
// line 1219
frost$collections$HashMap** $tmp4302 = &param0->refs;
frost$collections$HashMap* $tmp4303 = *$tmp4302;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4304;
$tmp4304 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4304->value = param1;
frost$core$String* $tmp4305 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4303, ((frost$collections$Key*) $tmp4304), ((frost$core$Object*) $tmp4305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4304)));
frost$core$String* $tmp4306 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4307 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4307));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp4308 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4308));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1222
frost$core$Int64 $tmp4309 = (frost$core$Int64) {1222};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4310, $tmp4309);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4311 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4311));
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
// line 1227
*(&local0) = ((frost$core$Error*) NULL);
// line 1228
$fn4313 $tmp4312 = ($fn4313) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4314 = $tmp4312(param2);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4314));
org$frostlang$frostc$Type* $tmp4315 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4315));
*(&local1) = $tmp4314;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4314));
// line 1229
org$frostlang$frostc$Type* $tmp4316 = *(&local1);
frost$core$Bit $tmp4317 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp4316);
bool $tmp4318 = $tmp4317.value;
if ($tmp4318) goto block3; else goto block4;
block3:;
// line 1230
org$frostlang$frostc$Type* $tmp4319 = *(&local1);
org$frostlang$frostc$FixedArray* $tmp4320 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp4319);
frost$core$Int64 $tmp4321 = (frost$core$Int64) {1};
frost$core$Object* $tmp4322 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4320, $tmp4321);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp4322)));
org$frostlang$frostc$Type* $tmp4323 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4323));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp4322);
frost$core$Frost$unref$frost$core$Object$Q($tmp4322);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4320));
goto block4;
block4:;
// line 1232
org$frostlang$frostc$Type* $tmp4324 = *(&local1);
org$frostlang$frostc$Type* $tmp4325 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp4324);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4325));
org$frostlang$frostc$Type* $tmp4326 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4326));
*(&local2) = $tmp4325;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4325));
// line 1233
org$frostlang$frostc$Type* $tmp4327 = *(&local2);
org$frostlang$frostc$Type* $tmp4328 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp4329 = ((frost$core$Equatable*) $tmp4327)->$class->itable;
while ($tmp4329->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4329 = $tmp4329->next;
}
$fn4331 $tmp4330 = $tmp4329->methods[1];
frost$core$Bit $tmp4332 = $tmp4330(((frost$core$Equatable*) $tmp4327), ((frost$core$Equatable*) $tmp4328));
bool $tmp4333 = $tmp4332.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4328));
if ($tmp4333) goto block5; else goto block6;
block5:;
// line 1234
frost$core$String* $tmp4334 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4334));
frost$core$String* $tmp4335 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4335));
*(&local3) = $tmp4334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4334));
// line 1235
frost$io$IndentedOutputStream** $tmp4336 = &param0->out;
frost$io$IndentedOutputStream* $tmp4337 = *$tmp4336;
org$frostlang$frostc$Type* $tmp4338 = *(&local2);
frost$core$String* $tmp4339 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4338);
frost$core$String* $tmp4340 = frost$core$String$get_asString$R$frost$core$String($tmp4339);
frost$core$String* $tmp4341 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4340, &$s4342);
frost$core$String* $tmp4343 = *(&local3);
frost$core$String* $tmp4344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4341, $tmp4343);
frost$core$String* $tmp4345 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4344, &$s4346);
$fn4348 $tmp4347 = ($fn4348) ((frost$io$OutputStream*) $tmp4337)->$class->vtable[17];
frost$core$Error* $tmp4349 = $tmp4347(((frost$io$OutputStream*) $tmp4337), $tmp4345);
if ($tmp4349 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4349));
*(&local0) = $tmp4349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4339));
frost$core$String* $tmp4350 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4350));
*(&local3) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4351 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4351));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4352 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4352));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4349));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4345));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4339));
// line 1236
frost$collections$HashMap** $tmp4353 = &param0->refs;
frost$collections$HashMap* $tmp4354 = *$tmp4353;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4355;
$tmp4355 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4355->value = param1;
frost$core$String* $tmp4356 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4354, ((frost$collections$Key*) $tmp4355), ((frost$core$Object*) $tmp4356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4355)));
frost$core$String* $tmp4357 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4357));
*(&local3) = ((frost$core$String*) NULL);
goto block6;
block6:;
// line 1238
frost$io$IndentedOutputStream** $tmp4358 = &param0->out;
frost$io$IndentedOutputStream* $tmp4359 = *$tmp4358;
frost$core$String* $tmp4360 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4361 = frost$core$String$get_asString$R$frost$core$String($tmp4360);
frost$core$String* $tmp4362 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4361, &$s4363);
$fn4365 $tmp4364 = ($fn4365) ((frost$io$OutputStream*) $tmp4359)->$class->vtable[17];
frost$core$Error* $tmp4366 = $tmp4364(((frost$io$OutputStream*) $tmp4359), $tmp4362);
if ($tmp4366 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4366));
*(&local0) = $tmp4366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4360));
org$frostlang$frostc$Type* $tmp4367 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4367));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4368 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4368));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4362));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4360));
// line 1239
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4369));
frost$core$String* $tmp4370 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4370));
*(&local4) = &$s4371;
// line 1240
ITable* $tmp4372 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp4372->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp4372 = $tmp4372->next;
}
$fn4374 $tmp4373 = $tmp4372->methods[0];
frost$collections$Iterator* $tmp4375 = $tmp4373(((frost$collections$Iterable*) param3));
goto block11;
block11:;
ITable* $tmp4376 = $tmp4375->$class->itable;
while ($tmp4376->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4376 = $tmp4376->next;
}
$fn4378 $tmp4377 = $tmp4376->methods[0];
frost$core$Bit $tmp4379 = $tmp4377($tmp4375);
bool $tmp4380 = $tmp4379.value;
if ($tmp4380) goto block13; else goto block12;
block12:;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp4381 = $tmp4375->$class->itable;
while ($tmp4381->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4381 = $tmp4381->next;
}
$fn4383 $tmp4382 = $tmp4381->methods[1];
frost$core$Object* $tmp4384 = $tmp4382($tmp4375);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp4384)));
org$frostlang$frostc$IR$Value* $tmp4385 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4385));
*(&local5) = ((org$frostlang$frostc$IR$Value*) $tmp4384);
// line 1241
frost$io$IndentedOutputStream** $tmp4386 = &param0->out;
frost$io$IndentedOutputStream* $tmp4387 = *$tmp4386;
frost$core$String* $tmp4388 = *(&local4);
$fn4390 $tmp4389 = ($fn4390) ((frost$io$OutputStream*) $tmp4387)->$class->vtable[17];
frost$core$Error* $tmp4391 = $tmp4389(((frost$io$OutputStream*) $tmp4387), $tmp4388);
if ($tmp4391 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4391));
*(&local0) = $tmp4391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4391));
frost$core$Frost$unref$frost$core$Object$Q($tmp4384);
org$frostlang$frostc$IR$Value* $tmp4392 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4392));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4375));
frost$core$String* $tmp4393 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4393));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4394 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4394));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4395 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4395));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4391));
// line 1242
frost$io$IndentedOutputStream** $tmp4396 = &param0->out;
frost$io$IndentedOutputStream* $tmp4397 = *$tmp4396;
org$frostlang$frostc$IR$Value* $tmp4398 = *(&local5);
frost$core$String* $tmp4399 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp4398);
$fn4401 $tmp4400 = ($fn4401) ((frost$io$OutputStream*) $tmp4397)->$class->vtable[17];
frost$core$Error* $tmp4402 = $tmp4400(((frost$io$OutputStream*) $tmp4397), $tmp4399);
if ($tmp4402 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4402));
*(&local0) = $tmp4402;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4399));
frost$core$Frost$unref$frost$core$Object$Q($tmp4384);
org$frostlang$frostc$IR$Value* $tmp4403 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4403));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4375));
frost$core$String* $tmp4404 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4404));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4405 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4405));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4406 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4406));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4399));
// line 1243
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s4407));
frost$core$String* $tmp4408 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4408));
*(&local4) = &$s4409;
frost$core$Frost$unref$frost$core$Object$Q($tmp4384);
org$frostlang$frostc$IR$Value* $tmp4410 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4410));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4375));
// line 1245
frost$io$IndentedOutputStream** $tmp4411 = &param0->out;
frost$io$IndentedOutputStream* $tmp4412 = *$tmp4411;
$fn4414 $tmp4413 = ($fn4414) ((frost$io$OutputStream*) $tmp4412)->$class->vtable[19];
frost$core$Error* $tmp4415 = $tmp4413(((frost$io$OutputStream*) $tmp4412), &$s4416);
if ($tmp4415 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4415));
*(&local0) = $tmp4415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4415));
frost$core$String* $tmp4417 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4417));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4418 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4418));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4419 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4419));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4415));
frost$core$String* $tmp4420 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4420));
*(&local4) = ((frost$core$String*) NULL);
org$frostlang$frostc$Type* $tmp4421 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4421));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4422 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4422));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block2;
block1:;
// line 1248
frost$core$Int64 $tmp4423 = (frost$core$Int64) {1248};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4424, $tmp4423);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4425 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4425));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FieldDecl* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1253
*(&local0) = ((frost$core$Error*) NULL);
// line 1254
frost$core$Weak** $tmp4426 = &param0->compiler;
frost$core$Weak* $tmp4427 = *$tmp4426;
frost$core$Object* $tmp4428 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4427);
frost$core$Bit $tmp4429 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp4428), param3);
frost$core$Frost$unref$frost$core$Object$Q($tmp4428);
// line 1255
frost$core$String* $tmp4430 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4430));
frost$core$String* $tmp4431 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4431));
*(&local1) = $tmp4430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4430));
// line 1256
frost$core$String* $tmp4432 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4432));
frost$core$String* $tmp4433 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4433));
*(&local2) = $tmp4432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4432));
// line 1257
frost$io$IndentedOutputStream** $tmp4434 = &param0->out;
frost$io$IndentedOutputStream* $tmp4435 = *$tmp4434;
org$frostlang$frostc$Type** $tmp4436 = &param3->type;
org$frostlang$frostc$Type* $tmp4437 = *$tmp4436;
frost$core$String* $tmp4438 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4437);
frost$core$String* $tmp4439 = frost$core$String$get_asString$R$frost$core$String($tmp4438);
frost$core$String* $tmp4440 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4439, &$s4441);
frost$core$String* $tmp4442 = *(&local2);
frost$core$String* $tmp4443 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4440, $tmp4442);
frost$core$String* $tmp4444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4443, &$s4445);
frost$core$String* $tmp4446 = *(&local1);
frost$core$String* $tmp4447 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4444, $tmp4446);
frost$core$String* $tmp4448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4447, &$s4449);
frost$core$String** $tmp4450 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp4451 = *$tmp4450;
frost$core$String* $tmp4452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4448, $tmp4451);
frost$core$String* $tmp4453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4452, &$s4454);
$fn4456 $tmp4455 = ($fn4456) ((frost$io$OutputStream*) $tmp4435)->$class->vtable[19];
frost$core$Error* $tmp4457 = $tmp4455(((frost$io$OutputStream*) $tmp4435), $tmp4453);
if ($tmp4457 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4457));
*(&local0) = $tmp4457;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4438));
frost$core$String* $tmp4458 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4458));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4459 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4459));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4453));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4438));
// line 1258
frost$collections$HashMap** $tmp4460 = &param0->refs;
frost$collections$HashMap* $tmp4461 = *$tmp4460;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4462;
$tmp4462 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4462->value = param1;
frost$core$String* $tmp4463 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4461, ((frost$collections$Key*) $tmp4462), ((frost$core$Object*) $tmp4463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4462)));
frost$core$String* $tmp4464 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4464));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4465 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4465));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1261
frost$core$Int64 $tmp4466 = (frost$core$Int64) {1261};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4467, $tmp4466);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4468 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4468));
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
// line 1267
*(&local0) = ((frost$core$Error*) NULL);
// line 1268
frost$core$Weak** $tmp4469 = &param3->owner;
frost$core$Weak* $tmp4470 = *$tmp4469;
frost$core$Object* $tmp4471 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4470);
frost$collections$Array** $tmp4472 = &((org$frostlang$frostc$ClassDecl*) $tmp4471)->fields;
frost$collections$Array* $tmp4473 = *$tmp4472;
frost$core$Int64 $tmp4474 = (frost$core$Int64) {1};
frost$core$Object* $tmp4475 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4473, $tmp4474);
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp4475)));
org$frostlang$frostc$FieldDecl* $tmp4476 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4476));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) $tmp4475);
frost$core$Frost$unref$frost$core$Object$Q($tmp4475);
frost$core$Frost$unref$frost$core$Object$Q($tmp4471);
// line 1269
org$frostlang$frostc$FieldDecl* $tmp4477 = *(&local1);
frost$core$String** $tmp4478 = &((org$frostlang$frostc$Symbol*) $tmp4477)->name;
frost$core$String* $tmp4479 = *$tmp4478;
frost$core$Bit $tmp4480 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp4479, &$s4481);
bool $tmp4482 = $tmp4480.value;
if ($tmp4482) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4483 = (frost$core$Int64) {1269};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4484, $tmp4483);
abort(); // unreachable
block3:;
// line 1270
frost$core$String* $tmp4485 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4485));
frost$core$String* $tmp4486 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4486));
*(&local2) = $tmp4485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4485));
// line 1271
frost$core$Weak** $tmp4487 = &param0->compiler;
frost$core$Weak* $tmp4488 = *$tmp4487;
frost$core$Object* $tmp4489 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4488);
org$frostlang$frostc$FieldDecl* $tmp4490 = *(&local1);
frost$core$Int64 $tmp4491 = org$frostlang$frostc$Compiler$getIndex$org$frostlang$frostc$FieldDecl$R$frost$core$Int64(((org$frostlang$frostc$Compiler*) $tmp4489), $tmp4490);
*(&local3) = $tmp4491;
frost$core$Frost$unref$frost$core$Object$Q($tmp4489);
// line 1272
frost$core$String* $tmp4492 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4492));
frost$core$String* $tmp4493 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4493));
*(&local4) = $tmp4492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4492));
// line 1273
frost$collections$Array** $tmp4494 = &param3->fields;
frost$collections$Array* $tmp4495 = *$tmp4494;
frost$core$Object* $tmp4496 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4495, param4);
frost$core$String* $tmp4497 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp4496));
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4497));
frost$core$String* $tmp4498 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4498));
*(&local5) = $tmp4497;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4497));
frost$core$Frost$unref$frost$core$Object$Q($tmp4496);
// line 1274
frost$io$IndentedOutputStream** $tmp4499 = &param0->out;
frost$io$IndentedOutputStream* $tmp4500 = *$tmp4499;
frost$core$String* $tmp4501 = *(&local5);
frost$core$String* $tmp4502 = frost$core$String$get_asString$R$frost$core$String($tmp4501);
frost$core$String* $tmp4503 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4502, &$s4504);
frost$core$String* $tmp4505 = *(&local4);
frost$core$String* $tmp4506 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4503, $tmp4505);
frost$core$String* $tmp4507 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4506, &$s4508);
frost$core$String* $tmp4509 = *(&local5);
frost$core$String* $tmp4510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4507, $tmp4509);
frost$core$String* $tmp4511 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4510, &$s4512);
frost$core$String* $tmp4513 = *(&local2);
frost$core$String* $tmp4514 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4511, $tmp4513);
frost$core$String* $tmp4515 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4514, &$s4516);
frost$core$Int64 $tmp4517 = org$frostlang$frostc$CCodeGenerator$getChoiceFieldOffset$org$frostlang$frostc$ChoiceCase$frost$core$Int64$R$frost$core$Int64(param0, param3, param4);
frost$core$Int64$wrapper* $tmp4518;
$tmp4518 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4518->value = $tmp4517;
frost$core$String* $tmp4519 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s4520, ((frost$core$Object*) $tmp4518));
frost$core$String* $tmp4521 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4519, &$s4522);
frost$core$String* $tmp4523 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4515, $tmp4521);
$fn4525 $tmp4524 = ($fn4525) ((frost$io$OutputStream*) $tmp4500)->$class->vtable[19];
frost$core$Error* $tmp4526 = $tmp4524(((frost$io$OutputStream*) $tmp4500), $tmp4523);
if ($tmp4526 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4526));
*(&local0) = $tmp4526;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4502));
frost$core$String* $tmp4527 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4527));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp4528 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4528));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4529 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4529));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$FieldDecl* $tmp4530 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4530));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4526));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4521));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4519));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4518));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4506));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4502));
// line 1276
frost$collections$HashMap** $tmp4531 = &param0->refs;
frost$collections$HashMap* $tmp4532 = *$tmp4531;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4533;
$tmp4533 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4533->value = param1;
frost$core$String* $tmp4534 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4532, ((frost$collections$Key*) $tmp4533), ((frost$core$Object*) $tmp4534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4533)));
frost$core$String* $tmp4535 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4535));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp4536 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4536));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4537 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4537));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$FieldDecl* $tmp4538 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4538));
*(&local1) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block2;
block1:;
// line 1279
frost$core$Int64 $tmp4539 = (frost$core$Int64) {1279};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4540, $tmp4539);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4541 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4541));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FieldDecl* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1284
*(&local0) = ((frost$core$Error*) NULL);
// line 1285
frost$core$String* $tmp4542 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4542));
frost$core$String* $tmp4543 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4543));
*(&local1) = $tmp4542;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4542));
// line 1286
frost$core$String* $tmp4544 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4544));
frost$core$String* $tmp4545 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4545));
*(&local2) = $tmp4544;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4544));
// line 1287
frost$io$IndentedOutputStream** $tmp4546 = &param0->out;
frost$io$IndentedOutputStream* $tmp4547 = *$tmp4546;
org$frostlang$frostc$Type** $tmp4548 = &param3->type;
org$frostlang$frostc$Type* $tmp4549 = *$tmp4548;
frost$core$String* $tmp4550 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4549);
frost$core$String* $tmp4551 = frost$core$String$get_asString$R$frost$core$String($tmp4550);
frost$core$String* $tmp4552 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4551, &$s4553);
frost$core$String* $tmp4554 = *(&local2);
frost$core$String* $tmp4555 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4552, $tmp4554);
frost$core$String* $tmp4556 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4555, &$s4557);
frost$core$String* $tmp4558 = *(&local1);
frost$core$String* $tmp4559 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4556, $tmp4558);
frost$core$String* $tmp4560 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4559, &$s4561);
frost$core$String** $tmp4562 = &((org$frostlang$frostc$Symbol*) param3)->name;
frost$core$String* $tmp4563 = *$tmp4562;
frost$core$String* $tmp4564 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4560, $tmp4563);
frost$core$String* $tmp4565 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4564, &$s4566);
$fn4568 $tmp4567 = ($fn4568) ((frost$io$OutputStream*) $tmp4547)->$class->vtable[19];
frost$core$Error* $tmp4569 = $tmp4567(((frost$io$OutputStream*) $tmp4547), $tmp4565);
if ($tmp4569 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4569));
*(&local0) = $tmp4569;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
frost$core$String* $tmp4570 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4570));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4571 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4571));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4564));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4560));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4550));
// line 1288
frost$collections$HashMap** $tmp4572 = &param0->refs;
frost$collections$HashMap* $tmp4573 = *$tmp4572;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4574;
$tmp4574 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4574->value = param1;
frost$core$String* $tmp4575 = *(&local2);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4573, ((frost$collections$Key*) $tmp4574), ((frost$core$Object*) $tmp4575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4574)));
frost$core$String* $tmp4576 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4576));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4577 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4577));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1291
frost$core$Int64 $tmp4578 = (frost$core$Int64) {1291};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4579, $tmp4578);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4580 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4580));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$ClassDecl* param3, frost$core$Int64 param4, org$frostlang$frostc$Type* param5) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$CCodeGenerator$ClassConstant* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 1297
*(&local0) = ((frost$core$Error*) NULL);
// line 1298
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4581 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param3);
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4581));
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4582 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4582));
*(&local1) = $tmp4581;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4581));
// line 1299
frost$core$String* $tmp4583 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4583));
frost$core$String* $tmp4584 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4584));
*(&local2) = $tmp4583;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4583));
// line 1300
frost$io$IndentedOutputStream** $tmp4585 = &param0->out;
frost$io$IndentedOutputStream* $tmp4586 = *$tmp4585;
frost$core$String* $tmp4587 = *(&local2);
frost$core$String* $tmp4588 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4589, $tmp4587);
frost$core$String* $tmp4590 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4588, &$s4591);
frost$core$String* $tmp4592 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4593 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4590, $tmp4592);
frost$core$String* $tmp4594 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4593, &$s4595);
$fn4597 $tmp4596 = ($fn4597) ((frost$io$OutputStream*) $tmp4586)->$class->vtable[19];
frost$core$Error* $tmp4598 = $tmp4596(((frost$io$OutputStream*) $tmp4586), $tmp4594);
if ($tmp4598 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4598));
*(&local0) = $tmp4598;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4588));
frost$core$String* $tmp4599 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4599));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4600 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4600));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4588));
// line 1301
frost$io$IndentedOutputStream** $tmp4601 = &param0->out;
frost$io$IndentedOutputStream* $tmp4602 = *$tmp4601;
frost$core$String* $tmp4603 = *(&local2);
frost$core$String* $tmp4604 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4605, $tmp4603);
frost$core$String* $tmp4606 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4604, &$s4607);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4608 = *(&local1);
frost$core$String** $tmp4609 = &$tmp4608->name;
frost$core$String* $tmp4610 = *$tmp4609;
frost$core$String* $tmp4611 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4606, $tmp4610);
frost$core$String* $tmp4612 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4611, &$s4613);
$fn4615 $tmp4614 = ($fn4615) ((frost$io$OutputStream*) $tmp4602)->$class->vtable[19];
frost$core$Error* $tmp4616 = $tmp4614(((frost$io$OutputStream*) $tmp4602), $tmp4612);
if ($tmp4616 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4616));
*(&local0) = $tmp4616;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4604));
frost$core$String* $tmp4617 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4617));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4618 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4618));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4604));
// line 1302
frost$io$IndentedOutputStream** $tmp4619 = &param0->out;
frost$io$IndentedOutputStream* $tmp4620 = *$tmp4619;
frost$core$Int64* $tmp4621 = &$tmp4620->level;
frost$core$Int64 $tmp4622 = *$tmp4621;
frost$core$Int64 $tmp4623 = (frost$core$Int64) {1};
int64_t $tmp4624 = $tmp4622.value;
int64_t $tmp4625 = $tmp4623.value;
int64_t $tmp4626 = $tmp4624 + $tmp4625;
frost$core$Int64 $tmp4627 = (frost$core$Int64) {$tmp4626};
frost$core$Int64* $tmp4628 = &$tmp4620->level;
*$tmp4628 = $tmp4627;
// line 1303
frost$io$IndentedOutputStream** $tmp4629 = &param0->out;
frost$io$IndentedOutputStream* $tmp4630 = *$tmp4629;
frost$core$String* $tmp4631 = *(&local2);
frost$core$String* $tmp4632 = frost$core$String$get_asString$R$frost$core$String($tmp4631);
frost$core$String* $tmp4633 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4632, &$s4634);
frost$core$String* $tmp4635 = *(&local2);
frost$core$String* $tmp4636 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4633, $tmp4635);
frost$core$String* $tmp4637 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4636, &$s4638);
$fn4640 $tmp4639 = ($fn4640) ((frost$io$OutputStream*) $tmp4630)->$class->vtable[19];
frost$core$Error* $tmp4641 = $tmp4639(((frost$io$OutputStream*) $tmp4630), $tmp4637);
if ($tmp4641 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4641));
*(&local0) = $tmp4641;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4632));
frost$core$String* $tmp4642 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4642));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4643 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4643));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4632));
// line 1304
frost$io$IndentedOutputStream** $tmp4644 = &param0->out;
frost$io$IndentedOutputStream* $tmp4645 = *$tmp4644;
frost$core$Int64* $tmp4646 = &$tmp4645->level;
frost$core$Int64 $tmp4647 = *$tmp4646;
frost$core$Int64 $tmp4648 = (frost$core$Int64) {1};
int64_t $tmp4649 = $tmp4647.value;
int64_t $tmp4650 = $tmp4648.value;
int64_t $tmp4651 = $tmp4649 - $tmp4650;
frost$core$Int64 $tmp4652 = (frost$core$Int64) {$tmp4651};
frost$core$Int64* $tmp4653 = &$tmp4645->level;
*$tmp4653 = $tmp4652;
// line 1305
frost$io$IndentedOutputStream** $tmp4654 = &param0->out;
frost$io$IndentedOutputStream* $tmp4655 = *$tmp4654;
$fn4657 $tmp4656 = ($fn4657) ((frost$io$OutputStream*) $tmp4655)->$class->vtable[19];
frost$core$Error* $tmp4658 = $tmp4656(((frost$io$OutputStream*) $tmp4655), &$s4659);
if ($tmp4658 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4658));
*(&local0) = $tmp4658;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4658));
frost$core$String* $tmp4660 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4660));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4661 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4661));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4658));
// line 1306
frost$core$String* $tmp4662 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4662));
frost$core$String* $tmp4663 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4663));
*(&local3) = $tmp4662;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4662));
// line 1307
frost$core$String* $tmp4664 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, param5, ((org$frostlang$frostc$Type*) NULL));
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4664));
frost$core$String* $tmp4665 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4665));
*(&local4) = $tmp4664;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4664));
// line 1308
frost$io$IndentedOutputStream** $tmp4666 = &param0->out;
frost$io$IndentedOutputStream* $tmp4667 = *$tmp4666;
frost$core$String* $tmp4668 = *(&local4);
frost$core$String* $tmp4669 = frost$core$String$get_asString$R$frost$core$String($tmp4668);
frost$core$String* $tmp4670 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4669, &$s4671);
frost$core$String* $tmp4672 = *(&local3);
frost$core$String* $tmp4673 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4670, $tmp4672);
frost$core$String* $tmp4674 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4673, &$s4675);
frost$core$String* $tmp4676 = *(&local2);
frost$core$String* $tmp4677 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4674, $tmp4676);
frost$core$String* $tmp4678 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4677, &$s4679);
frost$core$Int64$wrapper* $tmp4680;
$tmp4680 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4680->value = param4;
frost$core$String* $tmp4681 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4678, ((frost$core$Object*) $tmp4680));
frost$core$String* $tmp4682 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4681, &$s4683);
$fn4685 $tmp4684 = ($fn4685) ((frost$io$OutputStream*) $tmp4667)->$class->vtable[19];
frost$core$Error* $tmp4686 = $tmp4684(((frost$io$OutputStream*) $tmp4667), $tmp4682);
if ($tmp4686 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4686));
*(&local0) = $tmp4686;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4669));
frost$core$String* $tmp4687 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4687));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4688 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4688));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4689 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4689));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4690 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4690));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4678));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4669));
// line 1309
frost$collections$HashMap** $tmp4691 = &param0->refs;
frost$collections$HashMap* $tmp4692 = *$tmp4691;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4693;
$tmp4693 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4693->value = param1;
frost$core$String* $tmp4694 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4692, ((frost$collections$Key*) $tmp4693), ((frost$core$Object*) $tmp4694));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4693)));
frost$core$String* $tmp4695 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4695));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4696 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4696));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4697 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4697));
*(&local2) = ((frost$core$String*) NULL);
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp4698 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4698));
*(&local1) = ((org$frostlang$frostc$CCodeGenerator$ClassConstant*) NULL);
goto block2;
block1:;
// line 1312
frost$core$Int64 $tmp4699 = (frost$core$Int64) {1312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4700, $tmp4699);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4701 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4701));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, frost$core$Int64 param3, org$frostlang$frostc$Type* param4) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
// line 1317
*(&local0) = ((frost$core$Error*) NULL);
// line 1318
frost$core$String* $tmp4702 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4702));
frost$core$String* $tmp4703 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4703));
*(&local1) = $tmp4702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4702));
// line 1319
frost$core$String* $tmp4704 = org$frostlang$frostc$CCodeGenerator$cMethodType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$Q$R$frost$core$String(param0, param4, ((org$frostlang$frostc$Type*) NULL));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4704));
frost$core$String* $tmp4705 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4705));
*(&local2) = $tmp4704;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4704));
// line 1320
frost$io$IndentedOutputStream** $tmp4706 = &param0->out;
frost$io$IndentedOutputStream* $tmp4707 = *$tmp4706;
frost$core$String* $tmp4708 = *(&local2);
frost$core$String* $tmp4709 = frost$core$String$get_asString$R$frost$core$String($tmp4708);
frost$core$String* $tmp4710 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4709, &$s4711);
frost$core$String* $tmp4712 = *(&local1);
frost$core$String* $tmp4713 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4710, $tmp4712);
frost$core$String* $tmp4714 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4713, &$s4715);
frost$core$String* $tmp4716 = *(&local2);
frost$core$String* $tmp4717 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4714, $tmp4716);
frost$core$String* $tmp4718 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4717, &$s4719);
frost$core$String* $tmp4720 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4721 = frost$core$String$get_asString$R$frost$core$String($tmp4720);
frost$core$String* $tmp4722 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4721, &$s4723);
frost$core$Int64$wrapper* $tmp4724;
$tmp4724 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp4724->value = param3;
frost$core$String* $tmp4725 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp4722, ((frost$core$Object*) $tmp4724));
frost$core$String* $tmp4726 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4725, &$s4727);
frost$core$String* $tmp4728 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4718, $tmp4726);
$fn4730 $tmp4729 = ($fn4730) ((frost$io$OutputStream*) $tmp4707)->$class->vtable[19];
frost$core$Error* $tmp4731 = $tmp4729(((frost$io$OutputStream*) $tmp4707), $tmp4728);
if ($tmp4731 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4731));
*(&local0) = $tmp4731;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4709));
frost$core$String* $tmp4732 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4732));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4733 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4733));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4728));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4709));
// line 1322
frost$collections$HashMap** $tmp4734 = &param0->refs;
frost$collections$HashMap* $tmp4735 = *$tmp4734;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4736;
$tmp4736 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4736->value = param1;
frost$core$String* $tmp4737 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4735, ((frost$collections$Key*) $tmp4736), ((frost$core$Object*) $tmp4737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4736)));
frost$core$String* $tmp4738 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4738));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4739 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4739));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1325
frost$core$Int64 $tmp4740 = (frost$core$Int64) {1325};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4741, $tmp4740);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4742 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4742));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1330
*(&local0) = ((frost$core$Error*) NULL);
// line 1331
frost$core$String* $tmp4743 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4743));
frost$core$String* $tmp4744 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4744));
*(&local1) = $tmp4743;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4743));
// line 1332
frost$io$IndentedOutputStream** $tmp4745 = &param0->out;
frost$io$IndentedOutputStream* $tmp4746 = *$tmp4745;
$fn4748 $tmp4747 = ($fn4748) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4749 = $tmp4747(param2);
frost$core$String* $tmp4750 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4749);
frost$core$String* $tmp4751 = frost$core$String$get_asString$R$frost$core$String($tmp4750);
frost$core$String* $tmp4752 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4751, &$s4753);
frost$core$String* $tmp4754 = *(&local1);
frost$core$String* $tmp4755 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4752, $tmp4754);
frost$core$String* $tmp4756 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4755, &$s4757);
frost$core$String* $tmp4758 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4759 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4756, $tmp4758);
frost$core$String* $tmp4760 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4759, &$s4761);
$fn4763 $tmp4762 = ($fn4763) ((frost$io$OutputStream*) $tmp4746)->$class->vtable[19];
frost$core$Error* $tmp4764 = $tmp4762(((frost$io$OutputStream*) $tmp4746), $tmp4760);
if ($tmp4764 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4764));
*(&local0) = $tmp4764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4749));
frost$core$String* $tmp4765 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4765));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4749));
// line 1333
frost$collections$HashMap** $tmp4766 = &param0->refs;
frost$collections$HashMap* $tmp4767 = *$tmp4766;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4768;
$tmp4768 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4768->value = param1;
frost$core$String* $tmp4769 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4767, ((frost$collections$Key*) $tmp4768), ((frost$core$Object*) $tmp4769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4768)));
frost$core$String* $tmp4770 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4770));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1336
frost$core$Int64 $tmp4771 = (frost$core$Int64) {1336};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4772, $tmp4771);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4773 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4773));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1341
*(&local0) = ((frost$core$Error*) NULL);
// line 1342
frost$core$String* $tmp4774 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4774));
frost$core$String* $tmp4775 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4775));
*(&local1) = $tmp4774;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4774));
// line 1343
frost$io$IndentedOutputStream** $tmp4776 = &param0->out;
frost$io$IndentedOutputStream* $tmp4777 = *$tmp4776;
$fn4779 $tmp4778 = ($fn4779) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4780 = $tmp4778(param2);
frost$core$String* $tmp4781 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4780);
frost$core$String* $tmp4782 = frost$core$String$get_asString$R$frost$core$String($tmp4781);
frost$core$String* $tmp4783 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4782, &$s4784);
frost$core$String* $tmp4785 = *(&local1);
frost$core$String* $tmp4786 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4783, $tmp4785);
frost$core$String* $tmp4787 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4786, &$s4788);
frost$core$String* $tmp4789 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4790 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4787, $tmp4789);
frost$core$String* $tmp4791 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4790, &$s4792);
$fn4794 $tmp4793 = ($fn4794) ((frost$io$OutputStream*) $tmp4777)->$class->vtable[19];
frost$core$Error* $tmp4795 = $tmp4793(((frost$io$OutputStream*) $tmp4777), $tmp4791);
if ($tmp4795 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4795));
*(&local0) = $tmp4795;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4780));
frost$core$String* $tmp4796 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4796));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4780));
// line 1344
frost$collections$HashMap** $tmp4797 = &param0->refs;
frost$collections$HashMap* $tmp4798 = *$tmp4797;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4799;
$tmp4799 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4799->value = param1;
frost$core$String* $tmp4800 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4798, ((frost$collections$Key*) $tmp4799), ((frost$core$Object*) $tmp4800));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4799)));
frost$core$String* $tmp4801 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4801));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1347
frost$core$Int64 $tmp4802 = (frost$core$Int64) {1347};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4803, $tmp4802);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4804 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4804));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1352
*(&local0) = ((frost$core$Error*) NULL);
// line 1353
frost$core$String* $tmp4805 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4805));
frost$core$String* $tmp4806 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4806));
*(&local1) = $tmp4805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4805));
// line 1354
frost$io$IndentedOutputStream** $tmp4807 = &param0->out;
frost$io$IndentedOutputStream* $tmp4808 = *$tmp4807;
$fn4810 $tmp4809 = ($fn4810) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4811 = $tmp4809(param2);
frost$core$String* $tmp4812 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4811);
frost$core$String* $tmp4813 = frost$core$String$get_asString$R$frost$core$String($tmp4812);
frost$core$String* $tmp4814 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4813, &$s4815);
frost$core$String* $tmp4816 = *(&local1);
frost$core$String* $tmp4817 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4814, $tmp4816);
frost$core$String* $tmp4818 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4817, &$s4819);
frost$core$String* $tmp4820 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp4821 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4818, $tmp4820);
frost$core$String* $tmp4822 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4821, &$s4823);
$fn4825 $tmp4824 = ($fn4825) ((frost$io$OutputStream*) $tmp4808)->$class->vtable[19];
frost$core$Error* $tmp4826 = $tmp4824(((frost$io$OutputStream*) $tmp4808), $tmp4822);
if ($tmp4826 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4826));
*(&local0) = $tmp4826;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4811));
frost$core$String* $tmp4827 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4827));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4821));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4818));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4817));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4814));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4811));
// line 1355
frost$collections$HashMap** $tmp4828 = &param0->refs;
frost$collections$HashMap* $tmp4829 = *$tmp4828;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4830;
$tmp4830 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4830->value = param1;
frost$core$String* $tmp4831 = *(&local1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4829, ((frost$collections$Key*) $tmp4830), ((frost$core$Object*) $tmp4831));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4830)));
frost$core$String* $tmp4832 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4832));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1358
frost$core$Int64 $tmp4833 = (frost$core$Int64) {1358};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4834, $tmp4833);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4835 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4835));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$Type* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Int64 local2;
frost$core$String* local3 = NULL;
frost$core$String* local4 = NULL;
// line 1363
*(&local0) = ((frost$core$Error*) NULL);
// line 1364
frost$core$String* $tmp4836 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4836));
frost$core$String* $tmp4837 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4837));
*(&local1) = $tmp4836;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4836));
// line 1365
frost$core$Int64 $tmp4838 = org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(param0, param3);
*(&local2) = $tmp4838;
// line 1366
frost$core$String* $tmp4839 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, param3);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4839));
frost$core$String* $tmp4840 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4840));
*(&local3) = $tmp4839;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4839));
// line 1367
frost$core$String* $tmp4841 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4841));
frost$core$String* $tmp4842 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4842));
*(&local4) = $tmp4841;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4841));
// line 1368
frost$io$IndentedOutputStream** $tmp4843 = &param0->out;
frost$io$IndentedOutputStream* $tmp4844 = *$tmp4843;
frost$core$String* $tmp4845 = *(&local3);
frost$core$String* $tmp4846 = frost$core$String$get_asString$R$frost$core$String($tmp4845);
frost$core$String* $tmp4847 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4846, &$s4848);
frost$core$String* $tmp4849 = *(&local4);
frost$core$String* $tmp4850 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4847, $tmp4849);
frost$core$String* $tmp4851 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4850, &$s4852);
frost$core$String* $tmp4853 = *(&local3);
frost$core$String* $tmp4854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4851, $tmp4853);
frost$core$String* $tmp4855 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4854, &$s4856);
frost$core$String* $tmp4857 = *(&local1);
frost$core$String* $tmp4858 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4855, $tmp4857);
frost$core$String* $tmp4859 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4858, &$s4860);
frost$core$Int64 $tmp4861 = *(&local2);
frost$core$String* $tmp4862 = frost$core$Int64$get_asString$R$frost$core$String($tmp4861);
frost$core$String* $tmp4863 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4862, &$s4864);
frost$core$String* $tmp4865 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4859, $tmp4863);
$fn4867 $tmp4866 = ($fn4867) ((frost$io$OutputStream*) $tmp4844)->$class->vtable[19];
frost$core$Error* $tmp4868 = $tmp4866(((frost$io$OutputStream*) $tmp4844), $tmp4865);
if ($tmp4868 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4868));
*(&local0) = $tmp4868;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4846));
frost$core$String* $tmp4869 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4869));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4870 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4870));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4871 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4871));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4855));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4846));
// line 1370
frost$collections$HashMap** $tmp4872 = &param0->refs;
frost$collections$HashMap* $tmp4873 = *$tmp4872;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4874;
$tmp4874 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4874->value = param1;
frost$core$String* $tmp4875 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4873, ((frost$collections$Key*) $tmp4874), ((frost$core$Object*) $tmp4875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4874)));
frost$core$String* $tmp4876 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4876));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp4877 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4877));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4878 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4878));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1373
frost$core$Int64 $tmp4879 = (frost$core$Int64) {1373};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4880, $tmp4879);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4881 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4881));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
// line 1378
*(&local0) = ((frost$core$Error*) NULL);
// line 1379
frost$core$String* $tmp4882 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4882));
frost$core$String* $tmp4883 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4883));
*(&local1) = $tmp4882;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4882));
// line 1380
frost$io$IndentedOutputStream** $tmp4884 = &param0->out;
frost$io$IndentedOutputStream* $tmp4885 = *$tmp4884;
frost$core$String* $tmp4886 = *(&local1);
frost$core$String* $tmp4887 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4888, $tmp4886);
frost$core$String* $tmp4889 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4887, &$s4890);
$fn4892 $tmp4891 = ($fn4892) ((frost$io$OutputStream*) $tmp4885)->$class->vtable[19];
frost$core$Error* $tmp4893 = $tmp4891(((frost$io$OutputStream*) $tmp4885), $tmp4889);
if ($tmp4893 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4893));
*(&local0) = $tmp4893;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4887));
frost$core$String* $tmp4894 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4894));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4889));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4887));
frost$core$String* $tmp4895 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4895));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1383
frost$core$Int64 $tmp4896 = (frost$core$Int64) {1383};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4897, $tmp4896);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4898 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4898));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1388
*(&local0) = ((frost$core$Error*) NULL);
// line 1389
frost$core$String* $tmp4899 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4899));
frost$core$String* $tmp4900 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4900));
*(&local1) = $tmp4899;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4899));
// line 1390
frost$core$String* $tmp4901 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4901));
frost$core$String* $tmp4902 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4902));
*(&local2) = $tmp4901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4901));
// line 1391
frost$core$String* $tmp4903 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4903));
frost$core$String* $tmp4904 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4904));
*(&local3) = $tmp4903;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4903));
// line 1392
frost$io$IndentedOutputStream** $tmp4905 = &param0->out;
frost$io$IndentedOutputStream* $tmp4906 = *$tmp4905;
$fn4908 $tmp4907 = ($fn4908) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4909 = $tmp4907(param2);
org$frostlang$frostc$FixedArray* $tmp4910 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp4909);
frost$core$Int64 $tmp4911 = (frost$core$Int64) {1};
frost$core$Object* $tmp4912 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4910, $tmp4911);
frost$core$String* $tmp4913 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp4912));
frost$core$String* $tmp4914 = frost$core$String$get_asString$R$frost$core$String($tmp4913);
frost$core$String* $tmp4915 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4914, &$s4916);
frost$core$String* $tmp4917 = *(&local3);
frost$core$String* $tmp4918 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4915, $tmp4917);
frost$core$String* $tmp4919 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4918, &$s4920);
frost$core$String* $tmp4921 = *(&local1);
frost$core$String* $tmp4922 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4919, $tmp4921);
frost$core$String* $tmp4923 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4922, &$s4924);
frost$core$String* $tmp4925 = *(&local2);
frost$core$String* $tmp4926 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4923, $tmp4925);
frost$core$String* $tmp4927 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4926, &$s4928);
$fn4930 $tmp4929 = ($fn4930) ((frost$io$OutputStream*) $tmp4906)->$class->vtable[19];
frost$core$Error* $tmp4931 = $tmp4929(((frost$io$OutputStream*) $tmp4906), $tmp4927);
if ($tmp4931 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
*(&local0) = $tmp4931;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4913));
frost$core$Frost$unref$frost$core$Object$Q($tmp4912);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4909));
frost$core$String* $tmp4932 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4932));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4933 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4933));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4934 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4934));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4931));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4926));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4923));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4919));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4913));
frost$core$Frost$unref$frost$core$Object$Q($tmp4912);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4909));
// line 1393
frost$collections$HashMap** $tmp4935 = &param0->refs;
frost$collections$HashMap* $tmp4936 = *$tmp4935;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4937;
$tmp4937 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4937->value = param1;
frost$core$String* $tmp4938 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4936, ((frost$collections$Key*) $tmp4937), ((frost$core$Object*) $tmp4938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4937)));
frost$core$String* $tmp4939 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4939));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4940 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4940));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4941 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4941));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1396
frost$core$Int64 $tmp4942 = (frost$core$Int64) {1396};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4943, $tmp4942);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4944 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4944));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Statement$ID param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1401
*(&local0) = ((frost$core$Error*) NULL);
// line 1402
frost$core$String* $tmp4945 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4945));
frost$core$String* $tmp4946 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4946));
*(&local1) = $tmp4945;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4945));
// line 1403
frost$core$String* $tmp4947 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4947));
frost$core$String* $tmp4948 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4948));
*(&local2) = $tmp4947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4947));
// line 1404
frost$core$String* $tmp4949 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4949));
frost$core$String* $tmp4950 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4950));
*(&local3) = $tmp4949;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4949));
// line 1405
frost$io$IndentedOutputStream** $tmp4951 = &param0->out;
frost$io$IndentedOutputStream* $tmp4952 = *$tmp4951;
$fn4954 $tmp4953 = ($fn4954) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4955 = $tmp4953(param2);
frost$core$String* $tmp4956 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp4955);
frost$core$String* $tmp4957 = frost$core$String$get_asString$R$frost$core$String($tmp4956);
frost$core$String* $tmp4958 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4957, &$s4959);
frost$core$String* $tmp4960 = *(&local3);
frost$core$String* $tmp4961 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4958, $tmp4960);
frost$core$String* $tmp4962 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4961, &$s4963);
frost$core$String* $tmp4964 = *(&local1);
frost$core$String* $tmp4965 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4962, $tmp4964);
frost$core$String* $tmp4966 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4965, &$s4967);
frost$core$String* $tmp4968 = *(&local2);
frost$core$String* $tmp4969 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4966, $tmp4968);
frost$core$String* $tmp4970 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4969, &$s4971);
$fn4973 $tmp4972 = ($fn4973) ((frost$io$OutputStream*) $tmp4952)->$class->vtable[19];
frost$core$Error* $tmp4974 = $tmp4972(((frost$io$OutputStream*) $tmp4952), $tmp4970);
if ($tmp4974 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4974));
*(&local0) = $tmp4974;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4965));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4955));
frost$core$String* $tmp4975 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4975));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4976 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4976));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4977 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4977));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4966));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4965));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4962));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4957));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4956));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4955));
// line 1406
frost$collections$HashMap** $tmp4978 = &param0->refs;
frost$collections$HashMap* $tmp4979 = *$tmp4978;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp4980;
$tmp4980 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp4980->value = param1;
frost$core$String* $tmp4981 = *(&local3);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp4979, ((frost$collections$Key*) $tmp4980), ((frost$core$Object*) $tmp4981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp4980)));
frost$core$String* $tmp4982 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4982));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp4983 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4983));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp4984 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4984));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1409
frost$core$Int64 $tmp4985 = (frost$core$Int64) {1409};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4986, $tmp4985);
abort(); // unreachable
block2:;
frost$core$Error* $tmp4987 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4987));
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
// line 1415
*(&local0) = ((frost$core$Error*) NULL);
// line 1416
frost$core$String* $tmp4988 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4988));
frost$core$String* $tmp4989 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4989));
*(&local1) = $tmp4988;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4988));
// line 1417
frost$core$String* $tmp4990 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4990));
frost$core$String* $tmp4991 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4991));
*(&local2) = $tmp4990;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4990));
// line 1418
frost$core$String* $tmp4992 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param4);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4992));
frost$core$String* $tmp4993 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4993));
*(&local3) = $tmp4992;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4992));
// line 1419
$fn4995 $tmp4994 = ($fn4995) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4996 = $tmp4994(param2);
org$frostlang$frostc$FixedArray* $tmp4997 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp4996);
frost$core$Int64 $tmp4998 = (frost$core$Int64) {1};
frost$core$Object* $tmp4999 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4997, $tmp4998);
frost$core$Int64 $tmp5000 = org$frostlang$frostc$CCodeGenerator$stride$org$frostlang$frostc$Type$R$frost$core$Int64(param0, ((org$frostlang$frostc$Type*) $tmp4999));
*(&local4) = $tmp5000;
frost$core$Frost$unref$frost$core$Object$Q($tmp4999);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4997));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4996));
// line 1420
frost$core$Int64 $tmp5001 = *(&local4);
frost$core$Int64 $tmp5002 = (frost$core$Int64) {0};
int64_t $tmp5003 = $tmp5001.value;
int64_t $tmp5004 = $tmp5002.value;
bool $tmp5005 = $tmp5003 > $tmp5004;
frost$core$Bit $tmp5006 = (frost$core$Bit) {$tmp5005};
bool $tmp5007 = $tmp5006.value;
if ($tmp5007) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp5008 = (frost$core$Int64) {1420};
$fn5010 $tmp5009 = ($fn5010) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5011 = $tmp5009(param2);
frost$core$String* $tmp5012 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s5013, ((frost$core$Object*) $tmp5011));
frost$core$String* $tmp5014 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5012, &$s5015);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s5016, $tmp5008, $tmp5014);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5011));
abort(); // unreachable
block3:;
// line 1421
frost$core$String* $tmp5017 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5017));
frost$core$String* $tmp5018 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5018));
*(&local5) = $tmp5017;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5017));
// line 1422
frost$io$IndentedOutputStream** $tmp5019 = &param0->out;
frost$io$IndentedOutputStream* $tmp5020 = *$tmp5019;
$fn5022 $tmp5021 = ($fn5022) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5023 = $tmp5021(param2);
frost$core$String* $tmp5024 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5023);
frost$core$String* $tmp5025 = frost$core$String$get_asString$R$frost$core$String($tmp5024);
frost$core$String* $tmp5026 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5025, &$s5027);
frost$core$String* $tmp5028 = *(&local5);
frost$core$String* $tmp5029 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5026, $tmp5028);
frost$core$String* $tmp5030 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5029, &$s5031);
$fn5033 $tmp5032 = ($fn5033) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp5034 = $tmp5032(param2);
frost$core$String* $tmp5035 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5034);
frost$core$String* $tmp5036 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5030, $tmp5035);
frost$core$String* $tmp5037 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5036, &$s5038);
frost$core$String* $tmp5039 = *(&local1);
frost$core$String* $tmp5040 = frost$core$String$get_asString$R$frost$core$String($tmp5039);
frost$core$String* $tmp5041 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5040, &$s5042);
frost$core$String* $tmp5043 = *(&local2);
frost$core$String* $tmp5044 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5041, $tmp5043);
frost$core$String* $tmp5045 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5044, &$s5046);
frost$core$Int64 $tmp5047 = *(&local4);
frost$core$Int64$wrapper* $tmp5048;
$tmp5048 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5048->value = $tmp5047;
frost$core$String* $tmp5049 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5045, ((frost$core$Object*) $tmp5048));
frost$core$String* $tmp5050 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5049, &$s5051);
frost$core$String* $tmp5052 = *(&local3);
frost$core$String* $tmp5053 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5050, $tmp5052);
frost$core$String* $tmp5054 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5053, &$s5055);
frost$core$Int64 $tmp5056 = *(&local4);
frost$core$Int64$wrapper* $tmp5057;
$tmp5057 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5057->value = $tmp5056;
frost$core$String* $tmp5058 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5054, ((frost$core$Object*) $tmp5057));
frost$core$String* $tmp5059 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5058, &$s5060);
frost$core$String* $tmp5061 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5037, $tmp5059);
$fn5063 $tmp5062 = ($fn5063) ((frost$io$OutputStream*) $tmp5020)->$class->vtable[19];
frost$core$Error* $tmp5064 = $tmp5062(((frost$io$OutputStream*) $tmp5020), $tmp5061);
if ($tmp5064 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5064));
*(&local0) = $tmp5064;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5023));
frost$core$String* $tmp5065 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5065));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp5066 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5066));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5067 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5067));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5068 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5068));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5064));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5061));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5059));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5058));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5057));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5054));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5053));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5034));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5029));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5023));
// line 1424
frost$collections$HashMap** $tmp5069 = &param0->refs;
frost$collections$HashMap* $tmp5070 = *$tmp5069;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5071;
$tmp5071 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5071->value = param1;
frost$core$String* $tmp5072 = *(&local5);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5070, ((frost$collections$Key*) $tmp5071), ((frost$core$Object*) $tmp5072));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5071)));
frost$core$String* $tmp5073 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5073));
*(&local5) = ((frost$core$String*) NULL);
frost$core$String* $tmp5074 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5074));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5075 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5075));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5076 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5076));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1427
frost$core$Int64 $tmp5077 = (frost$core$Int64) {1427};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5078, $tmp5077);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5079 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5079));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$IR$Value* param3) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
// line 1432
*(&local0) = ((frost$core$Error*) NULL);
// line 1433
frost$core$String* $tmp5080 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5080));
frost$core$String* $tmp5081 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5081));
*(&local1) = $tmp5080;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5080));
// line 1434
frost$core$String* $tmp5082 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param3);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5082));
frost$core$String* $tmp5083 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5083));
*(&local2) = $tmp5082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5082));
// line 1435
frost$core$String* $tmp5084 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5084));
frost$core$String* $tmp5085 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5085));
*(&local3) = $tmp5084;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5084));
// line 1436
frost$io$IndentedOutputStream** $tmp5086 = &param0->out;
frost$io$IndentedOutputStream* $tmp5087 = *$tmp5086;
frost$core$String* $tmp5088 = *(&local1);
frost$core$String* $tmp5089 = frost$core$String$get_asString$R$frost$core$String($tmp5088);
frost$core$String* $tmp5090 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5089, &$s5091);
frost$core$String* $tmp5092 = *(&local2);
frost$core$String* $tmp5093 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5090, $tmp5092);
frost$core$String* $tmp5094 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5093, &$s5095);
frost$core$String* $tmp5096 = *(&local3);
frost$core$String* $tmp5097 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5094, $tmp5096);
frost$core$String* $tmp5098 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5097, &$s5099);
$fn5101 $tmp5100 = ($fn5101) ((frost$io$OutputStream*) $tmp5087)->$class->vtable[19];
frost$core$Error* $tmp5102 = $tmp5100(((frost$io$OutputStream*) $tmp5087), $tmp5098);
if ($tmp5102 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5102));
*(&local0) = $tmp5102;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5098));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5089));
frost$core$String* $tmp5103 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5103));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5104 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5104));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5105 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5105));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5098));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5089));
frost$core$String* $tmp5106 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5106));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5107 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5107));
*(&local2) = ((frost$core$String*) NULL);
frost$core$String* $tmp5108 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5108));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1439
frost$core$Int64 $tmp5109 = (frost$core$Int64) {1439};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5110, $tmp5109);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5111 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5111));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1) {

frost$core$Error* local0 = NULL;
// line 1444
*(&local0) = ((frost$core$Error*) NULL);
// line 1445
frost$core$Bit $tmp5112 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp5113 = $tmp5112.value;
if ($tmp5113) goto block3; else goto block5;
block3:;
// line 1446
frost$io$IndentedOutputStream** $tmp5114 = &param0->out;
frost$io$IndentedOutputStream* $tmp5115 = *$tmp5114;
frost$core$String* $tmp5116 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp5117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5118, $tmp5116);
frost$core$String* $tmp5119 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5117, &$s5120);
$fn5122 $tmp5121 = ($fn5122) ((frost$io$OutputStream*) $tmp5115)->$class->vtable[19];
frost$core$Error* $tmp5123 = $tmp5121(((frost$io$OutputStream*) $tmp5115), $tmp5119);
if ($tmp5123 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5123));
*(&local0) = $tmp5123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5116));
goto block1;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5116));
goto block4;
block5:;
// line 1
// line 1449
frost$io$IndentedOutputStream** $tmp5124 = &param0->out;
frost$io$IndentedOutputStream* $tmp5125 = *$tmp5124;
$fn5127 $tmp5126 = ($fn5127) ((frost$io$OutputStream*) $tmp5125)->$class->vtable[19];
frost$core$Error* $tmp5128 = $tmp5126(((frost$io$OutputStream*) $tmp5125), &$s5129);
if ($tmp5128 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5128));
*(&local0) = $tmp5128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5128));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5128));
goto block4;
block4:;
goto block2;
block1:;
// line 1453
frost$core$Int64 $tmp5130 = (frost$core$Int64) {1453};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5131, $tmp5130);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5132 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5132));
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
// line 1458
*(&local0) = ((frost$core$Error*) NULL);
// line 1459
frost$core$Weak** $tmp5133 = &param2->owner;
frost$core$Weak* $tmp5134 = *$tmp5133;
frost$core$Object* $tmp5135 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5134);
frost$core$Bit* $tmp5136 = &((org$frostlang$frostc$ClassDecl*) $tmp5135)->external;
frost$core$Bit $tmp5137 = *$tmp5136;
bool $tmp5138 = $tmp5137.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp5135);
if ($tmp5138) goto block3; else goto block4;
block3:;
// line 1460
org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(param0, param2);
goto block4;
block4:;
// line 1462
frost$core$Bit $tmp5139 = org$frostlang$frostc$CCodeGenerator$needsStructIndirection$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, param2);
*(&local1) = $tmp5139;
// line 1463
org$frostlang$frostc$Type** $tmp5140 = &param2->returnType;
org$frostlang$frostc$Type* $tmp5141 = *$tmp5140;
frost$core$String* $tmp5142 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5141);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5142));
frost$core$String* $tmp5143 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5143));
*(&local2) = $tmp5142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5142));
// line 1464
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5144));
frost$core$String* $tmp5145 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5145));
*(&local3) = &$s5146;
// line 1465
*(&local4) = ((frost$core$String*) NULL);
// line 1466
org$frostlang$frostc$Type** $tmp5147 = &param2->returnType;
org$frostlang$frostc$Type* $tmp5148 = *$tmp5147;
org$frostlang$frostc$Type* $tmp5149 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp5150 = ((frost$core$Equatable*) $tmp5148)->$class->itable;
while ($tmp5150->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp5150 = $tmp5150->next;
}
$fn5152 $tmp5151 = $tmp5150->methods[1];
frost$core$Bit $tmp5153 = $tmp5151(((frost$core$Equatable*) $tmp5148), ((frost$core$Equatable*) $tmp5149));
bool $tmp5154 = $tmp5153.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5149));
if ($tmp5154) goto block5; else goto block6;
block5:;
// line 1467
frost$core$String* $tmp5155 = org$frostlang$frostc$CCodeGenerator$nextVar$R$frost$core$String(param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5155));
frost$core$String* $tmp5156 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5156));
*(&local4) = $tmp5155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5155));
// line 1468
frost$core$Bit $tmp5157 = *(&local1);
bool $tmp5158 = $tmp5157.value;
if ($tmp5158) goto block7; else goto block9;
block7:;
// line 1469
frost$io$IndentedOutputStream** $tmp5159 = &param0->out;
frost$io$IndentedOutputStream* $tmp5160 = *$tmp5159;
frost$core$String* $tmp5161 = *(&local2);
frost$core$String* $tmp5162 = frost$core$String$get_asString$R$frost$core$String($tmp5161);
frost$core$String* $tmp5163 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5162, &$s5164);
frost$core$String* $tmp5165 = *(&local4);
frost$core$String* $tmp5166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5163, $tmp5165);
frost$core$String* $tmp5167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5166, &$s5168);
$fn5170 $tmp5169 = ($fn5170) ((frost$io$OutputStream*) $tmp5160)->$class->vtable[19];
frost$core$Error* $tmp5171 = $tmp5169(((frost$io$OutputStream*) $tmp5160), $tmp5167);
if ($tmp5171 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5171));
*(&local0) = $tmp5171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5162));
frost$core$String* $tmp5172 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5172));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5173 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5173));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5174 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5174));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5162));
goto block8;
block9:;
// line 1
// line 1472
frost$io$IndentedOutputStream** $tmp5175 = &param0->out;
frost$io$IndentedOutputStream* $tmp5176 = *$tmp5175;
frost$core$String* $tmp5177 = *(&local2);
frost$core$String* $tmp5178 = frost$core$String$get_asString$R$frost$core$String($tmp5177);
frost$core$String* $tmp5179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5178, &$s5180);
frost$core$String* $tmp5181 = *(&local4);
frost$core$String* $tmp5182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5179, $tmp5181);
frost$core$String* $tmp5183 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5182, &$s5184);
$fn5186 $tmp5185 = ($fn5186) ((frost$io$OutputStream*) $tmp5176)->$class->vtable[17];
frost$core$Error* $tmp5187 = $tmp5185(((frost$io$OutputStream*) $tmp5176), $tmp5183);
if ($tmp5187 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5187));
*(&local0) = $tmp5187;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5178));
frost$core$String* $tmp5188 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5188));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5189 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5189));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5190 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5190));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5178));
goto block8;
block8:;
// line 1474
frost$collections$HashMap** $tmp5191 = &param0->refs;
frost$collections$HashMap* $tmp5192 = *$tmp5191;
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp5193;
$tmp5193 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp5193->value = param1;
frost$core$String* $tmp5194 = *(&local4);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp5192, ((frost$collections$Key*) $tmp5193), ((frost$core$Object*) $tmp5194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Key*) $tmp5193)));
goto block6;
block6:;
// line 1476
frost$io$IndentedOutputStream** $tmp5195 = &param0->out;
frost$io$IndentedOutputStream* $tmp5196 = *$tmp5195;
frost$core$String* $tmp5197 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param2);
frost$core$String* $tmp5198 = frost$core$String$get_asString$R$frost$core$String($tmp5197);
frost$core$String* $tmp5199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5198, &$s5200);
$fn5202 $tmp5201 = ($fn5202) ((frost$io$OutputStream*) $tmp5196)->$class->vtable[17];
frost$core$Error* $tmp5203 = $tmp5201(((frost$io$OutputStream*) $tmp5196), $tmp5199);
if ($tmp5203 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5203));
*(&local0) = $tmp5203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5197));
frost$core$String* $tmp5204 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5204));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5205 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5205));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5206 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5206));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5197));
// line 1477
frost$core$Bit $tmp5207 = *(&local1);
bool $tmp5208 = $tmp5207.value;
if ($tmp5208) goto block16; else goto block17;
block16:;
// line 1478
frost$io$IndentedOutputStream** $tmp5209 = &param0->out;
frost$io$IndentedOutputStream* $tmp5210 = *$tmp5209;
frost$core$String* $tmp5211 = *(&local4);
frost$core$String* $tmp5212 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5213, $tmp5211);
frost$core$String* $tmp5214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5212, &$s5215);
$fn5217 $tmp5216 = ($fn5217) ((frost$io$OutputStream*) $tmp5210)->$class->vtable[17];
frost$core$Error* $tmp5218 = $tmp5216(((frost$io$OutputStream*) $tmp5210), $tmp5214);
if ($tmp5218 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5218));
*(&local0) = $tmp5218;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5212));
frost$core$String* $tmp5219 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5219));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5220 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5220));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5221 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5221));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5212));
// line 1479
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5222));
frost$core$String* $tmp5223 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5223));
*(&local3) = &$s5224;
goto block17;
block17:;
// line 1481
ITable* $tmp5225 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp5225->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp5225 = $tmp5225->next;
}
$fn5227 $tmp5226 = $tmp5225->methods[0];
frost$collections$Iterator* $tmp5228 = $tmp5226(((frost$collections$Iterable*) param3));
goto block20;
block20:;
ITable* $tmp5229 = $tmp5228->$class->itable;
while ($tmp5229->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5229 = $tmp5229->next;
}
$fn5231 $tmp5230 = $tmp5229->methods[0];
frost$core$Bit $tmp5232 = $tmp5230($tmp5228);
bool $tmp5233 = $tmp5232.value;
if ($tmp5233) goto block22; else goto block21;
block21:;
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp5234 = $tmp5228->$class->itable;
while ($tmp5234->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5234 = $tmp5234->next;
}
$fn5236 $tmp5235 = $tmp5234->methods[1];
frost$core$Object* $tmp5237 = $tmp5235($tmp5228);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) $tmp5237)));
org$frostlang$frostc$IR$Value* $tmp5238 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5238));
*(&local5) = ((org$frostlang$frostc$IR$Value*) $tmp5237);
// line 1482
frost$io$IndentedOutputStream** $tmp5239 = &param0->out;
frost$io$IndentedOutputStream* $tmp5240 = *$tmp5239;
frost$core$String* $tmp5241 = *(&local3);
$fn5243 $tmp5242 = ($fn5243) ((frost$io$OutputStream*) $tmp5240)->$class->vtable[17];
frost$core$Error* $tmp5244 = $tmp5242(((frost$io$OutputStream*) $tmp5240), $tmp5241);
if ($tmp5244 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5244));
*(&local0) = $tmp5244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5244));
frost$core$Frost$unref$frost$core$Object$Q($tmp5237);
org$frostlang$frostc$IR$Value* $tmp5245 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5245));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5228));
frost$core$String* $tmp5246 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5246));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5247 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5247));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5248 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5248));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5244));
// line 1483
frost$io$IndentedOutputStream** $tmp5249 = &param0->out;
frost$io$IndentedOutputStream* $tmp5250 = *$tmp5249;
org$frostlang$frostc$IR$Value* $tmp5251 = *(&local5);
frost$core$String* $tmp5252 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, $tmp5251);
$fn5254 $tmp5253 = ($fn5254) ((frost$io$OutputStream*) $tmp5250)->$class->vtable[17];
frost$core$Error* $tmp5255 = $tmp5253(((frost$io$OutputStream*) $tmp5250), $tmp5252);
if ($tmp5255 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5255));
*(&local0) = $tmp5255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5252));
frost$core$Frost$unref$frost$core$Object$Q($tmp5237);
org$frostlang$frostc$IR$Value* $tmp5256 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5256));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5228));
frost$core$String* $tmp5257 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5257));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5258 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5258));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5259 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5259));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5252));
// line 1484
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5260));
frost$core$String* $tmp5261 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5261));
*(&local3) = &$s5262;
frost$core$Frost$unref$frost$core$Object$Q($tmp5237);
org$frostlang$frostc$IR$Value* $tmp5263 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5263));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5228));
// line 1486
frost$io$IndentedOutputStream** $tmp5264 = &param0->out;
frost$io$IndentedOutputStream* $tmp5265 = *$tmp5264;
$fn5267 $tmp5266 = ($fn5267) ((frost$io$OutputStream*) $tmp5265)->$class->vtable[19];
frost$core$Error* $tmp5268 = $tmp5266(((frost$io$OutputStream*) $tmp5265), &$s5269);
if ($tmp5268 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5268));
*(&local0) = $tmp5268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5268));
frost$core$String* $tmp5270 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5270));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5271 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5271));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5272 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5272));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5268));
frost$core$String* $tmp5273 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5273));
*(&local4) = ((frost$core$String*) NULL);
frost$core$String* $tmp5274 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5274));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5275 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5275));
*(&local2) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 1489
frost$core$Int64 $tmp5276 = (frost$core$Int64) {1489};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5277, $tmp5276);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5278 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5278));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$IR$Value* param1, org$frostlang$frostc$IR$Value* param2) {

frost$core$Error* local0 = NULL;
// line 1494
*(&local0) = ((frost$core$Error*) NULL);
// line 1495
frost$io$IndentedOutputStream** $tmp5279 = &param0->out;
frost$io$IndentedOutputStream* $tmp5280 = *$tmp5279;
frost$core$String* $tmp5281 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param2);
frost$core$String* $tmp5282 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5283, $tmp5281);
frost$core$String* $tmp5284 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5282, &$s5285);
frost$core$String* $tmp5286 = org$frostlang$frostc$CCodeGenerator$getReference$org$frostlang$frostc$IR$Value$R$frost$core$String(param0, param1);
frost$core$String* $tmp5287 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5284, $tmp5286);
frost$core$String* $tmp5288 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5287, &$s5289);
$fn5291 $tmp5290 = ($fn5291) ((frost$io$OutputStream*) $tmp5280)->$class->vtable[19];
frost$core$Error* $tmp5292 = $tmp5290(((frost$io$OutputStream*) $tmp5280), $tmp5288);
if ($tmp5292 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5292));
*(&local0) = $tmp5292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5281));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5292));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5282));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5281));
goto block2;
block1:;
// line 1498
frost$core$Int64 $tmp5293 = (frost$core$Int64) {1498};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5294, $tmp5293);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5295 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5295));
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
// line 1503
*(&local0) = ((frost$core$Error*) NULL);
// line 1504
frost$core$Int64* $tmp5296 = &param2->$rawValue;
frost$core$Int64 $tmp5297 = *$tmp5296;
frost$core$Int64 $tmp5298 = (frost$core$Int64) {0};
frost$core$Bit $tmp5299 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5298);
bool $tmp5300 = $tmp5299.value;
if ($tmp5300) goto block4; else goto block5;
block4:;
org$frostlang$frostc$Position* $tmp5301 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5302 = *$tmp5301;
*(&local1) = $tmp5302;
org$frostlang$frostc$IR$Value** $tmp5303 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5304 = *$tmp5303;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5304));
org$frostlang$frostc$IR$Value* $tmp5305 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5305));
*(&local2) = $tmp5304;
org$frostlang$frostc$expression$Binary$Operator* $tmp5306 = (org$frostlang$frostc$expression$Binary$Operator*) (param2->$data + 24);
org$frostlang$frostc$expression$Binary$Operator $tmp5307 = *$tmp5306;
*(&local3) = $tmp5307;
org$frostlang$frostc$IR$Value** $tmp5308 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5309 = *$tmp5308;
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5309));
org$frostlang$frostc$IR$Value* $tmp5310 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5310));
*(&local4) = $tmp5309;
org$frostlang$frostc$Type** $tmp5311 = (org$frostlang$frostc$Type**) (param2->$data + 40);
org$frostlang$frostc$Type* $tmp5312 = *$tmp5311;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5312));
org$frostlang$frostc$Type* $tmp5313 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5313));
*(&local5) = $tmp5312;
// line 1506
org$frostlang$frostc$IR$Value* $tmp5314 = *(&local2);
org$frostlang$frostc$expression$Binary$Operator $tmp5315 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp5316 = *(&local4);
org$frostlang$frostc$Type* $tmp5317 = *(&local5);
org$frostlang$frostc$CCodeGenerator$writeBinary$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5314, $tmp5315, $tmp5316, $tmp5317);
org$frostlang$frostc$Type* $tmp5318 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5318));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5319 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5319));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5320 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5320));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block5:;
frost$core$Int64 $tmp5321 = (frost$core$Int64) {1};
frost$core$Bit $tmp5322 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5321);
bool $tmp5323 = $tmp5322.value;
if ($tmp5323) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Position* $tmp5324 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5325 = *$tmp5324;
*(&local6) = $tmp5325;
org$frostlang$frostc$IR$Block$ID* $tmp5326 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 16);
org$frostlang$frostc$IR$Block$ID $tmp5327 = *$tmp5326;
*(&local7) = $tmp5327;
// line 1509
org$frostlang$frostc$IR$Block$ID $tmp5328 = *(&local7);
org$frostlang$frostc$CCodeGenerator$writeBranch$org$frostlang$frostc$IR$Block$ID(param0, $tmp5328);
goto block3;
block7:;
frost$core$Int64 $tmp5329 = (frost$core$Int64) {2};
frost$core$Bit $tmp5330 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5329);
bool $tmp5331 = $tmp5330.value;
if ($tmp5331) goto block8; else goto block9;
block8:;
org$frostlang$frostc$Position* $tmp5332 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5333 = *$tmp5332;
*(&local8) = $tmp5333;
org$frostlang$frostc$IR$Value** $tmp5334 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5335 = *$tmp5334;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5335));
org$frostlang$frostc$IR$Value* $tmp5336 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5336));
*(&local9) = $tmp5335;
org$frostlang$frostc$Type** $tmp5337 = (org$frostlang$frostc$Type**) (param2->$data + 24);
org$frostlang$frostc$Type* $tmp5338 = *$tmp5337;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5338));
org$frostlang$frostc$Type* $tmp5339 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5339));
*(&local10) = $tmp5338;
frost$core$Bit* $tmp5340 = (frost$core$Bit*) (param2->$data + 32);
frost$core$Bit $tmp5341 = *$tmp5340;
// line 1512
org$frostlang$frostc$IR$Value* $tmp5342 = *(&local9);
org$frostlang$frostc$Type* $tmp5343 = *(&local10);
org$frostlang$frostc$CCodeGenerator$writeCast$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5342, $tmp5343);
org$frostlang$frostc$Type* $tmp5344 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5344));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5345 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5345));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block9:;
frost$core$Int64 $tmp5346 = (frost$core$Int64) {3};
frost$core$Bit $tmp5347 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5346);
bool $tmp5348 = $tmp5347.value;
if ($tmp5348) goto block10; else goto block11;
block10:;
org$frostlang$frostc$Position* $tmp5349 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5350 = *$tmp5349;
frost$core$String** $tmp5351 = (frost$core$String**) (param2->$data + 16);
frost$core$String* $tmp5352 = *$tmp5351;
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5352));
frost$core$String* $tmp5353 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5353));
*(&local11) = $tmp5352;
// line 1515
frost$io$IndentedOutputStream** $tmp5354 = &param0->out;
frost$io$IndentedOutputStream* $tmp5355 = *$tmp5354;
frost$core$String* $tmp5356 = *(&local11);
frost$core$String* $tmp5357 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5358, $tmp5356);
frost$core$String* $tmp5359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5357, &$s5360);
$fn5362 $tmp5361 = ($fn5362) ((frost$io$OutputStream*) $tmp5355)->$class->vtable[19];
frost$core$Error* $tmp5363 = $tmp5361(((frost$io$OutputStream*) $tmp5355), $tmp5359);
if ($tmp5363 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5363));
*(&local0) = $tmp5363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5357));
frost$core$String* $tmp5364 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5364));
*(&local11) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5363));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5357));
frost$core$String* $tmp5365 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5365));
*(&local11) = ((frost$core$String*) NULL);
goto block3;
block11:;
frost$core$Int64 $tmp5366 = (frost$core$Int64) {5};
frost$core$Bit $tmp5367 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5366);
bool $tmp5368 = $tmp5367.value;
if ($tmp5368) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Position* $tmp5369 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5370 = *$tmp5369;
*(&local12) = $tmp5370;
org$frostlang$frostc$IR$Value** $tmp5371 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5372 = *$tmp5371;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5372));
org$frostlang$frostc$IR$Value* $tmp5373 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5373));
*(&local13) = $tmp5372;
org$frostlang$frostc$IR$Block$ID* $tmp5374 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 24);
org$frostlang$frostc$IR$Block$ID $tmp5375 = *$tmp5374;
*(&local14) = $tmp5375;
org$frostlang$frostc$IR$Block$ID* $tmp5376 = (org$frostlang$frostc$IR$Block$ID*) (param2->$data + 32);
org$frostlang$frostc$IR$Block$ID $tmp5377 = *$tmp5376;
*(&local15) = $tmp5377;
// line 1518
org$frostlang$frostc$IR$Value* $tmp5378 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp5379 = *(&local14);
org$frostlang$frostc$IR$Block$ID $tmp5380 = *(&local15);
org$frostlang$frostc$CCodeGenerator$writeConditionalBranch$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, $tmp5378, $tmp5379, $tmp5380);
org$frostlang$frostc$IR$Value* $tmp5381 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5381));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block15:;
frost$core$Int64 $tmp5382 = (frost$core$Int64) {6};
frost$core$Bit $tmp5383 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5382);
bool $tmp5384 = $tmp5383.value;
if ($tmp5384) goto block16; else goto block17;
block16:;
org$frostlang$frostc$Position* $tmp5385 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5386 = *$tmp5385;
*(&local16) = $tmp5386;
org$frostlang$frostc$ClassDecl** $tmp5387 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp5388 = *$tmp5387;
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5388));
org$frostlang$frostc$ClassDecl* $tmp5389 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5389));
*(&local17) = $tmp5388;
// line 1521
org$frostlang$frostc$ClassDecl* $tmp5390 = *(&local17);
org$frostlang$frostc$CCodeGenerator$writeConstruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl(param0, param1, $tmp5390);
org$frostlang$frostc$ClassDecl* $tmp5391 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5391));
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block3;
block17:;
frost$core$Int64 $tmp5392 = (frost$core$Int64) {7};
frost$core$Bit $tmp5393 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5392);
bool $tmp5394 = $tmp5393.value;
if ($tmp5394) goto block18; else goto block19;
block18:;
org$frostlang$frostc$Position* $tmp5395 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5396 = *$tmp5395;
*(&local18) = $tmp5396;
org$frostlang$frostc$ClassDecl** $tmp5397 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 16);
org$frostlang$frostc$ClassDecl* $tmp5398 = *$tmp5397;
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5398));
org$frostlang$frostc$ClassDecl* $tmp5399 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5399));
*(&local19) = $tmp5398;
org$frostlang$frostc$FixedArray** $tmp5400 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5401 = *$tmp5400;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5401));
org$frostlang$frostc$FixedArray* $tmp5402 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5402));
*(&local20) = $tmp5401;
// line 1524
org$frostlang$frostc$ClassDecl* $tmp5403 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp5404 = *(&local20);
org$frostlang$frostc$CCodeGenerator$writeCreateStruct$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5403, $tmp5404);
org$frostlang$frostc$FixedArray* $tmp5405 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5405));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$ClassDecl* $tmp5406 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5406));
*(&local19) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block3;
block19:;
frost$core$Int64 $tmp5407 = (frost$core$Int64) {8};
frost$core$Bit $tmp5408 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5407);
bool $tmp5409 = $tmp5408.value;
if ($tmp5409) goto block20; else goto block21;
block20:;
org$frostlang$frostc$Position* $tmp5410 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5411 = *$tmp5410;
*(&local21) = $tmp5411;
org$frostlang$frostc$IR$Value** $tmp5412 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5413 = *$tmp5412;
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5413));
org$frostlang$frostc$IR$Value* $tmp5414 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5414));
*(&local22) = $tmp5413;
org$frostlang$frostc$FixedArray** $tmp5415 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5416 = *$tmp5415;
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5416));
org$frostlang$frostc$FixedArray* $tmp5417 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5417));
*(&local23) = $tmp5416;
// line 1527
org$frostlang$frostc$IR$Value* $tmp5418 = *(&local22);
org$frostlang$frostc$FixedArray* $tmp5419 = *(&local23);
org$frostlang$frostc$CCodeGenerator$writeDynamicCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5418, ((frost$collections$ListView*) $tmp5419));
org$frostlang$frostc$FixedArray* $tmp5420 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5420));
*(&local23) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp5421 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5421));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block21:;
frost$core$Int64 $tmp5422 = (frost$core$Int64) {9};
frost$core$Bit $tmp5423 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5422);
bool $tmp5424 = $tmp5423.value;
if ($tmp5424) goto block22; else goto block23;
block22:;
goto block3;
block23:;
frost$core$Int64 $tmp5425 = (frost$core$Int64) {10};
frost$core$Bit $tmp5426 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5425);
bool $tmp5427 = $tmp5426.value;
if ($tmp5427) goto block24; else goto block25;
block24:;
org$frostlang$frostc$Position* $tmp5428 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5429 = *$tmp5428;
*(&local24) = $tmp5429;
org$frostlang$frostc$IR$Value** $tmp5430 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5431 = *$tmp5430;
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5431));
org$frostlang$frostc$IR$Value* $tmp5432 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5432));
*(&local25) = $tmp5431;
org$frostlang$frostc$FieldDecl** $tmp5433 = (org$frostlang$frostc$FieldDecl**) (param2->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp5434 = *$tmp5433;
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5434));
org$frostlang$frostc$FieldDecl* $tmp5435 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5435));
*(&local26) = $tmp5434;
// line 1532
org$frostlang$frostc$IR$Value* $tmp5436 = *(&local25);
org$frostlang$frostc$FieldDecl* $tmp5437 = *(&local26);
org$frostlang$frostc$CCodeGenerator$writeExtractField$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(param0, param1, $tmp5436, $tmp5437);
org$frostlang$frostc$FieldDecl* $tmp5438 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5438));
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5439 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5439));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block25:;
frost$core$Int64 $tmp5440 = (frost$core$Int64) {4};
frost$core$Bit $tmp5441 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5440);
bool $tmp5442 = $tmp5441.value;
if ($tmp5442) goto block26; else goto block27;
block26:;
org$frostlang$frostc$Position* $tmp5443 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5444 = *$tmp5443;
*(&local27) = $tmp5444;
org$frostlang$frostc$IR$Value** $tmp5445 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5446 = *$tmp5445;
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5446));
org$frostlang$frostc$IR$Value* $tmp5447 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5447));
*(&local28) = $tmp5446;
org$frostlang$frostc$ChoiceCase** $tmp5448 = (org$frostlang$frostc$ChoiceCase**) (param2->$data + 24);
org$frostlang$frostc$ChoiceCase* $tmp5449 = *$tmp5448;
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5449));
org$frostlang$frostc$ChoiceCase* $tmp5450 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5450));
*(&local29) = $tmp5449;
frost$core$Int64* $tmp5451 = (frost$core$Int64*) (param2->$data + 32);
frost$core$Int64 $tmp5452 = *$tmp5451;
*(&local30) = $tmp5452;
// line 1535
org$frostlang$frostc$IR$Value* $tmp5453 = *(&local28);
org$frostlang$frostc$ChoiceCase* $tmp5454 = *(&local29);
frost$core$Int64 $tmp5455 = *(&local30);
org$frostlang$frostc$CCodeGenerator$writeGetChoiceFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(param0, param1, $tmp5453, $tmp5454, $tmp5455);
org$frostlang$frostc$ChoiceCase* $tmp5456 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5456));
*(&local29) = ((org$frostlang$frostc$ChoiceCase*) NULL);
org$frostlang$frostc$IR$Value* $tmp5457 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5457));
*(&local28) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block27:;
frost$core$Int64 $tmp5458 = (frost$core$Int64) {11};
frost$core$Bit $tmp5459 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5458);
bool $tmp5460 = $tmp5459.value;
if ($tmp5460) goto block28; else goto block29;
block28:;
org$frostlang$frostc$Position* $tmp5461 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5462 = *$tmp5461;
*(&local31) = $tmp5462;
org$frostlang$frostc$IR$Value** $tmp5463 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5464 = *$tmp5463;
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5464));
org$frostlang$frostc$IR$Value* $tmp5465 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5465));
*(&local32) = $tmp5464;
org$frostlang$frostc$FieldDecl** $tmp5466 = (org$frostlang$frostc$FieldDecl**) (param2->$data + 24);
org$frostlang$frostc$FieldDecl* $tmp5467 = *$tmp5466;
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5467));
org$frostlang$frostc$FieldDecl* $tmp5468 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5468));
*(&local33) = $tmp5467;
// line 1538
org$frostlang$frostc$IR$Value* $tmp5469 = *(&local32);
org$frostlang$frostc$FieldDecl* $tmp5470 = *(&local33);
org$frostlang$frostc$CCodeGenerator$writeGetFieldPointer$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(param0, param1, $tmp5469, $tmp5470);
org$frostlang$frostc$FieldDecl* $tmp5471 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5471));
*(&local33) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5472 = *(&local32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5472));
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block29:;
frost$core$Int64 $tmp5473 = (frost$core$Int64) {13};
frost$core$Bit $tmp5474 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5473);
bool $tmp5475 = $tmp5474.value;
if ($tmp5475) goto block30; else goto block31;
block30:;
org$frostlang$frostc$Position* $tmp5476 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5477 = *$tmp5476;
*(&local34) = $tmp5477;
org$frostlang$frostc$IR$Value** $tmp5478 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5479 = *$tmp5478;
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5479));
org$frostlang$frostc$IR$Value* $tmp5480 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5480));
*(&local35) = $tmp5479;
org$frostlang$frostc$ClassDecl** $tmp5481 = (org$frostlang$frostc$ClassDecl**) (param2->$data + 24);
org$frostlang$frostc$ClassDecl* $tmp5482 = *$tmp5481;
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5482));
org$frostlang$frostc$ClassDecl* $tmp5483 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5483));
*(&local36) = $tmp5482;
frost$core$Int64* $tmp5484 = (frost$core$Int64*) (param2->$data + 32);
frost$core$Int64 $tmp5485 = *$tmp5484;
*(&local37) = $tmp5485;
org$frostlang$frostc$Type** $tmp5486 = (org$frostlang$frostc$Type**) (param2->$data + 40);
org$frostlang$frostc$Type* $tmp5487 = *$tmp5486;
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5487));
org$frostlang$frostc$Type* $tmp5488 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5488));
*(&local38) = $tmp5487;
// line 1541
org$frostlang$frostc$IR$Value* $tmp5489 = *(&local35);
org$frostlang$frostc$ClassDecl* $tmp5490 = *(&local36);
frost$core$Int64 $tmp5491 = *(&local37);
org$frostlang$frostc$Type* $tmp5492 = *(&local38);
org$frostlang$frostc$CCodeGenerator$writeGetInterfaceMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(param0, param1, $tmp5489, $tmp5490, $tmp5491, $tmp5492);
org$frostlang$frostc$Type* $tmp5493 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5493));
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp5494 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5494));
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp5495 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5495));
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block31:;
frost$core$Int64 $tmp5496 = (frost$core$Int64) {12};
frost$core$Bit $tmp5497 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5496);
bool $tmp5498 = $tmp5497.value;
if ($tmp5498) goto block32; else goto block33;
block32:;
org$frostlang$frostc$Position* $tmp5499 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5500 = *$tmp5499;
*(&local39) = $tmp5500;
org$frostlang$frostc$IR$Value** $tmp5501 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5502 = *$tmp5501;
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5502));
org$frostlang$frostc$IR$Value* $tmp5503 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5503));
*(&local40) = $tmp5502;
frost$core$Int64* $tmp5504 = (frost$core$Int64*) (param2->$data + 24);
frost$core$Int64 $tmp5505 = *$tmp5504;
*(&local41) = $tmp5505;
org$frostlang$frostc$Type** $tmp5506 = (org$frostlang$frostc$Type**) (param2->$data + 32);
org$frostlang$frostc$Type* $tmp5507 = *$tmp5506;
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5507));
org$frostlang$frostc$Type* $tmp5508 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5508));
*(&local42) = $tmp5507;
// line 1544
org$frostlang$frostc$IR$Value* $tmp5509 = *(&local40);
frost$core$Int64 $tmp5510 = *(&local41);
org$frostlang$frostc$Type* $tmp5511 = *(&local42);
org$frostlang$frostc$CCodeGenerator$writeGetVirtualMethod$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(param0, param1, $tmp5509, $tmp5510, $tmp5511);
org$frostlang$frostc$Type* $tmp5512 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5512));
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5513 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5513));
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block33:;
frost$core$Int64 $tmp5514 = (frost$core$Int64) {14};
frost$core$Bit $tmp5515 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5514);
bool $tmp5516 = $tmp5515.value;
if ($tmp5516) goto block34; else goto block35;
block34:;
org$frostlang$frostc$Position* $tmp5517 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5518 = *$tmp5517;
*(&local43) = $tmp5518;
org$frostlang$frostc$IR$Value** $tmp5519 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5520 = *$tmp5519;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5520));
org$frostlang$frostc$IR$Value* $tmp5521 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5521));
*(&local44) = $tmp5520;
// line 1547
org$frostlang$frostc$IR$Value* $tmp5522 = *(&local44);
org$frostlang$frostc$CCodeGenerator$writeLoad$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5522);
org$frostlang$frostc$IR$Value* $tmp5523 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5523));
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block35:;
frost$core$Int64 $tmp5524 = (frost$core$Int64) {15};
frost$core$Bit $tmp5525 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5524);
bool $tmp5526 = $tmp5525.value;
if ($tmp5526) goto block36; else goto block37;
block36:;
org$frostlang$frostc$Position* $tmp5527 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5528 = *$tmp5527;
*(&local45) = $tmp5528;
org$frostlang$frostc$IR$Value** $tmp5529 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5530 = *$tmp5529;
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5530));
org$frostlang$frostc$IR$Value* $tmp5531 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5531));
*(&local46) = $tmp5530;
// line 1550
org$frostlang$frostc$IR$Value* $tmp5532 = *(&local46);
org$frostlang$frostc$CCodeGenerator$writeNegate$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5532);
org$frostlang$frostc$IR$Value* $tmp5533 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5533));
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block37:;
frost$core$Int64 $tmp5534 = (frost$core$Int64) {16};
frost$core$Bit $tmp5535 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5534);
bool $tmp5536 = $tmp5535.value;
if ($tmp5536) goto block38; else goto block39;
block38:;
org$frostlang$frostc$Position* $tmp5537 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5538 = *$tmp5537;
*(&local47) = $tmp5538;
org$frostlang$frostc$IR$Value** $tmp5539 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5540 = *$tmp5539;
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5540));
org$frostlang$frostc$IR$Value* $tmp5541 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5541));
*(&local48) = $tmp5540;
// line 1553
org$frostlang$frostc$IR$Value* $tmp5542 = *(&local48);
org$frostlang$frostc$CCodeGenerator$writeNot$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value(param0, param1, $tmp5542);
org$frostlang$frostc$IR$Value* $tmp5543 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5543));
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block39:;
frost$core$Int64 $tmp5544 = (frost$core$Int64) {17};
frost$core$Bit $tmp5545 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5544);
bool $tmp5546 = $tmp5545.value;
if ($tmp5546) goto block40; else goto block41;
block40:;
org$frostlang$frostc$Position* $tmp5547 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5548 = *$tmp5547;
*(&local49) = $tmp5548;
org$frostlang$frostc$IR$Value** $tmp5549 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5550 = *$tmp5549;
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5550));
org$frostlang$frostc$IR$Value* $tmp5551 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5551));
*(&local50) = $tmp5550;
org$frostlang$frostc$Type** $tmp5552 = (org$frostlang$frostc$Type**) (param2->$data + 24);
org$frostlang$frostc$Type* $tmp5553 = *$tmp5552;
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5553));
org$frostlang$frostc$Type* $tmp5554 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5554));
*(&local51) = $tmp5553;
// line 1556
org$frostlang$frostc$IR$Value* $tmp5555 = *(&local50);
org$frostlang$frostc$Type* $tmp5556 = *(&local51);
org$frostlang$frostc$CCodeGenerator$writePointerAlloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(param0, param1, $tmp5555, $tmp5556);
org$frostlang$frostc$Type* $tmp5557 = *(&local51);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5557));
*(&local51) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp5558 = *(&local50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5558));
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block41:;
frost$core$Int64 $tmp5559 = (frost$core$Int64) {18};
frost$core$Bit $tmp5560 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5559);
bool $tmp5561 = $tmp5560.value;
if ($tmp5561) goto block42; else goto block43;
block42:;
org$frostlang$frostc$Position* $tmp5562 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5563 = *$tmp5562;
*(&local52) = $tmp5563;
org$frostlang$frostc$IR$Value** $tmp5564 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5565 = *$tmp5564;
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5565));
org$frostlang$frostc$IR$Value* $tmp5566 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5566));
*(&local53) = $tmp5565;
// line 1559
org$frostlang$frostc$IR$Value* $tmp5567 = *(&local53);
org$frostlang$frostc$CCodeGenerator$writePointerDestroy$org$frostlang$frostc$IR$Value(param0, $tmp5567);
org$frostlang$frostc$IR$Value* $tmp5568 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5568));
*(&local53) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block43:;
frost$core$Int64 $tmp5569 = (frost$core$Int64) {20};
frost$core$Bit $tmp5570 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5569);
bool $tmp5571 = $tmp5570.value;
if ($tmp5571) goto block44; else goto block45;
block44:;
org$frostlang$frostc$Position* $tmp5572 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5573 = *$tmp5572;
*(&local54) = $tmp5573;
org$frostlang$frostc$IR$Value** $tmp5574 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5575 = *$tmp5574;
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5575));
org$frostlang$frostc$IR$Value* $tmp5576 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5576));
*(&local55) = $tmp5575;
org$frostlang$frostc$IR$Value** $tmp5577 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5578 = *$tmp5577;
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5578));
org$frostlang$frostc$IR$Value* $tmp5579 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5579));
*(&local56) = $tmp5578;
// line 1562
org$frostlang$frostc$IR$Value* $tmp5580 = *(&local55);
org$frostlang$frostc$IR$Value* $tmp5581 = *(&local56);
org$frostlang$frostc$CCodeGenerator$writePointerGetIndex$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5580, $tmp5581);
org$frostlang$frostc$IR$Value* $tmp5582 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5582));
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5583 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5583));
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block45:;
frost$core$Int64 $tmp5584 = (frost$core$Int64) {21};
frost$core$Bit $tmp5585 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5584);
bool $tmp5586 = $tmp5585.value;
if ($tmp5586) goto block46; else goto block47;
block46:;
org$frostlang$frostc$Position* $tmp5587 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5588 = *$tmp5587;
*(&local57) = $tmp5588;
org$frostlang$frostc$IR$Value** $tmp5589 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5590 = *$tmp5589;
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5590));
org$frostlang$frostc$IR$Value* $tmp5591 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5591));
*(&local58) = $tmp5590;
org$frostlang$frostc$IR$Value** $tmp5592 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5593 = *$tmp5592;
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5593));
org$frostlang$frostc$IR$Value* $tmp5594 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5594));
*(&local59) = $tmp5593;
// line 1565
org$frostlang$frostc$IR$Value* $tmp5595 = *(&local58);
org$frostlang$frostc$IR$Value* $tmp5596 = *(&local59);
org$frostlang$frostc$CCodeGenerator$writePointerOffset$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5595, $tmp5596);
org$frostlang$frostc$IR$Value* $tmp5597 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5597));
*(&local59) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5598 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5598));
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block47:;
frost$core$Int64 $tmp5599 = (frost$core$Int64) {22};
frost$core$Bit $tmp5600 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5599);
bool $tmp5601 = $tmp5600.value;
if ($tmp5601) goto block48; else goto block49;
block48:;
org$frostlang$frostc$Position* $tmp5602 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5603 = *$tmp5602;
*(&local60) = $tmp5603;
org$frostlang$frostc$IR$Value** $tmp5604 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5605 = *$tmp5604;
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5605));
org$frostlang$frostc$IR$Value* $tmp5606 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5606));
*(&local61) = $tmp5605;
org$frostlang$frostc$IR$Value** $tmp5607 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5608 = *$tmp5607;
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5608));
org$frostlang$frostc$IR$Value* $tmp5609 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5609));
*(&local62) = $tmp5608;
org$frostlang$frostc$IR$Value** $tmp5610 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5611 = *$tmp5610;
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5611));
org$frostlang$frostc$IR$Value* $tmp5612 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5612));
*(&local63) = $tmp5611;
// line 1568
org$frostlang$frostc$IR$Value* $tmp5613 = *(&local61);
org$frostlang$frostc$IR$Value* $tmp5614 = *(&local62);
org$frostlang$frostc$IR$Value* $tmp5615 = *(&local63);
org$frostlang$frostc$CCodeGenerator$writePointerRealloc$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, param1, $tmp5613, $tmp5614, $tmp5615);
org$frostlang$frostc$IR$Value* $tmp5616 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5616));
*(&local63) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5617 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5617));
*(&local62) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5618 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5618));
*(&local61) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block49:;
frost$core$Int64 $tmp5619 = (frost$core$Int64) {24};
frost$core$Bit $tmp5620 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5619);
bool $tmp5621 = $tmp5620.value;
if ($tmp5621) goto block50; else goto block51;
block50:;
org$frostlang$frostc$Position* $tmp5622 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5623 = *$tmp5622;
*(&local64) = $tmp5623;
org$frostlang$frostc$IR$Value** $tmp5624 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5625 = *$tmp5624;
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5625));
org$frostlang$frostc$IR$Value* $tmp5626 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5626));
*(&local65) = $tmp5625;
org$frostlang$frostc$IR$Value** $tmp5627 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5628 = *$tmp5627;
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5628));
org$frostlang$frostc$IR$Value* $tmp5629 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5629));
*(&local66) = $tmp5628;
org$frostlang$frostc$IR$Value** $tmp5630 = (org$frostlang$frostc$IR$Value**) (param2->$data + 32);
org$frostlang$frostc$IR$Value* $tmp5631 = *$tmp5630;
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5631));
org$frostlang$frostc$IR$Value* $tmp5632 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5632));
*(&local67) = $tmp5631;
// line 1571
org$frostlang$frostc$IR$Value* $tmp5633 = *(&local65);
org$frostlang$frostc$IR$Value* $tmp5634 = *(&local66);
org$frostlang$frostc$IR$Value* $tmp5635 = *(&local67);
org$frostlang$frostc$CCodeGenerator$writePointerSetIndex$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, $tmp5633, $tmp5634, $tmp5635);
org$frostlang$frostc$IR$Value* $tmp5636 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5636));
*(&local67) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5637 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5637));
*(&local66) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5638 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5638));
*(&local65) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block51:;
frost$core$Int64 $tmp5639 = (frost$core$Int64) {25};
frost$core$Bit $tmp5640 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5639);
bool $tmp5641 = $tmp5640.value;
if ($tmp5641) goto block52; else goto block53;
block52:;
org$frostlang$frostc$Position* $tmp5642 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5643 = *$tmp5642;
*(&local68) = $tmp5643;
org$frostlang$frostc$IR$Value** $tmp5644 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5645 = *$tmp5644;
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5645));
org$frostlang$frostc$IR$Value* $tmp5646 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5646));
*(&local69) = $tmp5645;
// line 1574
org$frostlang$frostc$IR$Value* $tmp5647 = *(&local69);
org$frostlang$frostc$CCodeGenerator$writeReturn$org$frostlang$frostc$IR$Value$Q(param0, $tmp5647);
org$frostlang$frostc$IR$Value* $tmp5648 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5648));
*(&local69) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block53:;
frost$core$Int64 $tmp5649 = (frost$core$Int64) {26};
frost$core$Bit $tmp5650 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5649);
bool $tmp5651 = $tmp5650.value;
if ($tmp5651) goto block54; else goto block55;
block54:;
org$frostlang$frostc$Position* $tmp5652 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5653 = *$tmp5652;
*(&local70) = $tmp5653;
org$frostlang$frostc$MethodDecl** $tmp5654 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 16);
org$frostlang$frostc$MethodDecl* $tmp5655 = *$tmp5654;
*(&local71) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5655));
org$frostlang$frostc$MethodDecl* $tmp5656 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5656));
*(&local71) = $tmp5655;
org$frostlang$frostc$FixedArray** $tmp5657 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp5658 = *$tmp5657;
*(&local72) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5658));
org$frostlang$frostc$FixedArray* $tmp5659 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5659));
*(&local72) = $tmp5658;
// line 1577
org$frostlang$frostc$MethodDecl* $tmp5660 = *(&local71);
org$frostlang$frostc$FixedArray* $tmp5661 = *(&local72);
org$frostlang$frostc$CCodeGenerator$writeStaticCall$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT(param0, param1, $tmp5660, ((frost$collections$ListView*) $tmp5661));
org$frostlang$frostc$FixedArray* $tmp5662 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5662));
*(&local72) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp5663 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5663));
*(&local71) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block3;
block55:;
frost$core$Int64 $tmp5664 = (frost$core$Int64) {27};
frost$core$Bit $tmp5665 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5664);
bool $tmp5666 = $tmp5665.value;
if ($tmp5666) goto block56; else goto block57;
block56:;
org$frostlang$frostc$Position* $tmp5667 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5668 = *$tmp5667;
*(&local73) = $tmp5668;
org$frostlang$frostc$IR$Value** $tmp5669 = (org$frostlang$frostc$IR$Value**) (param2->$data + 16);
org$frostlang$frostc$IR$Value* $tmp5670 = *$tmp5669;
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5670));
org$frostlang$frostc$IR$Value* $tmp5671 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5671));
*(&local74) = $tmp5670;
org$frostlang$frostc$IR$Value** $tmp5672 = (org$frostlang$frostc$IR$Value**) (param2->$data + 24);
org$frostlang$frostc$IR$Value* $tmp5673 = *$tmp5672;
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5673));
org$frostlang$frostc$IR$Value* $tmp5674 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5674));
*(&local75) = $tmp5673;
// line 1580
org$frostlang$frostc$IR$Value* $tmp5675 = *(&local74);
org$frostlang$frostc$IR$Value* $tmp5676 = *(&local75);
org$frostlang$frostc$CCodeGenerator$writeStore$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(param0, $tmp5675, $tmp5676);
org$frostlang$frostc$IR$Value* $tmp5677 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5677));
*(&local75) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp5678 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5678));
*(&local74) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block3;
block57:;
frost$core$Int64 $tmp5679 = (frost$core$Int64) {28};
frost$core$Bit $tmp5680 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5297, $tmp5679);
bool $tmp5681 = $tmp5680.value;
if ($tmp5681) goto block58; else goto block59;
block58:;
org$frostlang$frostc$Position* $tmp5682 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp5683 = *$tmp5682;
*(&local76) = $tmp5683;
// line 1583
frost$io$IndentedOutputStream** $tmp5684 = &param0->out;
frost$io$IndentedOutputStream* $tmp5685 = *$tmp5684;
$fn5687 $tmp5686 = ($fn5687) ((frost$io$OutputStream*) $tmp5685)->$class->vtable[19];
frost$core$Error* $tmp5688 = $tmp5686(((frost$io$OutputStream*) $tmp5685), &$s5689);
if ($tmp5688 == NULL) goto block60; else goto block61;
block61:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5688));
*(&local0) = $tmp5688;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5688));
goto block1;
block60:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5688));
goto block3;
block59:;
// line 1586
frost$core$Int64 $tmp5690 = (frost$core$Int64) {1586};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5691, $tmp5690);
abort(); // unreachable
block3:;
goto block2;
block1:;
// line 1591
frost$core$Int64 $tmp5692 = (frost$core$Int64) {1591};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5693, $tmp5692);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5694 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5694));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

// line 1597
frost$core$Weak** $tmp5695 = &param1->owner;
frost$core$Weak* $tmp5696 = *$tmp5695;
frost$core$Object* $tmp5697 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5696);
org$frostlang$frostc$CCodeGenerator$writeImport$org$frostlang$frostc$ClassDecl(param0, ((org$frostlang$frostc$ClassDecl*) $tmp5697));
frost$core$Frost$unref$frost$core$Object$Q($tmp5697);
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
// line 1601
*(&local0) = ((frost$core$Error*) NULL);
// line 1602
frost$core$Int64 $tmp5698 = (frost$core$Int64) {0};
frost$collections$Array** $tmp5699 = &param1->locals;
frost$collections$Array* $tmp5700 = *$tmp5699;
ITable* $tmp5701 = ((frost$collections$CollectionView*) $tmp5700)->$class->itable;
while ($tmp5701->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5701 = $tmp5701->next;
}
$fn5703 $tmp5702 = $tmp5701->methods[0];
frost$core$Int64 $tmp5704 = $tmp5702(((frost$collections$CollectionView*) $tmp5700));
frost$core$Bit $tmp5705 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp5706 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp5698, $tmp5704, $tmp5705);
frost$core$Int64 $tmp5707 = $tmp5706.min;
*(&local1) = $tmp5707;
frost$core$Int64 $tmp5708 = $tmp5706.max;
frost$core$Bit $tmp5709 = $tmp5706.inclusive;
bool $tmp5710 = $tmp5709.value;
frost$core$Int64 $tmp5711 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp5712 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5711);
if ($tmp5710) goto block6; else goto block7;
block6:;
int64_t $tmp5713 = $tmp5707.value;
int64_t $tmp5714 = $tmp5708.value;
bool $tmp5715 = $tmp5713 <= $tmp5714;
frost$core$Bit $tmp5716 = (frost$core$Bit) {$tmp5715};
bool $tmp5717 = $tmp5716.value;
if ($tmp5717) goto block3; else goto block4;
block7:;
int64_t $tmp5718 = $tmp5707.value;
int64_t $tmp5719 = $tmp5708.value;
bool $tmp5720 = $tmp5718 < $tmp5719;
frost$core$Bit $tmp5721 = (frost$core$Bit) {$tmp5720};
bool $tmp5722 = $tmp5721.value;
if ($tmp5722) goto block3; else goto block4;
block3:;
// line 1603
frost$core$Int64 $tmp5723 = *(&local1);
frost$core$Int64$wrapper* $tmp5724;
$tmp5724 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5724->value = $tmp5723;
frost$core$String* $tmp5725 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s5726, ((frost$core$Object*) $tmp5724));
frost$core$String* $tmp5727 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5725, &$s5728);
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5727));
frost$core$String* $tmp5729 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5729));
*(&local2) = $tmp5727;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5727));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5724));
// line 1604
frost$collections$Array** $tmp5730 = &param1->locals;
frost$collections$Array* $tmp5731 = *$tmp5730;
frost$core$Int64 $tmp5732 = *(&local1);
frost$core$Object* $tmp5733 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5731, $tmp5732);
frost$core$String* $tmp5734 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp5733));
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5734));
frost$core$String* $tmp5735 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5735));
*(&local3) = $tmp5734;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5734));
frost$core$Frost$unref$frost$core$Object$Q($tmp5733);
// line 1605
frost$io$IndentedOutputStream** $tmp5736 = &param0->out;
frost$io$IndentedOutputStream* $tmp5737 = *$tmp5736;
frost$core$String* $tmp5738 = *(&local3);
frost$core$String* $tmp5739 = frost$core$String$get_asString$R$frost$core$String($tmp5738);
frost$core$String* $tmp5740 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5739, &$s5741);
frost$core$String* $tmp5742 = *(&local2);
frost$core$String* $tmp5743 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5740, $tmp5742);
frost$core$String* $tmp5744 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5743, &$s5745);
$fn5747 $tmp5746 = ($fn5747) ((frost$io$OutputStream*) $tmp5737)->$class->vtable[17];
frost$core$Error* $tmp5748 = $tmp5746(((frost$io$OutputStream*) $tmp5737), $tmp5744);
if ($tmp5748 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5748));
*(&local0) = $tmp5748;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5739));
frost$core$String* $tmp5749 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5749));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5750 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5750));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5739));
// line 1606
frost$core$Weak** $tmp5751 = &param0->compiler;
frost$core$Weak* $tmp5752 = *$tmp5751;
frost$core$Object* $tmp5753 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5752);
frost$collections$Array** $tmp5754 = &param1->locals;
frost$collections$Array* $tmp5755 = *$tmp5754;
frost$core$Int64 $tmp5756 = *(&local1);
frost$core$Object* $tmp5757 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5755, $tmp5756);
frost$core$Bit $tmp5758 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp5753), ((org$frostlang$frostc$Type*) $tmp5757));
bool $tmp5759 = $tmp5758.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp5757);
frost$core$Frost$unref$frost$core$Object$Q($tmp5753);
if ($tmp5759) goto block10; else goto block11;
block10:;
// line 1607
frost$io$IndentedOutputStream** $tmp5760 = &param0->out;
frost$io$IndentedOutputStream* $tmp5761 = *$tmp5760;
$fn5763 $tmp5762 = ($fn5763) ((frost$io$OutputStream*) $tmp5761)->$class->vtable[17];
frost$core$Error* $tmp5764 = $tmp5762(((frost$io$OutputStream*) $tmp5761), &$s5765);
if ($tmp5764 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5764));
*(&local0) = $tmp5764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5764));
frost$core$String* $tmp5766 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5766));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5767 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5767));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5764));
goto block11;
block11:;
// line 1609
frost$io$IndentedOutputStream** $tmp5768 = &param0->out;
frost$io$IndentedOutputStream* $tmp5769 = *$tmp5768;
$fn5771 $tmp5770 = ($fn5771) ((frost$io$OutputStream*) $tmp5769)->$class->vtable[19];
frost$core$Error* $tmp5772 = $tmp5770(((frost$io$OutputStream*) $tmp5769), &$s5773);
if ($tmp5772 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5772));
*(&local0) = $tmp5772;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5772));
frost$core$String* $tmp5774 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5774));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5775 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5775));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5772));
frost$core$String* $tmp5776 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5776));
*(&local3) = ((frost$core$String*) NULL);
frost$core$String* $tmp5777 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5777));
*(&local2) = ((frost$core$String*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp5778 = *(&local1);
int64_t $tmp5779 = $tmp5708.value;
int64_t $tmp5780 = $tmp5778.value;
int64_t $tmp5781 = $tmp5779 - $tmp5780;
frost$core$Int64 $tmp5782 = (frost$core$Int64) {$tmp5781};
frost$core$UInt64 $tmp5783 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5782);
if ($tmp5710) goto block17; else goto block18;
block17:;
uint64_t $tmp5784 = $tmp5783.value;
uint64_t $tmp5785 = $tmp5712.value;
bool $tmp5786 = $tmp5784 >= $tmp5785;
frost$core$Bit $tmp5787 = (frost$core$Bit) {$tmp5786};
bool $tmp5788 = $tmp5787.value;
if ($tmp5788) goto block16; else goto block4;
block18:;
uint64_t $tmp5789 = $tmp5783.value;
uint64_t $tmp5790 = $tmp5712.value;
bool $tmp5791 = $tmp5789 > $tmp5790;
frost$core$Bit $tmp5792 = (frost$core$Bit) {$tmp5791};
bool $tmp5793 = $tmp5792.value;
if ($tmp5793) goto block16; else goto block4;
block16:;
int64_t $tmp5794 = $tmp5778.value;
int64_t $tmp5795 = $tmp5711.value;
int64_t $tmp5796 = $tmp5794 + $tmp5795;
frost$core$Int64 $tmp5797 = (frost$core$Int64) {$tmp5796};
*(&local1) = $tmp5797;
goto block3;
block4:;
// line 1611
frost$core$Int64 $tmp5798 = (frost$core$Int64) {0};
frost$collections$Array** $tmp5799 = &param1->blocks;
frost$collections$Array* $tmp5800 = *$tmp5799;
ITable* $tmp5801 = ((frost$collections$CollectionView*) $tmp5800)->$class->itable;
while ($tmp5801->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5801 = $tmp5801->next;
}
$fn5803 $tmp5802 = $tmp5801->methods[0];
frost$core$Int64 $tmp5804 = $tmp5802(((frost$collections$CollectionView*) $tmp5800));
frost$core$Bit $tmp5805 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp5806 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp5798, $tmp5804, $tmp5805);
frost$core$Int64 $tmp5807 = $tmp5806.min;
*(&local4) = $tmp5807;
frost$core$Int64 $tmp5808 = $tmp5806.max;
frost$core$Bit $tmp5809 = $tmp5806.inclusive;
bool $tmp5810 = $tmp5809.value;
frost$core$Int64 $tmp5811 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp5812 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5811);
if ($tmp5810) goto block22; else goto block23;
block22:;
int64_t $tmp5813 = $tmp5807.value;
int64_t $tmp5814 = $tmp5808.value;
bool $tmp5815 = $tmp5813 <= $tmp5814;
frost$core$Bit $tmp5816 = (frost$core$Bit) {$tmp5815};
bool $tmp5817 = $tmp5816.value;
if ($tmp5817) goto block19; else goto block20;
block23:;
int64_t $tmp5818 = $tmp5807.value;
int64_t $tmp5819 = $tmp5808.value;
bool $tmp5820 = $tmp5818 < $tmp5819;
frost$core$Bit $tmp5821 = (frost$core$Bit) {$tmp5820};
bool $tmp5822 = $tmp5821.value;
if ($tmp5822) goto block19; else goto block20;
block19:;
// line 1612
frost$collections$Array** $tmp5823 = &param1->blocks;
frost$collections$Array* $tmp5824 = *$tmp5823;
frost$core$Int64 $tmp5825 = *(&local4);
frost$core$Object* $tmp5826 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5824, $tmp5825);
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Block*) $tmp5826)));
org$frostlang$frostc$IR$Block* $tmp5827 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5827));
*(&local5) = ((org$frostlang$frostc$IR$Block*) $tmp5826);
frost$core$Frost$unref$frost$core$Object$Q($tmp5826);
// line 1613
frost$core$Int64 $tmp5828 = *(&local4);
frost$core$Int64 $tmp5829 = (frost$core$Int64) {0};
int64_t $tmp5830 = $tmp5828.value;
int64_t $tmp5831 = $tmp5829.value;
bool $tmp5832 = $tmp5830 != $tmp5831;
frost$core$Bit $tmp5833 = (frost$core$Bit) {$tmp5832};
bool $tmp5834 = $tmp5833.value;
if ($tmp5834) goto block24; else goto block26;
block24:;
// line 1614
org$frostlang$frostc$IR$Block* $tmp5835 = *(&local5);
org$frostlang$frostc$IR$Block$ID* $tmp5836 = &$tmp5835->id;
org$frostlang$frostc$IR$Block$ID $tmp5837 = *$tmp5836;
frost$core$String* $tmp5838 = org$frostlang$frostc$IR$Block$ID$get_asString$R$frost$core$String($tmp5837);
frost$core$String* $tmp5839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5838, &$s5840);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5839));
frost$core$String** $tmp5841 = &param0->currentBlock;
frost$core$String* $tmp5842 = *$tmp5841;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5842));
frost$core$String** $tmp5843 = &param0->currentBlock;
*$tmp5843 = $tmp5839;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5838));
// line 1615
frost$io$IndentedOutputStream** $tmp5844 = &param0->out;
frost$io$IndentedOutputStream* $tmp5845 = *$tmp5844;
frost$core$String** $tmp5846 = &param0->currentBlock;
frost$core$String* $tmp5847 = *$tmp5846;
frost$core$String* $tmp5848 = frost$core$String$get_asString$R$frost$core$String($tmp5847);
frost$core$String* $tmp5849 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5848, &$s5850);
$fn5852 $tmp5851 = ($fn5852) ((frost$io$OutputStream*) $tmp5845)->$class->vtable[19];
frost$core$Error* $tmp5853 = $tmp5851(((frost$io$OutputStream*) $tmp5845), $tmp5849);
if ($tmp5853 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5853));
*(&local0) = $tmp5853;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5848));
org$frostlang$frostc$IR$Block* $tmp5854 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5854));
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5853));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5849));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5848));
goto block25;
block26:;
// line 1
// line 1618
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5855));
frost$core$String** $tmp5856 = &param0->currentBlock;
frost$core$String* $tmp5857 = *$tmp5856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5857));
frost$core$String** $tmp5858 = &param0->currentBlock;
*$tmp5858 = &$s5859;
goto block25;
block25:;
// line 1620
frost$core$Int64 $tmp5860 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block* $tmp5861 = *(&local5);
frost$collections$Array** $tmp5862 = &$tmp5861->statements;
frost$collections$Array* $tmp5863 = *$tmp5862;
ITable* $tmp5864 = ((frost$collections$CollectionView*) $tmp5863)->$class->itable;
while ($tmp5864->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5864 = $tmp5864->next;
}
$fn5866 $tmp5865 = $tmp5864->methods[0];
frost$core$Int64 $tmp5867 = $tmp5865(((frost$collections$CollectionView*) $tmp5863));
frost$core$Bit $tmp5868 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp5869 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp5860, $tmp5867, $tmp5868);
frost$core$Int64 $tmp5870 = $tmp5869.min;
*(&local6) = $tmp5870;
frost$core$Int64 $tmp5871 = $tmp5869.max;
frost$core$Bit $tmp5872 = $tmp5869.inclusive;
bool $tmp5873 = $tmp5872.value;
frost$core$Int64 $tmp5874 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp5875 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5874);
if ($tmp5873) goto block32; else goto block33;
block32:;
int64_t $tmp5876 = $tmp5870.value;
int64_t $tmp5877 = $tmp5871.value;
bool $tmp5878 = $tmp5876 <= $tmp5877;
frost$core$Bit $tmp5879 = (frost$core$Bit) {$tmp5878};
bool $tmp5880 = $tmp5879.value;
if ($tmp5880) goto block29; else goto block30;
block33:;
int64_t $tmp5881 = $tmp5870.value;
int64_t $tmp5882 = $tmp5871.value;
bool $tmp5883 = $tmp5881 < $tmp5882;
frost$core$Bit $tmp5884 = (frost$core$Bit) {$tmp5883};
bool $tmp5885 = $tmp5884.value;
if ($tmp5885) goto block29; else goto block30;
block29:;
// line 1621
org$frostlang$frostc$IR$Block* $tmp5886 = *(&local5);
frost$collections$Array** $tmp5887 = &$tmp5886->ids;
frost$collections$Array* $tmp5888 = *$tmp5887;
frost$core$Int64 $tmp5889 = *(&local6);
frost$core$Object* $tmp5890 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5888, $tmp5889);
org$frostlang$frostc$IR$Block* $tmp5891 = *(&local5);
frost$collections$Array** $tmp5892 = &$tmp5891->statements;
frost$collections$Array* $tmp5893 = *$tmp5892;
frost$core$Int64 $tmp5894 = *(&local6);
frost$core$Object* $tmp5895 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp5893, $tmp5894);
org$frostlang$frostc$CCodeGenerator$writeStatement$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Statement(param0, ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp5890)->value, ((org$frostlang$frostc$IR$Statement*) $tmp5895));
frost$core$Frost$unref$frost$core$Object$Q($tmp5895);
frost$core$Frost$unref$frost$core$Object$Q($tmp5890);
goto block31;
block31:;
frost$core$Int64 $tmp5896 = *(&local6);
int64_t $tmp5897 = $tmp5871.value;
int64_t $tmp5898 = $tmp5896.value;
int64_t $tmp5899 = $tmp5897 - $tmp5898;
frost$core$Int64 $tmp5900 = (frost$core$Int64) {$tmp5899};
frost$core$UInt64 $tmp5901 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5900);
if ($tmp5873) goto block35; else goto block36;
block35:;
uint64_t $tmp5902 = $tmp5901.value;
uint64_t $tmp5903 = $tmp5875.value;
bool $tmp5904 = $tmp5902 >= $tmp5903;
frost$core$Bit $tmp5905 = (frost$core$Bit) {$tmp5904};
bool $tmp5906 = $tmp5905.value;
if ($tmp5906) goto block34; else goto block30;
block36:;
uint64_t $tmp5907 = $tmp5901.value;
uint64_t $tmp5908 = $tmp5875.value;
bool $tmp5909 = $tmp5907 > $tmp5908;
frost$core$Bit $tmp5910 = (frost$core$Bit) {$tmp5909};
bool $tmp5911 = $tmp5910.value;
if ($tmp5911) goto block34; else goto block30;
block34:;
int64_t $tmp5912 = $tmp5896.value;
int64_t $tmp5913 = $tmp5874.value;
int64_t $tmp5914 = $tmp5912 + $tmp5913;
frost$core$Int64 $tmp5915 = (frost$core$Int64) {$tmp5914};
*(&local6) = $tmp5915;
goto block29;
block30:;
org$frostlang$frostc$IR$Block* $tmp5916 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5916));
*(&local5) = ((org$frostlang$frostc$IR$Block*) NULL);
goto block21;
block21:;
frost$core$Int64 $tmp5917 = *(&local4);
int64_t $tmp5918 = $tmp5808.value;
int64_t $tmp5919 = $tmp5917.value;
int64_t $tmp5920 = $tmp5918 - $tmp5919;
frost$core$Int64 $tmp5921 = (frost$core$Int64) {$tmp5920};
frost$core$UInt64 $tmp5922 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp5921);
if ($tmp5810) goto block38; else goto block39;
block38:;
uint64_t $tmp5923 = $tmp5922.value;
uint64_t $tmp5924 = $tmp5812.value;
bool $tmp5925 = $tmp5923 >= $tmp5924;
frost$core$Bit $tmp5926 = (frost$core$Bit) {$tmp5925};
bool $tmp5927 = $tmp5926.value;
if ($tmp5927) goto block37; else goto block20;
block39:;
uint64_t $tmp5928 = $tmp5922.value;
uint64_t $tmp5929 = $tmp5812.value;
bool $tmp5930 = $tmp5928 > $tmp5929;
frost$core$Bit $tmp5931 = (frost$core$Bit) {$tmp5930};
bool $tmp5932 = $tmp5931.value;
if ($tmp5932) goto block37; else goto block20;
block37:;
int64_t $tmp5933 = $tmp5917.value;
int64_t $tmp5934 = $tmp5811.value;
int64_t $tmp5935 = $tmp5933 + $tmp5934;
frost$core$Int64 $tmp5936 = (frost$core$Int64) {$tmp5935};
*(&local4) = $tmp5936;
goto block19;
block20:;
goto block2;
block1:;
// line 1626
frost$core$Int64 $tmp5937 = (frost$core$Int64) {1626};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s5938, $tmp5937);
abort(); // unreachable
block2:;
frost$core$Error* $tmp5939 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5939));
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
frost$io$IndentedOutputStream** $tmp5940 = &param0->out;
frost$io$IndentedOutputStream* $tmp5941 = *$tmp5940;
// line 1633
*(&local0) = ((frost$core$Error*) NULL);
// line 1634
frost$io$IndentedOutputStream** $tmp5942 = &param0->out;
frost$io$IndentedOutputStream* $tmp5943 = *$tmp5942;
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5943));
frost$io$IndentedOutputStream* $tmp5944 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5944));
*(&local1) = $tmp5943;
// line 1635
frost$io$IndentedOutputStream** $tmp5945 = &param0->methods;
frost$io$IndentedOutputStream* $tmp5946 = *$tmp5945;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5946));
frost$io$IndentedOutputStream** $tmp5947 = &param0->out;
frost$io$IndentedOutputStream* $tmp5948 = *$tmp5947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5948));
frost$io$IndentedOutputStream** $tmp5949 = &param0->out;
*$tmp5949 = $tmp5946;
// line 1636
frost$io$MemoryOutputStream** $tmp5950 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp5951 = *$tmp5950;
frost$io$MemoryOutputStream$clear($tmp5951);
// line 1637
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR** $tmp5952 = &param0->ir;
org$frostlang$frostc$IR* $tmp5953 = *$tmp5952;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5953));
org$frostlang$frostc$IR** $tmp5954 = &param0->ir;
*$tmp5954 = param2;
// line 1638
frost$io$IndentedOutputStream** $tmp5955 = &param0->out;
frost$io$IndentedOutputStream* $tmp5956 = *$tmp5955;
org$frostlang$frostc$Type** $tmp5957 = &param1->returnType;
org$frostlang$frostc$Type* $tmp5958 = *$tmp5957;
frost$core$String* $tmp5959 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp5958);
frost$core$String* $tmp5960 = frost$core$String$get_asString$R$frost$core$String($tmp5959);
frost$core$String* $tmp5961 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5960, &$s5962);
frost$core$String* $tmp5963 = org$frostlang$frostc$CCodeGenerator$getName$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp5964 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5961, $tmp5963);
frost$core$String* $tmp5965 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5964, &$s5966);
$fn5968 $tmp5967 = ($fn5968) ((frost$io$OutputStream*) $tmp5956)->$class->vtable[17];
frost$core$Error* $tmp5969 = $tmp5967(((frost$io$OutputStream*) $tmp5956), $tmp5965);
if ($tmp5969 == NULL) goto block6; else goto block7;
block7:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5969));
*(&local0) = $tmp5969;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5965));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5959));
frost$io$IndentedOutputStream* $tmp5970 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5970));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5965));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5961));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5960));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5959));
// line 1639
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s5971));
frost$core$String* $tmp5972 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5972));
*(&local2) = &$s5973;
// line 1640
frost$core$Int64 $tmp5974 = (frost$core$Int64) {0};
*(&local3) = $tmp5974;
// line 1641
frost$core$Weak** $tmp5975 = &param0->compiler;
frost$core$Weak* $tmp5976 = *$tmp5975;
frost$core$Object* $tmp5977 = frost$core$Weak$get$R$frost$core$Weak$T($tmp5976);
frost$core$Bit $tmp5978 = org$frostlang$frostc$Compiler$hasSelfParam$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp5977), param1);
bool $tmp5979 = $tmp5978.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp5977);
if ($tmp5979) goto block8; else goto block9;
block8:;
// line 1642
frost$io$IndentedOutputStream** $tmp5980 = &param0->out;
frost$io$IndentedOutputStream* $tmp5981 = *$tmp5980;
frost$core$String* $tmp5982 = org$frostlang$frostc$CCodeGenerator$selfType$org$frostlang$frostc$MethodDecl$R$frost$core$String(param0, param1);
frost$core$String* $tmp5983 = frost$core$String$get_asString$R$frost$core$String($tmp5982);
frost$core$String* $tmp5984 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5983, &$s5985);
frost$core$Int64 $tmp5986 = *(&local3);
frost$core$Int64$wrapper* $tmp5987;
$tmp5987 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp5987->value = $tmp5986;
frost$core$String* $tmp5988 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp5984, ((frost$core$Object*) $tmp5987));
frost$core$String* $tmp5989 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp5988, &$s5990);
$fn5992 $tmp5991 = ($fn5992) ((frost$io$OutputStream*) $tmp5981)->$class->vtable[17];
frost$core$Error* $tmp5993 = $tmp5991(((frost$io$OutputStream*) $tmp5981), $tmp5989);
if ($tmp5993 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5993));
*(&local0) = $tmp5993;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5982));
frost$core$String* $tmp5994 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5994));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp5995 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5995));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5993));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5987));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5982));
// line 1643
frost$core$Int64 $tmp5996 = *(&local3);
frost$core$Int64 $tmp5997 = (frost$core$Int64) {1};
int64_t $tmp5998 = $tmp5996.value;
int64_t $tmp5999 = $tmp5997.value;
int64_t $tmp6000 = $tmp5998 + $tmp5999;
frost$core$Int64 $tmp6001 = (frost$core$Int64) {$tmp6000};
*(&local3) = $tmp6001;
// line 1644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6002));
frost$core$String* $tmp6003 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6003));
*(&local2) = &$s6004;
goto block9;
block9:;
// line 1646
frost$collections$Array** $tmp6005 = &param1->parameters;
frost$collections$Array* $tmp6006 = *$tmp6005;
ITable* $tmp6007 = ((frost$collections$Iterable*) $tmp6006)->$class->itable;
while ($tmp6007->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp6007 = $tmp6007->next;
}
$fn6009 $tmp6008 = $tmp6007->methods[0];
frost$collections$Iterator* $tmp6010 = $tmp6008(((frost$collections$Iterable*) $tmp6006));
goto block12;
block12:;
ITable* $tmp6011 = $tmp6010->$class->itable;
while ($tmp6011->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6011 = $tmp6011->next;
}
$fn6013 $tmp6012 = $tmp6011->methods[0];
frost$core$Bit $tmp6014 = $tmp6012($tmp6010);
bool $tmp6015 = $tmp6014.value;
if ($tmp6015) goto block14; else goto block13;
block13:;
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp6016 = $tmp6010->$class->itable;
while ($tmp6016->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6016 = $tmp6016->next;
}
$fn6018 $tmp6017 = $tmp6016->methods[1];
frost$core$Object* $tmp6019 = $tmp6017($tmp6010);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp6019)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp6020 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6020));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp6019);
// line 1647
frost$io$IndentedOutputStream** $tmp6021 = &param0->out;
frost$io$IndentedOutputStream* $tmp6022 = *$tmp6021;
frost$core$String* $tmp6023 = *(&local2);
frost$core$String* $tmp6024 = frost$core$String$get_asString$R$frost$core$String($tmp6023);
frost$core$String* $tmp6025 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6024, &$s6026);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6027 = *(&local4);
org$frostlang$frostc$Type** $tmp6028 = &$tmp6027->type;
org$frostlang$frostc$Type* $tmp6029 = *$tmp6028;
frost$core$String* $tmp6030 = org$frostlang$frostc$CCodeGenerator$cType$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp6029);
frost$core$String* $tmp6031 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6025, $tmp6030);
frost$core$String* $tmp6032 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6031, &$s6033);
frost$core$Int64 $tmp6034 = *(&local3);
frost$core$Int64$wrapper* $tmp6035;
$tmp6035 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp6035->value = $tmp6034;
frost$core$String* $tmp6036 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp6032, ((frost$core$Object*) $tmp6035));
frost$core$String* $tmp6037 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6036, &$s6038);
$fn6040 $tmp6039 = ($fn6040) ((frost$io$OutputStream*) $tmp6022)->$class->vtable[17];
frost$core$Error* $tmp6041 = $tmp6039(((frost$io$OutputStream*) $tmp6022), $tmp6037);
if ($tmp6041 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6041));
*(&local0) = $tmp6041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6024));
frost$core$Frost$unref$frost$core$Object$Q($tmp6019);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6042 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6042));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6010));
frost$core$String* $tmp6043 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6043));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6044 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6044));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6041));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6032));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6025));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6024));
// line 1648
frost$core$Int64 $tmp6045 = *(&local3);
frost$core$Int64 $tmp6046 = (frost$core$Int64) {1};
int64_t $tmp6047 = $tmp6045.value;
int64_t $tmp6048 = $tmp6046.value;
int64_t $tmp6049 = $tmp6047 + $tmp6048;
frost$core$Int64 $tmp6050 = (frost$core$Int64) {$tmp6049};
*(&local3) = $tmp6050;
// line 1649
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s6051));
frost$core$String* $tmp6052 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6052));
*(&local2) = &$s6053;
frost$core$Frost$unref$frost$core$Object$Q($tmp6019);
org$frostlang$frostc$MethodDecl$Parameter* $tmp6054 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6054));
*(&local4) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6010));
// line 1651
frost$io$IndentedOutputStream** $tmp6055 = &param0->out;
frost$io$IndentedOutputStream* $tmp6056 = *$tmp6055;
$fn6058 $tmp6057 = ($fn6058) ((frost$io$OutputStream*) $tmp6056)->$class->vtable[19];
frost$core$Error* $tmp6059 = $tmp6057(((frost$io$OutputStream*) $tmp6056), &$s6060);
if ($tmp6059 == NULL) goto block17; else goto block18;
block18:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6059));
*(&local0) = $tmp6059;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6059));
frost$core$String* $tmp6061 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6061));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6062 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6062));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block17:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6059));
// line 1652
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
frost$io$MemoryOutputStream* $tmp6063 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init($tmp6063);
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6063));
frost$io$MemoryOutputStream* $tmp6064 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6064));
*(&local5) = $tmp6063;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6063));
// line 1653
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp6065 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$MemoryOutputStream* $tmp6066 = *(&local5);
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp6065, ((frost$io$OutputStream*) $tmp6066));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6065));
frost$io$IndentedOutputStream** $tmp6067 = &param0->out;
frost$io$IndentedOutputStream* $tmp6068 = *$tmp6067;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6068));
frost$io$IndentedOutputStream** $tmp6069 = &param0->out;
*$tmp6069 = $tmp6065;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6065));
// line 1654
org$frostlang$frostc$CCodeGenerator$writeIR$org$frostlang$frostc$IR(param0, param2);
// line 1655
frost$io$IndentedOutputStream** $tmp6070 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6071 = *$tmp6070;
frost$io$MemoryOutputStream** $tmp6072 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6073 = *$tmp6072;
$fn6075 $tmp6074 = ($fn6075) ((frost$io$OutputStream*) $tmp6071)->$class->vtable[20];
frost$core$Error* $tmp6076 = $tmp6074(((frost$io$OutputStream*) $tmp6071), ((frost$core$Object*) $tmp6073));
if ($tmp6076 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6076));
*(&local0) = $tmp6076;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6076));
frost$io$MemoryOutputStream* $tmp6077 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6077));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6078 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6078));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6079 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6079));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6076));
// line 1656
frost$io$IndentedOutputStream** $tmp6080 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6081 = *$tmp6080;
frost$io$MemoryOutputStream* $tmp6082 = *(&local5);
$fn6084 $tmp6083 = ($fn6084) ((frost$io$OutputStream*) $tmp6081)->$class->vtable[20];
frost$core$Error* $tmp6085 = $tmp6083(((frost$io$OutputStream*) $tmp6081), ((frost$core$Object*) $tmp6082));
if ($tmp6085 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6085));
*(&local0) = $tmp6085;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6085));
frost$io$MemoryOutputStream* $tmp6086 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6086));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6087 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6087));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6088 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6088));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6085));
// line 1657
frost$io$IndentedOutputStream** $tmp6089 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6090 = *$tmp6089;
$fn6092 $tmp6091 = ($fn6092) ((frost$io$OutputStream*) $tmp6090)->$class->vtable[19];
frost$core$Error* $tmp6093 = $tmp6091(((frost$io$OutputStream*) $tmp6090), &$s6094);
if ($tmp6093 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6093));
*(&local0) = $tmp6093;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6093));
frost$io$MemoryOutputStream* $tmp6095 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6095));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6096 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6096));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6097 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6097));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block4;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6093));
// line 1658
frost$io$IndentedOutputStream* $tmp6098 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6098));
frost$io$IndentedOutputStream** $tmp6099 = &param0->out;
frost$io$IndentedOutputStream* $tmp6100 = *$tmp6099;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6100));
frost$io$IndentedOutputStream** $tmp6101 = &param0->out;
*$tmp6101 = $tmp6098;
frost$io$MemoryOutputStream* $tmp6102 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6102));
*(&local5) = ((frost$io$MemoryOutputStream*) NULL);
frost$core$String* $tmp6103 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6103));
*(&local2) = ((frost$core$String*) NULL);
frost$io$IndentedOutputStream* $tmp6104 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6104));
*(&local1) = ((frost$io$IndentedOutputStream*) NULL);
goto block5;
block4:;
// line 1661
frost$core$Int64 $tmp6105 = (frost$core$Int64) {1661};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6106, $tmp6105);
abort(); // unreachable
block5:;
frost$core$Error* $tmp6107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6107));
*(&local0) = ((frost$core$Error*) NULL);
goto block1;
block1:;
frost$io$IndentedOutputStream** $tmp6108 = &param0->out;
frost$io$IndentedOutputStream* $tmp6109 = *$tmp6108;
bool $tmp6110 = $tmp6109 == $tmp5941;
frost$core$Bit $tmp6111 = frost$core$Bit$init$builtin_bit($tmp6110);
bool $tmp6112 = $tmp6111.value;
if ($tmp6112) goto block2; else goto block3;
block2:;
return;
block3:;
frost$core$Int64 $tmp6113 = (frost$core$Int64) {1632};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s6114, $tmp6113, &$s6115);
abort(); // unreachable

}
void org$frostlang$frostc$CCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
// line 1667
*(&local0) = ((frost$core$Error*) NULL);
// line 1668
org$frostlang$frostc$ClassDecl** $tmp6116 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6117 = *$tmp6116;
frost$core$Bit $tmp6118 = frost$core$Bit$init$builtin_bit($tmp6117 == NULL);
bool $tmp6119 = $tmp6118.value;
if ($tmp6119) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp6120 = (frost$core$Int64) {1668};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s6121, $tmp6120);
abort(); // unreachable
block3:;
// line 1669
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$ClassDecl** $tmp6122 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6123 = *$tmp6122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6123));
org$frostlang$frostc$ClassDecl** $tmp6124 = &param0->currentClass;
*$tmp6124 = param1;
// line 1670
frost$collections$HashSet** $tmp6125 = &param0->imports;
frost$collections$HashSet* $tmp6126 = *$tmp6125;
frost$collections$HashSet$clear($tmp6126);
// line 1671
frost$io$MemoryOutputStream** $tmp6127 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6128 = *$tmp6127;
frost$io$MemoryOutputStream$clear($tmp6128);
// line 1672
frost$io$MemoryOutputStream** $tmp6129 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp6130 = *$tmp6129;
frost$io$MemoryOutputStream$clear($tmp6130);
// line 1673
frost$io$MemoryOutputStream** $tmp6131 = &param0->types;
frost$io$MemoryOutputStream* $tmp6132 = *$tmp6131;
frost$io$MemoryOutputStream$clear($tmp6132);
// line 1674
frost$io$MemoryOutputStream** $tmp6133 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6134 = *$tmp6133;
frost$io$MemoryOutputStream$clear($tmp6134);
// line 1675
frost$io$MemoryOutputStream** $tmp6135 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6136 = *$tmp6135;
frost$io$MemoryOutputStream$clear($tmp6136);
// line 1676
frost$collections$HashSet** $tmp6137 = &param0->declared;
frost$collections$HashSet* $tmp6138 = *$tmp6137;
frost$collections$HashSet$clear($tmp6138);
// line 1677
frost$collections$HashSet** $tmp6139 = &param0->writtenTypes;
frost$collections$HashSet* $tmp6140 = *$tmp6139;
frost$collections$HashSet$clear($tmp6140);
// line 1678
frost$collections$HashSet** $tmp6141 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp6142 = *$tmp6141;
frost$collections$HashSet$clear($tmp6142);
// line 1679
frost$collections$HashMap** $tmp6143 = &param0->classConstants;
frost$collections$HashMap* $tmp6144 = *$tmp6143;
frost$collections$HashMap$clear($tmp6144);
// line 1680
frost$collections$IdentityMap** $tmp6145 = &param0->variableNames;
frost$collections$IdentityMap* $tmp6146 = *$tmp6145;
frost$collections$IdentityMap$clear($tmp6146);
// line 1681
frost$core$Int64 $tmp6147 = (frost$core$Int64) {0};
frost$core$Int64* $tmp6148 = &param0->varCount;
*$tmp6148 = $tmp6147;
// line 1682
frost$collections$IdentityMap** $tmp6149 = &param0->methodShims;
frost$collections$IdentityMap* $tmp6150 = *$tmp6149;
frost$collections$IdentityMap$clear($tmp6150);
// line 1683
frost$core$Weak** $tmp6151 = &param0->hCodeGen;
frost$core$Weak* $tmp6152 = *$tmp6151;
frost$core$Object* $tmp6153 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6152);
frost$io$File* $tmp6154 = org$frostlang$frostc$HCodeGenerator$getPath$org$frostlang$frostc$ClassDecl$frost$core$String$R$frost$io$File(((org$frostlang$frostc$HCodeGenerator*) $tmp6153), param1, &$s6155);
*(&local1) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6154));
frost$io$File* $tmp6156 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6156));
*(&local1) = $tmp6154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6154));
frost$core$Frost$unref$frost$core$Object$Q($tmp6153);
// line 1684
frost$io$File* $tmp6157 = *(&local1);
frost$io$File* $tmp6158 = frost$io$File$get_parent$R$frost$io$File$Q($tmp6157);
frost$core$Error* $tmp6159 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp6158);
if ($tmp6159 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6159));
*(&local0) = $tmp6159;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6158));
frost$io$File* $tmp6160 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6160));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6158));
// line 1685
FROST_ASSERT(72 == sizeof(frost$io$IndentedOutputStream));
frost$io$IndentedOutputStream* $tmp6161 = (frost$io$IndentedOutputStream*) frostObjectAlloc(72, (frost$core$Class*) &frost$io$IndentedOutputStream$class);
frost$io$File* $tmp6162 = *(&local1);
frost$core$Maybe* $tmp6163 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp6162);
frost$core$Int64* $tmp6164 = &$tmp6163->$rawValue;
frost$core$Int64 $tmp6165 = *$tmp6164;
int64_t $tmp6166 = $tmp6165.value;
bool $tmp6167 = $tmp6166 == 0;
if ($tmp6167) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp6168 = (frost$core$Error**) ($tmp6163->$data + 0);
frost$core$Error* $tmp6169 = *$tmp6168;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6169));
*(&local0) = $tmp6169;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6161));
frost$io$File* $tmp6170 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6170));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block7:;
frost$core$Object** $tmp6171 = (frost$core$Object**) ($tmp6163->$data + 0);
frost$core$Object* $tmp6172 = *$tmp6171;
frost$io$IndentedOutputStream$init$frost$io$OutputStream($tmp6161, ((frost$io$OutputStream*) $tmp6172));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6161));
frost$io$IndentedOutputStream** $tmp6173 = &param0->out;
frost$io$IndentedOutputStream* $tmp6174 = *$tmp6173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6174));
frost$io$IndentedOutputStream** $tmp6175 = &param0->out;
*$tmp6175 = $tmp6161;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6161));
// line 1686
frost$io$IndentedOutputStream** $tmp6176 = &param0->out;
frost$io$IndentedOutputStream* $tmp6177 = *$tmp6176;
$fn6179 $tmp6178 = ($fn6179) ((frost$io$OutputStream*) $tmp6177)->$class->vtable[22];
frost$core$Error* $tmp6180 = $tmp6178(((frost$io$OutputStream*) $tmp6177));
if ($tmp6180 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6180));
*(&local0) = $tmp6180;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6180));
frost$io$File* $tmp6181 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6181));
*(&local1) = ((frost$io$File*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6180));
// line 1687
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp6182 = org$frostlang$frostc$CCodeGenerator$getClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6182));
// line 1688
frost$core$Weak** $tmp6183 = &param0->compiler;
frost$core$Weak* $tmp6184 = *$tmp6183;
frost$core$Object* $tmp6185 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6184);
frost$core$Bit $tmp6186 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp6185), param1);
bool $tmp6187 = $tmp6186.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp6185);
if ($tmp6187) goto block11; else goto block12;
block11:;
// line 1689
org$frostlang$frostc$CCodeGenerator$ClassConstant* $tmp6188 = org$frostlang$frostc$CCodeGenerator$getWrapperClassConstant$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$CCodeGenerator$ClassConstant(param0, param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6188));
goto block12;
block12:;
frost$io$File* $tmp6189 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6189));
*(&local1) = ((frost$io$File*) NULL);
goto block2;
block1:;
// line 1693
frost$core$Weak** $tmp6190 = &param0->compiler;
frost$core$Weak* $tmp6191 = *$tmp6190;
frost$core$Object* $tmp6192 = frost$core$Weak$get$R$frost$core$Weak$T($tmp6191);
org$frostlang$frostc$Position* $tmp6193 = &param1->position;
org$frostlang$frostc$Position $tmp6194 = *$tmp6193;
frost$core$Error* $tmp6195 = *(&local0);
frost$core$String** $tmp6196 = &$tmp6195->message;
frost$core$String* $tmp6197 = *$tmp6196;
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(((org$frostlang$frostc$Compiler*) $tmp6192), $tmp6194, $tmp6197);
frost$core$Frost$unref$frost$core$Object$Q($tmp6192);
goto block2;
block2:;
frost$core$Error* $tmp6198 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6198));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$CCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 1699
org$frostlang$frostc$CCodeGenerator$finish(param0);
// line 1700
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) NULL)));
org$frostlang$frostc$ClassDecl** $tmp6199 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6200 = *$tmp6199;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6200));
org$frostlang$frostc$ClassDecl** $tmp6201 = &param0->currentClass;
*$tmp6201 = ((org$frostlang$frostc$ClassDecl*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$finish(org$frostlang$frostc$CCodeGenerator* param0) {

frost$core$Error* local0 = NULL;
// line 1705
*(&local0) = ((frost$core$Error*) NULL);
// line 1706
frost$io$IndentedOutputStream** $tmp6202 = &param0->out;
frost$io$IndentedOutputStream* $tmp6203 = *$tmp6202;
frost$io$MemoryOutputStream** $tmp6204 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6205 = *$tmp6204;
$fn6207 $tmp6206 = ($fn6207) ((frost$io$OutputStream*) $tmp6203)->$class->vtable[20];
frost$core$Error* $tmp6208 = $tmp6206(((frost$io$OutputStream*) $tmp6203), ((frost$core$Object*) $tmp6205));
if ($tmp6208 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6208));
*(&local0) = $tmp6208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6208));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6208));
// line 1707
frost$io$MemoryOutputStream** $tmp6209 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6210 = *$tmp6209;
frost$io$MemoryOutputStream$clear($tmp6210);
// line 1708
frost$io$IndentedOutputStream** $tmp6211 = &param0->out;
frost$io$IndentedOutputStream* $tmp6212 = *$tmp6211;
frost$io$MemoryOutputStream** $tmp6213 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6214 = *$tmp6213;
$fn6216 $tmp6215 = ($fn6216) ((frost$io$OutputStream*) $tmp6212)->$class->vtable[20];
frost$core$Error* $tmp6217 = $tmp6215(((frost$io$OutputStream*) $tmp6212), ((frost$core$Object*) $tmp6214));
if ($tmp6217 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6217));
*(&local0) = $tmp6217;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6217));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6217));
// line 1709
frost$io$MemoryOutputStream** $tmp6218 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6219 = *$tmp6218;
frost$io$MemoryOutputStream$clear($tmp6219);
// line 1710
frost$io$IndentedOutputStream** $tmp6220 = &param0->out;
frost$io$IndentedOutputStream* $tmp6221 = *$tmp6220;
frost$io$MemoryOutputStream** $tmp6222 = &param0->types;
frost$io$MemoryOutputStream* $tmp6223 = *$tmp6222;
$fn6225 $tmp6224 = ($fn6225) ((frost$io$OutputStream*) $tmp6221)->$class->vtable[20];
frost$core$Error* $tmp6226 = $tmp6224(((frost$io$OutputStream*) $tmp6221), ((frost$core$Object*) $tmp6223));
if ($tmp6226 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6226));
*(&local0) = $tmp6226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6226));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6226));
// line 1711
frost$io$MemoryOutputStream** $tmp6227 = &param0->types;
frost$io$MemoryOutputStream* $tmp6228 = *$tmp6227;
frost$io$MemoryOutputStream$clear($tmp6228);
// line 1712
frost$io$IndentedOutputStream** $tmp6229 = &param0->out;
frost$io$IndentedOutputStream* $tmp6230 = *$tmp6229;
frost$io$MemoryOutputStream** $tmp6231 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6232 = *$tmp6231;
$fn6234 $tmp6233 = ($fn6234) ((frost$io$OutputStream*) $tmp6230)->$class->vtable[20];
frost$core$Error* $tmp6235 = $tmp6233(((frost$io$OutputStream*) $tmp6230), ((frost$core$Object*) $tmp6232));
if ($tmp6235 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6235));
*(&local0) = $tmp6235;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6235));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6235));
// line 1713
frost$io$MemoryOutputStream** $tmp6236 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6237 = *$tmp6236;
frost$io$MemoryOutputStream$clear($tmp6237);
// line 1714
frost$io$IndentedOutputStream** $tmp6238 = &param0->out;
frost$io$IndentedOutputStream* $tmp6239 = *$tmp6238;
frost$io$MemoryOutputStream** $tmp6240 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6241 = *$tmp6240;
$fn6243 $tmp6242 = ($fn6243) ((frost$io$OutputStream*) $tmp6239)->$class->vtable[20];
frost$core$Error* $tmp6244 = $tmp6242(((frost$io$OutputStream*) $tmp6239), ((frost$core$Object*) $tmp6241));
if ($tmp6244 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6244));
*(&local0) = $tmp6244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6244));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6244));
// line 1715
frost$io$MemoryOutputStream** $tmp6245 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6246 = *$tmp6245;
frost$io$MemoryOutputStream$clear($tmp6246);
goto block2;
block1:;
// line 1718
frost$core$Error* $tmp6247 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp6247));
// line 1719
frost$core$Int64 $tmp6248 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp6248);
goto block2;
block2:;
frost$core$Error* $tmp6249 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6249));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$CCodeGenerator$cleanup(org$frostlang$frostc$CCodeGenerator* param0) {

// line 12
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp6250 = &param0->compiler;
frost$core$Weak* $tmp6251 = *$tmp6250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6251));
frost$io$File** $tmp6252 = &param0->outDir;
frost$io$File* $tmp6253 = *$tmp6252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6253));
frost$io$IndentedOutputStream** $tmp6254 = &param0->out;
frost$io$IndentedOutputStream* $tmp6255 = *$tmp6254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6255));
frost$io$MemoryOutputStream** $tmp6256 = &param0->strings;
frost$io$MemoryOutputStream* $tmp6257 = *$tmp6256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6257));
frost$collections$HashSet** $tmp6258 = &param0->imports;
frost$collections$HashSet* $tmp6259 = *$tmp6258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6259));
frost$core$Weak** $tmp6260 = &param0->hCodeGen;
frost$core$Weak* $tmp6261 = *$tmp6260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6261));
org$frostlang$frostc$HCodeGenerator** $tmp6262 = &param0->hCodeGenRetain;
org$frostlang$frostc$HCodeGenerator* $tmp6263 = *$tmp6262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6263));
org$frostlang$frostc$ClassDecl** $tmp6264 = &param0->currentClass;
org$frostlang$frostc$ClassDecl* $tmp6265 = *$tmp6264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6265));
frost$io$MemoryOutputStream** $tmp6266 = &param0->includes;
frost$io$MemoryOutputStream* $tmp6267 = *$tmp6266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6267));
frost$io$MemoryOutputStream** $tmp6268 = &param0->declarations;
frost$io$MemoryOutputStream* $tmp6269 = *$tmp6268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6269));
frost$io$MemoryOutputStream** $tmp6270 = &param0->types;
frost$io$MemoryOutputStream* $tmp6271 = *$tmp6270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6271));
frost$io$MemoryOutputStream** $tmp6272 = &param0->methodsBuffer;
frost$io$MemoryOutputStream* $tmp6273 = *$tmp6272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6273));
frost$io$IndentedOutputStream** $tmp6274 = &param0->methods;
frost$io$IndentedOutputStream* $tmp6275 = *$tmp6274;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6275));
frost$io$MemoryOutputStream** $tmp6276 = &param0->methodHeaderBuffer;
frost$io$MemoryOutputStream* $tmp6277 = *$tmp6276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6277));
frost$io$IndentedOutputStream** $tmp6278 = &param0->methodHeader;
frost$io$IndentedOutputStream* $tmp6279 = *$tmp6278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6279));
frost$io$MemoryOutputStream** $tmp6280 = &param0->shimsBuffer;
frost$io$MemoryOutputStream* $tmp6281 = *$tmp6280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6281));
frost$io$IndentedOutputStream** $tmp6282 = &param0->shims;
frost$io$IndentedOutputStream* $tmp6283 = *$tmp6282;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6283));
frost$collections$HashSet** $tmp6284 = &param0->declared;
frost$collections$HashSet* $tmp6285 = *$tmp6284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6285));
frost$collections$HashSet** $tmp6286 = &param0->writtenTypes;
frost$collections$HashSet* $tmp6287 = *$tmp6286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6287));
frost$collections$HashSet** $tmp6288 = &param0->writtenWrappers;
frost$collections$HashSet* $tmp6289 = *$tmp6288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6289));
frost$collections$HashMap** $tmp6290 = &param0->classConstants;
frost$collections$HashMap* $tmp6291 = *$tmp6290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6291));
frost$collections$IdentityMap** $tmp6292 = &param0->variableNames;
frost$collections$IdentityMap* $tmp6293 = *$tmp6292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6293));
frost$core$String** $tmp6294 = &param0->currentBlock;
frost$core$String* $tmp6295 = *$tmp6294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6295));
org$frostlang$frostc$MethodDecl** $tmp6296 = &param0->currentMethod;
org$frostlang$frostc$MethodDecl* $tmp6297 = *$tmp6296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6297));
frost$core$String** $tmp6298 = &param0->returnValueVar;
frost$core$String* $tmp6299 = *$tmp6298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6299));
frost$collections$Stack** $tmp6300 = &param0->enclosingContexts;
frost$collections$Stack* $tmp6301 = *$tmp6300;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6301));
frost$collections$IdentityMap** $tmp6302 = &param0->methodShims;
frost$collections$IdentityMap* $tmp6303 = *$tmp6302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6303));
frost$collections$HashMap** $tmp6304 = &param0->refs;
frost$collections$HashMap* $tmp6305 = *$tmp6304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6305));
org$frostlang$frostc$IR** $tmp6306 = &param0->ir;
org$frostlang$frostc$IR* $tmp6307 = *$tmp6306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6307));
return;

}

