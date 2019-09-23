#include "org/frostlang/frostc/Interpreter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/MemoryLayout.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/LinkedList.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/Interpreter/_Closure11.h"
#include "org/frostlang/frostc/Interpreter/_Closure13.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/collections/IdentityMap.h"
#include "org/frostlang/frostc/Interpreter/Code.h"
#include "org/frostlang/frostc/Interpreter/_Closure15.h"
#include "org/frostlang/frostc/Interpreter/_Closure17.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Int32.h"
#include "org/frostlang/frostc/Interpreter/Context.h"
#include "frost/io/Console.h"
#include "org/frostlang/frostc/Interpreter/_Closure19.h"
#include "org/frostlang/frostc/Interpreter/_Closure21.h"
#include "frost/core/System.h"
#include "frost/core/UInt8.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int16.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/MapView.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$Interpreter$_org$frostlang$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class, NULL, { org$frostlang$frostc$Interpreter$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$Interpreter$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$Interpreter$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$Interpreter$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$Interpreter$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$Interpreter$finish} };

static frost$core$String $s1;
org$frostlang$frostc$Interpreter$class_type org$frostlang$frostc$Interpreter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$Interpreter$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Interpreter$cleanup, org$frostlang$frostc$Interpreter$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$Interpreter$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$Interpreter$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$Interpreter$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$Interpreter$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$Interpreter$finish, org$frostlang$frostc$Interpreter$align$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$core$UInt8$GT, org$frostlang$frostc$Interpreter$alloca$org$frostlang$frostc$Type$R$frost$unsafe$Pointer$LTfrost$core$UInt8$GT, org$frostlang$frostc$Interpreter$needsStructPointer$org$frostlang$frostc$Type$R$frost$core$Bit, org$frostlang$frostc$Interpreter$destroyObject$frost$unsafe$Pointer$LTfrost$core$UInt8$GT, org$frostlang$frostc$Interpreter$ref$frost$unsafe$Pointer$LTfrost$core$UInt8$GT, org$frostlang$frostc$Interpreter$unref$frost$unsafe$Pointer$LTfrost$core$UInt8$GT, org$frostlang$frostc$Interpreter$getBuiltin$org$frostlang$frostc$MethodDecl$R$$LPorg$frostlang$frostc$Interpreter$Context$Corg$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$RP$EQ$AM$GT$LPfrost$core$Int64$RP, org$frostlang$frostc$Interpreter$callBuiltin$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64, org$frostlang$frostc$Interpreter$cast$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$Interpreter$createStruct$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$Interpreter$extractField$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$Interpreter$getFieldPointer$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl$R$frost$core$Int, org$frostlang$frostc$Interpreter$getFieldPointer$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$Interpreter$bit$frost$core$Bit$R$frost$core$Int64, org$frostlang$frostc$Interpreter$binary$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value, org$frostlang$frostc$Interpreter$call$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64, org$frostlang$frostc$Interpreter$run} };

typedef frost$collections$Array* (*$fn2)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$Object* (*$fn3)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn9)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn10)(frost$collections$CollectionView*);
typedef frost$collections$Array* (*$fn11)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$collections$Array* (*$fn12)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$collections$Array* (*$fn13)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$Object* (*$fn14)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$Int (*$fn31)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn32)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$UInt8* (*$fn33)(org$frostlang$frostc$Interpreter*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn34)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn35)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn38)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$UInt8* (*$fn39)(org$frostlang$frostc$Interpreter*, frost$core$UInt8*, frost$core$Int);
typedef frost$core$Int (*$fn40)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn41)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn46)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Object* (*$fn47)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int64 (*$fn48)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn58)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int (*$fn59)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn60)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn61)(org$frostlang$frostc$MemoryLayout*);
typedef void (*$fn62)(org$frostlang$frostc$Interpreter*, frost$core$UInt8*);
typedef frost$core$Int (*$fn63)(org$frostlang$frostc$MemoryLayout*);
typedef void (*$fn64)(org$frostlang$frostc$Interpreter*, frost$core$UInt8*);
typedef frost$core$Int64 (*$fn65)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn66)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$MutableMethod* (*$fn83)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*);
typedef frost$core$Int64 (*$fn84)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn85)(frost$core$Object*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$FixedArray*);
typedef frost$core$MutableMethod* (*$fn86)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*);
typedef frost$core$Int64 (*$fn87)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn88)(frost$core$Object*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$FixedArray*);
typedef org$frostlang$frostc$Type* (*$fn89)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn90)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn91)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn92)(org$frostlang$frostc$MemoryLayout*);
typedef org$frostlang$frostc$Type* (*$fn93)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn94)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn95)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn96)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn97)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn98)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn99)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn100)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn101)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn110)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn117)(org$frostlang$frostc$MemoryLayout*);
typedef org$frostlang$frostc$Type* (*$fn118)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn119)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn120)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn141)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$collections$Iterator* (*$fn142)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn143)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn144)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn145)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn146)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn147)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$String* (*$fn148)(frost$core$Object*);
typedef frost$core$Bit (*$fn149)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn150)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn151)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn152)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn156)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn157)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn158)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$String* (*$fn159)(frost$core$Object*);
typedef frost$core$Bit (*$fn163)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Bit (*$fn174)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn175)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int (*$fn176)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn177)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn178)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn179)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn180)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn181)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn182)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn183)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn186)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn187)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int (*$fn188)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn219)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef void (*$fn225)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int64 (*$fn226)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef void (*$fn229)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int64 (*$fn231)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn232)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int (*$fn233)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn234)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int64 (*$fn240)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn241)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn242)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn243)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn244)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn245)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn246)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int (*$fn247)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn248)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int (*$fn249)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn250)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int (*$fn251)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn252)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int (*$fn253)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn254)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn255)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn256)(frost$core$Object*);
typedef frost$core$Int64 (*$fn257)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn258)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn279)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int64 (*$fn285)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int64 (*$fn291)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int64 (*$fn297)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$String* (*$fn314)(frost$core$Object*);
typedef frost$core$Int (*$fn318)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn319)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn320)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn321)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn322)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$collections$Iterator* (*$fn323)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn324)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn325)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn326)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn327)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn328)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn329)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn330)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn331)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn332)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn333)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn334)(frost$collections$CollectionView*);
typedef void (*$fn335)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$expression$Binary$Operator, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn336)(frost$collections$CollectionView*);
typedef void (*$fn337)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn338)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn339)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn340)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn341)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn342)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn343)(frost$collections$CollectionView*);
typedef void (*$fn344)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$ClassDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn345)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn346)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int (*$fn347)(frost$collections$CollectionView*);
typedef void (*$fn348)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef void (*$fn349)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int64 (*$fn350)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn351)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn352)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn353)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn354)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn355)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn356)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn357)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn358)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn359)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn360)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn361)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn362)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn363)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn364)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn365)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn366)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn367)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn368)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn369)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn370)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn371)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn372)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn373)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn374)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn375)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn376)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int (*$fn377)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn378)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn379)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn380)(frost$core$Object*);
typedef frost$core$Int64 (*$fn397)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn412)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef void (*$fn430)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$expression$Binary$Operator, org$frostlang$frostc$IR$Value*);
typedef void (*$fn436)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn437)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn448)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn449)(org$frostlang$frostc$MemoryLayout*);
typedef void (*$fn455)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$ClassDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn456)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn457)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef void (*$fn463)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef void (*$fn464)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int64 (*$fn465)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn476)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn477)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn478)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn489)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn490)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef org$frostlang$frostc$Type* (*$fn496)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn499)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn500)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn501)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn502)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn508)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn509)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn510)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn511)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn512)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn513)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn514)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn515)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn518)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn519)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn525)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn526)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn527)(frost$core$Object*);
typedef frost$core$Int64 (*$fn531)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$collections$Iterator* (*$fn532)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn533)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn534)(frost$collections$Iterator*);
typedef void (*$fn535)(org$frostlang$frostc$Interpreter*, frost$core$UInt8*);
typedef frost$core$Int (*$fn536)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn543)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef void (*$fn547)(org$frostlang$frostc$Interpreter*, frost$core$UInt8*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72", 32, -3100534405647567570, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 2258945139493307336, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x61\x6c\x6c\x6f\x63\x61\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e", 139, -7836007591951303402, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x72\x65\x66\x28\x6f\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x29", 66, 8517555090198155938, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x75\x6e\x72\x65\x66\x28\x6f\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x29", 68, -1591211548199132021, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x70\x72\x69\x6e\x74\x28\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 67, -2650786360588262487, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x61\x74\x61\x6c\x20\x65\x72\x72\x6f\x72\x3a\x20", 13, 3817230338345850721, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x62\x79\x20\x74\x68\x65\x20", 25, -9203381872083098346, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72", 11, -6089209956535185587, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3f\x20\x74\x6f\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 293, -7245596308351737427, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3f\x20\x74\x6f\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 293, -7245596308351737427, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20", 18, 4314115219735591667, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x66\x69\x65\x6c\x64\x20\x73\x69\x7a\x65", 22, -5074326750169406355, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x62\x69\x6e\x61\x72\x79\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x20\x27", 29, 2922146385210293486, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s444 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x3a\x20", 23, 7177047828670113807, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x69\x6e\x20\x6d\x65\x74\x68\x6f\x64", 14, 8684458706139196112, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, 7363539685333061901, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };

void org$frostlang$frostc$Interpreter$setCompiler$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

org$frostlang$frostc$Compiler* _1;
frost$core$Weak* _2;
frost$core$Object* _3;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
frost$core$Weak** _11;
frost$core$Object* _13;
org$frostlang$frostc$MemoryLayout** _16;
org$frostlang$frostc$MemoryLayout* _17;
frost$core$Object* _18;
org$frostlang$frostc$MemoryLayout** _20;
org$frostlang$frostc$MemoryLayout* _21;
frost$core$Object* _22;
org$frostlang$frostc$MemoryLayout** _24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:190
_1 = param1;
_2 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_3 = ((frost$core$Object*) _1);
frost$core$Weak$init$frost$core$Weak$T$Q(_2, _3);
_5 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->compiler;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->compiler;
*_11 = _2;
_13 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:191
_16 = &param1->memoryLayout;
_17 = *_16;
_18 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->memoryLayout;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->memoryLayout;
*_24 = _17;
return;

}
void org$frostlang$frostc$Interpreter$start$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

return;

}
void org$frostlang$frostc$Interpreter$end$org$frostlang$frostc$ClassDecl(void* rawSelf, org$frostlang$frostc$ClassDecl* param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

return;

}
void org$frostlang$frostc$Interpreter$writeDeclaration$org$frostlang$frostc$MethodDecl(void* rawSelf, org$frostlang$frostc$MethodDecl* param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

return;

}
frost$collections$Array* org$frostlang$frostc$Interpreter$$anonymous1$org$frostlang$frostc$IR$Block$R$frost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT(org$frostlang$frostc$IR$Block* param0) {

frost$collections$Array* _1;
org$frostlang$frostc$LinkedList** _2;
org$frostlang$frostc$LinkedList* _3;
frost$collections$CollectionView* _4;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:220
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_2 = &param0->ids;
_3 = *_2;
_4 = ((frost$collections$CollectionView*) _3);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_1, _4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _1;

}
frost$collections$Array* org$frostlang$frostc$Interpreter$$anonymous2$org$frostlang$frostc$IR$Block$R$frost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT(org$frostlang$frostc$IR$Block* param0) {

frost$collections$Array* _1;
org$frostlang$frostc$LinkedList** _2;
org$frostlang$frostc$LinkedList* _3;
frost$collections$CollectionView* _4;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:221
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_2 = &param0->statements;
_3 = *_2;
_4 = ((frost$collections$CollectionView*) _3);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_1, _4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _1;

}
frost$core$Int org$frostlang$frostc$Interpreter$$anonymous9$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Int(org$frostlang$frostc$IR$Statement$ID param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:222
_1 = param0.value;
return _1;

}
frost$core$Int org$frostlang$frostc$Interpreter$$anonymous3$org$frostlang$frostc$IR$Block$R$frost$core$Int(org$frostlang$frostc$IR$Block* param0) {

frost$core$MutableMethod* local0 = NULL;
frost$core$MutableMethod* local1 = NULL;
org$frostlang$frostc$LinkedList** _1;
org$frostlang$frostc$LinkedList* _2;
frost$collections$CollectionView* _3;
frost$core$Int8* _4;
frost$core$Method* _5;
frost$core$Int8** _8;
frost$core$Object* _11;
frost$core$Immutable** _13;
frost$core$Immutable* _14;
frost$core$Object* _15;
frost$core$Immutable** _17;
frost$core$Method* _20;
frost$core$MutableMethod* _21;
frost$core$Object* _23;
frost$core$MutableMethod* _25;
frost$core$Object* _26;
org$frostlang$frostc$Interpreter$_Closure11* _29;
frost$core$MutableMethod* _30;
frost$core$Int8* _32;
frost$core$MutableMethod* _33;
frost$core$Object* _34;
frost$core$Int8** _37;
frost$core$Object** _41;
frost$core$Object* _42;
frost$core$Object** _44;
frost$core$MutableMethod* _47;
$fn2 _48;
frost$collections$Array* _49;
frost$collections$CollectionView* _50;
frost$core$Int8* _51;
frost$core$Method* _52;
frost$core$Int8** _55;
frost$core$Object* _58;
frost$core$Immutable** _60;
frost$core$Immutable* _61;
frost$core$Object* _62;
frost$core$Immutable** _64;
frost$core$Method* _67;
frost$core$MutableMethod* _68;
frost$core$Object* _70;
frost$core$MutableMethod* _72;
frost$core$Object* _73;
org$frostlang$frostc$Interpreter$_Closure13* _76;
frost$core$MutableMethod* _77;
frost$core$Int8* _79;
frost$core$MutableMethod* _80;
frost$core$Object* _81;
frost$core$Int8** _84;
frost$core$Object** _88;
frost$core$Object* _89;
frost$core$Object** _91;
frost$core$MutableMethod* _94;
$fn3 _95;
frost$core$Object* _96;
frost$core$Int _97;
frost$core$Object* _98;
frost$core$Object* _100;
frost$core$Object* _102;
frost$core$MutableMethod* _104;
frost$core$Object* _105;
frost$core$Object* _108;
frost$core$Object* _110;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$MutableMethod* _116;
frost$core$Object* _117;
frost$core$Object* _120;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:222
_1 = &param0->ids;
_2 = *_1;
_3 = ((frost$collections$CollectionView*) _2);
_4 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$$anonymous9$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Int);
_5 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Interpreter.frost:222:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_8 = &_5->pointer;
*_8 = _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_11 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = &_5->target;
_14 = *_13;
_15 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_15);
_17 = &_5->target;
*_17 = ((frost$core$Immutable*) NULL);
_20 = _5;
_21 = ((frost$core$MutableMethod*) _20);
*(&local0) = ((frost$core$MutableMethod*) NULL);
_23 = ((frost$core$Object*) _21);
frost$core$Frost$ref$frost$core$Object$Q(_23);
_25 = *(&local0);
_26 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_26);
*(&local0) = _21;
_29 = (org$frostlang$frostc$Interpreter$_Closure11*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$_Closure11), (frost$core$Class*) &org$frostlang$frostc$Interpreter$_Closure11$class);
_30 = *(&local0);
org$frostlang$frostc$Interpreter$_Closure11$init$$LPorg$frostlang$frostc$IR$Statement$ID$RP$EQ$GT$LPfrost$core$Int$RP(_29, _30);
_32 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$_Closure11$$anonymous10$frost$collections$CollectionView$T$R$frost$collections$CollectionView$map$U);
_33 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_34 = ((frost$core$Object*) _29);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Interpreter.frost:222:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_37 = &_33->pointer;
*_37 = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_34);
_41 = &_33->target;
_42 = *_41;
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = &_33->target;
*_44 = _34;
_47 = _33;
ITable* $tmp4 = _3->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
_48 = $tmp4->methods[9];
_49 = _48(_3, _47);
_50 = ((frost$collections$CollectionView*) _49);
_51 = ((frost$core$Int8*) frost$core$Int$max$frost$core$Int$R$frost$core$Int);
_52 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Interpreter.frost:222:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_55 = &_52->pointer;
*_55 = _51;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_58 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_58);
_60 = &_52->target;
_61 = *_60;
_62 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = &_52->target;
*_64 = ((frost$core$Immutable*) NULL);
_67 = _52;
_68 = ((frost$core$MutableMethod*) _67);
*(&local1) = ((frost$core$MutableMethod*) NULL);
_70 = ((frost$core$Object*) _68);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = *(&local1);
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local1) = _68;
_76 = (org$frostlang$frostc$Interpreter$_Closure13*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$_Closure13), (frost$core$Class*) &org$frostlang$frostc$Interpreter$_Closure13$class);
_77 = *(&local1);
org$frostlang$frostc$Interpreter$_Closure13$init$$LPfrost$core$Int$Cfrost$core$Int$RP$EQ$GT$LPfrost$core$Int$RP(_76, _77);
_79 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$_Closure13$$anonymous12$frost$collections$CollectionView$T$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T);
_80 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_81 = ((frost$core$Object*) _76);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Interpreter.frost:222:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_84 = &_80->pointer;
*_84 = _79;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_81);
_88 = &_80->target;
_89 = *_88;
frost$core$Frost$unref$frost$core$Object$Q(_89);
_91 = &_80->target;
*_91 = _81;
_94 = _80;
ITable* $tmp5 = _50->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5 = $tmp5->next;
}
_95 = $tmp5->methods[4];
_96 = _95(_50, _94);
_97 = ((frost$core$Int$wrapper*) _96)->value;
_98 = _96;
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_100);
_102 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_102);
_104 = *(&local1);
_105 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_105);
*(&local1) = ((frost$core$MutableMethod*) NULL);
_108 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_108);
_110 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_110);
_112 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_114);
_116 = *(&local0);
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
*(&local0) = ((frost$core$MutableMethod*) NULL);
_120 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_120);
return _97;

}
void org$frostlang$frostc$Interpreter$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(void* rawSelf, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$IR* param2) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Int local2;
frost$core$MutableMethod* local3 = NULL;
frost$core$MutableMethod* local4 = NULL;
org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Bit _4;
bool _5;
org$frostlang$frostc$Annotations** _7;
org$frostlang$frostc$Annotations* _8;
frost$core$Int* _11;
frost$core$Int _12;
frost$core$Int _13;
int64_t _16;
int64_t _17;
int64_t _18;
frost$core$Int _19;
frost$core$Int _21;
int64_t _22;
int64_t _23;
bool _24;
frost$core$Bit _25;
bool _27;
org$frostlang$frostc$MethodDecl* _30;
frost$core$Object* _31;
org$frostlang$frostc$MethodDecl** _33;
org$frostlang$frostc$MethodDecl* _34;
frost$core$Object* _35;
org$frostlang$frostc$MethodDecl** _37;
frost$collections$Array* _41;
frost$collections$Array** _42;
frost$collections$Array* _43;
frost$collections$CollectionView* _44;
$fn6 _45;
frost$core$Int _46;
frost$core$Object* _49;
frost$collections$Array* _51;
frost$core$Object* _52;
frost$core$Object* _55;
frost$core$Int _58;
frost$collections$Array** _59;
frost$collections$Array* _60;
frost$collections$CollectionView* _61;
$fn7 _62;
frost$core$Int _63;
frost$core$Bit _64;
frost$core$Range$LTfrost$core$Int$GT _65;
frost$core$Int _66;
frost$core$Int _68;
frost$core$Bit _69;
bool _70;
frost$core$Int _71;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
bool _83;
frost$collections$Array** _86;
frost$collections$Array* _87;
frost$core$Int _88;
frost$core$Int _90;
int64_t _91;
int64_t _92;
bool _93;
frost$core$Bit _94;
bool _95;
frost$collections$CollectionView* _97;
$fn8 _98;
frost$core$Int _99;
int64_t _100;
int64_t _101;
bool _102;
frost$core$Bit _103;
bool _104;
frost$core$Int _106;
frost$core$Object*** _110;
frost$core$Object** _111;
frost$core$Int64 _112;
int64_t _113;
frost$core$Object* _114;
frost$core$Object* _115;
org$frostlang$frostc$IR$Block* _118;
org$frostlang$frostc$IR$Block$ID* _119;
org$frostlang$frostc$IR$Block$ID _120;
frost$core$Int _121;
frost$core$Object* _123;
frost$collections$Array* _127;
frost$collections$CollectionView* _128;
$fn9 _129;
frost$core$Int _130;
frost$core$Int _131;
int64_t _132;
int64_t _133;
bool _134;
frost$core$Bit _135;
bool _136;
frost$collections$Array* _139;
frost$core$Int _140;
frost$core$Object* _141;
frost$core$Object* _143;
frost$collections$Array* _147;
frost$core$Int _148;
frost$core$Int _149;
frost$core$Object* _150;
frost$core$Int _152;
int64_t _153;
int64_t _154;
bool _155;
frost$core$Bit _156;
bool _157;
frost$collections$CollectionView* _159;
$fn10 _160;
frost$core$Int _161;
int64_t _162;
int64_t _163;
bool _164;
frost$core$Bit _165;
bool _166;
frost$core$Int _168;
frost$core$Object*** _172;
frost$core$Object** _173;
frost$core$Int64 _174;
int64_t _175;
frost$core$Object* _176;
frost$core$Object* _178;
frost$core$Object* _179;
frost$core$Object* _183;
frost$core$Int _186;
int64_t _187;
int64_t _188;
int64_t _189;
frost$core$Int _190;
int64_t _192;
int64_t _193;
bool _194;
frost$core$Bit _195;
bool _196;
int64_t _198;
int64_t _199;
bool _200;
frost$core$Bit _201;
bool _202;
int64_t _204;
int64_t _205;
int64_t _206;
frost$core$Int _207;
frost$collections$IdentityMap** _211;
frost$collections$IdentityMap* _212;
frost$core$Object* _213;
org$frostlang$frostc$Interpreter$Code* _214;
frost$collections$Array** _215;
frost$collections$Array* _216;
frost$collections$Array* _217;
frost$collections$Array** _218;
frost$collections$Array* _219;
frost$collections$CollectionView* _220;
frost$core$Int8* _221;
frost$core$Method* _222;
frost$core$Int8** _225;
frost$core$Object* _228;
frost$core$Immutable** _230;
frost$core$Immutable* _231;
frost$core$Object* _232;
frost$core$Immutable** _234;
frost$core$Method* _237;
frost$core$MutableMethod* _238;
frost$core$MutableMethod* _239;
$fn11 _240;
frost$collections$Array* _241;
frost$collections$Array** _242;
frost$collections$Array* _243;
frost$collections$CollectionView* _244;
frost$core$Int8* _245;
frost$core$Method* _246;
frost$core$Int8** _249;
frost$core$Object* _252;
frost$core$Immutable** _254;
frost$core$Immutable* _255;
frost$core$Object* _256;
frost$core$Immutable** _258;
frost$core$Method* _261;
frost$core$MutableMethod* _262;
frost$core$MutableMethod* _263;
$fn12 _264;
frost$collections$Array* _265;
frost$collections$Array** _266;
frost$collections$Array* _267;
frost$collections$CollectionView* _268;
frost$core$Int8* _269;
frost$core$Method* _270;
frost$core$Int8** _273;
frost$core$Object* _276;
frost$core$Immutable** _278;
frost$core$Immutable* _279;
frost$core$Object* _280;
frost$core$Immutable** _282;
frost$core$Method* _285;
frost$core$MutableMethod* _286;
frost$core$Object* _288;
frost$core$MutableMethod* _290;
frost$core$Object* _291;
org$frostlang$frostc$Interpreter$_Closure15* _294;
frost$core$MutableMethod* _295;
frost$core$Int8* _297;
frost$core$MutableMethod* _298;
frost$core$Object* _299;
frost$core$Int8** _302;
frost$core$Object** _306;
frost$core$Object* _307;
frost$core$Object** _309;
frost$core$MutableMethod* _312;
$fn13 _313;
frost$collections$Array* _314;
frost$collections$CollectionView* _315;
frost$core$Int8* _316;
frost$core$Method* _317;
frost$core$Int8** _320;
frost$core$Object* _323;
frost$core$Immutable** _325;
frost$core$Immutable* _326;
frost$core$Object* _327;
frost$core$Immutable** _329;
frost$core$Method* _332;
frost$core$MutableMethod* _333;
frost$core$Object* _335;
frost$core$MutableMethod* _337;
frost$core$Object* _338;
org$frostlang$frostc$Interpreter$_Closure17* _341;
frost$core$MutableMethod* _342;
frost$core$Int8* _344;
frost$core$MutableMethod* _345;
frost$core$Object* _346;
frost$core$Int8** _349;
frost$core$Object** _353;
frost$core$Object* _354;
frost$core$Object** _356;
frost$core$MutableMethod* _359;
$fn14 _360;
frost$core$Object* _361;
frost$core$Int _362;
frost$core$Object* _364;
frost$core$Object* _366;
frost$core$Object* _368;
frost$core$Object* _370;
frost$core$MutableMethod* _372;
frost$core$Object* _373;
frost$core$Object* _376;
frost$core$Object* _378;
frost$core$Object* _380;
frost$core$Object* _382;
frost$core$MutableMethod* _384;
frost$core$Object* _385;
frost$core$Object* _388;
frost$core$Object* _390;
frost$core$Object* _392;
frost$core$Object* _394;
frost$core$Object* _396;
frost$core$Object* _398;
frost$collections$Array* _400;
frost$core$Object* _401;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:208
_1 = ((org$frostlang$frostc$Symbol*) param1);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_3, &$s15);
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = &param1->annotations;
_8 = *_7;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Interpreter.frost:208:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:125
_11 = &_8->flags;
_12 = *_11;
_13 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:125:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_16 = _12.value;
_17 = _13.value;
_18 = _16 & _17;
_19 = (frost$core$Int) {_18};
_21 = (frost$core$Int) {0u};
_22 = _19.value;
_23 = _21.value;
_24 = _22 != _23;
_25 = (frost$core$Bit) {_24};
_27 = _25.value;
if (_27) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:209
_30 = param1;
_31 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = &param0->main;
_34 = *_33;
_35 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = &param0->main;
*_37 = _30;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:211
_41 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_42 = &param2->blocks;
_43 = *_42;
_44 = ((frost$collections$CollectionView*) _43);
ITable* $tmp16 = _44->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
_45 = $tmp16->methods[0];
_46 = _45(_44);
frost$collections$Array$init$frost$core$Int(_41, _46);
*(&local0) = ((frost$collections$Array*) NULL);
_49 = ((frost$core$Object*) _41);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = *(&local0);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local0) = _41;
_55 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_55);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:212
_58 = (frost$core$Int) {0u};
_59 = &param2->blocks;
_60 = *_59;
_61 = ((frost$collections$CollectionView*) _60);
ITable* $tmp17 = _61->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp17 = $tmp17->next;
}
_62 = $tmp17->methods[0];
_63 = _62(_61);
_64 = (frost$core$Bit) {false};
_65 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_58, _63, _64);
_66 = _65.min;
*(&local1) = _66;
_68 = _65.max;
_69 = _65.inclusive;
_70 = _69.value;
_71 = (frost$core$Int) {1u};
if (_70) goto block9; else goto block10;
block9:;
_73 = _66.value;
_74 = _68.value;
_75 = _73 <= _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block6; else goto block7;
block10:;
_79 = _66.value;
_80 = _68.value;
_81 = _79 < _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:213
_86 = &param2->blocks;
_87 = *_86;
_88 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:213:31
_90 = (frost$core$Int) {0u};
_91 = _88.value;
_92 = _90.value;
_93 = _91 >= _92;
_94 = (frost$core$Bit) {_93};
_95 = _94.value;
if (_95) goto block14; else goto block13;
block14:;
_97 = ((frost$collections$CollectionView*) _87);
ITable* $tmp18 = _97->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
_98 = $tmp18->methods[0];
_99 = _98(_97);
_100 = _88.value;
_101 = _99.value;
_102 = _100 < _101;
_103 = (frost$core$Bit) {_102};
_104 = _103.value;
if (_104) goto block12; else goto block13;
block13:;
_106 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _106, &$s20);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_110 = &_87->data;
_111 = *_110;
_112 = frost$core$Int64$init$frost$core$Int(_88);
_113 = _112.value;
_114 = _111[_113];
_115 = _114;
frost$core$Frost$ref$frost$core$Object$Q(_115);
_118 = ((org$frostlang$frostc$IR$Block*) _114);
_119 = &_118->id;
_120 = *_119;
_121 = _120.value;
*(&local2) = _121;
_123 = _114;
frost$core$Frost$unref$frost$core$Object$Q(_123);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:214
goto block15;
block15:;
_127 = *(&local0);
_128 = ((frost$collections$CollectionView*) _127);
ITable* $tmp21 = _128->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
_129 = $tmp21->methods[0];
_130 = _129(_128);
_131 = *(&local2);
_132 = _130.value;
_133 = _131.value;
_134 = _132 <= _133;
_135 = (frost$core$Bit) {_134};
_136 = _135.value;
if (_136) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:215
_139 = *(&local0);
_140 = (frost$core$Int) {18446744073709551615u};
frost$core$Int$wrapper* $tmp22;
$tmp22 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp22->value = _140;
_141 = ((frost$core$Object*) $tmp22);
frost$collections$Array$add$frost$collections$Array$T(_139, _141);
_143 = _141;
frost$core$Frost$unref$frost$core$Object$Q(_143);
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:217
_147 = *(&local0);
_148 = *(&local2);
_149 = *(&local1);
frost$core$Int$wrapper* $tmp23;
$tmp23 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp23->value = _149;
_150 = ((frost$core$Object*) $tmp23);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:217:21
_152 = (frost$core$Int) {0u};
_153 = _148.value;
_154 = _152.value;
_155 = _153 >= _154;
_156 = (frost$core$Bit) {_155};
_157 = _156.value;
if (_157) goto block21; else goto block20;
block21:;
_159 = ((frost$collections$CollectionView*) _147);
ITable* $tmp24 = _159->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp24 = $tmp24->next;
}
_160 = $tmp24->methods[0];
_161 = _160(_159);
_162 = _148.value;
_163 = _161.value;
_164 = _162 < _163;
_165 = (frost$core$Bit) {_164};
_166 = _165.value;
if (_166) goto block19; else goto block20;
block20:;
_168 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s25, _168, &$s26);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_172 = &_147->data;
_173 = *_172;
_174 = frost$core$Int64$init$frost$core$Int(_148);
_175 = _174.value;
_176 = _150;
frost$core$Frost$ref$frost$core$Object$Q(_176);
_178 = _173[_175];
_179 = _178;
frost$core$Frost$unref$frost$core$Object$Q(_179);
_173[_175] = _150;
_183 = _150;
frost$core$Frost$unref$frost$core$Object$Q(_183);
_186 = *(&local1);
_187 = _68.value;
_188 = _186.value;
_189 = _187 - _188;
_190 = (frost$core$Int) {_189};
if (_70) goto block23; else goto block24;
block23:;
_192 = _190.value;
_193 = _71.value;
_194 = _192 >= _193;
_195 = (frost$core$Bit) {_194};
_196 = _195.value;
if (_196) goto block22; else goto block7;
block24:;
_198 = _190.value;
_199 = _71.value;
_200 = _198 > _199;
_201 = (frost$core$Bit) {_200};
_202 = _201.value;
if (_202) goto block22; else goto block7;
block22:;
_204 = _186.value;
_205 = _71.value;
_206 = _204 + _205;
_207 = (frost$core$Int) {_206};
*(&local1) = _207;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:219
_211 = &param0->methodCode;
_212 = *_211;
_213 = ((frost$core$Object*) param1);
_214 = (org$frostlang$frostc$Interpreter$Code*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$Code), (frost$core$Class*) &org$frostlang$frostc$Interpreter$Code$class);
_215 = &param2->locals;
_216 = *_215;
_217 = *(&local0);
_218 = &param2->blocks;
_219 = *_218;
_220 = ((frost$collections$CollectionView*) _219);
_221 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$$anonymous1$org$frostlang$frostc$IR$Block$R$frost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT);
_222 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Interpreter.frost:220:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_225 = &_222->pointer;
*_225 = _221;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_228 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_228);
_230 = &_222->target;
_231 = *_230;
_232 = ((frost$core$Object*) _231);
frost$core$Frost$unref$frost$core$Object$Q(_232);
_234 = &_222->target;
*_234 = ((frost$core$Immutable*) NULL);
_237 = _222;
_238 = ((frost$core$MutableMethod*) _237);
_239 = _238;
ITable* $tmp27 = _220->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp27 = $tmp27->next;
}
_240 = $tmp27->methods[9];
_241 = _240(_220, _239);
_242 = &param2->blocks;
_243 = *_242;
_244 = ((frost$collections$CollectionView*) _243);
_245 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$$anonymous2$org$frostlang$frostc$IR$Block$R$frost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT);
_246 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Interpreter.frost:221:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_249 = &_246->pointer;
*_249 = _245;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_252 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_252);
_254 = &_246->target;
_255 = *_254;
_256 = ((frost$core$Object*) _255);
frost$core$Frost$unref$frost$core$Object$Q(_256);
_258 = &_246->target;
*_258 = ((frost$core$Immutable*) NULL);
_261 = _246;
_262 = ((frost$core$MutableMethod*) _261);
_263 = _262;
ITable* $tmp28 = _244->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
_264 = $tmp28->methods[9];
_265 = _264(_244, _263);
_266 = &param2->blocks;
_267 = *_266;
_268 = ((frost$collections$CollectionView*) _267);
_269 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$$anonymous3$org$frostlang$frostc$IR$Block$R$frost$core$Int);
_270 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Interpreter.frost:222:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_273 = &_270->pointer;
*_273 = _269;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_276 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_276);
_278 = &_270->target;
_279 = *_278;
_280 = ((frost$core$Object*) _279);
frost$core$Frost$unref$frost$core$Object$Q(_280);
_282 = &_270->target;
*_282 = ((frost$core$Immutable*) NULL);
_285 = _270;
_286 = ((frost$core$MutableMethod*) _285);
*(&local3) = ((frost$core$MutableMethod*) NULL);
_288 = ((frost$core$Object*) _286);
frost$core$Frost$ref$frost$core$Object$Q(_288);
_290 = *(&local3);
_291 = ((frost$core$Object*) _290);
frost$core$Frost$unref$frost$core$Object$Q(_291);
*(&local3) = _286;
_294 = (org$frostlang$frostc$Interpreter$_Closure15*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$_Closure15), (frost$core$Class*) &org$frostlang$frostc$Interpreter$_Closure15$class);
_295 = *(&local3);
org$frostlang$frostc$Interpreter$_Closure15$init$$LPorg$frostlang$frostc$IR$Block$RP$EQ$GT$LPfrost$core$Int$RP(_294, _295);
_297 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$_Closure15$$anonymous14$frost$collections$CollectionView$T$R$frost$collections$CollectionView$map$U);
_298 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_299 = ((frost$core$Object*) _294);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Interpreter.frost:222:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_302 = &_298->pointer;
*_302 = _297;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_299);
_306 = &_298->target;
_307 = *_306;
frost$core$Frost$unref$frost$core$Object$Q(_307);
_309 = &_298->target;
*_309 = _299;
_312 = _298;
ITable* $tmp29 = _268->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp29 = $tmp29->next;
}
_313 = $tmp29->methods[9];
_314 = _313(_268, _312);
_315 = ((frost$collections$CollectionView*) _314);
_316 = ((frost$core$Int8*) frost$core$Int$max$frost$core$Int$R$frost$core$Int);
_317 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Interpreter.frost:222:85
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_320 = &_317->pointer;
*_320 = _316;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_323 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_323);
_325 = &_317->target;
_326 = *_325;
_327 = ((frost$core$Object*) _326);
frost$core$Frost$unref$frost$core$Object$Q(_327);
_329 = &_317->target;
*_329 = ((frost$core$Immutable*) NULL);
_332 = _317;
_333 = ((frost$core$MutableMethod*) _332);
*(&local4) = ((frost$core$MutableMethod*) NULL);
_335 = ((frost$core$Object*) _333);
frost$core$Frost$ref$frost$core$Object$Q(_335);
_337 = *(&local4);
_338 = ((frost$core$Object*) _337);
frost$core$Frost$unref$frost$core$Object$Q(_338);
*(&local4) = _333;
_341 = (org$frostlang$frostc$Interpreter$_Closure17*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$_Closure17), (frost$core$Class*) &org$frostlang$frostc$Interpreter$_Closure17$class);
_342 = *(&local4);
org$frostlang$frostc$Interpreter$_Closure17$init$$LPfrost$core$Int$Cfrost$core$Int$RP$EQ$GT$LPfrost$core$Int$RP(_341, _342);
_344 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$_Closure17$$anonymous16$frost$collections$CollectionView$T$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T);
_345 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_346 = ((frost$core$Object*) _341);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Interpreter.frost:222:81
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_349 = &_345->pointer;
*_349 = _344;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_346);
_353 = &_345->target;
_354 = *_353;
frost$core$Frost$unref$frost$core$Object$Q(_354);
_356 = &_345->target;
*_356 = _346;
_359 = _345;
ITable* $tmp30 = _315->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
_360 = $tmp30->methods[4];
_361 = _360(_315, _359);
_362 = ((frost$core$Int$wrapper*) _361)->value;
org$frostlang$frostc$Interpreter$Code$init$frost$collections$Array$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTfrost$core$Int$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT$GT$frost$core$Int(_214, _216, _217, _241, _265, _362);
_364 = ((frost$core$Object*) _214);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(_212, _213, _364);
_366 = _361;
frost$core$Frost$unref$frost$core$Object$Q(_366);
_368 = ((frost$core$Object*) _345);
frost$core$Frost$unref$frost$core$Object$Q(_368);
_370 = ((frost$core$Object*) _341);
frost$core$Frost$unref$frost$core$Object$Q(_370);
_372 = *(&local4);
_373 = ((frost$core$Object*) _372);
frost$core$Frost$unref$frost$core$Object$Q(_373);
*(&local4) = ((frost$core$MutableMethod*) NULL);
_376 = ((frost$core$Object*) _317);
frost$core$Frost$unref$frost$core$Object$Q(_376);
_378 = ((frost$core$Object*) _314);
frost$core$Frost$unref$frost$core$Object$Q(_378);
_380 = ((frost$core$Object*) _298);
frost$core$Frost$unref$frost$core$Object$Q(_380);
_382 = ((frost$core$Object*) _294);
frost$core$Frost$unref$frost$core$Object$Q(_382);
_384 = *(&local3);
_385 = ((frost$core$Object*) _384);
frost$core$Frost$unref$frost$core$Object$Q(_385);
*(&local3) = ((frost$core$MutableMethod*) NULL);
_388 = ((frost$core$Object*) _270);
frost$core$Frost$unref$frost$core$Object$Q(_388);
_390 = ((frost$core$Object*) _265);
frost$core$Frost$unref$frost$core$Object$Q(_390);
_392 = ((frost$core$Object*) _246);
frost$core$Frost$unref$frost$core$Object$Q(_392);
_394 = ((frost$core$Object*) _241);
frost$core$Frost$unref$frost$core$Object$Q(_394);
_396 = ((frost$core$Object*) _222);
frost$core$Frost$unref$frost$core$Object$Q(_396);
_398 = ((frost$core$Object*) _214);
frost$core$Frost$unref$frost$core$Object$Q(_398);
_400 = *(&local0);
_401 = ((frost$core$Object*) _400);
frost$core$Frost$unref$frost$core$Object$Q(_401);
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$Interpreter$finish(void* rawSelf) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

return;

}
frost$core$UInt8* org$frostlang$frostc$Interpreter$align$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, frost$core$UInt8* param1, frost$core$Int param2) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int local0;
int64_t _1;
frost$core$Int _2;
int64_t _5;
int64_t _6;
int64_t _7;
frost$core$Int _8;
frost$core$Int _12;
frost$core$Int _13;
int64_t _14;
int64_t _15;
bool _16;
frost$core$Bit _17;
bool _18;
int64_t _21;
frost$core$Int _22;
int64_t _23;
int64_t _24;
int64_t _25;
frost$core$Int _26;
frost$core$Int _27;
int64_t _28;
int64_t _29;
int64_t _30;
frost$core$Int _31;
int64_t _32;
frost$core$UInt8* _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:230
_1 = ((int64_t) param1);
_2 = (frost$core$Int) {_1};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Interpreter.frost:230:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_5 = _2.value;
_6 = param2.value;
_7 = _5 % _6;
_8 = (frost$core$Int) {_7};
*(&local0) = _8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:231
_12 = *(&local0);
_13 = (frost$core$Int) {0u};
_14 = _12.value;
_15 = _13.value;
_16 = _14 != _15;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:232
_21 = ((int64_t) param1);
_22 = (frost$core$Int) {_21};
_23 = _22.value;
_24 = param2.value;
_25 = _23 + _24;
_26 = (frost$core$Int) {_25};
_27 = *(&local0);
_28 = _26.value;
_29 = _27.value;
_30 = _28 - _29;
_31 = (frost$core$Int) {_30};
_32 = _31.value;
_33 = ((frost$core$UInt8*) _32);
return _33;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:234
return param1;

}
frost$core$UInt8* org$frostlang$frostc$Interpreter$alloca$org$frostlang$frostc$Type$R$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, org$frostlang$frostc$Type* param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$UInt8* local0;
frost$core$UInt8** _0;
frost$core$UInt8* _1;
int64_t _2;
frost$core$Int _3;
frost$core$UInt8** _4;
frost$core$UInt8* _5;
int64_t _6;
frost$core$Int _7;
int64_t _8;
int64_t _9;
int64_t _10;
frost$core$Int _11;
org$frostlang$frostc$MemoryLayout** _12;
org$frostlang$frostc$MemoryLayout* _13;
$fn31 _14;
frost$core$Int _15;
int64_t _16;
int64_t _17;
int64_t _18;
frost$core$Int _19;
frost$core$Int* _20;
frost$core$Int _21;
frost$core$Int _22;
int64_t _23;
int64_t _24;
int64_t _25;
frost$core$Int _26;
int64_t _27;
int64_t _28;
bool _29;
frost$core$Bit _30;
bool _31;
frost$core$Int _33;
frost$core$UInt8** _37;
frost$core$UInt8* _38;
org$frostlang$frostc$MemoryLayout** _39;
org$frostlang$frostc$MemoryLayout* _40;
$fn32 _41;
frost$core$Int _42;
$fn33 _43;
frost$core$UInt8* _44;
frost$core$UInt8** _45;
frost$core$UInt8** _48;
frost$core$UInt8* _49;
frost$core$UInt8** _52;
frost$core$UInt8* _53;
int64_t _54;
frost$core$Int _55;
org$frostlang$frostc$MemoryLayout** _56;
org$frostlang$frostc$MemoryLayout* _57;
$fn34 _58;
frost$core$Int _59;
int64_t _60;
int64_t _61;
int64_t _62;
frost$core$Int _63;
int64_t _64;
frost$core$UInt8* _65;
frost$core$UInt8** _66;
frost$core$UInt8* _69;
_0 = &param0->stack;
_1 = *_0;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
_4 = &param0->stackBase;
_5 = *_4;
_6 = ((int64_t) _5);
_7 = (frost$core$Int) {_6};
_8 = _3.value;
_9 = _7.value;
_10 = _8 - _9;
_11 = (frost$core$Int) {_10};
_12 = &param0->memoryLayout;
_13 = *_12;
_14 = ($fn35) _13->$class->vtable[7];
_15 = _14(_13, param1);
_16 = _11.value;
_17 = _15.value;
_18 = _16 + _17;
_19 = (frost$core$Int) {_18};
_20 = &param0->stackSize;
_21 = *_20;
_22 = (frost$core$Int) {8u};
_23 = _21.value;
_24 = _22.value;
_25 = _23 - _24;
_26 = (frost$core$Int) {_25};
_27 = _19.value;
_28 = _26.value;
_29 = _27 < _28;
_30 = (frost$core$Bit) {_29};
_31 = _30.value;
if (_31) goto block1; else goto block2;
block2:;
_33 = (frost$core$Int) {239u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s36, _33, &$s37);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:240
_37 = &param0->stack;
_38 = *_37;
_39 = &param0->memoryLayout;
_40 = *_39;
_41 = ($fn38) _40->$class->vtable[5];
_42 = _41(_40, param1);
_43 = ($fn39) param0->$class->vtable[8];
_44 = _43(param0, _38, _42);
_45 = &param0->stack;
*_45 = _44;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:241
_48 = &param0->stack;
_49 = *_48;
*(&local0) = _49;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:242
_52 = &param0->stack;
_53 = *_52;
_54 = ((int64_t) _53);
_55 = (frost$core$Int) {_54};
_56 = &param0->memoryLayout;
_57 = *_56;
_58 = ($fn40) _57->$class->vtable[7];
_59 = _58(_57, param1);
_60 = _55.value;
_61 = _59.value;
_62 = _60 + _61;
_63 = (frost$core$Int) {_62};
_64 = _63.value;
_65 = ((frost$core$UInt8*) _64);
_66 = &param0->stack;
*_66 = _65;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:243
_69 = *(&local0);
return _69;

}
frost$core$Bit org$frostlang$frostc$Interpreter$needsStructPointer$org$frostlang$frostc$Type$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$Type* param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Bit local0;
frost$core$Weak** _1;
frost$core$Weak* _2;
frost$core$Bit* _7;
frost$core$Bit _8;
bool _10;
frost$core$Int _12;
frost$core$Object** _16;
frost$core$Object* _17;
frost$core$Object* _18;
frost$core$Object* _19;
org$frostlang$frostc$Compiler* _22;
bool _23;
frost$core$Bit _24;
bool _25;
frost$core$Int _27;
org$frostlang$frostc$Compiler* _30;
frost$core$Bit _31;
bool _32;
org$frostlang$frostc$MemoryLayout** _34;
org$frostlang$frostc$MemoryLayout* _35;
$fn41 _36;
frost$core$Int _37;
frost$core$Int _38;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
frost$core$Bit _47;
frost$core$Object* _48;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:252
_1 = &param0->compiler;
_2 = *_1;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:252:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_7 = &_2->_valid;
_8 = *_7;
_10 = _8.value;
if (_10) goto block3; else goto block4;
block4:;
_12 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s42, _12, &$s43);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_16 = &_2->value;
_17 = *_16;
_18 = _17;
_19 = _18;
frost$core$Frost$ref$frost$core$Object$Q(_19);
_22 = ((org$frostlang$frostc$Compiler*) _18);
_23 = _22 != NULL;
_24 = (frost$core$Bit) {_23};
_25 = _24.value;
if (_25) goto block5; else goto block6;
block6:;
_27 = (frost$core$Int) {252u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s44, _27, &$s45);
abort(); // unreachable
block5:;
_30 = _22;
_31 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_30, param1);
_32 = _31.value;
if (_32) goto block7; else goto block8;
block7:;
_34 = &param0->memoryLayout;
_35 = *_34;
_36 = ($fn46) _35->$class->vtable[7];
_37 = _36(_35, param1);
_38 = (frost$core$Int) {8u};
_39 = _37.value;
_40 = _38.value;
_41 = _39 > _40;
_42 = (frost$core$Bit) {_41};
*(&local0) = _42;
goto block9;
block8:;
*(&local0) = _31;
goto block9;
block9:;
_47 = *(&local0);
_48 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_48);
return _47;

}
void org$frostlang$frostc$Interpreter$destroyObject$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, frost$core$UInt8* param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
frost$core$Int* _1;
frost$core$Int _2;
int64_t _3;
frost$core$Int* _4;
org$frostlang$frostc$ClassDecl* _5;
frost$core$Object* _7;
org$frostlang$frostc$ClassDecl* _9;
frost$core$Object* _10;
frost$core$Weak** _14;
frost$core$Weak* _15;
frost$core$Bit* _20;
frost$core$Bit _21;
bool _23;
frost$core$Int _25;
frost$core$Object** _29;
frost$core$Object* _30;
frost$core$Object* _31;
frost$core$Object* _32;
org$frostlang$frostc$Compiler* _35;
bool _36;
frost$core$Bit _37;
bool _38;
frost$core$Int _40;
org$frostlang$frostc$Compiler* _43;
org$frostlang$frostc$ClassDecl* _44;
frost$collections$ListView* _45;
frost$core$Int _46;
$fn47 _47;
frost$core$Object* _48;
org$frostlang$frostc$MethodDecl* _49;
frost$core$Object* _51;
org$frostlang$frostc$MethodDecl* _53;
frost$core$Object* _54;
frost$core$Object* _57;
frost$core$Object* _59;
frost$core$Object* _61;
org$frostlang$frostc$MethodDecl* _64;
frost$collections$Array* _65;
frost$core$Int _66;
org$frostlang$frostc$IR$Value* _68;
frost$core$Int _69;
int64_t _70;
frost$core$Int _71;
int64_t _74;
uint64_t _75;
frost$core$UInt64 _76;
frost$core$Weak** _78;
frost$core$Weak* _79;
frost$core$Bit* _84;
frost$core$Bit _85;
bool _87;
frost$core$Int _89;
frost$core$Object** _93;
frost$core$Object* _94;
frost$core$Object* _95;
frost$core$Object* _96;
org$frostlang$frostc$Compiler* _99;
bool _100;
frost$core$Bit _101;
bool _102;
frost$core$Int _104;
org$frostlang$frostc$Compiler* _107;
org$frostlang$frostc$Type** _108;
org$frostlang$frostc$Type* _109;
frost$core$Object* _111;
org$frostlang$frostc$FixedArray* _113;
$fn48 _114;
frost$core$Int64 _115;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$Object* _120;
frost$core$Object* _122;
org$frostlang$frostc$MethodDecl* _126;
frost$core$Object* _127;
org$frostlang$frostc$ClassDecl* _130;
frost$core$Object* _131;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:257
_1 = ((frost$core$Int*) param1);
_2 = *_1;
_3 = _2.value;
_4 = ((frost$core$Int*) _3);
_5 = ((org$frostlang$frostc$ClassDecl*) _4);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
_7 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local0);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local0) = _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:258
_14 = &param0->compiler;
_15 = *_14;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:258:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_20 = &_15->_valid;
_21 = *_20;
_23 = _21.value;
if (_23) goto block3; else goto block4;
block4:;
_25 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s49, _25, &$s50);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_29 = &_15->value;
_30 = *_29;
_31 = _30;
_32 = _31;
frost$core$Frost$ref$frost$core$Object$Q(_32);
_35 = ((org$frostlang$frostc$Compiler*) _31);
_36 = _35 != NULL;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block5; else goto block6;
block6:;
_40 = (frost$core$Int) {258u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _40, &$s52);
abort(); // unreachable
block5:;
_43 = _35;
_44 = *(&local0);
_45 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_43, _44);
_46 = (frost$core$Int) {1u};
ITable* $tmp53 = _45->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp53 = $tmp53->next;
}
_47 = $tmp53->methods[0];
_48 = _47(_45, _46);
_49 = ((org$frostlang$frostc$MethodDecl*) _48);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
_51 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local1);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local1) = _49;
_57 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_59);
_61 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_61);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:259
_64 = *(&local1);
_65 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_66 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_65, _66);
_68 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_69 = (frost$core$Int) {1u};
_70 = ((int64_t) param1);
_71 = (frost$core$Int) {_70};
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Interpreter.frost:259:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_74 = _71.value;
_75 = ((uint64_t) _74);
_76 = (frost$core$UInt64) {_75};
_78 = &param0->compiler;
_79 = *_78;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:260:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_84 = &_79->_valid;
_85 = *_84;
_87 = _85.value;
if (_87) goto block10; else goto block11;
block11:;
_89 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s54, _89, &$s55);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_93 = &_79->value;
_94 = *_93;
_95 = _94;
_96 = _95;
frost$core$Frost$ref$frost$core$Object$Q(_96);
_99 = ((org$frostlang$frostc$Compiler*) _95);
_100 = _99 != NULL;
_101 = (frost$core$Bit) {_100};
_102 = _101.value;
if (_102) goto block12; else goto block13;
block13:;
_104 = (frost$core$Int) {260u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s56, _104, &$s57);
abort(); // unreachable
block12:;
_107 = _99;
_108 = &_107->INVALID_TYPE;
_109 = *_108;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Type(_68, _69, _76, _109);
_111 = ((frost$core$Object*) _68);
frost$collections$Array$add$frost$collections$Array$T(_65, _111);
_113 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(_65);
_114 = ($fn58) param0->$class->vtable[23];
_115 = _114(param0, _64, _113);
_116 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = _95;
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_122);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:262
frostFree(param1);
_126 = *(&local1);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
_130 = *(&local0);
_131 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_131);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;

}
void org$frostlang$frostc$Interpreter$ref$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, frost$core$UInt8* param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int32* local0;
frost$core$Int32 local1;
int64_t _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$MemoryLayout** _16;
org$frostlang$frostc$MemoryLayout* _17;
$fn59 _18;
frost$core$Int _19;
frost$core$Int64 _20;
int64_t _21;
frost$core$UInt8* _22;
frost$core$Int32* _23;
frost$core$Int32* _26;
frost$core$Int32 _27;
frost$core$Int32 _30;
frost$core$Int _31;
int64_t _34;
int32_t _35;
frost$core$Int32 _36;
int32_t _40;
int32_t _41;
bool _42;
frost$core$Bit _43;
bool _45;
frost$core$Int32* _50;
frost$core$Int32 _51;
frost$core$Int32 _52;
int32_t _53;
int32_t _54;
int32_t _55;
frost$core$Int32 _56;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:266
_1 = ((int64_t) param1);
_2 = (frost$core$Int) {_1};
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:266:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:267
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:269
_16 = &param0->memoryLayout;
_17 = *_16;
_18 = ($fn60) _17->$class->vtable[3];
_19 = _18(_17);
_20 = frost$core$Int64$init$frost$core$Int(_19);
_21 = _20.value;
_22 = param1 + _21;
_23 = ((frost$core$Int32*) _22);
*(&local0) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:270
_26 = *(&local0);
_27 = *_26;
*(&local1) = _27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:271
_30 = *(&local1);
_31 = (frost$core$Int) {18446744073709550617u};
// begin inline call to function frost.core.Int.get_asInt32():frost.core.Int32 from Interpreter.frost:271:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:973
_34 = _31.value;
_35 = ((int32_t) _34);
_36 = (frost$core$Int32) {_35};
// begin inline call to function frost.core.Int32.=(other:frost.core.Int32):frost.core.Bit from Interpreter.frost:271:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:413
_40 = _30.value;
_41 = _36.value;
_42 = _40 == _41;
_43 = (frost$core$Bit) {_42};
_45 = _43.value;
if (_45) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:272
return;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:274
_50 = *(&local0);
_51 = *(&local1);
_52 = (frost$core$Int32) {1u};
_53 = _51.value;
_54 = _52.value;
_55 = _53 + _54;
_56 = (frost$core$Int32) {_55};
*_50 = _56;
return;

}
void org$frostlang$frostc$Interpreter$unref$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, frost$core$UInt8* param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int32* local0;
frost$core$Int32 local1;
int64_t _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _11;
org$frostlang$frostc$MemoryLayout** _16;
org$frostlang$frostc$MemoryLayout* _17;
$fn61 _18;
frost$core$Int _19;
frost$core$Int64 _20;
int64_t _21;
frost$core$UInt8* _22;
frost$core$Int32* _23;
frost$core$Int32* _26;
frost$core$Int32 _27;
frost$core$Int32 _30;
frost$core$Int _31;
int64_t _34;
int32_t _35;
frost$core$Int32 _36;
int32_t _40;
int32_t _41;
bool _42;
frost$core$Bit _43;
bool _45;
frost$core$Int32 _50;
frost$core$Int32 _51;
int32_t _54;
int32_t _55;
bool _56;
frost$core$Bit _57;
bool _59;
$fn62 _62;
frost$core$Int32* _67;
frost$core$Int32 _68;
frost$core$Int32 _69;
int32_t _70;
int32_t _71;
int32_t _72;
frost$core$Int32 _73;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:278
_1 = ((int64_t) param1);
_2 = (frost$core$Int) {_1};
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:278:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:279
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:281
_16 = &param0->memoryLayout;
_17 = *_16;
_18 = ($fn63) _17->$class->vtable[3];
_19 = _18(_17);
_20 = frost$core$Int64$init$frost$core$Int(_19);
_21 = _20.value;
_22 = param1 + _21;
_23 = ((frost$core$Int32*) _22);
*(&local0) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:282
_26 = *(&local0);
_27 = *_26;
*(&local1) = _27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:283
_30 = *(&local1);
_31 = (frost$core$Int) {18446744073709550617u};
// begin inline call to function frost.core.Int.get_asInt32():frost.core.Int32 from Interpreter.frost:283:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:973
_34 = _31.value;
_35 = ((int32_t) _34);
_36 = (frost$core$Int32) {_35};
// begin inline call to function frost.core.Int32.=(other:frost.core.Int32):frost.core.Bit from Interpreter.frost:283:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:413
_40 = _30.value;
_41 = _36.value;
_42 = _40 == _41;
_43 = (frost$core$Bit) {_42};
_45 = _43.value;
if (_45) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:284
return;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:286
_50 = *(&local1);
_51 = (frost$core$Int32) {1u};
// begin inline call to function frost.core.Int32.=(other:frost.core.Int32):frost.core.Bit from Interpreter.frost:286:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:413
_54 = _50.value;
_55 = _51.value;
_56 = _54 == _55;
_57 = (frost$core$Bit) {_56};
_59 = _57.value;
if (_59) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:287
_62 = ($fn64) param0->$class->vtable[11];
_62(param0, param1);
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:290
_67 = *(&local0);
_68 = *(&local1);
_69 = (frost$core$Int32) {1u};
_70 = _68.value;
_71 = _69.value;
_72 = _70 - _71;
_73 = (frost$core$Int32) {_72};
*_67 = _73;
goto block9;
block9:;
return;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$$anonymous22$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(org$frostlang$frostc$Interpreter$Context* param0, org$frostlang$frostc$FixedArray* param1) {

frost$core$Int local0;
frost$core$String* local1 = NULL;
frost$core$Int _1;
frost$core$Object* _2;
org$frostlang$frostc$IR$Value* _3;
$fn65 _4;
frost$core$Int64 _5;
int64_t _8;
int64_t _9;
frost$core$Int _10;
frost$core$Object* _13;
frost$core$Int _16;
int64_t _17;
frost$core$UInt8* _18;
frost$core$String* _19;
frost$core$Object* _21;
frost$core$String* _23;
frost$core$Object* _24;
frost$core$String* _28;
frost$core$Int64 _31;
frost$core$String* _32;
frost$core$Object* _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:313
_1 = (frost$core$Int) {0u};
_2 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param1, _1);
_3 = ((org$frostlang$frostc$IR$Value*) _2);
_4 = ($fn66) param0->$class->vtable[2];
_5 = _4(param0, _3);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:313:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_8 = _5.value;
_9 = ((int64_t) _8);
_10 = (frost$core$Int) {_9};
*(&local0) = _10;
_13 = _2;
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:314
_16 = *(&local0);
_17 = _16.value;
_18 = ((frost$core$UInt8*) _17);
_19 = ((frost$core$String*) _18);
*(&local1) = ((frost$core$String*) NULL);
_21 = ((frost$core$Object*) _19);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = *(&local1);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
*(&local1) = _19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:315
_28 = *(&local1);
frost$io$Console$print$frost$core$String(_28);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:316
_31 = (frost$core$Int64) {18446744073709551615u};
_32 = *(&local1);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local1) = ((frost$core$String*) NULL);
return _31;

}
frost$core$MutableMethod* org$frostlang$frostc$Interpreter$getBuiltin$org$frostlang$frostc$MethodDecl$R$$LPorg$frostlang$frostc$Interpreter$Context$Corg$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$RP$EQ$AM$GT$LPfrost$core$Int64$RP(void* rawSelf, org$frostlang$frostc$MethodDecl* param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$MutableMethod* local0 = NULL;
frost$core$String* local1 = NULL;
frost$collections$IdentityMap** _1;
frost$collections$IdentityMap* _2;
frost$core$Object* _3;
frost$core$Object* _4;
frost$core$MutableMethod* _5;
frost$core$Object* _7;
frost$core$MutableMethod* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$core$MutableMethod* _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Weak** _22;
frost$core$Weak* _23;
frost$core$Bit* _28;
frost$core$Bit _29;
bool _31;
frost$core$Int _33;
frost$core$Object** _37;
frost$core$Object* _38;
frost$core$Object* _39;
frost$core$Object* _40;
org$frostlang$frostc$ClassDecl* _43;
frost$core$String** _44;
frost$core$String* _45;
frost$core$String* _46;
frost$core$String* _47;
frost$core$String* _48;
frost$core$Object* _50;
frost$core$String* _52;
frost$core$Object* _53;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$String* _65;
frost$core$Bit _66;
bool _67;
org$frostlang$frostc$Interpreter$_Closure19* _70;
frost$core$Int8* _72;
frost$core$MutableMethod* _73;
frost$core$Object* _74;
frost$core$Int8** _77;
frost$core$Object** _81;
frost$core$Object* _82;
frost$core$Object** _84;
frost$core$MutableMethod* _87;
frost$core$MutableMethod* _88;
frost$core$Object* _89;
frost$core$MutableMethod* _91;
frost$core$Object* _92;
frost$core$Object* _95;
frost$core$Object* _97;
frost$core$Bit _100;
bool _101;
org$frostlang$frostc$Interpreter$_Closure21* _104;
frost$core$Int8* _106;
frost$core$MutableMethod* _107;
frost$core$Object* _108;
frost$core$Int8** _111;
frost$core$Object** _115;
frost$core$Object* _116;
frost$core$Object** _118;
frost$core$MutableMethod* _121;
frost$core$MutableMethod* _122;
frost$core$Object* _123;
frost$core$MutableMethod* _125;
frost$core$Object* _126;
frost$core$Object* _129;
frost$core$Object* _131;
frost$core$Bit _134;
bool _135;
frost$core$Int8* _138;
frost$core$Method* _139;
frost$core$Int8** _142;
frost$core$Object* _145;
frost$core$Immutable** _147;
frost$core$Immutable* _148;
frost$core$Object* _149;
frost$core$Immutable** _151;
frost$core$Method* _154;
frost$core$MutableMethod* _155;
frost$core$Object* _156;
frost$core$MutableMethod* _158;
frost$core$Object* _159;
frost$core$Object* _162;
frost$core$String* _166;
frost$core$String* _167;
frost$core$String* _168;
frost$core$String* _169;
frost$core$Object* _179;
frost$core$Object* _181;
frost$core$Object* _183;
frost$core$Int _186;
frost$core$Int _188;
frost$collections$IdentityMap** _192;
frost$collections$IdentityMap* _193;
frost$core$Object* _194;
frost$core$MutableMethod* _195;
bool _196;
frost$core$Bit _197;
bool _198;
frost$core$Int _200;
frost$core$MutableMethod* _203;
frost$core$Object* _204;
frost$core$String* _206;
frost$core$Object* _207;
frost$core$MutableMethod* _212;
bool _213;
frost$core$Bit _214;
bool _215;
frost$core$Int _217;
frost$core$MutableMethod* _220;
frost$core$Object* _221;
frost$core$MutableMethod* _223;
frost$core$Object* _224;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:295
_1 = &param0->builtins;
_2 = *_1;
_3 = ((frost$core$Object*) param1);
_4 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_2, _3);
_5 = ((frost$core$MutableMethod*) _4);
*(&local0) = ((frost$core$MutableMethod*) NULL);
_7 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local0);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local0) = _5;
_13 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:296
_16 = *(&local0);
_17 = _16 == NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:297
_22 = &param1->owner;
_23 = *_22;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:297:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_28 = &_23->_valid;
_29 = *_28;
_31 = _29.value;
if (_31) goto block5; else goto block6;
block6:;
_33 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s67, _33, &$s68);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_37 = &_23->value;
_38 = *_37;
_39 = _38;
_40 = _39;
frost$core$Frost$ref$frost$core$Object$Q(_40);
_43 = ((org$frostlang$frostc$ClassDecl*) _39);
_44 = &_43->name;
_45 = *_44;
_46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_45, &$s69);
_47 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String(param1);
_48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_46, _47);
*(&local1) = ((frost$core$String*) NULL);
_50 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local1);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local1) = _48;
_56 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = _39;
frost$core$Frost$unref$frost$core$Object$Q(_62);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:298
_65 = *(&local1);
_66 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s70);
_67 = _66.value;
if (_67) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:300
_70 = (org$frostlang$frostc$Interpreter$_Closure19*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$_Closure19), (frost$core$Class*) &org$frostlang$frostc$Interpreter$_Closure19$class);
org$frostlang$frostc$Interpreter$_Closure19$init$org$frostlang$frostc$Interpreter(_70, param0);
_72 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$_Closure19$$anonymous18$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64);
_73 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_74 = ((frost$core$Object*) _70);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Interpreter.frost:300:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_77 = &_73->pointer;
*_77 = _72;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_74);
_81 = &_73->target;
_82 = *_81;
frost$core$Frost$unref$frost$core$Object$Q(_82);
_84 = &_73->target;
*_84 = _74;
_87 = _73;
_88 = _87;
_89 = ((frost$core$Object*) _88);
frost$core$Frost$ref$frost$core$Object$Q(_89);
_91 = *(&local0);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_92);
*(&local0) = _88;
_95 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_95);
_97 = ((frost$core$Object*) _70);
frost$core$Frost$unref$frost$core$Object$Q(_97);
goto block7;
block9:;
_100 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s71);
_101 = _100.value;
if (_101) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:306
_104 = (org$frostlang$frostc$Interpreter$_Closure21*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$_Closure21), (frost$core$Class*) &org$frostlang$frostc$Interpreter$_Closure21$class);
org$frostlang$frostc$Interpreter$_Closure21$init$org$frostlang$frostc$Interpreter(_104, param0);
_106 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$_Closure21$$anonymous20$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64);
_107 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_108 = ((frost$core$Object*) _104);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Interpreter.frost:306:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_111 = &_107->pointer;
*_111 = _106;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_108);
_115 = &_107->target;
_116 = *_115;
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = &_107->target;
*_118 = _108;
_121 = _107;
_122 = _121;
_123 = ((frost$core$Object*) _122);
frost$core$Frost$ref$frost$core$Object$Q(_123);
_125 = *(&local0);
_126 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_126);
*(&local0) = _122;
_129 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_129);
_131 = ((frost$core$Object*) _104);
frost$core$Frost$unref$frost$core$Object$Q(_131);
goto block7;
block12:;
_134 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s72);
_135 = _134.value;
if (_135) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:312
_138 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$$anonymous22$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64);
_139 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Interpreter.frost:312:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_142 = &_139->pointer;
*_142 = _138;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_145 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_145);
_147 = &_139->target;
_148 = *_147;
_149 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_149);
_151 = &_139->target;
*_151 = ((frost$core$Immutable*) NULL);
_154 = _139;
_155 = ((frost$core$MutableMethod*) _154);
_156 = ((frost$core$Object*) _155);
frost$core$Frost$ref$frost$core$Object$Q(_156);
_158 = *(&local0);
_159 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_159);
*(&local0) = _155;
_162 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_162);
goto block7;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:320
_166 = *(&local1);
_167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s73, _166);
_168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_167, &$s74);
_169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_168, &$s75);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Interpreter.frost:320:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_169);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s76);
_179 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_179);
_181 = ((frost$core$Object*) _168);
frost$core$Frost$unref$frost$core$Object$Q(_181);
_183 = ((frost$core$Object*) _167);
frost$core$Frost$unref$frost$core$Object$Q(_183);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:322
_186 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_186);
_188 = (frost$core$Int) {322u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s77, _188, &$s78);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:325
_192 = &param0->builtins;
_193 = *_192;
_194 = ((frost$core$Object*) param1);
_195 = *(&local0);
_196 = _195 != NULL;
_197 = (frost$core$Bit) {_196};
_198 = _197.value;
if (_198) goto block19; else goto block20;
block20:;
_200 = (frost$core$Int) {325u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s79, _200, &$s80);
abort(); // unreachable
block19:;
_203 = _195;
_204 = ((frost$core$Object*) _203);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(_193, _194, _204);
_206 = *(&local1);
_207 = ((frost$core$Object*) _206);
frost$core$Frost$unref$frost$core$Object$Q(_207);
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:327
_212 = *(&local0);
_213 = _212 != NULL;
_214 = (frost$core$Bit) {_213};
_215 = _214.value;
if (_215) goto block21; else goto block22;
block22:;
_217 = (frost$core$Int) {327u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s81, _217, &$s82);
abort(); // unreachable
block21:;
_220 = _212;
_221 = ((frost$core$Object*) _220);
frost$core$Frost$ref$frost$core$Object$Q(_221);
_223 = *(&local0);
_224 = ((frost$core$Object*) _223);
frost$core$Frost$unref$frost$core$Object$Q(_224);
*(&local0) = ((frost$core$MutableMethod*) NULL);
return _220;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$callBuiltin$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$FixedArray* param3) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int64 local0;
$fn83 _1;
frost$core$MutableMethod* _2;
frost$core$MutableMethod* _3;
frost$core$Int8** _4;
frost$core$Int8* _5;
frost$core$Object** _6;
frost$core$Object* _7;
bool _8;
$fn84 _10;
frost$core$Int64 _11;
$fn85 _14;
frost$core$Int64 _15;
frost$core$Int64 _18;
frost$core$Object* _19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:331
_1 = ($fn86) param0->$class->vtable[14];
_2 = _1(param0, param2);
_3 = _2;
_4 = &_3->pointer;
_5 = *_4;
_6 = &_3->target;
_7 = *_6;
_8 = _7 != ((frost$core$Object*) NULL);
if (_8) goto block1; else goto block2;
block2:;
_10 = (($fn87) _5);
_11 = _10(param1, param3);
*(&local0) = _11;
goto block3;
block1:;
_14 = (($fn88) _5);
_15 = _14(_7, param1, param3);
*(&local0) = _15;
goto block3;
block3:;
_18 = *(&local0);
_19 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_19);
return _18;

}
void org$frostlang$frostc$Interpreter$cast$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$Type* param4) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Int64 local1;
frost$core$UInt8* local2;
org$frostlang$frostc$ClassDecl* local3 = NULL;
frost$core$UInt8* local4;
frost$core$UInt8* local5;
frost$core$Int local6;
$fn89 _1;
org$frostlang$frostc$Type* _2;
frost$core$Object* _4;
org$frostlang$frostc$Type* _6;
frost$core$Object* _7;
frost$core$Object* _10;
$fn90 _13;
frost$core$Int64 _14;
frost$core$Weak** _17;
frost$core$Weak* _18;
frost$core$Bit* _23;
frost$core$Bit _24;
bool _26;
frost$core$Int _28;
frost$core$Object** _32;
frost$core$Object* _33;
frost$core$Object* _34;
frost$core$Object* _35;
org$frostlang$frostc$Compiler* _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$core$Int _43;
org$frostlang$frostc$Compiler* _46;
org$frostlang$frostc$Type* _47;
frost$core$Bit _48;
bool _49;
frost$core$Object* _50;
frost$core$Weak** _53;
frost$core$Weak* _54;
frost$core$Bit* _59;
frost$core$Bit _60;
bool _62;
frost$core$Int _64;
frost$core$Object** _68;
frost$core$Object* _69;
frost$core$Object* _70;
frost$core$Object* _71;
org$frostlang$frostc$Compiler* _74;
bool _75;
frost$core$Bit _76;
bool _77;
frost$core$Int _79;
org$frostlang$frostc$Compiler* _82;
frost$core$Bit _83;
bool _86;
bool _87;
frost$core$Bit _88;
bool _90;
frost$core$Object* _91;
org$frostlang$frostc$MemoryLayout** _95;
org$frostlang$frostc$MemoryLayout* _96;
org$frostlang$frostc$Type* _97;
$fn91 _98;
frost$core$Int _99;
frost$core$Int64 _100;
int64_t _101;
frost$core$UInt8* _102;
frost$core$Weak** _105;
frost$core$Weak* _106;
frost$core$Bit* _111;
frost$core$Bit _112;
bool _114;
frost$core$Int _116;
frost$core$Object** _120;
frost$core$Object* _121;
frost$core$Object* _122;
frost$core$Object* _123;
org$frostlang$frostc$Compiler* _126;
bool _127;
frost$core$Bit _128;
bool _129;
frost$core$Int _131;
org$frostlang$frostc$Compiler* _134;
org$frostlang$frostc$Type* _135;
org$frostlang$frostc$ClassDecl* _136;
bool _137;
frost$core$Bit _138;
bool _139;
frost$core$Int _141;
org$frostlang$frostc$ClassDecl* _144;
frost$core$Object* _146;
org$frostlang$frostc$ClassDecl* _148;
frost$core$Object* _149;
frost$core$Object* _152;
frost$core$Object* _154;
frost$core$UInt8* _157;
org$frostlang$frostc$ClassDecl** _158;
org$frostlang$frostc$ClassDecl* _159;
frost$core$Object* _160;
org$frostlang$frostc$ClassDecl* _162;
frost$core$Object* _163;
frost$core$UInt8* _167;
org$frostlang$frostc$MemoryLayout** _168;
org$frostlang$frostc$MemoryLayout* _169;
$fn92 _170;
frost$core$Int _171;
frost$core$Int64 _172;
int64_t _173;
frost$core$UInt8* _174;
frost$core$UInt8* _177;
frost$core$Int32* _178;
frost$core$Int32 _179;
frost$core$UInt8* _182;
frost$core$Int64 _183;
int64_t _184;
frost$core$UInt8* _185;
$fn93 _189;
org$frostlang$frostc$Type* _190;
$fn94 _191;
frost$core$Bit _192;
bool _193;
frost$core$Object* _194;
frost$core$Int64 _198;
int64_t _201;
int64_t _202;
frost$core$Int _203;
int64_t _205;
frost$core$UInt8* _206;
frost$core$UInt8** _211;
frost$core$UInt8* _212;
frost$core$Int64* _213;
frost$core$Int64 _214;
frost$core$UInt8** _217;
frost$core$UInt8* _218;
frost$core$Int _222;
org$frostlang$frostc$MemoryLayout** _223;
org$frostlang$frostc$MemoryLayout* _224;
org$frostlang$frostc$ClassDecl* _225;
org$frostlang$frostc$Type** _226;
org$frostlang$frostc$Type* _227;
$fn95 _228;
frost$core$Int _229;
frost$core$Bit _230;
frost$core$Range$LTfrost$core$Int$GT _231;
frost$core$Int _232;
frost$core$Int _234;
frost$core$Bit _235;
bool _236;
frost$core$Int _237;
int64_t _239;
int64_t _240;
bool _241;
frost$core$Bit _242;
bool _243;
int64_t _245;
int64_t _246;
bool _247;
frost$core$Bit _248;
bool _249;
frost$core$UInt8* _252;
frost$core$Int _253;
frost$core$Int64 _254;
frost$core$UInt8* _255;
frost$core$Int _256;
frost$core$Int64 _257;
int64_t _258;
frost$core$UInt8 _259;
int64_t _260;
frost$core$Int _263;
int64_t _264;
int64_t _265;
int64_t _266;
frost$core$Int _267;
int64_t _269;
int64_t _270;
bool _271;
frost$core$Bit _272;
bool _273;
int64_t _275;
int64_t _276;
bool _277;
frost$core$Bit _278;
bool _279;
int64_t _281;
int64_t _282;
int64_t _283;
frost$core$Int _284;
frost$collections$Array** _288;
frost$collections$Array* _289;
frost$core$Int _290;
frost$core$UInt8* _291;
int64_t _292;
frost$core$Int _293;
int64_t _296;
int64_t _297;
frost$core$Int64 _298;
frost$core$Int64$nullable _300;
frost$core$Object* _301;
frost$core$Int _303;
int64_t _304;
int64_t _305;
bool _306;
frost$core$Bit _307;
bool _308;
frost$collections$CollectionView* _310;
$fn96 _311;
frost$core$Int _312;
int64_t _313;
int64_t _314;
bool _315;
frost$core$Bit _316;
bool _317;
frost$core$Int _319;
frost$core$Object*** _323;
frost$core$Object** _324;
frost$core$Int64 _325;
int64_t _326;
frost$core$Object* _327;
frost$core$Object* _329;
frost$core$Object* _330;
frost$core$Object* _334;
org$frostlang$frostc$ClassDecl* _337;
frost$core$Object* _338;
org$frostlang$frostc$Type* _341;
frost$core$Object* _342;
org$frostlang$frostc$Type* _347;
frost$core$Bit _348;
bool _349;
frost$core$Bit _351;
bool _352;
org$frostlang$frostc$Type* _355;
frost$core$Int _356;
frost$core$Int _357;
int64_t _358;
int64_t _359;
bool _360;
frost$core$Bit _361;
bool _362;
frost$collections$Array** _365;
frost$collections$Array* _366;
frost$core$Int _367;
frost$core$Int64 _368;
int64_t _371;
uint64_t _372;
frost$core$UInt64 _373;
frost$core$UInt64 _375;
frost$core$Int _376;
frost$core$Int _377;
int64_t _378;
int64_t _379;
int64_t _380;
frost$core$Int _381;
int64_t _384;
uint64_t _385;
frost$core$UInt64 _386;
uint64_t _390;
uint64_t _391;
uint64_t _392;
frost$core$UInt64 _393;
uint64_t _397;
uint64_t _398;
uint64_t _399;
frost$core$UInt64 _400;
uint64_t _404;
int64_t _405;
frost$core$Int64 _406;
frost$core$Int64$nullable _408;
frost$core$Object* _409;
frost$core$Int _411;
int64_t _412;
int64_t _413;
bool _414;
frost$core$Bit _415;
bool _416;
frost$collections$CollectionView* _418;
$fn97 _419;
frost$core$Int _420;
int64_t _421;
int64_t _422;
bool _423;
frost$core$Bit _424;
bool _425;
frost$core$Int _427;
frost$core$Object*** _431;
frost$core$Object** _432;
frost$core$Int64 _433;
int64_t _434;
frost$core$Object* _435;
frost$core$Object* _437;
frost$core$Object* _438;
frost$core$Object* _442;
org$frostlang$frostc$Type* _445;
frost$core$Object* _446;
org$frostlang$frostc$Type* _451;
frost$core$Int _452;
frost$core$Int _453;
int64_t _456;
int64_t _457;
bool _458;
frost$core$Bit _459;
bool _461;
frost$collections$Array** _464;
frost$collections$Array* _465;
frost$core$Int _466;
frost$core$Int64 _467;
frost$core$Int64$nullable _468;
frost$core$Object* _469;
frost$core$Int _471;
int64_t _472;
int64_t _473;
bool _474;
frost$core$Bit _475;
bool _476;
frost$collections$CollectionView* _478;
$fn98 _479;
frost$core$Int _480;
int64_t _481;
int64_t _482;
bool _483;
frost$core$Bit _484;
bool _485;
frost$core$Int _487;
frost$core$Object*** _491;
frost$core$Object** _492;
frost$core$Int64 _493;
int64_t _494;
frost$core$Object* _495;
frost$core$Object* _497;
frost$core$Object* _498;
frost$core$Object* _502;
org$frostlang$frostc$Type* _505;
frost$core$Object* _506;
frost$collections$Array** _512;
frost$collections$Array* _513;
frost$core$Int _514;
frost$core$Int64 _515;
frost$core$Int64$nullable _516;
frost$core$Object* _517;
frost$core$Int _519;
int64_t _520;
int64_t _521;
bool _522;
frost$core$Bit _523;
bool _524;
frost$collections$CollectionView* _526;
$fn99 _527;
frost$core$Int _528;
int64_t _529;
int64_t _530;
bool _531;
frost$core$Bit _532;
bool _533;
frost$core$Int _535;
frost$core$Object*** _539;
frost$core$Object** _540;
frost$core$Int64 _541;
int64_t _542;
frost$core$Object* _543;
frost$core$Object* _545;
frost$core$Object* _546;
frost$core$Object* _550;
org$frostlang$frostc$Type* _552;
frost$core$Object* _553;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:335
_1 = ($fn100) param3->$class->vtable[2];
_2 = _1(param3);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _2;
_10 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:336
_13 = ($fn101) param1->$class->vtable[2];
_14 = _13(param1, param3);
*(&local1) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:337
_17 = &param0->compiler;
_18 = *_17;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:337:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_23 = &_18->_valid;
_24 = *_23;
_26 = _24.value;
if (_26) goto block6; else goto block7;
block7:;
_28 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s102, _28, &$s103);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_32 = &_18->value;
_33 = *_32;
_34 = _33;
_35 = _34;
frost$core$Frost$ref$frost$core$Object$Q(_35);
_38 = ((org$frostlang$frostc$Compiler*) _34);
_39 = _38 != NULL;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block8; else goto block9;
block9:;
_43 = (frost$core$Int) {337u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s104, _43, &$s105);
abort(); // unreachable
block8:;
_46 = _38;
_47 = *(&local0);
_48 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_46, _47);
_49 = _48.value;
_50 = _34;
frost$core$Frost$unref$frost$core$Object$Q(_50);
if (_49) goto block3; else goto block2;
block3:;
_53 = &param0->compiler;
_54 = *_53;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:337:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_59 = &_54->_valid;
_60 = *_59;
_62 = _60.value;
if (_62) goto block12; else goto block13;
block13:;
_64 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s106, _64, &$s107);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_68 = &_54->value;
_69 = *_68;
_70 = _69;
_71 = _70;
frost$core$Frost$ref$frost$core$Object$Q(_71);
_74 = ((org$frostlang$frostc$Compiler*) _70);
_75 = _74 != NULL;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block14; else goto block15;
block15:;
_79 = (frost$core$Int) {337u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s108, _79, &$s109);
abort(); // unreachable
block14:;
_82 = _74;
_83 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_82, param4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Interpreter.frost:337:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_86 = _83.value;
_87 = !_86;
_88 = (frost$core$Bit) {_87};
_90 = _88.value;
_91 = _70;
frost$core$Frost$unref$frost$core$Object$Q(_91);
if (_90) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:338
_95 = &param0->memoryLayout;
_96 = *_95;
_97 = *(&local0);
_98 = ($fn110) _96->$class->vtable[9];
_99 = _98(_96, _97);
_100 = frost$core$Int64$init$frost$core$Int(_99);
_101 = _100.value;
_102 = ((frost$core$UInt8*) frostAlloc(_101 * sizeof(frost$core$UInt8)));
*(&local2) = _102;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:339
_105 = &param0->compiler;
_106 = *_105;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:339:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_111 = &_106->_valid;
_112 = *_111;
_114 = _112.value;
if (_114) goto block19; else goto block20;
block20:;
_116 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s111, _116, &$s112);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_120 = &_106->value;
_121 = *_120;
_122 = _121;
_123 = _122;
frost$core$Frost$ref$frost$core$Object$Q(_123);
_126 = ((org$frostlang$frostc$Compiler*) _122);
_127 = _126 != NULL;
_128 = (frost$core$Bit) {_127};
_129 = _128.value;
if (_129) goto block21; else goto block22;
block22:;
_131 = (frost$core$Int) {339u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s113, _131, &$s114);
abort(); // unreachable
block21:;
_134 = _126;
_135 = *(&local0);
_136 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(_134, _135);
_137 = _136 != NULL;
_138 = (frost$core$Bit) {_137};
_139 = _138.value;
if (_139) goto block23; else goto block24;
block24:;
_141 = (frost$core$Int) {339u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s115, _141, &$s116);
abort(); // unreachable
block23:;
_144 = _136;
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
_146 = ((frost$core$Object*) _144);
frost$core$Frost$ref$frost$core$Object$Q(_146);
_148 = *(&local3);
_149 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_149);
*(&local3) = _144;
_152 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_152);
_154 = _122;
frost$core$Frost$unref$frost$core$Object$Q(_154);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:340
_157 = *(&local2);
_158 = ((org$frostlang$frostc$ClassDecl**) _157);
_159 = *(&local3);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$ref$frost$core$Object$Q(_160);
_162 = *_158;
_163 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_163);
*_158 = _159;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:341
_167 = *(&local2);
_168 = &param0->memoryLayout;
_169 = *_168;
_170 = ($fn117) _169->$class->vtable[3];
_171 = _170(_169);
_172 = frost$core$Int64$init$frost$core$Int(_171);
_173 = _172.value;
_174 = _167 + _173;
*(&local4) = _174;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:342
_177 = *(&local4);
_178 = ((frost$core$Int32*) _177);
_179 = (frost$core$Int32) {1u};
*_178 = _179;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:343
_182 = *(&local4);
_183 = (frost$core$Int64) {5u};
_184 = _183.value;
_185 = _182 + _184;
*(&local4) = _185;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:344
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:345
_189 = ($fn118) param3->$class->vtable[2];
_190 = _189(param3);
_191 = ($fn119) param0->$class->vtable[10];
_192 = _191(param0, _190);
_193 = _192.value;
_194 = ((frost$core$Object*) _190);
frost$core$Frost$unref$frost$core$Object$Q(_194);
if (_193) goto block25; else goto block27;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:346
_198 = *(&local1);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:346:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_201 = _198.value;
_202 = ((int64_t) _201);
_203 = (frost$core$Int) {_202};
_205 = _203.value;
_206 = ((frost$core$UInt8*) _205);
*(&local5) = _206;
goto block26;
block27:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:349
_211 = &param0->stack;
_212 = *_211;
_213 = ((frost$core$Int64*) _212);
_214 = *(&local1);
*_213 = _214;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:350
_217 = &param0->stack;
_218 = *_217;
*(&local5) = _218;
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:353
_222 = (frost$core$Int) {0u};
_223 = &param0->memoryLayout;
_224 = *_223;
_225 = *(&local3);
_226 = &_225->type;
_227 = *_226;
_228 = ($fn120) _224->$class->vtable[7];
_229 = _228(_224, _227);
_230 = (frost$core$Bit) {false};
_231 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_222, _229, _230);
_232 = _231.min;
*(&local6) = _232;
_234 = _231.max;
_235 = _231.inclusive;
_236 = _235.value;
_237 = (frost$core$Int) {1u};
if (_236) goto block32; else goto block33;
block32:;
_239 = _232.value;
_240 = _234.value;
_241 = _239 <= _240;
_242 = (frost$core$Bit) {_241};
_243 = _242.value;
if (_243) goto block29; else goto block30;
block33:;
_245 = _232.value;
_246 = _234.value;
_247 = _245 < _246;
_248 = (frost$core$Bit) {_247};
_249 = _248.value;
if (_249) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:354
_252 = *(&local4);
_253 = *(&local6);
_254 = frost$core$Int64$init$frost$core$Int(_253);
_255 = *(&local5);
_256 = *(&local6);
_257 = frost$core$Int64$init$frost$core$Int(_256);
_258 = _257.value;
_259 = _255[_258];
_260 = _254.value;
_252[_260] = _259;
_263 = *(&local6);
_264 = _234.value;
_265 = _263.value;
_266 = _264 - _265;
_267 = (frost$core$Int) {_266};
if (_236) goto block35; else goto block36;
block35:;
_269 = _267.value;
_270 = _237.value;
_271 = _269 >= _270;
_272 = (frost$core$Bit) {_271};
_273 = _272.value;
if (_273) goto block34; else goto block30;
block36:;
_275 = _267.value;
_276 = _237.value;
_277 = _275 > _276;
_278 = (frost$core$Bit) {_277};
_279 = _278.value;
if (_279) goto block34; else goto block30;
block34:;
_281 = _263.value;
_282 = _237.value;
_283 = _281 + _282;
_284 = (frost$core$Int) {_283};
*(&local6) = _284;
goto block29;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:356
_288 = &param1->statements;
_289 = *_288;
_290 = param2.value;
_291 = *(&local2);
_292 = ((int64_t) _291);
_293 = (frost$core$Int) {_292};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:356:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_296 = _293.value;
_297 = ((int64_t) _296);
_298 = (frost$core$Int64) {_297};
_300 = ((frost$core$Int64$nullable) { _298, true });
frost$core$Object* $tmp121;
if (_300.nonnull) {
    frost$core$Int64$wrapper* $tmp122;
    $tmp122 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp122->value = ((frost$core$Int64) _300.value);
    $tmp121 = ((frost$core$Object*) $tmp122);
}
else {
    $tmp121 = NULL;
}
_301 = $tmp121;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:356:31
_303 = (frost$core$Int) {0u};
_304 = _290.value;
_305 = _303.value;
_306 = _304 >= _305;
_307 = (frost$core$Bit) {_306};
_308 = _307.value;
if (_308) goto block41; else goto block40;
block41:;
_310 = ((frost$collections$CollectionView*) _289);
ITable* $tmp123 = _310->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp123 = $tmp123->next;
}
_311 = $tmp123->methods[0];
_312 = _311(_310);
_313 = _290.value;
_314 = _312.value;
_315 = _313 < _314;
_316 = (frost$core$Bit) {_315};
_317 = _316.value;
if (_317) goto block39; else goto block40;
block40:;
_319 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s124, _319, &$s125);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_323 = &_289->data;
_324 = *_323;
_325 = frost$core$Int64$init$frost$core$Int(_290);
_326 = _325.value;
_327 = _301;
frost$core$Frost$ref$frost$core$Object$Q(_327);
_329 = _324[_326];
_330 = _329;
frost$core$Frost$unref$frost$core$Object$Q(_330);
_324[_326] = _301;
_334 = _301;
frost$core$Frost$unref$frost$core$Object$Q(_334);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:357
_337 = *(&local3);
_338 = ((frost$core$Object*) _337);
frost$core$Frost$unref$frost$core$Object$Q(_338);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
_341 = *(&local0);
_342 = ((frost$core$Object*) _341);
frost$core$Frost$unref$frost$core$Object$Q(_342);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:359
_347 = *(&local0);
_348 = org$frostlang$frostc$Type$get_isBuiltinInt$R$frost$core$Bit(_347);
_349 = _348.value;
if (_349) goto block44; else goto block43;
block44:;
_351 = org$frostlang$frostc$Type$get_isBuiltinInt$R$frost$core$Bit(param4);
_352 = _351.value;
if (_352) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:360
_355 = *(&local0);
_356 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(_355);
_357 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(param4);
_358 = _356.value;
_359 = _357.value;
_360 = _358 > _359;
_361 = (frost$core$Bit) {_360};
_362 = _361.value;
if (_362) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:361
_365 = &param1->statements;
_366 = *_365;
_367 = param2.value;
_368 = *(&local1);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Interpreter.frost:361:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_371 = _368.value;
_372 = ((uint64_t) _371);
_373 = (frost$core$UInt64) {_372};
_375 = (frost$core$UInt64) {18446744073709551615u};
_376 = (frost$core$Int) {64u};
_377 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(param4);
_378 = _376.value;
_379 = _377.value;
_380 = _378 - _379;
_381 = (frost$core$Int) {_380};
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Interpreter.frost:362:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_384 = _381.value;
_385 = ((uint64_t) _384);
_386 = (frost$core$UInt64) {_385};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from Interpreter.frost:362:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
_390 = _375.value;
_391 = _386.value;
_392 = _390 >> _391;
_393 = (frost$core$UInt64) {_392};
// begin inline call to function frost.core.UInt64.&&(other:frost.core.UInt64):frost.core.UInt64 from Interpreter.frost:361:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:166
_397 = _373.value;
_398 = _393.value;
_399 = _397 & _398;
_400 = (frost$core$UInt64) {_399};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Interpreter.frost:362:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_404 = _400.value;
_405 = ((int64_t) _404);
_406 = (frost$core$Int64) {_405};
_408 = ((frost$core$Int64$nullable) { _406, true });
frost$core$Object* $tmp126;
if (_408.nonnull) {
    frost$core$Int64$wrapper* $tmp127;
    $tmp127 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp127->value = ((frost$core$Int64) _408.value);
    $tmp126 = ((frost$core$Object*) $tmp127);
}
else {
    $tmp126 = NULL;
}
_409 = $tmp126;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:361:35
_411 = (frost$core$Int) {0u};
_412 = _367.value;
_413 = _411.value;
_414 = _412 >= _413;
_415 = (frost$core$Bit) {_414};
_416 = _415.value;
if (_416) goto block55; else goto block54;
block55:;
_418 = ((frost$collections$CollectionView*) _366);
ITable* $tmp128 = _418->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp128 = $tmp128->next;
}
_419 = $tmp128->methods[0];
_420 = _419(_418);
_421 = _367.value;
_422 = _420.value;
_423 = _421 < _422;
_424 = (frost$core$Bit) {_423};
_425 = _424.value;
if (_425) goto block53; else goto block54;
block54:;
_427 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s129, _427, &$s130);
abort(); // unreachable
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_431 = &_366->data;
_432 = *_431;
_433 = frost$core$Int64$init$frost$core$Int(_367);
_434 = _433.value;
_435 = _409;
frost$core$Frost$ref$frost$core$Object$Q(_435);
_437 = _432[_434];
_438 = _437;
frost$core$Frost$unref$frost$core$Object$Q(_438);
_432[_434] = _409;
_442 = _409;
frost$core$Frost$unref$frost$core$Object$Q(_442);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:363
_445 = *(&local0);
_446 = ((frost$core$Object*) _445);
frost$core$Frost$unref$frost$core$Object$Q(_446);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:365
_451 = *(&local0);
_452 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(_451);
_453 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(param4);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:365:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_456 = _452.value;
_457 = _453.value;
_458 = _456 == _457;
_459 = (frost$core$Bit) {_458};
_461 = _459.value;
if (_461) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:366
_464 = &param1->statements;
_465 = *_464;
_466 = param2.value;
_467 = *(&local1);
_468 = ((frost$core$Int64$nullable) { _467, true });
frost$core$Object* $tmp131;
if (_468.nonnull) {
    frost$core$Int64$wrapper* $tmp132;
    $tmp132 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp132->value = ((frost$core$Int64) _468.value);
    $tmp131 = ((frost$core$Object*) $tmp132);
}
else {
    $tmp131 = NULL;
}
_469 = $tmp131;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:366:35
_471 = (frost$core$Int) {0u};
_472 = _466.value;
_473 = _471.value;
_474 = _472 >= _473;
_475 = (frost$core$Bit) {_474};
_476 = _475.value;
if (_476) goto block62; else goto block61;
block62:;
_478 = ((frost$collections$CollectionView*) _465);
ITable* $tmp133 = _478->$class->itable;
while ($tmp133->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp133 = $tmp133->next;
}
_479 = $tmp133->methods[0];
_480 = _479(_478);
_481 = _466.value;
_482 = _480.value;
_483 = _481 < _482;
_484 = (frost$core$Bit) {_483};
_485 = _484.value;
if (_485) goto block60; else goto block61;
block61:;
_487 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s134, _487, &$s135);
abort(); // unreachable
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_491 = &_465->data;
_492 = *_491;
_493 = frost$core$Int64$init$frost$core$Int(_466);
_494 = _493.value;
_495 = _469;
frost$core$Frost$ref$frost$core$Object$Q(_495);
_497 = _492[_494];
_498 = _497;
frost$core$Frost$unref$frost$core$Object$Q(_498);
_492[_494] = _469;
_502 = _469;
frost$core$Frost$unref$frost$core$Object$Q(_502);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:367
_505 = *(&local0);
_506 = ((frost$core$Object*) _505);
frost$core$Frost$unref$frost$core$Object$Q(_506);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block57:;
goto block43;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:370
_512 = &param1->statements;
_513 = *_512;
_514 = param2.value;
_515 = *(&local1);
_516 = ((frost$core$Int64$nullable) { _515, true });
frost$core$Object* $tmp136;
if (_516.nonnull) {
    frost$core$Int64$wrapper* $tmp137;
    $tmp137 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp137->value = ((frost$core$Int64) _516.value);
    $tmp136 = ((frost$core$Object*) $tmp137);
}
else {
    $tmp136 = NULL;
}
_517 = $tmp136;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:370:27
_519 = (frost$core$Int) {0u};
_520 = _514.value;
_521 = _519.value;
_522 = _520 >= _521;
_523 = (frost$core$Bit) {_522};
_524 = _523.value;
if (_524) goto block66; else goto block65;
block66:;
_526 = ((frost$collections$CollectionView*) _513);
ITable* $tmp138 = _526->$class->itable;
while ($tmp138->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp138 = $tmp138->next;
}
_527 = $tmp138->methods[0];
_528 = _527(_526);
_529 = _514.value;
_530 = _528.value;
_531 = _529 < _530;
_532 = (frost$core$Bit) {_531};
_533 = _532.value;
if (_533) goto block64; else goto block65;
block65:;
_535 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s139, _535, &$s140);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_539 = &_513->data;
_540 = *_539;
_541 = frost$core$Int64$init$frost$core$Int(_514);
_542 = _541.value;
_543 = _517;
frost$core$Frost$ref$frost$core$Object$Q(_543);
_545 = _540[_542];
_546 = _545;
frost$core$Frost$unref$frost$core$Object$Q(_546);
_540[_542] = _517;
_550 = _517;
frost$core$Frost$unref$frost$core$Object$Q(_550);
_552 = *(&local0);
_553 = ((frost$core$Object*) _552);
frost$core$Frost$unref$frost$core$Object$Q(_553);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;

}
void org$frostlang$frostc$Interpreter$createStruct$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$FixedArray* param4) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int local0;
frost$core$UInt8* local1;
org$frostlang$frostc$IR$Value* local2 = NULL;
frost$core$Int64 local3;
frost$core$Int local4;
org$frostlang$frostc$MemoryLayout** _1;
org$frostlang$frostc$MemoryLayout* _2;
org$frostlang$frostc$Type** _3;
org$frostlang$frostc$Type* _4;
$fn141 _5;
frost$core$Int _6;
frost$core$UInt8** _9;
frost$core$UInt8* _10;
frost$collections$Iterable* _13;
$fn142 _14;
frost$collections$Iterator* _15;
$fn143 _17;
frost$core$Bit _18;
bool _19;
$fn144 _22;
frost$core$Object* _23;
org$frostlang$frostc$IR$Value* _24;
frost$core$Object* _25;
org$frostlang$frostc$IR$Value* _27;
frost$core$Object* _28;
org$frostlang$frostc$IR$Value* _32;
$fn145 _33;
frost$core$Int64 _34;
org$frostlang$frostc$MemoryLayout** _37;
org$frostlang$frostc$MemoryLayout* _38;
org$frostlang$frostc$IR$Value* _39;
$fn146 _40;
org$frostlang$frostc$Type* _41;
$fn147 _42;
frost$core$Int _43;
frost$core$Int _44;
int64_t _47;
int64_t _48;
bool _49;
frost$core$Bit _50;
bool _52;
frost$core$UInt8* _55;
frost$core$Int64 _56;
int64_t _59;
uint8_t _60;
frost$core$UInt8 _61;
frost$core$UInt8* _65;
frost$core$Int64 _66;
int64_t _67;
frost$core$UInt8* _68;
frost$core$Int _71;
int64_t _74;
int64_t _75;
bool _76;
frost$core$Bit _77;
bool _79;
frost$core$UInt8* _82;
frost$core$Int16* _83;
frost$core$Int64 _84;
int64_t _87;
int16_t _88;
frost$core$Int16 _89;
frost$core$UInt8* _93;
frost$core$Int64 _94;
int64_t _95;
frost$core$UInt8* _96;
frost$core$Int _99;
int64_t _102;
int64_t _103;
bool _104;
frost$core$Bit _105;
bool _107;
frost$core$UInt8* _110;
frost$core$Int32* _111;
frost$core$Int64 _112;
int64_t _115;
int32_t _116;
frost$core$Int32 _117;
frost$core$UInt8* _121;
frost$core$Int64 _122;
int64_t _123;
frost$core$UInt8* _124;
frost$core$Int _127;
int64_t _130;
int64_t _131;
bool _132;
frost$core$Bit _133;
bool _135;
frost$core$UInt8* _138;
frost$core$Int64* _139;
frost$core$Int64 _140;
frost$core$UInt8* _143;
frost$core$Int64 _144;
int64_t _145;
frost$core$UInt8* _146;
frost$core$Int _150;
org$frostlang$frostc$IR$Value* _151;
frost$core$Object* _152;
$fn148 _155;
frost$core$String* _156;
frost$core$String* _157;
frost$core$Object* _158;
frost$core$Object* _160;
frost$core$Object* _162;
frost$core$String* _165;
frost$core$Object* _167;
frost$core$Object* _169;
frost$core$Object* _172;
frost$core$Object* _174;
org$frostlang$frostc$IR$Value* _176;
frost$core$Object* _177;
frost$core$Object* _181;
org$frostlang$frostc$Type** _184;
org$frostlang$frostc$Type* _185;
$fn149 _186;
frost$core$Bit _187;
bool _188;
frost$collections$Array** _191;
frost$collections$Array* _192;
frost$core$Int _193;
frost$core$UInt8** _194;
frost$core$UInt8* _195;
int64_t _196;
frost$core$Int _197;
frost$core$Int64 _198;
frost$core$Int64$nullable _199;
frost$core$Object* _200;
frost$core$Int _202;
int64_t _203;
int64_t _204;
bool _205;
frost$core$Bit _206;
bool _207;
frost$collections$CollectionView* _209;
$fn150 _210;
frost$core$Int _211;
int64_t _212;
int64_t _213;
bool _214;
frost$core$Bit _215;
bool _216;
frost$core$Int _218;
frost$core$Object*** _222;
frost$core$Object** _223;
frost$core$Int64 _224;
int64_t _225;
frost$core$Object* _226;
frost$core$Object* _228;
frost$core$Object* _229;
frost$core$Object* _233;
frost$core$UInt8* _236;
frost$core$UInt8** _237;
frost$core$UInt8* _242;
int64_t _243;
frost$core$Int _244;
frost$core$UInt8** _245;
frost$core$UInt8* _246;
int64_t _247;
frost$core$Int _248;
frost$core$Int _249;
int64_t _250;
int64_t _251;
int64_t _252;
frost$core$Int _253;
frost$core$Bit _254;
frost$core$Range$LTfrost$core$Int$GT _255;
frost$core$Int _256;
frost$core$Int _258;
frost$core$Bit _259;
bool _260;
frost$core$Int _261;
int64_t _263;
int64_t _264;
bool _265;
frost$core$Bit _266;
bool _267;
int64_t _269;
int64_t _270;
bool _271;
frost$core$Bit _272;
bool _273;
frost$core$Int _276;
int64_t _277;
frost$core$UInt8* _278;
frost$core$UInt8 _279;
frost$core$Int _282;
int64_t _283;
int64_t _284;
int64_t _285;
frost$core$Int _286;
int64_t _288;
int64_t _289;
bool _290;
frost$core$Bit _291;
bool _292;
int64_t _294;
int64_t _295;
bool _296;
frost$core$Bit _297;
bool _298;
int64_t _300;
int64_t _301;
int64_t _302;
frost$core$Int _303;
frost$collections$Array** _307;
frost$collections$Array* _308;
frost$core$Int _309;
frost$core$UInt8** _310;
frost$core$UInt8* _311;
frost$core$Int64* _312;
frost$core$Int64 _313;
frost$core$Int64$nullable _314;
frost$core$Object* _315;
frost$core$Int _317;
int64_t _318;
int64_t _319;
bool _320;
frost$core$Bit _321;
bool _322;
frost$collections$CollectionView* _324;
$fn151 _325;
frost$core$Int _326;
int64_t _327;
int64_t _328;
bool _329;
frost$core$Bit _330;
bool _331;
frost$core$Int _333;
frost$core$Object*** _337;
frost$core$Object** _338;
frost$core$Int64 _339;
int64_t _340;
frost$core$Object* _341;
frost$core$Object* _343;
frost$core$Object* _344;
frost$core$Object* _348;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:375
_1 = &param0->memoryLayout;
_2 = *_1;
_3 = &param3->type;
_4 = *_3;
_5 = ($fn152) _2->$class->vtable[7];
_6 = _5(_2, _4);
*(&local0) = _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:376
_9 = &param0->stack;
_10 = *_9;
*(&local1) = _10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:377
_13 = ((frost$collections$Iterable*) param4);
ITable* $tmp153 = _13->$class->itable;
while ($tmp153->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp153 = $tmp153->next;
}
_14 = $tmp153->methods[0];
_15 = _14(_13);
goto block1;
block1:;
ITable* $tmp154 = _15->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp154 = $tmp154->next;
}
_17 = $tmp154->methods[0];
_18 = _17(_15);
_19 = _18.value;
if (_19) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp155 = _15->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp155 = $tmp155->next;
}
_22 = $tmp155->methods[1];
_23 = _22(_15);
_24 = ((org$frostlang$frostc$IR$Value*) _23);
_25 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local2);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local2) = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:378
_32 = *(&local2);
_33 = ($fn156) param1->$class->vtable[2];
_34 = _33(param1, _32);
*(&local3) = _34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:379
_37 = &param0->memoryLayout;
_38 = *_37;
_39 = *(&local2);
_40 = ($fn157) _39->$class->vtable[2];
_41 = _40(_39);
_42 = ($fn158) _38->$class->vtable[7];
_43 = _42(_38, _41);
_44 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:381:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_47 = _43.value;
_48 = _44.value;
_49 = _47 == _48;
_50 = (frost$core$Bit) {_49};
_52 = _50.value;
if (_52) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:382
_55 = *(&local1);
_56 = *(&local3);
// begin inline call to function frost.core.Int64.get_asUInt8():frost.core.UInt8 from Interpreter.frost:382:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:610
_59 = _56.value;
_60 = ((uint8_t) _59);
_61 = (frost$core$UInt8) {_60};
*_55 = _61;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:383
_65 = *(&local1);
_66 = (frost$core$Int64) {1u};
_67 = _66.value;
_68 = _65 + _67;
*(&local1) = _68;
goto block4;
block6:;
_71 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:385:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_74 = _43.value;
_75 = _71.value;
_76 = _74 == _75;
_77 = (frost$core$Bit) {_76};
_79 = _77.value;
if (_79) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:386
_82 = *(&local1);
_83 = ((frost$core$Int16*) _82);
_84 = *(&local3);
// begin inline call to function frost.core.Int64.get_asInt16():frost.core.Int16 from Interpreter.frost:386:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:592
_87 = _84.value;
_88 = ((int16_t) _87);
_89 = (frost$core$Int16) {_88};
*_83 = _89;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:387
_93 = *(&local1);
_94 = (frost$core$Int64) {2u};
_95 = _94.value;
_96 = _93 + _95;
*(&local1) = _96;
goto block4;
block10:;
_99 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:389:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_102 = _43.value;
_103 = _99.value;
_104 = _102 == _103;
_105 = (frost$core$Bit) {_104};
_107 = _105.value;
if (_107) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:390
_110 = *(&local1);
_111 = ((frost$core$Int32*) _110);
_112 = *(&local3);
// begin inline call to function frost.core.Int64.get_asInt32():frost.core.Int32 from Interpreter.frost:390:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:598
_115 = _112.value;
_116 = ((int32_t) _115);
_117 = (frost$core$Int32) {_116};
*_111 = _117;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:391
_121 = *(&local1);
_122 = (frost$core$Int64) {4u};
_123 = _122.value;
_124 = _121 + _123;
*(&local1) = _124;
goto block4;
block14:;
_127 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:393:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_130 = _43.value;
_131 = _127.value;
_132 = _130 == _131;
_133 = (frost$core$Bit) {_132};
_135 = _133.value;
if (_135) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:394
_138 = *(&local1);
_139 = ((frost$core$Int64*) _138);
_140 = *(&local3);
*_139 = _140;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:395
_143 = *(&local1);
_144 = (frost$core$Int64) {8u};
_145 = _144.value;
_146 = _143 + _145;
*(&local1) = _146;
goto block4;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:398
_150 = (frost$core$Int) {398u};
_151 = *(&local2);
_152 = ((frost$core$Object*) _151);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:398:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_155 = ($fn159) _152->$class->vtable[0];
_156 = _155(_152);
_157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s160, _156);
_158 = ((frost$core$Object*) _157);
frost$core$Frost$ref$frost$core$Object$Q(_158);
_160 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_160);
_162 = ((frost$core$Object*) _156);
frost$core$Frost$unref$frost$core$Object$Q(_162);
_165 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_157, &$s161);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s162, _150, _165);
_167 = ((frost$core$Object*) _165);
frost$core$Frost$unref$frost$core$Object$Q(_167);
_169 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_169);
abort(); // unreachable
block4:;
_172 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_172);
_174 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_174);
_176 = *(&local2);
_177 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_177);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block3:;
_181 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_181);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:402
_184 = &param3->type;
_185 = *_184;
_186 = ($fn163) param0->$class->vtable[10];
_187 = _186(param0, _185);
_188 = _187.value;
if (_188) goto block21; else goto block23;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:403
_191 = &param1->statements;
_192 = *_191;
_193 = param2.value;
_194 = &param0->stack;
_195 = *_194;
_196 = ((int64_t) _195);
_197 = (frost$core$Int) {_196};
_198 = frost$core$Int64$init$frost$core$Int(_197);
_199 = ((frost$core$Int64$nullable) { _198, true });
frost$core$Object* $tmp164;
if (_199.nonnull) {
    frost$core$Int64$wrapper* $tmp165;
    $tmp165 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp165->value = ((frost$core$Int64) _199.value);
    $tmp164 = ((frost$core$Object*) $tmp165);
}
else {
    $tmp164 = NULL;
}
_200 = $tmp164;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:403:31
_202 = (frost$core$Int) {0u};
_203 = _193.value;
_204 = _202.value;
_205 = _203 >= _204;
_206 = (frost$core$Bit) {_205};
_207 = _206.value;
if (_207) goto block27; else goto block26;
block27:;
_209 = ((frost$collections$CollectionView*) _192);
ITable* $tmp166 = _209->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
_210 = $tmp166->methods[0];
_211 = _210(_209);
_212 = _193.value;
_213 = _211.value;
_214 = _212 < _213;
_215 = (frost$core$Bit) {_214};
_216 = _215.value;
if (_216) goto block25; else goto block26;
block26:;
_218 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s167, _218, &$s168);
abort(); // unreachable
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_222 = &_192->data;
_223 = *_222;
_224 = frost$core$Int64$init$frost$core$Int(_193);
_225 = _224.value;
_226 = _200;
frost$core$Frost$ref$frost$core$Object$Q(_226);
_228 = _223[_225];
_229 = _228;
frost$core$Frost$unref$frost$core$Object$Q(_229);
_223[_225] = _200;
_233 = _200;
frost$core$Frost$unref$frost$core$Object$Q(_233);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:404
_236 = *(&local1);
_237 = &param0->stack;
*_237 = _236;
goto block22;
block23:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:407
_242 = *(&local1);
_243 = ((int64_t) _242);
_244 = (frost$core$Int) {_243};
_245 = &param0->stack;
_246 = *_245;
_247 = ((int64_t) _246);
_248 = (frost$core$Int) {_247};
_249 = (frost$core$Int) {8u};
_250 = _248.value;
_251 = _249.value;
_252 = _250 + _251;
_253 = (frost$core$Int) {_252};
_254 = (frost$core$Bit) {false};
_255 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_244, _253, _254);
_256 = _255.min;
*(&local4) = _256;
_258 = _255.max;
_259 = _255.inclusive;
_260 = _259.value;
_261 = (frost$core$Int) {1u};
if (_260) goto block31; else goto block32;
block31:;
_263 = _256.value;
_264 = _258.value;
_265 = _263 <= _264;
_266 = (frost$core$Bit) {_265};
_267 = _266.value;
if (_267) goto block28; else goto block29;
block32:;
_269 = _256.value;
_270 = _258.value;
_271 = _269 < _270;
_272 = (frost$core$Bit) {_271};
_273 = _272.value;
if (_273) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:408
_276 = *(&local4);
_277 = _276.value;
_278 = ((frost$core$UInt8*) _277);
_279 = (frost$core$UInt8) {0u};
*_278 = _279;
_282 = *(&local4);
_283 = _258.value;
_284 = _282.value;
_285 = _283 - _284;
_286 = (frost$core$Int) {_285};
if (_260) goto block34; else goto block35;
block34:;
_288 = _286.value;
_289 = _261.value;
_290 = _288 >= _289;
_291 = (frost$core$Bit) {_290};
_292 = _291.value;
if (_292) goto block33; else goto block29;
block35:;
_294 = _286.value;
_295 = _261.value;
_296 = _294 > _295;
_297 = (frost$core$Bit) {_296};
_298 = _297.value;
if (_298) goto block33; else goto block29;
block33:;
_300 = _282.value;
_301 = _261.value;
_302 = _300 + _301;
_303 = (frost$core$Int) {_302};
*(&local4) = _303;
goto block28;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:410
_307 = &param1->statements;
_308 = *_307;
_309 = param2.value;
_310 = &param0->stack;
_311 = *_310;
_312 = ((frost$core$Int64*) _311);
_313 = *_312;
_314 = ((frost$core$Int64$nullable) { _313, true });
frost$core$Object* $tmp169;
if (_314.nonnull) {
    frost$core$Int64$wrapper* $tmp170;
    $tmp170 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp170->value = ((frost$core$Int64) _314.value);
    $tmp169 = ((frost$core$Object*) $tmp170);
}
else {
    $tmp169 = NULL;
}
_315 = $tmp169;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:410:31
_317 = (frost$core$Int) {0u};
_318 = _309.value;
_319 = _317.value;
_320 = _318 >= _319;
_321 = (frost$core$Bit) {_320};
_322 = _321.value;
if (_322) goto block39; else goto block38;
block39:;
_324 = ((frost$collections$CollectionView*) _308);
ITable* $tmp171 = _324->$class->itable;
while ($tmp171->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp171 = $tmp171->next;
}
_325 = $tmp171->methods[0];
_326 = _325(_324);
_327 = _309.value;
_328 = _326.value;
_329 = _327 < _328;
_330 = (frost$core$Bit) {_329};
_331 = _330.value;
if (_331) goto block37; else goto block38;
block38:;
_333 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s172, _333, &$s173);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_337 = &_308->data;
_338 = *_337;
_339 = frost$core$Int64$init$frost$core$Int(_309);
_340 = _339.value;
_341 = _315;
frost$core$Frost$ref$frost$core$Object$Q(_341);
_343 = _338[_340];
_344 = _343;
frost$core$Frost$unref$frost$core$Object$Q(_344);
_338[_340] = _315;
_348 = _315;
frost$core$Frost$unref$frost$core$Object$Q(_348);
goto block22;
block22:;
return;

}
void org$frostlang$frostc$Interpreter$extractField$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$UInt8* local0;
frost$core$Weak** _1;
frost$core$Weak* _2;
frost$core$Bit* _7;
frost$core$Bit _8;
bool _10;
frost$core$Int _12;
frost$core$Object** _16;
frost$core$Object* _17;
frost$core$Object* _18;
frost$core$Object* _19;
org$frostlang$frostc$ClassDecl* _22;
org$frostlang$frostc$Type** _23;
org$frostlang$frostc$Type* _24;
$fn174 _25;
frost$core$Bit _26;
bool _27;
frost$core$Object* _28;
$fn175 _32;
frost$core$Int _33;
int64_t _34;
frost$core$UInt8* _35;
org$frostlang$frostc$MemoryLayout** _38;
org$frostlang$frostc$MemoryLayout* _39;
org$frostlang$frostc$Type** _40;
org$frostlang$frostc$Type* _41;
$fn176 _42;
frost$core$Int _43;
frost$core$Int _44;
int64_t _47;
int64_t _48;
bool _49;
frost$core$Bit _50;
bool _52;
frost$collections$Array** _55;
frost$collections$Array* _56;
frost$core$Int _57;
frost$core$UInt8* _58;
frost$core$UInt8 _59;
uint8_t _62;
int64_t _63;
frost$core$Int64 _64;
frost$core$Int64$nullable _66;
frost$core$Object* _67;
frost$core$Int _69;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _74;
frost$collections$CollectionView* _76;
$fn177 _77;
frost$core$Int _78;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
bool _83;
frost$core$Int _85;
frost$core$Object*** _89;
frost$core$Object** _90;
frost$core$Int64 _91;
int64_t _92;
frost$core$Object* _93;
frost$core$Object* _95;
frost$core$Object* _96;
frost$core$Object* _100;
frost$core$Int _103;
int64_t _106;
int64_t _107;
bool _108;
frost$core$Bit _109;
bool _111;
frost$collections$Array** _114;
frost$collections$Array* _115;
frost$core$Int _116;
frost$core$UInt8* _117;
frost$core$UInt16* _118;
frost$core$UInt16 _119;
uint16_t _122;
int64_t _123;
frost$core$Int64 _124;
frost$core$Int64$nullable _126;
frost$core$Object* _127;
frost$core$Int _129;
int64_t _130;
int64_t _131;
bool _132;
frost$core$Bit _133;
bool _134;
frost$collections$CollectionView* _136;
$fn178 _137;
frost$core$Int _138;
int64_t _139;
int64_t _140;
bool _141;
frost$core$Bit _142;
bool _143;
frost$core$Int _145;
frost$core$Object*** _149;
frost$core$Object** _150;
frost$core$Int64 _151;
int64_t _152;
frost$core$Object* _153;
frost$core$Object* _155;
frost$core$Object* _156;
frost$core$Object* _160;
frost$core$Int _163;
int64_t _166;
int64_t _167;
bool _168;
frost$core$Bit _169;
bool _171;
frost$collections$Array** _174;
frost$collections$Array* _175;
frost$core$Int _176;
frost$core$UInt8* _177;
frost$core$UInt32* _178;
frost$core$UInt32 _179;
uint32_t _182;
int64_t _183;
frost$core$Int64 _184;
frost$core$Int64$nullable _186;
frost$core$Object* _187;
frost$core$Int _189;
int64_t _190;
int64_t _191;
bool _192;
frost$core$Bit _193;
bool _194;
frost$collections$CollectionView* _196;
$fn179 _197;
frost$core$Int _198;
int64_t _199;
int64_t _200;
bool _201;
frost$core$Bit _202;
bool _203;
frost$core$Int _205;
frost$core$Object*** _209;
frost$core$Object** _210;
frost$core$Int64 _211;
int64_t _212;
frost$core$Object* _213;
frost$core$Object* _215;
frost$core$Object* _216;
frost$core$Object* _220;
frost$core$Int _223;
int64_t _226;
int64_t _227;
bool _228;
frost$core$Bit _229;
bool _231;
frost$collections$Array** _234;
frost$collections$Array* _235;
frost$core$Int _236;
frost$core$UInt8* _237;
frost$core$UInt64* _238;
frost$core$UInt64 _239;
uint64_t _242;
int64_t _243;
frost$core$Int64 _244;
frost$core$Int64$nullable _246;
frost$core$Object* _247;
frost$core$Int _249;
int64_t _250;
int64_t _251;
bool _252;
frost$core$Bit _253;
bool _254;
frost$collections$CollectionView* _256;
$fn180 _257;
frost$core$Int _258;
int64_t _259;
int64_t _260;
bool _261;
frost$core$Bit _262;
bool _263;
frost$core$Int _265;
frost$core$Object*** _269;
frost$core$Object** _270;
frost$core$Int64 _271;
int64_t _272;
frost$core$Object* _273;
frost$core$Object* _275;
frost$core$Object* _276;
frost$core$Object* _280;
frost$core$Int _284;
frost$core$Weak** _290;
frost$core$Weak* _291;
frost$core$Bit* _296;
frost$core$Bit _297;
bool _299;
frost$core$Int _301;
frost$core$Object** _305;
frost$core$Object* _306;
frost$core$Object* _307;
frost$core$Object* _308;
org$frostlang$frostc$Compiler* _311;
bool _312;
frost$core$Bit _313;
bool _314;
frost$core$Int _316;
org$frostlang$frostc$Compiler* _319;
frost$core$Weak** _320;
frost$core$Weak* _321;
frost$core$Bit* _326;
frost$core$Bit _327;
bool _329;
frost$core$Int _331;
frost$core$Object** _335;
frost$core$Object* _336;
frost$core$Object* _337;
frost$core$Object* _338;
org$frostlang$frostc$ClassDecl* _341;
frost$collections$ListView* _342;
frost$collections$CollectionView* _343;
$fn181 _344;
frost$core$Int _345;
frost$core$Int _346;
int64_t _349;
int64_t _350;
bool _351;
frost$core$Bit _352;
bool _354;
frost$core$Int _356;
frost$core$Object* _359;
frost$core$Object* _361;
frost$core$Object* _363;
frost$collections$Array** _366;
frost$collections$Array* _367;
frost$core$Int _368;
$fn182 _369;
frost$core$Int64 _370;
frost$core$Int64$nullable _371;
frost$core$Object* _372;
frost$core$Int _374;
int64_t _375;
int64_t _376;
bool _377;
frost$core$Bit _378;
bool _379;
frost$collections$CollectionView* _381;
$fn183 _382;
frost$core$Int _383;
int64_t _384;
int64_t _385;
bool _386;
frost$core$Bit _387;
bool _388;
frost$core$Int _390;
frost$core$Object*** _394;
frost$core$Object** _395;
frost$core$Int64 _396;
int64_t _397;
frost$core$Object* _398;
frost$core$Object* _400;
frost$core$Object* _401;
frost$core$Object* _405;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:415
_1 = &param4->owner;
_2 = *_1;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:415:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_7 = &_2->_valid;
_8 = *_7;
_10 = _8.value;
if (_10) goto block6; else goto block7;
block7:;
_12 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s184, _12, &$s185);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_16 = &_2->value;
_17 = *_16;
_18 = _17;
_19 = _18;
frost$core$Frost$ref$frost$core$Object$Q(_19);
_22 = ((org$frostlang$frostc$ClassDecl*) _18);
_23 = &_22->type;
_24 = *_23;
_25 = ($fn186) param0->$class->vtable[10];
_26 = _25(param0, _24);
_27 = _26.value;
_28 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_28);
if (_27) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:416
_32 = ($fn187) param0->$class->vtable[19];
_33 = _32(param0, param1, param3, param4);
_34 = _33.value;
_35 = ((frost$core$UInt8*) _34);
*(&local0) = _35;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:417
_38 = &param0->memoryLayout;
_39 = *_38;
_40 = &param4->type;
_41 = *_40;
_42 = ($fn188) _39->$class->vtable[7];
_43 = _42(_39, _41);
_44 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:418:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_47 = _43.value;
_48 = _44.value;
_49 = _47 == _48;
_50 = (frost$core$Bit) {_49};
_52 = _50.value;
if (_52) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:419
_55 = &param1->statements;
_56 = *_55;
_57 = param2.value;
_58 = *(&local0);
_59 = *_58;
// begin inline call to function frost.core.UInt8.get_asInt64():frost.core.Int64 from Interpreter.frost:419:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1184
_62 = _59.value;
_63 = ((int64_t) _62);
_64 = (frost$core$Int64) {_63};
_66 = ((frost$core$Int64$nullable) { _64, true });
frost$core$Object* $tmp189;
if (_66.nonnull) {
    frost$core$Int64$wrapper* $tmp190;
    $tmp190 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp190->value = ((frost$core$Int64) _66.value);
    $tmp189 = ((frost$core$Object*) $tmp190);
}
else {
    $tmp189 = NULL;
}
_67 = $tmp189;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:419:39
_69 = (frost$core$Int) {0u};
_70 = _57.value;
_71 = _69.value;
_72 = _70 >= _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block16; else goto block15;
block16:;
_76 = ((frost$collections$CollectionView*) _56);
ITable* $tmp191 = _76->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp191 = $tmp191->next;
}
_77 = $tmp191->methods[0];
_78 = _77(_76);
_79 = _57.value;
_80 = _78.value;
_81 = _79 < _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block14; else goto block15;
block15:;
_85 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s192, _85, &$s193);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_89 = &_56->data;
_90 = *_89;
_91 = frost$core$Int64$init$frost$core$Int(_57);
_92 = _91.value;
_93 = _67;
frost$core$Frost$ref$frost$core$Object$Q(_93);
_95 = _90[_92];
_96 = _95;
frost$core$Frost$unref$frost$core$Object$Q(_96);
_90[_92] = _67;
_100 = _67;
frost$core$Frost$unref$frost$core$Object$Q(_100);
goto block8;
block10:;
_103 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:421:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_106 = _43.value;
_107 = _103.value;
_108 = _106 == _107;
_109 = (frost$core$Bit) {_108};
_111 = _109.value;
if (_111) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:422
_114 = &param1->statements;
_115 = *_114;
_116 = param2.value;
_117 = *(&local0);
_118 = ((frost$core$UInt16*) _117);
_119 = *_118;
// begin inline call to function frost.core.UInt16.get_asInt64():frost.core.Int64 from Interpreter.frost:422:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1094
_122 = _119.value;
_123 = ((int64_t) _122);
_124 = (frost$core$Int64) {_123};
_126 = ((frost$core$Int64$nullable) { _124, true });
frost$core$Object* $tmp194;
if (_126.nonnull) {
    frost$core$Int64$wrapper* $tmp195;
    $tmp195 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp195->value = ((frost$core$Int64) _126.value);
    $tmp194 = ((frost$core$Object*) $tmp195);
}
else {
    $tmp194 = NULL;
}
_127 = $tmp194;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:422:39
_129 = (frost$core$Int) {0u};
_130 = _116.value;
_131 = _129.value;
_132 = _130 >= _131;
_133 = (frost$core$Bit) {_132};
_134 = _133.value;
if (_134) goto block24; else goto block23;
block24:;
_136 = ((frost$collections$CollectionView*) _115);
ITable* $tmp196 = _136->$class->itable;
while ($tmp196->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp196 = $tmp196->next;
}
_137 = $tmp196->methods[0];
_138 = _137(_136);
_139 = _116.value;
_140 = _138.value;
_141 = _139 < _140;
_142 = (frost$core$Bit) {_141};
_143 = _142.value;
if (_143) goto block22; else goto block23;
block23:;
_145 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s197, _145, &$s198);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_149 = &_115->data;
_150 = *_149;
_151 = frost$core$Int64$init$frost$core$Int(_116);
_152 = _151.value;
_153 = _127;
frost$core$Frost$ref$frost$core$Object$Q(_153);
_155 = _150[_152];
_156 = _155;
frost$core$Frost$unref$frost$core$Object$Q(_156);
_150[_152] = _127;
_160 = _127;
frost$core$Frost$unref$frost$core$Object$Q(_160);
goto block8;
block18:;
_163 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:424:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_166 = _43.value;
_167 = _163.value;
_168 = _166 == _167;
_169 = (frost$core$Bit) {_168};
_171 = _169.value;
if (_171) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:425
_174 = &param1->statements;
_175 = *_174;
_176 = param2.value;
_177 = *(&local0);
_178 = ((frost$core$UInt32*) _177);
_179 = *_178;
// begin inline call to function frost.core.UInt32.get_asInt64():frost.core.Int64 from Interpreter.frost:425:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:954
_182 = _179.value;
_183 = ((int64_t) _182);
_184 = (frost$core$Int64) {_183};
_186 = ((frost$core$Int64$nullable) { _184, true });
frost$core$Object* $tmp199;
if (_186.nonnull) {
    frost$core$Int64$wrapper* $tmp200;
    $tmp200 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp200->value = ((frost$core$Int64) _186.value);
    $tmp199 = ((frost$core$Object*) $tmp200);
}
else {
    $tmp199 = NULL;
}
_187 = $tmp199;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:425:39
_189 = (frost$core$Int) {0u};
_190 = _176.value;
_191 = _189.value;
_192 = _190 >= _191;
_193 = (frost$core$Bit) {_192};
_194 = _193.value;
if (_194) goto block32; else goto block31;
block32:;
_196 = ((frost$collections$CollectionView*) _175);
ITable* $tmp201 = _196->$class->itable;
while ($tmp201->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp201 = $tmp201->next;
}
_197 = $tmp201->methods[0];
_198 = _197(_196);
_199 = _176.value;
_200 = _198.value;
_201 = _199 < _200;
_202 = (frost$core$Bit) {_201};
_203 = _202.value;
if (_203) goto block30; else goto block31;
block31:;
_205 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s202, _205, &$s203);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_209 = &_175->data;
_210 = *_209;
_211 = frost$core$Int64$init$frost$core$Int(_176);
_212 = _211.value;
_213 = _187;
frost$core$Frost$ref$frost$core$Object$Q(_213);
_215 = _210[_212];
_216 = _215;
frost$core$Frost$unref$frost$core$Object$Q(_216);
_210[_212] = _187;
_220 = _187;
frost$core$Frost$unref$frost$core$Object$Q(_220);
goto block8;
block26:;
_223 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:427:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_226 = _43.value;
_227 = _223.value;
_228 = _226 == _227;
_229 = (frost$core$Bit) {_228};
_231 = _229.value;
if (_231) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:428
_234 = &param1->statements;
_235 = *_234;
_236 = param2.value;
_237 = *(&local0);
_238 = ((frost$core$UInt64*) _237);
_239 = *_238;
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Interpreter.frost:428:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_242 = _239.value;
_243 = ((int64_t) _242);
_244 = (frost$core$Int64) {_243};
_246 = ((frost$core$Int64$nullable) { _244, true });
frost$core$Object* $tmp204;
if (_246.nonnull) {
    frost$core$Int64$wrapper* $tmp205;
    $tmp205 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp205->value = ((frost$core$Int64) _246.value);
    $tmp204 = ((frost$core$Object*) $tmp205);
}
else {
    $tmp204 = NULL;
}
_247 = $tmp204;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:428:39
_249 = (frost$core$Int) {0u};
_250 = _236.value;
_251 = _249.value;
_252 = _250 >= _251;
_253 = (frost$core$Bit) {_252};
_254 = _253.value;
if (_254) goto block40; else goto block39;
block40:;
_256 = ((frost$collections$CollectionView*) _235);
ITable* $tmp206 = _256->$class->itable;
while ($tmp206->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp206 = $tmp206->next;
}
_257 = $tmp206->methods[0];
_258 = _257(_256);
_259 = _236.value;
_260 = _258.value;
_261 = _259 < _260;
_262 = (frost$core$Bit) {_261};
_263 = _262.value;
if (_263) goto block38; else goto block39;
block39:;
_265 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s207, _265, &$s208);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_269 = &_235->data;
_270 = *_269;
_271 = frost$core$Int64$init$frost$core$Int(_236);
_272 = _271.value;
_273 = _247;
frost$core$Frost$ref$frost$core$Object$Q(_273);
_275 = _270[_272];
_276 = _275;
frost$core$Frost$unref$frost$core$Object$Q(_276);
_270[_272] = _247;
_280 = _247;
frost$core$Frost$unref$frost$core$Object$Q(_280);
goto block8;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:431
_284 = (frost$core$Int) {431u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s209, _284, &$s210);
abort(); // unreachable
block8:;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:437
_290 = &param0->compiler;
_291 = *_290;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:437:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_296 = &_291->_valid;
_297 = *_296;
_299 = _297.value;
if (_299) goto block43; else goto block44;
block44:;
_301 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s211, _301, &$s212);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_305 = &_291->value;
_306 = *_305;
_307 = _306;
_308 = _307;
frost$core$Frost$ref$frost$core$Object$Q(_308);
_311 = ((org$frostlang$frostc$Compiler*) _307);
_312 = _311 != NULL;
_313 = (frost$core$Bit) {_312};
_314 = _313.value;
if (_314) goto block45; else goto block46;
block46:;
_316 = (frost$core$Int) {437u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s213, _316, &$s214);
abort(); // unreachable
block45:;
_319 = _311;
_320 = &param4->owner;
_321 = *_320;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:437:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_326 = &_321->_valid;
_327 = *_326;
_329 = _327.value;
if (_329) goto block49; else goto block50;
block50:;
_331 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s215, _331, &$s216);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_335 = &_321->value;
_336 = *_335;
_337 = _336;
_338 = _337;
frost$core$Frost$ref$frost$core$Object$Q(_338);
_341 = ((org$frostlang$frostc$ClassDecl*) _337);
_342 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_319, _341);
_343 = ((frost$collections$CollectionView*) _342);
ITable* $tmp217 = _343->$class->itable;
while ($tmp217->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp217 = $tmp217->next;
}
_344 = $tmp217->methods[0];
_345 = _344(_343);
_346 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:437:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_349 = _345.value;
_350 = _346.value;
_351 = _349 == _350;
_352 = (frost$core$Bit) {_351};
_354 = _352.value;
if (_354) goto block52; else goto block53;
block53:;
_356 = (frost$core$Int) {437u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s218, _356);
abort(); // unreachable
block52:;
_359 = ((frost$core$Object*) _342);
frost$core$Frost$unref$frost$core$Object$Q(_359);
_361 = _337;
frost$core$Frost$unref$frost$core$Object$Q(_361);
_363 = _307;
frost$core$Frost$unref$frost$core$Object$Q(_363);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:438
_366 = &param1->statements;
_367 = *_366;
_368 = param2.value;
_369 = ($fn219) param1->$class->vtable[2];
_370 = _369(param1, param3);
_371 = ((frost$core$Int64$nullable) { _370, true });
frost$core$Object* $tmp220;
if (_371.nonnull) {
    frost$core$Int64$wrapper* $tmp221;
    $tmp221 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp221->value = ((frost$core$Int64) _371.value);
    $tmp220 = ((frost$core$Object*) $tmp221);
}
else {
    $tmp220 = NULL;
}
_372 = $tmp220;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:438:31
_374 = (frost$core$Int) {0u};
_375 = _368.value;
_376 = _374.value;
_377 = _375 >= _376;
_378 = (frost$core$Bit) {_377};
_379 = _378.value;
if (_379) goto block57; else goto block56;
block57:;
_381 = ((frost$collections$CollectionView*) _367);
ITable* $tmp222 = _381->$class->itable;
while ($tmp222->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp222 = $tmp222->next;
}
_382 = $tmp222->methods[0];
_383 = _382(_381);
_384 = _368.value;
_385 = _383.value;
_386 = _384 < _385;
_387 = (frost$core$Bit) {_386};
_388 = _387.value;
if (_388) goto block55; else goto block56;
block56:;
_390 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s223, _390, &$s224);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_394 = &_367->data;
_395 = *_394;
_396 = frost$core$Int64$init$frost$core$Int(_368);
_397 = _396.value;
_398 = _372;
frost$core$Frost$ref$frost$core$Object$Q(_398);
_400 = _395[_397];
_401 = _400;
frost$core$Frost$unref$frost$core$Object$Q(_401);
_395[_397] = _372;
_405 = _372;
frost$core$Frost$unref$frost$core$Object$Q(_405);
goto block2;
block2:;
return;

}
frost$core$Int org$frostlang$frostc$Interpreter$getFieldPointer$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl$R$frost$core$Int(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FieldDecl* param3) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
org$frostlang$frostc$MemoryLayout** _11;
org$frostlang$frostc$MemoryLayout* _12;
frost$core$Weak** _13;
frost$core$Weak* _14;
frost$core$Bit* _19;
frost$core$Bit _20;
bool _22;
frost$core$Int _24;
frost$core$Object** _28;
frost$core$Object* _29;
frost$core$Object* _30;
frost$core$Object* _31;
org$frostlang$frostc$ClassDecl* _34;
$fn225 _35;
frost$core$Object* _37;
frost$core$Int* _40;
frost$core$Int _41;
frost$core$Int _42;
int64_t _43;
int64_t _44;
bool _45;
frost$core$Bit _46;
bool _47;
frost$core$Int _49;
$fn226 _54;
frost$core$Int64 _55;
int64_t _58;
int64_t _59;
frost$core$Int _60;
frost$core$Int* _62;
frost$core$Int _63;
int64_t _64;
int64_t _65;
int64_t _66;
frost$core$Int _67;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:444
_1 = &param3->offset;
_2 = *_1;
_3 = (frost$core$Int) {0u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 < _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:445
_11 = &param0->memoryLayout;
_12 = *_11;
_13 = &param3->owner;
_14 = *_13;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:445:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_19 = &_14->_valid;
_20 = *_19;
_22 = _20.value;
if (_22) goto block5; else goto block6;
block6:;
_24 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s227, _24, &$s228);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_28 = &_14->value;
_29 = *_28;
_30 = _29;
_31 = _30;
frost$core$Frost$ref$frost$core$Object$Q(_31);
_34 = ((org$frostlang$frostc$ClassDecl*) _30);
_35 = ($fn229) _12->$class->vtable[6];
_35(_12, _34);
_37 = _30;
frost$core$Frost$unref$frost$core$Object$Q(_37);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:446
_40 = &param3->offset;
_41 = *_40;
_42 = (frost$core$Int) {0u};
_43 = _41.value;
_44 = _42.value;
_45 = _43 >= _44;
_46 = (frost$core$Bit) {_45};
_47 = _46.value;
if (_47) goto block7; else goto block8;
block8:;
_49 = (frost$core$Int) {446u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s230, _49);
abort(); // unreachable
block7:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:448
_54 = ($fn231) param1->$class->vtable[2];
_55 = _54(param1, param2);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:448:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_58 = _55.value;
_59 = ((int64_t) _58);
_60 = (frost$core$Int) {_59};
_62 = &param3->offset;
_63 = *_62;
_64 = _60.value;
_65 = _63.value;
_66 = _64 + _65;
_67 = (frost$core$Int) {_66};
return _67;

}
void org$frostlang$frostc$Interpreter$getFieldPointer$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$core$Int _3;
$fn232 _4;
frost$core$Int _5;
frost$core$Int64 _6;
frost$core$Int64$nullable _7;
frost$core$Object* _8;
frost$core$Int _10;
int64_t _11;
int64_t _12;
bool _13;
frost$core$Bit _14;
bool _15;
frost$collections$CollectionView* _17;
$fn233 _18;
frost$core$Int _19;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$Int _26;
frost$core$Object*** _30;
frost$core$Object** _31;
frost$core$Int64 _32;
int64_t _33;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _37;
frost$core$Object* _41;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:452
_1 = &param1->statements;
_2 = *_1;
_3 = param2.value;
_4 = ($fn234) param0->$class->vtable[19];
_5 = _4(param0, param1, param3, param4);
_6 = frost$core$Int64$init$frost$core$Int(_5);
_7 = ((frost$core$Int64$nullable) { _6, true });
frost$core$Object* $tmp235;
if (_7.nonnull) {
    frost$core$Int64$wrapper* $tmp236;
    $tmp236 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp236->value = ((frost$core$Int64) _7.value);
    $tmp235 = ((frost$core$Object*) $tmp236);
}
else {
    $tmp235 = NULL;
}
_8 = $tmp235;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:452:27
_10 = (frost$core$Int) {0u};
_11 = _3.value;
_12 = _10.value;
_13 = _11 >= _12;
_14 = (frost$core$Bit) {_13};
_15 = _14.value;
if (_15) goto block4; else goto block3;
block4:;
_17 = ((frost$collections$CollectionView*) _2);
ITable* $tmp237 = _17->$class->itable;
while ($tmp237->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp237 = $tmp237->next;
}
_18 = $tmp237->methods[0];
_19 = _18(_17);
_20 = _3.value;
_21 = _19.value;
_22 = _20 < _21;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block2; else goto block3;
block3:;
_26 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s238, _26, &$s239);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_30 = &_2->data;
_31 = *_30;
_32 = frost$core$Int64$init$frost$core$Int(_3);
_33 = _32.value;
_34 = _8;
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = _31[_33];
_37 = _36;
frost$core$Frost$unref$frost$core$Object$Q(_37);
_31[_33] = _8;
_41 = _8;
frost$core$Frost$unref$frost$core$Object$Q(_41);
return;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$bit$frost$core$Bit$R$frost$core$Int64(void* rawSelf, frost$core$Bit param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

bool _1;
frost$core$Int64 _4;
frost$core$Int64 _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:456
_1 = param1.value;
if (_1) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:457
_4 = (frost$core$Int64) {1u};
return _4;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:459
_7 = (frost$core$Int64) {0u};
return _7;

}
void org$frostlang$frostc$Interpreter$binary$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$expression$Binary$Operator param4, org$frostlang$frostc$IR$Value* param5) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int64 local0;
frost$core$Int64 local1;
$fn240 _1;
frost$core$Int64 _2;
$fn241 _5;
frost$core$Int64 _6;
frost$core$Int _9;
frost$core$Int _10;
int64_t _13;
int64_t _14;
bool _15;
frost$core$Bit _16;
bool _18;
frost$collections$Array** _21;
frost$collections$Array* _22;
frost$core$Int _23;
frost$core$Int64 _24;
frost$core$Int64 _25;
int64_t _26;
int64_t _27;
int64_t _28;
frost$core$Int64 _29;
frost$core$Int64$nullable _30;
frost$core$Object* _31;
frost$core$Int _33;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _38;
frost$collections$CollectionView* _40;
$fn242 _41;
frost$core$Int _42;
int64_t _43;
int64_t _44;
bool _45;
frost$core$Bit _46;
bool _47;
frost$core$Int _49;
frost$core$Object*** _53;
frost$core$Object** _54;
frost$core$Int64 _55;
int64_t _56;
frost$core$Object* _57;
frost$core$Object* _59;
frost$core$Object* _60;
frost$core$Object* _64;
frost$core$Int _67;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _75;
frost$collections$Array** _78;
frost$collections$Array* _79;
frost$core$Int _80;
frost$core$Int64 _81;
frost$core$Int64 _82;
int64_t _83;
int64_t _84;
int64_t _85;
frost$core$Int64 _86;
frost$core$Int64$nullable _87;
frost$core$Object* _88;
frost$core$Int _90;
int64_t _91;
int64_t _92;
bool _93;
frost$core$Bit _94;
bool _95;
frost$collections$CollectionView* _97;
$fn243 _98;
frost$core$Int _99;
int64_t _100;
int64_t _101;
bool _102;
frost$core$Bit _103;
bool _104;
frost$core$Int _106;
frost$core$Object*** _110;
frost$core$Object** _111;
frost$core$Int64 _112;
int64_t _113;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Object* _117;
frost$core$Object* _121;
frost$core$Int _124;
int64_t _127;
int64_t _128;
bool _129;
frost$core$Bit _130;
bool _132;
frost$collections$Array** _135;
frost$collections$Array* _136;
frost$core$Int _137;
frost$core$Int64 _138;
frost$core$Int64 _139;
int64_t _140;
int64_t _141;
int64_t _142;
frost$core$Int64 _143;
frost$core$Int64$nullable _144;
frost$core$Object* _145;
frost$core$Int _147;
int64_t _148;
int64_t _149;
bool _150;
frost$core$Bit _151;
bool _152;
frost$collections$CollectionView* _154;
$fn244 _155;
frost$core$Int _156;
int64_t _157;
int64_t _158;
bool _159;
frost$core$Bit _160;
bool _161;
frost$core$Int _163;
frost$core$Object*** _167;
frost$core$Object** _168;
frost$core$Int64 _169;
int64_t _170;
frost$core$Object* _171;
frost$core$Object* _173;
frost$core$Object* _174;
frost$core$Object* _178;
frost$core$Int _181;
int64_t _184;
int64_t _185;
bool _186;
frost$core$Bit _187;
bool _189;
frost$collections$Array** _192;
frost$collections$Array* _193;
frost$core$Int _194;
frost$core$Int64 _195;
frost$core$Int64 _196;
int64_t _199;
int64_t _200;
int64_t _201;
frost$core$Int64 _202;
frost$core$Int64$nullable _204;
frost$core$Object* _205;
frost$core$Int _207;
int64_t _208;
int64_t _209;
bool _210;
frost$core$Bit _211;
bool _212;
frost$collections$CollectionView* _214;
$fn245 _215;
frost$core$Int _216;
int64_t _217;
int64_t _218;
bool _219;
frost$core$Bit _220;
bool _221;
frost$core$Int _223;
frost$core$Object*** _227;
frost$core$Object** _228;
frost$core$Int64 _229;
int64_t _230;
frost$core$Object* _231;
frost$core$Object* _233;
frost$core$Object* _234;
frost$core$Object* _238;
frost$core$Int _241;
int64_t _244;
int64_t _245;
bool _246;
frost$core$Bit _247;
bool _249;
frost$collections$Array** _252;
frost$collections$Array* _253;
frost$core$Int _254;
frost$core$Int64 _255;
frost$core$Int64 _256;
int64_t _257;
int64_t _258;
bool _259;
frost$core$Bit _260;
$fn246 _261;
frost$core$Int64 _262;
frost$core$Int64$nullable _263;
frost$core$Object* _264;
frost$core$Int _266;
int64_t _267;
int64_t _268;
bool _269;
frost$core$Bit _270;
bool _271;
frost$collections$CollectionView* _273;
$fn247 _274;
frost$core$Int _275;
int64_t _276;
int64_t _277;
bool _278;
frost$core$Bit _279;
bool _280;
frost$core$Int _282;
frost$core$Object*** _286;
frost$core$Object** _287;
frost$core$Int64 _288;
int64_t _289;
frost$core$Object* _290;
frost$core$Object* _292;
frost$core$Object* _293;
frost$core$Object* _297;
frost$core$Int _300;
int64_t _303;
int64_t _304;
bool _305;
frost$core$Bit _306;
bool _308;
frost$collections$Array** _311;
frost$collections$Array* _312;
frost$core$Int _313;
frost$core$Int64 _314;
frost$core$Int64 _315;
int64_t _316;
int64_t _317;
bool _318;
frost$core$Bit _319;
$fn248 _320;
frost$core$Int64 _321;
frost$core$Int64$nullable _322;
frost$core$Object* _323;
frost$core$Int _325;
int64_t _326;
int64_t _327;
bool _328;
frost$core$Bit _329;
bool _330;
frost$collections$CollectionView* _332;
$fn249 _333;
frost$core$Int _334;
int64_t _335;
int64_t _336;
bool _337;
frost$core$Bit _338;
bool _339;
frost$core$Int _341;
frost$core$Object*** _345;
frost$core$Object** _346;
frost$core$Int64 _347;
int64_t _348;
frost$core$Object* _349;
frost$core$Object* _351;
frost$core$Object* _352;
frost$core$Object* _356;
frost$core$Int _359;
int64_t _362;
int64_t _363;
bool _364;
frost$core$Bit _365;
bool _367;
frost$collections$Array** _370;
frost$collections$Array* _371;
frost$core$Int _372;
frost$core$Int64 _373;
frost$core$Int64 _374;
int64_t _375;
int64_t _376;
bool _377;
frost$core$Bit _378;
$fn250 _379;
frost$core$Int64 _380;
frost$core$Int64$nullable _381;
frost$core$Object* _382;
frost$core$Int _384;
int64_t _385;
int64_t _386;
bool _387;
frost$core$Bit _388;
bool _389;
frost$collections$CollectionView* _391;
$fn251 _392;
frost$core$Int _393;
int64_t _394;
int64_t _395;
bool _396;
frost$core$Bit _397;
bool _398;
frost$core$Int _400;
frost$core$Object*** _404;
frost$core$Object** _405;
frost$core$Int64 _406;
int64_t _407;
frost$core$Object* _408;
frost$core$Object* _410;
frost$core$Object* _411;
frost$core$Object* _415;
frost$core$Int _418;
int64_t _421;
int64_t _422;
bool _423;
frost$core$Bit _424;
bool _426;
frost$collections$Array** _429;
frost$collections$Array* _430;
frost$core$Int _431;
frost$core$Int64 _432;
frost$core$Int64 _433;
int64_t _434;
int64_t _435;
bool _436;
frost$core$Bit _437;
$fn252 _438;
frost$core$Int64 _439;
frost$core$Int64$nullable _440;
frost$core$Object* _441;
frost$core$Int _443;
int64_t _444;
int64_t _445;
bool _446;
frost$core$Bit _447;
bool _448;
frost$collections$CollectionView* _450;
$fn253 _451;
frost$core$Int _452;
int64_t _453;
int64_t _454;
bool _455;
frost$core$Bit _456;
bool _457;
frost$core$Int _459;
frost$core$Object*** _463;
frost$core$Object** _464;
frost$core$Int64 _465;
int64_t _466;
frost$core$Object* _467;
frost$core$Object* _469;
frost$core$Object* _470;
frost$core$Object* _474;
frost$core$Int _477;
int64_t _480;
int64_t _481;
bool _482;
frost$core$Bit _483;
bool _485;
frost$core$Int64 _488;
frost$core$Int64 _489;
int64_t _492;
int64_t _493;
bool _494;
frost$core$Bit _495;
bool _497;
frost$collections$Array** _500;
frost$collections$Array* _501;
frost$core$Int _502;
frost$core$Int64 _503;
frost$core$Int64$nullable _504;
frost$core$Object* _505;
frost$core$Int _507;
int64_t _508;
int64_t _509;
bool _510;
frost$core$Bit _511;
bool _512;
frost$collections$CollectionView* _514;
$fn254 _515;
frost$core$Int _516;
int64_t _517;
int64_t _518;
bool _519;
frost$core$Bit _520;
bool _521;
frost$core$Int _523;
frost$core$Object*** _527;
frost$core$Object** _528;
frost$core$Int64 _529;
int64_t _530;
frost$core$Object* _531;
frost$core$Object* _533;
frost$core$Object* _534;
frost$core$Object* _538;
frost$collections$Array** _543;
frost$collections$Array* _544;
frost$core$Int _545;
frost$core$Int64 _546;
frost$core$Int64$nullable _547;
frost$core$Object* _548;
frost$core$Int _550;
int64_t _551;
int64_t _552;
bool _553;
frost$core$Bit _554;
bool _555;
frost$collections$CollectionView* _557;
$fn255 _558;
frost$core$Int _559;
int64_t _560;
int64_t _561;
bool _562;
frost$core$Bit _563;
bool _564;
frost$core$Int _566;
frost$core$Object*** _570;
frost$core$Object** _571;
frost$core$Int64 _572;
int64_t _573;
frost$core$Object* _574;
frost$core$Object* _576;
frost$core$Object* _577;
frost$core$Object* _581;
frost$core$Int _586;
frost$core$Object* _587;
$fn256 _590;
frost$core$String* _591;
frost$core$String* _592;
frost$core$Object* _593;
frost$core$Object* _595;
frost$core$Object* _597;
frost$core$String* _600;
frost$core$Object* _602;
frost$core$Object* _604;
frost$core$Object* _606;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:464
_1 = ($fn257) param1->$class->vtable[2];
_2 = _1(param1, param3);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:465
_5 = ($fn258) param1->$class->vtable[2];
_6 = _5(param1, param5);
*(&local1) = _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:466
_9 = param4.$rawValue;
_10 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:467:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_13 = _9.value;
_14 = _10.value;
_15 = _13 == _14;
_16 = (frost$core$Bit) {_15};
_18 = _16.value;
if (_18) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:468
_21 = &param1->statements;
_22 = *_21;
_23 = param2.value;
_24 = *(&local0);
_25 = *(&local1);
_26 = _24.value;
_27 = _25.value;
_28 = _26 + _27;
_29 = (frost$core$Int64) {_28};
_30 = ((frost$core$Int64$nullable) { _29, true });
frost$core$Object* $tmp259;
if (_30.nonnull) {
    frost$core$Int64$wrapper* $tmp260;
    $tmp260 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp260->value = ((frost$core$Int64) _30.value);
    $tmp259 = ((frost$core$Object*) $tmp260);
}
else {
    $tmp259 = NULL;
}
_31 = $tmp259;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:468:35
_33 = (frost$core$Int) {0u};
_34 = _23.value;
_35 = _33.value;
_36 = _34 >= _35;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block8; else goto block7;
block8:;
_40 = ((frost$collections$CollectionView*) _22);
ITable* $tmp261 = _40->$class->itable;
while ($tmp261->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp261 = $tmp261->next;
}
_41 = $tmp261->methods[0];
_42 = _41(_40);
_43 = _23.value;
_44 = _42.value;
_45 = _43 < _44;
_46 = (frost$core$Bit) {_45};
_47 = _46.value;
if (_47) goto block6; else goto block7;
block7:;
_49 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s262, _49, &$s263);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_53 = &_22->data;
_54 = *_53;
_55 = frost$core$Int64$init$frost$core$Int(_23);
_56 = _55.value;
_57 = _31;
frost$core$Frost$ref$frost$core$Object$Q(_57);
_59 = _54[_56];
_60 = _59;
frost$core$Frost$unref$frost$core$Object$Q(_60);
_54[_56] = _31;
_64 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_64);
goto block1;
block3:;
_67 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:470:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_70 = _9.value;
_71 = _67.value;
_72 = _70 == _71;
_73 = (frost$core$Bit) {_72};
_75 = _73.value;
if (_75) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:471
_78 = &param1->statements;
_79 = *_78;
_80 = param2.value;
_81 = *(&local0);
_82 = *(&local1);
_83 = _81.value;
_84 = _82.value;
_85 = _83 - _84;
_86 = (frost$core$Int64) {_85};
_87 = ((frost$core$Int64$nullable) { _86, true });
frost$core$Object* $tmp264;
if (_87.nonnull) {
    frost$core$Int64$wrapper* $tmp265;
    $tmp265 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp265->value = ((frost$core$Int64) _87.value);
    $tmp264 = ((frost$core$Object*) $tmp265);
}
else {
    $tmp264 = NULL;
}
_88 = $tmp264;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:471:35
_90 = (frost$core$Int) {0u};
_91 = _80.value;
_92 = _90.value;
_93 = _91 >= _92;
_94 = (frost$core$Bit) {_93};
_95 = _94.value;
if (_95) goto block15; else goto block14;
block15:;
_97 = ((frost$collections$CollectionView*) _79);
ITable* $tmp266 = _97->$class->itable;
while ($tmp266->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp266 = $tmp266->next;
}
_98 = $tmp266->methods[0];
_99 = _98(_97);
_100 = _80.value;
_101 = _99.value;
_102 = _100 < _101;
_103 = (frost$core$Bit) {_102};
_104 = _103.value;
if (_104) goto block13; else goto block14;
block14:;
_106 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s267, _106, &$s268);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_110 = &_79->data;
_111 = *_110;
_112 = frost$core$Int64$init$frost$core$Int(_80);
_113 = _112.value;
_114 = _88;
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = _111[_113];
_117 = _116;
frost$core$Frost$unref$frost$core$Object$Q(_117);
_111[_113] = _88;
_121 = _88;
frost$core$Frost$unref$frost$core$Object$Q(_121);
goto block1;
block10:;
_124 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:473:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_127 = _9.value;
_128 = _124.value;
_129 = _127 == _128;
_130 = (frost$core$Bit) {_129};
_132 = _130.value;
if (_132) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:474
_135 = &param1->statements;
_136 = *_135;
_137 = param2.value;
_138 = *(&local0);
_139 = *(&local1);
_140 = _138.value;
_141 = _139.value;
_142 = _140 / _141;
_143 = (frost$core$Int64) {_142};
_144 = ((frost$core$Int64$nullable) { _143, true });
frost$core$Object* $tmp269;
if (_144.nonnull) {
    frost$core$Int64$wrapper* $tmp270;
    $tmp270 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp270->value = ((frost$core$Int64) _144.value);
    $tmp269 = ((frost$core$Object*) $tmp270);
}
else {
    $tmp269 = NULL;
}
_145 = $tmp269;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:474:35
_147 = (frost$core$Int) {0u};
_148 = _137.value;
_149 = _147.value;
_150 = _148 >= _149;
_151 = (frost$core$Bit) {_150};
_152 = _151.value;
if (_152) goto block22; else goto block21;
block22:;
_154 = ((frost$collections$CollectionView*) _136);
ITable* $tmp271 = _154->$class->itable;
while ($tmp271->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp271 = $tmp271->next;
}
_155 = $tmp271->methods[0];
_156 = _155(_154);
_157 = _137.value;
_158 = _156.value;
_159 = _157 < _158;
_160 = (frost$core$Bit) {_159};
_161 = _160.value;
if (_161) goto block20; else goto block21;
block21:;
_163 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s272, _163, &$s273);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_167 = &_136->data;
_168 = *_167;
_169 = frost$core$Int64$init$frost$core$Int(_137);
_170 = _169.value;
_171 = _145;
frost$core$Frost$ref$frost$core$Object$Q(_171);
_173 = _168[_170];
_174 = _173;
frost$core$Frost$unref$frost$core$Object$Q(_174);
_168[_170] = _145;
_178 = _145;
frost$core$Frost$unref$frost$core$Object$Q(_178);
goto block1;
block17:;
_181 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:476:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_184 = _9.value;
_185 = _181.value;
_186 = _184 == _185;
_187 = (frost$core$Bit) {_186};
_189 = _187.value;
if (_189) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:477
_192 = &param1->statements;
_193 = *_192;
_194 = param2.value;
_195 = *(&local0);
_196 = *(&local1);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Interpreter.frost:477:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:107
_199 = _195.value;
_200 = _196.value;
_201 = _199 % _200;
_202 = (frost$core$Int64) {_201};
_204 = ((frost$core$Int64$nullable) { _202, true });
frost$core$Object* $tmp274;
if (_204.nonnull) {
    frost$core$Int64$wrapper* $tmp275;
    $tmp275 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp275->value = ((frost$core$Int64) _204.value);
    $tmp274 = ((frost$core$Object*) $tmp275);
}
else {
    $tmp274 = NULL;
}
_205 = $tmp274;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:477:35
_207 = (frost$core$Int) {0u};
_208 = _194.value;
_209 = _207.value;
_210 = _208 >= _209;
_211 = (frost$core$Bit) {_210};
_212 = _211.value;
if (_212) goto block30; else goto block29;
block30:;
_214 = ((frost$collections$CollectionView*) _193);
ITable* $tmp276 = _214->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp276 = $tmp276->next;
}
_215 = $tmp276->methods[0];
_216 = _215(_214);
_217 = _194.value;
_218 = _216.value;
_219 = _217 < _218;
_220 = (frost$core$Bit) {_219};
_221 = _220.value;
if (_221) goto block28; else goto block29;
block29:;
_223 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s277, _223, &$s278);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_227 = &_193->data;
_228 = *_227;
_229 = frost$core$Int64$init$frost$core$Int(_194);
_230 = _229.value;
_231 = _205;
frost$core$Frost$ref$frost$core$Object$Q(_231);
_233 = _228[_230];
_234 = _233;
frost$core$Frost$unref$frost$core$Object$Q(_234);
_228[_230] = _205;
_238 = _205;
frost$core$Frost$unref$frost$core$Object$Q(_238);
goto block1;
block24:;
_241 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:479:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_244 = _9.value;
_245 = _241.value;
_246 = _244 == _245;
_247 = (frost$core$Bit) {_246};
_249 = _247.value;
if (_249) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:480
_252 = &param1->statements;
_253 = *_252;
_254 = param2.value;
_255 = *(&local0);
_256 = *(&local1);
_257 = _255.value;
_258 = _256.value;
_259 = _257 > _258;
_260 = (frost$core$Bit) {_259};
_261 = ($fn279) param0->$class->vtable[21];
_262 = _261(param0, _260);
_263 = ((frost$core$Int64$nullable) { _262, true });
frost$core$Object* $tmp280;
if (_263.nonnull) {
    frost$core$Int64$wrapper* $tmp281;
    $tmp281 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp281->value = ((frost$core$Int64) _263.value);
    $tmp280 = ((frost$core$Object*) $tmp281);
}
else {
    $tmp280 = NULL;
}
_264 = $tmp280;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:480:35
_266 = (frost$core$Int) {0u};
_267 = _254.value;
_268 = _266.value;
_269 = _267 >= _268;
_270 = (frost$core$Bit) {_269};
_271 = _270.value;
if (_271) goto block37; else goto block36;
block37:;
_273 = ((frost$collections$CollectionView*) _253);
ITable* $tmp282 = _273->$class->itable;
while ($tmp282->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp282 = $tmp282->next;
}
_274 = $tmp282->methods[0];
_275 = _274(_273);
_276 = _254.value;
_277 = _275.value;
_278 = _276 < _277;
_279 = (frost$core$Bit) {_278};
_280 = _279.value;
if (_280) goto block35; else goto block36;
block36:;
_282 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s283, _282, &$s284);
abort(); // unreachable
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_286 = &_253->data;
_287 = *_286;
_288 = frost$core$Int64$init$frost$core$Int(_254);
_289 = _288.value;
_290 = _264;
frost$core$Frost$ref$frost$core$Object$Q(_290);
_292 = _287[_289];
_293 = _292;
frost$core$Frost$unref$frost$core$Object$Q(_293);
_287[_289] = _264;
_297 = _264;
frost$core$Frost$unref$frost$core$Object$Q(_297);
goto block1;
block32:;
_300 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:482:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_303 = _9.value;
_304 = _300.value;
_305 = _303 == _304;
_306 = (frost$core$Bit) {_305};
_308 = _306.value;
if (_308) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:483
_311 = &param1->statements;
_312 = *_311;
_313 = param2.value;
_314 = *(&local0);
_315 = *(&local1);
_316 = _314.value;
_317 = _315.value;
_318 = _316 >= _317;
_319 = (frost$core$Bit) {_318};
_320 = ($fn285) param0->$class->vtable[21];
_321 = _320(param0, _319);
_322 = ((frost$core$Int64$nullable) { _321, true });
frost$core$Object* $tmp286;
if (_322.nonnull) {
    frost$core$Int64$wrapper* $tmp287;
    $tmp287 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp287->value = ((frost$core$Int64) _322.value);
    $tmp286 = ((frost$core$Object*) $tmp287);
}
else {
    $tmp286 = NULL;
}
_323 = $tmp286;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:483:35
_325 = (frost$core$Int) {0u};
_326 = _313.value;
_327 = _325.value;
_328 = _326 >= _327;
_329 = (frost$core$Bit) {_328};
_330 = _329.value;
if (_330) goto block44; else goto block43;
block44:;
_332 = ((frost$collections$CollectionView*) _312);
ITable* $tmp288 = _332->$class->itable;
while ($tmp288->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp288 = $tmp288->next;
}
_333 = $tmp288->methods[0];
_334 = _333(_332);
_335 = _313.value;
_336 = _334.value;
_337 = _335 < _336;
_338 = (frost$core$Bit) {_337};
_339 = _338.value;
if (_339) goto block42; else goto block43;
block43:;
_341 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s289, _341, &$s290);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_345 = &_312->data;
_346 = *_345;
_347 = frost$core$Int64$init$frost$core$Int(_313);
_348 = _347.value;
_349 = _323;
frost$core$Frost$ref$frost$core$Object$Q(_349);
_351 = _346[_348];
_352 = _351;
frost$core$Frost$unref$frost$core$Object$Q(_352);
_346[_348] = _323;
_356 = _323;
frost$core$Frost$unref$frost$core$Object$Q(_356);
goto block1;
block39:;
_359 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:485:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_362 = _9.value;
_363 = _359.value;
_364 = _362 == _363;
_365 = (frost$core$Bit) {_364};
_367 = _365.value;
if (_367) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:486
_370 = &param1->statements;
_371 = *_370;
_372 = param2.value;
_373 = *(&local0);
_374 = *(&local1);
_375 = _373.value;
_376 = _374.value;
_377 = _375 < _376;
_378 = (frost$core$Bit) {_377};
_379 = ($fn291) param0->$class->vtable[21];
_380 = _379(param0, _378);
_381 = ((frost$core$Int64$nullable) { _380, true });
frost$core$Object* $tmp292;
if (_381.nonnull) {
    frost$core$Int64$wrapper* $tmp293;
    $tmp293 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp293->value = ((frost$core$Int64) _381.value);
    $tmp292 = ((frost$core$Object*) $tmp293);
}
else {
    $tmp292 = NULL;
}
_382 = $tmp292;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:486:35
_384 = (frost$core$Int) {0u};
_385 = _372.value;
_386 = _384.value;
_387 = _385 >= _386;
_388 = (frost$core$Bit) {_387};
_389 = _388.value;
if (_389) goto block51; else goto block50;
block51:;
_391 = ((frost$collections$CollectionView*) _371);
ITable* $tmp294 = _391->$class->itable;
while ($tmp294->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp294 = $tmp294->next;
}
_392 = $tmp294->methods[0];
_393 = _392(_391);
_394 = _372.value;
_395 = _393.value;
_396 = _394 < _395;
_397 = (frost$core$Bit) {_396};
_398 = _397.value;
if (_398) goto block49; else goto block50;
block50:;
_400 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s295, _400, &$s296);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_404 = &_371->data;
_405 = *_404;
_406 = frost$core$Int64$init$frost$core$Int(_372);
_407 = _406.value;
_408 = _382;
frost$core$Frost$ref$frost$core$Object$Q(_408);
_410 = _405[_407];
_411 = _410;
frost$core$Frost$unref$frost$core$Object$Q(_411);
_405[_407] = _382;
_415 = _382;
frost$core$Frost$unref$frost$core$Object$Q(_415);
goto block1;
block46:;
_418 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:488:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_421 = _9.value;
_422 = _418.value;
_423 = _421 == _422;
_424 = (frost$core$Bit) {_423};
_426 = _424.value;
if (_426) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:489
_429 = &param1->statements;
_430 = *_429;
_431 = param2.value;
_432 = *(&local0);
_433 = *(&local1);
_434 = _432.value;
_435 = _433.value;
_436 = _434 <= _435;
_437 = (frost$core$Bit) {_436};
_438 = ($fn297) param0->$class->vtable[21];
_439 = _438(param0, _437);
_440 = ((frost$core$Int64$nullable) { _439, true });
frost$core$Object* $tmp298;
if (_440.nonnull) {
    frost$core$Int64$wrapper* $tmp299;
    $tmp299 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp299->value = ((frost$core$Int64) _440.value);
    $tmp298 = ((frost$core$Object*) $tmp299);
}
else {
    $tmp298 = NULL;
}
_441 = $tmp298;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:489:35
_443 = (frost$core$Int) {0u};
_444 = _431.value;
_445 = _443.value;
_446 = _444 >= _445;
_447 = (frost$core$Bit) {_446};
_448 = _447.value;
if (_448) goto block58; else goto block57;
block58:;
_450 = ((frost$collections$CollectionView*) _430);
ITable* $tmp300 = _450->$class->itable;
while ($tmp300->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp300 = $tmp300->next;
}
_451 = $tmp300->methods[0];
_452 = _451(_450);
_453 = _431.value;
_454 = _452.value;
_455 = _453 < _454;
_456 = (frost$core$Bit) {_455};
_457 = _456.value;
if (_457) goto block56; else goto block57;
block57:;
_459 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s301, _459, &$s302);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_463 = &_430->data;
_464 = *_463;
_465 = frost$core$Int64$init$frost$core$Int(_431);
_466 = _465.value;
_467 = _441;
frost$core$Frost$ref$frost$core$Object$Q(_467);
_469 = _464[_466];
_470 = _469;
frost$core$Frost$unref$frost$core$Object$Q(_470);
_464[_466] = _441;
_474 = _441;
frost$core$Frost$unref$frost$core$Object$Q(_474);
goto block1;
block53:;
_477 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:491:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_480 = _9.value;
_481 = _477.value;
_482 = _480 == _481;
_483 = (frost$core$Bit) {_482};
_485 = _483.value;
if (_485) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:492
_488 = *(&local0);
_489 = *(&local1);
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Interpreter.frost:492:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
_492 = _488.value;
_493 = _489.value;
_494 = _492 == _493;
_495 = (frost$core$Bit) {_494};
_497 = _495.value;
if (_497) goto block62; else goto block64;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:493
_500 = &param1->statements;
_501 = *_500;
_502 = param2.value;
_503 = (frost$core$Int64) {1u};
_504 = ((frost$core$Int64$nullable) { _503, true });
frost$core$Object* $tmp303;
if (_504.nonnull) {
    frost$core$Int64$wrapper* $tmp304;
    $tmp304 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp304->value = ((frost$core$Int64) _504.value);
    $tmp303 = ((frost$core$Object*) $tmp304);
}
else {
    $tmp303 = NULL;
}
_505 = $tmp303;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:493:39
_507 = (frost$core$Int) {0u};
_508 = _502.value;
_509 = _507.value;
_510 = _508 >= _509;
_511 = (frost$core$Bit) {_510};
_512 = _511.value;
if (_512) goto block69; else goto block68;
block69:;
_514 = ((frost$collections$CollectionView*) _501);
ITable* $tmp305 = _514->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp305 = $tmp305->next;
}
_515 = $tmp305->methods[0];
_516 = _515(_514);
_517 = _502.value;
_518 = _516.value;
_519 = _517 < _518;
_520 = (frost$core$Bit) {_519};
_521 = _520.value;
if (_521) goto block67; else goto block68;
block68:;
_523 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s306, _523, &$s307);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_527 = &_501->data;
_528 = *_527;
_529 = frost$core$Int64$init$frost$core$Int(_502);
_530 = _529.value;
_531 = _505;
frost$core$Frost$ref$frost$core$Object$Q(_531);
_533 = _528[_530];
_534 = _533;
frost$core$Frost$unref$frost$core$Object$Q(_534);
_528[_530] = _505;
_538 = _505;
frost$core$Frost$unref$frost$core$Object$Q(_538);
goto block63;
block64:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:496
_543 = &param1->statements;
_544 = *_543;
_545 = param2.value;
_546 = (frost$core$Int64) {0u};
_547 = ((frost$core$Int64$nullable) { _546, true });
frost$core$Object* $tmp308;
if (_547.nonnull) {
    frost$core$Int64$wrapper* $tmp309;
    $tmp309 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp309->value = ((frost$core$Int64) _547.value);
    $tmp308 = ((frost$core$Object*) $tmp309);
}
else {
    $tmp308 = NULL;
}
_548 = $tmp308;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:496:39
_550 = (frost$core$Int) {0u};
_551 = _545.value;
_552 = _550.value;
_553 = _551 >= _552;
_554 = (frost$core$Bit) {_553};
_555 = _554.value;
if (_555) goto block73; else goto block72;
block73:;
_557 = ((frost$collections$CollectionView*) _544);
ITable* $tmp310 = _557->$class->itable;
while ($tmp310->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp310 = $tmp310->next;
}
_558 = $tmp310->methods[0];
_559 = _558(_557);
_560 = _545.value;
_561 = _559.value;
_562 = _560 < _561;
_563 = (frost$core$Bit) {_562};
_564 = _563.value;
if (_564) goto block71; else goto block72;
block72:;
_566 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s311, _566, &$s312);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_570 = &_544->data;
_571 = *_570;
_572 = frost$core$Int64$init$frost$core$Int(_545);
_573 = _572.value;
_574 = _548;
frost$core$Frost$ref$frost$core$Object$Q(_574);
_576 = _571[_573];
_577 = _576;
frost$core$Frost$unref$frost$core$Object$Q(_577);
_571[_573] = _548;
_581 = _548;
frost$core$Frost$unref$frost$core$Object$Q(_581);
goto block63;
block63:;
goto block1;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:500
_586 = (frost$core$Int) {500u};
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp313;
$tmp313 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Binary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp313->value = param4;
_587 = ((frost$core$Object*) $tmp313);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:500:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_590 = ($fn314) _587->$class->vtable[0];
_591 = _590(_587);
_592 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s315, _591);
_593 = ((frost$core$Object*) _592);
frost$core$Frost$ref$frost$core$Object$Q(_593);
_595 = ((frost$core$Object*) _592);
frost$core$Frost$unref$frost$core$Object$Q(_595);
_597 = ((frost$core$Object*) _591);
frost$core$Frost$unref$frost$core$Object$Q(_597);
_600 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_592, &$s316);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s317, _586, _600);
_602 = ((frost$core$Object*) _600);
frost$core$Frost$unref$frost$core$Object$Q(_602);
_604 = ((frost$core$Object*) _592);
frost$core$Frost$unref$frost$core$Object$Q(_604);
_606 = _587;
frost$core$Frost$unref$frost$core$Object$Q(_606);
abort(); // unreachable
block1:;
return;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$call$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(void* rawSelf, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$FixedArray* param2) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

org$frostlang$frostc$Interpreter$Code* local0 = NULL;
org$frostlang$frostc$Interpreter$Context* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
frost$core$Int local3;
frost$core$Int local4;
org$frostlang$frostc$IR$Statement$ID local5;
org$frostlang$frostc$IR$Statement* local6 = NULL;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$expression$Binary$Operator local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$IR$Block$ID local10;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$IR$Value* local13 = NULL;
org$frostlang$frostc$IR$Block$ID local14;
org$frostlang$frostc$IR$Block$ID local15;
org$frostlang$frostc$ClassDecl* local16 = NULL;
frost$core$UInt8* local17;
org$frostlang$frostc$ClassDecl* local18 = NULL;
org$frostlang$frostc$FixedArray* local19 = NULL;
org$frostlang$frostc$IR$Value* local20 = NULL;
org$frostlang$frostc$FixedArray* local21 = NULL;
org$frostlang$frostc$MethodDecl* local22 = NULL;
org$frostlang$frostc$IR$Value* local23 = NULL;
org$frostlang$frostc$FieldDecl* local24 = NULL;
org$frostlang$frostc$IR$Value* local25 = NULL;
org$frostlang$frostc$FieldDecl* local26 = NULL;
org$frostlang$frostc$IR$Value* local27 = NULL;
frost$core$Int local28;
frost$core$Int* local29;
org$frostlang$frostc$ClassDecl* local30 = NULL;
org$frostlang$frostc$MethodDecl* local31 = NULL;
org$frostlang$frostc$IR$Value* local32 = NULL;
frost$core$Int* local33;
org$frostlang$frostc$IR$Value* local34 = NULL;
org$frostlang$frostc$Type* local35 = NULL;
org$frostlang$frostc$IR$Value* local36 = NULL;
org$frostlang$frostc$IR$Value* local37 = NULL;
org$frostlang$frostc$Type* local38 = NULL;
frost$core$UInt8* local39;
frost$core$Int local40;
frost$core$Int local41;
org$frostlang$frostc$IR$Value* local42 = NULL;
org$frostlang$frostc$IR$Value* local43 = NULL;
org$frostlang$frostc$IR$Value* local44 = NULL;
org$frostlang$frostc$Type* local45 = NULL;
frost$core$UInt8* local46;
frost$core$Int64 local47;
frost$core$Int local48;
frost$core$Int local49;
org$frostlang$frostc$IR$Value* local50 = NULL;
org$frostlang$frostc$IR$Value* local51 = NULL;
org$frostlang$frostc$MethodDecl* local52 = NULL;
org$frostlang$frostc$FixedArray* local53 = NULL;
org$frostlang$frostc$IR$Value* local54 = NULL;
org$frostlang$frostc$IR$Value* local55 = NULL;
frost$core$Int64 local56;
frost$core$Int64 local57;
frost$collections$IdentityMap** _1;
frost$collections$IdentityMap* _2;
frost$core$Object* _3;
frost$core$Object* _4;
org$frostlang$frostc$Interpreter$Code* _5;
frost$core$Object* _7;
org$frostlang$frostc$Interpreter$Code* _9;
frost$core$Object* _10;
frost$core$Object* _13;
org$frostlang$frostc$Interpreter$Code* _16;
bool _17;
frost$core$Bit _18;
bool _19;
org$frostlang$frostc$FixedArray** _22;
org$frostlang$frostc$FixedArray* _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Weak** _29;
frost$core$Weak* _30;
frost$core$Bit* _35;
frost$core$Bit _36;
bool _38;
frost$core$Int _40;
frost$core$Object** _44;
frost$core$Object* _45;
frost$core$Object* _46;
frost$core$Object* _47;
org$frostlang$frostc$Compiler* _50;
bool _51;
frost$core$Bit _52;
bool _53;
frost$core$Int _55;
org$frostlang$frostc$Compiler* _58;
frost$core$Weak** _59;
frost$core$Weak* _60;
frost$core$Bit* _65;
frost$core$Bit _66;
bool _68;
frost$core$Int _70;
frost$core$Object** _74;
frost$core$Object* _75;
frost$core$Object* _76;
frost$core$Object* _77;
org$frostlang$frostc$ClassDecl* _80;
frost$core$Object* _82;
frost$core$Object* _84;
frost$collections$IdentityMap** _87;
frost$collections$IdentityMap* _88;
frost$core$Object* _89;
frost$core$Object* _90;
org$frostlang$frostc$Interpreter$Code* _91;
frost$core$Object* _92;
org$frostlang$frostc$Interpreter$Code* _94;
frost$core$Object* _95;
frost$core$Object* _98;
org$frostlang$frostc$Interpreter$Code* _101;
bool _102;
frost$core$Bit _103;
bool _104;
frost$core$Int _106;
frost$collections$Stack** _112;
frost$collections$Stack* _113;
frost$core$Int _114;
frost$core$Int _116;
int64_t _117;
int64_t _118;
bool _119;
frost$core$Bit _120;
bool _121;
frost$collections$Array** _125;
frost$collections$Array* _126;
frost$collections$CollectionView* _127;
$fn318 _128;
frost$core$Int _129;
int64_t _131;
int64_t _132;
bool _133;
frost$core$Bit _134;
bool _135;
frost$core$Int _137;
frost$collections$Array** _141;
frost$collections$Array* _142;
frost$collections$CollectionView* _143;
$fn319 _144;
frost$core$Int _145;
int64_t _146;
int64_t _147;
bool _148;
frost$core$Bit _149;
bool _150;
frost$core$Int _152;
frost$collections$Array** _156;
frost$collections$Array* _157;
frost$collections$Array** _158;
frost$collections$Array* _159;
frost$collections$CollectionView* _160;
$fn320 _161;
frost$core$Int _162;
frost$core$Int _163;
int64_t _164;
int64_t _165;
int64_t _166;
frost$core$Int _167;
int64_t _168;
int64_t _169;
int64_t _170;
frost$core$Int _171;
frost$core$Int _173;
int64_t _174;
int64_t _175;
bool _176;
frost$core$Bit _177;
bool _178;
frost$collections$CollectionView* _180;
$fn321 _181;
frost$core$Int _182;
int64_t _183;
int64_t _184;
bool _185;
frost$core$Bit _186;
bool _187;
frost$core$Int _189;
frost$core$Object*** _193;
frost$core$Object** _194;
frost$core$Int64 _195;
int64_t _196;
frost$core$Object* _197;
frost$core$Object* _198;
frost$core$Object* _201;
frost$core$Object* _202;
frost$core$Object* _204;
org$frostlang$frostc$Interpreter$Context* _207;
$fn322 _208;
frost$core$Int64 _209;
frost$core$Object* _210;
org$frostlang$frostc$Interpreter$Code* _212;
frost$core$Object* _213;
org$frostlang$frostc$Interpreter$Context* _219;
org$frostlang$frostc$Interpreter$Code* _220;
bool _221;
frost$core$Bit _222;
bool _223;
frost$core$Int _225;
org$frostlang$frostc$Interpreter$Code* _228;
frost$core$Object* _231;
org$frostlang$frostc$Interpreter$Context* _233;
frost$core$Object* _234;
frost$core$Object* _237;
frost$collections$Iterable* _240;
$fn323 _241;
frost$collections$Iterator* _242;
$fn324 _244;
frost$core$Bit _245;
bool _246;
$fn325 _249;
frost$core$Object* _250;
org$frostlang$frostc$IR$Value* _251;
frost$core$Object* _252;
org$frostlang$frostc$IR$Value* _254;
frost$core$Object* _255;
org$frostlang$frostc$Interpreter$Context* _259;
frost$collections$Array** _260;
frost$collections$Array* _261;
frost$collections$Stack** _262;
frost$collections$Stack* _263;
frost$core$Int _264;
frost$core$Int _266;
int64_t _267;
int64_t _268;
bool _269;
frost$core$Bit _270;
bool _271;
frost$collections$Array** _275;
frost$collections$Array* _276;
frost$collections$CollectionView* _277;
$fn326 _278;
frost$core$Int _279;
int64_t _281;
int64_t _282;
bool _283;
frost$core$Bit _284;
bool _285;
frost$core$Int _287;
frost$collections$Array** _291;
frost$collections$Array* _292;
frost$collections$CollectionView* _293;
$fn327 _294;
frost$core$Int _295;
int64_t _296;
int64_t _297;
bool _298;
frost$core$Bit _299;
bool _300;
frost$core$Int _302;
frost$collections$Array** _306;
frost$collections$Array* _307;
frost$collections$Array** _308;
frost$collections$Array* _309;
frost$collections$CollectionView* _310;
$fn328 _311;
frost$core$Int _312;
frost$core$Int _313;
int64_t _314;
int64_t _315;
int64_t _316;
frost$core$Int _317;
int64_t _318;
int64_t _319;
int64_t _320;
frost$core$Int _321;
frost$core$Int _323;
int64_t _324;
int64_t _325;
bool _326;
frost$core$Bit _327;
bool _328;
frost$collections$CollectionView* _330;
$fn329 _331;
frost$core$Int _332;
int64_t _333;
int64_t _334;
bool _335;
frost$core$Bit _336;
bool _337;
frost$core$Int _339;
frost$core$Object*** _343;
frost$core$Object** _344;
frost$core$Int64 _345;
int64_t _346;
frost$core$Object* _347;
frost$core$Object* _348;
frost$core$Object* _351;
frost$core$Object* _352;
frost$core$Object* _354;
org$frostlang$frostc$Interpreter$Context* _357;
org$frostlang$frostc$IR$Value* _358;
$fn330 _359;
frost$core$Int64 _360;
frost$core$Object* _361;
frost$core$Object* _363;
frost$core$Object* _365;
frost$core$Object* _367;
org$frostlang$frostc$IR$Value* _369;
frost$core$Object* _370;
frost$core$Object* _374;
frost$collections$Stack** _377;
frost$collections$Stack* _378;
org$frostlang$frostc$Interpreter$Context* _379;
frost$core$Object* _380;
frost$collections$Array** _383;
frost$collections$Array* _384;
frost$core$Object* _385;
frost$core$Int _389;
frost$core$Int _392;
org$frostlang$frostc$Interpreter$Code* _397;
bool _398;
frost$core$Bit _399;
bool _400;
frost$core$Int _402;
org$frostlang$frostc$Interpreter$Code* _405;
frost$collections$Array** _406;
frost$collections$Array* _407;
frost$core$Int _408;
frost$core$Int _410;
int64_t _411;
int64_t _412;
bool _413;
frost$core$Bit _414;
bool _415;
frost$collections$CollectionView* _417;
$fn331 _418;
frost$core$Int _419;
int64_t _420;
int64_t _421;
bool _422;
frost$core$Bit _423;
bool _424;
frost$core$Int _426;
frost$core$Object*** _430;
frost$core$Object** _431;
frost$core$Int64 _432;
int64_t _433;
frost$core$Object* _434;
frost$core$Object* _435;
frost$collections$Array* _438;
frost$core$Int _439;
frost$core$Int _441;
int64_t _442;
int64_t _443;
bool _444;
frost$core$Bit _445;
bool _446;
frost$collections$CollectionView* _448;
$fn332 _449;
frost$core$Int _450;
int64_t _451;
int64_t _452;
bool _453;
frost$core$Bit _454;
bool _455;
frost$core$Int _457;
frost$core$Object*** _461;
frost$core$Object** _462;
frost$core$Int64 _463;
int64_t _464;
frost$core$Object* _465;
frost$core$Object* _466;
org$frostlang$frostc$IR$Statement$ID _469;
frost$core$Object* _471;
frost$core$Object* _473;
org$frostlang$frostc$Interpreter$Code* _476;
bool _477;
frost$core$Bit _478;
bool _479;
frost$core$Int _481;
org$frostlang$frostc$Interpreter$Code* _484;
frost$collections$Array** _485;
frost$collections$Array* _486;
frost$core$Int _487;
frost$core$Int _489;
int64_t _490;
int64_t _491;
bool _492;
frost$core$Bit _493;
bool _494;
frost$collections$CollectionView* _496;
$fn333 _497;
frost$core$Int _498;
int64_t _499;
int64_t _500;
bool _501;
frost$core$Bit _502;
bool _503;
frost$core$Int _505;
frost$core$Object*** _509;
frost$core$Object** _510;
frost$core$Int64 _511;
int64_t _512;
frost$core$Object* _513;
frost$core$Object* _514;
frost$collections$Array* _517;
frost$core$Int _518;
frost$core$Int _520;
int64_t _521;
int64_t _522;
bool _523;
frost$core$Bit _524;
bool _525;
frost$collections$CollectionView* _527;
$fn334 _528;
frost$core$Int _529;
int64_t _530;
int64_t _531;
bool _532;
frost$core$Bit _533;
bool _534;
frost$core$Int _536;
frost$core$Object*** _540;
frost$core$Object** _541;
frost$core$Int64 _542;
int64_t _543;
frost$core$Object* _544;
frost$core$Object* _545;
org$frostlang$frostc$IR$Statement* _548;
frost$core$Object* _550;
org$frostlang$frostc$IR$Statement* _552;
frost$core$Object* _553;
frost$core$Object* _556;
frost$core$Object* _558;
org$frostlang$frostc$IR$Statement* _561;
frost$core$Int* _562;
frost$core$Int _563;
frost$core$Int _564;
int64_t _567;
int64_t _568;
bool _569;
frost$core$Bit _570;
bool _572;
org$frostlang$frostc$MethodPosition* _574;
org$frostlang$frostc$MethodPosition _575;
org$frostlang$frostc$IR$Value** _576;
org$frostlang$frostc$IR$Value* _577;
frost$core$Object* _579;
org$frostlang$frostc$IR$Value* _581;
frost$core$Object* _582;
org$frostlang$frostc$expression$Binary$Operator* _585;
org$frostlang$frostc$expression$Binary$Operator _586;
org$frostlang$frostc$IR$Value** _588;
org$frostlang$frostc$IR$Value* _589;
frost$core$Object* _591;
org$frostlang$frostc$IR$Value* _593;
frost$core$Object* _594;
org$frostlang$frostc$Type** _597;
org$frostlang$frostc$Type* _598;
org$frostlang$frostc$Interpreter$Context* _600;
org$frostlang$frostc$IR$Statement$ID _601;
org$frostlang$frostc$IR$Value* _602;
org$frostlang$frostc$expression$Binary$Operator _603;
org$frostlang$frostc$IR$Value* _604;
$fn335 _605;
org$frostlang$frostc$IR$Value* _607;
frost$core$Object* _608;
org$frostlang$frostc$IR$Value* _611;
frost$core$Object* _612;
frost$core$Int _616;
int64_t _619;
int64_t _620;
bool _621;
frost$core$Bit _622;
bool _624;
org$frostlang$frostc$MethodPosition* _626;
org$frostlang$frostc$MethodPosition _627;
org$frostlang$frostc$IR$Block$ID* _628;
org$frostlang$frostc$IR$Block$ID _629;
org$frostlang$frostc$Interpreter$Code* _632;
bool _633;
frost$core$Bit _634;
bool _635;
frost$core$Int _637;
org$frostlang$frostc$Interpreter$Code* _640;
frost$collections$Array** _641;
frost$collections$Array* _642;
org$frostlang$frostc$IR$Block$ID _643;
frost$core$Int _644;
frost$core$Int _646;
int64_t _647;
int64_t _648;
bool _649;
frost$core$Bit _650;
bool _651;
frost$collections$CollectionView* _653;
$fn336 _654;
frost$core$Int _655;
int64_t _656;
int64_t _657;
bool _658;
frost$core$Bit _659;
bool _660;
frost$core$Int _662;
frost$core$Object*** _666;
frost$core$Object** _667;
frost$core$Int64 _668;
int64_t _669;
frost$core$Object* _670;
frost$core$Object* _671;
frost$core$Int _674;
frost$core$Object* _676;
frost$core$Int _679;
org$frostlang$frostc$IR$Statement* _682;
frost$core$Object* _683;
frost$core$Int _687;
int64_t _690;
int64_t _691;
bool _692;
frost$core$Bit _693;
bool _695;
org$frostlang$frostc$MethodPosition* _697;
org$frostlang$frostc$MethodPosition _698;
org$frostlang$frostc$IR$Value** _699;
org$frostlang$frostc$IR$Value* _700;
frost$core$Object* _702;
org$frostlang$frostc$IR$Value* _704;
frost$core$Object* _705;
org$frostlang$frostc$Type** _708;
org$frostlang$frostc$Type* _709;
frost$core$Object* _711;
org$frostlang$frostc$Type* _713;
frost$core$Object* _714;
frost$core$Bit* _717;
frost$core$Bit _718;
org$frostlang$frostc$Interpreter$Context* _720;
org$frostlang$frostc$IR$Statement$ID _721;
org$frostlang$frostc$IR$Value* _722;
org$frostlang$frostc$Type* _723;
$fn337 _724;
org$frostlang$frostc$Type* _726;
frost$core$Object* _727;
org$frostlang$frostc$IR$Value* _730;
frost$core$Object* _731;
frost$core$Int _735;
int64_t _738;
int64_t _739;
bool _740;
frost$core$Bit _741;
bool _743;
frost$core$Int _746;
int64_t _749;
int64_t _750;
bool _751;
frost$core$Bit _752;
bool _754;
org$frostlang$frostc$MethodPosition* _756;
org$frostlang$frostc$MethodPosition _757;
org$frostlang$frostc$IR$Value** _758;
org$frostlang$frostc$IR$Value* _759;
frost$core$Object* _761;
org$frostlang$frostc$IR$Value* _763;
frost$core$Object* _764;
org$frostlang$frostc$IR$Block$ID* _767;
org$frostlang$frostc$IR$Block$ID _768;
org$frostlang$frostc$IR$Block$ID* _770;
org$frostlang$frostc$IR$Block$ID _771;
org$frostlang$frostc$Interpreter$Context* _774;
org$frostlang$frostc$IR$Value* _775;
$fn338 _776;
frost$core$Int64 _777;
frost$core$Int64 _778;
int64_t _779;
int64_t _780;
bool _781;
frost$core$Bit _782;
bool _783;
org$frostlang$frostc$Interpreter$Code* _786;
bool _787;
frost$core$Bit _788;
bool _789;
frost$core$Int _791;
org$frostlang$frostc$Interpreter$Code* _794;
frost$collections$Array** _795;
frost$collections$Array* _796;
org$frostlang$frostc$IR$Block$ID _797;
frost$core$Int _798;
frost$core$Int _800;
int64_t _801;
int64_t _802;
bool _803;
frost$core$Bit _804;
bool _805;
frost$collections$CollectionView* _807;
$fn339 _808;
frost$core$Int _809;
int64_t _810;
int64_t _811;
bool _812;
frost$core$Bit _813;
bool _814;
frost$core$Int _816;
frost$core$Object*** _820;
frost$core$Object** _821;
frost$core$Int64 _822;
int64_t _823;
frost$core$Object* _824;
frost$core$Object* _825;
frost$core$Int _828;
frost$core$Object* _830;
org$frostlang$frostc$Interpreter$Code* _835;
bool _836;
frost$core$Bit _837;
bool _838;
frost$core$Int _840;
org$frostlang$frostc$Interpreter$Code* _843;
frost$collections$Array** _844;
frost$collections$Array* _845;
org$frostlang$frostc$IR$Block$ID _846;
frost$core$Int _847;
frost$core$Int _849;
int64_t _850;
int64_t _851;
bool _852;
frost$core$Bit _853;
bool _854;
frost$collections$CollectionView* _856;
$fn340 _857;
frost$core$Int _858;
int64_t _859;
int64_t _860;
bool _861;
frost$core$Bit _862;
bool _863;
frost$core$Int _865;
frost$core$Object*** _869;
frost$core$Object** _870;
frost$core$Int64 _871;
int64_t _872;
frost$core$Object* _873;
frost$core$Object* _874;
frost$core$Int _877;
frost$core$Object* _879;
frost$core$Int _883;
org$frostlang$frostc$IR$Value* _886;
frost$core$Object* _887;
org$frostlang$frostc$IR$Statement* _890;
frost$core$Object* _891;
frost$core$Int _895;
int64_t _898;
int64_t _899;
bool _900;
frost$core$Bit _901;
bool _903;
org$frostlang$frostc$MethodPosition* _905;
org$frostlang$frostc$MethodPosition _906;
org$frostlang$frostc$ClassDecl** _907;
org$frostlang$frostc$ClassDecl* _908;
frost$core$Object* _910;
org$frostlang$frostc$ClassDecl* _912;
frost$core$Object* _913;
org$frostlang$frostc$MemoryLayout** _917;
org$frostlang$frostc$MemoryLayout* _918;
org$frostlang$frostc$ClassDecl* _919;
org$frostlang$frostc$Type** _920;
org$frostlang$frostc$Type* _921;
$fn341 _922;
frost$core$Int _923;
frost$core$Int64 _924;
int64_t _925;
frost$core$UInt8* _926;
frost$core$UInt8* _929;
org$frostlang$frostc$ClassDecl** _930;
org$frostlang$frostc$ClassDecl* _931;
frost$core$Object* _932;
org$frostlang$frostc$ClassDecl* _934;
frost$core$Object* _935;
frost$core$UInt8* _939;
org$frostlang$frostc$MemoryLayout** _940;
org$frostlang$frostc$MemoryLayout* _941;
$fn342 _942;
frost$core$Int _943;
frost$core$Int64 _944;
int64_t _945;
frost$core$UInt8* _946;
frost$core$Int32* _947;
frost$core$Int32 _948;
org$frostlang$frostc$Interpreter$Context* _951;
frost$collections$Array** _952;
frost$collections$Array* _953;
org$frostlang$frostc$IR$Statement$ID _954;
frost$core$Int _955;
frost$core$UInt8* _956;
int64_t _957;
frost$core$Int _958;
int64_t _961;
int64_t _962;
frost$core$Int64 _963;
frost$core$Int64$nullable _965;
frost$core$Object* _966;
frost$core$Int _968;
int64_t _969;
int64_t _970;
bool _971;
frost$core$Bit _972;
bool _973;
frost$collections$CollectionView* _975;
$fn343 _976;
frost$core$Int _977;
int64_t _978;
int64_t _979;
bool _980;
frost$core$Bit _981;
bool _982;
frost$core$Int _984;
frost$core$Object*** _988;
frost$core$Object** _989;
frost$core$Int64 _990;
int64_t _991;
frost$core$Object* _992;
frost$core$Object* _994;
frost$core$Object* _995;
frost$core$Object* _999;
org$frostlang$frostc$ClassDecl* _1001;
frost$core$Object* _1002;
frost$core$Int _1006;
int64_t _1009;
int64_t _1010;
bool _1011;
frost$core$Bit _1012;
bool _1014;
org$frostlang$frostc$MethodPosition* _1016;
org$frostlang$frostc$MethodPosition _1017;
org$frostlang$frostc$ClassDecl** _1018;
org$frostlang$frostc$ClassDecl* _1019;
frost$core$Object* _1021;
org$frostlang$frostc$ClassDecl* _1023;
frost$core$Object* _1024;
org$frostlang$frostc$FixedArray** _1027;
org$frostlang$frostc$FixedArray* _1028;
frost$core$Object* _1030;
org$frostlang$frostc$FixedArray* _1032;
frost$core$Object* _1033;
org$frostlang$frostc$Interpreter$Context* _1037;
org$frostlang$frostc$IR$Statement$ID _1038;
org$frostlang$frostc$ClassDecl* _1039;
org$frostlang$frostc$FixedArray* _1040;
$fn344 _1041;
org$frostlang$frostc$FixedArray* _1043;
frost$core$Object* _1044;
org$frostlang$frostc$ClassDecl* _1047;
frost$core$Object* _1048;
frost$core$Int _1052;
int64_t _1055;
int64_t _1056;
bool _1057;
frost$core$Bit _1058;
bool _1060;
org$frostlang$frostc$MethodPosition* _1062;
org$frostlang$frostc$MethodPosition _1063;
org$frostlang$frostc$IR$Value** _1064;
org$frostlang$frostc$IR$Value* _1065;
frost$core$Object* _1067;
org$frostlang$frostc$IR$Value* _1069;
frost$core$Object* _1070;
org$frostlang$frostc$FixedArray** _1073;
org$frostlang$frostc$FixedArray* _1074;
frost$core$Object* _1076;
org$frostlang$frostc$FixedArray* _1078;
frost$core$Object* _1079;
org$frostlang$frostc$Interpreter$Context* _1083;
org$frostlang$frostc$IR$Value* _1084;
$fn345 _1085;
frost$core$Int64 _1086;
int64_t _1089;
int64_t _1090;
frost$core$Int _1091;
int64_t _1093;
frost$core$UInt8* _1094;
org$frostlang$frostc$MethodDecl* _1095;
frost$core$Object* _1097;
org$frostlang$frostc$MethodDecl* _1099;
frost$core$Object* _1100;
org$frostlang$frostc$Interpreter$Context* _1104;
frost$collections$Array** _1105;
frost$collections$Array* _1106;
org$frostlang$frostc$IR$Statement$ID _1107;
frost$core$Int _1108;
org$frostlang$frostc$MethodDecl* _1109;
org$frostlang$frostc$FixedArray* _1110;
$fn346 _1111;
frost$core$Int64 _1112;
frost$core$Int64$nullable _1113;
frost$core$Object* _1114;
frost$core$Int _1116;
int64_t _1117;
int64_t _1118;
bool _1119;
frost$core$Bit _1120;
bool _1121;
frost$collections$CollectionView* _1123;
$fn347 _1124;
frost$core$Int _1125;
int64_t _1126;
int64_t _1127;
bool _1128;
frost$core$Bit _1129;
bool _1130;
frost$core$Int _1132;
frost$core$Object*** _1136;
frost$core$Object** _1137;
frost$core$Int64 _1138;
int64_t _1139;
frost$core$Object* _1140;
frost$core$Object* _1142;
frost$core$Object* _1143;
frost$core$Object* _1147;
org$frostlang$frostc$MethodDecl* _1149;
frost$core$Object* _1150;
org$frostlang$frostc$FixedArray* _1153;
frost$core$Object* _1154;
org$frostlang$frostc$IR$Value* _1157;
frost$core$Object* _1158;
frost$core$Int _1162;
int64_t _1165;
int64_t _1166;
bool _1167;
frost$core$Bit _1168;
bool _1170;
org$frostlang$frostc$MethodPosition* _1172;
org$frostlang$frostc$MethodPosition _1173;
org$frostlang$frostc$IR$Value** _1174;
org$frostlang$frostc$IR$Value* _1175;
frost$core$Object* _1177;
org$frostlang$frostc$IR$Value* _1179;
frost$core$Object* _1180;
org$frostlang$frostc$FieldDecl** _1183;
org$frostlang$frostc$FieldDecl* _1184;
frost$core$Object* _1186;
org$frostlang$frostc$FieldDecl* _1188;
frost$core$Object* _1189;
org$frostlang$frostc$Interpreter$Context* _1193;
org$frostlang$frostc$IR$Statement$ID _1194;
org$frostlang$frostc$IR$Value* _1195;
org$frostlang$frostc$FieldDecl* _1196;
$fn348 _1197;
org$frostlang$frostc$FieldDecl* _1199;
frost$core$Object* _1200;
org$frostlang$frostc$IR$Value* _1203;
frost$core$Object* _1204;
frost$core$Int _1208;
int64_t _1211;
int64_t _1212;
bool _1213;
frost$core$Bit _1214;
bool _1216;
org$frostlang$frostc$MethodPosition* _1218;
org$frostlang$frostc$MethodPosition _1219;
org$frostlang$frostc$IR$Value** _1220;
org$frostlang$frostc$IR$Value* _1221;
frost$core$Object* _1223;
org$frostlang$frostc$IR$Value* _1225;
frost$core$Object* _1226;
org$frostlang$frostc$FieldDecl** _1229;
org$frostlang$frostc$FieldDecl* _1230;
frost$core$Object* _1232;
org$frostlang$frostc$FieldDecl* _1234;
frost$core$Object* _1235;
org$frostlang$frostc$Interpreter$Context* _1239;
org$frostlang$frostc$IR$Statement$ID _1240;
org$frostlang$frostc$IR$Value* _1241;
org$frostlang$frostc$FieldDecl* _1242;
$fn349 _1243;
org$frostlang$frostc$FieldDecl* _1245;
frost$core$Object* _1246;
org$frostlang$frostc$IR$Value* _1249;
frost$core$Object* _1250;
frost$core$Int _1254;
int64_t _1257;
int64_t _1258;
bool _1259;
frost$core$Bit _1260;
bool _1262;
org$frostlang$frostc$MethodPosition* _1264;
org$frostlang$frostc$MethodPosition _1265;
org$frostlang$frostc$IR$Value** _1266;
org$frostlang$frostc$IR$Value* _1267;
frost$core$Object* _1269;
org$frostlang$frostc$IR$Value* _1271;
frost$core$Object* _1272;
frost$core$Int* _1275;
frost$core$Int _1276;
org$frostlang$frostc$Type** _1278;
org$frostlang$frostc$Type* _1279;
org$frostlang$frostc$Interpreter$Context* _1281;
org$frostlang$frostc$IR$Value* _1282;
$fn350 _1283;
frost$core$Int64 _1284;
int64_t _1287;
int64_t _1288;
frost$core$Int _1289;
int64_t _1291;
frost$core$Int* _1292;
frost$core$Int* _1295;
frost$core$Int _1296;
int64_t _1297;
frost$core$UInt8* _1298;
org$frostlang$frostc$ClassDecl* _1299;
frost$core$Object* _1301;
org$frostlang$frostc$ClassDecl* _1303;
frost$core$Object* _1304;
frost$core$Weak** _1308;
frost$core$Weak* _1309;
frost$core$Bit* _1314;
frost$core$Bit _1315;
bool _1317;
frost$core$Int _1319;
frost$core$Object** _1323;
frost$core$Object* _1324;
frost$core$Object* _1325;
frost$core$Object* _1326;
org$frostlang$frostc$Compiler* _1329;
bool _1330;
frost$core$Bit _1331;
bool _1332;
frost$core$Int _1334;
org$frostlang$frostc$Compiler* _1337;
org$frostlang$frostc$ClassDecl* _1338;
frost$collections$ListView* _1339;
frost$core$Int _1340;
$fn351 _1341;
frost$core$Object* _1342;
org$frostlang$frostc$MethodDecl* _1343;
frost$core$Object* _1345;
org$frostlang$frostc$MethodDecl* _1347;
frost$core$Object* _1348;
frost$core$Object* _1351;
frost$core$Object* _1353;
frost$core$Object* _1355;
org$frostlang$frostc$Interpreter$Context* _1358;
frost$collections$Array** _1359;
frost$collections$Array* _1360;
org$frostlang$frostc$IR$Statement$ID _1361;
frost$core$Int _1362;
org$frostlang$frostc$MethodDecl* _1363;
frost$core$Object* _1364;
frost$core$Int _1365;
frost$core$Int64 _1366;
frost$core$Int64$nullable _1367;
frost$core$Object* _1368;
frost$core$Int _1370;
int64_t _1371;
int64_t _1372;
bool _1373;
frost$core$Bit _1374;
bool _1375;
frost$collections$CollectionView* _1377;
$fn352 _1378;
frost$core$Int _1379;
int64_t _1380;
int64_t _1381;
bool _1382;
frost$core$Bit _1383;
bool _1384;
frost$core$Int _1386;
frost$core$Object*** _1390;
frost$core$Object** _1391;
frost$core$Int64 _1392;
int64_t _1393;
frost$core$Object* _1394;
frost$core$Object* _1396;
frost$core$Object* _1397;
frost$core$Object* _1401;
org$frostlang$frostc$MethodDecl* _1403;
frost$core$Object* _1404;
org$frostlang$frostc$ClassDecl* _1407;
frost$core$Object* _1408;
org$frostlang$frostc$IR$Value* _1411;
frost$core$Object* _1412;
frost$core$Int _1416;
int64_t _1419;
int64_t _1420;
bool _1421;
frost$core$Bit _1422;
bool _1424;
org$frostlang$frostc$MethodPosition* _1426;
org$frostlang$frostc$MethodPosition _1427;
org$frostlang$frostc$IR$Value** _1428;
org$frostlang$frostc$IR$Value* _1429;
frost$core$Object* _1431;
org$frostlang$frostc$IR$Value* _1433;
frost$core$Object* _1434;
org$frostlang$frostc$Interpreter$Context* _1438;
org$frostlang$frostc$IR$Value* _1439;
$fn353 _1440;
frost$core$Int64 _1441;
int64_t _1444;
int64_t _1445;
frost$core$Int _1446;
int64_t _1448;
frost$core$Int* _1449;
org$frostlang$frostc$IR$Value* _1452;
$fn354 _1453;
org$frostlang$frostc$Type* _1454;
$fn355 _1455;
frost$core$Bit _1456;
bool _1457;
frost$core$Object* _1458;
org$frostlang$frostc$Interpreter$Context* _1462;
frost$collections$Array** _1463;
frost$collections$Array* _1464;
org$frostlang$frostc$IR$Statement$ID _1465;
frost$core$Int _1466;
frost$core$Int* _1467;
int64_t _1468;
frost$core$Int _1469;
frost$core$Int64 _1470;
frost$core$Int64$nullable _1471;
frost$core$Object* _1472;
frost$core$Int _1474;
int64_t _1475;
int64_t _1476;
bool _1477;
frost$core$Bit _1478;
bool _1479;
frost$collections$CollectionView* _1481;
$fn356 _1482;
frost$core$Int _1483;
int64_t _1484;
int64_t _1485;
bool _1486;
frost$core$Bit _1487;
bool _1488;
frost$core$Int _1490;
frost$core$Object*** _1494;
frost$core$Object** _1495;
frost$core$Int64 _1496;
int64_t _1497;
frost$core$Object* _1498;
frost$core$Object* _1500;
frost$core$Object* _1501;
frost$core$Object* _1505;
org$frostlang$frostc$Interpreter$Context* _1510;
frost$collections$Array** _1511;
frost$collections$Array* _1512;
org$frostlang$frostc$IR$Statement$ID _1513;
frost$core$Int _1514;
frost$core$Int* _1515;
frost$core$Int _1516;
frost$core$Int64 _1517;
frost$core$Int64$nullable _1518;
frost$core$Object* _1519;
frost$core$Int _1521;
int64_t _1522;
int64_t _1523;
bool _1524;
frost$core$Bit _1525;
bool _1526;
frost$collections$CollectionView* _1528;
$fn357 _1529;
frost$core$Int _1530;
int64_t _1531;
int64_t _1532;
bool _1533;
frost$core$Bit _1534;
bool _1535;
frost$core$Int _1537;
frost$core$Object*** _1541;
frost$core$Object** _1542;
frost$core$Int64 _1543;
int64_t _1544;
frost$core$Object* _1545;
frost$core$Object* _1547;
frost$core$Object* _1548;
frost$core$Object* _1552;
org$frostlang$frostc$IR$Value* _1555;
frost$core$Object* _1556;
frost$core$Int _1560;
int64_t _1563;
int64_t _1564;
bool _1565;
frost$core$Bit _1566;
bool _1568;
org$frostlang$frostc$MethodPosition* _1570;
org$frostlang$frostc$MethodPosition _1571;
org$frostlang$frostc$IR$Value** _1572;
org$frostlang$frostc$IR$Value* _1573;
frost$core$Object* _1575;
org$frostlang$frostc$IR$Value* _1577;
frost$core$Object* _1578;
org$frostlang$frostc$Type** _1581;
org$frostlang$frostc$Type* _1582;
frost$core$Object* _1584;
org$frostlang$frostc$Type* _1586;
frost$core$Object* _1587;
org$frostlang$frostc$Interpreter$Context* _1591;
frost$collections$Array** _1592;
frost$collections$Array* _1593;
org$frostlang$frostc$IR$Statement$ID _1594;
frost$core$Int _1595;
org$frostlang$frostc$Interpreter$Context* _1596;
org$frostlang$frostc$IR$Value* _1597;
$fn358 _1598;
frost$core$Int64 _1599;
int64_t _1602;
int64_t _1603;
frost$core$Int _1604;
org$frostlang$frostc$MemoryLayout** _1606;
org$frostlang$frostc$MemoryLayout* _1607;
org$frostlang$frostc$Type* _1608;
$fn359 _1609;
frost$core$Int _1610;
int64_t _1611;
int64_t _1612;
int64_t _1613;
frost$core$Int _1614;
frost$core$Int64 _1615;
int64_t _1616;
frost$core$UInt8* _1617;
int64_t _1618;
frost$core$Int _1619;
frost$core$Int64 _1620;
frost$core$Int64$nullable _1621;
frost$core$Object* _1622;
frost$core$Int _1624;
int64_t _1625;
int64_t _1626;
bool _1627;
frost$core$Bit _1628;
bool _1629;
frost$collections$CollectionView* _1631;
$fn360 _1632;
frost$core$Int _1633;
int64_t _1634;
int64_t _1635;
bool _1636;
frost$core$Bit _1637;
bool _1638;
frost$core$Int _1640;
frost$core$Object*** _1644;
frost$core$Object** _1645;
frost$core$Int64 _1646;
int64_t _1647;
frost$core$Object* _1648;
frost$core$Object* _1650;
frost$core$Object* _1651;
frost$core$Object* _1655;
org$frostlang$frostc$Type* _1657;
frost$core$Object* _1658;
org$frostlang$frostc$IR$Value* _1661;
frost$core$Object* _1662;
frost$core$Int _1666;
int64_t _1669;
int64_t _1670;
bool _1671;
frost$core$Bit _1672;
bool _1674;
org$frostlang$frostc$MethodPosition* _1676;
org$frostlang$frostc$MethodPosition _1677;
org$frostlang$frostc$IR$Value** _1678;
org$frostlang$frostc$IR$Value* _1679;
frost$core$Object* _1681;
org$frostlang$frostc$IR$Value* _1683;
frost$core$Object* _1684;
org$frostlang$frostc$IR$Value** _1687;
org$frostlang$frostc$IR$Value* _1688;
frost$core$Object* _1690;
org$frostlang$frostc$IR$Value* _1692;
frost$core$Object* _1693;
org$frostlang$frostc$Type** _1696;
org$frostlang$frostc$Type* _1697;
org$frostlang$frostc$IR$Value* _1699;
$fn361 _1700;
org$frostlang$frostc$Type* _1701;
org$frostlang$frostc$FixedArray** _1704;
org$frostlang$frostc$FixedArray* _1705;
bool _1706;
frost$core$Bit _1707;
bool _1708;
frost$core$Int _1710;
org$frostlang$frostc$FixedArray* _1713;
frost$core$Object* _1714;
frost$core$Int _1717;
frost$core$Object* _1718;
org$frostlang$frostc$Type* _1719;
frost$core$Object* _1721;
org$frostlang$frostc$Type* _1723;
frost$core$Object* _1724;
frost$core$Object* _1727;
frost$core$Object* _1729;
frost$core$Object* _1731;
org$frostlang$frostc$Interpreter$Context* _1734;
org$frostlang$frostc$IR$Value* _1735;
$fn362 _1736;
frost$core$Int64 _1737;
org$frostlang$frostc$Interpreter$Context* _1738;
org$frostlang$frostc$IR$Value* _1739;
$fn363 _1740;
frost$core$Int64 _1741;
org$frostlang$frostc$MemoryLayout** _1742;
org$frostlang$frostc$MemoryLayout* _1743;
org$frostlang$frostc$Type* _1744;
$fn364 _1745;
frost$core$Int _1746;
frost$core$Int64 _1747;
int64_t _1748;
int64_t _1749;
int64_t _1750;
frost$core$Int64 _1751;
int64_t _1752;
int64_t _1753;
int64_t _1754;
frost$core$Int64 _1755;
int64_t _1758;
int64_t _1759;
frost$core$Int _1760;
int64_t _1762;
frost$core$UInt8* _1763;
frost$core$UInt8** _1766;
frost$core$UInt8* _1767;
frost$core$Int64* _1768;
frost$core$Int64 _1769;
frost$core$Int _1772;
org$frostlang$frostc$MemoryLayout** _1773;
org$frostlang$frostc$MemoryLayout* _1774;
org$frostlang$frostc$Type* _1775;
$fn365 _1776;
frost$core$Int _1777;
frost$core$Int _1778;
int64_t _1781;
int64_t _1782;
bool _1783;
frost$core$Bit _1784;
bool _1785;
int64_t _1788;
frost$core$Int _1789;
int64_t _1793;
frost$core$Int _1794;
frost$core$Int _1797;
frost$core$Bit _1798;
frost$core$Range$LTfrost$core$Int$GT _1799;
frost$core$Int _1800;
frost$core$Int _1802;
frost$core$Bit _1803;
bool _1804;
frost$core$Int _1805;
int64_t _1807;
int64_t _1808;
bool _1809;
frost$core$Bit _1810;
bool _1811;
int64_t _1813;
int64_t _1814;
bool _1815;
frost$core$Bit _1816;
bool _1817;
frost$core$UInt8** _1820;
frost$core$UInt8* _1821;
frost$core$Int _1822;
frost$core$Int64 _1823;
frost$core$UInt8* _1824;
frost$core$Int _1825;
frost$core$Int64 _1826;
int64_t _1827;
frost$core$UInt8 _1828;
int64_t _1829;
frost$core$Int _1832;
int64_t _1833;
int64_t _1834;
int64_t _1835;
frost$core$Int _1836;
int64_t _1838;
int64_t _1839;
bool _1840;
frost$core$Bit _1841;
bool _1842;
int64_t _1844;
int64_t _1845;
bool _1846;
frost$core$Bit _1847;
bool _1848;
int64_t _1850;
int64_t _1851;
int64_t _1852;
frost$core$Int _1853;
org$frostlang$frostc$Interpreter$Context* _1857;
frost$collections$Array** _1858;
frost$collections$Array* _1859;
org$frostlang$frostc$IR$Statement$ID _1860;
frost$core$Int _1861;
frost$core$UInt8** _1862;
frost$core$UInt8* _1863;
frost$core$Int64* _1864;
frost$core$Int64 _1865;
frost$core$Int64$nullable _1866;
frost$core$Object* _1867;
frost$core$Int _1869;
int64_t _1870;
int64_t _1871;
bool _1872;
frost$core$Bit _1873;
bool _1874;
frost$collections$CollectionView* _1876;
$fn366 _1877;
frost$core$Int _1878;
int64_t _1879;
int64_t _1880;
bool _1881;
frost$core$Bit _1882;
bool _1883;
frost$core$Int _1885;
frost$core$Object*** _1889;
frost$core$Object** _1890;
frost$core$Int64 _1891;
int64_t _1892;
frost$core$Object* _1893;
frost$core$Object* _1895;
frost$core$Object* _1896;
frost$core$Object* _1900;
org$frostlang$frostc$Type* _1902;
frost$core$Object* _1903;
org$frostlang$frostc$IR$Value* _1906;
frost$core$Object* _1907;
org$frostlang$frostc$IR$Value* _1910;
frost$core$Object* _1911;
frost$core$Int _1915;
int64_t _1918;
int64_t _1919;
bool _1920;
frost$core$Bit _1921;
bool _1923;
org$frostlang$frostc$MethodPosition* _1925;
org$frostlang$frostc$MethodPosition _1926;
org$frostlang$frostc$IR$Value** _1927;
org$frostlang$frostc$IR$Value* _1928;
frost$core$Object* _1930;
org$frostlang$frostc$IR$Value* _1932;
frost$core$Object* _1933;
org$frostlang$frostc$IR$Value** _1936;
org$frostlang$frostc$IR$Value* _1937;
frost$core$Object* _1939;
org$frostlang$frostc$IR$Value* _1941;
frost$core$Object* _1942;
org$frostlang$frostc$IR$Value** _1945;
org$frostlang$frostc$IR$Value* _1946;
frost$core$Object* _1948;
org$frostlang$frostc$IR$Value* _1950;
frost$core$Object* _1951;
org$frostlang$frostc$Type** _1954;
org$frostlang$frostc$Type* _1955;
frost$core$Object* _1957;
org$frostlang$frostc$Type* _1959;
frost$core$Object* _1960;
org$frostlang$frostc$Interpreter$Context* _1964;
org$frostlang$frostc$IR$Value* _1965;
$fn367 _1966;
frost$core$Int64 _1967;
org$frostlang$frostc$Interpreter$Context* _1968;
org$frostlang$frostc$IR$Value* _1969;
$fn368 _1970;
frost$core$Int64 _1971;
org$frostlang$frostc$MemoryLayout** _1972;
org$frostlang$frostc$MemoryLayout* _1973;
org$frostlang$frostc$IR$Value* _1974;
$fn369 _1975;
org$frostlang$frostc$Type* _1976;
$fn370 _1977;
frost$core$Int _1978;
frost$core$Int64 _1979;
int64_t _1980;
int64_t _1981;
int64_t _1982;
frost$core$Int64 _1983;
int64_t _1984;
int64_t _1985;
int64_t _1986;
frost$core$Int64 _1987;
int64_t _1990;
int64_t _1991;
frost$core$Int _1992;
int64_t _1994;
frost$core$UInt8* _1995;
frost$core$Object* _1997;
org$frostlang$frostc$Interpreter$Context* _2000;
org$frostlang$frostc$IR$Value* _2001;
$fn371 _2002;
frost$core$Int64 _2003;
frost$core$UInt8** _2006;
frost$core$UInt8* _2007;
frost$core$Int64* _2008;
frost$core$Int64 _2009;
frost$core$Int _2012;
org$frostlang$frostc$MemoryLayout** _2013;
org$frostlang$frostc$MemoryLayout* _2014;
org$frostlang$frostc$IR$Value* _2015;
$fn372 _2016;
org$frostlang$frostc$Type* _2017;
$fn373 _2018;
frost$core$Int _2019;
frost$core$Int _2020;
int64_t _2023;
int64_t _2024;
bool _2025;
frost$core$Bit _2026;
bool _2027;
int64_t _2030;
frost$core$Int _2031;
int64_t _2035;
frost$core$Int _2036;
frost$core$Int _2039;
frost$core$Bit _2040;
frost$core$Range$LTfrost$core$Int$GT _2041;
frost$core$Int _2042;
frost$core$Int _2044;
frost$core$Bit _2045;
bool _2046;
frost$core$Int _2047;
int64_t _2049;
int64_t _2050;
bool _2051;
frost$core$Bit _2052;
bool _2053;
int64_t _2055;
int64_t _2056;
bool _2057;
frost$core$Bit _2058;
bool _2059;
frost$core$UInt8* _2062;
frost$core$Int _2063;
frost$core$Int64 _2064;
frost$core$UInt8** _2065;
frost$core$UInt8* _2066;
frost$core$Int _2067;
frost$core$Int64 _2068;
int64_t _2069;
frost$core$UInt8 _2070;
int64_t _2071;
frost$core$Int _2074;
int64_t _2075;
int64_t _2076;
int64_t _2077;
frost$core$Int _2078;
int64_t _2080;
int64_t _2081;
bool _2082;
frost$core$Bit _2083;
bool _2084;
int64_t _2086;
int64_t _2087;
bool _2088;
frost$core$Bit _2089;
bool _2090;
int64_t _2092;
int64_t _2093;
int64_t _2094;
frost$core$Int _2095;
frost$core$Object* _2098;
org$frostlang$frostc$Type* _2100;
frost$core$Object* _2101;
org$frostlang$frostc$IR$Value* _2104;
frost$core$Object* _2105;
org$frostlang$frostc$IR$Value* _2108;
frost$core$Object* _2109;
org$frostlang$frostc$IR$Value* _2112;
frost$core$Object* _2113;
frost$core$Int _2117;
int64_t _2120;
int64_t _2121;
bool _2122;
frost$core$Bit _2123;
bool _2125;
org$frostlang$frostc$MethodPosition* _2127;
org$frostlang$frostc$MethodPosition _2128;
org$frostlang$frostc$IR$Value** _2129;
org$frostlang$frostc$IR$Value* _2130;
frost$core$Object* _2132;
org$frostlang$frostc$IR$Value* _2134;
frost$core$Object* _2135;
org$frostlang$frostc$Interpreter$Context* _2139;
org$frostlang$frostc$IR$Value* _2140;
$fn374 _2141;
frost$core$Int64 _2142;
int64_t _2145;
int64_t _2146;
frost$core$Int _2147;
int64_t _2149;
frost$core$Int* _2150;
org$frostlang$frostc$IR$Value* _2152;
frost$core$Object* _2153;
frost$core$Int _2157;
int64_t _2160;
int64_t _2161;
bool _2162;
frost$core$Bit _2163;
bool _2165;
org$frostlang$frostc$MethodPosition* _2167;
org$frostlang$frostc$MethodPosition _2168;
org$frostlang$frostc$IR$Value** _2169;
org$frostlang$frostc$IR$Value* _2170;
frost$core$Object* _2172;
org$frostlang$frostc$IR$Value* _2174;
frost$core$Object* _2175;
frost$collections$Stack** _2179;
frost$collections$Stack* _2180;
frost$core$Object* _2181;
org$frostlang$frostc$Interpreter$Context* _2182;
frost$core$Object* _2183;
org$frostlang$frostc$IR$Value* _2186;
bool _2187;
frost$core$Bit _2188;
bool _2189;
org$frostlang$frostc$Interpreter$Context* _2192;
org$frostlang$frostc$IR$Value* _2193;
bool _2194;
frost$core$Bit _2195;
bool _2196;
frost$core$Int _2198;
org$frostlang$frostc$IR$Value* _2201;
$fn375 _2202;
frost$core$Int64 _2203;
org$frostlang$frostc$IR$Value* _2204;
frost$core$Object* _2205;
org$frostlang$frostc$IR$Statement* _2208;
frost$core$Object* _2209;
org$frostlang$frostc$Interpreter$Context* _2212;
frost$core$Object* _2213;
org$frostlang$frostc$Interpreter$Code* _2216;
frost$core$Object* _2217;
frost$core$Int64 _2222;
org$frostlang$frostc$IR$Value* _2223;
frost$core$Object* _2224;
org$frostlang$frostc$IR$Statement* _2227;
frost$core$Object* _2228;
org$frostlang$frostc$Interpreter$Context* _2231;
frost$core$Object* _2232;
org$frostlang$frostc$Interpreter$Code* _2235;
frost$core$Object* _2236;
frost$core$Int _2240;
int64_t _2243;
int64_t _2244;
bool _2245;
frost$core$Bit _2246;
bool _2248;
org$frostlang$frostc$MethodPosition* _2250;
org$frostlang$frostc$MethodPosition _2251;
org$frostlang$frostc$MethodDecl** _2252;
org$frostlang$frostc$MethodDecl* _2253;
frost$core$Object* _2255;
org$frostlang$frostc$MethodDecl* _2257;
frost$core$Object* _2258;
org$frostlang$frostc$FixedArray** _2261;
org$frostlang$frostc$FixedArray* _2262;
frost$core$Object* _2264;
org$frostlang$frostc$FixedArray* _2266;
frost$core$Object* _2267;
org$frostlang$frostc$Interpreter$Context* _2271;
frost$collections$Array** _2272;
frost$collections$Array* _2273;
org$frostlang$frostc$IR$Statement$ID _2274;
frost$core$Int _2275;
org$frostlang$frostc$MethodDecl* _2276;
org$frostlang$frostc$FixedArray* _2277;
$fn376 _2278;
frost$core$Int64 _2279;
frost$core$Int64$nullable _2280;
frost$core$Object* _2281;
frost$core$Int _2283;
int64_t _2284;
int64_t _2285;
bool _2286;
frost$core$Bit _2287;
bool _2288;
frost$collections$CollectionView* _2290;
$fn377 _2291;
frost$core$Int _2292;
int64_t _2293;
int64_t _2294;
bool _2295;
frost$core$Bit _2296;
bool _2297;
frost$core$Int _2299;
frost$core$Object*** _2303;
frost$core$Object** _2304;
frost$core$Int64 _2305;
int64_t _2306;
frost$core$Object* _2307;
frost$core$Object* _2309;
frost$core$Object* _2310;
frost$core$Object* _2314;
org$frostlang$frostc$FixedArray* _2316;
frost$core$Object* _2317;
org$frostlang$frostc$MethodDecl* _2320;
frost$core$Object* _2321;
frost$core$Int _2325;
int64_t _2328;
int64_t _2329;
bool _2330;
frost$core$Bit _2331;
bool _2333;
org$frostlang$frostc$MethodPosition* _2335;
org$frostlang$frostc$MethodPosition _2336;
org$frostlang$frostc$IR$Value** _2337;
org$frostlang$frostc$IR$Value* _2338;
frost$core$Object* _2340;
org$frostlang$frostc$IR$Value* _2342;
frost$core$Object* _2343;
org$frostlang$frostc$IR$Value** _2346;
org$frostlang$frostc$IR$Value* _2347;
frost$core$Object* _2349;
org$frostlang$frostc$IR$Value* _2351;
frost$core$Object* _2352;
org$frostlang$frostc$Interpreter$Context* _2356;
org$frostlang$frostc$IR$Value* _2357;
$fn378 _2358;
frost$core$Int64 _2359;
org$frostlang$frostc$Interpreter$Context* _2362;
org$frostlang$frostc$IR$Value* _2363;
$fn379 _2364;
frost$core$Int64 _2365;
frost$core$Int64 _2368;
int64_t _2371;
int64_t _2372;
frost$core$Int _2373;
int64_t _2375;
frost$core$Int64* _2376;
frost$core$Int64 _2377;
org$frostlang$frostc$IR$Value* _2379;
frost$core$Object* _2380;
org$frostlang$frostc$IR$Value* _2383;
frost$core$Object* _2384;
frost$core$Int _2389;
org$frostlang$frostc$IR$Statement* _2390;
frost$core$Object* _2391;
$fn380 _2394;
frost$core$String* _2395;
frost$core$String* _2396;
frost$core$Object* _2397;
frost$core$Object* _2399;
frost$core$Object* _2401;
frost$core$String* _2404;
frost$core$Object* _2406;
frost$core$Object* _2408;
frost$core$Int _2412;
frost$core$Int _2413;
int64_t _2414;
int64_t _2415;
int64_t _2416;
frost$core$Int _2417;
org$frostlang$frostc$IR$Statement* _2419;
frost$core$Object* _2420;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:506
_1 = &param0->methodCode;
_2 = *_1;
_3 = ((frost$core$Object*) param1);
_4 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_2, _3);
_5 = ((org$frostlang$frostc$Interpreter$Code*) _4);
*(&local0) = ((org$frostlang$frostc$Interpreter$Code*) NULL);
_7 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local0);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local0) = _5;
_13 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:507
_16 = *(&local0);
_17 = _16 == NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:508
_22 = &param1->body;
_23 = *_22;
_24 = _23 != NULL;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:509
_29 = &param0->compiler;
_30 = *_29;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:509:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_35 = &_30->_valid;
_36 = *_35;
_38 = _36.value;
if (_38) goto block8; else goto block9;
block9:;
_40 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s381, _40, &$s382);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_44 = &_30->value;
_45 = *_44;
_46 = _45;
_47 = _46;
frost$core$Frost$ref$frost$core$Object$Q(_47);
_50 = ((org$frostlang$frostc$Compiler*) _46);
_51 = _50 != NULL;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block10; else goto block11;
block11:;
_55 = (frost$core$Int) {509u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s383, _55, &$s384);
abort(); // unreachable
block10:;
_58 = _50;
_59 = &param1->owner;
_60 = *_59;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:509:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_65 = &_60->_valid;
_66 = *_65;
_68 = _66.value;
if (_68) goto block14; else goto block15;
block15:;
_70 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s385, _70, &$s386);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_74 = &_60->value;
_75 = *_74;
_76 = _75;
_77 = _76;
frost$core$Frost$ref$frost$core$Object$Q(_77);
_80 = ((org$frostlang$frostc$ClassDecl*) _76);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl(_58, _80);
_82 = _76;
frost$core$Frost$unref$frost$core$Object$Q(_82);
_84 = _46;
frost$core$Frost$unref$frost$core$Object$Q(_84);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:510
_87 = &param0->methodCode;
_88 = *_87;
_89 = ((frost$core$Object*) param1);
_90 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_88, _89);
_91 = ((org$frostlang$frostc$Interpreter$Code*) _90);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$ref$frost$core$Object$Q(_92);
_94 = *(&local0);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_95);
*(&local0) = _91;
_98 = _90;
frost$core$Frost$unref$frost$core$Object$Q(_98);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:511
_101 = *(&local0);
_102 = _101 != NULL;
_103 = (frost$core$Bit) {_102};
_104 = _103.value;
if (_104) goto block16; else goto block17;
block17:;
_106 = (frost$core$Int) {511u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s387, _106);
abort(); // unreachable
block16:;
goto block2;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:514
_112 = &param0->contexts;
_113 = *_112;
_114 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Interpreter.frost:514:44
_116 = (frost$core$Int) {0u};
_117 = _114.value;
_118 = _116.value;
_119 = _117 >= _118;
_120 = (frost$core$Bit) {_119};
_121 = _120.value;
if (_121) goto block21; else goto block20;
block21:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_125 = &_113->contents;
_126 = *_125;
_127 = ((frost$collections$CollectionView*) _126);
ITable* $tmp388 = _127->$class->itable;
while ($tmp388->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp388 = $tmp388->next;
}
_128 = $tmp388->methods[0];
_129 = _128(_127);
_131 = _114.value;
_132 = _129.value;
_133 = _131 < _132;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block19; else goto block20;
block20:;
_137 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s389, _137, &$s390);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_141 = &_113->contents;
_142 = *_141;
_143 = ((frost$collections$CollectionView*) _142);
ITable* $tmp391 = _143->$class->itable;
while ($tmp391->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp391 = $tmp391->next;
}
_144 = $tmp391->methods[0];
_145 = _144(_143);
_146 = _145.value;
_147 = _114.value;
_148 = _146 > _147;
_149 = (frost$core$Bit) {_148};
_150 = _149.value;
if (_150) goto block23; else goto block24;
block24:;
_152 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s392, _152);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_156 = &_113->contents;
_157 = *_156;
_158 = &_113->contents;
_159 = *_158;
_160 = ((frost$collections$CollectionView*) _159);
ITable* $tmp393 = _160->$class->itable;
while ($tmp393->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp393 = $tmp393->next;
}
_161 = $tmp393->methods[0];
_162 = _161(_160);
_163 = (frost$core$Int) {1u};
_164 = _162.value;
_165 = _163.value;
_166 = _164 - _165;
_167 = (frost$core$Int) {_166};
_168 = _167.value;
_169 = _114.value;
_170 = _168 - _169;
_171 = (frost$core$Int) {_170};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_173 = (frost$core$Int) {0u};
_174 = _171.value;
_175 = _173.value;
_176 = _174 >= _175;
_177 = (frost$core$Bit) {_176};
_178 = _177.value;
if (_178) goto block28; else goto block27;
block28:;
_180 = ((frost$collections$CollectionView*) _157);
ITable* $tmp394 = _180->$class->itable;
while ($tmp394->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp394 = $tmp394->next;
}
_181 = $tmp394->methods[0];
_182 = _181(_180);
_183 = _171.value;
_184 = _182.value;
_185 = _183 < _184;
_186 = (frost$core$Bit) {_185};
_187 = _186.value;
if (_187) goto block26; else goto block27;
block27:;
_189 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s395, _189, &$s396);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_193 = &_157->data;
_194 = *_193;
_195 = frost$core$Int64$init$frost$core$Int(_171);
_196 = _195.value;
_197 = _194[_196];
_198 = _197;
frost$core$Frost$ref$frost$core$Object$Q(_198);
_201 = _197;
_202 = _201;
frost$core$Frost$ref$frost$core$Object$Q(_202);
_204 = _197;
frost$core$Frost$unref$frost$core$Object$Q(_204);
_207 = ((org$frostlang$frostc$Interpreter$Context*) _201);
_208 = ($fn397) param0->$class->vtable[15];
_209 = _208(param0, _207, param1, param2);
_210 = _201;
frost$core$Frost$unref$frost$core$Object$Q(_210);
_212 = *(&local0);
_213 = ((frost$core$Object*) _212);
frost$core$Frost$unref$frost$core$Object$Q(_213);
*(&local0) = ((org$frostlang$frostc$Interpreter$Code*) NULL);
return _209;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:517
_219 = (org$frostlang$frostc$Interpreter$Context*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$Context), (frost$core$Class*) &org$frostlang$frostc$Interpreter$Context$class);
_220 = *(&local0);
_221 = _220 != NULL;
_222 = (frost$core$Bit) {_221};
_223 = _222.value;
if (_223) goto block29; else goto block30;
block30:;
_225 = (frost$core$Int) {517u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s398, _225, &$s399);
abort(); // unreachable
block29:;
_228 = _220;
org$frostlang$frostc$Interpreter$Context$init$org$frostlang$frostc$Interpreter$org$frostlang$frostc$Interpreter$Code(_219, param0, _228);
*(&local1) = ((org$frostlang$frostc$Interpreter$Context*) NULL);
_231 = ((frost$core$Object*) _219);
frost$core$Frost$ref$frost$core$Object$Q(_231);
_233 = *(&local1);
_234 = ((frost$core$Object*) _233);
frost$core$Frost$unref$frost$core$Object$Q(_234);
*(&local1) = _219;
_237 = ((frost$core$Object*) _219);
frost$core$Frost$unref$frost$core$Object$Q(_237);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:518
_240 = ((frost$collections$Iterable*) param2);
ITable* $tmp400 = _240->$class->itable;
while ($tmp400->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp400 = $tmp400->next;
}
_241 = $tmp400->methods[0];
_242 = _241(_240);
goto block31;
block31:;
ITable* $tmp401 = _242->$class->itable;
while ($tmp401->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp401 = $tmp401->next;
}
_244 = $tmp401->methods[0];
_245 = _244(_242);
_246 = _245.value;
if (_246) goto block33; else goto block32;
block32:;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp402 = _242->$class->itable;
while ($tmp402->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp402 = $tmp402->next;
}
_249 = $tmp402->methods[1];
_250 = _249(_242);
_251 = ((org$frostlang$frostc$IR$Value*) _250);
_252 = ((frost$core$Object*) _251);
frost$core$Frost$ref$frost$core$Object$Q(_252);
_254 = *(&local2);
_255 = ((frost$core$Object*) _254);
frost$core$Frost$unref$frost$core$Object$Q(_255);
*(&local2) = _251;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:519
_259 = *(&local1);
_260 = &_259->arguments;
_261 = *_260;
_262 = &param0->contexts;
_263 = *_262;
_264 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Interpreter.frost:519:43
_266 = (frost$core$Int) {0u};
_267 = _264.value;
_268 = _266.value;
_269 = _267 >= _268;
_270 = (frost$core$Bit) {_269};
_271 = _270.value;
if (_271) goto block37; else goto block36;
block37:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_275 = &_263->contents;
_276 = *_275;
_277 = ((frost$collections$CollectionView*) _276);
ITable* $tmp403 = _277->$class->itable;
while ($tmp403->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp403 = $tmp403->next;
}
_278 = $tmp403->methods[0];
_279 = _278(_277);
_281 = _264.value;
_282 = _279.value;
_283 = _281 < _282;
_284 = (frost$core$Bit) {_283};
_285 = _284.value;
if (_285) goto block35; else goto block36;
block36:;
_287 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s404, _287, &$s405);
abort(); // unreachable
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_291 = &_263->contents;
_292 = *_291;
_293 = ((frost$collections$CollectionView*) _292);
ITable* $tmp406 = _293->$class->itable;
while ($tmp406->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp406 = $tmp406->next;
}
_294 = $tmp406->methods[0];
_295 = _294(_293);
_296 = _295.value;
_297 = _264.value;
_298 = _296 > _297;
_299 = (frost$core$Bit) {_298};
_300 = _299.value;
if (_300) goto block39; else goto block40;
block40:;
_302 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s407, _302);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_306 = &_263->contents;
_307 = *_306;
_308 = &_263->contents;
_309 = *_308;
_310 = ((frost$collections$CollectionView*) _309);
ITable* $tmp408 = _310->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp408 = $tmp408->next;
}
_311 = $tmp408->methods[0];
_312 = _311(_310);
_313 = (frost$core$Int) {1u};
_314 = _312.value;
_315 = _313.value;
_316 = _314 - _315;
_317 = (frost$core$Int) {_316};
_318 = _317.value;
_319 = _264.value;
_320 = _318 - _319;
_321 = (frost$core$Int) {_320};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_323 = (frost$core$Int) {0u};
_324 = _321.value;
_325 = _323.value;
_326 = _324 >= _325;
_327 = (frost$core$Bit) {_326};
_328 = _327.value;
if (_328) goto block44; else goto block43;
block44:;
_330 = ((frost$collections$CollectionView*) _307);
ITable* $tmp409 = _330->$class->itable;
while ($tmp409->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp409 = $tmp409->next;
}
_331 = $tmp409->methods[0];
_332 = _331(_330);
_333 = _321.value;
_334 = _332.value;
_335 = _333 < _334;
_336 = (frost$core$Bit) {_335};
_337 = _336.value;
if (_337) goto block42; else goto block43;
block43:;
_339 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s410, _339, &$s411);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_343 = &_307->data;
_344 = *_343;
_345 = frost$core$Int64$init$frost$core$Int(_321);
_346 = _345.value;
_347 = _344[_346];
_348 = _347;
frost$core$Frost$ref$frost$core$Object$Q(_348);
_351 = _347;
_352 = _351;
frost$core$Frost$ref$frost$core$Object$Q(_352);
_354 = _347;
frost$core$Frost$unref$frost$core$Object$Q(_354);
_357 = ((org$frostlang$frostc$Interpreter$Context*) _351);
_358 = *(&local2);
_359 = ($fn412) _357->$class->vtable[2];
_360 = _359(_357, _358);
frost$core$Int64$wrapper* $tmp413;
$tmp413 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp413->value = _360;
_361 = ((frost$core$Object*) $tmp413);
frost$collections$Array$add$frost$collections$Array$T(_261, _361);
_363 = _361;
frost$core$Frost$unref$frost$core$Object$Q(_363);
_365 = _351;
frost$core$Frost$unref$frost$core$Object$Q(_365);
_367 = _250;
frost$core$Frost$unref$frost$core$Object$Q(_367);
_369 = *(&local2);
_370 = ((frost$core$Object*) _369);
frost$core$Frost$unref$frost$core$Object$Q(_370);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block31;
block33:;
_374 = ((frost$core$Object*) _242);
frost$core$Frost$unref$frost$core$Object$Q(_374);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:521
_377 = &param0->contexts;
_378 = *_377;
_379 = *(&local1);
_380 = ((frost$core$Object*) _379);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Interpreter.frost:521:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_383 = &_378->contents;
_384 = *_383;
_385 = _380;
frost$collections$Array$add$frost$collections$Array$T(_384, _385);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:522
_389 = (frost$core$Int) {0u};
*(&local3) = _389;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:523
_392 = (frost$core$Int) {0u};
*(&local4) = _392;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:524
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:525
_397 = *(&local0);
_398 = _397 != NULL;
_399 = (frost$core$Bit) {_398};
_400 = _399.value;
if (_400) goto block48; else goto block49;
block49:;
_402 = (frost$core$Int) {525u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s414, _402, &$s415);
abort(); // unreachable
block48:;
_405 = _397;
_406 = &_405->ids;
_407 = *_406;
_408 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:525:31
_410 = (frost$core$Int) {0u};
_411 = _408.value;
_412 = _410.value;
_413 = _411 >= _412;
_414 = (frost$core$Bit) {_413};
_415 = _414.value;
if (_415) goto block53; else goto block52;
block53:;
_417 = ((frost$collections$CollectionView*) _407);
ITable* $tmp416 = _417->$class->itable;
while ($tmp416->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp416 = $tmp416->next;
}
_418 = $tmp416->methods[0];
_419 = _418(_417);
_420 = _408.value;
_421 = _419.value;
_422 = _420 < _421;
_423 = (frost$core$Bit) {_422};
_424 = _423.value;
if (_424) goto block51; else goto block52;
block52:;
_426 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s417, _426, &$s418);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_430 = &_407->data;
_431 = *_430;
_432 = frost$core$Int64$init$frost$core$Int(_408);
_433 = _432.value;
_434 = _431[_433];
_435 = _434;
frost$core$Frost$ref$frost$core$Object$Q(_435);
_438 = ((frost$collections$Array*) _434);
_439 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:525:38
_441 = (frost$core$Int) {0u};
_442 = _439.value;
_443 = _441.value;
_444 = _442 >= _443;
_445 = (frost$core$Bit) {_444};
_446 = _445.value;
if (_446) goto block57; else goto block56;
block57:;
_448 = ((frost$collections$CollectionView*) _438);
ITable* $tmp419 = _448->$class->itable;
while ($tmp419->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp419 = $tmp419->next;
}
_449 = $tmp419->methods[0];
_450 = _449(_448);
_451 = _439.value;
_452 = _450.value;
_453 = _451 < _452;
_454 = (frost$core$Bit) {_453};
_455 = _454.value;
if (_455) goto block55; else goto block56;
block56:;
_457 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s420, _457, &$s421);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_461 = &_438->data;
_462 = *_461;
_463 = frost$core$Int64$init$frost$core$Int(_439);
_464 = _463.value;
_465 = _462[_464];
_466 = _465;
frost$core$Frost$ref$frost$core$Object$Q(_466);
_469 = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) _465)->value;
*(&local5) = _469;
_471 = _465;
frost$core$Frost$unref$frost$core$Object$Q(_471);
_473 = _434;
frost$core$Frost$unref$frost$core$Object$Q(_473);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:526
_476 = *(&local0);
_477 = _476 != NULL;
_478 = (frost$core$Bit) {_477};
_479 = _478.value;
if (_479) goto block58; else goto block59;
block59:;
_481 = (frost$core$Int) {526u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s422, _481, &$s423);
abort(); // unreachable
block58:;
_484 = _476;
_485 = &_484->ir;
_486 = *_485;
_487 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:526:32
_489 = (frost$core$Int) {0u};
_490 = _487.value;
_491 = _489.value;
_492 = _490 >= _491;
_493 = (frost$core$Bit) {_492};
_494 = _493.value;
if (_494) goto block63; else goto block62;
block63:;
_496 = ((frost$collections$CollectionView*) _486);
ITable* $tmp424 = _496->$class->itable;
while ($tmp424->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp424 = $tmp424->next;
}
_497 = $tmp424->methods[0];
_498 = _497(_496);
_499 = _487.value;
_500 = _498.value;
_501 = _499 < _500;
_502 = (frost$core$Bit) {_501};
_503 = _502.value;
if (_503) goto block61; else goto block62;
block62:;
_505 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s425, _505, &$s426);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_509 = &_486->data;
_510 = *_509;
_511 = frost$core$Int64$init$frost$core$Int(_487);
_512 = _511.value;
_513 = _510[_512];
_514 = _513;
frost$core$Frost$ref$frost$core$Object$Q(_514);
_517 = ((frost$collections$Array*) _513);
_518 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:526:39
_520 = (frost$core$Int) {0u};
_521 = _518.value;
_522 = _520.value;
_523 = _521 >= _522;
_524 = (frost$core$Bit) {_523};
_525 = _524.value;
if (_525) goto block67; else goto block66;
block67:;
_527 = ((frost$collections$CollectionView*) _517);
ITable* $tmp427 = _527->$class->itable;
while ($tmp427->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp427 = $tmp427->next;
}
_528 = $tmp427->methods[0];
_529 = _528(_527);
_530 = _518.value;
_531 = _529.value;
_532 = _530 < _531;
_533 = (frost$core$Bit) {_532};
_534 = _533.value;
if (_534) goto block65; else goto block66;
block66:;
_536 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s428, _536, &$s429);
abort(); // unreachable
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_540 = &_517->data;
_541 = *_540;
_542 = frost$core$Int64$init$frost$core$Int(_518);
_543 = _542.value;
_544 = _541[_543];
_545 = _544;
frost$core$Frost$ref$frost$core$Object$Q(_545);
_548 = ((org$frostlang$frostc$IR$Statement*) _544);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
_550 = ((frost$core$Object*) _548);
frost$core$Frost$ref$frost$core$Object$Q(_550);
_552 = *(&local6);
_553 = ((frost$core$Object*) _552);
frost$core$Frost$unref$frost$core$Object$Q(_553);
*(&local6) = _548;
_556 = _544;
frost$core$Frost$unref$frost$core$Object$Q(_556);
_558 = _513;
frost$core$Frost$unref$frost$core$Object$Q(_558);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:527
_561 = *(&local6);
_562 = &_561->$rawValue;
_563 = *_562;
_564 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:528:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_567 = _563.value;
_568 = _564.value;
_569 = _567 == _568;
_570 = (frost$core$Bit) {_569};
_572 = _570.value;
if (_572) goto block69; else goto block70;
block69:;
_574 = &_561->$data.$BINARY.field0;
_575 = *_574;
_576 = &_561->$data.$BINARY.field1;
_577 = *_576;
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
_579 = ((frost$core$Object*) _577);
frost$core$Frost$ref$frost$core$Object$Q(_579);
_581 = *(&local7);
_582 = ((frost$core$Object*) _581);
frost$core$Frost$unref$frost$core$Object$Q(_582);
*(&local7) = _577;
_585 = &_561->$data.$BINARY.field2;
_586 = *_585;
*(&local8) = _586;
_588 = &_561->$data.$BINARY.field3;
_589 = *_588;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_591 = ((frost$core$Object*) _589);
frost$core$Frost$ref$frost$core$Object$Q(_591);
_593 = *(&local9);
_594 = ((frost$core$Object*) _593);
frost$core$Frost$unref$frost$core$Object$Q(_594);
*(&local9) = _589;
_597 = &_561->$data.$BINARY.field4;
_598 = *_597;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:529
_600 = *(&local1);
_601 = *(&local5);
_602 = *(&local7);
_603 = *(&local8);
_604 = *(&local9);
_605 = ($fn430) param0->$class->vtable[22];
_605(param0, _600, _601, _602, _603, _604);
_607 = *(&local9);
_608 = ((frost$core$Object*) _607);
frost$core$Frost$unref$frost$core$Object$Q(_608);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_611 = *(&local7);
_612 = ((frost$core$Object*) _611);
frost$core$Frost$unref$frost$core$Object$Q(_612);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block70:;
_616 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:531:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_619 = _563.value;
_620 = _616.value;
_621 = _619 == _620;
_622 = (frost$core$Bit) {_621};
_624 = _622.value;
if (_624) goto block72; else goto block73;
block72:;
_626 = &_561->$data.$BRANCH.field0;
_627 = *_626;
_628 = &_561->$data.$BRANCH.field1;
_629 = *_628;
*(&local10) = _629;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:532
_632 = *(&local0);
_633 = _632 != NULL;
_634 = (frost$core$Bit) {_633};
_635 = _634.value;
if (_635) goto block75; else goto block76;
block76:;
_637 = (frost$core$Int) {532u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s431, _637, &$s432);
abort(); // unreachable
block75:;
_640 = _632;
_641 = &_640->blocks;
_642 = *_641;
_643 = *(&local10);
_644 = _643.value;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:532:41
_646 = (frost$core$Int) {0u};
_647 = _644.value;
_648 = _646.value;
_649 = _647 >= _648;
_650 = (frost$core$Bit) {_649};
_651 = _650.value;
if (_651) goto block80; else goto block79;
block80:;
_653 = ((frost$collections$CollectionView*) _642);
ITable* $tmp433 = _653->$class->itable;
while ($tmp433->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp433 = $tmp433->next;
}
_654 = $tmp433->methods[0];
_655 = _654(_653);
_656 = _644.value;
_657 = _655.value;
_658 = _656 < _657;
_659 = (frost$core$Bit) {_658};
_660 = _659.value;
if (_660) goto block78; else goto block79;
block79:;
_662 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s434, _662, &$s435);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_666 = &_642->data;
_667 = *_666;
_668 = frost$core$Int64$init$frost$core$Int(_644);
_669 = _668.value;
_670 = _667[_669];
_671 = _670;
frost$core$Frost$ref$frost$core$Object$Q(_671);
_674 = ((frost$core$Int$wrapper*) _670)->value;
*(&local3) = _674;
_676 = _670;
frost$core$Frost$unref$frost$core$Object$Q(_676);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:533
_679 = (frost$core$Int) {0u};
*(&local4) = _679;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:534
_682 = *(&local6);
_683 = ((frost$core$Object*) _682);
frost$core$Frost$unref$frost$core$Object$Q(_683);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block46;
block73:;
_687 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:536:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_690 = _563.value;
_691 = _687.value;
_692 = _690 == _691;
_693 = (frost$core$Bit) {_692};
_695 = _693.value;
if (_695) goto block81; else goto block82;
block81:;
_697 = &_561->$data.$CAST.field0;
_698 = *_697;
_699 = &_561->$data.$CAST.field1;
_700 = *_699;
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_702 = ((frost$core$Object*) _700);
frost$core$Frost$ref$frost$core$Object$Q(_702);
_704 = *(&local11);
_705 = ((frost$core$Object*) _704);
frost$core$Frost$unref$frost$core$Object$Q(_705);
*(&local11) = _700;
_708 = &_561->$data.$CAST.field2;
_709 = *_708;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
_711 = ((frost$core$Object*) _709);
frost$core$Frost$ref$frost$core$Object$Q(_711);
_713 = *(&local12);
_714 = ((frost$core$Object*) _713);
frost$core$Frost$unref$frost$core$Object$Q(_714);
*(&local12) = _709;
_717 = &_561->$data.$CAST.field3;
_718 = *_717;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:537
_720 = *(&local1);
_721 = *(&local5);
_722 = *(&local11);
_723 = *(&local12);
_724 = ($fn436) param0->$class->vtable[16];
_724(param0, _720, _721, _722, _723);
_726 = *(&local12);
_727 = ((frost$core$Object*) _726);
frost$core$Frost$unref$frost$core$Object$Q(_727);
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
_730 = *(&local11);
_731 = ((frost$core$Object*) _730);
frost$core$Frost$unref$frost$core$Object$Q(_731);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block82:;
_735 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:539:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_738 = _563.value;
_739 = _735.value;
_740 = _738 == _739;
_741 = (frost$core$Bit) {_740};
_743 = _741.value;
if (_743) goto block84; else goto block85;
block84:;
goto block68;
block85:;
_746 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:541:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_749 = _563.value;
_750 = _746.value;
_751 = _749 == _750;
_752 = (frost$core$Bit) {_751};
_754 = _752.value;
if (_754) goto block87; else goto block88;
block87:;
_756 = &_561->$data.$CONDITIONAL_BRANCH.field0;
_757 = *_756;
_758 = &_561->$data.$CONDITIONAL_BRANCH.field1;
_759 = *_758;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
_761 = ((frost$core$Object*) _759);
frost$core$Frost$ref$frost$core$Object$Q(_761);
_763 = *(&local13);
_764 = ((frost$core$Object*) _763);
frost$core$Frost$unref$frost$core$Object$Q(_764);
*(&local13) = _759;
_767 = &_561->$data.$CONDITIONAL_BRANCH.field2;
_768 = *_767;
*(&local14) = _768;
_770 = &_561->$data.$CONDITIONAL_BRANCH.field3;
_771 = *_770;
*(&local15) = _771;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:542
_774 = *(&local1);
_775 = *(&local13);
_776 = ($fn437) _774->$class->vtable[2];
_777 = _776(_774, _775);
_778 = (frost$core$Int64) {0u};
_779 = _777.value;
_780 = _778.value;
_781 = _779 != _780;
_782 = (frost$core$Bit) {_781};
_783 = _782.value;
if (_783) goto block90; else goto block92;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:543
_786 = *(&local0);
_787 = _786 != NULL;
_788 = (frost$core$Bit) {_787};
_789 = _788.value;
if (_789) goto block93; else goto block94;
block94:;
_791 = (frost$core$Int) {543u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s438, _791, &$s439);
abort(); // unreachable
block93:;
_794 = _786;
_795 = &_794->blocks;
_796 = *_795;
_797 = *(&local14);
_798 = _797.value;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:543:45
_800 = (frost$core$Int) {0u};
_801 = _798.value;
_802 = _800.value;
_803 = _801 >= _802;
_804 = (frost$core$Bit) {_803};
_805 = _804.value;
if (_805) goto block98; else goto block97;
block98:;
_807 = ((frost$collections$CollectionView*) _796);
ITable* $tmp440 = _807->$class->itable;
while ($tmp440->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp440 = $tmp440->next;
}
_808 = $tmp440->methods[0];
_809 = _808(_807);
_810 = _798.value;
_811 = _809.value;
_812 = _810 < _811;
_813 = (frost$core$Bit) {_812};
_814 = _813.value;
if (_814) goto block96; else goto block97;
block97:;
_816 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s441, _816, &$s442);
abort(); // unreachable
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_820 = &_796->data;
_821 = *_820;
_822 = frost$core$Int64$init$frost$core$Int(_798);
_823 = _822.value;
_824 = _821[_823];
_825 = _824;
frost$core$Frost$ref$frost$core$Object$Q(_825);
_828 = ((frost$core$Int$wrapper*) _824)->value;
*(&local3) = _828;
_830 = _824;
frost$core$Frost$unref$frost$core$Object$Q(_830);
goto block91;
block92:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:546
_835 = *(&local0);
_836 = _835 != NULL;
_837 = (frost$core$Bit) {_836};
_838 = _837.value;
if (_838) goto block99; else goto block100;
block100:;
_840 = (frost$core$Int) {546u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s443, _840, &$s444);
abort(); // unreachable
block99:;
_843 = _835;
_844 = &_843->blocks;
_845 = *_844;
_846 = *(&local15);
_847 = _846.value;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:546:45
_849 = (frost$core$Int) {0u};
_850 = _847.value;
_851 = _849.value;
_852 = _850 >= _851;
_853 = (frost$core$Bit) {_852};
_854 = _853.value;
if (_854) goto block104; else goto block103;
block104:;
_856 = ((frost$collections$CollectionView*) _845);
ITable* $tmp445 = _856->$class->itable;
while ($tmp445->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp445 = $tmp445->next;
}
_857 = $tmp445->methods[0];
_858 = _857(_856);
_859 = _847.value;
_860 = _858.value;
_861 = _859 < _860;
_862 = (frost$core$Bit) {_861};
_863 = _862.value;
if (_863) goto block102; else goto block103;
block103:;
_865 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s446, _865, &$s447);
abort(); // unreachable
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_869 = &_845->data;
_870 = *_869;
_871 = frost$core$Int64$init$frost$core$Int(_847);
_872 = _871.value;
_873 = _870[_872];
_874 = _873;
frost$core$Frost$ref$frost$core$Object$Q(_874);
_877 = ((frost$core$Int$wrapper*) _873)->value;
*(&local3) = _877;
_879 = _873;
frost$core$Frost$unref$frost$core$Object$Q(_879);
goto block91;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:548
_883 = (frost$core$Int) {0u};
*(&local4) = _883;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:549
_886 = *(&local13);
_887 = ((frost$core$Object*) _886);
frost$core$Frost$unref$frost$core$Object$Q(_887);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
_890 = *(&local6);
_891 = ((frost$core$Object*) _890);
frost$core$Frost$unref$frost$core$Object$Q(_891);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block46;
block88:;
_895 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:551:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_898 = _563.value;
_899 = _895.value;
_900 = _898 == _899;
_901 = (frost$core$Bit) {_900};
_903 = _901.value;
if (_903) goto block105; else goto block106;
block105:;
_905 = &_561->$data.$CONSTRUCT.field0;
_906 = *_905;
_907 = &_561->$data.$CONSTRUCT.field1;
_908 = *_907;
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
_910 = ((frost$core$Object*) _908);
frost$core$Frost$ref$frost$core$Object$Q(_910);
_912 = *(&local16);
_913 = ((frost$core$Object*) _912);
frost$core$Frost$unref$frost$core$Object$Q(_913);
*(&local16) = _908;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:552
_917 = &param0->memoryLayout;
_918 = *_917;
_919 = *(&local16);
_920 = &_919->type;
_921 = *_920;
_922 = ($fn448) _918->$class->vtable[7];
_923 = _922(_918, _921);
_924 = frost$core$Int64$init$frost$core$Int(_923);
_925 = _924.value;
_926 = ((frost$core$UInt8*) frostAlloc(_925 * sizeof(frost$core$UInt8)));
*(&local17) = _926;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:553
_929 = *(&local17);
_930 = ((org$frostlang$frostc$ClassDecl**) _929);
_931 = *(&local16);
_932 = ((frost$core$Object*) _931);
frost$core$Frost$ref$frost$core$Object$Q(_932);
_934 = *_930;
_935 = ((frost$core$Object*) _934);
frost$core$Frost$unref$frost$core$Object$Q(_935);
*_930 = _931;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:554
_939 = *(&local17);
_940 = &param0->memoryLayout;
_941 = *_940;
_942 = ($fn449) _941->$class->vtable[3];
_943 = _942(_941);
_944 = frost$core$Int64$init$frost$core$Int(_943);
_945 = _944.value;
_946 = _939 + _945;
_947 = ((frost$core$Int32*) _946);
_948 = (frost$core$Int32) {1u};
*_947 = _948;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:555
_951 = *(&local1);
_952 = &_951->statements;
_953 = *_952;
_954 = *(&local5);
_955 = _954.value;
_956 = *(&local17);
_957 = ((int64_t) _956);
_958 = (frost$core$Int) {_957};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:555:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_961 = _958.value;
_962 = ((int64_t) _961);
_963 = (frost$core$Int64) {_962};
_965 = ((frost$core$Int64$nullable) { _963, true });
frost$core$Object* $tmp450;
if (_965.nonnull) {
    frost$core$Int64$wrapper* $tmp451;
    $tmp451 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp451->value = ((frost$core$Int64) _965.value);
    $tmp450 = ((frost$core$Object*) $tmp451);
}
else {
    $tmp450 = NULL;
}
_966 = $tmp450;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:555:39
_968 = (frost$core$Int) {0u};
_969 = _955.value;
_970 = _968.value;
_971 = _969 >= _970;
_972 = (frost$core$Bit) {_971};
_973 = _972.value;
if (_973) goto block112; else goto block111;
block112:;
_975 = ((frost$collections$CollectionView*) _953);
ITable* $tmp452 = _975->$class->itable;
while ($tmp452->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp452 = $tmp452->next;
}
_976 = $tmp452->methods[0];
_977 = _976(_975);
_978 = _955.value;
_979 = _977.value;
_980 = _978 < _979;
_981 = (frost$core$Bit) {_980};
_982 = _981.value;
if (_982) goto block110; else goto block111;
block111:;
_984 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s453, _984, &$s454);
abort(); // unreachable
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_988 = &_953->data;
_989 = *_988;
_990 = frost$core$Int64$init$frost$core$Int(_955);
_991 = _990.value;
_992 = _966;
frost$core$Frost$ref$frost$core$Object$Q(_992);
_994 = _989[_991];
_995 = _994;
frost$core$Frost$unref$frost$core$Object$Q(_995);
_989[_991] = _966;
_999 = _966;
frost$core$Frost$unref$frost$core$Object$Q(_999);
_1001 = *(&local16);
_1002 = ((frost$core$Object*) _1001);
frost$core$Frost$unref$frost$core$Object$Q(_1002);
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block68;
block106:;
_1006 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:557:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1009 = _563.value;
_1010 = _1006.value;
_1011 = _1009 == _1010;
_1012 = (frost$core$Bit) {_1011};
_1014 = _1012.value;
if (_1014) goto block113; else goto block114;
block113:;
_1016 = &_561->$data.$CREATE_STRUCT.field0;
_1017 = *_1016;
_1018 = &_561->$data.$CREATE_STRUCT.field1;
_1019 = *_1018;
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1021 = ((frost$core$Object*) _1019);
frost$core$Frost$ref$frost$core$Object$Q(_1021);
_1023 = *(&local18);
_1024 = ((frost$core$Object*) _1023);
frost$core$Frost$unref$frost$core$Object$Q(_1024);
*(&local18) = _1019;
_1027 = &_561->$data.$CREATE_STRUCT.field2;
_1028 = *_1027;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
_1030 = ((frost$core$Object*) _1028);
frost$core$Frost$ref$frost$core$Object$Q(_1030);
_1032 = *(&local19);
_1033 = ((frost$core$Object*) _1032);
frost$core$Frost$unref$frost$core$Object$Q(_1033);
*(&local19) = _1028;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:558
_1037 = *(&local1);
_1038 = *(&local5);
_1039 = *(&local18);
_1040 = *(&local19);
_1041 = ($fn455) param0->$class->vtable[17];
_1041(param0, _1037, _1038, _1039, _1040);
_1043 = *(&local19);
_1044 = ((frost$core$Object*) _1043);
frost$core$Frost$unref$frost$core$Object$Q(_1044);
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
_1047 = *(&local18);
_1048 = ((frost$core$Object*) _1047);
frost$core$Frost$unref$frost$core$Object$Q(_1048);
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block68;
block114:;
_1052 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:560:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1055 = _563.value;
_1056 = _1052.value;
_1057 = _1055 == _1056;
_1058 = (frost$core$Bit) {_1057};
_1060 = _1058.value;
if (_1060) goto block116; else goto block117;
block116:;
_1062 = &_561->$data.$DYNAMIC_CALL.field0;
_1063 = *_1062;
_1064 = &_561->$data.$DYNAMIC_CALL.field1;
_1065 = *_1064;
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
_1067 = ((frost$core$Object*) _1065);
frost$core$Frost$ref$frost$core$Object$Q(_1067);
_1069 = *(&local20);
_1070 = ((frost$core$Object*) _1069);
frost$core$Frost$unref$frost$core$Object$Q(_1070);
*(&local20) = _1065;
_1073 = &_561->$data.$DYNAMIC_CALL.field2;
_1074 = *_1073;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
_1076 = ((frost$core$Object*) _1074);
frost$core$Frost$ref$frost$core$Object$Q(_1076);
_1078 = *(&local21);
_1079 = ((frost$core$Object*) _1078);
frost$core$Frost$unref$frost$core$Object$Q(_1079);
*(&local21) = _1074;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:561
_1083 = *(&local1);
_1084 = *(&local20);
_1085 = ($fn456) _1083->$class->vtable[2];
_1086 = _1085(_1083, _1084);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:561:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1089 = _1086.value;
_1090 = ((int64_t) _1089);
_1091 = (frost$core$Int) {_1090};
_1093 = _1091.value;
_1094 = ((frost$core$UInt8*) _1093);
_1095 = ((org$frostlang$frostc$MethodDecl*) _1094);
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1097 = ((frost$core$Object*) _1095);
frost$core$Frost$ref$frost$core$Object$Q(_1097);
_1099 = *(&local22);
_1100 = ((frost$core$Object*) _1099);
frost$core$Frost$unref$frost$core$Object$Q(_1100);
*(&local22) = _1095;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:562
_1104 = *(&local1);
_1105 = &_1104->statements;
_1106 = *_1105;
_1107 = *(&local5);
_1108 = _1107.value;
_1109 = *(&local22);
_1110 = *(&local21);
_1111 = ($fn457) param0->$class->vtable[23];
_1112 = _1111(param0, _1109, _1110);
_1113 = ((frost$core$Int64$nullable) { _1112, true });
frost$core$Object* $tmp458;
if (_1113.nonnull) {
    frost$core$Int64$wrapper* $tmp459;
    $tmp459 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp459->value = ((frost$core$Int64) _1113.value);
    $tmp458 = ((frost$core$Object*) $tmp459);
}
else {
    $tmp458 = NULL;
}
_1114 = $tmp458;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:562:39
_1116 = (frost$core$Int) {0u};
_1117 = _1108.value;
_1118 = _1116.value;
_1119 = _1117 >= _1118;
_1120 = (frost$core$Bit) {_1119};
_1121 = _1120.value;
if (_1121) goto block123; else goto block122;
block123:;
_1123 = ((frost$collections$CollectionView*) _1106);
ITable* $tmp460 = _1123->$class->itable;
while ($tmp460->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp460 = $tmp460->next;
}
_1124 = $tmp460->methods[0];
_1125 = _1124(_1123);
_1126 = _1108.value;
_1127 = _1125.value;
_1128 = _1126 < _1127;
_1129 = (frost$core$Bit) {_1128};
_1130 = _1129.value;
if (_1130) goto block121; else goto block122;
block122:;
_1132 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s461, _1132, &$s462);
abort(); // unreachable
block121:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1136 = &_1106->data;
_1137 = *_1136;
_1138 = frost$core$Int64$init$frost$core$Int(_1108);
_1139 = _1138.value;
_1140 = _1114;
frost$core$Frost$ref$frost$core$Object$Q(_1140);
_1142 = _1137[_1139];
_1143 = _1142;
frost$core$Frost$unref$frost$core$Object$Q(_1143);
_1137[_1139] = _1114;
_1147 = _1114;
frost$core$Frost$unref$frost$core$Object$Q(_1147);
_1149 = *(&local22);
_1150 = ((frost$core$Object*) _1149);
frost$core$Frost$unref$frost$core$Object$Q(_1150);
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1153 = *(&local21);
_1154 = ((frost$core$Object*) _1153);
frost$core$Frost$unref$frost$core$Object$Q(_1154);
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
_1157 = *(&local20);
_1158 = ((frost$core$Object*) _1157);
frost$core$Frost$unref$frost$core$Object$Q(_1158);
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block117:;
_1162 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:564:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1165 = _563.value;
_1166 = _1162.value;
_1167 = _1165 == _1166;
_1168 = (frost$core$Bit) {_1167};
_1170 = _1168.value;
if (_1170) goto block124; else goto block125;
block124:;
_1172 = &_561->$data.$EXTRACT_FIELD.field0;
_1173 = *_1172;
_1174 = &_561->$data.$EXTRACT_FIELD.field1;
_1175 = *_1174;
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
_1177 = ((frost$core$Object*) _1175);
frost$core$Frost$ref$frost$core$Object$Q(_1177);
_1179 = *(&local23);
_1180 = ((frost$core$Object*) _1179);
frost$core$Frost$unref$frost$core$Object$Q(_1180);
*(&local23) = _1175;
_1183 = &_561->$data.$EXTRACT_FIELD.field2;
_1184 = *_1183;
*(&local24) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1186 = ((frost$core$Object*) _1184);
frost$core$Frost$ref$frost$core$Object$Q(_1186);
_1188 = *(&local24);
_1189 = ((frost$core$Object*) _1188);
frost$core$Frost$unref$frost$core$Object$Q(_1189);
*(&local24) = _1184;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:565
_1193 = *(&local1);
_1194 = *(&local5);
_1195 = *(&local23);
_1196 = *(&local24);
_1197 = ($fn463) param0->$class->vtable[18];
_1197(param0, _1193, _1194, _1195, _1196);
_1199 = *(&local24);
_1200 = ((frost$core$Object*) _1199);
frost$core$Frost$unref$frost$core$Object$Q(_1200);
*(&local24) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1203 = *(&local23);
_1204 = ((frost$core$Object*) _1203);
frost$core$Frost$unref$frost$core$Object$Q(_1204);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block125:;
_1208 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:567:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1211 = _563.value;
_1212 = _1208.value;
_1213 = _1211 == _1212;
_1214 = (frost$core$Bit) {_1213};
_1216 = _1214.value;
if (_1216) goto block127; else goto block128;
block127:;
_1218 = &_561->$data.$GET_FIELD_POINTER.field0;
_1219 = *_1218;
_1220 = &_561->$data.$GET_FIELD_POINTER.field1;
_1221 = *_1220;
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
_1223 = ((frost$core$Object*) _1221);
frost$core$Frost$ref$frost$core$Object$Q(_1223);
_1225 = *(&local25);
_1226 = ((frost$core$Object*) _1225);
frost$core$Frost$unref$frost$core$Object$Q(_1226);
*(&local25) = _1221;
_1229 = &_561->$data.$GET_FIELD_POINTER.field2;
_1230 = *_1229;
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1232 = ((frost$core$Object*) _1230);
frost$core$Frost$ref$frost$core$Object$Q(_1232);
_1234 = *(&local26);
_1235 = ((frost$core$Object*) _1234);
frost$core$Frost$unref$frost$core$Object$Q(_1235);
*(&local26) = _1230;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:568
_1239 = *(&local1);
_1240 = *(&local5);
_1241 = *(&local25);
_1242 = *(&local26);
_1243 = ($fn464) param0->$class->vtable[20];
_1243(param0, _1239, _1240, _1241, _1242);
_1245 = *(&local26);
_1246 = ((frost$core$Object*) _1245);
frost$core$Frost$unref$frost$core$Object$Q(_1246);
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1249 = *(&local25);
_1250 = ((frost$core$Object*) _1249);
frost$core$Frost$unref$frost$core$Object$Q(_1250);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block128:;
_1254 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:570:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1257 = _563.value;
_1258 = _1254.value;
_1259 = _1257 == _1258;
_1260 = (frost$core$Bit) {_1259};
_1262 = _1260.value;
if (_1262) goto block130; else goto block131;
block130:;
_1264 = &_561->$data.$GET_VIRTUAL_METHOD.field0;
_1265 = *_1264;
_1266 = &_561->$data.$GET_VIRTUAL_METHOD.field1;
_1267 = *_1266;
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
_1269 = ((frost$core$Object*) _1267);
frost$core$Frost$ref$frost$core$Object$Q(_1269);
_1271 = *(&local27);
_1272 = ((frost$core$Object*) _1271);
frost$core$Frost$unref$frost$core$Object$Q(_1272);
*(&local27) = _1267;
_1275 = &_561->$data.$GET_VIRTUAL_METHOD.field2;
_1276 = *_1275;
*(&local28) = _1276;
_1278 = &_561->$data.$GET_VIRTUAL_METHOD.field3;
_1279 = *_1278;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:571
_1281 = *(&local1);
_1282 = *(&local27);
_1283 = ($fn465) _1281->$class->vtable[2];
_1284 = _1283(_1281, _1282);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:571:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1287 = _1284.value;
_1288 = ((int64_t) _1287);
_1289 = (frost$core$Int) {_1288};
_1291 = _1289.value;
_1292 = ((frost$core$Int*) _1291);
*(&local29) = _1292;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:572
_1295 = *(&local29);
_1296 = *_1295;
_1297 = _1296.value;
_1298 = ((frost$core$UInt8*) _1297);
_1299 = ((org$frostlang$frostc$ClassDecl*) _1298);
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1301 = ((frost$core$Object*) _1299);
frost$core$Frost$ref$frost$core$Object$Q(_1301);
_1303 = *(&local30);
_1304 = ((frost$core$Object*) _1303);
frost$core$Frost$unref$frost$core$Object$Q(_1304);
*(&local30) = _1299;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:573
_1308 = &param0->compiler;
_1309 = *_1308;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:573:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_1314 = &_1309->_valid;
_1315 = *_1314;
_1317 = _1315.value;
if (_1317) goto block136; else goto block137;
block137:;
_1319 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s466, _1319, &$s467);
abort(); // unreachable
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_1323 = &_1309->value;
_1324 = *_1323;
_1325 = _1324;
_1326 = _1325;
frost$core$Frost$ref$frost$core$Object$Q(_1326);
_1329 = ((org$frostlang$frostc$Compiler*) _1325);
_1330 = _1329 != NULL;
_1331 = (frost$core$Bit) {_1330};
_1332 = _1331.value;
if (_1332) goto block138; else goto block139;
block139:;
_1334 = (frost$core$Int) {573u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s468, _1334, &$s469);
abort(); // unreachable
block138:;
_1337 = _1329;
_1338 = *(&local30);
_1339 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_1337, _1338);
_1340 = *(&local28);
ITable* $tmp470 = _1339->$class->itable;
while ($tmp470->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp470 = $tmp470->next;
}
_1341 = $tmp470->methods[0];
_1342 = _1341(_1339, _1340);
_1343 = ((org$frostlang$frostc$MethodDecl*) _1342);
*(&local31) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1345 = ((frost$core$Object*) _1343);
frost$core$Frost$ref$frost$core$Object$Q(_1345);
_1347 = *(&local31);
_1348 = ((frost$core$Object*) _1347);
frost$core$Frost$unref$frost$core$Object$Q(_1348);
*(&local31) = _1343;
_1351 = _1342;
frost$core$Frost$unref$frost$core$Object$Q(_1351);
_1353 = ((frost$core$Object*) _1339);
frost$core$Frost$unref$frost$core$Object$Q(_1353);
_1355 = _1325;
frost$core$Frost$unref$frost$core$Object$Q(_1355);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:574
_1358 = *(&local1);
_1359 = &_1358->statements;
_1360 = *_1359;
_1361 = *(&local5);
_1362 = _1361.value;
_1363 = *(&local31);
_1364 = ((frost$core$Object*) _1363);
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&_1365, _1364);
_1366 = frost$core$Int64$init$frost$core$Int(_1365);
_1367 = ((frost$core$Int64$nullable) { _1366, true });
frost$core$Object* $tmp471;
if (_1367.nonnull) {
    frost$core$Int64$wrapper* $tmp472;
    $tmp472 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp472->value = ((frost$core$Int64) _1367.value);
    $tmp471 = ((frost$core$Object*) $tmp472);
}
else {
    $tmp471 = NULL;
}
_1368 = $tmp471;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:574:39
_1370 = (frost$core$Int) {0u};
_1371 = _1362.value;
_1372 = _1370.value;
_1373 = _1371 >= _1372;
_1374 = (frost$core$Bit) {_1373};
_1375 = _1374.value;
if (_1375) goto block143; else goto block142;
block143:;
_1377 = ((frost$collections$CollectionView*) _1360);
ITable* $tmp473 = _1377->$class->itable;
while ($tmp473->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp473 = $tmp473->next;
}
_1378 = $tmp473->methods[0];
_1379 = _1378(_1377);
_1380 = _1362.value;
_1381 = _1379.value;
_1382 = _1380 < _1381;
_1383 = (frost$core$Bit) {_1382};
_1384 = _1383.value;
if (_1384) goto block141; else goto block142;
block142:;
_1386 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s474, _1386, &$s475);
abort(); // unreachable
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1390 = &_1360->data;
_1391 = *_1390;
_1392 = frost$core$Int64$init$frost$core$Int(_1362);
_1393 = _1392.value;
_1394 = _1368;
frost$core$Frost$ref$frost$core$Object$Q(_1394);
_1396 = _1391[_1393];
_1397 = _1396;
frost$core$Frost$unref$frost$core$Object$Q(_1397);
_1391[_1393] = _1368;
_1401 = _1368;
frost$core$Frost$unref$frost$core$Object$Q(_1401);
_1403 = *(&local31);
_1404 = ((frost$core$Object*) _1403);
frost$core$Frost$unref$frost$core$Object$Q(_1404);
*(&local31) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1407 = *(&local30);
_1408 = ((frost$core$Object*) _1407);
frost$core$Frost$unref$frost$core$Object$Q(_1408);
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1411 = *(&local27);
_1412 = ((frost$core$Object*) _1411);
frost$core$Frost$unref$frost$core$Object$Q(_1412);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block131:;
_1416 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:576:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1419 = _563.value;
_1420 = _1416.value;
_1421 = _1419 == _1420;
_1422 = (frost$core$Bit) {_1421};
_1424 = _1422.value;
if (_1424) goto block144; else goto block145;
block144:;
_1426 = &_561->$data.$LOAD.field0;
_1427 = *_1426;
_1428 = &_561->$data.$LOAD.field1;
_1429 = *_1428;
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
_1431 = ((frost$core$Object*) _1429);
frost$core$Frost$ref$frost$core$Object$Q(_1431);
_1433 = *(&local32);
_1434 = ((frost$core$Object*) _1433);
frost$core$Frost$unref$frost$core$Object$Q(_1434);
*(&local32) = _1429;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:577
_1438 = *(&local1);
_1439 = *(&local32);
_1440 = ($fn476) _1438->$class->vtable[2];
_1441 = _1440(_1438, _1439);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:577:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1444 = _1441.value;
_1445 = ((int64_t) _1444);
_1446 = (frost$core$Int) {_1445};
_1448 = _1446.value;
_1449 = ((frost$core$Int*) _1448);
*(&local33) = _1449;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:578
_1452 = *(&local32);
_1453 = ($fn477) _1452->$class->vtable[2];
_1454 = _1453(_1452);
_1455 = ($fn478) param0->$class->vtable[10];
_1456 = _1455(param0, _1454);
_1457 = _1456.value;
_1458 = ((frost$core$Object*) _1454);
frost$core$Frost$unref$frost$core$Object$Q(_1458);
if (_1457) goto block148; else goto block150;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:579
_1462 = *(&local1);
_1463 = &_1462->statements;
_1464 = *_1463;
_1465 = *(&local5);
_1466 = _1465.value;
_1467 = *(&local33);
_1468 = ((int64_t) _1467);
_1469 = (frost$core$Int) {_1468};
_1470 = frost$core$Int64$init$frost$core$Int(_1469);
_1471 = ((frost$core$Int64$nullable) { _1470, true });
frost$core$Object* $tmp479;
if (_1471.nonnull) {
    frost$core$Int64$wrapper* $tmp480;
    $tmp480 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp480->value = ((frost$core$Int64) _1471.value);
    $tmp479 = ((frost$core$Object*) $tmp480);
}
else {
    $tmp479 = NULL;
}
_1472 = $tmp479;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:579:43
_1474 = (frost$core$Int) {0u};
_1475 = _1466.value;
_1476 = _1474.value;
_1477 = _1475 >= _1476;
_1478 = (frost$core$Bit) {_1477};
_1479 = _1478.value;
if (_1479) goto block154; else goto block153;
block154:;
_1481 = ((frost$collections$CollectionView*) _1464);
ITable* $tmp481 = _1481->$class->itable;
while ($tmp481->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp481 = $tmp481->next;
}
_1482 = $tmp481->methods[0];
_1483 = _1482(_1481);
_1484 = _1466.value;
_1485 = _1483.value;
_1486 = _1484 < _1485;
_1487 = (frost$core$Bit) {_1486};
_1488 = _1487.value;
if (_1488) goto block152; else goto block153;
block153:;
_1490 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s482, _1490, &$s483);
abort(); // unreachable
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1494 = &_1464->data;
_1495 = *_1494;
_1496 = frost$core$Int64$init$frost$core$Int(_1466);
_1497 = _1496.value;
_1498 = _1472;
frost$core$Frost$ref$frost$core$Object$Q(_1498);
_1500 = _1495[_1497];
_1501 = _1500;
frost$core$Frost$unref$frost$core$Object$Q(_1501);
_1495[_1497] = _1472;
_1505 = _1472;
frost$core$Frost$unref$frost$core$Object$Q(_1505);
goto block149;
block150:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:582
_1510 = *(&local1);
_1511 = &_1510->statements;
_1512 = *_1511;
_1513 = *(&local5);
_1514 = _1513.value;
_1515 = *(&local33);
_1516 = *_1515;
_1517 = frost$core$Int64$init$frost$core$Int(_1516);
_1518 = ((frost$core$Int64$nullable) { _1517, true });
frost$core$Object* $tmp484;
if (_1518.nonnull) {
    frost$core$Int64$wrapper* $tmp485;
    $tmp485 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp485->value = ((frost$core$Int64) _1518.value);
    $tmp484 = ((frost$core$Object*) $tmp485);
}
else {
    $tmp484 = NULL;
}
_1519 = $tmp484;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:582:43
_1521 = (frost$core$Int) {0u};
_1522 = _1514.value;
_1523 = _1521.value;
_1524 = _1522 >= _1523;
_1525 = (frost$core$Bit) {_1524};
_1526 = _1525.value;
if (_1526) goto block158; else goto block157;
block158:;
_1528 = ((frost$collections$CollectionView*) _1512);
ITable* $tmp486 = _1528->$class->itable;
while ($tmp486->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp486 = $tmp486->next;
}
_1529 = $tmp486->methods[0];
_1530 = _1529(_1528);
_1531 = _1514.value;
_1532 = _1530.value;
_1533 = _1531 < _1532;
_1534 = (frost$core$Bit) {_1533};
_1535 = _1534.value;
if (_1535) goto block156; else goto block157;
block157:;
_1537 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s487, _1537, &$s488);
abort(); // unreachable
block156:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1541 = &_1512->data;
_1542 = *_1541;
_1543 = frost$core$Int64$init$frost$core$Int(_1514);
_1544 = _1543.value;
_1545 = _1519;
frost$core$Frost$ref$frost$core$Object$Q(_1545);
_1547 = _1542[_1544];
_1548 = _1547;
frost$core$Frost$unref$frost$core$Object$Q(_1548);
_1542[_1544] = _1519;
_1552 = _1519;
frost$core$Frost$unref$frost$core$Object$Q(_1552);
goto block149;
block149:;
_1555 = *(&local32);
_1556 = ((frost$core$Object*) _1555);
frost$core$Frost$unref$frost$core$Object$Q(_1556);
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block145:;
_1560 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:585:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1563 = _563.value;
_1564 = _1560.value;
_1565 = _1563 == _1564;
_1566 = (frost$core$Bit) {_1565};
_1568 = _1566.value;
if (_1568) goto block159; else goto block160;
block159:;
_1570 = &_561->$data.$POINTER_ALLOC.field0;
_1571 = *_1570;
_1572 = &_561->$data.$POINTER_ALLOC.field1;
_1573 = *_1572;
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
_1575 = ((frost$core$Object*) _1573);
frost$core$Frost$ref$frost$core$Object$Q(_1575);
_1577 = *(&local34);
_1578 = ((frost$core$Object*) _1577);
frost$core$Frost$unref$frost$core$Object$Q(_1578);
*(&local34) = _1573;
_1581 = &_561->$data.$POINTER_ALLOC.field2;
_1582 = *_1581;
*(&local35) = ((org$frostlang$frostc$Type*) NULL);
_1584 = ((frost$core$Object*) _1582);
frost$core$Frost$ref$frost$core$Object$Q(_1584);
_1586 = *(&local35);
_1587 = ((frost$core$Object*) _1586);
frost$core$Frost$unref$frost$core$Object$Q(_1587);
*(&local35) = _1582;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:586
_1591 = *(&local1);
_1592 = &_1591->statements;
_1593 = *_1592;
_1594 = *(&local5);
_1595 = _1594.value;
_1596 = *(&local1);
_1597 = *(&local34);
_1598 = ($fn489) _1596->$class->vtable[2];
_1599 = _1598(_1596, _1597);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:586:91
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1602 = _1599.value;
_1603 = ((int64_t) _1602);
_1604 = (frost$core$Int) {_1603};
_1606 = &param0->memoryLayout;
_1607 = *_1606;
_1608 = *(&local35);
_1609 = ($fn490) _1607->$class->vtable[7];
_1610 = _1609(_1607, _1608);
_1611 = _1604.value;
_1612 = _1610.value;
_1613 = _1611 * _1612;
_1614 = (frost$core$Int) {_1613};
_1615 = frost$core$Int64$init$frost$core$Int(_1614);
_1616 = _1615.value;
_1617 = ((frost$core$UInt8*) frostAlloc(_1616 * sizeof(frost$core$UInt8)));
_1618 = ((int64_t) _1617);
_1619 = (frost$core$Int) {_1618};
_1620 = frost$core$Int64$init$frost$core$Int(_1619);
_1621 = ((frost$core$Int64$nullable) { _1620, true });
frost$core$Object* $tmp491;
if (_1621.nonnull) {
    frost$core$Int64$wrapper* $tmp492;
    $tmp492 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp492->value = ((frost$core$Int64) _1621.value);
    $tmp491 = ((frost$core$Object*) $tmp492);
}
else {
    $tmp491 = NULL;
}
_1622 = $tmp491;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:586:40
_1624 = (frost$core$Int) {0u};
_1625 = _1595.value;
_1626 = _1624.value;
_1627 = _1625 >= _1626;
_1628 = (frost$core$Bit) {_1627};
_1629 = _1628.value;
if (_1629) goto block166; else goto block165;
block166:;
_1631 = ((frost$collections$CollectionView*) _1593);
ITable* $tmp493 = _1631->$class->itable;
while ($tmp493->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp493 = $tmp493->next;
}
_1632 = $tmp493->methods[0];
_1633 = _1632(_1631);
_1634 = _1595.value;
_1635 = _1633.value;
_1636 = _1634 < _1635;
_1637 = (frost$core$Bit) {_1636};
_1638 = _1637.value;
if (_1638) goto block164; else goto block165;
block165:;
_1640 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s494, _1640, &$s495);
abort(); // unreachable
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1644 = &_1593->data;
_1645 = *_1644;
_1646 = frost$core$Int64$init$frost$core$Int(_1595);
_1647 = _1646.value;
_1648 = _1622;
frost$core$Frost$ref$frost$core$Object$Q(_1648);
_1650 = _1645[_1647];
_1651 = _1650;
frost$core$Frost$unref$frost$core$Object$Q(_1651);
_1645[_1647] = _1622;
_1655 = _1622;
frost$core$Frost$unref$frost$core$Object$Q(_1655);
_1657 = *(&local35);
_1658 = ((frost$core$Object*) _1657);
frost$core$Frost$unref$frost$core$Object$Q(_1658);
*(&local35) = ((org$frostlang$frostc$Type*) NULL);
_1661 = *(&local34);
_1662 = ((frost$core$Object*) _1661);
frost$core$Frost$unref$frost$core$Object$Q(_1662);
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block160:;
_1666 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:589:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1669 = _563.value;
_1670 = _1666.value;
_1671 = _1669 == _1670;
_1672 = (frost$core$Bit) {_1671};
_1674 = _1672.value;
if (_1674) goto block167; else goto block168;
block167:;
_1676 = &_561->$data.$POINTER_GET_INDEX.field0;
_1677 = *_1676;
_1678 = &_561->$data.$POINTER_GET_INDEX.field1;
_1679 = *_1678;
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
_1681 = ((frost$core$Object*) _1679);
frost$core$Frost$ref$frost$core$Object$Q(_1681);
_1683 = *(&local36);
_1684 = ((frost$core$Object*) _1683);
frost$core$Frost$unref$frost$core$Object$Q(_1684);
*(&local36) = _1679;
_1687 = &_561->$data.$POINTER_GET_INDEX.field2;
_1688 = *_1687;
*(&local37) = ((org$frostlang$frostc$IR$Value*) NULL);
_1690 = ((frost$core$Object*) _1688);
frost$core$Frost$ref$frost$core$Object$Q(_1690);
_1692 = *(&local37);
_1693 = ((frost$core$Object*) _1692);
frost$core$Frost$unref$frost$core$Object$Q(_1693);
*(&local37) = _1688;
_1696 = &_561->$data.$POINTER_GET_INDEX.field3;
_1697 = *_1696;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:590
_1699 = *(&local36);
_1700 = ($fn496) _1699->$class->vtable[2];
_1701 = _1700(_1699);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Interpreter.frost:590:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:248
_1704 = &_1701->_subtypes;
_1705 = *_1704;
_1706 = _1705 != NULL;
_1707 = (frost$core$Bit) {_1706};
_1708 = _1707.value;
if (_1708) goto block171; else goto block172;
block172:;
_1710 = (frost$core$Int) {248u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s497, _1710, &$s498);
abort(); // unreachable
block171:;
_1713 = _1705;
_1714 = ((frost$core$Object*) _1713);
frost$core$Frost$ref$frost$core$Object$Q(_1714);
_1717 = (frost$core$Int) {1u};
_1718 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_1713, _1717);
_1719 = ((org$frostlang$frostc$Type*) _1718);
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
_1721 = ((frost$core$Object*) _1719);
frost$core$Frost$ref$frost$core$Object$Q(_1721);
_1723 = *(&local38);
_1724 = ((frost$core$Object*) _1723);
frost$core$Frost$unref$frost$core$Object$Q(_1724);
*(&local38) = _1719;
_1727 = _1718;
frost$core$Frost$unref$frost$core$Object$Q(_1727);
_1729 = ((frost$core$Object*) _1713);
frost$core$Frost$unref$frost$core$Object$Q(_1729);
_1731 = ((frost$core$Object*) _1701);
frost$core$Frost$unref$frost$core$Object$Q(_1731);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:591
_1734 = *(&local1);
_1735 = *(&local36);
_1736 = ($fn499) _1734->$class->vtable[2];
_1737 = _1736(_1734, _1735);
_1738 = *(&local1);
_1739 = *(&local37);
_1740 = ($fn500) _1738->$class->vtable[2];
_1741 = _1740(_1738, _1739);
_1742 = &param0->memoryLayout;
_1743 = *_1742;
_1744 = *(&local38);
_1745 = ($fn501) _1743->$class->vtable[7];
_1746 = _1745(_1743, _1744);
_1747 = frost$core$Int64$init$frost$core$Int(_1746);
_1748 = _1741.value;
_1749 = _1747.value;
_1750 = _1748 * _1749;
_1751 = (frost$core$Int64) {_1750};
_1752 = _1737.value;
_1753 = _1751.value;
_1754 = _1752 + _1753;
_1755 = (frost$core$Int64) {_1754};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:592:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1758 = _1755.value;
_1759 = ((int64_t) _1758);
_1760 = (frost$core$Int) {_1759};
_1762 = _1760.value;
_1763 = ((frost$core$UInt8*) _1762);
*(&local39) = _1763;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:593
_1766 = &param0->stack;
_1767 = *_1766;
_1768 = ((frost$core$Int64*) _1767);
_1769 = (frost$core$Int64) {0u};
*_1768 = _1769;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:594
_1772 = (frost$core$Int) {0u};
_1773 = &param0->memoryLayout;
_1774 = *_1773;
_1775 = *(&local38);
_1776 = ($fn502) _1774->$class->vtable[7];
_1777 = _1776(_1774, _1775);
_1778 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.min(other:frost.core.Int):frost.core.Int from Interpreter.frost:594:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:776
_1781 = _1777.value;
_1782 = _1778.value;
_1783 = _1781 < _1782;
_1784 = (frost$core$Bit) {_1783};
_1785 = _1784.value;
if (_1785) goto block175; else goto block176;
block175:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:777
_1788 = _1777.value;
_1789 = (frost$core$Int) {_1788};
*(&local40) = _1789;
goto block174;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:779
_1793 = _1778.value;
_1794 = (frost$core$Int) {_1793};
*(&local40) = _1794;
goto block174;
block174:;
_1797 = *(&local40);
_1798 = (frost$core$Bit) {false};
_1799 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1772, _1797, _1798);
_1800 = _1799.min;
*(&local41) = _1800;
_1802 = _1799.max;
_1803 = _1799.inclusive;
_1804 = _1803.value;
_1805 = (frost$core$Int) {1u};
if (_1804) goto block180; else goto block181;
block180:;
_1807 = _1800.value;
_1808 = _1802.value;
_1809 = _1807 <= _1808;
_1810 = (frost$core$Bit) {_1809};
_1811 = _1810.value;
if (_1811) goto block177; else goto block178;
block181:;
_1813 = _1800.value;
_1814 = _1802.value;
_1815 = _1813 < _1814;
_1816 = (frost$core$Bit) {_1815};
_1817 = _1816.value;
if (_1817) goto block177; else goto block178;
block177:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:595
_1820 = &param0->stack;
_1821 = *_1820;
_1822 = *(&local41);
_1823 = frost$core$Int64$init$frost$core$Int(_1822);
_1824 = *(&local39);
_1825 = *(&local41);
_1826 = frost$core$Int64$init$frost$core$Int(_1825);
_1827 = _1826.value;
_1828 = _1824[_1827];
_1829 = _1823.value;
_1821[_1829] = _1828;
_1832 = *(&local41);
_1833 = _1802.value;
_1834 = _1832.value;
_1835 = _1833 - _1834;
_1836 = (frost$core$Int) {_1835};
if (_1804) goto block183; else goto block184;
block183:;
_1838 = _1836.value;
_1839 = _1805.value;
_1840 = _1838 >= _1839;
_1841 = (frost$core$Bit) {_1840};
_1842 = _1841.value;
if (_1842) goto block182; else goto block178;
block184:;
_1844 = _1836.value;
_1845 = _1805.value;
_1846 = _1844 > _1845;
_1847 = (frost$core$Bit) {_1846};
_1848 = _1847.value;
if (_1848) goto block182; else goto block178;
block182:;
_1850 = _1832.value;
_1851 = _1805.value;
_1852 = _1850 + _1851;
_1853 = (frost$core$Int) {_1852};
*(&local41) = _1853;
goto block177;
block178:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:597
_1857 = *(&local1);
_1858 = &_1857->statements;
_1859 = *_1858;
_1860 = *(&local5);
_1861 = _1860.value;
_1862 = &param0->stack;
_1863 = *_1862;
_1864 = ((frost$core$Int64*) _1863);
_1865 = *_1864;
_1866 = ((frost$core$Int64$nullable) { _1865, true });
frost$core$Object* $tmp503;
if (_1866.nonnull) {
    frost$core$Int64$wrapper* $tmp504;
    $tmp504 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp504->value = ((frost$core$Int64) _1866.value);
    $tmp503 = ((frost$core$Object*) $tmp504);
}
else {
    $tmp503 = NULL;
}
_1867 = $tmp503;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:597:39
_1869 = (frost$core$Int) {0u};
_1870 = _1861.value;
_1871 = _1869.value;
_1872 = _1870 >= _1871;
_1873 = (frost$core$Bit) {_1872};
_1874 = _1873.value;
if (_1874) goto block188; else goto block187;
block188:;
_1876 = ((frost$collections$CollectionView*) _1859);
ITable* $tmp505 = _1876->$class->itable;
while ($tmp505->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp505 = $tmp505->next;
}
_1877 = $tmp505->methods[0];
_1878 = _1877(_1876);
_1879 = _1861.value;
_1880 = _1878.value;
_1881 = _1879 < _1880;
_1882 = (frost$core$Bit) {_1881};
_1883 = _1882.value;
if (_1883) goto block186; else goto block187;
block187:;
_1885 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s506, _1885, &$s507);
abort(); // unreachable
block186:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1889 = &_1859->data;
_1890 = *_1889;
_1891 = frost$core$Int64$init$frost$core$Int(_1861);
_1892 = _1891.value;
_1893 = _1867;
frost$core$Frost$ref$frost$core$Object$Q(_1893);
_1895 = _1890[_1892];
_1896 = _1895;
frost$core$Frost$unref$frost$core$Object$Q(_1896);
_1890[_1892] = _1867;
_1900 = _1867;
frost$core$Frost$unref$frost$core$Object$Q(_1900);
_1902 = *(&local38);
_1903 = ((frost$core$Object*) _1902);
frost$core$Frost$unref$frost$core$Object$Q(_1903);
*(&local38) = ((org$frostlang$frostc$Type*) NULL);
_1906 = *(&local37);
_1907 = ((frost$core$Object*) _1906);
frost$core$Frost$unref$frost$core$Object$Q(_1907);
*(&local37) = ((org$frostlang$frostc$IR$Value*) NULL);
_1910 = *(&local36);
_1911 = ((frost$core$Object*) _1910);
frost$core$Frost$unref$frost$core$Object$Q(_1911);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block168:;
_1915 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:599:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1918 = _563.value;
_1919 = _1915.value;
_1920 = _1918 == _1919;
_1921 = (frost$core$Bit) {_1920};
_1923 = _1921.value;
if (_1923) goto block189; else goto block190;
block189:;
_1925 = &_561->$data.$POINTER_SET_INDEX.field0;
_1926 = *_1925;
_1927 = &_561->$data.$POINTER_SET_INDEX.field1;
_1928 = *_1927;
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
_1930 = ((frost$core$Object*) _1928);
frost$core$Frost$ref$frost$core$Object$Q(_1930);
_1932 = *(&local42);
_1933 = ((frost$core$Object*) _1932);
frost$core$Frost$unref$frost$core$Object$Q(_1933);
*(&local42) = _1928;
_1936 = &_561->$data.$POINTER_SET_INDEX.field2;
_1937 = *_1936;
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
_1939 = ((frost$core$Object*) _1937);
frost$core$Frost$ref$frost$core$Object$Q(_1939);
_1941 = *(&local43);
_1942 = ((frost$core$Object*) _1941);
frost$core$Frost$unref$frost$core$Object$Q(_1942);
*(&local43) = _1937;
_1945 = &_561->$data.$POINTER_SET_INDEX.field3;
_1946 = *_1945;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
_1948 = ((frost$core$Object*) _1946);
frost$core$Frost$ref$frost$core$Object$Q(_1948);
_1950 = *(&local44);
_1951 = ((frost$core$Object*) _1950);
frost$core$Frost$unref$frost$core$Object$Q(_1951);
*(&local44) = _1946;
_1954 = &_561->$data.$POINTER_SET_INDEX.field4;
_1955 = *_1954;
*(&local45) = ((org$frostlang$frostc$Type*) NULL);
_1957 = ((frost$core$Object*) _1955);
frost$core$Frost$ref$frost$core$Object$Q(_1957);
_1959 = *(&local45);
_1960 = ((frost$core$Object*) _1959);
frost$core$Frost$unref$frost$core$Object$Q(_1960);
*(&local45) = _1955;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:600
_1964 = *(&local1);
_1965 = *(&local43);
_1966 = ($fn508) _1964->$class->vtable[2];
_1967 = _1966(_1964, _1965);
_1968 = *(&local1);
_1969 = *(&local44);
_1970 = ($fn509) _1968->$class->vtable[2];
_1971 = _1970(_1968, _1969);
_1972 = &param0->memoryLayout;
_1973 = *_1972;
_1974 = *(&local42);
_1975 = ($fn510) _1974->$class->vtable[2];
_1976 = _1975(_1974);
_1977 = ($fn511) _1973->$class->vtable[7];
_1978 = _1977(_1973, _1976);
_1979 = frost$core$Int64$init$frost$core$Int(_1978);
_1980 = _1971.value;
_1981 = _1979.value;
_1982 = _1980 * _1981;
_1983 = (frost$core$Int64) {_1982};
_1984 = _1967.value;
_1985 = _1983.value;
_1986 = _1984 + _1985;
_1987 = (frost$core$Int64) {_1986};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:601:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1990 = _1987.value;
_1991 = ((int64_t) _1990);
_1992 = (frost$core$Int) {_1991};
_1994 = _1992.value;
_1995 = ((frost$core$UInt8*) _1994);
*(&local46) = _1995;
_1997 = ((frost$core$Object*) _1976);
frost$core$Frost$unref$frost$core$Object$Q(_1997);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:602
_2000 = *(&local1);
_2001 = *(&local42);
_2002 = ($fn512) _2000->$class->vtable[2];
_2003 = _2002(_2000, _2001);
*(&local47) = _2003;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:603
_2006 = &param0->stack;
_2007 = *_2006;
_2008 = ((frost$core$Int64*) _2007);
_2009 = *(&local47);
*_2008 = _2009;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:604
_2012 = (frost$core$Int) {0u};
_2013 = &param0->memoryLayout;
_2014 = *_2013;
_2015 = *(&local42);
_2016 = ($fn513) _2015->$class->vtable[2];
_2017 = _2016(_2015);
_2018 = ($fn514) _2014->$class->vtable[7];
_2019 = _2018(_2014, _2017);
_2020 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.min(other:frost.core.Int):frost.core.Int from Interpreter.frost:604:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:776
_2023 = _2019.value;
_2024 = _2020.value;
_2025 = _2023 < _2024;
_2026 = (frost$core$Bit) {_2025};
_2027 = _2026.value;
if (_2027) goto block194; else goto block195;
block194:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:777
_2030 = _2019.value;
_2031 = (frost$core$Int) {_2030};
*(&local48) = _2031;
goto block193;
block195:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:779
_2035 = _2020.value;
_2036 = (frost$core$Int) {_2035};
*(&local48) = _2036;
goto block193;
block193:;
_2039 = *(&local48);
_2040 = (frost$core$Bit) {false};
_2041 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_2012, _2039, _2040);
_2042 = _2041.min;
*(&local49) = _2042;
_2044 = _2041.max;
_2045 = _2041.inclusive;
_2046 = _2045.value;
_2047 = (frost$core$Int) {1u};
if (_2046) goto block199; else goto block200;
block199:;
_2049 = _2042.value;
_2050 = _2044.value;
_2051 = _2049 <= _2050;
_2052 = (frost$core$Bit) {_2051};
_2053 = _2052.value;
if (_2053) goto block196; else goto block197;
block200:;
_2055 = _2042.value;
_2056 = _2044.value;
_2057 = _2055 < _2056;
_2058 = (frost$core$Bit) {_2057};
_2059 = _2058.value;
if (_2059) goto block196; else goto block197;
block196:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:605
_2062 = *(&local46);
_2063 = *(&local49);
_2064 = frost$core$Int64$init$frost$core$Int(_2063);
_2065 = &param0->stack;
_2066 = *_2065;
_2067 = *(&local49);
_2068 = frost$core$Int64$init$frost$core$Int(_2067);
_2069 = _2068.value;
_2070 = _2066[_2069];
_2071 = _2064.value;
_2062[_2071] = _2070;
_2074 = *(&local49);
_2075 = _2044.value;
_2076 = _2074.value;
_2077 = _2075 - _2076;
_2078 = (frost$core$Int) {_2077};
if (_2046) goto block202; else goto block203;
block202:;
_2080 = _2078.value;
_2081 = _2047.value;
_2082 = _2080 >= _2081;
_2083 = (frost$core$Bit) {_2082};
_2084 = _2083.value;
if (_2084) goto block201; else goto block197;
block203:;
_2086 = _2078.value;
_2087 = _2047.value;
_2088 = _2086 > _2087;
_2089 = (frost$core$Bit) {_2088};
_2090 = _2089.value;
if (_2090) goto block201; else goto block197;
block201:;
_2092 = _2074.value;
_2093 = _2047.value;
_2094 = _2092 + _2093;
_2095 = (frost$core$Int) {_2094};
*(&local49) = _2095;
goto block196;
block197:;
_2098 = ((frost$core$Object*) _2017);
frost$core$Frost$unref$frost$core$Object$Q(_2098);
_2100 = *(&local45);
_2101 = ((frost$core$Object*) _2100);
frost$core$Frost$unref$frost$core$Object$Q(_2101);
*(&local45) = ((org$frostlang$frostc$Type*) NULL);
_2104 = *(&local44);
_2105 = ((frost$core$Object*) _2104);
frost$core$Frost$unref$frost$core$Object$Q(_2105);
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
_2108 = *(&local43);
_2109 = ((frost$core$Object*) _2108);
frost$core$Frost$unref$frost$core$Object$Q(_2109);
*(&local43) = ((org$frostlang$frostc$IR$Value*) NULL);
_2112 = *(&local42);
_2113 = ((frost$core$Object*) _2112);
frost$core$Frost$unref$frost$core$Object$Q(_2113);
*(&local42) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block190:;
_2117 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:608:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2120 = _563.value;
_2121 = _2117.value;
_2122 = _2120 == _2121;
_2123 = (frost$core$Bit) {_2122};
_2125 = _2123.value;
if (_2125) goto block204; else goto block205;
block204:;
_2127 = &_561->$data.$POINTER_DESTROY.field0;
_2128 = *_2127;
_2129 = &_561->$data.$POINTER_DESTROY.field1;
_2130 = *_2129;
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
_2132 = ((frost$core$Object*) _2130);
frost$core$Frost$ref$frost$core$Object$Q(_2132);
_2134 = *(&local50);
_2135 = ((frost$core$Object*) _2134);
frost$core$Frost$unref$frost$core$Object$Q(_2135);
*(&local50) = _2130;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:609
_2139 = *(&local1);
_2140 = *(&local50);
_2141 = ($fn515) _2139->$class->vtable[2];
_2142 = _2141(_2139, _2140);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:609:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_2145 = _2142.value;
_2146 = ((int64_t) _2145);
_2147 = (frost$core$Int) {_2146};
_2149 = _2147.value;
_2150 = ((frost$core$Int*) _2149);
frostFree(_2150);
_2152 = *(&local50);
_2153 = ((frost$core$Object*) _2152);
frost$core$Frost$unref$frost$core$Object$Q(_2153);
*(&local50) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block205:;
_2157 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:611:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2160 = _563.value;
_2161 = _2157.value;
_2162 = _2160 == _2161;
_2163 = (frost$core$Bit) {_2162};
_2165 = _2163.value;
if (_2165) goto block208; else goto block209;
block208:;
_2167 = &_561->$data.$RETURN.field0;
_2168 = *_2167;
_2169 = &_561->$data.$RETURN.field1;
_2170 = *_2169;
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
_2172 = ((frost$core$Object*) _2170);
frost$core$Frost$ref$frost$core$Object$Q(_2172);
_2174 = *(&local51);
_2175 = ((frost$core$Object*) _2174);
frost$core$Frost$unref$frost$core$Object$Q(_2175);
*(&local51) = _2170;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:612
_2179 = &param0->contexts;
_2180 = *_2179;
_2181 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_2180);
_2182 = ((org$frostlang$frostc$Interpreter$Context*) _2181);
_2183 = _2181;
frost$core$Frost$unref$frost$core$Object$Q(_2183);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:613
_2186 = *(&local51);
_2187 = _2186 != NULL;
_2188 = (frost$core$Bit) {_2187};
_2189 = _2188.value;
if (_2189) goto block211; else goto block212;
block211:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:614
_2192 = *(&local1);
_2193 = *(&local51);
_2194 = _2193 != NULL;
_2195 = (frost$core$Bit) {_2194};
_2196 = _2195.value;
if (_2196) goto block213; else goto block214;
block214:;
_2198 = (frost$core$Int) {614u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s516, _2198, &$s517);
abort(); // unreachable
block213:;
_2201 = _2193;
_2202 = ($fn518) _2192->$class->vtable[2];
_2203 = _2202(_2192, _2201);
_2204 = *(&local51);
_2205 = ((frost$core$Object*) _2204);
frost$core$Frost$unref$frost$core$Object$Q(_2205);
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
_2208 = *(&local6);
_2209 = ((frost$core$Object*) _2208);
frost$core$Frost$unref$frost$core$Object$Q(_2209);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
_2212 = *(&local1);
_2213 = ((frost$core$Object*) _2212);
frost$core$Frost$unref$frost$core$Object$Q(_2213);
*(&local1) = ((org$frostlang$frostc$Interpreter$Context*) NULL);
_2216 = *(&local0);
_2217 = ((frost$core$Object*) _2216);
frost$core$Frost$unref$frost$core$Object$Q(_2217);
*(&local0) = ((org$frostlang$frostc$Interpreter$Code*) NULL);
return _2203;
block212:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:616
_2222 = (frost$core$Int64) {18446744073709551615u};
_2223 = *(&local51);
_2224 = ((frost$core$Object*) _2223);
frost$core$Frost$unref$frost$core$Object$Q(_2224);
*(&local51) = ((org$frostlang$frostc$IR$Value*) NULL);
_2227 = *(&local6);
_2228 = ((frost$core$Object*) _2227);
frost$core$Frost$unref$frost$core$Object$Q(_2228);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
_2231 = *(&local1);
_2232 = ((frost$core$Object*) _2231);
frost$core$Frost$unref$frost$core$Object$Q(_2232);
*(&local1) = ((org$frostlang$frostc$Interpreter$Context*) NULL);
_2235 = *(&local0);
_2236 = ((frost$core$Object*) _2235);
frost$core$Frost$unref$frost$core$Object$Q(_2236);
*(&local0) = ((org$frostlang$frostc$Interpreter$Code*) NULL);
return _2222;
block209:;
_2240 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:618:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2243 = _563.value;
_2244 = _2240.value;
_2245 = _2243 == _2244;
_2246 = (frost$core$Bit) {_2245};
_2248 = _2246.value;
if (_2248) goto block215; else goto block216;
block215:;
_2250 = &_561->$data.$STATIC_CALL.field0;
_2251 = *_2250;
_2252 = &_561->$data.$STATIC_CALL.field1;
_2253 = *_2252;
*(&local52) = ((org$frostlang$frostc$MethodDecl*) NULL);
_2255 = ((frost$core$Object*) _2253);
frost$core$Frost$ref$frost$core$Object$Q(_2255);
_2257 = *(&local52);
_2258 = ((frost$core$Object*) _2257);
frost$core$Frost$unref$frost$core$Object$Q(_2258);
*(&local52) = _2253;
_2261 = &_561->$data.$STATIC_CALL.field2;
_2262 = *_2261;
*(&local53) = ((org$frostlang$frostc$FixedArray*) NULL);
_2264 = ((frost$core$Object*) _2262);
frost$core$Frost$ref$frost$core$Object$Q(_2264);
_2266 = *(&local53);
_2267 = ((frost$core$Object*) _2266);
frost$core$Frost$unref$frost$core$Object$Q(_2267);
*(&local53) = _2262;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:619
_2271 = *(&local1);
_2272 = &_2271->statements;
_2273 = *_2272;
_2274 = *(&local5);
_2275 = _2274.value;
_2276 = *(&local52);
_2277 = *(&local53);
_2278 = ($fn519) param0->$class->vtable[23];
_2279 = _2278(param0, _2276, _2277);
_2280 = ((frost$core$Int64$nullable) { _2279, true });
frost$core$Object* $tmp520;
if (_2280.nonnull) {
    frost$core$Int64$wrapper* $tmp521;
    $tmp521 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp521->value = ((frost$core$Int64) _2280.value);
    $tmp520 = ((frost$core$Object*) $tmp521);
}
else {
    $tmp520 = NULL;
}
_2281 = $tmp520;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:619:39
_2283 = (frost$core$Int) {0u};
_2284 = _2275.value;
_2285 = _2283.value;
_2286 = _2284 >= _2285;
_2287 = (frost$core$Bit) {_2286};
_2288 = _2287.value;
if (_2288) goto block221; else goto block220;
block221:;
_2290 = ((frost$collections$CollectionView*) _2273);
ITable* $tmp522 = _2290->$class->itable;
while ($tmp522->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp522 = $tmp522->next;
}
_2291 = $tmp522->methods[0];
_2292 = _2291(_2290);
_2293 = _2275.value;
_2294 = _2292.value;
_2295 = _2293 < _2294;
_2296 = (frost$core$Bit) {_2295};
_2297 = _2296.value;
if (_2297) goto block219; else goto block220;
block220:;
_2299 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s523, _2299, &$s524);
abort(); // unreachable
block219:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_2303 = &_2273->data;
_2304 = *_2303;
_2305 = frost$core$Int64$init$frost$core$Int(_2275);
_2306 = _2305.value;
_2307 = _2281;
frost$core$Frost$ref$frost$core$Object$Q(_2307);
_2309 = _2304[_2306];
_2310 = _2309;
frost$core$Frost$unref$frost$core$Object$Q(_2310);
_2304[_2306] = _2281;
_2314 = _2281;
frost$core$Frost$unref$frost$core$Object$Q(_2314);
_2316 = *(&local53);
_2317 = ((frost$core$Object*) _2316);
frost$core$Frost$unref$frost$core$Object$Q(_2317);
*(&local53) = ((org$frostlang$frostc$FixedArray*) NULL);
_2320 = *(&local52);
_2321 = ((frost$core$Object*) _2320);
frost$core$Frost$unref$frost$core$Object$Q(_2321);
*(&local52) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block68;
block216:;
_2325 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:621:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2328 = _563.value;
_2329 = _2325.value;
_2330 = _2328 == _2329;
_2331 = (frost$core$Bit) {_2330};
_2333 = _2331.value;
if (_2333) goto block222; else goto block223;
block222:;
_2335 = &_561->$data.$STORE.field0;
_2336 = *_2335;
_2337 = &_561->$data.$STORE.field1;
_2338 = *_2337;
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
_2340 = ((frost$core$Object*) _2338);
frost$core$Frost$ref$frost$core$Object$Q(_2340);
_2342 = *(&local54);
_2343 = ((frost$core$Object*) _2342);
frost$core$Frost$unref$frost$core$Object$Q(_2343);
*(&local54) = _2338;
_2346 = &_561->$data.$STORE.field2;
_2347 = *_2346;
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
_2349 = ((frost$core$Object*) _2347);
frost$core$Frost$ref$frost$core$Object$Q(_2349);
_2351 = *(&local55);
_2352 = ((frost$core$Object*) _2351);
frost$core$Frost$unref$frost$core$Object$Q(_2352);
*(&local55) = _2347;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:622
_2356 = *(&local1);
_2357 = *(&local54);
_2358 = ($fn525) _2356->$class->vtable[2];
_2359 = _2358(_2356, _2357);
*(&local56) = _2359;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:623
_2362 = *(&local1);
_2363 = *(&local55);
_2364 = ($fn526) _2362->$class->vtable[2];
_2365 = _2364(_2362, _2363);
*(&local57) = _2365;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:624
_2368 = *(&local57);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:624:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_2371 = _2368.value;
_2372 = ((int64_t) _2371);
_2373 = (frost$core$Int) {_2372};
_2375 = _2373.value;
_2376 = ((frost$core$Int64*) _2375);
_2377 = *(&local56);
*_2376 = _2377;
_2379 = *(&local55);
_2380 = ((frost$core$Object*) _2379);
frost$core$Frost$unref$frost$core$Object$Q(_2380);
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
_2383 = *(&local54);
_2384 = ((frost$core$Object*) _2383);
frost$core$Frost$unref$frost$core$Object$Q(_2384);
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block223:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:627
_2389 = (frost$core$Int) {627u};
_2390 = *(&local6);
_2391 = ((frost$core$Object*) _2390);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:627:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2394 = ($fn527) _2391->$class->vtable[0];
_2395 = _2394(_2391);
_2396 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s528, _2395);
_2397 = ((frost$core$Object*) _2396);
frost$core$Frost$ref$frost$core$Object$Q(_2397);
_2399 = ((frost$core$Object*) _2396);
frost$core$Frost$unref$frost$core$Object$Q(_2399);
_2401 = ((frost$core$Object*) _2395);
frost$core$Frost$unref$frost$core$Object$Q(_2401);
_2404 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2396, &$s529);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s530, _2389, _2404);
_2406 = ((frost$core$Object*) _2404);
frost$core$Frost$unref$frost$core$Object$Q(_2406);
_2408 = ((frost$core$Object*) _2396);
frost$core$Frost$unref$frost$core$Object$Q(_2408);
abort(); // unreachable
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:630
_2412 = *(&local4);
_2413 = (frost$core$Int) {1u};
_2414 = _2412.value;
_2415 = _2413.value;
_2416 = _2414 + _2415;
_2417 = (frost$core$Int) {_2416};
*(&local4) = _2417;
_2419 = *(&local6);
_2420 = ((frost$core$Object*) _2419);
frost$core$Frost$unref$frost$core$Object$Q(_2420);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block46;
block47:;
goto block227;
block227:;

}
void org$frostlang$frostc$Interpreter$run(void* rawSelf) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int64 local0;
org$frostlang$frostc$MethodDecl** _1;
org$frostlang$frostc$MethodDecl* _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _18;
frost$core$Int _20;
org$frostlang$frostc$MethodDecl** _24;
org$frostlang$frostc$MethodDecl* _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _30;
org$frostlang$frostc$MethodDecl* _33;
org$frostlang$frostc$FixedArray* _34;
$fn531 _36;
frost$core$Int64 _37;
frost$core$Object* _38;
frost$collections$Stack** _41;
frost$collections$Stack* _42;
org$frostlang$frostc$Interpreter$Context* _43;
org$frostlang$frostc$Interpreter$Code* _44;
frost$collections$Array* _45;
frost$core$Int _46;
frost$collections$Array* _48;
frost$core$Int _49;
frost$collections$Array* _51;
frost$core$Int _52;
frost$collections$Array* _54;
frost$core$Int _55;
frost$core$Int _57;
frost$core$Object* _60;
frost$collections$Array** _63;
frost$collections$Array* _64;
frost$core$Object* _65;
frost$core$Object* _68;
frost$core$Object* _70;
frost$core$Object* _72;
frost$core$Object* _74;
frost$core$Object* _76;
frost$core$Object* _78;
frost$collections$HashMap** _81;
frost$collections$HashMap* _82;
frost$collections$MapView* _83;
$fn532 _84;
frost$collections$Iterator* _85;
$fn533 _87;
frost$core$Bit _88;
bool _89;
$fn534 _91;
frost$core$Object* _92;
frost$core$Int64 _93;
frost$core$Int64 _96;
int64_t _99;
int64_t _100;
frost$core$Int _101;
int64_t _103;
frost$core$UInt8* _104;
$fn535 _105;
frost$core$Object* _107;
frost$core$Object* _110;
frost$collections$HashMap** _113;
frost$collections$HashMap* _114;
frost$collections$Stack** _117;
frost$collections$Stack* _118;
frost$core$Object* _119;
org$frostlang$frostc$Interpreter$Context* _120;
frost$core$Object* _121;
frost$collections$IdentityMap** _124;
frost$collections$IdentityMap* _125;
frost$collections$Stack** _128;
frost$collections$Stack* _129;
frost$collections$Array** _132;
frost$collections$Array* _133;
frost$collections$CollectionView* _134;
$fn536 _135;
frost$core$Int _136;
frost$core$Int _138;
int64_t _141;
int64_t _142;
bool _143;
frost$core$Bit _144;
bool _146;
frost$core$Int _148;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:635
_1 = &param0->main;
_2 = *_1;
_3 = _2 == NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:636
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Interpreter.frost:636:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s537);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s538);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:637
_18 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_18);
_20 = (frost$core$Int) {637u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s539, _20, &$s540);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:639
_24 = &param0->main;
_25 = *_24;
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block5; else goto block6;
block6:;
_30 = (frost$core$Int) {639u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s541, _30, &$s542);
abort(); // unreachable
block5:;
_33 = _25;
_34 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray), (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init(_34);
_36 = ($fn543) param0->$class->vtable[23];
_37 = _36(param0, _33, _34);
_38 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:640
_41 = &param0->contexts;
_42 = *_41;
_43 = (org$frostlang$frostc$Interpreter$Context*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$Context), (frost$core$Class*) &org$frostlang$frostc$Interpreter$Context$class);
_44 = (org$frostlang$frostc$Interpreter$Code*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$Code), (frost$core$Class*) &org$frostlang$frostc$Interpreter$Code$class);
_45 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_46 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int(_45, _46);
_48 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_49 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int(_48, _49);
_51 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_52 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int(_51, _52);
_54 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_55 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int(_54, _55);
_57 = (frost$core$Int) {0u};
org$frostlang$frostc$Interpreter$Code$init$frost$collections$Array$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTfrost$core$Int$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT$GT$frost$core$Int(_44, _45, _48, _51, _54, _57);
org$frostlang$frostc$Interpreter$Context$init$org$frostlang$frostc$Interpreter$org$frostlang$frostc$Interpreter$Code(_43, param0, _44);
_60 = ((frost$core$Object*) _43);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Interpreter.frost:640:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_63 = &_42->contents;
_64 = *_63;
_65 = _60;
frost$collections$Array$add$frost$collections$Array$T(_64, _65);
_68 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_74);
_76 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_78);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:641
_81 = &param0->strings;
_82 = *_81;
_83 = ((frost$collections$MapView*) _82);
ITable* $tmp544 = _83->$class->itable;
while ($tmp544->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp544 = $tmp544->next;
}
_84 = $tmp544->methods[5];
_85 = _84(_83);
goto block8;
block8:;
ITable* $tmp545 = _85->$class->itable;
while ($tmp545->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp545 = $tmp545->next;
}
_87 = $tmp545->methods[0];
_88 = _87(_85);
_89 = _88.value;
if (_89) goto block10; else goto block9;
block9:;
ITable* $tmp546 = _85->$class->itable;
while ($tmp546->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp546 = $tmp546->next;
}
_91 = $tmp546->methods[1];
_92 = _91(_85);
_93 = ((frost$core$Int64$wrapper*) _92)->value;
*(&local0) = _93;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:642
_96 = *(&local0);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:642:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_99 = _96.value;
_100 = ((int64_t) _99);
_101 = (frost$core$Int) {_100};
_103 = _101.value;
_104 = ((frost$core$UInt8*) _103);
_105 = ($fn547) param0->$class->vtable[11];
_105(param0, _104);
_107 = _92;
frost$core$Frost$unref$frost$core$Object$Q(_107);
goto block8;
block10:;
_110 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_110);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:644
_113 = &param0->strings;
_114 = *_113;
frost$collections$HashMap$clear(_114);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:645
_117 = &param0->contexts;
_118 = *_117;
_119 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_118);
_120 = ((org$frostlang$frostc$Interpreter$Context*) _119);
_121 = _119;
frost$core$Frost$unref$frost$core$Object$Q(_121);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:646
_124 = &param0->builtins;
_125 = *_124;
frost$collections$IdentityMap$clear(_125);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:647
_128 = &param0->contexts;
_129 = *_128;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Interpreter.frost:647:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_132 = &_129->contents;
_133 = *_132;
_134 = ((frost$collections$CollectionView*) _133);
ITable* $tmp548 = _134->$class->itable;
while ($tmp548->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp548 = $tmp548->next;
}
_135 = $tmp548->methods[0];
_136 = _135(_134);
_138 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:647:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_141 = _136.value;
_142 = _138.value;
_143 = _141 == _142;
_144 = (frost$core$Bit) {_143};
_146 = _144.value;
if (_146) goto block14; else goto block15;
block15:;
_148 = (frost$core$Int) {647u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s549, _148);
abort(); // unreachable
block14:;
return;

}
void org$frostlang$frostc$Interpreter$init(void* rawSelf) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$collections$HashMap* _1;
frost$core$Object* _3;
frost$collections$HashMap** _5;
frost$collections$HashMap* _6;
frost$core$Object* _7;
frost$collections$HashMap** _9;
frost$core$Object* _11;
frost$core$Int _14;
frost$core$Int* _15;
frost$core$Int* _18;
frost$core$Int _19;
frost$core$Int64 _20;
int64_t _21;
frost$core$UInt8* _22;
frost$core$UInt8** _23;
frost$core$UInt8** _26;
frost$core$UInt8* _27;
frost$core$UInt8** _28;
frost$core$Weak* _31;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Weak** _36;
frost$core$Weak* _37;
frost$core$Object* _38;
frost$core$Weak** _40;
frost$core$Object* _42;
frost$collections$IdentityMap* _45;
frost$core$Object* _47;
frost$collections$IdentityMap** _49;
frost$collections$IdentityMap* _50;
frost$core$Object* _51;
frost$collections$IdentityMap** _53;
frost$core$Object* _55;
frost$collections$IdentityMap* _58;
frost$core$Object* _60;
frost$collections$IdentityMap** _62;
frost$collections$IdentityMap* _63;
frost$core$Object* _64;
frost$collections$IdentityMap** _66;
frost$core$Object* _68;
frost$collections$Stack* _71;
frost$core$Object* _73;
frost$collections$Stack** _75;
frost$collections$Stack* _76;
frost$core$Object* _77;
frost$collections$Stack** _79;
frost$core$Object* _81;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:10
_1 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->strings;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->strings;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:12
_14 = (frost$core$Int) {10240u};
_15 = &param0->stackSize;
*_15 = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:14
_18 = &param0->stackSize;
_19 = *_18;
_20 = frost$core$Int64$init$frost$core$Int(_19);
_21 = _20.value;
_22 = ((frost$core$UInt8*) frostAlloc(_21 * sizeof(frost$core$UInt8)));
_23 = &param0->stackBase;
*_23 = _22;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:16
_26 = &param0->stackBase;
_27 = *_26;
_28 = &param0->stack;
*_28 = _27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:176
_31 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_32 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_31, _32);
_34 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = &param0->compiler;
_37 = *_36;
_38 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = &param0->compiler;
*_40 = _31;
_42 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_42);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:180
_45 = (frost$collections$IdentityMap*) frostObjectAlloc(sizeof(frost$collections$IdentityMap), (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init(_45);
_47 = ((frost$core$Object*) _45);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = &param0->methodCode;
_50 = *_49;
_51 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = &param0->methodCode;
*_53 = _45;
_55 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_55);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:182
_58 = (frost$collections$IdentityMap*) frostObjectAlloc(sizeof(frost$collections$IdentityMap), (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init(_58);
_60 = ((frost$core$Object*) _58);
frost$core$Frost$ref$frost$core$Object$Q(_60);
_62 = &param0->builtins;
_63 = *_62;
_64 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_64);
_66 = &param0->builtins;
*_66 = _58;
_68 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_68);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:184
_71 = (frost$collections$Stack*) frostObjectAlloc(sizeof(frost$collections$Stack), (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init(_71);
_73 = ((frost$core$Object*) _71);
frost$core$Frost$ref$frost$core$Object$Q(_73);
_75 = &param0->contexts;
_76 = *_75;
_77 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = &param0->contexts;
*_79 = _71;
_81 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_81);
return;

}
void org$frostlang$frostc$Interpreter$cleanup(void* rawSelf) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Object* _1;
frost$collections$HashMap** _3;
frost$collections$HashMap* _4;
frost$core$Object* _5;
frost$core$Weak** _7;
frost$core$Weak* _8;
frost$core$Object* _9;
org$frostlang$frostc$MemoryLayout** _11;
org$frostlang$frostc$MemoryLayout* _12;
frost$core$Object* _13;
frost$collections$IdentityMap** _15;
frost$collections$IdentityMap* _16;
frost$core$Object* _17;
frost$collections$IdentityMap** _19;
frost$collections$IdentityMap* _20;
frost$core$Object* _21;
frost$collections$Stack** _23;
frost$collections$Stack* _24;
frost$core$Object* _25;
org$frostlang$frostc$MethodDecl** _27;
org$frostlang$frostc$MethodDecl* _28;
frost$core$Object* _29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:9
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->strings;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->compiler;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->memoryLayout;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->methodCode;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->builtins;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = &param0->contexts;
_24 = *_23;
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = &param0->main;
_28 = *_27;
_29 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_29);
return;

}

