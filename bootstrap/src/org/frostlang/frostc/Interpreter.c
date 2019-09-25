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
#include "frost/unsafe/Pointer.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/collections/IdentityMap.h"
#include "org/frostlang/frostc/Interpreter/Code.h"
#include "org/frostlang/frostc/Interpreter/_Closure15.h"
#include "org/frostlang/frostc/Interpreter/_Closure17.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/UInt64.h"
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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

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
typedef frost$unsafe$Pointer (*$fn33)(org$frostlang$frostc$Interpreter*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Int (*$fn34)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn35)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn38)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$unsafe$Pointer (*$fn39)(org$frostlang$frostc$Interpreter*, frost$unsafe$Pointer, frost$core$Int);
typedef frost$core$Int (*$fn40)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn41)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn46)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Object* (*$fn47)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int64 (*$fn48)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn59)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int (*$fn60)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn61)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn62)(org$frostlang$frostc$MemoryLayout*);
typedef void (*$fn63)(org$frostlang$frostc$Interpreter*, frost$unsafe$Pointer);
typedef frost$core$Int (*$fn64)(org$frostlang$frostc$MemoryLayout*);
typedef void (*$fn65)(org$frostlang$frostc$Interpreter*, frost$unsafe$Pointer);
typedef frost$core$Int64 (*$fn66)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn67)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$MutableMethod* (*$fn85)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*);
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
typedef org$frostlang$frostc$Type* (*$fn358)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn359)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn360)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn361)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn362)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn363)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn364)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn365)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn366)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn367)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn368)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn369)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn370)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn371)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn372)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int (*$fn373)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn374)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn375)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn376)(frost$core$Object*);
typedef frost$core$Int64 (*$fn393)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn408)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef void (*$fn426)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$expression$Binary$Operator, org$frostlang$frostc$IR$Value*);
typedef void (*$fn432)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn433)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn444)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn445)(org$frostlang$frostc$MemoryLayout*);
typedef void (*$fn451)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$ClassDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn452)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn454)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef void (*$fn460)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef void (*$fn461)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int64 (*$fn462)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn474)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn475)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn476)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef org$frostlang$frostc$Type* (*$fn487)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn490)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn491)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn492)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn493)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn499)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn500)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn501)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn502)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn503)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn504)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn505)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn508)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn509)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn515)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn516)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn517)(frost$core$Object*);
typedef frost$core$Int64 (*$fn521)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$collections$Iterator* (*$fn522)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn523)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn524)(frost$collections$Iterator*);
typedef void (*$fn525)(org$frostlang$frostc$Interpreter*, frost$unsafe$Pointer);
typedef frost$core$Int (*$fn526)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn533)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef void (*$fn537)(org$frostlang$frostc$Interpreter*, frost$unsafe$Pointer);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72", 32, -3100534405647567570, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6d\x61\x69\x6e", 4, 2258945139493307336, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x61\x6c\x6c\x6f\x63\x61\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e", 139, -7836007591951303402, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x72\x65\x66\x28\x6f\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x29", 66, 8517555090198155938, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x75\x6e\x72\x65\x66\x28\x6f\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x29", 68, -1591211548199132021, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x70\x72\x69\x6e\x74\x28\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 67, -2650786360588262487, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x61\x74\x61\x6c\x20\x65\x72\x72\x6f\x72\x3a\x20", 13, 3817230338345850721, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x62\x79\x20\x74\x68\x65\x20", 25, -9203381872083098346, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72", 11, -6089209956535185587, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3f\x20\x74\x6f\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 293, -7245596308351737427, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3f\x20\x74\x6f\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 293, -7245596308351737427, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20", 18, 4314115219735591667, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x66\x69\x65\x6c\x64\x20\x73\x69\x7a\x65", 22, -5074326750169406355, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x62\x69\x6e\x61\x72\x79\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x20\x27", 29, 2922146385210293486, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x3a\x20", 23, 7177047828670113807, NULL };
static frost$core$String $s519 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6e\x6f\x20\x6d\x61\x69\x6e\x20\x6d\x65\x74\x68\x6f\x64", 14, 8684458706139196112, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, 7363539685333061901, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };

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
int64_t _4;
frost$core$Method* _5;
int64_t* _8;
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
int64_t _32;
frost$core$MutableMethod* _33;
frost$core$Object* _34;
int64_t* _37;
frost$core$Object** _41;
frost$core$Object* _42;
frost$core$Object** _44;
frost$core$MutableMethod* _47;
$fn2 _48;
frost$collections$Array* _49;
frost$collections$CollectionView* _50;
int64_t _51;
frost$core$Method* _52;
int64_t* _55;
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
int64_t _79;
frost$core$MutableMethod* _80;
frost$core$Object* _81;
int64_t* _84;
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
_4 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$$anonymous9$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Int).value;
_5 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Interpreter.frost:222:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_8 = &_5->pointer;
*_8 = _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
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
_32 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$_Closure11$$anonymous10$frost$collections$CollectionView$T$R$frost$collections$CollectionView$map$U).value;
_33 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_34 = ((frost$core$Object*) _29);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Interpreter.frost:222:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_37 = &_33->pointer;
*_37 = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
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
_51 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &frost$core$Int$max$frost$core$Int$R$frost$core$Int).value;
_52 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Interpreter.frost:222:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_55 = &_52->pointer;
*_55 = _51;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
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
_79 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$_Closure13$$anonymous12$frost$collections$CollectionView$T$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T).value;
_80 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_81 = ((frost$core$Object*) _76);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Interpreter.frost:222:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_84 = &_80->pointer;
*_84 = _79;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
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
frost$unsafe$Pointer* _110;
frost$unsafe$Pointer _111;
int64_t _112;
frost$core$Int64 _113;
int64_t _114;
frost$core$Object* _115;
frost$core$Object* _116;
org$frostlang$frostc$IR$Block* _119;
org$frostlang$frostc$IR$Block$ID* _120;
org$frostlang$frostc$IR$Block$ID _121;
frost$core$Int _122;
frost$core$Object* _124;
frost$collections$Array* _128;
frost$collections$CollectionView* _129;
$fn9 _130;
frost$core$Int _131;
frost$core$Int _132;
int64_t _133;
int64_t _134;
bool _135;
frost$core$Bit _136;
bool _137;
frost$collections$Array* _140;
frost$core$Int _141;
frost$core$Object* _142;
frost$core$Object* _144;
frost$collections$Array* _148;
frost$core$Int _149;
frost$core$Int _150;
frost$core$Object* _151;
frost$core$Int _153;
int64_t _154;
int64_t _155;
bool _156;
frost$core$Bit _157;
bool _158;
frost$collections$CollectionView* _160;
$fn10 _161;
frost$core$Int _162;
int64_t _163;
int64_t _164;
bool _165;
frost$core$Bit _166;
bool _167;
frost$core$Int _169;
frost$unsafe$Pointer* _173;
frost$unsafe$Pointer _174;
int64_t _175;
frost$core$Int64 _176;
int64_t _177;
frost$core$Object* _178;
frost$core$Object* _180;
frost$core$Object* _181;
frost$core$Object* _185;
frost$core$Int _188;
int64_t _189;
int64_t _190;
int64_t _191;
frost$core$Int _192;
int64_t _194;
int64_t _195;
bool _196;
frost$core$Bit _197;
bool _198;
int64_t _200;
int64_t _201;
bool _202;
frost$core$Bit _203;
bool _204;
int64_t _206;
int64_t _207;
int64_t _208;
frost$core$Int _209;
frost$collections$IdentityMap** _213;
frost$collections$IdentityMap* _214;
frost$core$Object* _215;
org$frostlang$frostc$Interpreter$Code* _216;
frost$collections$Array** _217;
frost$collections$Array* _218;
frost$collections$Array* _219;
frost$collections$Array** _220;
frost$collections$Array* _221;
frost$collections$CollectionView* _222;
int64_t _223;
frost$core$Method* _224;
int64_t* _227;
frost$core$Object* _230;
frost$core$Immutable** _232;
frost$core$Immutable* _233;
frost$core$Object* _234;
frost$core$Immutable** _236;
frost$core$Method* _239;
frost$core$MutableMethod* _240;
frost$core$MutableMethod* _241;
$fn11 _242;
frost$collections$Array* _243;
frost$collections$Array** _244;
frost$collections$Array* _245;
frost$collections$CollectionView* _246;
int64_t _247;
frost$core$Method* _248;
int64_t* _251;
frost$core$Object* _254;
frost$core$Immutable** _256;
frost$core$Immutable* _257;
frost$core$Object* _258;
frost$core$Immutable** _260;
frost$core$Method* _263;
frost$core$MutableMethod* _264;
frost$core$MutableMethod* _265;
$fn12 _266;
frost$collections$Array* _267;
frost$collections$Array** _268;
frost$collections$Array* _269;
frost$collections$CollectionView* _270;
int64_t _271;
frost$core$Method* _272;
int64_t* _275;
frost$core$Object* _278;
frost$core$Immutable** _280;
frost$core$Immutable* _281;
frost$core$Object* _282;
frost$core$Immutable** _284;
frost$core$Method* _287;
frost$core$MutableMethod* _288;
frost$core$Object* _290;
frost$core$MutableMethod* _292;
frost$core$Object* _293;
org$frostlang$frostc$Interpreter$_Closure15* _296;
frost$core$MutableMethod* _297;
int64_t _299;
frost$core$MutableMethod* _300;
frost$core$Object* _301;
int64_t* _304;
frost$core$Object** _308;
frost$core$Object* _309;
frost$core$Object** _311;
frost$core$MutableMethod* _314;
$fn13 _315;
frost$collections$Array* _316;
frost$collections$CollectionView* _317;
int64_t _318;
frost$core$Method* _319;
int64_t* _322;
frost$core$Object* _325;
frost$core$Immutable** _327;
frost$core$Immutable* _328;
frost$core$Object* _329;
frost$core$Immutable** _331;
frost$core$Method* _334;
frost$core$MutableMethod* _335;
frost$core$Object* _337;
frost$core$MutableMethod* _339;
frost$core$Object* _340;
org$frostlang$frostc$Interpreter$_Closure17* _343;
frost$core$MutableMethod* _344;
int64_t _346;
frost$core$MutableMethod* _347;
frost$core$Object* _348;
int64_t* _351;
frost$core$Object** _355;
frost$core$Object* _356;
frost$core$Object** _358;
frost$core$MutableMethod* _361;
$fn14 _362;
frost$core$Object* _363;
frost$core$Int _364;
frost$core$Object* _366;
frost$core$Object* _368;
frost$core$Object* _370;
frost$core$Object* _372;
frost$core$MutableMethod* _374;
frost$core$Object* _375;
frost$core$Object* _378;
frost$core$Object* _380;
frost$core$Object* _382;
frost$core$Object* _384;
frost$core$MutableMethod* _386;
frost$core$Object* _387;
frost$core$Object* _390;
frost$core$Object* _392;
frost$core$Object* _394;
frost$core$Object* _396;
frost$core$Object* _398;
frost$core$Object* _400;
frost$collections$Array* _402;
frost$core$Object* _403;
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
_112 = _111.value;
_113 = frost$core$Int64$init$frost$core$Int(_88);
_114 = _113.value;
_115 = ((frost$core$Object**)_112)[_114];
_116 = _115;
frost$core$Frost$ref$frost$core$Object$Q(_116);
_119 = ((org$frostlang$frostc$IR$Block*) _115);
_120 = &_119->id;
_121 = *_120;
_122 = _121.value;
*(&local2) = _122;
_124 = _115;
frost$core$Frost$unref$frost$core$Object$Q(_124);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:214
goto block15;
block15:;
_128 = *(&local0);
_129 = ((frost$collections$CollectionView*) _128);
ITable* $tmp21 = _129->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
_130 = $tmp21->methods[0];
_131 = _130(_129);
_132 = *(&local2);
_133 = _131.value;
_134 = _132.value;
_135 = _133 <= _134;
_136 = (frost$core$Bit) {_135};
_137 = _136.value;
if (_137) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:215
_140 = *(&local0);
_141 = (frost$core$Int) {18446744073709551615u};
frost$core$Int$wrapper* $tmp22;
$tmp22 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp22->value = _141;
_142 = ((frost$core$Object*) $tmp22);
frost$collections$Array$add$frost$collections$Array$T(_140, _142);
_144 = _142;
frost$core$Frost$unref$frost$core$Object$Q(_144);
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:217
_148 = *(&local0);
_149 = *(&local2);
_150 = *(&local1);
frost$core$Int$wrapper* $tmp23;
$tmp23 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp23->value = _150;
_151 = ((frost$core$Object*) $tmp23);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:217:21
_153 = (frost$core$Int) {0u};
_154 = _149.value;
_155 = _153.value;
_156 = _154 >= _155;
_157 = (frost$core$Bit) {_156};
_158 = _157.value;
if (_158) goto block21; else goto block20;
block21:;
_160 = ((frost$collections$CollectionView*) _148);
ITable* $tmp24 = _160->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp24 = $tmp24->next;
}
_161 = $tmp24->methods[0];
_162 = _161(_160);
_163 = _149.value;
_164 = _162.value;
_165 = _163 < _164;
_166 = (frost$core$Bit) {_165};
_167 = _166.value;
if (_167) goto block19; else goto block20;
block20:;
_169 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s25, _169, &$s26);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_173 = &_148->data;
_174 = *_173;
_175 = _174.value;
_176 = frost$core$Int64$init$frost$core$Int(_149);
_177 = _176.value;
_178 = _151;
frost$core$Frost$ref$frost$core$Object$Q(_178);
_180 = ((frost$core$Object**)_175)[_177];
_181 = _180;
frost$core$Frost$unref$frost$core$Object$Q(_181);
((frost$core$Object**)_175)[_177] = _151;
_185 = _151;
frost$core$Frost$unref$frost$core$Object$Q(_185);
_188 = *(&local1);
_189 = _68.value;
_190 = _188.value;
_191 = _189 - _190;
_192 = (frost$core$Int) {_191};
if (_70) goto block23; else goto block24;
block23:;
_194 = _192.value;
_195 = _71.value;
_196 = _194 >= _195;
_197 = (frost$core$Bit) {_196};
_198 = _197.value;
if (_198) goto block22; else goto block7;
block24:;
_200 = _192.value;
_201 = _71.value;
_202 = _200 > _201;
_203 = (frost$core$Bit) {_202};
_204 = _203.value;
if (_204) goto block22; else goto block7;
block22:;
_206 = _188.value;
_207 = _71.value;
_208 = _206 + _207;
_209 = (frost$core$Int) {_208};
*(&local1) = _209;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:219
_213 = &param0->methodCode;
_214 = *_213;
_215 = ((frost$core$Object*) param1);
_216 = (org$frostlang$frostc$Interpreter$Code*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$Code), (frost$core$Class*) &org$frostlang$frostc$Interpreter$Code$class);
_217 = &param2->locals;
_218 = *_217;
_219 = *(&local0);
_220 = &param2->blocks;
_221 = *_220;
_222 = ((frost$collections$CollectionView*) _221);
_223 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$$anonymous1$org$frostlang$frostc$IR$Block$R$frost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT).value;
_224 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Interpreter.frost:220:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_227 = &_224->pointer;
*_227 = _223;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_230 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_230);
_232 = &_224->target;
_233 = *_232;
_234 = ((frost$core$Object*) _233);
frost$core$Frost$unref$frost$core$Object$Q(_234);
_236 = &_224->target;
*_236 = ((frost$core$Immutable*) NULL);
_239 = _224;
_240 = ((frost$core$MutableMethod*) _239);
_241 = _240;
ITable* $tmp27 = _222->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp27 = $tmp27->next;
}
_242 = $tmp27->methods[9];
_243 = _242(_222, _241);
_244 = &param2->blocks;
_245 = *_244;
_246 = ((frost$collections$CollectionView*) _245);
_247 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$$anonymous2$org$frostlang$frostc$IR$Block$R$frost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT).value;
_248 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Interpreter.frost:221:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_251 = &_248->pointer;
*_251 = _247;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_254 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_254);
_256 = &_248->target;
_257 = *_256;
_258 = ((frost$core$Object*) _257);
frost$core$Frost$unref$frost$core$Object$Q(_258);
_260 = &_248->target;
*_260 = ((frost$core$Immutable*) NULL);
_263 = _248;
_264 = ((frost$core$MutableMethod*) _263);
_265 = _264;
ITable* $tmp28 = _246->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
_266 = $tmp28->methods[9];
_267 = _266(_246, _265);
_268 = &param2->blocks;
_269 = *_268;
_270 = ((frost$collections$CollectionView*) _269);
_271 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$$anonymous3$org$frostlang$frostc$IR$Block$R$frost$core$Int).value;
_272 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Interpreter.frost:222:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_275 = &_272->pointer;
*_275 = _271;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_278 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_278);
_280 = &_272->target;
_281 = *_280;
_282 = ((frost$core$Object*) _281);
frost$core$Frost$unref$frost$core$Object$Q(_282);
_284 = &_272->target;
*_284 = ((frost$core$Immutable*) NULL);
_287 = _272;
_288 = ((frost$core$MutableMethod*) _287);
*(&local3) = ((frost$core$MutableMethod*) NULL);
_290 = ((frost$core$Object*) _288);
frost$core$Frost$ref$frost$core$Object$Q(_290);
_292 = *(&local3);
_293 = ((frost$core$Object*) _292);
frost$core$Frost$unref$frost$core$Object$Q(_293);
*(&local3) = _288;
_296 = (org$frostlang$frostc$Interpreter$_Closure15*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$_Closure15), (frost$core$Class*) &org$frostlang$frostc$Interpreter$_Closure15$class);
_297 = *(&local3);
org$frostlang$frostc$Interpreter$_Closure15$init$$LPorg$frostlang$frostc$IR$Block$RP$EQ$GT$LPfrost$core$Int$RP(_296, _297);
_299 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$_Closure15$$anonymous14$frost$collections$CollectionView$T$R$frost$collections$CollectionView$map$U).value;
_300 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_301 = ((frost$core$Object*) _296);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Interpreter.frost:222:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_304 = &_300->pointer;
*_304 = _299;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
frost$core$Frost$ref$frost$core$Object$Q(_301);
_308 = &_300->target;
_309 = *_308;
frost$core$Frost$unref$frost$core$Object$Q(_309);
_311 = &_300->target;
*_311 = _301;
_314 = _300;
ITable* $tmp29 = _270->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp29 = $tmp29->next;
}
_315 = $tmp29->methods[9];
_316 = _315(_270, _314);
_317 = ((frost$collections$CollectionView*) _316);
_318 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &frost$core$Int$max$frost$core$Int$R$frost$core$Int).value;
_319 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Interpreter.frost:222:85
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_322 = &_319->pointer;
*_322 = _318;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_325 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_325);
_327 = &_319->target;
_328 = *_327;
_329 = ((frost$core$Object*) _328);
frost$core$Frost$unref$frost$core$Object$Q(_329);
_331 = &_319->target;
*_331 = ((frost$core$Immutable*) NULL);
_334 = _319;
_335 = ((frost$core$MutableMethod*) _334);
*(&local4) = ((frost$core$MutableMethod*) NULL);
_337 = ((frost$core$Object*) _335);
frost$core$Frost$ref$frost$core$Object$Q(_337);
_339 = *(&local4);
_340 = ((frost$core$Object*) _339);
frost$core$Frost$unref$frost$core$Object$Q(_340);
*(&local4) = _335;
_343 = (org$frostlang$frostc$Interpreter$_Closure17*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$_Closure17), (frost$core$Class*) &org$frostlang$frostc$Interpreter$_Closure17$class);
_344 = *(&local4);
org$frostlang$frostc$Interpreter$_Closure17$init$$LPfrost$core$Int$Cfrost$core$Int$RP$EQ$GT$LPfrost$core$Int$RP(_343, _344);
_346 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$_Closure17$$anonymous16$frost$collections$CollectionView$T$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T).value;
_347 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_348 = ((frost$core$Object*) _343);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Interpreter.frost:222:81
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_351 = &_347->pointer;
*_351 = _346;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
frost$core$Frost$ref$frost$core$Object$Q(_348);
_355 = &_347->target;
_356 = *_355;
frost$core$Frost$unref$frost$core$Object$Q(_356);
_358 = &_347->target;
*_358 = _348;
_361 = _347;
ITable* $tmp30 = _317->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
_362 = $tmp30->methods[4];
_363 = _362(_317, _361);
_364 = ((frost$core$Int$wrapper*) _363)->value;
org$frostlang$frostc$Interpreter$Code$init$frost$collections$Array$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTfrost$core$Int$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT$GT$frost$core$Int(_216, _218, _219, _243, _267, _364);
_366 = ((frost$core$Object*) _216);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(_214, _215, _366);
_368 = _363;
frost$core$Frost$unref$frost$core$Object$Q(_368);
_370 = ((frost$core$Object*) _347);
frost$core$Frost$unref$frost$core$Object$Q(_370);
_372 = ((frost$core$Object*) _343);
frost$core$Frost$unref$frost$core$Object$Q(_372);
_374 = *(&local4);
_375 = ((frost$core$Object*) _374);
frost$core$Frost$unref$frost$core$Object$Q(_375);
*(&local4) = ((frost$core$MutableMethod*) NULL);
_378 = ((frost$core$Object*) _319);
frost$core$Frost$unref$frost$core$Object$Q(_378);
_380 = ((frost$core$Object*) _316);
frost$core$Frost$unref$frost$core$Object$Q(_380);
_382 = ((frost$core$Object*) _300);
frost$core$Frost$unref$frost$core$Object$Q(_382);
_384 = ((frost$core$Object*) _296);
frost$core$Frost$unref$frost$core$Object$Q(_384);
_386 = *(&local3);
_387 = ((frost$core$Object*) _386);
frost$core$Frost$unref$frost$core$Object$Q(_387);
*(&local3) = ((frost$core$MutableMethod*) NULL);
_390 = ((frost$core$Object*) _272);
frost$core$Frost$unref$frost$core$Object$Q(_390);
_392 = ((frost$core$Object*) _267);
frost$core$Frost$unref$frost$core$Object$Q(_392);
_394 = ((frost$core$Object*) _248);
frost$core$Frost$unref$frost$core$Object$Q(_394);
_396 = ((frost$core$Object*) _243);
frost$core$Frost$unref$frost$core$Object$Q(_396);
_398 = ((frost$core$Object*) _224);
frost$core$Frost$unref$frost$core$Object$Q(_398);
_400 = ((frost$core$Object*) _216);
frost$core$Frost$unref$frost$core$Object$Q(_400);
_402 = *(&local0);
_403 = ((frost$core$Object*) _402);
frost$core$Frost$unref$frost$core$Object$Q(_403);
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$Interpreter$finish(void* rawSelf) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

return;

}
frost$unsafe$Pointer org$frostlang$frostc$Interpreter$align$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, frost$unsafe$Pointer param1, frost$core$Int param2) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int local0;
int64_t _3;
frost$core$Int _4;
int64_t _8;
int64_t _9;
int64_t _10;
frost$core$Int _11;
frost$core$Int _15;
frost$core$Int _16;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _21;
int64_t _26;
frost$core$Int _27;
int64_t _29;
int64_t _30;
int64_t _31;
frost$core$Int _32;
frost$core$Int _33;
int64_t _34;
int64_t _35;
int64_t _36;
frost$core$Int _37;
frost$unsafe$Pointer _38;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:230
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:230:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_3 = param1.value;
_4 = (frost$core$Int) {_3};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Interpreter.frost:230:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_8 = _4.value;
_9 = param2.value;
_10 = _8 % _9;
_11 = (frost$core$Int) {_10};
*(&local0) = _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:231
_15 = *(&local0);
_16 = (frost$core$Int) {0u};
_17 = _15.value;
_18 = _16.value;
_19 = _17 != _18;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:232
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:232:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_26 = param1.value;
_27 = (frost$core$Int) {_26};
_29 = _27.value;
_30 = param2.value;
_31 = _29 + _30;
_32 = (frost$core$Int) {_31};
_33 = *(&local0);
_34 = _32.value;
_35 = _33.value;
_36 = _34 - _35;
_37 = (frost$core$Int) {_36};
_38 = frost$unsafe$Pointer$init$frost$core$Int(_37);
return _38;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:234
return param1;

}
frost$unsafe$Pointer org$frostlang$frostc$Interpreter$alloca$org$frostlang$frostc$Type$R$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, org$frostlang$frostc$Type* param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$unsafe$Pointer local0;
frost$unsafe$Pointer* _0;
frost$unsafe$Pointer _1;
int64_t _4;
frost$core$Int _5;
frost$unsafe$Pointer* _7;
frost$unsafe$Pointer _8;
int64_t _11;
frost$core$Int _12;
int64_t _14;
int64_t _15;
int64_t _16;
frost$core$Int _17;
org$frostlang$frostc$MemoryLayout** _18;
org$frostlang$frostc$MemoryLayout* _19;
$fn31 _20;
frost$core$Int _21;
int64_t _22;
int64_t _23;
int64_t _24;
frost$core$Int _25;
frost$core$Int* _26;
frost$core$Int _27;
frost$core$Int _28;
int64_t _29;
int64_t _30;
int64_t _31;
frost$core$Int _32;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$core$Int _39;
frost$unsafe$Pointer* _43;
frost$unsafe$Pointer _44;
org$frostlang$frostc$MemoryLayout** _45;
org$frostlang$frostc$MemoryLayout* _46;
$fn32 _47;
frost$core$Int _48;
$fn33 _49;
frost$unsafe$Pointer _50;
frost$unsafe$Pointer* _51;
frost$unsafe$Pointer* _54;
frost$unsafe$Pointer _55;
frost$unsafe$Pointer* _58;
frost$unsafe$Pointer _59;
int64_t _62;
frost$core$Int _63;
org$frostlang$frostc$MemoryLayout** _65;
org$frostlang$frostc$MemoryLayout* _66;
$fn34 _67;
frost$core$Int _68;
int64_t _69;
int64_t _70;
int64_t _71;
frost$core$Int _72;
frost$unsafe$Pointer _73;
frost$unsafe$Pointer* _74;
frost$unsafe$Pointer _77;
_0 = &param0->stack;
_1 = *_0;
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:238:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_4 = _1.value;
_5 = (frost$core$Int) {_4};
_7 = &param0->stackBase;
_8 = *_7;
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:238:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_11 = _8.value;
_12 = (frost$core$Int) {_11};
_14 = _5.value;
_15 = _12.value;
_16 = _14 - _15;
_17 = (frost$core$Int) {_16};
_18 = &param0->memoryLayout;
_19 = *_18;
_20 = ($fn35) _19->$class->vtable[7];
_21 = _20(_19, param1);
_22 = _17.value;
_23 = _21.value;
_24 = _22 + _23;
_25 = (frost$core$Int) {_24};
_26 = &param0->stackSize;
_27 = *_26;
_28 = (frost$core$Int) {8u};
_29 = _27.value;
_30 = _28.value;
_31 = _29 - _30;
_32 = (frost$core$Int) {_31};
_33 = _25.value;
_34 = _32.value;
_35 = _33 < _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block1; else goto block2;
block2:;
_39 = (frost$core$Int) {239u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s36, _39, &$s37);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:240
_43 = &param0->stack;
_44 = *_43;
_45 = &param0->memoryLayout;
_46 = *_45;
_47 = ($fn38) _46->$class->vtable[5];
_48 = _47(_46, param1);
_49 = ($fn39) param0->$class->vtable[8];
_50 = _49(param0, _44, _48);
_51 = &param0->stack;
*_51 = _50;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:241
_54 = &param0->stack;
_55 = *_54;
*(&local0) = _55;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:242
_58 = &param0->stack;
_59 = *_58;
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:242:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_62 = _59.value;
_63 = (frost$core$Int) {_62};
_65 = &param0->memoryLayout;
_66 = *_65;
_67 = ($fn40) _66->$class->vtable[7];
_68 = _67(_66, param1);
_69 = _63.value;
_70 = _68.value;
_71 = _69 + _70;
_72 = (frost$core$Int) {_71};
_73 = frost$unsafe$Pointer$init$frost$core$Int(_72);
_74 = &param0->stack;
*_74 = _73;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:243
_77 = *(&local0);
return _77;

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
void org$frostlang$frostc$Interpreter$destroyObject$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, frost$unsafe$Pointer param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$MethodDecl* local1 = NULL;
int64_t _1;
frost$core$Int _2;
frost$unsafe$Pointer _3;
org$frostlang$frostc$ClassDecl* _4;
frost$core$Object* _6;
org$frostlang$frostc$ClassDecl* _8;
frost$core$Object* _9;
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
org$frostlang$frostc$Compiler* _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$core$Int _39;
org$frostlang$frostc$Compiler* _42;
org$frostlang$frostc$ClassDecl* _43;
frost$collections$ListView* _44;
frost$core$Int _45;
$fn47 _46;
frost$core$Object* _47;
org$frostlang$frostc$MethodDecl* _48;
frost$core$Object* _50;
org$frostlang$frostc$MethodDecl* _52;
frost$core$Object* _53;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _60;
org$frostlang$frostc$MethodDecl* _63;
org$frostlang$frostc$FixedArray* _64;
frost$collections$Array* _65;
frost$core$Int _66;
org$frostlang$frostc$IR$Value* _68;
frost$core$Int _69;
int64_t _72;
frost$core$Int _73;
int64_t _77;
uint64_t _78;
frost$core$UInt64 _79;
frost$core$Weak** _81;
frost$core$Weak* _82;
frost$core$Bit* _87;
frost$core$Bit _88;
bool _90;
frost$core$Int _92;
frost$core$Object** _96;
frost$core$Object* _97;
frost$core$Object* _98;
frost$core$Object* _99;
org$frostlang$frostc$Compiler* _102;
bool _103;
frost$core$Bit _104;
bool _105;
frost$core$Int _107;
org$frostlang$frostc$Compiler* _110;
org$frostlang$frostc$Type** _111;
org$frostlang$frostc$Type* _112;
frost$core$Object* _114;
frost$collections$ListView* _116;
$fn48 _118;
frost$core$Int64 _119;
frost$core$Object* _120;
frost$core$Object* _122;
frost$core$Object* _124;
frost$core$Object* _126;
int64_t _131;
org$frostlang$frostc$MethodDecl* _134;
frost$core$Object* _135;
org$frostlang$frostc$ClassDecl* _138;
frost$core$Object* _139;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:257
_1 = param1.value;
_2 = *((frost$core$Int*)_1);
_3 = frost$unsafe$Pointer$init$frost$core$Int(_2);
frost$unsafe$Pointer$wrapper* $tmp49;
$tmp49 = (frost$unsafe$Pointer$wrapper*) frostObjectAlloc(sizeof(frost$unsafe$Pointer$wrapper), (frost$core$Class*) &frost$unsafe$Pointer$wrapperclass);
$tmp49->value = _3;
_4 = ((org$frostlang$frostc$ClassDecl*) $tmp49);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
_6 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = *(&local0);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
*(&local0) = _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:258
_13 = &param0->compiler;
_14 = *_13;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:258:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_19 = &_14->_valid;
_20 = *_19;
_22 = _20.value;
if (_22) goto block3; else goto block4;
block4:;
_24 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _24, &$s51);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_28 = &_14->value;
_29 = *_28;
_30 = _29;
_31 = _30;
frost$core$Frost$ref$frost$core$Object$Q(_31);
_34 = ((org$frostlang$frostc$Compiler*) _30);
_35 = _34 != NULL;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block5; else goto block6;
block6:;
_39 = (frost$core$Int) {258u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, _39, &$s53);
abort(); // unreachable
block5:;
_42 = _34;
_43 = *(&local0);
_44 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_42, _43);
_45 = (frost$core$Int) {1u};
ITable* $tmp54 = _44->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp54 = $tmp54->next;
}
_46 = $tmp54->methods[0];
_47 = _46(_44, _45);
_48 = ((org$frostlang$frostc$MethodDecl*) _47);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
_50 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local1);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local1) = _48;
_56 = _47;
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = _30;
frost$core$Frost$unref$frost$core$Object$Q(_60);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:259
_63 = *(&local1);
_64 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray), (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
_65 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_66 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_65, _66);
_68 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_69 = (frost$core$Int) {1u};
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:259:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_72 = param1.value;
_73 = (frost$core$Int) {_72};
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Interpreter.frost:259:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_77 = _73.value;
_78 = ((uint64_t) _77);
_79 = (frost$core$UInt64) {_78};
_81 = &param0->compiler;
_82 = *_81;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:260:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_87 = &_82->_valid;
_88 = *_87;
_90 = _88.value;
if (_90) goto block11; else goto block12;
block12:;
_92 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s55, _92, &$s56);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_96 = &_82->value;
_97 = *_96;
_98 = _97;
_99 = _98;
frost$core$Frost$ref$frost$core$Object$Q(_99);
_102 = ((org$frostlang$frostc$Compiler*) _98);
_103 = _102 != NULL;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block13; else goto block14;
block14:;
_107 = (frost$core$Int) {260u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s57, _107, &$s58);
abort(); // unreachable
block13:;
_110 = _102;
_111 = &_110->INVALID_TYPE;
_112 = *_111;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Type(_68, _69, _79, _112);
_114 = ((frost$core$Object*) _68);
frost$collections$Array$add$frost$collections$Array$T(_65, _114);
_116 = ((frost$collections$ListView*) _65);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT(_64, _116);
_118 = ($fn59) param0->$class->vtable[23];
_119 = _118(param0, _63, _64);
_120 = _98;
frost$core$Frost$unref$frost$core$Object$Q(_120);
_122 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_122);
_124 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_124);
_126 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_126);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:262
// begin inline call to method frost.unsafe.Pointer.destroy() from Interpreter.frost:262:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:132
_131 = param1.value;
frost$core$Frost$destroy$builtin_int(_131);
_134 = *(&local1);
_135 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_135);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
_138 = *(&local0);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_139);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;

}
void org$frostlang$frostc$Interpreter$ref$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, frost$unsafe$Pointer param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

int64_t local0;
int64_t local1;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
frost$unsafe$Pointer local4;
frost$core$Int32 local5;
int64_t _3;
frost$core$Int _4;
frost$core$Int _6;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _14;
org$frostlang$frostc$MemoryLayout** _19;
org$frostlang$frostc$MemoryLayout* _20;
$fn60 _21;
frost$core$Int _22;
int64_t _25;
int64_t _30;
int64_t _31;
int64_t _32;
int64_t _33;
int64_t _34;
int64_t* _37;
frost$unsafe$Pointer _39;
frost$unsafe$Pointer _42;
frost$unsafe$Pointer _46;
int64_t _47;
frost$core$Int32 _48;
frost$core$Int32 _51;
frost$core$Int _52;
int64_t _55;
int32_t _56;
frost$core$Int32 _57;
int32_t _61;
int32_t _62;
bool _63;
frost$core$Bit _64;
bool _66;
frost$unsafe$Pointer _71;
int64_t _72;
frost$core$Int32 _73;
frost$core$Int32 _74;
int32_t _75;
int32_t _76;
int32_t _77;
frost$core$Int32 _78;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:266
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:266:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_3 = param1.value;
_4 = (frost$core$Int) {_3};
_6 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:266:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_9 = _4.value;
_10 = _6.value;
_11 = _9 == _10;
_12 = (frost$core$Bit) {_11};
_14 = _12.value;
if (_14) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:267
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:269
_19 = &param0->memoryLayout;
_20 = *_19;
_21 = ($fn61) _20->$class->vtable[3];
_22 = _21(_20);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:269:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_25 = _22.value;
*(&local0) = _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local1) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_30 = param1.value;
_31 = *(&local0);
_32 = *(&local1);
_33 = _31 * _32;
_34 = _30 + _33;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_37 = &(&local3)->value;
*_37 = _34;
_39 = *(&local3);
*(&local2) = _39;
_42 = *(&local2);
*(&local4) = _42;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:270
_46 = *(&local4);
_47 = _46.value;
_48 = *((frost$core$Int32*)_47);
*(&local5) = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:271
_51 = *(&local5);
_52 = (frost$core$Int) {18446744073709550617u};
// begin inline call to function frost.core.Int.get_asInt32():frost.core.Int32 from Interpreter.frost:271:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:973
_55 = _52.value;
_56 = ((int32_t) _55);
_57 = (frost$core$Int32) {_56};
// begin inline call to function frost.core.Int32.=(other:frost.core.Int32):frost.core.Bit from Interpreter.frost:271:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:413
_61 = _51.value;
_62 = _57.value;
_63 = _61 == _62;
_64 = (frost$core$Bit) {_63};
_66 = _64.value;
if (_66) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:272
return;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:274
_71 = *(&local4);
_72 = _71.value;
_73 = *(&local5);
_74 = (frost$core$Int32) {1u};
_75 = _73.value;
_76 = _74.value;
_77 = _75 + _76;
_78 = (frost$core$Int32) {_77};
*((frost$core$Int32*)_72) = _78;
return;

}
void org$frostlang$frostc$Interpreter$unref$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, frost$unsafe$Pointer param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

int64_t local0;
int64_t local1;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
frost$unsafe$Pointer local4;
frost$core$Int32 local5;
int64_t _3;
frost$core$Int _4;
frost$core$Int _6;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _14;
org$frostlang$frostc$MemoryLayout** _19;
org$frostlang$frostc$MemoryLayout* _20;
$fn62 _21;
frost$core$Int _22;
int64_t _25;
int64_t _30;
int64_t _31;
int64_t _32;
int64_t _33;
int64_t _34;
int64_t* _37;
frost$unsafe$Pointer _39;
frost$unsafe$Pointer _42;
frost$unsafe$Pointer _46;
int64_t _47;
frost$core$Int32 _48;
frost$core$Int32 _51;
frost$core$Int _52;
int64_t _55;
int32_t _56;
frost$core$Int32 _57;
int32_t _61;
int32_t _62;
bool _63;
frost$core$Bit _64;
bool _66;
frost$core$Int32 _71;
frost$core$Int32 _72;
int32_t _75;
int32_t _76;
bool _77;
frost$core$Bit _78;
bool _80;
$fn63 _83;
frost$unsafe$Pointer _88;
int64_t _89;
frost$core$Int32 _90;
frost$core$Int32 _91;
int32_t _92;
int32_t _93;
int32_t _94;
frost$core$Int32 _95;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:278
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:278:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_3 = param1.value;
_4 = (frost$core$Int) {_3};
_6 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:278:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_9 = _4.value;
_10 = _6.value;
_11 = _9 == _10;
_12 = (frost$core$Bit) {_11};
_14 = _12.value;
if (_14) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:279
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:281
_19 = &param0->memoryLayout;
_20 = *_19;
_21 = ($fn64) _20->$class->vtable[3];
_22 = _21(_20);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:281:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_25 = _22.value;
*(&local0) = _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local1) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_30 = param1.value;
_31 = *(&local0);
_32 = *(&local1);
_33 = _31 * _32;
_34 = _30 + _33;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_37 = &(&local3)->value;
*_37 = _34;
_39 = *(&local3);
*(&local2) = _39;
_42 = *(&local2);
*(&local4) = _42;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:282
_46 = *(&local4);
_47 = _46.value;
_48 = *((frost$core$Int32*)_47);
*(&local5) = _48;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:283
_51 = *(&local5);
_52 = (frost$core$Int) {18446744073709550617u};
// begin inline call to function frost.core.Int.get_asInt32():frost.core.Int32 from Interpreter.frost:283:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:973
_55 = _52.value;
_56 = ((int32_t) _55);
_57 = (frost$core$Int32) {_56};
// begin inline call to function frost.core.Int32.=(other:frost.core.Int32):frost.core.Bit from Interpreter.frost:283:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:413
_61 = _51.value;
_62 = _57.value;
_63 = _61 == _62;
_64 = (frost$core$Bit) {_63};
_66 = _64.value;
if (_66) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:284
return;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:286
_71 = *(&local5);
_72 = (frost$core$Int32) {1u};
// begin inline call to function frost.core.Int32.=(other:frost.core.Int32):frost.core.Bit from Interpreter.frost:286:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:413
_75 = _71.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
if (_80) goto block11; else goto block13;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:287
_83 = ($fn65) param0->$class->vtable[11];
_83(param0, param1);
goto block12;
block13:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:290
_88 = *(&local4);
_89 = _88.value;
_90 = *(&local5);
_91 = (frost$core$Int32) {1u};
_92 = _90.value;
_93 = _91.value;
_94 = _92 - _93;
_95 = (frost$core$Int32) {_94};
*((frost$core$Int32*)_89) = _95;
goto block12;
block12:;
return;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$$anonymous22$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(org$frostlang$frostc$Interpreter$Context* param0, org$frostlang$frostc$FixedArray* param1) {

frost$core$Int local0;
frost$core$String* local1 = NULL;
frost$core$Int _1;
frost$core$Object* _2;
org$frostlang$frostc$IR$Value* _3;
$fn66 _4;
frost$core$Int64 _5;
int64_t _8;
int64_t _9;
frost$core$Int _10;
frost$core$Object* _13;
frost$core$Int _16;
frost$unsafe$Pointer _17;
frost$core$String* _18;
frost$core$Object* _20;
frost$core$String* _22;
frost$core$Object* _23;
frost$core$String* _27;
frost$core$Int64 _30;
frost$core$String* _31;
frost$core$Object* _32;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:313
_1 = (frost$core$Int) {0u};
_2 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param1, _1);
_3 = ((org$frostlang$frostc$IR$Value*) _2);
_4 = ($fn67) param0->$class->vtable[2];
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
_17 = frost$unsafe$Pointer$init$frost$core$Int(_16);
frost$unsafe$Pointer$wrapper* $tmp68;
$tmp68 = (frost$unsafe$Pointer$wrapper*) frostObjectAlloc(sizeof(frost$unsafe$Pointer$wrapper), (frost$core$Class*) &frost$unsafe$Pointer$wrapperclass);
$tmp68->value = _17;
_18 = ((frost$core$String*) $tmp68);
*(&local1) = ((frost$core$String*) NULL);
_20 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local1);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local1) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:315
_27 = *(&local1);
frost$io$Console$print$frost$core$String(_27);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:316
_30 = (frost$core$Int64) {18446744073709551615u};
_31 = *(&local1);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_32);
*(&local1) = ((frost$core$String*) NULL);
return _30;

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
int64_t _72;
frost$core$MutableMethod* _73;
frost$core$Object* _74;
int64_t* _77;
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
int64_t _106;
frost$core$MutableMethod* _107;
frost$core$Object* _108;
int64_t* _111;
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
int64_t _138;
frost$core$Method* _139;
int64_t* _142;
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s69, _33, &$s70);
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
_46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_45, &$s71);
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
_66 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s72);
_67 = _66.value;
if (_67) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:300
_70 = (org$frostlang$frostc$Interpreter$_Closure19*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$_Closure19), (frost$core$Class*) &org$frostlang$frostc$Interpreter$_Closure19$class);
org$frostlang$frostc$Interpreter$_Closure19$init$org$frostlang$frostc$Interpreter(_70, param0);
_72 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$_Closure19$$anonymous18$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64).value;
_73 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_74 = ((frost$core$Object*) _70);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Interpreter.frost:300:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_77 = &_73->pointer;
*_77 = _72;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
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
_100 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s73);
_101 = _100.value;
if (_101) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:306
_104 = (org$frostlang$frostc$Interpreter$_Closure21*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$_Closure21), (frost$core$Class*) &org$frostlang$frostc$Interpreter$_Closure21$class);
org$frostlang$frostc$Interpreter$_Closure21$init$org$frostlang$frostc$Interpreter(_104, param0);
_106 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$_Closure21$$anonymous20$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64).value;
_107 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_108 = ((frost$core$Object*) _104);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Interpreter.frost:306:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_111 = &_107->pointer;
*_111 = _106;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
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
_134 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s74);
_135 = _134.value;
if (_135) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:312
_138 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$$anonymous22$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64).value;
_139 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Interpreter.frost:312:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_142 = &_139->pointer;
*_142 = _138;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
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
_167 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s75, _166);
_168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_167, &$s76);
_169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_168, &$s77);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Interpreter.frost:320:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_169);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s78);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s79, _188, &$s80);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s81, _200, &$s82);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s83, _217, &$s84);
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
$fn85 _1;
frost$core$MutableMethod* _2;
frost$core$MutableMethod* _3;
int64_t* _4;
int64_t _5;
frost$core$Object** _6;
frost$core$Object* _7;
bool _8;
frost$unsafe$Pointer _10;
frost$core$Int64 _11;
frost$unsafe$Pointer _14;
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
_10 = (frost$unsafe$Pointer) {_5};
_11 = (($fn87) _10.value)(param1, param3);
*(&local0) = _11;
goto block3;
block1:;
_14 = (frost$unsafe$Pointer) {_5};
_15 = (($fn88) _14.value)(_7, param1, param3);
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
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
frost$unsafe$Pointer local4;
org$frostlang$frostc$ClassDecl* local5 = NULL;
int64_t local6;
int64_t local7;
frost$unsafe$Pointer local8;
frost$unsafe$Pointer local9;
frost$unsafe$Pointer local10;
int64_t local11;
int64_t local12;
frost$unsafe$Pointer local13;
frost$unsafe$Pointer local14;
frost$unsafe$Pointer local15;
frost$core$Int local16;
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
int64_t _102;
int64_t _103;
int64_t _104;
int64_t* _107;
frost$unsafe$Pointer _109;
frost$unsafe$Pointer _112;
frost$core$Weak** _116;
frost$core$Weak* _117;
frost$core$Bit* _122;
frost$core$Bit _123;
bool _125;
frost$core$Int _127;
frost$core$Object** _131;
frost$core$Object* _132;
frost$core$Object* _133;
frost$core$Object* _134;
org$frostlang$frostc$Compiler* _137;
bool _138;
frost$core$Bit _139;
bool _140;
frost$core$Int _142;
org$frostlang$frostc$Compiler* _145;
org$frostlang$frostc$Type* _146;
org$frostlang$frostc$ClassDecl* _147;
bool _148;
frost$core$Bit _149;
bool _150;
frost$core$Int _152;
org$frostlang$frostc$ClassDecl* _155;
frost$core$Object* _157;
org$frostlang$frostc$ClassDecl* _159;
frost$core$Object* _160;
frost$core$Object* _163;
frost$core$Object* _165;
frost$unsafe$Pointer _168;
int64_t _169;
org$frostlang$frostc$ClassDecl* _170;
frost$core$Object* _171;
org$frostlang$frostc$ClassDecl* _173;
frost$core$Object* _174;
frost$unsafe$Pointer _178;
org$frostlang$frostc$MemoryLayout** _179;
org$frostlang$frostc$MemoryLayout* _180;
$fn92 _181;
frost$core$Int _182;
int64_t _185;
int64_t _190;
int64_t _191;
int64_t _192;
int64_t _193;
int64_t _194;
int64_t* _197;
frost$unsafe$Pointer _199;
frost$unsafe$Pointer _202;
frost$unsafe$Pointer _206;
int64_t _207;
frost$core$Int32 _208;
frost$unsafe$Pointer _211;
frost$core$Int _212;
int64_t _215;
int64_t _220;
int64_t _221;
int64_t _222;
int64_t _223;
int64_t _224;
int64_t* _227;
frost$unsafe$Pointer _229;
frost$unsafe$Pointer _232;
$fn93 _237;
org$frostlang$frostc$Type* _238;
$fn94 _239;
frost$core$Bit _240;
bool _241;
frost$core$Object* _242;
frost$core$Int64 _246;
int64_t _249;
int64_t _250;
frost$core$Int _251;
frost$unsafe$Pointer _253;
frost$unsafe$Pointer* _258;
frost$unsafe$Pointer _259;
int64_t _260;
frost$core$Int64 _261;
frost$unsafe$Pointer* _264;
frost$unsafe$Pointer _265;
frost$core$Int _269;
org$frostlang$frostc$MemoryLayout** _270;
org$frostlang$frostc$MemoryLayout* _271;
org$frostlang$frostc$ClassDecl* _272;
org$frostlang$frostc$Type** _273;
org$frostlang$frostc$Type* _274;
$fn95 _275;
frost$core$Int _276;
frost$core$Bit _277;
frost$core$Range$LTfrost$core$Int$GT _278;
frost$core$Int _279;
frost$core$Int _281;
frost$core$Bit _282;
bool _283;
frost$core$Int _284;
int64_t _286;
int64_t _287;
bool _288;
frost$core$Bit _289;
bool _290;
int64_t _292;
int64_t _293;
bool _294;
frost$core$Bit _295;
bool _296;
frost$unsafe$Pointer _299;
int64_t _300;
frost$core$Int _301;
frost$core$Int64 _302;
frost$unsafe$Pointer _303;
int64_t _304;
frost$core$Int _305;
frost$core$Int64 _306;
int64_t _307;
frost$core$UInt8 _308;
int64_t _309;
frost$core$Int _312;
int64_t _313;
int64_t _314;
int64_t _315;
frost$core$Int _316;
int64_t _318;
int64_t _319;
bool _320;
frost$core$Bit _321;
bool _322;
int64_t _324;
int64_t _325;
bool _326;
frost$core$Bit _327;
bool _328;
int64_t _330;
int64_t _331;
int64_t _332;
frost$core$Int _333;
frost$collections$Array** _337;
frost$collections$Array* _338;
frost$core$Int _339;
frost$unsafe$Pointer _340;
int64_t _343;
frost$core$Int _344;
int64_t _348;
int64_t _349;
frost$core$Int64 _350;
frost$core$Int64$nullable _352;
frost$core$Object* _353;
frost$core$Int _355;
int64_t _356;
int64_t _357;
bool _358;
frost$core$Bit _359;
bool _360;
frost$collections$CollectionView* _362;
$fn96 _363;
frost$core$Int _364;
int64_t _365;
int64_t _366;
bool _367;
frost$core$Bit _368;
bool _369;
frost$core$Int _371;
frost$unsafe$Pointer* _375;
frost$unsafe$Pointer _376;
int64_t _377;
frost$core$Int64 _378;
int64_t _379;
frost$core$Object* _380;
frost$core$Object* _382;
frost$core$Object* _383;
frost$core$Object* _387;
org$frostlang$frostc$ClassDecl* _390;
frost$core$Object* _391;
org$frostlang$frostc$Type* _394;
frost$core$Object* _395;
org$frostlang$frostc$Type* _400;
frost$core$Bit _401;
bool _402;
frost$core$Bit _404;
bool _405;
org$frostlang$frostc$Type* _408;
frost$core$Int _409;
frost$core$Int _410;
int64_t _411;
int64_t _412;
bool _413;
frost$core$Bit _414;
bool _415;
frost$collections$Array** _418;
frost$collections$Array* _419;
frost$core$Int _420;
frost$core$Int64 _421;
int64_t _424;
uint64_t _425;
frost$core$UInt64 _426;
frost$core$UInt64 _428;
frost$core$Int _429;
frost$core$Int _430;
int64_t _431;
int64_t _432;
int64_t _433;
frost$core$Int _434;
int64_t _437;
uint64_t _438;
frost$core$UInt64 _439;
uint64_t _443;
uint64_t _444;
uint64_t _445;
frost$core$UInt64 _446;
uint64_t _450;
uint64_t _451;
uint64_t _452;
frost$core$UInt64 _453;
uint64_t _457;
int64_t _458;
frost$core$Int64 _459;
frost$core$Int64$nullable _461;
frost$core$Object* _462;
frost$core$Int _464;
int64_t _465;
int64_t _466;
bool _467;
frost$core$Bit _468;
bool _469;
frost$collections$CollectionView* _471;
$fn97 _472;
frost$core$Int _473;
int64_t _474;
int64_t _475;
bool _476;
frost$core$Bit _477;
bool _478;
frost$core$Int _480;
frost$unsafe$Pointer* _484;
frost$unsafe$Pointer _485;
int64_t _486;
frost$core$Int64 _487;
int64_t _488;
frost$core$Object* _489;
frost$core$Object* _491;
frost$core$Object* _492;
frost$core$Object* _496;
org$frostlang$frostc$Type* _499;
frost$core$Object* _500;
org$frostlang$frostc$Type* _505;
frost$core$Int _506;
frost$core$Int _507;
int64_t _510;
int64_t _511;
bool _512;
frost$core$Bit _513;
bool _515;
frost$collections$Array** _518;
frost$collections$Array* _519;
frost$core$Int _520;
frost$core$Int64 _521;
frost$core$Int64$nullable _522;
frost$core$Object* _523;
frost$core$Int _525;
int64_t _526;
int64_t _527;
bool _528;
frost$core$Bit _529;
bool _530;
frost$collections$CollectionView* _532;
$fn98 _533;
frost$core$Int _534;
int64_t _535;
int64_t _536;
bool _537;
frost$core$Bit _538;
bool _539;
frost$core$Int _541;
frost$unsafe$Pointer* _545;
frost$unsafe$Pointer _546;
int64_t _547;
frost$core$Int64 _548;
int64_t _549;
frost$core$Object* _550;
frost$core$Object* _552;
frost$core$Object* _553;
frost$core$Object* _557;
org$frostlang$frostc$Type* _560;
frost$core$Object* _561;
frost$collections$Array** _567;
frost$collections$Array* _568;
frost$core$Int _569;
frost$core$Int64 _570;
frost$core$Int64$nullable _571;
frost$core$Object* _572;
frost$core$Int _574;
int64_t _575;
int64_t _576;
bool _577;
frost$core$Bit _578;
bool _579;
frost$collections$CollectionView* _581;
$fn99 _582;
frost$core$Int _583;
int64_t _584;
int64_t _585;
bool _586;
frost$core$Bit _587;
bool _588;
frost$core$Int _590;
frost$unsafe$Pointer* _594;
frost$unsafe$Pointer _595;
int64_t _596;
frost$core$Int64 _597;
int64_t _598;
frost$core$Object* _599;
frost$core$Object* _601;
frost$core$Object* _602;
frost$core$Object* _606;
org$frostlang$frostc$Type* _608;
frost$core$Object* _609;
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
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:338:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_102 = _99.value;
_103 = _102 * 1u;
_104 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_103);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_107 = &(&local3)->value;
*_107 = _104;
_109 = *(&local3);
*(&local2) = _109;
_112 = *(&local2);
*(&local4) = _112;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:339
_116 = &param0->compiler;
_117 = *_116;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:339:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_122 = &_117->_valid;
_123 = *_122;
_125 = _123.value;
if (_125) goto block21; else goto block22;
block22:;
_127 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s111, _127, &$s112);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_131 = &_117->value;
_132 = *_131;
_133 = _132;
_134 = _133;
frost$core$Frost$ref$frost$core$Object$Q(_134);
_137 = ((org$frostlang$frostc$Compiler*) _133);
_138 = _137 != NULL;
_139 = (frost$core$Bit) {_138};
_140 = _139.value;
if (_140) goto block23; else goto block24;
block24:;
_142 = (frost$core$Int) {339u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s113, _142, &$s114);
abort(); // unreachable
block23:;
_145 = _137;
_146 = *(&local0);
_147 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(_145, _146);
_148 = _147 != NULL;
_149 = (frost$core$Bit) {_148};
_150 = _149.value;
if (_150) goto block25; else goto block26;
block26:;
_152 = (frost$core$Int) {339u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s115, _152, &$s116);
abort(); // unreachable
block25:;
_155 = _147;
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
_157 = ((frost$core$Object*) _155);
frost$core$Frost$ref$frost$core$Object$Q(_157);
_159 = *(&local5);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_160);
*(&local5) = _155;
_163 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_163);
_165 = _133;
frost$core$Frost$unref$frost$core$Object$Q(_165);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:340
_168 = *(&local4);
_169 = _168.value;
_170 = *(&local5);
_171 = ((frost$core$Object*) _170);
frost$core$Frost$ref$frost$core$Object$Q(_171);
_173 = *((org$frostlang$frostc$ClassDecl**)_169);
_174 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_174);
*((org$frostlang$frostc$ClassDecl**)_169) = _170;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:341
_178 = *(&local4);
_179 = &param0->memoryLayout;
_180 = *_179;
_181 = ($fn117) _180->$class->vtable[3];
_182 = _181(_180);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:341:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_185 = _182.value;
*(&local6) = _185;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local7) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_190 = _178.value;
_191 = *(&local6);
_192 = *(&local7);
_193 = _191 * _192;
_194 = _190 + _193;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_197 = &(&local9)->value;
*_197 = _194;
_199 = *(&local9);
*(&local8) = _199;
_202 = *(&local8);
*(&local10) = _202;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:342
_206 = *(&local10);
_207 = _206.value;
_208 = (frost$core$Int32) {1u};
*((frost$core$Int32*)_207) = _208;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:343
_211 = *(&local10);
_212 = (frost$core$Int) {5u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:343:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_215 = _212.value;
*(&local11) = _215;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local12) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_220 = _211.value;
_221 = *(&local11);
_222 = *(&local12);
_223 = _221 * _222;
_224 = _220 + _223;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_227 = &(&local14)->value;
*_227 = _224;
_229 = *(&local14);
*(&local13) = _229;
_232 = *(&local13);
*(&local10) = _232;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:344
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:345
_237 = ($fn118) param3->$class->vtable[2];
_238 = _237(param3);
_239 = ($fn119) param0->$class->vtable[10];
_240 = _239(param0, _238);
_241 = _240.value;
_242 = ((frost$core$Object*) _238);
frost$core$Frost$unref$frost$core$Object$Q(_242);
if (_241) goto block31; else goto block33;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:346
_246 = *(&local1);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:346:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_249 = _246.value;
_250 = ((int64_t) _249);
_251 = (frost$core$Int) {_250};
_253 = frost$unsafe$Pointer$init$frost$core$Int(_251);
*(&local15) = _253;
goto block32;
block33:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:349
_258 = &param0->stack;
_259 = *_258;
_260 = _259.value;
_261 = *(&local1);
*((frost$core$Int64*)_260) = _261;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:350
_264 = &param0->stack;
_265 = *_264;
*(&local15) = _265;
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:353
_269 = (frost$core$Int) {0u};
_270 = &param0->memoryLayout;
_271 = *_270;
_272 = *(&local5);
_273 = &_272->type;
_274 = *_273;
_275 = ($fn120) _271->$class->vtable[7];
_276 = _275(_271, _274);
_277 = (frost$core$Bit) {false};
_278 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_269, _276, _277);
_279 = _278.min;
*(&local16) = _279;
_281 = _278.max;
_282 = _278.inclusive;
_283 = _282.value;
_284 = (frost$core$Int) {1u};
if (_283) goto block38; else goto block39;
block38:;
_286 = _279.value;
_287 = _281.value;
_288 = _286 <= _287;
_289 = (frost$core$Bit) {_288};
_290 = _289.value;
if (_290) goto block35; else goto block36;
block39:;
_292 = _279.value;
_293 = _281.value;
_294 = _292 < _293;
_295 = (frost$core$Bit) {_294};
_296 = _295.value;
if (_296) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:354
_299 = *(&local10);
_300 = _299.value;
_301 = *(&local16);
_302 = frost$core$Int64$init$frost$core$Int(_301);
_303 = *(&local15);
_304 = _303.value;
_305 = *(&local16);
_306 = frost$core$Int64$init$frost$core$Int(_305);
_307 = _306.value;
_308 = ((frost$core$UInt8*)_304)[_307];
_309 = _302.value;
((frost$core$UInt8*)_300)[_309] = _308;
_312 = *(&local16);
_313 = _281.value;
_314 = _312.value;
_315 = _313 - _314;
_316 = (frost$core$Int) {_315};
if (_283) goto block41; else goto block42;
block41:;
_318 = _316.value;
_319 = _284.value;
_320 = _318 >= _319;
_321 = (frost$core$Bit) {_320};
_322 = _321.value;
if (_322) goto block40; else goto block36;
block42:;
_324 = _316.value;
_325 = _284.value;
_326 = _324 > _325;
_327 = (frost$core$Bit) {_326};
_328 = _327.value;
if (_328) goto block40; else goto block36;
block40:;
_330 = _312.value;
_331 = _284.value;
_332 = _330 + _331;
_333 = (frost$core$Int) {_332};
*(&local16) = _333;
goto block35;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:356
_337 = &param1->statements;
_338 = *_337;
_339 = param2.value;
_340 = *(&local4);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:356:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_343 = _340.value;
_344 = (frost$core$Int) {_343};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:356:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_348 = _344.value;
_349 = ((int64_t) _348);
_350 = (frost$core$Int64) {_349};
_352 = ((frost$core$Int64$nullable) { _350, true });
frost$core$Object* $tmp121;
if (_352.nonnull) {
    frost$core$Int64$wrapper* $tmp122;
    $tmp122 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp122->value = ((frost$core$Int64) _352.value);
    $tmp121 = ((frost$core$Object*) $tmp122);
}
else {
    $tmp121 = NULL;
}
_353 = $tmp121;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:356:31
_355 = (frost$core$Int) {0u};
_356 = _339.value;
_357 = _355.value;
_358 = _356 >= _357;
_359 = (frost$core$Bit) {_358};
_360 = _359.value;
if (_360) goto block48; else goto block47;
block48:;
_362 = ((frost$collections$CollectionView*) _338);
ITable* $tmp123 = _362->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp123 = $tmp123->next;
}
_363 = $tmp123->methods[0];
_364 = _363(_362);
_365 = _339.value;
_366 = _364.value;
_367 = _365 < _366;
_368 = (frost$core$Bit) {_367};
_369 = _368.value;
if (_369) goto block46; else goto block47;
block47:;
_371 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s124, _371, &$s125);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_375 = &_338->data;
_376 = *_375;
_377 = _376.value;
_378 = frost$core$Int64$init$frost$core$Int(_339);
_379 = _378.value;
_380 = _353;
frost$core$Frost$ref$frost$core$Object$Q(_380);
_382 = ((frost$core$Object**)_377)[_379];
_383 = _382;
frost$core$Frost$unref$frost$core$Object$Q(_383);
((frost$core$Object**)_377)[_379] = _353;
_387 = _353;
frost$core$Frost$unref$frost$core$Object$Q(_387);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:357
_390 = *(&local5);
_391 = ((frost$core$Object*) _390);
frost$core$Frost$unref$frost$core$Object$Q(_391);
*(&local5) = ((org$frostlang$frostc$ClassDecl*) NULL);
_394 = *(&local0);
_395 = ((frost$core$Object*) _394);
frost$core$Frost$unref$frost$core$Object$Q(_395);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:359
_400 = *(&local0);
_401 = org$frostlang$frostc$Type$get_isBuiltinInt$R$frost$core$Bit(_400);
_402 = _401.value;
if (_402) goto block51; else goto block50;
block51:;
_404 = org$frostlang$frostc$Type$get_isBuiltinInt$R$frost$core$Bit(param4);
_405 = _404.value;
if (_405) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:360
_408 = *(&local0);
_409 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(_408);
_410 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(param4);
_411 = _409.value;
_412 = _410.value;
_413 = _411 > _412;
_414 = (frost$core$Bit) {_413};
_415 = _414.value;
if (_415) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:361
_418 = &param1->statements;
_419 = *_418;
_420 = param2.value;
_421 = *(&local1);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Interpreter.frost:361:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_424 = _421.value;
_425 = ((uint64_t) _424);
_426 = (frost$core$UInt64) {_425};
_428 = (frost$core$UInt64) {18446744073709551615u};
_429 = (frost$core$Int) {64u};
_430 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(param4);
_431 = _429.value;
_432 = _430.value;
_433 = _431 - _432;
_434 = (frost$core$Int) {_433};
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Interpreter.frost:362:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_437 = _434.value;
_438 = ((uint64_t) _437);
_439 = (frost$core$UInt64) {_438};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from Interpreter.frost:362:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
_443 = _428.value;
_444 = _439.value;
_445 = _443 >> _444;
_446 = (frost$core$UInt64) {_445};
// begin inline call to function frost.core.UInt64.&&(other:frost.core.UInt64):frost.core.UInt64 from Interpreter.frost:361:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:166
_450 = _426.value;
_451 = _446.value;
_452 = _450 & _451;
_453 = (frost$core$UInt64) {_452};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Interpreter.frost:362:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_457 = _453.value;
_458 = ((int64_t) _457);
_459 = (frost$core$Int64) {_458};
_461 = ((frost$core$Int64$nullable) { _459, true });
frost$core$Object* $tmp126;
if (_461.nonnull) {
    frost$core$Int64$wrapper* $tmp127;
    $tmp127 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp127->value = ((frost$core$Int64) _461.value);
    $tmp126 = ((frost$core$Object*) $tmp127);
}
else {
    $tmp126 = NULL;
}
_462 = $tmp126;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:361:35
_464 = (frost$core$Int) {0u};
_465 = _420.value;
_466 = _464.value;
_467 = _465 >= _466;
_468 = (frost$core$Bit) {_467};
_469 = _468.value;
if (_469) goto block62; else goto block61;
block62:;
_471 = ((frost$collections$CollectionView*) _419);
ITable* $tmp128 = _471->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp128 = $tmp128->next;
}
_472 = $tmp128->methods[0];
_473 = _472(_471);
_474 = _420.value;
_475 = _473.value;
_476 = _474 < _475;
_477 = (frost$core$Bit) {_476};
_478 = _477.value;
if (_478) goto block60; else goto block61;
block61:;
_480 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s129, _480, &$s130);
abort(); // unreachable
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_484 = &_419->data;
_485 = *_484;
_486 = _485.value;
_487 = frost$core$Int64$init$frost$core$Int(_420);
_488 = _487.value;
_489 = _462;
frost$core$Frost$ref$frost$core$Object$Q(_489);
_491 = ((frost$core$Object**)_486)[_488];
_492 = _491;
frost$core$Frost$unref$frost$core$Object$Q(_492);
((frost$core$Object**)_486)[_488] = _462;
_496 = _462;
frost$core$Frost$unref$frost$core$Object$Q(_496);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:363
_499 = *(&local0);
_500 = ((frost$core$Object*) _499);
frost$core$Frost$unref$frost$core$Object$Q(_500);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:365
_505 = *(&local0);
_506 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(_505);
_507 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(param4);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:365:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_510 = _506.value;
_511 = _507.value;
_512 = _510 == _511;
_513 = (frost$core$Bit) {_512};
_515 = _513.value;
if (_515) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:366
_518 = &param1->statements;
_519 = *_518;
_520 = param2.value;
_521 = *(&local1);
_522 = ((frost$core$Int64$nullable) { _521, true });
frost$core$Object* $tmp131;
if (_522.nonnull) {
    frost$core$Int64$wrapper* $tmp132;
    $tmp132 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp132->value = ((frost$core$Int64) _522.value);
    $tmp131 = ((frost$core$Object*) $tmp132);
}
else {
    $tmp131 = NULL;
}
_523 = $tmp131;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:366:35
_525 = (frost$core$Int) {0u};
_526 = _520.value;
_527 = _525.value;
_528 = _526 >= _527;
_529 = (frost$core$Bit) {_528};
_530 = _529.value;
if (_530) goto block69; else goto block68;
block69:;
_532 = ((frost$collections$CollectionView*) _519);
ITable* $tmp133 = _532->$class->itable;
while ($tmp133->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp133 = $tmp133->next;
}
_533 = $tmp133->methods[0];
_534 = _533(_532);
_535 = _520.value;
_536 = _534.value;
_537 = _535 < _536;
_538 = (frost$core$Bit) {_537};
_539 = _538.value;
if (_539) goto block67; else goto block68;
block68:;
_541 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s134, _541, &$s135);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_545 = &_519->data;
_546 = *_545;
_547 = _546.value;
_548 = frost$core$Int64$init$frost$core$Int(_520);
_549 = _548.value;
_550 = _523;
frost$core$Frost$ref$frost$core$Object$Q(_550);
_552 = ((frost$core$Object**)_547)[_549];
_553 = _552;
frost$core$Frost$unref$frost$core$Object$Q(_553);
((frost$core$Object**)_547)[_549] = _523;
_557 = _523;
frost$core$Frost$unref$frost$core$Object$Q(_557);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:367
_560 = *(&local0);
_561 = ((frost$core$Object*) _560);
frost$core$Frost$unref$frost$core$Object$Q(_561);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block64:;
goto block50;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:370
_567 = &param1->statements;
_568 = *_567;
_569 = param2.value;
_570 = *(&local1);
_571 = ((frost$core$Int64$nullable) { _570, true });
frost$core$Object* $tmp136;
if (_571.nonnull) {
    frost$core$Int64$wrapper* $tmp137;
    $tmp137 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp137->value = ((frost$core$Int64) _571.value);
    $tmp136 = ((frost$core$Object*) $tmp137);
}
else {
    $tmp136 = NULL;
}
_572 = $tmp136;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:370:27
_574 = (frost$core$Int) {0u};
_575 = _569.value;
_576 = _574.value;
_577 = _575 >= _576;
_578 = (frost$core$Bit) {_577};
_579 = _578.value;
if (_579) goto block73; else goto block72;
block73:;
_581 = ((frost$collections$CollectionView*) _568);
ITable* $tmp138 = _581->$class->itable;
while ($tmp138->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp138 = $tmp138->next;
}
_582 = $tmp138->methods[0];
_583 = _582(_581);
_584 = _569.value;
_585 = _583.value;
_586 = _584 < _585;
_587 = (frost$core$Bit) {_586};
_588 = _587.value;
if (_588) goto block71; else goto block72;
block72:;
_590 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s139, _590, &$s140);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_594 = &_568->data;
_595 = *_594;
_596 = _595.value;
_597 = frost$core$Int64$init$frost$core$Int(_569);
_598 = _597.value;
_599 = _572;
frost$core$Frost$ref$frost$core$Object$Q(_599);
_601 = ((frost$core$Object**)_596)[_598];
_602 = _601;
frost$core$Frost$unref$frost$core$Object$Q(_602);
((frost$core$Object**)_596)[_598] = _572;
_606 = _572;
frost$core$Frost$unref$frost$core$Object$Q(_606);
_608 = *(&local0);
_609 = ((frost$core$Object*) _608);
frost$core$Frost$unref$frost$core$Object$Q(_609);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;

}
void org$frostlang$frostc$Interpreter$createStruct$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$FixedArray* param4) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int local0;
frost$unsafe$Pointer local1;
org$frostlang$frostc$IR$Value* local2 = NULL;
frost$core$Int64 local3;
int64_t local4;
int64_t local5;
frost$unsafe$Pointer local6;
frost$unsafe$Pointer local7;
int64_t local8;
int64_t local9;
frost$unsafe$Pointer local10;
frost$unsafe$Pointer local11;
int64_t local12;
int64_t local13;
frost$unsafe$Pointer local14;
frost$unsafe$Pointer local15;
int64_t local16;
int64_t local17;
frost$unsafe$Pointer local18;
frost$unsafe$Pointer local19;
frost$core$Int local20;
org$frostlang$frostc$MemoryLayout** _1;
org$frostlang$frostc$MemoryLayout* _2;
org$frostlang$frostc$Type** _3;
org$frostlang$frostc$Type* _4;
$fn141 _5;
frost$core$Int _6;
frost$unsafe$Pointer* _9;
frost$unsafe$Pointer _10;
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
frost$unsafe$Pointer _55;
int64_t _56;
frost$core$Int64 _57;
int64_t _60;
uint8_t _61;
frost$core$UInt8 _62;
frost$unsafe$Pointer _66;
frost$core$Int _67;
int64_t _70;
int64_t _75;
int64_t _76;
int64_t _77;
int64_t _78;
int64_t _79;
int64_t* _82;
frost$unsafe$Pointer _84;
frost$unsafe$Pointer _87;
frost$core$Int _91;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _99;
frost$unsafe$Pointer _102;
int64_t _103;
frost$core$Int64 _104;
int64_t _107;
int16_t _108;
frost$core$Int16 _109;
frost$unsafe$Pointer _113;
frost$core$Int _114;
int64_t _117;
int64_t _122;
int64_t _123;
int64_t _124;
int64_t _125;
int64_t _126;
int64_t* _129;
frost$unsafe$Pointer _131;
frost$unsafe$Pointer _134;
frost$core$Int _138;
int64_t _141;
int64_t _142;
bool _143;
frost$core$Bit _144;
bool _146;
frost$unsafe$Pointer _149;
int64_t _150;
frost$core$Int64 _151;
int64_t _154;
int32_t _155;
frost$core$Int32 _156;
frost$unsafe$Pointer _160;
frost$core$Int _161;
int64_t _164;
int64_t _169;
int64_t _170;
int64_t _171;
int64_t _172;
int64_t _173;
int64_t* _176;
frost$unsafe$Pointer _178;
frost$unsafe$Pointer _181;
frost$core$Int _185;
int64_t _188;
int64_t _189;
bool _190;
frost$core$Bit _191;
bool _193;
frost$unsafe$Pointer _196;
int64_t _197;
frost$core$Int64 _198;
frost$unsafe$Pointer _201;
frost$core$Int _202;
int64_t _205;
int64_t _210;
int64_t _211;
int64_t _212;
int64_t _213;
int64_t _214;
int64_t* _217;
frost$unsafe$Pointer _219;
frost$unsafe$Pointer _222;
frost$core$Int _227;
org$frostlang$frostc$IR$Value* _228;
frost$core$Object* _229;
$fn148 _232;
frost$core$String* _233;
frost$core$String* _234;
frost$core$Object* _235;
frost$core$Object* _237;
frost$core$Object* _239;
frost$core$String* _242;
frost$core$Object* _244;
frost$core$Object* _246;
frost$core$Object* _249;
frost$core$Object* _251;
org$frostlang$frostc$IR$Value* _253;
frost$core$Object* _254;
frost$core$Object* _258;
org$frostlang$frostc$Type** _261;
org$frostlang$frostc$Type* _262;
$fn149 _263;
frost$core$Bit _264;
bool _265;
frost$collections$Array** _268;
frost$collections$Array* _269;
frost$core$Int _270;
frost$unsafe$Pointer* _271;
frost$unsafe$Pointer _272;
int64_t _275;
frost$core$Int _276;
frost$core$Int64 _278;
frost$core$Int64$nullable _279;
frost$core$Object* _280;
frost$core$Int _282;
int64_t _283;
int64_t _284;
bool _285;
frost$core$Bit _286;
bool _287;
frost$collections$CollectionView* _289;
$fn150 _290;
frost$core$Int _291;
int64_t _292;
int64_t _293;
bool _294;
frost$core$Bit _295;
bool _296;
frost$core$Int _298;
frost$unsafe$Pointer* _302;
frost$unsafe$Pointer _303;
int64_t _304;
frost$core$Int64 _305;
int64_t _306;
frost$core$Object* _307;
frost$core$Object* _309;
frost$core$Object* _310;
frost$core$Object* _314;
frost$unsafe$Pointer _317;
frost$unsafe$Pointer* _318;
frost$unsafe$Pointer _323;
int64_t _326;
frost$core$Int _327;
frost$unsafe$Pointer* _329;
frost$unsafe$Pointer _330;
int64_t _333;
frost$core$Int _334;
frost$core$Int _336;
int64_t _337;
int64_t _338;
int64_t _339;
frost$core$Int _340;
frost$core$Bit _341;
frost$core$Range$LTfrost$core$Int$GT _342;
frost$core$Int _343;
frost$core$Int _345;
frost$core$Bit _346;
bool _347;
frost$core$Int _348;
int64_t _350;
int64_t _351;
bool _352;
frost$core$Bit _353;
bool _354;
int64_t _356;
int64_t _357;
bool _358;
frost$core$Bit _359;
bool _360;
frost$core$Int _363;
frost$unsafe$Pointer _364;
int64_t _365;
frost$core$UInt8 _366;
frost$core$Int _369;
int64_t _370;
int64_t _371;
int64_t _372;
frost$core$Int _373;
int64_t _375;
int64_t _376;
bool _377;
frost$core$Bit _378;
bool _379;
int64_t _381;
int64_t _382;
bool _383;
frost$core$Bit _384;
bool _385;
int64_t _387;
int64_t _388;
int64_t _389;
frost$core$Int _390;
frost$collections$Array** _394;
frost$collections$Array* _395;
frost$core$Int _396;
frost$unsafe$Pointer* _397;
frost$unsafe$Pointer _398;
int64_t _399;
frost$core$Int64 _400;
frost$core$Int64$nullable _401;
frost$core$Object* _402;
frost$core$Int _404;
int64_t _405;
int64_t _406;
bool _407;
frost$core$Bit _408;
bool _409;
frost$collections$CollectionView* _411;
$fn151 _412;
frost$core$Int _413;
int64_t _414;
int64_t _415;
bool _416;
frost$core$Bit _417;
bool _418;
frost$core$Int _420;
frost$unsafe$Pointer* _424;
frost$unsafe$Pointer _425;
int64_t _426;
frost$core$Int64 _427;
int64_t _428;
frost$core$Object* _429;
frost$core$Object* _431;
frost$core$Object* _432;
frost$core$Object* _436;
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
_56 = _55.value;
_57 = *(&local3);
// begin inline call to function frost.core.Int64.get_asUInt8():frost.core.UInt8 from Interpreter.frost:382:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:610
_60 = _57.value;
_61 = ((uint8_t) _60);
_62 = (frost$core$UInt8) {_61};
*((frost$core$UInt8*)_56) = _62;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:383
_66 = *(&local1);
_67 = (frost$core$Int) {1u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:383:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_70 = _67.value;
*(&local4) = _70;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local5) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_75 = _66.value;
_76 = *(&local4);
_77 = *(&local5);
_78 = _76 * _77;
_79 = _75 + _78;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_82 = &(&local7)->value;
*_82 = _79;
_84 = *(&local7);
*(&local6) = _84;
_87 = *(&local6);
*(&local1) = _87;
goto block4;
block6:;
_91 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:385:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_94 = _43.value;
_95 = _91.value;
_96 = _94 == _95;
_97 = (frost$core$Bit) {_96};
_99 = _97.value;
if (_99) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:386
_102 = *(&local1);
_103 = _102.value;
_104 = *(&local3);
// begin inline call to function frost.core.Int64.get_asInt16():frost.core.Int16 from Interpreter.frost:386:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:592
_107 = _104.value;
_108 = ((int16_t) _107);
_109 = (frost$core$Int16) {_108};
*((frost$core$Int16*)_103) = _109;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:387
_113 = *(&local1);
_114 = (frost$core$Int) {2u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:387:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_117 = _114.value;
*(&local8) = _117;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local9) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_122 = _113.value;
_123 = *(&local8);
_124 = *(&local9);
_125 = _123 * _124;
_126 = _122 + _125;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_129 = &(&local11)->value;
*_129 = _126;
_131 = *(&local11);
*(&local10) = _131;
_134 = *(&local10);
*(&local1) = _134;
goto block4;
block12:;
_138 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:389:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_141 = _43.value;
_142 = _138.value;
_143 = _141 == _142;
_144 = (frost$core$Bit) {_143};
_146 = _144.value;
if (_146) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:390
_149 = *(&local1);
_150 = _149.value;
_151 = *(&local3);
// begin inline call to function frost.core.Int64.get_asInt32():frost.core.Int32 from Interpreter.frost:390:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:598
_154 = _151.value;
_155 = ((int32_t) _154);
_156 = (frost$core$Int32) {_155};
*((frost$core$Int32*)_150) = _156;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:391
_160 = *(&local1);
_161 = (frost$core$Int) {4u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:391:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_164 = _161.value;
*(&local12) = _164;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local13) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_169 = _160.value;
_170 = *(&local12);
_171 = *(&local13);
_172 = _170 * _171;
_173 = _169 + _172;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_176 = &(&local15)->value;
*_176 = _173;
_178 = *(&local15);
*(&local14) = _178;
_181 = *(&local14);
*(&local1) = _181;
goto block4;
block18:;
_185 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:393:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_188 = _43.value;
_189 = _185.value;
_190 = _188 == _189;
_191 = (frost$core$Bit) {_190};
_193 = _191.value;
if (_193) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:394
_196 = *(&local1);
_197 = _196.value;
_198 = *(&local3);
*((frost$core$Int64*)_197) = _198;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:395
_201 = *(&local1);
_202 = (frost$core$Int) {8u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:395:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_205 = _202.value;
*(&local16) = _205;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local17) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_210 = _201.value;
_211 = *(&local16);
_212 = *(&local17);
_213 = _211 * _212;
_214 = _210 + _213;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_217 = &(&local19)->value;
*_217 = _214;
_219 = *(&local19);
*(&local18) = _219;
_222 = *(&local18);
*(&local1) = _222;
goto block4;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:398
_227 = (frost$core$Int) {398u};
_228 = *(&local2);
_229 = ((frost$core$Object*) _228);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:398:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_232 = ($fn159) _229->$class->vtable[0];
_233 = _232(_229);
_234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s160, _233);
_235 = ((frost$core$Object*) _234);
frost$core$Frost$ref$frost$core$Object$Q(_235);
_237 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_237);
_239 = ((frost$core$Object*) _233);
frost$core$Frost$unref$frost$core$Object$Q(_239);
_242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_234, &$s161);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s162, _227, _242);
_244 = ((frost$core$Object*) _242);
frost$core$Frost$unref$frost$core$Object$Q(_244);
_246 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_246);
abort(); // unreachable
block4:;
_249 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_249);
_251 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_251);
_253 = *(&local2);
_254 = ((frost$core$Object*) _253);
frost$core$Frost$unref$frost$core$Object$Q(_254);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block3:;
_258 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_258);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:402
_261 = &param3->type;
_262 = *_261;
_263 = ($fn163) param0->$class->vtable[10];
_264 = _263(param0, _262);
_265 = _264.value;
if (_265) goto block29; else goto block31;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:403
_268 = &param1->statements;
_269 = *_268;
_270 = param2.value;
_271 = &param0->stack;
_272 = *_271;
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:403:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_275 = _272.value;
_276 = (frost$core$Int) {_275};
_278 = frost$core$Int64$init$frost$core$Int(_276);
_279 = ((frost$core$Int64$nullable) { _278, true });
frost$core$Object* $tmp164;
if (_279.nonnull) {
    frost$core$Int64$wrapper* $tmp165;
    $tmp165 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp165->value = ((frost$core$Int64) _279.value);
    $tmp164 = ((frost$core$Object*) $tmp165);
}
else {
    $tmp164 = NULL;
}
_280 = $tmp164;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:403:31
_282 = (frost$core$Int) {0u};
_283 = _270.value;
_284 = _282.value;
_285 = _283 >= _284;
_286 = (frost$core$Bit) {_285};
_287 = _286.value;
if (_287) goto block36; else goto block35;
block36:;
_289 = ((frost$collections$CollectionView*) _269);
ITable* $tmp166 = _289->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
_290 = $tmp166->methods[0];
_291 = _290(_289);
_292 = _270.value;
_293 = _291.value;
_294 = _292 < _293;
_295 = (frost$core$Bit) {_294};
_296 = _295.value;
if (_296) goto block34; else goto block35;
block35:;
_298 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s167, _298, &$s168);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_302 = &_269->data;
_303 = *_302;
_304 = _303.value;
_305 = frost$core$Int64$init$frost$core$Int(_270);
_306 = _305.value;
_307 = _280;
frost$core$Frost$ref$frost$core$Object$Q(_307);
_309 = ((frost$core$Object**)_304)[_306];
_310 = _309;
frost$core$Frost$unref$frost$core$Object$Q(_310);
((frost$core$Object**)_304)[_306] = _280;
_314 = _280;
frost$core$Frost$unref$frost$core$Object$Q(_314);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:404
_317 = *(&local1);
_318 = &param0->stack;
*_318 = _317;
goto block30;
block31:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:407
_323 = *(&local1);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:407:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_326 = _323.value;
_327 = (frost$core$Int) {_326};
_329 = &param0->stack;
_330 = *_329;
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:407:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_333 = _330.value;
_334 = (frost$core$Int) {_333};
_336 = (frost$core$Int) {8u};
_337 = _334.value;
_338 = _336.value;
_339 = _337 + _338;
_340 = (frost$core$Int) {_339};
_341 = (frost$core$Bit) {false};
_342 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_327, _340, _341);
_343 = _342.min;
*(&local20) = _343;
_345 = _342.max;
_346 = _342.inclusive;
_347 = _346.value;
_348 = (frost$core$Int) {1u};
if (_347) goto block42; else goto block43;
block42:;
_350 = _343.value;
_351 = _345.value;
_352 = _350 <= _351;
_353 = (frost$core$Bit) {_352};
_354 = _353.value;
if (_354) goto block39; else goto block40;
block43:;
_356 = _343.value;
_357 = _345.value;
_358 = _356 < _357;
_359 = (frost$core$Bit) {_358};
_360 = _359.value;
if (_360) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:408
_363 = *(&local20);
_364 = frost$unsafe$Pointer$init$frost$core$Int(_363);
_365 = _364.value;
_366 = (frost$core$UInt8) {0u};
*((frost$core$UInt8*)_365) = _366;
_369 = *(&local20);
_370 = _345.value;
_371 = _369.value;
_372 = _370 - _371;
_373 = (frost$core$Int) {_372};
if (_347) goto block45; else goto block46;
block45:;
_375 = _373.value;
_376 = _348.value;
_377 = _375 >= _376;
_378 = (frost$core$Bit) {_377};
_379 = _378.value;
if (_379) goto block44; else goto block40;
block46:;
_381 = _373.value;
_382 = _348.value;
_383 = _381 > _382;
_384 = (frost$core$Bit) {_383};
_385 = _384.value;
if (_385) goto block44; else goto block40;
block44:;
_387 = _369.value;
_388 = _348.value;
_389 = _387 + _388;
_390 = (frost$core$Int) {_389};
*(&local20) = _390;
goto block39;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:410
_394 = &param1->statements;
_395 = *_394;
_396 = param2.value;
_397 = &param0->stack;
_398 = *_397;
_399 = _398.value;
_400 = *((frost$core$Int64*)_399);
_401 = ((frost$core$Int64$nullable) { _400, true });
frost$core$Object* $tmp169;
if (_401.nonnull) {
    frost$core$Int64$wrapper* $tmp170;
    $tmp170 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp170->value = ((frost$core$Int64) _401.value);
    $tmp169 = ((frost$core$Object*) $tmp170);
}
else {
    $tmp169 = NULL;
}
_402 = $tmp169;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:410:31
_404 = (frost$core$Int) {0u};
_405 = _396.value;
_406 = _404.value;
_407 = _405 >= _406;
_408 = (frost$core$Bit) {_407};
_409 = _408.value;
if (_409) goto block50; else goto block49;
block50:;
_411 = ((frost$collections$CollectionView*) _395);
ITable* $tmp171 = _411->$class->itable;
while ($tmp171->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp171 = $tmp171->next;
}
_412 = $tmp171->methods[0];
_413 = _412(_411);
_414 = _396.value;
_415 = _413.value;
_416 = _414 < _415;
_417 = (frost$core$Bit) {_416};
_418 = _417.value;
if (_418) goto block48; else goto block49;
block49:;
_420 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s172, _420, &$s173);
abort(); // unreachable
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_424 = &_395->data;
_425 = *_424;
_426 = _425.value;
_427 = frost$core$Int64$init$frost$core$Int(_396);
_428 = _427.value;
_429 = _402;
frost$core$Frost$ref$frost$core$Object$Q(_429);
_431 = ((frost$core$Object**)_426)[_428];
_432 = _431;
frost$core$Frost$unref$frost$core$Object$Q(_432);
((frost$core$Object**)_426)[_428] = _402;
_436 = _402;
frost$core$Frost$unref$frost$core$Object$Q(_436);
goto block30;
block30:;
return;

}
void org$frostlang$frostc$Interpreter$extractField$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$unsafe$Pointer local0;
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
frost$unsafe$Pointer _34;
org$frostlang$frostc$MemoryLayout** _37;
org$frostlang$frostc$MemoryLayout* _38;
org$frostlang$frostc$Type** _39;
org$frostlang$frostc$Type* _40;
$fn176 _41;
frost$core$Int _42;
frost$core$Int _43;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _51;
frost$collections$Array** _54;
frost$collections$Array* _55;
frost$core$Int _56;
frost$unsafe$Pointer _57;
int64_t _58;
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
frost$unsafe$Pointer* _89;
frost$unsafe$Pointer _90;
int64_t _91;
frost$core$Int64 _92;
int64_t _93;
frost$core$Object* _94;
frost$core$Object* _96;
frost$core$Object* _97;
frost$core$Object* _101;
frost$core$Int _104;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _112;
frost$collections$Array** _115;
frost$collections$Array* _116;
frost$core$Int _117;
frost$unsafe$Pointer _118;
int64_t _119;
frost$core$UInt16 _120;
uint16_t _123;
int64_t _124;
frost$core$Int64 _125;
frost$core$Int64$nullable _127;
frost$core$Object* _128;
frost$core$Int _130;
int64_t _131;
int64_t _132;
bool _133;
frost$core$Bit _134;
bool _135;
frost$collections$CollectionView* _137;
$fn178 _138;
frost$core$Int _139;
int64_t _140;
int64_t _141;
bool _142;
frost$core$Bit _143;
bool _144;
frost$core$Int _146;
frost$unsafe$Pointer* _150;
frost$unsafe$Pointer _151;
int64_t _152;
frost$core$Int64 _153;
int64_t _154;
frost$core$Object* _155;
frost$core$Object* _157;
frost$core$Object* _158;
frost$core$Object* _162;
frost$core$Int _165;
int64_t _168;
int64_t _169;
bool _170;
frost$core$Bit _171;
bool _173;
frost$collections$Array** _176;
frost$collections$Array* _177;
frost$core$Int _178;
frost$unsafe$Pointer _179;
int64_t _180;
frost$core$UInt32 _181;
uint32_t _184;
int64_t _185;
frost$core$Int64 _186;
frost$core$Int64$nullable _188;
frost$core$Object* _189;
frost$core$Int _191;
int64_t _192;
int64_t _193;
bool _194;
frost$core$Bit _195;
bool _196;
frost$collections$CollectionView* _198;
$fn179 _199;
frost$core$Int _200;
int64_t _201;
int64_t _202;
bool _203;
frost$core$Bit _204;
bool _205;
frost$core$Int _207;
frost$unsafe$Pointer* _211;
frost$unsafe$Pointer _212;
int64_t _213;
frost$core$Int64 _214;
int64_t _215;
frost$core$Object* _216;
frost$core$Object* _218;
frost$core$Object* _219;
frost$core$Object* _223;
frost$core$Int _226;
int64_t _229;
int64_t _230;
bool _231;
frost$core$Bit _232;
bool _234;
frost$collections$Array** _237;
frost$collections$Array* _238;
frost$core$Int _239;
frost$unsafe$Pointer _240;
int64_t _241;
frost$core$UInt64 _242;
uint64_t _245;
int64_t _246;
frost$core$Int64 _247;
frost$core$Int64$nullable _249;
frost$core$Object* _250;
frost$core$Int _252;
int64_t _253;
int64_t _254;
bool _255;
frost$core$Bit _256;
bool _257;
frost$collections$CollectionView* _259;
$fn180 _260;
frost$core$Int _261;
int64_t _262;
int64_t _263;
bool _264;
frost$core$Bit _265;
bool _266;
frost$core$Int _268;
frost$unsafe$Pointer* _272;
frost$unsafe$Pointer _273;
int64_t _274;
frost$core$Int64 _275;
int64_t _276;
frost$core$Object* _277;
frost$core$Object* _279;
frost$core$Object* _280;
frost$core$Object* _284;
frost$core$Int _288;
frost$core$Weak** _294;
frost$core$Weak* _295;
frost$core$Bit* _300;
frost$core$Bit _301;
bool _303;
frost$core$Int _305;
frost$core$Object** _309;
frost$core$Object* _310;
frost$core$Object* _311;
frost$core$Object* _312;
org$frostlang$frostc$Compiler* _315;
bool _316;
frost$core$Bit _317;
bool _318;
frost$core$Int _320;
org$frostlang$frostc$Compiler* _323;
frost$core$Weak** _324;
frost$core$Weak* _325;
frost$core$Bit* _330;
frost$core$Bit _331;
bool _333;
frost$core$Int _335;
frost$core$Object** _339;
frost$core$Object* _340;
frost$core$Object* _341;
frost$core$Object* _342;
org$frostlang$frostc$ClassDecl* _345;
frost$collections$ListView* _346;
frost$collections$CollectionView* _347;
$fn181 _348;
frost$core$Int _349;
frost$core$Int _350;
int64_t _353;
int64_t _354;
bool _355;
frost$core$Bit _356;
bool _358;
frost$core$Int _360;
frost$core$Object* _363;
frost$core$Object* _365;
frost$core$Object* _367;
frost$collections$Array** _370;
frost$collections$Array* _371;
frost$core$Int _372;
$fn182 _373;
frost$core$Int64 _374;
frost$core$Int64$nullable _375;
frost$core$Object* _376;
frost$core$Int _378;
int64_t _379;
int64_t _380;
bool _381;
frost$core$Bit _382;
bool _383;
frost$collections$CollectionView* _385;
$fn183 _386;
frost$core$Int _387;
int64_t _388;
int64_t _389;
bool _390;
frost$core$Bit _391;
bool _392;
frost$core$Int _394;
frost$unsafe$Pointer* _398;
frost$unsafe$Pointer _399;
int64_t _400;
frost$core$Int64 _401;
int64_t _402;
frost$core$Object* _403;
frost$core$Object* _405;
frost$core$Object* _406;
frost$core$Object* _410;
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
_34 = frost$unsafe$Pointer$init$frost$core$Int(_33);
*(&local0) = _34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:417
_37 = &param0->memoryLayout;
_38 = *_37;
_39 = &param4->type;
_40 = *_39;
_41 = ($fn188) _38->$class->vtable[7];
_42 = _41(_38, _40);
_43 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:418:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_46 = _42.value;
_47 = _43.value;
_48 = _46 == _47;
_49 = (frost$core$Bit) {_48};
_51 = _49.value;
if (_51) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:419
_54 = &param1->statements;
_55 = *_54;
_56 = param2.value;
_57 = *(&local0);
_58 = _57.value;
_59 = *((frost$core$UInt8*)_58);
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
_70 = _56.value;
_71 = _69.value;
_72 = _70 >= _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block16; else goto block15;
block16:;
_76 = ((frost$collections$CollectionView*) _55);
ITable* $tmp191 = _76->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp191 = $tmp191->next;
}
_77 = $tmp191->methods[0];
_78 = _77(_76);
_79 = _56.value;
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
_89 = &_55->data;
_90 = *_89;
_91 = _90.value;
_92 = frost$core$Int64$init$frost$core$Int(_56);
_93 = _92.value;
_94 = _67;
frost$core$Frost$ref$frost$core$Object$Q(_94);
_96 = ((frost$core$Object**)_91)[_93];
_97 = _96;
frost$core$Frost$unref$frost$core$Object$Q(_97);
((frost$core$Object**)_91)[_93] = _67;
_101 = _67;
frost$core$Frost$unref$frost$core$Object$Q(_101);
goto block8;
block10:;
_104 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:421:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_107 = _42.value;
_108 = _104.value;
_109 = _107 == _108;
_110 = (frost$core$Bit) {_109};
_112 = _110.value;
if (_112) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:422
_115 = &param1->statements;
_116 = *_115;
_117 = param2.value;
_118 = *(&local0);
_119 = _118.value;
_120 = *((frost$core$UInt16*)_119);
// begin inline call to function frost.core.UInt16.get_asInt64():frost.core.Int64 from Interpreter.frost:422:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1094
_123 = _120.value;
_124 = ((int64_t) _123);
_125 = (frost$core$Int64) {_124};
_127 = ((frost$core$Int64$nullable) { _125, true });
frost$core$Object* $tmp194;
if (_127.nonnull) {
    frost$core$Int64$wrapper* $tmp195;
    $tmp195 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp195->value = ((frost$core$Int64) _127.value);
    $tmp194 = ((frost$core$Object*) $tmp195);
}
else {
    $tmp194 = NULL;
}
_128 = $tmp194;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:422:39
_130 = (frost$core$Int) {0u};
_131 = _117.value;
_132 = _130.value;
_133 = _131 >= _132;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block24; else goto block23;
block24:;
_137 = ((frost$collections$CollectionView*) _116);
ITable* $tmp196 = _137->$class->itable;
while ($tmp196->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp196 = $tmp196->next;
}
_138 = $tmp196->methods[0];
_139 = _138(_137);
_140 = _117.value;
_141 = _139.value;
_142 = _140 < _141;
_143 = (frost$core$Bit) {_142};
_144 = _143.value;
if (_144) goto block22; else goto block23;
block23:;
_146 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s197, _146, &$s198);
abort(); // unreachable
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_150 = &_116->data;
_151 = *_150;
_152 = _151.value;
_153 = frost$core$Int64$init$frost$core$Int(_117);
_154 = _153.value;
_155 = _128;
frost$core$Frost$ref$frost$core$Object$Q(_155);
_157 = ((frost$core$Object**)_152)[_154];
_158 = _157;
frost$core$Frost$unref$frost$core$Object$Q(_158);
((frost$core$Object**)_152)[_154] = _128;
_162 = _128;
frost$core$Frost$unref$frost$core$Object$Q(_162);
goto block8;
block18:;
_165 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:424:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_168 = _42.value;
_169 = _165.value;
_170 = _168 == _169;
_171 = (frost$core$Bit) {_170};
_173 = _171.value;
if (_173) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:425
_176 = &param1->statements;
_177 = *_176;
_178 = param2.value;
_179 = *(&local0);
_180 = _179.value;
_181 = *((frost$core$UInt32*)_180);
// begin inline call to function frost.core.UInt32.get_asInt64():frost.core.Int64 from Interpreter.frost:425:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:954
_184 = _181.value;
_185 = ((int64_t) _184);
_186 = (frost$core$Int64) {_185};
_188 = ((frost$core$Int64$nullable) { _186, true });
frost$core$Object* $tmp199;
if (_188.nonnull) {
    frost$core$Int64$wrapper* $tmp200;
    $tmp200 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp200->value = ((frost$core$Int64) _188.value);
    $tmp199 = ((frost$core$Object*) $tmp200);
}
else {
    $tmp199 = NULL;
}
_189 = $tmp199;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:425:39
_191 = (frost$core$Int) {0u};
_192 = _178.value;
_193 = _191.value;
_194 = _192 >= _193;
_195 = (frost$core$Bit) {_194};
_196 = _195.value;
if (_196) goto block32; else goto block31;
block32:;
_198 = ((frost$collections$CollectionView*) _177);
ITable* $tmp201 = _198->$class->itable;
while ($tmp201->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp201 = $tmp201->next;
}
_199 = $tmp201->methods[0];
_200 = _199(_198);
_201 = _178.value;
_202 = _200.value;
_203 = _201 < _202;
_204 = (frost$core$Bit) {_203};
_205 = _204.value;
if (_205) goto block30; else goto block31;
block31:;
_207 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s202, _207, &$s203);
abort(); // unreachable
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_211 = &_177->data;
_212 = *_211;
_213 = _212.value;
_214 = frost$core$Int64$init$frost$core$Int(_178);
_215 = _214.value;
_216 = _189;
frost$core$Frost$ref$frost$core$Object$Q(_216);
_218 = ((frost$core$Object**)_213)[_215];
_219 = _218;
frost$core$Frost$unref$frost$core$Object$Q(_219);
((frost$core$Object**)_213)[_215] = _189;
_223 = _189;
frost$core$Frost$unref$frost$core$Object$Q(_223);
goto block8;
block26:;
_226 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:427:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_229 = _42.value;
_230 = _226.value;
_231 = _229 == _230;
_232 = (frost$core$Bit) {_231};
_234 = _232.value;
if (_234) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:428
_237 = &param1->statements;
_238 = *_237;
_239 = param2.value;
_240 = *(&local0);
_241 = _240.value;
_242 = *((frost$core$UInt64*)_241);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Interpreter.frost:428:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_245 = _242.value;
_246 = ((int64_t) _245);
_247 = (frost$core$Int64) {_246};
_249 = ((frost$core$Int64$nullable) { _247, true });
frost$core$Object* $tmp204;
if (_249.nonnull) {
    frost$core$Int64$wrapper* $tmp205;
    $tmp205 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp205->value = ((frost$core$Int64) _249.value);
    $tmp204 = ((frost$core$Object*) $tmp205);
}
else {
    $tmp204 = NULL;
}
_250 = $tmp204;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:428:39
_252 = (frost$core$Int) {0u};
_253 = _239.value;
_254 = _252.value;
_255 = _253 >= _254;
_256 = (frost$core$Bit) {_255};
_257 = _256.value;
if (_257) goto block40; else goto block39;
block40:;
_259 = ((frost$collections$CollectionView*) _238);
ITable* $tmp206 = _259->$class->itable;
while ($tmp206->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp206 = $tmp206->next;
}
_260 = $tmp206->methods[0];
_261 = _260(_259);
_262 = _239.value;
_263 = _261.value;
_264 = _262 < _263;
_265 = (frost$core$Bit) {_264};
_266 = _265.value;
if (_266) goto block38; else goto block39;
block39:;
_268 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s207, _268, &$s208);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_272 = &_238->data;
_273 = *_272;
_274 = _273.value;
_275 = frost$core$Int64$init$frost$core$Int(_239);
_276 = _275.value;
_277 = _250;
frost$core$Frost$ref$frost$core$Object$Q(_277);
_279 = ((frost$core$Object**)_274)[_276];
_280 = _279;
frost$core$Frost$unref$frost$core$Object$Q(_280);
((frost$core$Object**)_274)[_276] = _250;
_284 = _250;
frost$core$Frost$unref$frost$core$Object$Q(_284);
goto block8;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:431
_288 = (frost$core$Int) {431u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s209, _288, &$s210);
abort(); // unreachable
block8:;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:437
_294 = &param0->compiler;
_295 = *_294;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:437:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_300 = &_295->_valid;
_301 = *_300;
_303 = _301.value;
if (_303) goto block43; else goto block44;
block44:;
_305 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s211, _305, &$s212);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_309 = &_295->value;
_310 = *_309;
_311 = _310;
_312 = _311;
frost$core$Frost$ref$frost$core$Object$Q(_312);
_315 = ((org$frostlang$frostc$Compiler*) _311);
_316 = _315 != NULL;
_317 = (frost$core$Bit) {_316};
_318 = _317.value;
if (_318) goto block45; else goto block46;
block46:;
_320 = (frost$core$Int) {437u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s213, _320, &$s214);
abort(); // unreachable
block45:;
_323 = _315;
_324 = &param4->owner;
_325 = *_324;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:437:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_330 = &_325->_valid;
_331 = *_330;
_333 = _331.value;
if (_333) goto block49; else goto block50;
block50:;
_335 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s215, _335, &$s216);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_339 = &_325->value;
_340 = *_339;
_341 = _340;
_342 = _341;
frost$core$Frost$ref$frost$core$Object$Q(_342);
_345 = ((org$frostlang$frostc$ClassDecl*) _341);
_346 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_323, _345);
_347 = ((frost$collections$CollectionView*) _346);
ITable* $tmp217 = _347->$class->itable;
while ($tmp217->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp217 = $tmp217->next;
}
_348 = $tmp217->methods[0];
_349 = _348(_347);
_350 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:437:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_353 = _349.value;
_354 = _350.value;
_355 = _353 == _354;
_356 = (frost$core$Bit) {_355};
_358 = _356.value;
if (_358) goto block52; else goto block53;
block53:;
_360 = (frost$core$Int) {437u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s218, _360);
abort(); // unreachable
block52:;
_363 = ((frost$core$Object*) _346);
frost$core$Frost$unref$frost$core$Object$Q(_363);
_365 = _341;
frost$core$Frost$unref$frost$core$Object$Q(_365);
_367 = _311;
frost$core$Frost$unref$frost$core$Object$Q(_367);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:438
_370 = &param1->statements;
_371 = *_370;
_372 = param2.value;
_373 = ($fn219) param1->$class->vtable[2];
_374 = _373(param1, param3);
_375 = ((frost$core$Int64$nullable) { _374, true });
frost$core$Object* $tmp220;
if (_375.nonnull) {
    frost$core$Int64$wrapper* $tmp221;
    $tmp221 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp221->value = ((frost$core$Int64) _375.value);
    $tmp220 = ((frost$core$Object*) $tmp221);
}
else {
    $tmp220 = NULL;
}
_376 = $tmp220;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:438:31
_378 = (frost$core$Int) {0u};
_379 = _372.value;
_380 = _378.value;
_381 = _379 >= _380;
_382 = (frost$core$Bit) {_381};
_383 = _382.value;
if (_383) goto block57; else goto block56;
block57:;
_385 = ((frost$collections$CollectionView*) _371);
ITable* $tmp222 = _385->$class->itable;
while ($tmp222->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp222 = $tmp222->next;
}
_386 = $tmp222->methods[0];
_387 = _386(_385);
_388 = _372.value;
_389 = _387.value;
_390 = _388 < _389;
_391 = (frost$core$Bit) {_390};
_392 = _391.value;
if (_392) goto block55; else goto block56;
block56:;
_394 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s223, _394, &$s224);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_398 = &_371->data;
_399 = *_398;
_400 = _399.value;
_401 = frost$core$Int64$init$frost$core$Int(_372);
_402 = _401.value;
_403 = _376;
frost$core$Frost$ref$frost$core$Object$Q(_403);
_405 = ((frost$core$Object**)_400)[_402];
_406 = _405;
frost$core$Frost$unref$frost$core$Object$Q(_406);
((frost$core$Object**)_400)[_402] = _376;
_410 = _376;
frost$core$Frost$unref$frost$core$Object$Q(_410);
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
frost$unsafe$Pointer* _30;
frost$unsafe$Pointer _31;
int64_t _32;
frost$core$Int64 _33;
int64_t _34;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Object* _38;
frost$core$Object* _42;
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
_32 = _31.value;
_33 = frost$core$Int64$init$frost$core$Int(_3);
_34 = _33.value;
_35 = _8;
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object**)_32)[_34];
_38 = _37;
frost$core$Frost$unref$frost$core$Object$Q(_38);
((frost$core$Object**)_32)[_34] = _8;
_42 = _8;
frost$core$Frost$unref$frost$core$Object$Q(_42);
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
frost$unsafe$Pointer* _53;
frost$unsafe$Pointer _54;
int64_t _55;
frost$core$Int64 _56;
int64_t _57;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _61;
frost$core$Object* _65;
frost$core$Int _68;
int64_t _71;
int64_t _72;
bool _73;
frost$core$Bit _74;
bool _76;
frost$collections$Array** _79;
frost$collections$Array* _80;
frost$core$Int _81;
frost$core$Int64 _82;
frost$core$Int64 _83;
int64_t _84;
int64_t _85;
int64_t _86;
frost$core$Int64 _87;
frost$core$Int64$nullable _88;
frost$core$Object* _89;
frost$core$Int _91;
int64_t _92;
int64_t _93;
bool _94;
frost$core$Bit _95;
bool _96;
frost$collections$CollectionView* _98;
$fn243 _99;
frost$core$Int _100;
int64_t _101;
int64_t _102;
bool _103;
frost$core$Bit _104;
bool _105;
frost$core$Int _107;
frost$unsafe$Pointer* _111;
frost$unsafe$Pointer _112;
int64_t _113;
frost$core$Int64 _114;
int64_t _115;
frost$core$Object* _116;
frost$core$Object* _118;
frost$core$Object* _119;
frost$core$Object* _123;
frost$core$Int _126;
int64_t _129;
int64_t _130;
bool _131;
frost$core$Bit _132;
bool _134;
frost$collections$Array** _137;
frost$collections$Array* _138;
frost$core$Int _139;
frost$core$Int64 _140;
frost$core$Int64 _141;
int64_t _142;
int64_t _143;
int64_t _144;
frost$core$Int64 _145;
frost$core$Int64$nullable _146;
frost$core$Object* _147;
frost$core$Int _149;
int64_t _150;
int64_t _151;
bool _152;
frost$core$Bit _153;
bool _154;
frost$collections$CollectionView* _156;
$fn244 _157;
frost$core$Int _158;
int64_t _159;
int64_t _160;
bool _161;
frost$core$Bit _162;
bool _163;
frost$core$Int _165;
frost$unsafe$Pointer* _169;
frost$unsafe$Pointer _170;
int64_t _171;
frost$core$Int64 _172;
int64_t _173;
frost$core$Object* _174;
frost$core$Object* _176;
frost$core$Object* _177;
frost$core$Object* _181;
frost$core$Int _184;
int64_t _187;
int64_t _188;
bool _189;
frost$core$Bit _190;
bool _192;
frost$collections$Array** _195;
frost$collections$Array* _196;
frost$core$Int _197;
frost$core$Int64 _198;
frost$core$Int64 _199;
int64_t _202;
int64_t _203;
int64_t _204;
frost$core$Int64 _205;
frost$core$Int64$nullable _207;
frost$core$Object* _208;
frost$core$Int _210;
int64_t _211;
int64_t _212;
bool _213;
frost$core$Bit _214;
bool _215;
frost$collections$CollectionView* _217;
$fn245 _218;
frost$core$Int _219;
int64_t _220;
int64_t _221;
bool _222;
frost$core$Bit _223;
bool _224;
frost$core$Int _226;
frost$unsafe$Pointer* _230;
frost$unsafe$Pointer _231;
int64_t _232;
frost$core$Int64 _233;
int64_t _234;
frost$core$Object* _235;
frost$core$Object* _237;
frost$core$Object* _238;
frost$core$Object* _242;
frost$core$Int _245;
int64_t _248;
int64_t _249;
bool _250;
frost$core$Bit _251;
bool _253;
frost$collections$Array** _256;
frost$collections$Array* _257;
frost$core$Int _258;
frost$core$Int64 _259;
frost$core$Int64 _260;
int64_t _261;
int64_t _262;
bool _263;
frost$core$Bit _264;
$fn246 _265;
frost$core$Int64 _266;
frost$core$Int64$nullable _267;
frost$core$Object* _268;
frost$core$Int _270;
int64_t _271;
int64_t _272;
bool _273;
frost$core$Bit _274;
bool _275;
frost$collections$CollectionView* _277;
$fn247 _278;
frost$core$Int _279;
int64_t _280;
int64_t _281;
bool _282;
frost$core$Bit _283;
bool _284;
frost$core$Int _286;
frost$unsafe$Pointer* _290;
frost$unsafe$Pointer _291;
int64_t _292;
frost$core$Int64 _293;
int64_t _294;
frost$core$Object* _295;
frost$core$Object* _297;
frost$core$Object* _298;
frost$core$Object* _302;
frost$core$Int _305;
int64_t _308;
int64_t _309;
bool _310;
frost$core$Bit _311;
bool _313;
frost$collections$Array** _316;
frost$collections$Array* _317;
frost$core$Int _318;
frost$core$Int64 _319;
frost$core$Int64 _320;
int64_t _321;
int64_t _322;
bool _323;
frost$core$Bit _324;
$fn248 _325;
frost$core$Int64 _326;
frost$core$Int64$nullable _327;
frost$core$Object* _328;
frost$core$Int _330;
int64_t _331;
int64_t _332;
bool _333;
frost$core$Bit _334;
bool _335;
frost$collections$CollectionView* _337;
$fn249 _338;
frost$core$Int _339;
int64_t _340;
int64_t _341;
bool _342;
frost$core$Bit _343;
bool _344;
frost$core$Int _346;
frost$unsafe$Pointer* _350;
frost$unsafe$Pointer _351;
int64_t _352;
frost$core$Int64 _353;
int64_t _354;
frost$core$Object* _355;
frost$core$Object* _357;
frost$core$Object* _358;
frost$core$Object* _362;
frost$core$Int _365;
int64_t _368;
int64_t _369;
bool _370;
frost$core$Bit _371;
bool _373;
frost$collections$Array** _376;
frost$collections$Array* _377;
frost$core$Int _378;
frost$core$Int64 _379;
frost$core$Int64 _380;
int64_t _381;
int64_t _382;
bool _383;
frost$core$Bit _384;
$fn250 _385;
frost$core$Int64 _386;
frost$core$Int64$nullable _387;
frost$core$Object* _388;
frost$core$Int _390;
int64_t _391;
int64_t _392;
bool _393;
frost$core$Bit _394;
bool _395;
frost$collections$CollectionView* _397;
$fn251 _398;
frost$core$Int _399;
int64_t _400;
int64_t _401;
bool _402;
frost$core$Bit _403;
bool _404;
frost$core$Int _406;
frost$unsafe$Pointer* _410;
frost$unsafe$Pointer _411;
int64_t _412;
frost$core$Int64 _413;
int64_t _414;
frost$core$Object* _415;
frost$core$Object* _417;
frost$core$Object* _418;
frost$core$Object* _422;
frost$core$Int _425;
int64_t _428;
int64_t _429;
bool _430;
frost$core$Bit _431;
bool _433;
frost$collections$Array** _436;
frost$collections$Array* _437;
frost$core$Int _438;
frost$core$Int64 _439;
frost$core$Int64 _440;
int64_t _441;
int64_t _442;
bool _443;
frost$core$Bit _444;
$fn252 _445;
frost$core$Int64 _446;
frost$core$Int64$nullable _447;
frost$core$Object* _448;
frost$core$Int _450;
int64_t _451;
int64_t _452;
bool _453;
frost$core$Bit _454;
bool _455;
frost$collections$CollectionView* _457;
$fn253 _458;
frost$core$Int _459;
int64_t _460;
int64_t _461;
bool _462;
frost$core$Bit _463;
bool _464;
frost$core$Int _466;
frost$unsafe$Pointer* _470;
frost$unsafe$Pointer _471;
int64_t _472;
frost$core$Int64 _473;
int64_t _474;
frost$core$Object* _475;
frost$core$Object* _477;
frost$core$Object* _478;
frost$core$Object* _482;
frost$core$Int _485;
int64_t _488;
int64_t _489;
bool _490;
frost$core$Bit _491;
bool _493;
frost$core$Int64 _496;
frost$core$Int64 _497;
int64_t _500;
int64_t _501;
bool _502;
frost$core$Bit _503;
bool _505;
frost$collections$Array** _508;
frost$collections$Array* _509;
frost$core$Int _510;
frost$core$Int64 _511;
frost$core$Int64$nullable _512;
frost$core$Object* _513;
frost$core$Int _515;
int64_t _516;
int64_t _517;
bool _518;
frost$core$Bit _519;
bool _520;
frost$collections$CollectionView* _522;
$fn254 _523;
frost$core$Int _524;
int64_t _525;
int64_t _526;
bool _527;
frost$core$Bit _528;
bool _529;
frost$core$Int _531;
frost$unsafe$Pointer* _535;
frost$unsafe$Pointer _536;
int64_t _537;
frost$core$Int64 _538;
int64_t _539;
frost$core$Object* _540;
frost$core$Object* _542;
frost$core$Object* _543;
frost$core$Object* _547;
frost$collections$Array** _552;
frost$collections$Array* _553;
frost$core$Int _554;
frost$core$Int64 _555;
frost$core$Int64$nullable _556;
frost$core$Object* _557;
frost$core$Int _559;
int64_t _560;
int64_t _561;
bool _562;
frost$core$Bit _563;
bool _564;
frost$collections$CollectionView* _566;
$fn255 _567;
frost$core$Int _568;
int64_t _569;
int64_t _570;
bool _571;
frost$core$Bit _572;
bool _573;
frost$core$Int _575;
frost$unsafe$Pointer* _579;
frost$unsafe$Pointer _580;
int64_t _581;
frost$core$Int64 _582;
int64_t _583;
frost$core$Object* _584;
frost$core$Object* _586;
frost$core$Object* _587;
frost$core$Object* _591;
frost$core$Int _596;
frost$core$Object* _597;
$fn256 _600;
frost$core$String* _601;
frost$core$String* _602;
frost$core$Object* _603;
frost$core$Object* _605;
frost$core$Object* _607;
frost$core$String* _610;
frost$core$Object* _612;
frost$core$Object* _614;
frost$core$Object* _616;
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
_55 = _54.value;
_56 = frost$core$Int64$init$frost$core$Int(_23);
_57 = _56.value;
_58 = _31;
frost$core$Frost$ref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object**)_55)[_57];
_61 = _60;
frost$core$Frost$unref$frost$core$Object$Q(_61);
((frost$core$Object**)_55)[_57] = _31;
_65 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_65);
goto block1;
block3:;
_68 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:470:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_71 = _9.value;
_72 = _68.value;
_73 = _71 == _72;
_74 = (frost$core$Bit) {_73};
_76 = _74.value;
if (_76) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:471
_79 = &param1->statements;
_80 = *_79;
_81 = param2.value;
_82 = *(&local0);
_83 = *(&local1);
_84 = _82.value;
_85 = _83.value;
_86 = _84 - _85;
_87 = (frost$core$Int64) {_86};
_88 = ((frost$core$Int64$nullable) { _87, true });
frost$core$Object* $tmp264;
if (_88.nonnull) {
    frost$core$Int64$wrapper* $tmp265;
    $tmp265 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp265->value = ((frost$core$Int64) _88.value);
    $tmp264 = ((frost$core$Object*) $tmp265);
}
else {
    $tmp264 = NULL;
}
_89 = $tmp264;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:471:35
_91 = (frost$core$Int) {0u};
_92 = _81.value;
_93 = _91.value;
_94 = _92 >= _93;
_95 = (frost$core$Bit) {_94};
_96 = _95.value;
if (_96) goto block15; else goto block14;
block15:;
_98 = ((frost$collections$CollectionView*) _80);
ITable* $tmp266 = _98->$class->itable;
while ($tmp266->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp266 = $tmp266->next;
}
_99 = $tmp266->methods[0];
_100 = _99(_98);
_101 = _81.value;
_102 = _100.value;
_103 = _101 < _102;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block13; else goto block14;
block14:;
_107 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s267, _107, &$s268);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_111 = &_80->data;
_112 = *_111;
_113 = _112.value;
_114 = frost$core$Int64$init$frost$core$Int(_81);
_115 = _114.value;
_116 = _89;
frost$core$Frost$ref$frost$core$Object$Q(_116);
_118 = ((frost$core$Object**)_113)[_115];
_119 = _118;
frost$core$Frost$unref$frost$core$Object$Q(_119);
((frost$core$Object**)_113)[_115] = _89;
_123 = _89;
frost$core$Frost$unref$frost$core$Object$Q(_123);
goto block1;
block10:;
_126 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:473:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_129 = _9.value;
_130 = _126.value;
_131 = _129 == _130;
_132 = (frost$core$Bit) {_131};
_134 = _132.value;
if (_134) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:474
_137 = &param1->statements;
_138 = *_137;
_139 = param2.value;
_140 = *(&local0);
_141 = *(&local1);
_142 = _140.value;
_143 = _141.value;
_144 = _142 / _143;
_145 = (frost$core$Int64) {_144};
_146 = ((frost$core$Int64$nullable) { _145, true });
frost$core$Object* $tmp269;
if (_146.nonnull) {
    frost$core$Int64$wrapper* $tmp270;
    $tmp270 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp270->value = ((frost$core$Int64) _146.value);
    $tmp269 = ((frost$core$Object*) $tmp270);
}
else {
    $tmp269 = NULL;
}
_147 = $tmp269;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:474:35
_149 = (frost$core$Int) {0u};
_150 = _139.value;
_151 = _149.value;
_152 = _150 >= _151;
_153 = (frost$core$Bit) {_152};
_154 = _153.value;
if (_154) goto block22; else goto block21;
block22:;
_156 = ((frost$collections$CollectionView*) _138);
ITable* $tmp271 = _156->$class->itable;
while ($tmp271->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp271 = $tmp271->next;
}
_157 = $tmp271->methods[0];
_158 = _157(_156);
_159 = _139.value;
_160 = _158.value;
_161 = _159 < _160;
_162 = (frost$core$Bit) {_161};
_163 = _162.value;
if (_163) goto block20; else goto block21;
block21:;
_165 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s272, _165, &$s273);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_169 = &_138->data;
_170 = *_169;
_171 = _170.value;
_172 = frost$core$Int64$init$frost$core$Int(_139);
_173 = _172.value;
_174 = _147;
frost$core$Frost$ref$frost$core$Object$Q(_174);
_176 = ((frost$core$Object**)_171)[_173];
_177 = _176;
frost$core$Frost$unref$frost$core$Object$Q(_177);
((frost$core$Object**)_171)[_173] = _147;
_181 = _147;
frost$core$Frost$unref$frost$core$Object$Q(_181);
goto block1;
block17:;
_184 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:476:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_187 = _9.value;
_188 = _184.value;
_189 = _187 == _188;
_190 = (frost$core$Bit) {_189};
_192 = _190.value;
if (_192) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:477
_195 = &param1->statements;
_196 = *_195;
_197 = param2.value;
_198 = *(&local0);
_199 = *(&local1);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Interpreter.frost:477:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:107
_202 = _198.value;
_203 = _199.value;
_204 = _202 % _203;
_205 = (frost$core$Int64) {_204};
_207 = ((frost$core$Int64$nullable) { _205, true });
frost$core$Object* $tmp274;
if (_207.nonnull) {
    frost$core$Int64$wrapper* $tmp275;
    $tmp275 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp275->value = ((frost$core$Int64) _207.value);
    $tmp274 = ((frost$core$Object*) $tmp275);
}
else {
    $tmp274 = NULL;
}
_208 = $tmp274;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:477:35
_210 = (frost$core$Int) {0u};
_211 = _197.value;
_212 = _210.value;
_213 = _211 >= _212;
_214 = (frost$core$Bit) {_213};
_215 = _214.value;
if (_215) goto block30; else goto block29;
block30:;
_217 = ((frost$collections$CollectionView*) _196);
ITable* $tmp276 = _217->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp276 = $tmp276->next;
}
_218 = $tmp276->methods[0];
_219 = _218(_217);
_220 = _197.value;
_221 = _219.value;
_222 = _220 < _221;
_223 = (frost$core$Bit) {_222};
_224 = _223.value;
if (_224) goto block28; else goto block29;
block29:;
_226 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s277, _226, &$s278);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_230 = &_196->data;
_231 = *_230;
_232 = _231.value;
_233 = frost$core$Int64$init$frost$core$Int(_197);
_234 = _233.value;
_235 = _208;
frost$core$Frost$ref$frost$core$Object$Q(_235);
_237 = ((frost$core$Object**)_232)[_234];
_238 = _237;
frost$core$Frost$unref$frost$core$Object$Q(_238);
((frost$core$Object**)_232)[_234] = _208;
_242 = _208;
frost$core$Frost$unref$frost$core$Object$Q(_242);
goto block1;
block24:;
_245 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:479:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_248 = _9.value;
_249 = _245.value;
_250 = _248 == _249;
_251 = (frost$core$Bit) {_250};
_253 = _251.value;
if (_253) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:480
_256 = &param1->statements;
_257 = *_256;
_258 = param2.value;
_259 = *(&local0);
_260 = *(&local1);
_261 = _259.value;
_262 = _260.value;
_263 = _261 > _262;
_264 = (frost$core$Bit) {_263};
_265 = ($fn279) param0->$class->vtable[21];
_266 = _265(param0, _264);
_267 = ((frost$core$Int64$nullable) { _266, true });
frost$core$Object* $tmp280;
if (_267.nonnull) {
    frost$core$Int64$wrapper* $tmp281;
    $tmp281 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp281->value = ((frost$core$Int64) _267.value);
    $tmp280 = ((frost$core$Object*) $tmp281);
}
else {
    $tmp280 = NULL;
}
_268 = $tmp280;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:480:35
_270 = (frost$core$Int) {0u};
_271 = _258.value;
_272 = _270.value;
_273 = _271 >= _272;
_274 = (frost$core$Bit) {_273};
_275 = _274.value;
if (_275) goto block37; else goto block36;
block37:;
_277 = ((frost$collections$CollectionView*) _257);
ITable* $tmp282 = _277->$class->itable;
while ($tmp282->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp282 = $tmp282->next;
}
_278 = $tmp282->methods[0];
_279 = _278(_277);
_280 = _258.value;
_281 = _279.value;
_282 = _280 < _281;
_283 = (frost$core$Bit) {_282};
_284 = _283.value;
if (_284) goto block35; else goto block36;
block36:;
_286 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s283, _286, &$s284);
abort(); // unreachable
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_290 = &_257->data;
_291 = *_290;
_292 = _291.value;
_293 = frost$core$Int64$init$frost$core$Int(_258);
_294 = _293.value;
_295 = _268;
frost$core$Frost$ref$frost$core$Object$Q(_295);
_297 = ((frost$core$Object**)_292)[_294];
_298 = _297;
frost$core$Frost$unref$frost$core$Object$Q(_298);
((frost$core$Object**)_292)[_294] = _268;
_302 = _268;
frost$core$Frost$unref$frost$core$Object$Q(_302);
goto block1;
block32:;
_305 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:482:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_308 = _9.value;
_309 = _305.value;
_310 = _308 == _309;
_311 = (frost$core$Bit) {_310};
_313 = _311.value;
if (_313) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:483
_316 = &param1->statements;
_317 = *_316;
_318 = param2.value;
_319 = *(&local0);
_320 = *(&local1);
_321 = _319.value;
_322 = _320.value;
_323 = _321 >= _322;
_324 = (frost$core$Bit) {_323};
_325 = ($fn285) param0->$class->vtable[21];
_326 = _325(param0, _324);
_327 = ((frost$core$Int64$nullable) { _326, true });
frost$core$Object* $tmp286;
if (_327.nonnull) {
    frost$core$Int64$wrapper* $tmp287;
    $tmp287 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp287->value = ((frost$core$Int64) _327.value);
    $tmp286 = ((frost$core$Object*) $tmp287);
}
else {
    $tmp286 = NULL;
}
_328 = $tmp286;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:483:35
_330 = (frost$core$Int) {0u};
_331 = _318.value;
_332 = _330.value;
_333 = _331 >= _332;
_334 = (frost$core$Bit) {_333};
_335 = _334.value;
if (_335) goto block44; else goto block43;
block44:;
_337 = ((frost$collections$CollectionView*) _317);
ITable* $tmp288 = _337->$class->itable;
while ($tmp288->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp288 = $tmp288->next;
}
_338 = $tmp288->methods[0];
_339 = _338(_337);
_340 = _318.value;
_341 = _339.value;
_342 = _340 < _341;
_343 = (frost$core$Bit) {_342};
_344 = _343.value;
if (_344) goto block42; else goto block43;
block43:;
_346 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s289, _346, &$s290);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_350 = &_317->data;
_351 = *_350;
_352 = _351.value;
_353 = frost$core$Int64$init$frost$core$Int(_318);
_354 = _353.value;
_355 = _328;
frost$core$Frost$ref$frost$core$Object$Q(_355);
_357 = ((frost$core$Object**)_352)[_354];
_358 = _357;
frost$core$Frost$unref$frost$core$Object$Q(_358);
((frost$core$Object**)_352)[_354] = _328;
_362 = _328;
frost$core$Frost$unref$frost$core$Object$Q(_362);
goto block1;
block39:;
_365 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:485:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_368 = _9.value;
_369 = _365.value;
_370 = _368 == _369;
_371 = (frost$core$Bit) {_370};
_373 = _371.value;
if (_373) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:486
_376 = &param1->statements;
_377 = *_376;
_378 = param2.value;
_379 = *(&local0);
_380 = *(&local1);
_381 = _379.value;
_382 = _380.value;
_383 = _381 < _382;
_384 = (frost$core$Bit) {_383};
_385 = ($fn291) param0->$class->vtable[21];
_386 = _385(param0, _384);
_387 = ((frost$core$Int64$nullable) { _386, true });
frost$core$Object* $tmp292;
if (_387.nonnull) {
    frost$core$Int64$wrapper* $tmp293;
    $tmp293 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp293->value = ((frost$core$Int64) _387.value);
    $tmp292 = ((frost$core$Object*) $tmp293);
}
else {
    $tmp292 = NULL;
}
_388 = $tmp292;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:486:35
_390 = (frost$core$Int) {0u};
_391 = _378.value;
_392 = _390.value;
_393 = _391 >= _392;
_394 = (frost$core$Bit) {_393};
_395 = _394.value;
if (_395) goto block51; else goto block50;
block51:;
_397 = ((frost$collections$CollectionView*) _377);
ITable* $tmp294 = _397->$class->itable;
while ($tmp294->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp294 = $tmp294->next;
}
_398 = $tmp294->methods[0];
_399 = _398(_397);
_400 = _378.value;
_401 = _399.value;
_402 = _400 < _401;
_403 = (frost$core$Bit) {_402};
_404 = _403.value;
if (_404) goto block49; else goto block50;
block50:;
_406 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s295, _406, &$s296);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_410 = &_377->data;
_411 = *_410;
_412 = _411.value;
_413 = frost$core$Int64$init$frost$core$Int(_378);
_414 = _413.value;
_415 = _388;
frost$core$Frost$ref$frost$core$Object$Q(_415);
_417 = ((frost$core$Object**)_412)[_414];
_418 = _417;
frost$core$Frost$unref$frost$core$Object$Q(_418);
((frost$core$Object**)_412)[_414] = _388;
_422 = _388;
frost$core$Frost$unref$frost$core$Object$Q(_422);
goto block1;
block46:;
_425 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:488:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_428 = _9.value;
_429 = _425.value;
_430 = _428 == _429;
_431 = (frost$core$Bit) {_430};
_433 = _431.value;
if (_433) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:489
_436 = &param1->statements;
_437 = *_436;
_438 = param2.value;
_439 = *(&local0);
_440 = *(&local1);
_441 = _439.value;
_442 = _440.value;
_443 = _441 <= _442;
_444 = (frost$core$Bit) {_443};
_445 = ($fn297) param0->$class->vtable[21];
_446 = _445(param0, _444);
_447 = ((frost$core$Int64$nullable) { _446, true });
frost$core$Object* $tmp298;
if (_447.nonnull) {
    frost$core$Int64$wrapper* $tmp299;
    $tmp299 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp299->value = ((frost$core$Int64) _447.value);
    $tmp298 = ((frost$core$Object*) $tmp299);
}
else {
    $tmp298 = NULL;
}
_448 = $tmp298;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:489:35
_450 = (frost$core$Int) {0u};
_451 = _438.value;
_452 = _450.value;
_453 = _451 >= _452;
_454 = (frost$core$Bit) {_453};
_455 = _454.value;
if (_455) goto block58; else goto block57;
block58:;
_457 = ((frost$collections$CollectionView*) _437);
ITable* $tmp300 = _457->$class->itable;
while ($tmp300->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp300 = $tmp300->next;
}
_458 = $tmp300->methods[0];
_459 = _458(_457);
_460 = _438.value;
_461 = _459.value;
_462 = _460 < _461;
_463 = (frost$core$Bit) {_462};
_464 = _463.value;
if (_464) goto block56; else goto block57;
block57:;
_466 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s301, _466, &$s302);
abort(); // unreachable
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_470 = &_437->data;
_471 = *_470;
_472 = _471.value;
_473 = frost$core$Int64$init$frost$core$Int(_438);
_474 = _473.value;
_475 = _448;
frost$core$Frost$ref$frost$core$Object$Q(_475);
_477 = ((frost$core$Object**)_472)[_474];
_478 = _477;
frost$core$Frost$unref$frost$core$Object$Q(_478);
((frost$core$Object**)_472)[_474] = _448;
_482 = _448;
frost$core$Frost$unref$frost$core$Object$Q(_482);
goto block1;
block53:;
_485 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:491:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_488 = _9.value;
_489 = _485.value;
_490 = _488 == _489;
_491 = (frost$core$Bit) {_490};
_493 = _491.value;
if (_493) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:492
_496 = *(&local0);
_497 = *(&local1);
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Interpreter.frost:492:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
_500 = _496.value;
_501 = _497.value;
_502 = _500 == _501;
_503 = (frost$core$Bit) {_502};
_505 = _503.value;
if (_505) goto block62; else goto block64;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:493
_508 = &param1->statements;
_509 = *_508;
_510 = param2.value;
_511 = (frost$core$Int64) {1u};
_512 = ((frost$core$Int64$nullable) { _511, true });
frost$core$Object* $tmp303;
if (_512.nonnull) {
    frost$core$Int64$wrapper* $tmp304;
    $tmp304 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp304->value = ((frost$core$Int64) _512.value);
    $tmp303 = ((frost$core$Object*) $tmp304);
}
else {
    $tmp303 = NULL;
}
_513 = $tmp303;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:493:39
_515 = (frost$core$Int) {0u};
_516 = _510.value;
_517 = _515.value;
_518 = _516 >= _517;
_519 = (frost$core$Bit) {_518};
_520 = _519.value;
if (_520) goto block69; else goto block68;
block69:;
_522 = ((frost$collections$CollectionView*) _509);
ITable* $tmp305 = _522->$class->itable;
while ($tmp305->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp305 = $tmp305->next;
}
_523 = $tmp305->methods[0];
_524 = _523(_522);
_525 = _510.value;
_526 = _524.value;
_527 = _525 < _526;
_528 = (frost$core$Bit) {_527};
_529 = _528.value;
if (_529) goto block67; else goto block68;
block68:;
_531 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s306, _531, &$s307);
abort(); // unreachable
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_535 = &_509->data;
_536 = *_535;
_537 = _536.value;
_538 = frost$core$Int64$init$frost$core$Int(_510);
_539 = _538.value;
_540 = _513;
frost$core$Frost$ref$frost$core$Object$Q(_540);
_542 = ((frost$core$Object**)_537)[_539];
_543 = _542;
frost$core$Frost$unref$frost$core$Object$Q(_543);
((frost$core$Object**)_537)[_539] = _513;
_547 = _513;
frost$core$Frost$unref$frost$core$Object$Q(_547);
goto block63;
block64:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:496
_552 = &param1->statements;
_553 = *_552;
_554 = param2.value;
_555 = (frost$core$Int64) {0u};
_556 = ((frost$core$Int64$nullable) { _555, true });
frost$core$Object* $tmp308;
if (_556.nonnull) {
    frost$core$Int64$wrapper* $tmp309;
    $tmp309 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp309->value = ((frost$core$Int64) _556.value);
    $tmp308 = ((frost$core$Object*) $tmp309);
}
else {
    $tmp308 = NULL;
}
_557 = $tmp308;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:496:39
_559 = (frost$core$Int) {0u};
_560 = _554.value;
_561 = _559.value;
_562 = _560 >= _561;
_563 = (frost$core$Bit) {_562};
_564 = _563.value;
if (_564) goto block73; else goto block72;
block73:;
_566 = ((frost$collections$CollectionView*) _553);
ITable* $tmp310 = _566->$class->itable;
while ($tmp310->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp310 = $tmp310->next;
}
_567 = $tmp310->methods[0];
_568 = _567(_566);
_569 = _554.value;
_570 = _568.value;
_571 = _569 < _570;
_572 = (frost$core$Bit) {_571};
_573 = _572.value;
if (_573) goto block71; else goto block72;
block72:;
_575 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s311, _575, &$s312);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_579 = &_553->data;
_580 = *_579;
_581 = _580.value;
_582 = frost$core$Int64$init$frost$core$Int(_554);
_583 = _582.value;
_584 = _557;
frost$core$Frost$ref$frost$core$Object$Q(_584);
_586 = ((frost$core$Object**)_581)[_583];
_587 = _586;
frost$core$Frost$unref$frost$core$Object$Q(_587);
((frost$core$Object**)_581)[_583] = _557;
_591 = _557;
frost$core$Frost$unref$frost$core$Object$Q(_591);
goto block63;
block63:;
goto block1;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:500
_596 = (frost$core$Int) {500u};
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp313;
$tmp313 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Binary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp313->value = param4;
_597 = ((frost$core$Object*) $tmp313);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:500:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_600 = ($fn314) _597->$class->vtable[0];
_601 = _600(_597);
_602 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s315, _601);
_603 = ((frost$core$Object*) _602);
frost$core$Frost$ref$frost$core$Object$Q(_603);
_605 = ((frost$core$Object*) _602);
frost$core$Frost$unref$frost$core$Object$Q(_605);
_607 = ((frost$core$Object*) _601);
frost$core$Frost$unref$frost$core$Object$Q(_607);
_610 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_602, &$s316);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s317, _596, _610);
_612 = ((frost$core$Object*) _610);
frost$core$Frost$unref$frost$core$Object$Q(_612);
_614 = ((frost$core$Object*) _602);
frost$core$Frost$unref$frost$core$Object$Q(_614);
_616 = _597;
frost$core$Frost$unref$frost$core$Object$Q(_616);
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
frost$unsafe$Pointer local17;
frost$unsafe$Pointer local18;
frost$unsafe$Pointer local19;
int64_t local20;
int64_t local21;
frost$unsafe$Pointer local22;
frost$unsafe$Pointer local23;
org$frostlang$frostc$ClassDecl* local24 = NULL;
org$frostlang$frostc$FixedArray* local25 = NULL;
org$frostlang$frostc$IR$Value* local26 = NULL;
org$frostlang$frostc$FixedArray* local27 = NULL;
org$frostlang$frostc$MethodDecl* local28 = NULL;
org$frostlang$frostc$IR$Value* local29 = NULL;
org$frostlang$frostc$FieldDecl* local30 = NULL;
org$frostlang$frostc$IR$Value* local31 = NULL;
org$frostlang$frostc$FieldDecl* local32 = NULL;
org$frostlang$frostc$IR$Value* local33 = NULL;
frost$core$Int local34;
frost$unsafe$Pointer local35;
org$frostlang$frostc$ClassDecl* local36 = NULL;
org$frostlang$frostc$MethodDecl* local37 = NULL;
org$frostlang$frostc$IR$Value* local38 = NULL;
frost$unsafe$Pointer local39;
org$frostlang$frostc$IR$Value* local40 = NULL;
org$frostlang$frostc$IR$Value* local41 = NULL;
org$frostlang$frostc$Type* local42 = NULL;
frost$unsafe$Pointer local43;
frost$core$Int local44;
frost$core$Int local45;
org$frostlang$frostc$IR$Value* local46 = NULL;
org$frostlang$frostc$IR$Value* local47 = NULL;
org$frostlang$frostc$IR$Value* local48 = NULL;
org$frostlang$frostc$Type* local49 = NULL;
frost$unsafe$Pointer local50;
frost$core$Int64 local51;
frost$core$Int local52;
frost$core$Int local53;
org$frostlang$frostc$IR$Value* local54 = NULL;
org$frostlang$frostc$MethodDecl* local55 = NULL;
org$frostlang$frostc$FixedArray* local56 = NULL;
org$frostlang$frostc$IR$Value* local57 = NULL;
org$frostlang$frostc$IR$Value* local58 = NULL;
frost$core$Int64 local59;
frost$core$Int64 local60;
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
frost$unsafe$Pointer* _193;
frost$unsafe$Pointer _194;
int64_t _195;
frost$core$Int64 _196;
int64_t _197;
frost$core$Object* _198;
frost$core$Object* _199;
frost$core$Object* _202;
frost$core$Object* _203;
frost$core$Object* _205;
org$frostlang$frostc$Interpreter$Context* _208;
$fn322 _209;
frost$core$Int64 _210;
frost$core$Object* _211;
org$frostlang$frostc$Interpreter$Code* _213;
frost$core$Object* _214;
org$frostlang$frostc$Interpreter$Context* _220;
org$frostlang$frostc$Interpreter$Code* _221;
bool _222;
frost$core$Bit _223;
bool _224;
frost$core$Int _226;
org$frostlang$frostc$Interpreter$Code* _229;
frost$core$Object* _232;
org$frostlang$frostc$Interpreter$Context* _234;
frost$core$Object* _235;
frost$core$Object* _238;
frost$collections$Iterable* _241;
$fn323 _242;
frost$collections$Iterator* _243;
$fn324 _245;
frost$core$Bit _246;
bool _247;
$fn325 _250;
frost$core$Object* _251;
org$frostlang$frostc$IR$Value* _252;
frost$core$Object* _253;
org$frostlang$frostc$IR$Value* _255;
frost$core$Object* _256;
org$frostlang$frostc$Interpreter$Context* _260;
frost$collections$Array** _261;
frost$collections$Array* _262;
frost$collections$Stack** _263;
frost$collections$Stack* _264;
frost$core$Int _265;
frost$core$Int _267;
int64_t _268;
int64_t _269;
bool _270;
frost$core$Bit _271;
bool _272;
frost$collections$Array** _276;
frost$collections$Array* _277;
frost$collections$CollectionView* _278;
$fn326 _279;
frost$core$Int _280;
int64_t _282;
int64_t _283;
bool _284;
frost$core$Bit _285;
bool _286;
frost$core$Int _288;
frost$collections$Array** _292;
frost$collections$Array* _293;
frost$collections$CollectionView* _294;
$fn327 _295;
frost$core$Int _296;
int64_t _297;
int64_t _298;
bool _299;
frost$core$Bit _300;
bool _301;
frost$core$Int _303;
frost$collections$Array** _307;
frost$collections$Array* _308;
frost$collections$Array** _309;
frost$collections$Array* _310;
frost$collections$CollectionView* _311;
$fn328 _312;
frost$core$Int _313;
frost$core$Int _314;
int64_t _315;
int64_t _316;
int64_t _317;
frost$core$Int _318;
int64_t _319;
int64_t _320;
int64_t _321;
frost$core$Int _322;
frost$core$Int _324;
int64_t _325;
int64_t _326;
bool _327;
frost$core$Bit _328;
bool _329;
frost$collections$CollectionView* _331;
$fn329 _332;
frost$core$Int _333;
int64_t _334;
int64_t _335;
bool _336;
frost$core$Bit _337;
bool _338;
frost$core$Int _340;
frost$unsafe$Pointer* _344;
frost$unsafe$Pointer _345;
int64_t _346;
frost$core$Int64 _347;
int64_t _348;
frost$core$Object* _349;
frost$core$Object* _350;
frost$core$Object* _353;
frost$core$Object* _354;
frost$core$Object* _356;
org$frostlang$frostc$Interpreter$Context* _359;
org$frostlang$frostc$IR$Value* _360;
$fn330 _361;
frost$core$Int64 _362;
frost$core$Object* _363;
frost$core$Object* _365;
frost$core$Object* _367;
frost$core$Object* _369;
org$frostlang$frostc$IR$Value* _371;
frost$core$Object* _372;
frost$core$Object* _376;
frost$collections$Stack** _379;
frost$collections$Stack* _380;
org$frostlang$frostc$Interpreter$Context* _381;
frost$core$Object* _382;
frost$collections$Array** _385;
frost$collections$Array* _386;
frost$core$Object* _387;
frost$core$Int _391;
frost$core$Int _394;
org$frostlang$frostc$Interpreter$Code* _399;
bool _400;
frost$core$Bit _401;
bool _402;
frost$core$Int _404;
org$frostlang$frostc$Interpreter$Code* _407;
frost$collections$Array** _408;
frost$collections$Array* _409;
frost$core$Int _410;
frost$core$Int _412;
int64_t _413;
int64_t _414;
bool _415;
frost$core$Bit _416;
bool _417;
frost$collections$CollectionView* _419;
$fn331 _420;
frost$core$Int _421;
int64_t _422;
int64_t _423;
bool _424;
frost$core$Bit _425;
bool _426;
frost$core$Int _428;
frost$unsafe$Pointer* _432;
frost$unsafe$Pointer _433;
int64_t _434;
frost$core$Int64 _435;
int64_t _436;
frost$core$Object* _437;
frost$core$Object* _438;
frost$collections$Array* _441;
frost$core$Int _442;
frost$core$Int _444;
int64_t _445;
int64_t _446;
bool _447;
frost$core$Bit _448;
bool _449;
frost$collections$CollectionView* _451;
$fn332 _452;
frost$core$Int _453;
int64_t _454;
int64_t _455;
bool _456;
frost$core$Bit _457;
bool _458;
frost$core$Int _460;
frost$unsafe$Pointer* _464;
frost$unsafe$Pointer _465;
int64_t _466;
frost$core$Int64 _467;
int64_t _468;
frost$core$Object* _469;
frost$core$Object* _470;
org$frostlang$frostc$IR$Statement$ID _473;
frost$core$Object* _475;
frost$core$Object* _477;
org$frostlang$frostc$Interpreter$Code* _480;
bool _481;
frost$core$Bit _482;
bool _483;
frost$core$Int _485;
org$frostlang$frostc$Interpreter$Code* _488;
frost$collections$Array** _489;
frost$collections$Array* _490;
frost$core$Int _491;
frost$core$Int _493;
int64_t _494;
int64_t _495;
bool _496;
frost$core$Bit _497;
bool _498;
frost$collections$CollectionView* _500;
$fn333 _501;
frost$core$Int _502;
int64_t _503;
int64_t _504;
bool _505;
frost$core$Bit _506;
bool _507;
frost$core$Int _509;
frost$unsafe$Pointer* _513;
frost$unsafe$Pointer _514;
int64_t _515;
frost$core$Int64 _516;
int64_t _517;
frost$core$Object* _518;
frost$core$Object* _519;
frost$collections$Array* _522;
frost$core$Int _523;
frost$core$Int _525;
int64_t _526;
int64_t _527;
bool _528;
frost$core$Bit _529;
bool _530;
frost$collections$CollectionView* _532;
$fn334 _533;
frost$core$Int _534;
int64_t _535;
int64_t _536;
bool _537;
frost$core$Bit _538;
bool _539;
frost$core$Int _541;
frost$unsafe$Pointer* _545;
frost$unsafe$Pointer _546;
int64_t _547;
frost$core$Int64 _548;
int64_t _549;
frost$core$Object* _550;
frost$core$Object* _551;
org$frostlang$frostc$IR$Statement* _554;
frost$core$Object* _556;
org$frostlang$frostc$IR$Statement* _558;
frost$core$Object* _559;
frost$core$Object* _562;
frost$core$Object* _564;
org$frostlang$frostc$IR$Statement* _567;
frost$core$Int* _568;
frost$core$Int _569;
frost$core$Int _570;
int64_t _573;
int64_t _574;
bool _575;
frost$core$Bit _576;
bool _578;
org$frostlang$frostc$MethodPosition* _580;
org$frostlang$frostc$MethodPosition _581;
org$frostlang$frostc$IR$Value** _582;
org$frostlang$frostc$IR$Value* _583;
frost$core$Object* _585;
org$frostlang$frostc$IR$Value* _587;
frost$core$Object* _588;
org$frostlang$frostc$expression$Binary$Operator* _591;
org$frostlang$frostc$expression$Binary$Operator _592;
org$frostlang$frostc$IR$Value** _594;
org$frostlang$frostc$IR$Value* _595;
frost$core$Object* _597;
org$frostlang$frostc$IR$Value* _599;
frost$core$Object* _600;
org$frostlang$frostc$Type** _603;
org$frostlang$frostc$Type* _604;
org$frostlang$frostc$Interpreter$Context* _606;
org$frostlang$frostc$IR$Statement$ID _607;
org$frostlang$frostc$IR$Value* _608;
org$frostlang$frostc$expression$Binary$Operator _609;
org$frostlang$frostc$IR$Value* _610;
$fn335 _611;
org$frostlang$frostc$IR$Value* _613;
frost$core$Object* _614;
org$frostlang$frostc$IR$Value* _617;
frost$core$Object* _618;
frost$core$Int _622;
int64_t _625;
int64_t _626;
bool _627;
frost$core$Bit _628;
bool _630;
org$frostlang$frostc$MethodPosition* _632;
org$frostlang$frostc$MethodPosition _633;
org$frostlang$frostc$IR$Block$ID* _634;
org$frostlang$frostc$IR$Block$ID _635;
org$frostlang$frostc$Interpreter$Code* _638;
bool _639;
frost$core$Bit _640;
bool _641;
frost$core$Int _643;
org$frostlang$frostc$Interpreter$Code* _646;
frost$collections$Array** _647;
frost$collections$Array* _648;
org$frostlang$frostc$IR$Block$ID _649;
frost$core$Int _650;
frost$core$Int _652;
int64_t _653;
int64_t _654;
bool _655;
frost$core$Bit _656;
bool _657;
frost$collections$CollectionView* _659;
$fn336 _660;
frost$core$Int _661;
int64_t _662;
int64_t _663;
bool _664;
frost$core$Bit _665;
bool _666;
frost$core$Int _668;
frost$unsafe$Pointer* _672;
frost$unsafe$Pointer _673;
int64_t _674;
frost$core$Int64 _675;
int64_t _676;
frost$core$Object* _677;
frost$core$Object* _678;
frost$core$Int _681;
frost$core$Object* _683;
frost$core$Int _686;
org$frostlang$frostc$IR$Statement* _689;
frost$core$Object* _690;
frost$core$Int _694;
int64_t _697;
int64_t _698;
bool _699;
frost$core$Bit _700;
bool _702;
org$frostlang$frostc$MethodPosition* _704;
org$frostlang$frostc$MethodPosition _705;
org$frostlang$frostc$IR$Value** _706;
org$frostlang$frostc$IR$Value* _707;
frost$core$Object* _709;
org$frostlang$frostc$IR$Value* _711;
frost$core$Object* _712;
org$frostlang$frostc$Type** _715;
org$frostlang$frostc$Type* _716;
frost$core$Object* _718;
org$frostlang$frostc$Type* _720;
frost$core$Object* _721;
frost$core$Bit* _724;
frost$core$Bit _725;
org$frostlang$frostc$Interpreter$Context* _727;
org$frostlang$frostc$IR$Statement$ID _728;
org$frostlang$frostc$IR$Value* _729;
org$frostlang$frostc$Type* _730;
$fn337 _731;
org$frostlang$frostc$Type* _733;
frost$core$Object* _734;
org$frostlang$frostc$IR$Value* _737;
frost$core$Object* _738;
frost$core$Int _742;
int64_t _745;
int64_t _746;
bool _747;
frost$core$Bit _748;
bool _750;
frost$core$Int _753;
int64_t _756;
int64_t _757;
bool _758;
frost$core$Bit _759;
bool _761;
org$frostlang$frostc$MethodPosition* _763;
org$frostlang$frostc$MethodPosition _764;
org$frostlang$frostc$IR$Value** _765;
org$frostlang$frostc$IR$Value* _766;
frost$core$Object* _768;
org$frostlang$frostc$IR$Value* _770;
frost$core$Object* _771;
org$frostlang$frostc$IR$Block$ID* _774;
org$frostlang$frostc$IR$Block$ID _775;
org$frostlang$frostc$IR$Block$ID* _777;
org$frostlang$frostc$IR$Block$ID _778;
org$frostlang$frostc$Interpreter$Context* _781;
org$frostlang$frostc$IR$Value* _782;
$fn338 _783;
frost$core$Int64 _784;
frost$core$Int64 _785;
int64_t _786;
int64_t _787;
bool _788;
frost$core$Bit _789;
bool _790;
org$frostlang$frostc$Interpreter$Code* _793;
bool _794;
frost$core$Bit _795;
bool _796;
frost$core$Int _798;
org$frostlang$frostc$Interpreter$Code* _801;
frost$collections$Array** _802;
frost$collections$Array* _803;
org$frostlang$frostc$IR$Block$ID _804;
frost$core$Int _805;
frost$core$Int _807;
int64_t _808;
int64_t _809;
bool _810;
frost$core$Bit _811;
bool _812;
frost$collections$CollectionView* _814;
$fn339 _815;
frost$core$Int _816;
int64_t _817;
int64_t _818;
bool _819;
frost$core$Bit _820;
bool _821;
frost$core$Int _823;
frost$unsafe$Pointer* _827;
frost$unsafe$Pointer _828;
int64_t _829;
frost$core$Int64 _830;
int64_t _831;
frost$core$Object* _832;
frost$core$Object* _833;
frost$core$Int _836;
frost$core$Object* _838;
org$frostlang$frostc$Interpreter$Code* _843;
bool _844;
frost$core$Bit _845;
bool _846;
frost$core$Int _848;
org$frostlang$frostc$Interpreter$Code* _851;
frost$collections$Array** _852;
frost$collections$Array* _853;
org$frostlang$frostc$IR$Block$ID _854;
frost$core$Int _855;
frost$core$Int _857;
int64_t _858;
int64_t _859;
bool _860;
frost$core$Bit _861;
bool _862;
frost$collections$CollectionView* _864;
$fn340 _865;
frost$core$Int _866;
int64_t _867;
int64_t _868;
bool _869;
frost$core$Bit _870;
bool _871;
frost$core$Int _873;
frost$unsafe$Pointer* _877;
frost$unsafe$Pointer _878;
int64_t _879;
frost$core$Int64 _880;
int64_t _881;
frost$core$Object* _882;
frost$core$Object* _883;
frost$core$Int _886;
frost$core$Object* _888;
frost$core$Int _892;
org$frostlang$frostc$IR$Value* _895;
frost$core$Object* _896;
org$frostlang$frostc$IR$Statement* _899;
frost$core$Object* _900;
frost$core$Int _904;
int64_t _907;
int64_t _908;
bool _909;
frost$core$Bit _910;
bool _912;
org$frostlang$frostc$MethodPosition* _914;
org$frostlang$frostc$MethodPosition _915;
org$frostlang$frostc$ClassDecl** _916;
org$frostlang$frostc$ClassDecl* _917;
frost$core$Object* _919;
org$frostlang$frostc$ClassDecl* _921;
frost$core$Object* _922;
org$frostlang$frostc$MemoryLayout** _926;
org$frostlang$frostc$MemoryLayout* _927;
org$frostlang$frostc$ClassDecl* _928;
org$frostlang$frostc$Type** _929;
org$frostlang$frostc$Type* _930;
$fn341 _931;
frost$core$Int _932;
int64_t _935;
int64_t _936;
int64_t _937;
int64_t* _940;
frost$unsafe$Pointer _942;
frost$unsafe$Pointer _945;
frost$unsafe$Pointer _949;
int64_t _950;
org$frostlang$frostc$ClassDecl* _951;
frost$core$Object* _952;
org$frostlang$frostc$ClassDecl* _954;
frost$core$Object* _955;
frost$unsafe$Pointer _959;
org$frostlang$frostc$MemoryLayout** _960;
org$frostlang$frostc$MemoryLayout* _961;
$fn342 _962;
frost$core$Int _963;
int64_t _966;
int64_t _971;
int64_t _972;
int64_t _973;
int64_t _974;
int64_t _975;
int64_t* _978;
frost$unsafe$Pointer _980;
frost$unsafe$Pointer _983;
int64_t _987;
frost$core$Int _988;
frost$unsafe$Pointer _990;
int64_t _991;
frost$core$Int32 _992;
org$frostlang$frostc$Interpreter$Context* _995;
frost$collections$Array** _996;
frost$collections$Array* _997;
org$frostlang$frostc$IR$Statement$ID _998;
frost$core$Int _999;
frost$unsafe$Pointer _1000;
int64_t _1003;
frost$core$Int _1004;
int64_t _1008;
int64_t _1009;
frost$core$Int64 _1010;
frost$core$Int64$nullable _1012;
frost$core$Object* _1013;
frost$core$Int _1015;
int64_t _1016;
int64_t _1017;
bool _1018;
frost$core$Bit _1019;
bool _1020;
frost$collections$CollectionView* _1022;
$fn343 _1023;
frost$core$Int _1024;
int64_t _1025;
int64_t _1026;
bool _1027;
frost$core$Bit _1028;
bool _1029;
frost$core$Int _1031;
frost$unsafe$Pointer* _1035;
frost$unsafe$Pointer _1036;
int64_t _1037;
frost$core$Int64 _1038;
int64_t _1039;
frost$core$Object* _1040;
frost$core$Object* _1042;
frost$core$Object* _1043;
frost$core$Object* _1047;
org$frostlang$frostc$ClassDecl* _1049;
frost$core$Object* _1050;
frost$core$Int _1054;
int64_t _1057;
int64_t _1058;
bool _1059;
frost$core$Bit _1060;
bool _1062;
org$frostlang$frostc$MethodPosition* _1064;
org$frostlang$frostc$MethodPosition _1065;
org$frostlang$frostc$ClassDecl** _1066;
org$frostlang$frostc$ClassDecl* _1067;
frost$core$Object* _1069;
org$frostlang$frostc$ClassDecl* _1071;
frost$core$Object* _1072;
org$frostlang$frostc$FixedArray** _1075;
org$frostlang$frostc$FixedArray* _1076;
frost$core$Object* _1078;
org$frostlang$frostc$FixedArray* _1080;
frost$core$Object* _1081;
org$frostlang$frostc$Interpreter$Context* _1085;
org$frostlang$frostc$IR$Statement$ID _1086;
org$frostlang$frostc$ClassDecl* _1087;
org$frostlang$frostc$FixedArray* _1088;
$fn344 _1089;
org$frostlang$frostc$FixedArray* _1091;
frost$core$Object* _1092;
org$frostlang$frostc$ClassDecl* _1095;
frost$core$Object* _1096;
frost$core$Int _1100;
int64_t _1103;
int64_t _1104;
bool _1105;
frost$core$Bit _1106;
bool _1108;
org$frostlang$frostc$MethodPosition* _1110;
org$frostlang$frostc$MethodPosition _1111;
org$frostlang$frostc$IR$Value** _1112;
org$frostlang$frostc$IR$Value* _1113;
frost$core$Object* _1115;
org$frostlang$frostc$IR$Value* _1117;
frost$core$Object* _1118;
org$frostlang$frostc$FixedArray** _1121;
org$frostlang$frostc$FixedArray* _1122;
frost$core$Object* _1124;
org$frostlang$frostc$FixedArray* _1126;
frost$core$Object* _1127;
org$frostlang$frostc$Interpreter$Context* _1131;
org$frostlang$frostc$IR$Value* _1132;
$fn345 _1133;
frost$core$Int64 _1134;
int64_t _1137;
int64_t _1138;
frost$core$Int _1139;
frost$unsafe$Pointer _1141;
org$frostlang$frostc$MethodDecl* _1142;
frost$core$Object* _1144;
org$frostlang$frostc$MethodDecl* _1146;
frost$core$Object* _1147;
org$frostlang$frostc$Interpreter$Context* _1151;
frost$collections$Array** _1152;
frost$collections$Array* _1153;
org$frostlang$frostc$IR$Statement$ID _1154;
frost$core$Int _1155;
org$frostlang$frostc$MethodDecl* _1156;
org$frostlang$frostc$FixedArray* _1157;
$fn346 _1158;
frost$core$Int64 _1159;
frost$core$Int64$nullable _1160;
frost$core$Object* _1161;
frost$core$Int _1163;
int64_t _1164;
int64_t _1165;
bool _1166;
frost$core$Bit _1167;
bool _1168;
frost$collections$CollectionView* _1170;
$fn347 _1171;
frost$core$Int _1172;
int64_t _1173;
int64_t _1174;
bool _1175;
frost$core$Bit _1176;
bool _1177;
frost$core$Int _1179;
frost$unsafe$Pointer* _1183;
frost$unsafe$Pointer _1184;
int64_t _1185;
frost$core$Int64 _1186;
int64_t _1187;
frost$core$Object* _1188;
frost$core$Object* _1190;
frost$core$Object* _1191;
frost$core$Object* _1195;
org$frostlang$frostc$MethodDecl* _1197;
frost$core$Object* _1198;
org$frostlang$frostc$FixedArray* _1201;
frost$core$Object* _1202;
org$frostlang$frostc$IR$Value* _1205;
frost$core$Object* _1206;
frost$core$Int _1210;
int64_t _1213;
int64_t _1214;
bool _1215;
frost$core$Bit _1216;
bool _1218;
org$frostlang$frostc$MethodPosition* _1220;
org$frostlang$frostc$MethodPosition _1221;
org$frostlang$frostc$IR$Value** _1222;
org$frostlang$frostc$IR$Value* _1223;
frost$core$Object* _1225;
org$frostlang$frostc$IR$Value* _1227;
frost$core$Object* _1228;
org$frostlang$frostc$FieldDecl** _1231;
org$frostlang$frostc$FieldDecl* _1232;
frost$core$Object* _1234;
org$frostlang$frostc$FieldDecl* _1236;
frost$core$Object* _1237;
org$frostlang$frostc$Interpreter$Context* _1241;
org$frostlang$frostc$IR$Statement$ID _1242;
org$frostlang$frostc$IR$Value* _1243;
org$frostlang$frostc$FieldDecl* _1244;
$fn348 _1245;
org$frostlang$frostc$FieldDecl* _1247;
frost$core$Object* _1248;
org$frostlang$frostc$IR$Value* _1251;
frost$core$Object* _1252;
frost$core$Int _1256;
int64_t _1259;
int64_t _1260;
bool _1261;
frost$core$Bit _1262;
bool _1264;
org$frostlang$frostc$MethodPosition* _1266;
org$frostlang$frostc$MethodPosition _1267;
org$frostlang$frostc$IR$Value** _1268;
org$frostlang$frostc$IR$Value* _1269;
frost$core$Object* _1271;
org$frostlang$frostc$IR$Value* _1273;
frost$core$Object* _1274;
org$frostlang$frostc$FieldDecl** _1277;
org$frostlang$frostc$FieldDecl* _1278;
frost$core$Object* _1280;
org$frostlang$frostc$FieldDecl* _1282;
frost$core$Object* _1283;
org$frostlang$frostc$Interpreter$Context* _1287;
org$frostlang$frostc$IR$Statement$ID _1288;
org$frostlang$frostc$IR$Value* _1289;
org$frostlang$frostc$FieldDecl* _1290;
$fn349 _1291;
org$frostlang$frostc$FieldDecl* _1293;
frost$core$Object* _1294;
org$frostlang$frostc$IR$Value* _1297;
frost$core$Object* _1298;
frost$core$Int _1302;
int64_t _1305;
int64_t _1306;
bool _1307;
frost$core$Bit _1308;
bool _1310;
org$frostlang$frostc$MethodPosition* _1312;
org$frostlang$frostc$MethodPosition _1313;
org$frostlang$frostc$IR$Value** _1314;
org$frostlang$frostc$IR$Value* _1315;
frost$core$Object* _1317;
org$frostlang$frostc$IR$Value* _1319;
frost$core$Object* _1320;
frost$core$Int* _1323;
frost$core$Int _1324;
org$frostlang$frostc$Type** _1326;
org$frostlang$frostc$Type* _1327;
org$frostlang$frostc$Interpreter$Context* _1329;
org$frostlang$frostc$IR$Value* _1330;
$fn350 _1331;
frost$core$Int64 _1332;
int64_t _1335;
int64_t _1336;
frost$core$Int _1337;
frost$unsafe$Pointer _1339;
frost$unsafe$Pointer _1342;
int64_t _1343;
frost$core$Int _1344;
frost$unsafe$Pointer _1345;
org$frostlang$frostc$ClassDecl* _1346;
frost$core$Object* _1348;
org$frostlang$frostc$ClassDecl* _1350;
frost$core$Object* _1351;
frost$core$Weak** _1355;
frost$core$Weak* _1356;
frost$core$Bit* _1361;
frost$core$Bit _1362;
bool _1364;
frost$core$Int _1366;
frost$core$Object** _1370;
frost$core$Object* _1371;
frost$core$Object* _1372;
frost$core$Object* _1373;
org$frostlang$frostc$Compiler* _1376;
bool _1377;
frost$core$Bit _1378;
bool _1379;
frost$core$Int _1381;
org$frostlang$frostc$Compiler* _1384;
org$frostlang$frostc$ClassDecl* _1385;
frost$collections$ListView* _1386;
frost$core$Int _1387;
$fn351 _1388;
frost$core$Object* _1389;
org$frostlang$frostc$MethodDecl* _1390;
frost$core$Object* _1392;
org$frostlang$frostc$MethodDecl* _1394;
frost$core$Object* _1395;
frost$core$Object* _1398;
frost$core$Object* _1400;
frost$core$Object* _1402;
org$frostlang$frostc$Interpreter$Context* _1405;
frost$collections$Array** _1406;
frost$collections$Array* _1407;
org$frostlang$frostc$IR$Statement$ID _1408;
frost$core$Int _1409;
org$frostlang$frostc$MethodDecl* _1410;
frost$core$Object* _1411;
frost$core$Int _1412;
frost$core$Int64 _1413;
frost$core$Int64$nullable _1414;
frost$core$Object* _1415;
frost$core$Int _1417;
int64_t _1418;
int64_t _1419;
bool _1420;
frost$core$Bit _1421;
bool _1422;
frost$collections$CollectionView* _1424;
$fn352 _1425;
frost$core$Int _1426;
int64_t _1427;
int64_t _1428;
bool _1429;
frost$core$Bit _1430;
bool _1431;
frost$core$Int _1433;
frost$unsafe$Pointer* _1437;
frost$unsafe$Pointer _1438;
int64_t _1439;
frost$core$Int64 _1440;
int64_t _1441;
frost$core$Object* _1442;
frost$core$Object* _1444;
frost$core$Object* _1445;
frost$core$Object* _1449;
org$frostlang$frostc$MethodDecl* _1451;
frost$core$Object* _1452;
org$frostlang$frostc$ClassDecl* _1455;
frost$core$Object* _1456;
org$frostlang$frostc$IR$Value* _1459;
frost$core$Object* _1460;
frost$core$Int _1464;
int64_t _1467;
int64_t _1468;
bool _1469;
frost$core$Bit _1470;
bool _1472;
org$frostlang$frostc$MethodPosition* _1474;
org$frostlang$frostc$MethodPosition _1475;
org$frostlang$frostc$IR$Value** _1476;
org$frostlang$frostc$IR$Value* _1477;
frost$core$Object* _1479;
org$frostlang$frostc$IR$Value* _1481;
frost$core$Object* _1482;
org$frostlang$frostc$Interpreter$Context* _1486;
org$frostlang$frostc$IR$Value* _1487;
$fn353 _1488;
frost$core$Int64 _1489;
int64_t _1492;
int64_t _1493;
frost$core$Int _1494;
frost$unsafe$Pointer _1496;
org$frostlang$frostc$IR$Value* _1499;
$fn354 _1500;
org$frostlang$frostc$Type* _1501;
$fn355 _1502;
frost$core$Bit _1503;
bool _1504;
frost$core$Object* _1505;
org$frostlang$frostc$Interpreter$Context* _1509;
frost$collections$Array** _1510;
frost$collections$Array* _1511;
org$frostlang$frostc$IR$Statement$ID _1512;
frost$core$Int _1513;
frost$unsafe$Pointer _1514;
int64_t _1517;
frost$core$Int _1518;
frost$core$Int64 _1520;
frost$core$Int64$nullable _1521;
frost$core$Object* _1522;
frost$core$Int _1524;
int64_t _1525;
int64_t _1526;
bool _1527;
frost$core$Bit _1528;
bool _1529;
frost$collections$CollectionView* _1531;
$fn356 _1532;
frost$core$Int _1533;
int64_t _1534;
int64_t _1535;
bool _1536;
frost$core$Bit _1537;
bool _1538;
frost$core$Int _1540;
frost$unsafe$Pointer* _1544;
frost$unsafe$Pointer _1545;
int64_t _1546;
frost$core$Int64 _1547;
int64_t _1548;
frost$core$Object* _1549;
frost$core$Object* _1551;
frost$core$Object* _1552;
frost$core$Object* _1556;
org$frostlang$frostc$Interpreter$Context* _1561;
frost$collections$Array** _1562;
frost$collections$Array* _1563;
org$frostlang$frostc$IR$Statement$ID _1564;
frost$core$Int _1565;
frost$unsafe$Pointer _1566;
int64_t _1567;
frost$core$Int _1568;
frost$core$Int64 _1569;
frost$core$Int64$nullable _1570;
frost$core$Object* _1571;
frost$core$Int _1573;
int64_t _1574;
int64_t _1575;
bool _1576;
frost$core$Bit _1577;
bool _1578;
frost$collections$CollectionView* _1580;
$fn357 _1581;
frost$core$Int _1582;
int64_t _1583;
int64_t _1584;
bool _1585;
frost$core$Bit _1586;
bool _1587;
frost$core$Int _1589;
frost$unsafe$Pointer* _1593;
frost$unsafe$Pointer _1594;
int64_t _1595;
frost$core$Int64 _1596;
int64_t _1597;
frost$core$Object* _1598;
frost$core$Object* _1600;
frost$core$Object* _1601;
frost$core$Object* _1605;
org$frostlang$frostc$IR$Value* _1608;
frost$core$Object* _1609;
frost$core$Int _1613;
int64_t _1616;
int64_t _1617;
bool _1618;
frost$core$Bit _1619;
bool _1621;
org$frostlang$frostc$MethodPosition* _1623;
org$frostlang$frostc$MethodPosition _1624;
org$frostlang$frostc$IR$Value** _1625;
org$frostlang$frostc$IR$Value* _1626;
frost$core$Object* _1628;
org$frostlang$frostc$IR$Value* _1630;
frost$core$Object* _1631;
org$frostlang$frostc$IR$Value** _1634;
org$frostlang$frostc$IR$Value* _1635;
frost$core$Object* _1637;
org$frostlang$frostc$IR$Value* _1639;
frost$core$Object* _1640;
org$frostlang$frostc$Type** _1643;
org$frostlang$frostc$Type* _1644;
org$frostlang$frostc$IR$Value* _1646;
$fn358 _1647;
org$frostlang$frostc$Type* _1648;
org$frostlang$frostc$FixedArray** _1651;
org$frostlang$frostc$FixedArray* _1652;
bool _1653;
frost$core$Bit _1654;
bool _1655;
frost$core$Int _1657;
org$frostlang$frostc$FixedArray* _1660;
frost$core$Object* _1661;
frost$core$Int _1664;
frost$core$Object* _1665;
org$frostlang$frostc$Type* _1666;
frost$core$Object* _1668;
org$frostlang$frostc$Type* _1670;
frost$core$Object* _1671;
frost$core$Object* _1674;
frost$core$Object* _1676;
frost$core$Object* _1678;
org$frostlang$frostc$Interpreter$Context* _1681;
org$frostlang$frostc$IR$Value* _1682;
$fn359 _1683;
frost$core$Int64 _1684;
org$frostlang$frostc$Interpreter$Context* _1685;
org$frostlang$frostc$IR$Value* _1686;
$fn360 _1687;
frost$core$Int64 _1688;
org$frostlang$frostc$MemoryLayout** _1689;
org$frostlang$frostc$MemoryLayout* _1690;
org$frostlang$frostc$Type* _1691;
$fn361 _1692;
frost$core$Int _1693;
frost$core$Int64 _1694;
int64_t _1695;
int64_t _1696;
int64_t _1697;
frost$core$Int64 _1698;
int64_t _1699;
int64_t _1700;
int64_t _1701;
frost$core$Int64 _1702;
int64_t _1705;
int64_t _1706;
frost$core$Int _1707;
frost$unsafe$Pointer _1709;
frost$unsafe$Pointer* _1712;
frost$unsafe$Pointer _1713;
int64_t _1714;
frost$core$Int64 _1715;
frost$core$Int _1718;
org$frostlang$frostc$MemoryLayout** _1719;
org$frostlang$frostc$MemoryLayout* _1720;
org$frostlang$frostc$Type* _1721;
$fn362 _1722;
frost$core$Int _1723;
frost$core$Int _1724;
int64_t _1727;
int64_t _1728;
bool _1729;
frost$core$Bit _1730;
bool _1731;
int64_t _1734;
frost$core$Int _1735;
int64_t _1739;
frost$core$Int _1740;
frost$core$Int _1743;
frost$core$Bit _1744;
frost$core$Range$LTfrost$core$Int$GT _1745;
frost$core$Int _1746;
frost$core$Int _1748;
frost$core$Bit _1749;
bool _1750;
frost$core$Int _1751;
int64_t _1753;
int64_t _1754;
bool _1755;
frost$core$Bit _1756;
bool _1757;
int64_t _1759;
int64_t _1760;
bool _1761;
frost$core$Bit _1762;
bool _1763;
frost$unsafe$Pointer* _1766;
frost$unsafe$Pointer _1767;
int64_t _1768;
frost$core$Int _1769;
frost$core$Int64 _1770;
frost$unsafe$Pointer _1771;
int64_t _1772;
frost$core$Int _1773;
frost$core$Int64 _1774;
int64_t _1775;
frost$core$UInt8 _1776;
int64_t _1777;
frost$core$Int _1780;
int64_t _1781;
int64_t _1782;
int64_t _1783;
frost$core$Int _1784;
int64_t _1786;
int64_t _1787;
bool _1788;
frost$core$Bit _1789;
bool _1790;
int64_t _1792;
int64_t _1793;
bool _1794;
frost$core$Bit _1795;
bool _1796;
int64_t _1798;
int64_t _1799;
int64_t _1800;
frost$core$Int _1801;
org$frostlang$frostc$Interpreter$Context* _1805;
frost$collections$Array** _1806;
frost$collections$Array* _1807;
org$frostlang$frostc$IR$Statement$ID _1808;
frost$core$Int _1809;
frost$unsafe$Pointer* _1810;
frost$unsafe$Pointer _1811;
int64_t _1812;
frost$core$Int64 _1813;
frost$core$Int64$nullable _1814;
frost$core$Object* _1815;
frost$core$Int _1817;
int64_t _1818;
int64_t _1819;
bool _1820;
frost$core$Bit _1821;
bool _1822;
frost$collections$CollectionView* _1824;
$fn363 _1825;
frost$core$Int _1826;
int64_t _1827;
int64_t _1828;
bool _1829;
frost$core$Bit _1830;
bool _1831;
frost$core$Int _1833;
frost$unsafe$Pointer* _1837;
frost$unsafe$Pointer _1838;
int64_t _1839;
frost$core$Int64 _1840;
int64_t _1841;
frost$core$Object* _1842;
frost$core$Object* _1844;
frost$core$Object* _1845;
frost$core$Object* _1849;
org$frostlang$frostc$Type* _1851;
frost$core$Object* _1852;
org$frostlang$frostc$IR$Value* _1855;
frost$core$Object* _1856;
org$frostlang$frostc$IR$Value* _1859;
frost$core$Object* _1860;
frost$core$Int _1864;
int64_t _1867;
int64_t _1868;
bool _1869;
frost$core$Bit _1870;
bool _1872;
org$frostlang$frostc$MethodPosition* _1874;
org$frostlang$frostc$MethodPosition _1875;
org$frostlang$frostc$IR$Value** _1876;
org$frostlang$frostc$IR$Value* _1877;
frost$core$Object* _1879;
org$frostlang$frostc$IR$Value* _1881;
frost$core$Object* _1882;
org$frostlang$frostc$IR$Value** _1885;
org$frostlang$frostc$IR$Value* _1886;
frost$core$Object* _1888;
org$frostlang$frostc$IR$Value* _1890;
frost$core$Object* _1891;
org$frostlang$frostc$IR$Value** _1894;
org$frostlang$frostc$IR$Value* _1895;
frost$core$Object* _1897;
org$frostlang$frostc$IR$Value* _1899;
frost$core$Object* _1900;
org$frostlang$frostc$Type** _1903;
org$frostlang$frostc$Type* _1904;
frost$core$Object* _1906;
org$frostlang$frostc$Type* _1908;
frost$core$Object* _1909;
org$frostlang$frostc$Interpreter$Context* _1913;
org$frostlang$frostc$IR$Value* _1914;
$fn364 _1915;
frost$core$Int64 _1916;
org$frostlang$frostc$Interpreter$Context* _1917;
org$frostlang$frostc$IR$Value* _1918;
$fn365 _1919;
frost$core$Int64 _1920;
org$frostlang$frostc$MemoryLayout** _1921;
org$frostlang$frostc$MemoryLayout* _1922;
org$frostlang$frostc$IR$Value* _1923;
$fn366 _1924;
org$frostlang$frostc$Type* _1925;
$fn367 _1926;
frost$core$Int _1927;
frost$core$Int64 _1928;
int64_t _1929;
int64_t _1930;
int64_t _1931;
frost$core$Int64 _1932;
int64_t _1933;
int64_t _1934;
int64_t _1935;
frost$core$Int64 _1936;
int64_t _1939;
int64_t _1940;
frost$core$Int _1941;
frost$unsafe$Pointer _1943;
frost$core$Object* _1945;
org$frostlang$frostc$Interpreter$Context* _1948;
org$frostlang$frostc$IR$Value* _1949;
$fn368 _1950;
frost$core$Int64 _1951;
frost$unsafe$Pointer* _1954;
frost$unsafe$Pointer _1955;
int64_t _1956;
frost$core$Int64 _1957;
frost$core$Int _1960;
org$frostlang$frostc$MemoryLayout** _1961;
org$frostlang$frostc$MemoryLayout* _1962;
org$frostlang$frostc$IR$Value* _1963;
$fn369 _1964;
org$frostlang$frostc$Type* _1965;
$fn370 _1966;
frost$core$Int _1967;
frost$core$Int _1968;
int64_t _1971;
int64_t _1972;
bool _1973;
frost$core$Bit _1974;
bool _1975;
int64_t _1978;
frost$core$Int _1979;
int64_t _1983;
frost$core$Int _1984;
frost$core$Int _1987;
frost$core$Bit _1988;
frost$core$Range$LTfrost$core$Int$GT _1989;
frost$core$Int _1990;
frost$core$Int _1992;
frost$core$Bit _1993;
bool _1994;
frost$core$Int _1995;
int64_t _1997;
int64_t _1998;
bool _1999;
frost$core$Bit _2000;
bool _2001;
int64_t _2003;
int64_t _2004;
bool _2005;
frost$core$Bit _2006;
bool _2007;
frost$unsafe$Pointer _2010;
int64_t _2011;
frost$core$Int _2012;
frost$core$Int64 _2013;
frost$unsafe$Pointer* _2014;
frost$unsafe$Pointer _2015;
int64_t _2016;
frost$core$Int _2017;
frost$core$Int64 _2018;
int64_t _2019;
frost$core$UInt8 _2020;
int64_t _2021;
frost$core$Int _2024;
int64_t _2025;
int64_t _2026;
int64_t _2027;
frost$core$Int _2028;
int64_t _2030;
int64_t _2031;
bool _2032;
frost$core$Bit _2033;
bool _2034;
int64_t _2036;
int64_t _2037;
bool _2038;
frost$core$Bit _2039;
bool _2040;
int64_t _2042;
int64_t _2043;
int64_t _2044;
frost$core$Int _2045;
frost$core$Object* _2048;
org$frostlang$frostc$Type* _2050;
frost$core$Object* _2051;
org$frostlang$frostc$IR$Value* _2054;
frost$core$Object* _2055;
org$frostlang$frostc$IR$Value* _2058;
frost$core$Object* _2059;
org$frostlang$frostc$IR$Value* _2062;
frost$core$Object* _2063;
frost$core$Int _2067;
int64_t _2070;
int64_t _2071;
bool _2072;
frost$core$Bit _2073;
bool _2075;
org$frostlang$frostc$MethodPosition* _2077;
org$frostlang$frostc$MethodPosition _2078;
org$frostlang$frostc$IR$Value** _2079;
org$frostlang$frostc$IR$Value* _2080;
frost$core$Object* _2082;
org$frostlang$frostc$IR$Value* _2084;
frost$core$Object* _2085;
frost$collections$Stack** _2089;
frost$collections$Stack* _2090;
frost$core$Object* _2091;
org$frostlang$frostc$Interpreter$Context* _2092;
frost$core$Object* _2093;
org$frostlang$frostc$IR$Value* _2096;
bool _2097;
frost$core$Bit _2098;
bool _2099;
org$frostlang$frostc$Interpreter$Context* _2102;
org$frostlang$frostc$IR$Value* _2103;
bool _2104;
frost$core$Bit _2105;
bool _2106;
frost$core$Int _2108;
org$frostlang$frostc$IR$Value* _2111;
$fn371 _2112;
frost$core$Int64 _2113;
org$frostlang$frostc$IR$Value* _2114;
frost$core$Object* _2115;
org$frostlang$frostc$IR$Statement* _2118;
frost$core$Object* _2119;
org$frostlang$frostc$Interpreter$Context* _2122;
frost$core$Object* _2123;
org$frostlang$frostc$Interpreter$Code* _2126;
frost$core$Object* _2127;
frost$core$Int64 _2132;
org$frostlang$frostc$IR$Value* _2133;
frost$core$Object* _2134;
org$frostlang$frostc$IR$Statement* _2137;
frost$core$Object* _2138;
org$frostlang$frostc$Interpreter$Context* _2141;
frost$core$Object* _2142;
org$frostlang$frostc$Interpreter$Code* _2145;
frost$core$Object* _2146;
frost$core$Int _2150;
int64_t _2153;
int64_t _2154;
bool _2155;
frost$core$Bit _2156;
bool _2158;
org$frostlang$frostc$MethodPosition* _2160;
org$frostlang$frostc$MethodPosition _2161;
org$frostlang$frostc$MethodDecl** _2162;
org$frostlang$frostc$MethodDecl* _2163;
frost$core$Object* _2165;
org$frostlang$frostc$MethodDecl* _2167;
frost$core$Object* _2168;
org$frostlang$frostc$FixedArray** _2171;
org$frostlang$frostc$FixedArray* _2172;
frost$core$Object* _2174;
org$frostlang$frostc$FixedArray* _2176;
frost$core$Object* _2177;
org$frostlang$frostc$Interpreter$Context* _2181;
frost$collections$Array** _2182;
frost$collections$Array* _2183;
org$frostlang$frostc$IR$Statement$ID _2184;
frost$core$Int _2185;
org$frostlang$frostc$MethodDecl* _2186;
org$frostlang$frostc$FixedArray* _2187;
$fn372 _2188;
frost$core$Int64 _2189;
frost$core$Int64$nullable _2190;
frost$core$Object* _2191;
frost$core$Int _2193;
int64_t _2194;
int64_t _2195;
bool _2196;
frost$core$Bit _2197;
bool _2198;
frost$collections$CollectionView* _2200;
$fn373 _2201;
frost$core$Int _2202;
int64_t _2203;
int64_t _2204;
bool _2205;
frost$core$Bit _2206;
bool _2207;
frost$core$Int _2209;
frost$unsafe$Pointer* _2213;
frost$unsafe$Pointer _2214;
int64_t _2215;
frost$core$Int64 _2216;
int64_t _2217;
frost$core$Object* _2218;
frost$core$Object* _2220;
frost$core$Object* _2221;
frost$core$Object* _2225;
org$frostlang$frostc$FixedArray* _2227;
frost$core$Object* _2228;
org$frostlang$frostc$MethodDecl* _2231;
frost$core$Object* _2232;
frost$core$Int _2236;
int64_t _2239;
int64_t _2240;
bool _2241;
frost$core$Bit _2242;
bool _2244;
org$frostlang$frostc$MethodPosition* _2246;
org$frostlang$frostc$MethodPosition _2247;
org$frostlang$frostc$IR$Value** _2248;
org$frostlang$frostc$IR$Value* _2249;
frost$core$Object* _2251;
org$frostlang$frostc$IR$Value* _2253;
frost$core$Object* _2254;
org$frostlang$frostc$IR$Value** _2257;
org$frostlang$frostc$IR$Value* _2258;
frost$core$Object* _2260;
org$frostlang$frostc$IR$Value* _2262;
frost$core$Object* _2263;
org$frostlang$frostc$Interpreter$Context* _2267;
org$frostlang$frostc$IR$Value* _2268;
$fn374 _2269;
frost$core$Int64 _2270;
org$frostlang$frostc$Interpreter$Context* _2273;
org$frostlang$frostc$IR$Value* _2274;
$fn375 _2275;
frost$core$Int64 _2276;
frost$core$Int64 _2279;
int64_t _2282;
int64_t _2283;
frost$core$Int _2284;
frost$unsafe$Pointer _2286;
int64_t _2287;
frost$core$Int64 _2288;
org$frostlang$frostc$IR$Value* _2290;
frost$core$Object* _2291;
org$frostlang$frostc$IR$Value* _2294;
frost$core$Object* _2295;
frost$core$Int _2300;
org$frostlang$frostc$IR$Statement* _2301;
frost$core$Object* _2302;
$fn376 _2305;
frost$core$String* _2306;
frost$core$String* _2307;
frost$core$Object* _2308;
frost$core$Object* _2310;
frost$core$Object* _2312;
frost$core$String* _2315;
frost$core$Object* _2317;
frost$core$Object* _2319;
frost$core$Int _2323;
frost$core$Int _2324;
int64_t _2325;
int64_t _2326;
int64_t _2327;
frost$core$Int _2328;
org$frostlang$frostc$IR$Statement* _2330;
frost$core$Object* _2331;
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s377, _40, &$s378);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s379, _55, &$s380);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s381, _70, &$s382);
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s383, _106);
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
ITable* $tmp384 = _127->$class->itable;
while ($tmp384->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp384 = $tmp384->next;
}
_128 = $tmp384->methods[0];
_129 = _128(_127);
_131 = _114.value;
_132 = _129.value;
_133 = _131 < _132;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block19; else goto block20;
block20:;
_137 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s385, _137, &$s386);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_141 = &_113->contents;
_142 = *_141;
_143 = ((frost$collections$CollectionView*) _142);
ITable* $tmp387 = _143->$class->itable;
while ($tmp387->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp387 = $tmp387->next;
}
_144 = $tmp387->methods[0];
_145 = _144(_143);
_146 = _145.value;
_147 = _114.value;
_148 = _146 > _147;
_149 = (frost$core$Bit) {_148};
_150 = _149.value;
if (_150) goto block23; else goto block24;
block24:;
_152 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s388, _152);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_156 = &_113->contents;
_157 = *_156;
_158 = &_113->contents;
_159 = *_158;
_160 = ((frost$collections$CollectionView*) _159);
ITable* $tmp389 = _160->$class->itable;
while ($tmp389->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp389 = $tmp389->next;
}
_161 = $tmp389->methods[0];
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
ITable* $tmp390 = _180->$class->itable;
while ($tmp390->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp390 = $tmp390->next;
}
_181 = $tmp390->methods[0];
_182 = _181(_180);
_183 = _171.value;
_184 = _182.value;
_185 = _183 < _184;
_186 = (frost$core$Bit) {_185};
_187 = _186.value;
if (_187) goto block26; else goto block27;
block27:;
_189 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s391, _189, &$s392);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_193 = &_157->data;
_194 = *_193;
_195 = _194.value;
_196 = frost$core$Int64$init$frost$core$Int(_171);
_197 = _196.value;
_198 = ((frost$core$Object**)_195)[_197];
_199 = _198;
frost$core$Frost$ref$frost$core$Object$Q(_199);
_202 = _198;
_203 = _202;
frost$core$Frost$ref$frost$core$Object$Q(_203);
_205 = _198;
frost$core$Frost$unref$frost$core$Object$Q(_205);
_208 = ((org$frostlang$frostc$Interpreter$Context*) _202);
_209 = ($fn393) param0->$class->vtable[15];
_210 = _209(param0, _208, param1, param2);
_211 = _202;
frost$core$Frost$unref$frost$core$Object$Q(_211);
_213 = *(&local0);
_214 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_214);
*(&local0) = ((org$frostlang$frostc$Interpreter$Code*) NULL);
return _210;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:517
_220 = (org$frostlang$frostc$Interpreter$Context*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$Context), (frost$core$Class*) &org$frostlang$frostc$Interpreter$Context$class);
_221 = *(&local0);
_222 = _221 != NULL;
_223 = (frost$core$Bit) {_222};
_224 = _223.value;
if (_224) goto block29; else goto block30;
block30:;
_226 = (frost$core$Int) {517u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s394, _226, &$s395);
abort(); // unreachable
block29:;
_229 = _221;
org$frostlang$frostc$Interpreter$Context$init$org$frostlang$frostc$Interpreter$org$frostlang$frostc$Interpreter$Code(_220, param0, _229);
*(&local1) = ((org$frostlang$frostc$Interpreter$Context*) NULL);
_232 = ((frost$core$Object*) _220);
frost$core$Frost$ref$frost$core$Object$Q(_232);
_234 = *(&local1);
_235 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_235);
*(&local1) = _220;
_238 = ((frost$core$Object*) _220);
frost$core$Frost$unref$frost$core$Object$Q(_238);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:518
_241 = ((frost$collections$Iterable*) param2);
ITable* $tmp396 = _241->$class->itable;
while ($tmp396->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp396 = $tmp396->next;
}
_242 = $tmp396->methods[0];
_243 = _242(_241);
goto block31;
block31:;
ITable* $tmp397 = _243->$class->itable;
while ($tmp397->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp397 = $tmp397->next;
}
_245 = $tmp397->methods[0];
_246 = _245(_243);
_247 = _246.value;
if (_247) goto block33; else goto block32;
block32:;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp398 = _243->$class->itable;
while ($tmp398->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp398 = $tmp398->next;
}
_250 = $tmp398->methods[1];
_251 = _250(_243);
_252 = ((org$frostlang$frostc$IR$Value*) _251);
_253 = ((frost$core$Object*) _252);
frost$core$Frost$ref$frost$core$Object$Q(_253);
_255 = *(&local2);
_256 = ((frost$core$Object*) _255);
frost$core$Frost$unref$frost$core$Object$Q(_256);
*(&local2) = _252;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:519
_260 = *(&local1);
_261 = &_260->arguments;
_262 = *_261;
_263 = &param0->contexts;
_264 = *_263;
_265 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Interpreter.frost:519:43
_267 = (frost$core$Int) {0u};
_268 = _265.value;
_269 = _267.value;
_270 = _268 >= _269;
_271 = (frost$core$Bit) {_270};
_272 = _271.value;
if (_272) goto block37; else goto block36;
block37:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_276 = &_264->contents;
_277 = *_276;
_278 = ((frost$collections$CollectionView*) _277);
ITable* $tmp399 = _278->$class->itable;
while ($tmp399->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp399 = $tmp399->next;
}
_279 = $tmp399->methods[0];
_280 = _279(_278);
_282 = _265.value;
_283 = _280.value;
_284 = _282 < _283;
_285 = (frost$core$Bit) {_284};
_286 = _285.value;
if (_286) goto block35; else goto block36;
block36:;
_288 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s400, _288, &$s401);
abort(); // unreachable
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_292 = &_264->contents;
_293 = *_292;
_294 = ((frost$collections$CollectionView*) _293);
ITable* $tmp402 = _294->$class->itable;
while ($tmp402->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp402 = $tmp402->next;
}
_295 = $tmp402->methods[0];
_296 = _295(_294);
_297 = _296.value;
_298 = _265.value;
_299 = _297 > _298;
_300 = (frost$core$Bit) {_299};
_301 = _300.value;
if (_301) goto block39; else goto block40;
block40:;
_303 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s403, _303);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_307 = &_264->contents;
_308 = *_307;
_309 = &_264->contents;
_310 = *_309;
_311 = ((frost$collections$CollectionView*) _310);
ITable* $tmp404 = _311->$class->itable;
while ($tmp404->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp404 = $tmp404->next;
}
_312 = $tmp404->methods[0];
_313 = _312(_311);
_314 = (frost$core$Int) {1u};
_315 = _313.value;
_316 = _314.value;
_317 = _315 - _316;
_318 = (frost$core$Int) {_317};
_319 = _318.value;
_320 = _265.value;
_321 = _319 - _320;
_322 = (frost$core$Int) {_321};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_324 = (frost$core$Int) {0u};
_325 = _322.value;
_326 = _324.value;
_327 = _325 >= _326;
_328 = (frost$core$Bit) {_327};
_329 = _328.value;
if (_329) goto block44; else goto block43;
block44:;
_331 = ((frost$collections$CollectionView*) _308);
ITable* $tmp405 = _331->$class->itable;
while ($tmp405->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp405 = $tmp405->next;
}
_332 = $tmp405->methods[0];
_333 = _332(_331);
_334 = _322.value;
_335 = _333.value;
_336 = _334 < _335;
_337 = (frost$core$Bit) {_336};
_338 = _337.value;
if (_338) goto block42; else goto block43;
block43:;
_340 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s406, _340, &$s407);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_344 = &_308->data;
_345 = *_344;
_346 = _345.value;
_347 = frost$core$Int64$init$frost$core$Int(_322);
_348 = _347.value;
_349 = ((frost$core$Object**)_346)[_348];
_350 = _349;
frost$core$Frost$ref$frost$core$Object$Q(_350);
_353 = _349;
_354 = _353;
frost$core$Frost$ref$frost$core$Object$Q(_354);
_356 = _349;
frost$core$Frost$unref$frost$core$Object$Q(_356);
_359 = ((org$frostlang$frostc$Interpreter$Context*) _353);
_360 = *(&local2);
_361 = ($fn408) _359->$class->vtable[2];
_362 = _361(_359, _360);
frost$core$Int64$wrapper* $tmp409;
$tmp409 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp409->value = _362;
_363 = ((frost$core$Object*) $tmp409);
frost$collections$Array$add$frost$collections$Array$T(_262, _363);
_365 = _363;
frost$core$Frost$unref$frost$core$Object$Q(_365);
_367 = _353;
frost$core$Frost$unref$frost$core$Object$Q(_367);
_369 = _251;
frost$core$Frost$unref$frost$core$Object$Q(_369);
_371 = *(&local2);
_372 = ((frost$core$Object*) _371);
frost$core$Frost$unref$frost$core$Object$Q(_372);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block31;
block33:;
_376 = ((frost$core$Object*) _243);
frost$core$Frost$unref$frost$core$Object$Q(_376);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:521
_379 = &param0->contexts;
_380 = *_379;
_381 = *(&local1);
_382 = ((frost$core$Object*) _381);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Interpreter.frost:521:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_385 = &_380->contents;
_386 = *_385;
_387 = _382;
frost$collections$Array$add$frost$collections$Array$T(_386, _387);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:522
_391 = (frost$core$Int) {0u};
*(&local3) = _391;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:523
_394 = (frost$core$Int) {0u};
*(&local4) = _394;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:524
goto block46;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:525
_399 = *(&local0);
_400 = _399 != NULL;
_401 = (frost$core$Bit) {_400};
_402 = _401.value;
if (_402) goto block48; else goto block49;
block49:;
_404 = (frost$core$Int) {525u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s410, _404, &$s411);
abort(); // unreachable
block48:;
_407 = _399;
_408 = &_407->ids;
_409 = *_408;
_410 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:525:31
_412 = (frost$core$Int) {0u};
_413 = _410.value;
_414 = _412.value;
_415 = _413 >= _414;
_416 = (frost$core$Bit) {_415};
_417 = _416.value;
if (_417) goto block53; else goto block52;
block53:;
_419 = ((frost$collections$CollectionView*) _409);
ITable* $tmp412 = _419->$class->itable;
while ($tmp412->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp412 = $tmp412->next;
}
_420 = $tmp412->methods[0];
_421 = _420(_419);
_422 = _410.value;
_423 = _421.value;
_424 = _422 < _423;
_425 = (frost$core$Bit) {_424};
_426 = _425.value;
if (_426) goto block51; else goto block52;
block52:;
_428 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s413, _428, &$s414);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_432 = &_409->data;
_433 = *_432;
_434 = _433.value;
_435 = frost$core$Int64$init$frost$core$Int(_410);
_436 = _435.value;
_437 = ((frost$core$Object**)_434)[_436];
_438 = _437;
frost$core$Frost$ref$frost$core$Object$Q(_438);
_441 = ((frost$collections$Array*) _437);
_442 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:525:38
_444 = (frost$core$Int) {0u};
_445 = _442.value;
_446 = _444.value;
_447 = _445 >= _446;
_448 = (frost$core$Bit) {_447};
_449 = _448.value;
if (_449) goto block57; else goto block56;
block57:;
_451 = ((frost$collections$CollectionView*) _441);
ITable* $tmp415 = _451->$class->itable;
while ($tmp415->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp415 = $tmp415->next;
}
_452 = $tmp415->methods[0];
_453 = _452(_451);
_454 = _442.value;
_455 = _453.value;
_456 = _454 < _455;
_457 = (frost$core$Bit) {_456};
_458 = _457.value;
if (_458) goto block55; else goto block56;
block56:;
_460 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s416, _460, &$s417);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_464 = &_441->data;
_465 = *_464;
_466 = _465.value;
_467 = frost$core$Int64$init$frost$core$Int(_442);
_468 = _467.value;
_469 = ((frost$core$Object**)_466)[_468];
_470 = _469;
frost$core$Frost$ref$frost$core$Object$Q(_470);
_473 = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) _469)->value;
*(&local5) = _473;
_475 = _469;
frost$core$Frost$unref$frost$core$Object$Q(_475);
_477 = _437;
frost$core$Frost$unref$frost$core$Object$Q(_477);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:526
_480 = *(&local0);
_481 = _480 != NULL;
_482 = (frost$core$Bit) {_481};
_483 = _482.value;
if (_483) goto block58; else goto block59;
block59:;
_485 = (frost$core$Int) {526u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s418, _485, &$s419);
abort(); // unreachable
block58:;
_488 = _480;
_489 = &_488->ir;
_490 = *_489;
_491 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:526:32
_493 = (frost$core$Int) {0u};
_494 = _491.value;
_495 = _493.value;
_496 = _494 >= _495;
_497 = (frost$core$Bit) {_496};
_498 = _497.value;
if (_498) goto block63; else goto block62;
block63:;
_500 = ((frost$collections$CollectionView*) _490);
ITable* $tmp420 = _500->$class->itable;
while ($tmp420->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp420 = $tmp420->next;
}
_501 = $tmp420->methods[0];
_502 = _501(_500);
_503 = _491.value;
_504 = _502.value;
_505 = _503 < _504;
_506 = (frost$core$Bit) {_505};
_507 = _506.value;
if (_507) goto block61; else goto block62;
block62:;
_509 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s421, _509, &$s422);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_513 = &_490->data;
_514 = *_513;
_515 = _514.value;
_516 = frost$core$Int64$init$frost$core$Int(_491);
_517 = _516.value;
_518 = ((frost$core$Object**)_515)[_517];
_519 = _518;
frost$core$Frost$ref$frost$core$Object$Q(_519);
_522 = ((frost$collections$Array*) _518);
_523 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:526:39
_525 = (frost$core$Int) {0u};
_526 = _523.value;
_527 = _525.value;
_528 = _526 >= _527;
_529 = (frost$core$Bit) {_528};
_530 = _529.value;
if (_530) goto block67; else goto block66;
block67:;
_532 = ((frost$collections$CollectionView*) _522);
ITable* $tmp423 = _532->$class->itable;
while ($tmp423->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp423 = $tmp423->next;
}
_533 = $tmp423->methods[0];
_534 = _533(_532);
_535 = _523.value;
_536 = _534.value;
_537 = _535 < _536;
_538 = (frost$core$Bit) {_537};
_539 = _538.value;
if (_539) goto block65; else goto block66;
block66:;
_541 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s424, _541, &$s425);
abort(); // unreachable
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_545 = &_522->data;
_546 = *_545;
_547 = _546.value;
_548 = frost$core$Int64$init$frost$core$Int(_523);
_549 = _548.value;
_550 = ((frost$core$Object**)_547)[_549];
_551 = _550;
frost$core$Frost$ref$frost$core$Object$Q(_551);
_554 = ((org$frostlang$frostc$IR$Statement*) _550);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
_556 = ((frost$core$Object*) _554);
frost$core$Frost$ref$frost$core$Object$Q(_556);
_558 = *(&local6);
_559 = ((frost$core$Object*) _558);
frost$core$Frost$unref$frost$core$Object$Q(_559);
*(&local6) = _554;
_562 = _550;
frost$core$Frost$unref$frost$core$Object$Q(_562);
_564 = _518;
frost$core$Frost$unref$frost$core$Object$Q(_564);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:527
_567 = *(&local6);
_568 = &_567->$rawValue;
_569 = *_568;
_570 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:528:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_573 = _569.value;
_574 = _570.value;
_575 = _573 == _574;
_576 = (frost$core$Bit) {_575};
_578 = _576.value;
if (_578) goto block69; else goto block70;
block69:;
_580 = &_567->$data.$BINARY.field0;
_581 = *_580;
_582 = &_567->$data.$BINARY.field1;
_583 = *_582;
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
_585 = ((frost$core$Object*) _583);
frost$core$Frost$ref$frost$core$Object$Q(_585);
_587 = *(&local7);
_588 = ((frost$core$Object*) _587);
frost$core$Frost$unref$frost$core$Object$Q(_588);
*(&local7) = _583;
_591 = &_567->$data.$BINARY.field2;
_592 = *_591;
*(&local8) = _592;
_594 = &_567->$data.$BINARY.field3;
_595 = *_594;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_597 = ((frost$core$Object*) _595);
frost$core$Frost$ref$frost$core$Object$Q(_597);
_599 = *(&local9);
_600 = ((frost$core$Object*) _599);
frost$core$Frost$unref$frost$core$Object$Q(_600);
*(&local9) = _595;
_603 = &_567->$data.$BINARY.field4;
_604 = *_603;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:529
_606 = *(&local1);
_607 = *(&local5);
_608 = *(&local7);
_609 = *(&local8);
_610 = *(&local9);
_611 = ($fn426) param0->$class->vtable[22];
_611(param0, _606, _607, _608, _609, _610);
_613 = *(&local9);
_614 = ((frost$core$Object*) _613);
frost$core$Frost$unref$frost$core$Object$Q(_614);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_617 = *(&local7);
_618 = ((frost$core$Object*) _617);
frost$core$Frost$unref$frost$core$Object$Q(_618);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block70:;
_622 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:531:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_625 = _569.value;
_626 = _622.value;
_627 = _625 == _626;
_628 = (frost$core$Bit) {_627};
_630 = _628.value;
if (_630) goto block72; else goto block73;
block72:;
_632 = &_567->$data.$BRANCH.field0;
_633 = *_632;
_634 = &_567->$data.$BRANCH.field1;
_635 = *_634;
*(&local10) = _635;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:532
_638 = *(&local0);
_639 = _638 != NULL;
_640 = (frost$core$Bit) {_639};
_641 = _640.value;
if (_641) goto block75; else goto block76;
block76:;
_643 = (frost$core$Int) {532u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s427, _643, &$s428);
abort(); // unreachable
block75:;
_646 = _638;
_647 = &_646->blocks;
_648 = *_647;
_649 = *(&local10);
_650 = _649.value;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:532:41
_652 = (frost$core$Int) {0u};
_653 = _650.value;
_654 = _652.value;
_655 = _653 >= _654;
_656 = (frost$core$Bit) {_655};
_657 = _656.value;
if (_657) goto block80; else goto block79;
block80:;
_659 = ((frost$collections$CollectionView*) _648);
ITable* $tmp429 = _659->$class->itable;
while ($tmp429->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp429 = $tmp429->next;
}
_660 = $tmp429->methods[0];
_661 = _660(_659);
_662 = _650.value;
_663 = _661.value;
_664 = _662 < _663;
_665 = (frost$core$Bit) {_664};
_666 = _665.value;
if (_666) goto block78; else goto block79;
block79:;
_668 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s430, _668, &$s431);
abort(); // unreachable
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_672 = &_648->data;
_673 = *_672;
_674 = _673.value;
_675 = frost$core$Int64$init$frost$core$Int(_650);
_676 = _675.value;
_677 = ((frost$core$Object**)_674)[_676];
_678 = _677;
frost$core$Frost$ref$frost$core$Object$Q(_678);
_681 = ((frost$core$Int$wrapper*) _677)->value;
*(&local3) = _681;
_683 = _677;
frost$core$Frost$unref$frost$core$Object$Q(_683);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:533
_686 = (frost$core$Int) {0u};
*(&local4) = _686;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:534
_689 = *(&local6);
_690 = ((frost$core$Object*) _689);
frost$core$Frost$unref$frost$core$Object$Q(_690);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block46;
block73:;
_694 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:536:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_697 = _569.value;
_698 = _694.value;
_699 = _697 == _698;
_700 = (frost$core$Bit) {_699};
_702 = _700.value;
if (_702) goto block81; else goto block82;
block81:;
_704 = &_567->$data.$CAST.field0;
_705 = *_704;
_706 = &_567->$data.$CAST.field1;
_707 = *_706;
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_709 = ((frost$core$Object*) _707);
frost$core$Frost$ref$frost$core$Object$Q(_709);
_711 = *(&local11);
_712 = ((frost$core$Object*) _711);
frost$core$Frost$unref$frost$core$Object$Q(_712);
*(&local11) = _707;
_715 = &_567->$data.$CAST.field2;
_716 = *_715;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
_718 = ((frost$core$Object*) _716);
frost$core$Frost$ref$frost$core$Object$Q(_718);
_720 = *(&local12);
_721 = ((frost$core$Object*) _720);
frost$core$Frost$unref$frost$core$Object$Q(_721);
*(&local12) = _716;
_724 = &_567->$data.$CAST.field3;
_725 = *_724;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:537
_727 = *(&local1);
_728 = *(&local5);
_729 = *(&local11);
_730 = *(&local12);
_731 = ($fn432) param0->$class->vtable[16];
_731(param0, _727, _728, _729, _730);
_733 = *(&local12);
_734 = ((frost$core$Object*) _733);
frost$core$Frost$unref$frost$core$Object$Q(_734);
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
_737 = *(&local11);
_738 = ((frost$core$Object*) _737);
frost$core$Frost$unref$frost$core$Object$Q(_738);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block82:;
_742 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:539:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_745 = _569.value;
_746 = _742.value;
_747 = _745 == _746;
_748 = (frost$core$Bit) {_747};
_750 = _748.value;
if (_750) goto block84; else goto block85;
block84:;
goto block68;
block85:;
_753 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:541:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_756 = _569.value;
_757 = _753.value;
_758 = _756 == _757;
_759 = (frost$core$Bit) {_758};
_761 = _759.value;
if (_761) goto block87; else goto block88;
block87:;
_763 = &_567->$data.$CONDITIONAL_BRANCH.field0;
_764 = *_763;
_765 = &_567->$data.$CONDITIONAL_BRANCH.field1;
_766 = *_765;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
_768 = ((frost$core$Object*) _766);
frost$core$Frost$ref$frost$core$Object$Q(_768);
_770 = *(&local13);
_771 = ((frost$core$Object*) _770);
frost$core$Frost$unref$frost$core$Object$Q(_771);
*(&local13) = _766;
_774 = &_567->$data.$CONDITIONAL_BRANCH.field2;
_775 = *_774;
*(&local14) = _775;
_777 = &_567->$data.$CONDITIONAL_BRANCH.field3;
_778 = *_777;
*(&local15) = _778;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:542
_781 = *(&local1);
_782 = *(&local13);
_783 = ($fn433) _781->$class->vtable[2];
_784 = _783(_781, _782);
_785 = (frost$core$Int64) {0u};
_786 = _784.value;
_787 = _785.value;
_788 = _786 != _787;
_789 = (frost$core$Bit) {_788};
_790 = _789.value;
if (_790) goto block90; else goto block92;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:543
_793 = *(&local0);
_794 = _793 != NULL;
_795 = (frost$core$Bit) {_794};
_796 = _795.value;
if (_796) goto block93; else goto block94;
block94:;
_798 = (frost$core$Int) {543u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s434, _798, &$s435);
abort(); // unreachable
block93:;
_801 = _793;
_802 = &_801->blocks;
_803 = *_802;
_804 = *(&local14);
_805 = _804.value;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:543:45
_807 = (frost$core$Int) {0u};
_808 = _805.value;
_809 = _807.value;
_810 = _808 >= _809;
_811 = (frost$core$Bit) {_810};
_812 = _811.value;
if (_812) goto block98; else goto block97;
block98:;
_814 = ((frost$collections$CollectionView*) _803);
ITable* $tmp436 = _814->$class->itable;
while ($tmp436->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp436 = $tmp436->next;
}
_815 = $tmp436->methods[0];
_816 = _815(_814);
_817 = _805.value;
_818 = _816.value;
_819 = _817 < _818;
_820 = (frost$core$Bit) {_819};
_821 = _820.value;
if (_821) goto block96; else goto block97;
block97:;
_823 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s437, _823, &$s438);
abort(); // unreachable
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_827 = &_803->data;
_828 = *_827;
_829 = _828.value;
_830 = frost$core$Int64$init$frost$core$Int(_805);
_831 = _830.value;
_832 = ((frost$core$Object**)_829)[_831];
_833 = _832;
frost$core$Frost$ref$frost$core$Object$Q(_833);
_836 = ((frost$core$Int$wrapper*) _832)->value;
*(&local3) = _836;
_838 = _832;
frost$core$Frost$unref$frost$core$Object$Q(_838);
goto block91;
block92:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:546
_843 = *(&local0);
_844 = _843 != NULL;
_845 = (frost$core$Bit) {_844};
_846 = _845.value;
if (_846) goto block99; else goto block100;
block100:;
_848 = (frost$core$Int) {546u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s439, _848, &$s440);
abort(); // unreachable
block99:;
_851 = _843;
_852 = &_851->blocks;
_853 = *_852;
_854 = *(&local15);
_855 = _854.value;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:546:45
_857 = (frost$core$Int) {0u};
_858 = _855.value;
_859 = _857.value;
_860 = _858 >= _859;
_861 = (frost$core$Bit) {_860};
_862 = _861.value;
if (_862) goto block104; else goto block103;
block104:;
_864 = ((frost$collections$CollectionView*) _853);
ITable* $tmp441 = _864->$class->itable;
while ($tmp441->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp441 = $tmp441->next;
}
_865 = $tmp441->methods[0];
_866 = _865(_864);
_867 = _855.value;
_868 = _866.value;
_869 = _867 < _868;
_870 = (frost$core$Bit) {_869};
_871 = _870.value;
if (_871) goto block102; else goto block103;
block103:;
_873 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s442, _873, &$s443);
abort(); // unreachable
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_877 = &_853->data;
_878 = *_877;
_879 = _878.value;
_880 = frost$core$Int64$init$frost$core$Int(_855);
_881 = _880.value;
_882 = ((frost$core$Object**)_879)[_881];
_883 = _882;
frost$core$Frost$ref$frost$core$Object$Q(_883);
_886 = ((frost$core$Int$wrapper*) _882)->value;
*(&local3) = _886;
_888 = _882;
frost$core$Frost$unref$frost$core$Object$Q(_888);
goto block91;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:548
_892 = (frost$core$Int) {0u};
*(&local4) = _892;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:549
_895 = *(&local13);
_896 = ((frost$core$Object*) _895);
frost$core$Frost$unref$frost$core$Object$Q(_896);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
_899 = *(&local6);
_900 = ((frost$core$Object*) _899);
frost$core$Frost$unref$frost$core$Object$Q(_900);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block46;
block88:;
_904 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:551:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_907 = _569.value;
_908 = _904.value;
_909 = _907 == _908;
_910 = (frost$core$Bit) {_909};
_912 = _910.value;
if (_912) goto block105; else goto block106;
block105:;
_914 = &_567->$data.$CONSTRUCT.field0;
_915 = *_914;
_916 = &_567->$data.$CONSTRUCT.field1;
_917 = *_916;
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
_919 = ((frost$core$Object*) _917);
frost$core$Frost$ref$frost$core$Object$Q(_919);
_921 = *(&local16);
_922 = ((frost$core$Object*) _921);
frost$core$Frost$unref$frost$core$Object$Q(_922);
*(&local16) = _917;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:552
_926 = &param0->memoryLayout;
_927 = *_926;
_928 = *(&local16);
_929 = &_928->type;
_930 = *_929;
_931 = ($fn444) _927->$class->vtable[7];
_932 = _931(_927, _930);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:552:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_935 = _932.value;
_936 = _935 * 1u;
_937 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_936);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_940 = &(&local18)->value;
*_940 = _937;
_942 = *(&local18);
*(&local17) = _942;
_945 = *(&local17);
*(&local19) = _945;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:553
_949 = *(&local19);
_950 = _949.value;
_951 = *(&local16);
_952 = ((frost$core$Object*) _951);
frost$core$Frost$ref$frost$core$Object$Q(_952);
_954 = *((org$frostlang$frostc$ClassDecl**)_950);
_955 = ((frost$core$Object*) _954);
frost$core$Frost$unref$frost$core$Object$Q(_955);
*((org$frostlang$frostc$ClassDecl**)_950) = _951;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:554
_959 = *(&local19);
_960 = &param0->memoryLayout;
_961 = *_960;
_962 = ($fn445) _961->$class->vtable[3];
_963 = _962(_961);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:554:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_966 = _963.value;
*(&local20) = _966;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local21) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_971 = _959.value;
_972 = *(&local20);
_973 = *(&local21);
_974 = _972 * _973;
_975 = _971 + _974;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_978 = &(&local23)->value;
*_978 = _975;
_980 = *(&local23);
*(&local22) = _980;
_983 = *(&local22);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:554:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_987 = _983.value;
_988 = (frost$core$Int) {_987};
_990 = frost$unsafe$Pointer$init$frost$core$Int(_988);
_991 = _990.value;
_992 = (frost$core$Int32) {1u};
*((frost$core$Int32*)_991) = _992;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:555
_995 = *(&local1);
_996 = &_995->statements;
_997 = *_996;
_998 = *(&local5);
_999 = _998.value;
_1000 = *(&local19);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:555:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1003 = _1000.value;
_1004 = (frost$core$Int) {_1003};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:555:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_1008 = _1004.value;
_1009 = ((int64_t) _1008);
_1010 = (frost$core$Int64) {_1009};
_1012 = ((frost$core$Int64$nullable) { _1010, true });
frost$core$Object* $tmp446;
if (_1012.nonnull) {
    frost$core$Int64$wrapper* $tmp447;
    $tmp447 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp447->value = ((frost$core$Int64) _1012.value);
    $tmp446 = ((frost$core$Object*) $tmp447);
}
else {
    $tmp446 = NULL;
}
_1013 = $tmp446;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:555:39
_1015 = (frost$core$Int) {0u};
_1016 = _999.value;
_1017 = _1015.value;
_1018 = _1016 >= _1017;
_1019 = (frost$core$Bit) {_1018};
_1020 = _1019.value;
if (_1020) goto block118; else goto block117;
block118:;
_1022 = ((frost$collections$CollectionView*) _997);
ITable* $tmp448 = _1022->$class->itable;
while ($tmp448->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp448 = $tmp448->next;
}
_1023 = $tmp448->methods[0];
_1024 = _1023(_1022);
_1025 = _999.value;
_1026 = _1024.value;
_1027 = _1025 < _1026;
_1028 = (frost$core$Bit) {_1027};
_1029 = _1028.value;
if (_1029) goto block116; else goto block117;
block117:;
_1031 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s449, _1031, &$s450);
abort(); // unreachable
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1035 = &_997->data;
_1036 = *_1035;
_1037 = _1036.value;
_1038 = frost$core$Int64$init$frost$core$Int(_999);
_1039 = _1038.value;
_1040 = _1013;
frost$core$Frost$ref$frost$core$Object$Q(_1040);
_1042 = ((frost$core$Object**)_1037)[_1039];
_1043 = _1042;
frost$core$Frost$unref$frost$core$Object$Q(_1043);
((frost$core$Object**)_1037)[_1039] = _1013;
_1047 = _1013;
frost$core$Frost$unref$frost$core$Object$Q(_1047);
_1049 = *(&local16);
_1050 = ((frost$core$Object*) _1049);
frost$core$Frost$unref$frost$core$Object$Q(_1050);
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block68;
block106:;
_1054 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:557:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1057 = _569.value;
_1058 = _1054.value;
_1059 = _1057 == _1058;
_1060 = (frost$core$Bit) {_1059};
_1062 = _1060.value;
if (_1062) goto block119; else goto block120;
block119:;
_1064 = &_567->$data.$CREATE_STRUCT.field0;
_1065 = *_1064;
_1066 = &_567->$data.$CREATE_STRUCT.field1;
_1067 = *_1066;
*(&local24) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1069 = ((frost$core$Object*) _1067);
frost$core$Frost$ref$frost$core$Object$Q(_1069);
_1071 = *(&local24);
_1072 = ((frost$core$Object*) _1071);
frost$core$Frost$unref$frost$core$Object$Q(_1072);
*(&local24) = _1067;
_1075 = &_567->$data.$CREATE_STRUCT.field2;
_1076 = *_1075;
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
_1078 = ((frost$core$Object*) _1076);
frost$core$Frost$ref$frost$core$Object$Q(_1078);
_1080 = *(&local25);
_1081 = ((frost$core$Object*) _1080);
frost$core$Frost$unref$frost$core$Object$Q(_1081);
*(&local25) = _1076;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:558
_1085 = *(&local1);
_1086 = *(&local5);
_1087 = *(&local24);
_1088 = *(&local25);
_1089 = ($fn451) param0->$class->vtable[17];
_1089(param0, _1085, _1086, _1087, _1088);
_1091 = *(&local25);
_1092 = ((frost$core$Object*) _1091);
frost$core$Frost$unref$frost$core$Object$Q(_1092);
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
_1095 = *(&local24);
_1096 = ((frost$core$Object*) _1095);
frost$core$Frost$unref$frost$core$Object$Q(_1096);
*(&local24) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block68;
block120:;
_1100 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:560:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1103 = _569.value;
_1104 = _1100.value;
_1105 = _1103 == _1104;
_1106 = (frost$core$Bit) {_1105};
_1108 = _1106.value;
if (_1108) goto block122; else goto block123;
block122:;
_1110 = &_567->$data.$DYNAMIC_CALL.field0;
_1111 = *_1110;
_1112 = &_567->$data.$DYNAMIC_CALL.field1;
_1113 = *_1112;
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
_1115 = ((frost$core$Object*) _1113);
frost$core$Frost$ref$frost$core$Object$Q(_1115);
_1117 = *(&local26);
_1118 = ((frost$core$Object*) _1117);
frost$core$Frost$unref$frost$core$Object$Q(_1118);
*(&local26) = _1113;
_1121 = &_567->$data.$DYNAMIC_CALL.field2;
_1122 = *_1121;
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
_1124 = ((frost$core$Object*) _1122);
frost$core$Frost$ref$frost$core$Object$Q(_1124);
_1126 = *(&local27);
_1127 = ((frost$core$Object*) _1126);
frost$core$Frost$unref$frost$core$Object$Q(_1127);
*(&local27) = _1122;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:561
_1131 = *(&local1);
_1132 = *(&local26);
_1133 = ($fn452) _1131->$class->vtable[2];
_1134 = _1133(_1131, _1132);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:561:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1137 = _1134.value;
_1138 = ((int64_t) _1137);
_1139 = (frost$core$Int) {_1138};
_1141 = frost$unsafe$Pointer$init$frost$core$Int(_1139);
frost$unsafe$Pointer$wrapper* $tmp453;
$tmp453 = (frost$unsafe$Pointer$wrapper*) frostObjectAlloc(sizeof(frost$unsafe$Pointer$wrapper), (frost$core$Class*) &frost$unsafe$Pointer$wrapperclass);
$tmp453->value = _1141;
_1142 = ((org$frostlang$frostc$MethodDecl*) $tmp453);
*(&local28) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1144 = ((frost$core$Object*) _1142);
frost$core$Frost$ref$frost$core$Object$Q(_1144);
_1146 = *(&local28);
_1147 = ((frost$core$Object*) _1146);
frost$core$Frost$unref$frost$core$Object$Q(_1147);
*(&local28) = _1142;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:562
_1151 = *(&local1);
_1152 = &_1151->statements;
_1153 = *_1152;
_1154 = *(&local5);
_1155 = _1154.value;
_1156 = *(&local28);
_1157 = *(&local27);
_1158 = ($fn454) param0->$class->vtable[23];
_1159 = _1158(param0, _1156, _1157);
_1160 = ((frost$core$Int64$nullable) { _1159, true });
frost$core$Object* $tmp455;
if (_1160.nonnull) {
    frost$core$Int64$wrapper* $tmp456;
    $tmp456 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp456->value = ((frost$core$Int64) _1160.value);
    $tmp455 = ((frost$core$Object*) $tmp456);
}
else {
    $tmp455 = NULL;
}
_1161 = $tmp455;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:562:39
_1163 = (frost$core$Int) {0u};
_1164 = _1155.value;
_1165 = _1163.value;
_1166 = _1164 >= _1165;
_1167 = (frost$core$Bit) {_1166};
_1168 = _1167.value;
if (_1168) goto block129; else goto block128;
block129:;
_1170 = ((frost$collections$CollectionView*) _1153);
ITable* $tmp457 = _1170->$class->itable;
while ($tmp457->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp457 = $tmp457->next;
}
_1171 = $tmp457->methods[0];
_1172 = _1171(_1170);
_1173 = _1155.value;
_1174 = _1172.value;
_1175 = _1173 < _1174;
_1176 = (frost$core$Bit) {_1175};
_1177 = _1176.value;
if (_1177) goto block127; else goto block128;
block128:;
_1179 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s458, _1179, &$s459);
abort(); // unreachable
block127:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1183 = &_1153->data;
_1184 = *_1183;
_1185 = _1184.value;
_1186 = frost$core$Int64$init$frost$core$Int(_1155);
_1187 = _1186.value;
_1188 = _1161;
frost$core$Frost$ref$frost$core$Object$Q(_1188);
_1190 = ((frost$core$Object**)_1185)[_1187];
_1191 = _1190;
frost$core$Frost$unref$frost$core$Object$Q(_1191);
((frost$core$Object**)_1185)[_1187] = _1161;
_1195 = _1161;
frost$core$Frost$unref$frost$core$Object$Q(_1195);
_1197 = *(&local28);
_1198 = ((frost$core$Object*) _1197);
frost$core$Frost$unref$frost$core$Object$Q(_1198);
*(&local28) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1201 = *(&local27);
_1202 = ((frost$core$Object*) _1201);
frost$core$Frost$unref$frost$core$Object$Q(_1202);
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
_1205 = *(&local26);
_1206 = ((frost$core$Object*) _1205);
frost$core$Frost$unref$frost$core$Object$Q(_1206);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block123:;
_1210 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:564:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1213 = _569.value;
_1214 = _1210.value;
_1215 = _1213 == _1214;
_1216 = (frost$core$Bit) {_1215};
_1218 = _1216.value;
if (_1218) goto block130; else goto block131;
block130:;
_1220 = &_567->$data.$EXTRACT_FIELD.field0;
_1221 = *_1220;
_1222 = &_567->$data.$EXTRACT_FIELD.field1;
_1223 = *_1222;
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
_1225 = ((frost$core$Object*) _1223);
frost$core$Frost$ref$frost$core$Object$Q(_1225);
_1227 = *(&local29);
_1228 = ((frost$core$Object*) _1227);
frost$core$Frost$unref$frost$core$Object$Q(_1228);
*(&local29) = _1223;
_1231 = &_567->$data.$EXTRACT_FIELD.field2;
_1232 = *_1231;
*(&local30) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1234 = ((frost$core$Object*) _1232);
frost$core$Frost$ref$frost$core$Object$Q(_1234);
_1236 = *(&local30);
_1237 = ((frost$core$Object*) _1236);
frost$core$Frost$unref$frost$core$Object$Q(_1237);
*(&local30) = _1232;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:565
_1241 = *(&local1);
_1242 = *(&local5);
_1243 = *(&local29);
_1244 = *(&local30);
_1245 = ($fn460) param0->$class->vtable[18];
_1245(param0, _1241, _1242, _1243, _1244);
_1247 = *(&local30);
_1248 = ((frost$core$Object*) _1247);
frost$core$Frost$unref$frost$core$Object$Q(_1248);
*(&local30) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1251 = *(&local29);
_1252 = ((frost$core$Object*) _1251);
frost$core$Frost$unref$frost$core$Object$Q(_1252);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block131:;
_1256 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:567:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1259 = _569.value;
_1260 = _1256.value;
_1261 = _1259 == _1260;
_1262 = (frost$core$Bit) {_1261};
_1264 = _1262.value;
if (_1264) goto block133; else goto block134;
block133:;
_1266 = &_567->$data.$GET_FIELD_POINTER.field0;
_1267 = *_1266;
_1268 = &_567->$data.$GET_FIELD_POINTER.field1;
_1269 = *_1268;
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
_1271 = ((frost$core$Object*) _1269);
frost$core$Frost$ref$frost$core$Object$Q(_1271);
_1273 = *(&local31);
_1274 = ((frost$core$Object*) _1273);
frost$core$Frost$unref$frost$core$Object$Q(_1274);
*(&local31) = _1269;
_1277 = &_567->$data.$GET_FIELD_POINTER.field2;
_1278 = *_1277;
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1280 = ((frost$core$Object*) _1278);
frost$core$Frost$ref$frost$core$Object$Q(_1280);
_1282 = *(&local32);
_1283 = ((frost$core$Object*) _1282);
frost$core$Frost$unref$frost$core$Object$Q(_1283);
*(&local32) = _1278;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:568
_1287 = *(&local1);
_1288 = *(&local5);
_1289 = *(&local31);
_1290 = *(&local32);
_1291 = ($fn461) param0->$class->vtable[20];
_1291(param0, _1287, _1288, _1289, _1290);
_1293 = *(&local32);
_1294 = ((frost$core$Object*) _1293);
frost$core$Frost$unref$frost$core$Object$Q(_1294);
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1297 = *(&local31);
_1298 = ((frost$core$Object*) _1297);
frost$core$Frost$unref$frost$core$Object$Q(_1298);
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block134:;
_1302 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:570:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1305 = _569.value;
_1306 = _1302.value;
_1307 = _1305 == _1306;
_1308 = (frost$core$Bit) {_1307};
_1310 = _1308.value;
if (_1310) goto block136; else goto block137;
block136:;
_1312 = &_567->$data.$GET_VIRTUAL_METHOD.field0;
_1313 = *_1312;
_1314 = &_567->$data.$GET_VIRTUAL_METHOD.field1;
_1315 = *_1314;
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
_1317 = ((frost$core$Object*) _1315);
frost$core$Frost$ref$frost$core$Object$Q(_1317);
_1319 = *(&local33);
_1320 = ((frost$core$Object*) _1319);
frost$core$Frost$unref$frost$core$Object$Q(_1320);
*(&local33) = _1315;
_1323 = &_567->$data.$GET_VIRTUAL_METHOD.field2;
_1324 = *_1323;
*(&local34) = _1324;
_1326 = &_567->$data.$GET_VIRTUAL_METHOD.field3;
_1327 = *_1326;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:571
_1329 = *(&local1);
_1330 = *(&local33);
_1331 = ($fn462) _1329->$class->vtable[2];
_1332 = _1331(_1329, _1330);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:571:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1335 = _1332.value;
_1336 = ((int64_t) _1335);
_1337 = (frost$core$Int) {_1336};
_1339 = frost$unsafe$Pointer$init$frost$core$Int(_1337);
*(&local35) = _1339;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:572
_1342 = *(&local35);
_1343 = _1342.value;
_1344 = *((frost$core$Int*)_1343);
_1345 = frost$unsafe$Pointer$init$frost$core$Int(_1344);
frost$unsafe$Pointer$wrapper* $tmp463;
$tmp463 = (frost$unsafe$Pointer$wrapper*) frostObjectAlloc(sizeof(frost$unsafe$Pointer$wrapper), (frost$core$Class*) &frost$unsafe$Pointer$wrapperclass);
$tmp463->value = _1345;
_1346 = ((org$frostlang$frostc$ClassDecl*) $tmp463);
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1348 = ((frost$core$Object*) _1346);
frost$core$Frost$ref$frost$core$Object$Q(_1348);
_1350 = *(&local36);
_1351 = ((frost$core$Object*) _1350);
frost$core$Frost$unref$frost$core$Object$Q(_1351);
*(&local36) = _1346;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:573
_1355 = &param0->compiler;
_1356 = *_1355;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:573:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_1361 = &_1356->_valid;
_1362 = *_1361;
_1364 = _1362.value;
if (_1364) goto block142; else goto block143;
block143:;
_1366 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s464, _1366, &$s465);
abort(); // unreachable
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_1370 = &_1356->value;
_1371 = *_1370;
_1372 = _1371;
_1373 = _1372;
frost$core$Frost$ref$frost$core$Object$Q(_1373);
_1376 = ((org$frostlang$frostc$Compiler*) _1372);
_1377 = _1376 != NULL;
_1378 = (frost$core$Bit) {_1377};
_1379 = _1378.value;
if (_1379) goto block144; else goto block145;
block145:;
_1381 = (frost$core$Int) {573u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s466, _1381, &$s467);
abort(); // unreachable
block144:;
_1384 = _1376;
_1385 = *(&local36);
_1386 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_1384, _1385);
_1387 = *(&local34);
ITable* $tmp468 = _1386->$class->itable;
while ($tmp468->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp468 = $tmp468->next;
}
_1388 = $tmp468->methods[0];
_1389 = _1388(_1386, _1387);
_1390 = ((org$frostlang$frostc$MethodDecl*) _1389);
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1392 = ((frost$core$Object*) _1390);
frost$core$Frost$ref$frost$core$Object$Q(_1392);
_1394 = *(&local37);
_1395 = ((frost$core$Object*) _1394);
frost$core$Frost$unref$frost$core$Object$Q(_1395);
*(&local37) = _1390;
_1398 = _1389;
frost$core$Frost$unref$frost$core$Object$Q(_1398);
_1400 = ((frost$core$Object*) _1386);
frost$core$Frost$unref$frost$core$Object$Q(_1400);
_1402 = _1372;
frost$core$Frost$unref$frost$core$Object$Q(_1402);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:574
_1405 = *(&local1);
_1406 = &_1405->statements;
_1407 = *_1406;
_1408 = *(&local5);
_1409 = _1408.value;
_1410 = *(&local37);
_1411 = ((frost$core$Object*) _1410);
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&_1412, _1411);
_1413 = frost$core$Int64$init$frost$core$Int(_1412);
_1414 = ((frost$core$Int64$nullable) { _1413, true });
frost$core$Object* $tmp469;
if (_1414.nonnull) {
    frost$core$Int64$wrapper* $tmp470;
    $tmp470 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp470->value = ((frost$core$Int64) _1414.value);
    $tmp469 = ((frost$core$Object*) $tmp470);
}
else {
    $tmp469 = NULL;
}
_1415 = $tmp469;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:574:39
_1417 = (frost$core$Int) {0u};
_1418 = _1409.value;
_1419 = _1417.value;
_1420 = _1418 >= _1419;
_1421 = (frost$core$Bit) {_1420};
_1422 = _1421.value;
if (_1422) goto block149; else goto block148;
block149:;
_1424 = ((frost$collections$CollectionView*) _1407);
ITable* $tmp471 = _1424->$class->itable;
while ($tmp471->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp471 = $tmp471->next;
}
_1425 = $tmp471->methods[0];
_1426 = _1425(_1424);
_1427 = _1409.value;
_1428 = _1426.value;
_1429 = _1427 < _1428;
_1430 = (frost$core$Bit) {_1429};
_1431 = _1430.value;
if (_1431) goto block147; else goto block148;
block148:;
_1433 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s472, _1433, &$s473);
abort(); // unreachable
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1437 = &_1407->data;
_1438 = *_1437;
_1439 = _1438.value;
_1440 = frost$core$Int64$init$frost$core$Int(_1409);
_1441 = _1440.value;
_1442 = _1415;
frost$core$Frost$ref$frost$core$Object$Q(_1442);
_1444 = ((frost$core$Object**)_1439)[_1441];
_1445 = _1444;
frost$core$Frost$unref$frost$core$Object$Q(_1445);
((frost$core$Object**)_1439)[_1441] = _1415;
_1449 = _1415;
frost$core$Frost$unref$frost$core$Object$Q(_1449);
_1451 = *(&local37);
_1452 = ((frost$core$Object*) _1451);
frost$core$Frost$unref$frost$core$Object$Q(_1452);
*(&local37) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1455 = *(&local36);
_1456 = ((frost$core$Object*) _1455);
frost$core$Frost$unref$frost$core$Object$Q(_1456);
*(&local36) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1459 = *(&local33);
_1460 = ((frost$core$Object*) _1459);
frost$core$Frost$unref$frost$core$Object$Q(_1460);
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block137:;
_1464 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:576:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1467 = _569.value;
_1468 = _1464.value;
_1469 = _1467 == _1468;
_1470 = (frost$core$Bit) {_1469};
_1472 = _1470.value;
if (_1472) goto block150; else goto block151;
block150:;
_1474 = &_567->$data.$LOAD.field0;
_1475 = *_1474;
_1476 = &_567->$data.$LOAD.field1;
_1477 = *_1476;
*(&local38) = ((org$frostlang$frostc$IR$Value*) NULL);
_1479 = ((frost$core$Object*) _1477);
frost$core$Frost$ref$frost$core$Object$Q(_1479);
_1481 = *(&local38);
_1482 = ((frost$core$Object*) _1481);
frost$core$Frost$unref$frost$core$Object$Q(_1482);
*(&local38) = _1477;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:577
_1486 = *(&local1);
_1487 = *(&local38);
_1488 = ($fn474) _1486->$class->vtable[2];
_1489 = _1488(_1486, _1487);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:577:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1492 = _1489.value;
_1493 = ((int64_t) _1492);
_1494 = (frost$core$Int) {_1493};
_1496 = frost$unsafe$Pointer$init$frost$core$Int(_1494);
*(&local39) = _1496;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:578
_1499 = *(&local38);
_1500 = ($fn475) _1499->$class->vtable[2];
_1501 = _1500(_1499);
_1502 = ($fn476) param0->$class->vtable[10];
_1503 = _1502(param0, _1501);
_1504 = _1503.value;
_1505 = ((frost$core$Object*) _1501);
frost$core$Frost$unref$frost$core$Object$Q(_1505);
if (_1504) goto block154; else goto block156;
block154:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:579
_1509 = *(&local1);
_1510 = &_1509->statements;
_1511 = *_1510;
_1512 = *(&local5);
_1513 = _1512.value;
_1514 = *(&local39);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:579:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1517 = _1514.value;
_1518 = (frost$core$Int) {_1517};
_1520 = frost$core$Int64$init$frost$core$Int(_1518);
_1521 = ((frost$core$Int64$nullable) { _1520, true });
frost$core$Object* $tmp477;
if (_1521.nonnull) {
    frost$core$Int64$wrapper* $tmp478;
    $tmp478 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp478->value = ((frost$core$Int64) _1521.value);
    $tmp477 = ((frost$core$Object*) $tmp478);
}
else {
    $tmp477 = NULL;
}
_1522 = $tmp477;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:579:43
_1524 = (frost$core$Int) {0u};
_1525 = _1513.value;
_1526 = _1524.value;
_1527 = _1525 >= _1526;
_1528 = (frost$core$Bit) {_1527};
_1529 = _1528.value;
if (_1529) goto block161; else goto block160;
block161:;
_1531 = ((frost$collections$CollectionView*) _1511);
ITable* $tmp479 = _1531->$class->itable;
while ($tmp479->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp479 = $tmp479->next;
}
_1532 = $tmp479->methods[0];
_1533 = _1532(_1531);
_1534 = _1513.value;
_1535 = _1533.value;
_1536 = _1534 < _1535;
_1537 = (frost$core$Bit) {_1536};
_1538 = _1537.value;
if (_1538) goto block159; else goto block160;
block160:;
_1540 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s480, _1540, &$s481);
abort(); // unreachable
block159:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1544 = &_1511->data;
_1545 = *_1544;
_1546 = _1545.value;
_1547 = frost$core$Int64$init$frost$core$Int(_1513);
_1548 = _1547.value;
_1549 = _1522;
frost$core$Frost$ref$frost$core$Object$Q(_1549);
_1551 = ((frost$core$Object**)_1546)[_1548];
_1552 = _1551;
frost$core$Frost$unref$frost$core$Object$Q(_1552);
((frost$core$Object**)_1546)[_1548] = _1522;
_1556 = _1522;
frost$core$Frost$unref$frost$core$Object$Q(_1556);
goto block155;
block156:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:582
_1561 = *(&local1);
_1562 = &_1561->statements;
_1563 = *_1562;
_1564 = *(&local5);
_1565 = _1564.value;
_1566 = *(&local39);
_1567 = _1566.value;
_1568 = *((frost$core$Int*)_1567);
_1569 = frost$core$Int64$init$frost$core$Int(_1568);
_1570 = ((frost$core$Int64$nullable) { _1569, true });
frost$core$Object* $tmp482;
if (_1570.nonnull) {
    frost$core$Int64$wrapper* $tmp483;
    $tmp483 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp483->value = ((frost$core$Int64) _1570.value);
    $tmp482 = ((frost$core$Object*) $tmp483);
}
else {
    $tmp482 = NULL;
}
_1571 = $tmp482;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:582:43
_1573 = (frost$core$Int) {0u};
_1574 = _1565.value;
_1575 = _1573.value;
_1576 = _1574 >= _1575;
_1577 = (frost$core$Bit) {_1576};
_1578 = _1577.value;
if (_1578) goto block165; else goto block164;
block165:;
_1580 = ((frost$collections$CollectionView*) _1563);
ITable* $tmp484 = _1580->$class->itable;
while ($tmp484->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp484 = $tmp484->next;
}
_1581 = $tmp484->methods[0];
_1582 = _1581(_1580);
_1583 = _1565.value;
_1584 = _1582.value;
_1585 = _1583 < _1584;
_1586 = (frost$core$Bit) {_1585};
_1587 = _1586.value;
if (_1587) goto block163; else goto block164;
block164:;
_1589 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s485, _1589, &$s486);
abort(); // unreachable
block163:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1593 = &_1563->data;
_1594 = *_1593;
_1595 = _1594.value;
_1596 = frost$core$Int64$init$frost$core$Int(_1565);
_1597 = _1596.value;
_1598 = _1571;
frost$core$Frost$ref$frost$core$Object$Q(_1598);
_1600 = ((frost$core$Object**)_1595)[_1597];
_1601 = _1600;
frost$core$Frost$unref$frost$core$Object$Q(_1601);
((frost$core$Object**)_1595)[_1597] = _1571;
_1605 = _1571;
frost$core$Frost$unref$frost$core$Object$Q(_1605);
goto block155;
block155:;
_1608 = *(&local38);
_1609 = ((frost$core$Object*) _1608);
frost$core$Frost$unref$frost$core$Object$Q(_1609);
*(&local38) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block151:;
_1613 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:585:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1616 = _569.value;
_1617 = _1613.value;
_1618 = _1616 == _1617;
_1619 = (frost$core$Bit) {_1618};
_1621 = _1619.value;
if (_1621) goto block166; else goto block167;
block166:;
_1623 = &_567->$data.$POINTER_GET_INDEX.field0;
_1624 = *_1623;
_1625 = &_567->$data.$POINTER_GET_INDEX.field1;
_1626 = *_1625;
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
_1628 = ((frost$core$Object*) _1626);
frost$core$Frost$ref$frost$core$Object$Q(_1628);
_1630 = *(&local40);
_1631 = ((frost$core$Object*) _1630);
frost$core$Frost$unref$frost$core$Object$Q(_1631);
*(&local40) = _1626;
_1634 = &_567->$data.$POINTER_GET_INDEX.field2;
_1635 = *_1634;
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
_1637 = ((frost$core$Object*) _1635);
frost$core$Frost$ref$frost$core$Object$Q(_1637);
_1639 = *(&local41);
_1640 = ((frost$core$Object*) _1639);
frost$core$Frost$unref$frost$core$Object$Q(_1640);
*(&local41) = _1635;
_1643 = &_567->$data.$POINTER_GET_INDEX.field3;
_1644 = *_1643;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:586
_1646 = *(&local40);
_1647 = ($fn487) _1646->$class->vtable[2];
_1648 = _1647(_1646);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Interpreter.frost:586:41
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_1651 = &_1648->_subtypes;
_1652 = *_1651;
_1653 = _1652 != NULL;
_1654 = (frost$core$Bit) {_1653};
_1655 = _1654.value;
if (_1655) goto block170; else goto block171;
block171:;
_1657 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s488, _1657, &$s489);
abort(); // unreachable
block170:;
_1660 = _1652;
_1661 = ((frost$core$Object*) _1660);
frost$core$Frost$ref$frost$core$Object$Q(_1661);
_1664 = (frost$core$Int) {1u};
_1665 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_1660, _1664);
_1666 = ((org$frostlang$frostc$Type*) _1665);
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
_1668 = ((frost$core$Object*) _1666);
frost$core$Frost$ref$frost$core$Object$Q(_1668);
_1670 = *(&local42);
_1671 = ((frost$core$Object*) _1670);
frost$core$Frost$unref$frost$core$Object$Q(_1671);
*(&local42) = _1666;
_1674 = _1665;
frost$core$Frost$unref$frost$core$Object$Q(_1674);
_1676 = ((frost$core$Object*) _1660);
frost$core$Frost$unref$frost$core$Object$Q(_1676);
_1678 = ((frost$core$Object*) _1648);
frost$core$Frost$unref$frost$core$Object$Q(_1678);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:587
_1681 = *(&local1);
_1682 = *(&local40);
_1683 = ($fn490) _1681->$class->vtable[2];
_1684 = _1683(_1681, _1682);
_1685 = *(&local1);
_1686 = *(&local41);
_1687 = ($fn491) _1685->$class->vtable[2];
_1688 = _1687(_1685, _1686);
_1689 = &param0->memoryLayout;
_1690 = *_1689;
_1691 = *(&local42);
_1692 = ($fn492) _1690->$class->vtable[7];
_1693 = _1692(_1690, _1691);
_1694 = frost$core$Int64$init$frost$core$Int(_1693);
_1695 = _1688.value;
_1696 = _1694.value;
_1697 = _1695 * _1696;
_1698 = (frost$core$Int64) {_1697};
_1699 = _1684.value;
_1700 = _1698.value;
_1701 = _1699 + _1700;
_1702 = (frost$core$Int64) {_1701};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:588:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1705 = _1702.value;
_1706 = ((int64_t) _1705);
_1707 = (frost$core$Int) {_1706};
_1709 = frost$unsafe$Pointer$init$frost$core$Int(_1707);
*(&local43) = _1709;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:589
_1712 = &param0->stack;
_1713 = *_1712;
_1714 = _1713.value;
_1715 = (frost$core$Int64) {0u};
*((frost$core$Int64*)_1714) = _1715;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:590
_1718 = (frost$core$Int) {0u};
_1719 = &param0->memoryLayout;
_1720 = *_1719;
_1721 = *(&local42);
_1722 = ($fn493) _1720->$class->vtable[7];
_1723 = _1722(_1720, _1721);
_1724 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.min(other:frost.core.Int):frost.core.Int from Interpreter.frost:590:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:776
_1727 = _1723.value;
_1728 = _1724.value;
_1729 = _1727 < _1728;
_1730 = (frost$core$Bit) {_1729};
_1731 = _1730.value;
if (_1731) goto block174; else goto block175;
block174:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:777
_1734 = _1723.value;
_1735 = (frost$core$Int) {_1734};
*(&local44) = _1735;
goto block173;
block175:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:779
_1739 = _1724.value;
_1740 = (frost$core$Int) {_1739};
*(&local44) = _1740;
goto block173;
block173:;
_1743 = *(&local44);
_1744 = (frost$core$Bit) {false};
_1745 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1718, _1743, _1744);
_1746 = _1745.min;
*(&local45) = _1746;
_1748 = _1745.max;
_1749 = _1745.inclusive;
_1750 = _1749.value;
_1751 = (frost$core$Int) {1u};
if (_1750) goto block179; else goto block180;
block179:;
_1753 = _1746.value;
_1754 = _1748.value;
_1755 = _1753 <= _1754;
_1756 = (frost$core$Bit) {_1755};
_1757 = _1756.value;
if (_1757) goto block176; else goto block177;
block180:;
_1759 = _1746.value;
_1760 = _1748.value;
_1761 = _1759 < _1760;
_1762 = (frost$core$Bit) {_1761};
_1763 = _1762.value;
if (_1763) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:591
_1766 = &param0->stack;
_1767 = *_1766;
_1768 = _1767.value;
_1769 = *(&local45);
_1770 = frost$core$Int64$init$frost$core$Int(_1769);
_1771 = *(&local43);
_1772 = _1771.value;
_1773 = *(&local45);
_1774 = frost$core$Int64$init$frost$core$Int(_1773);
_1775 = _1774.value;
_1776 = ((frost$core$UInt8*)_1772)[_1775];
_1777 = _1770.value;
((frost$core$UInt8*)_1768)[_1777] = _1776;
_1780 = *(&local45);
_1781 = _1748.value;
_1782 = _1780.value;
_1783 = _1781 - _1782;
_1784 = (frost$core$Int) {_1783};
if (_1750) goto block182; else goto block183;
block182:;
_1786 = _1784.value;
_1787 = _1751.value;
_1788 = _1786 >= _1787;
_1789 = (frost$core$Bit) {_1788};
_1790 = _1789.value;
if (_1790) goto block181; else goto block177;
block183:;
_1792 = _1784.value;
_1793 = _1751.value;
_1794 = _1792 > _1793;
_1795 = (frost$core$Bit) {_1794};
_1796 = _1795.value;
if (_1796) goto block181; else goto block177;
block181:;
_1798 = _1780.value;
_1799 = _1751.value;
_1800 = _1798 + _1799;
_1801 = (frost$core$Int) {_1800};
*(&local45) = _1801;
goto block176;
block177:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:593
_1805 = *(&local1);
_1806 = &_1805->statements;
_1807 = *_1806;
_1808 = *(&local5);
_1809 = _1808.value;
_1810 = &param0->stack;
_1811 = *_1810;
_1812 = _1811.value;
_1813 = *((frost$core$Int64*)_1812);
_1814 = ((frost$core$Int64$nullable) { _1813, true });
frost$core$Object* $tmp494;
if (_1814.nonnull) {
    frost$core$Int64$wrapper* $tmp495;
    $tmp495 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp495->value = ((frost$core$Int64) _1814.value);
    $tmp494 = ((frost$core$Object*) $tmp495);
}
else {
    $tmp494 = NULL;
}
_1815 = $tmp494;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:593:39
_1817 = (frost$core$Int) {0u};
_1818 = _1809.value;
_1819 = _1817.value;
_1820 = _1818 >= _1819;
_1821 = (frost$core$Bit) {_1820};
_1822 = _1821.value;
if (_1822) goto block187; else goto block186;
block187:;
_1824 = ((frost$collections$CollectionView*) _1807);
ITable* $tmp496 = _1824->$class->itable;
while ($tmp496->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp496 = $tmp496->next;
}
_1825 = $tmp496->methods[0];
_1826 = _1825(_1824);
_1827 = _1809.value;
_1828 = _1826.value;
_1829 = _1827 < _1828;
_1830 = (frost$core$Bit) {_1829};
_1831 = _1830.value;
if (_1831) goto block185; else goto block186;
block186:;
_1833 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s497, _1833, &$s498);
abort(); // unreachable
block185:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1837 = &_1807->data;
_1838 = *_1837;
_1839 = _1838.value;
_1840 = frost$core$Int64$init$frost$core$Int(_1809);
_1841 = _1840.value;
_1842 = _1815;
frost$core$Frost$ref$frost$core$Object$Q(_1842);
_1844 = ((frost$core$Object**)_1839)[_1841];
_1845 = _1844;
frost$core$Frost$unref$frost$core$Object$Q(_1845);
((frost$core$Object**)_1839)[_1841] = _1815;
_1849 = _1815;
frost$core$Frost$unref$frost$core$Object$Q(_1849);
_1851 = *(&local42);
_1852 = ((frost$core$Object*) _1851);
frost$core$Frost$unref$frost$core$Object$Q(_1852);
*(&local42) = ((org$frostlang$frostc$Type*) NULL);
_1855 = *(&local41);
_1856 = ((frost$core$Object*) _1855);
frost$core$Frost$unref$frost$core$Object$Q(_1856);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
_1859 = *(&local40);
_1860 = ((frost$core$Object*) _1859);
frost$core$Frost$unref$frost$core$Object$Q(_1860);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block167:;
_1864 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:595:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1867 = _569.value;
_1868 = _1864.value;
_1869 = _1867 == _1868;
_1870 = (frost$core$Bit) {_1869};
_1872 = _1870.value;
if (_1872) goto block188; else goto block189;
block188:;
_1874 = &_567->$data.$POINTER_SET_INDEX.field0;
_1875 = *_1874;
_1876 = &_567->$data.$POINTER_SET_INDEX.field1;
_1877 = *_1876;
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
_1879 = ((frost$core$Object*) _1877);
frost$core$Frost$ref$frost$core$Object$Q(_1879);
_1881 = *(&local46);
_1882 = ((frost$core$Object*) _1881);
frost$core$Frost$unref$frost$core$Object$Q(_1882);
*(&local46) = _1877;
_1885 = &_567->$data.$POINTER_SET_INDEX.field2;
_1886 = *_1885;
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
_1888 = ((frost$core$Object*) _1886);
frost$core$Frost$ref$frost$core$Object$Q(_1888);
_1890 = *(&local47);
_1891 = ((frost$core$Object*) _1890);
frost$core$Frost$unref$frost$core$Object$Q(_1891);
*(&local47) = _1886;
_1894 = &_567->$data.$POINTER_SET_INDEX.field3;
_1895 = *_1894;
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
_1897 = ((frost$core$Object*) _1895);
frost$core$Frost$ref$frost$core$Object$Q(_1897);
_1899 = *(&local48);
_1900 = ((frost$core$Object*) _1899);
frost$core$Frost$unref$frost$core$Object$Q(_1900);
*(&local48) = _1895;
_1903 = &_567->$data.$POINTER_SET_INDEX.field4;
_1904 = *_1903;
*(&local49) = ((org$frostlang$frostc$Type*) NULL);
_1906 = ((frost$core$Object*) _1904);
frost$core$Frost$ref$frost$core$Object$Q(_1906);
_1908 = *(&local49);
_1909 = ((frost$core$Object*) _1908);
frost$core$Frost$unref$frost$core$Object$Q(_1909);
*(&local49) = _1904;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:596
_1913 = *(&local1);
_1914 = *(&local47);
_1915 = ($fn499) _1913->$class->vtable[2];
_1916 = _1915(_1913, _1914);
_1917 = *(&local1);
_1918 = *(&local48);
_1919 = ($fn500) _1917->$class->vtable[2];
_1920 = _1919(_1917, _1918);
_1921 = &param0->memoryLayout;
_1922 = *_1921;
_1923 = *(&local46);
_1924 = ($fn501) _1923->$class->vtable[2];
_1925 = _1924(_1923);
_1926 = ($fn502) _1922->$class->vtable[7];
_1927 = _1926(_1922, _1925);
_1928 = frost$core$Int64$init$frost$core$Int(_1927);
_1929 = _1920.value;
_1930 = _1928.value;
_1931 = _1929 * _1930;
_1932 = (frost$core$Int64) {_1931};
_1933 = _1916.value;
_1934 = _1932.value;
_1935 = _1933 + _1934;
_1936 = (frost$core$Int64) {_1935};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:597:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1939 = _1936.value;
_1940 = ((int64_t) _1939);
_1941 = (frost$core$Int) {_1940};
_1943 = frost$unsafe$Pointer$init$frost$core$Int(_1941);
*(&local50) = _1943;
_1945 = ((frost$core$Object*) _1925);
frost$core$Frost$unref$frost$core$Object$Q(_1945);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:598
_1948 = *(&local1);
_1949 = *(&local46);
_1950 = ($fn503) _1948->$class->vtable[2];
_1951 = _1950(_1948, _1949);
*(&local51) = _1951;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:599
_1954 = &param0->stack;
_1955 = *_1954;
_1956 = _1955.value;
_1957 = *(&local51);
*((frost$core$Int64*)_1956) = _1957;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:600
_1960 = (frost$core$Int) {0u};
_1961 = &param0->memoryLayout;
_1962 = *_1961;
_1963 = *(&local46);
_1964 = ($fn504) _1963->$class->vtable[2];
_1965 = _1964(_1963);
_1966 = ($fn505) _1962->$class->vtable[7];
_1967 = _1966(_1962, _1965);
_1968 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.min(other:frost.core.Int):frost.core.Int from Interpreter.frost:600:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:776
_1971 = _1967.value;
_1972 = _1968.value;
_1973 = _1971 < _1972;
_1974 = (frost$core$Bit) {_1973};
_1975 = _1974.value;
if (_1975) goto block193; else goto block194;
block193:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:777
_1978 = _1967.value;
_1979 = (frost$core$Int) {_1978};
*(&local52) = _1979;
goto block192;
block194:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:779
_1983 = _1968.value;
_1984 = (frost$core$Int) {_1983};
*(&local52) = _1984;
goto block192;
block192:;
_1987 = *(&local52);
_1988 = (frost$core$Bit) {false};
_1989 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1960, _1987, _1988);
_1990 = _1989.min;
*(&local53) = _1990;
_1992 = _1989.max;
_1993 = _1989.inclusive;
_1994 = _1993.value;
_1995 = (frost$core$Int) {1u};
if (_1994) goto block198; else goto block199;
block198:;
_1997 = _1990.value;
_1998 = _1992.value;
_1999 = _1997 <= _1998;
_2000 = (frost$core$Bit) {_1999};
_2001 = _2000.value;
if (_2001) goto block195; else goto block196;
block199:;
_2003 = _1990.value;
_2004 = _1992.value;
_2005 = _2003 < _2004;
_2006 = (frost$core$Bit) {_2005};
_2007 = _2006.value;
if (_2007) goto block195; else goto block196;
block195:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:601
_2010 = *(&local50);
_2011 = _2010.value;
_2012 = *(&local53);
_2013 = frost$core$Int64$init$frost$core$Int(_2012);
_2014 = &param0->stack;
_2015 = *_2014;
_2016 = _2015.value;
_2017 = *(&local53);
_2018 = frost$core$Int64$init$frost$core$Int(_2017);
_2019 = _2018.value;
_2020 = ((frost$core$UInt8*)_2016)[_2019];
_2021 = _2013.value;
((frost$core$UInt8*)_2011)[_2021] = _2020;
_2024 = *(&local53);
_2025 = _1992.value;
_2026 = _2024.value;
_2027 = _2025 - _2026;
_2028 = (frost$core$Int) {_2027};
if (_1994) goto block201; else goto block202;
block201:;
_2030 = _2028.value;
_2031 = _1995.value;
_2032 = _2030 >= _2031;
_2033 = (frost$core$Bit) {_2032};
_2034 = _2033.value;
if (_2034) goto block200; else goto block196;
block202:;
_2036 = _2028.value;
_2037 = _1995.value;
_2038 = _2036 > _2037;
_2039 = (frost$core$Bit) {_2038};
_2040 = _2039.value;
if (_2040) goto block200; else goto block196;
block200:;
_2042 = _2024.value;
_2043 = _1995.value;
_2044 = _2042 + _2043;
_2045 = (frost$core$Int) {_2044};
*(&local53) = _2045;
goto block195;
block196:;
_2048 = ((frost$core$Object*) _1965);
frost$core$Frost$unref$frost$core$Object$Q(_2048);
_2050 = *(&local49);
_2051 = ((frost$core$Object*) _2050);
frost$core$Frost$unref$frost$core$Object$Q(_2051);
*(&local49) = ((org$frostlang$frostc$Type*) NULL);
_2054 = *(&local48);
_2055 = ((frost$core$Object*) _2054);
frost$core$Frost$unref$frost$core$Object$Q(_2055);
*(&local48) = ((org$frostlang$frostc$IR$Value*) NULL);
_2058 = *(&local47);
_2059 = ((frost$core$Object*) _2058);
frost$core$Frost$unref$frost$core$Object$Q(_2059);
*(&local47) = ((org$frostlang$frostc$IR$Value*) NULL);
_2062 = *(&local46);
_2063 = ((frost$core$Object*) _2062);
frost$core$Frost$unref$frost$core$Object$Q(_2063);
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block189:;
_2067 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:604:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2070 = _569.value;
_2071 = _2067.value;
_2072 = _2070 == _2071;
_2073 = (frost$core$Bit) {_2072};
_2075 = _2073.value;
if (_2075) goto block203; else goto block204;
block203:;
_2077 = &_567->$data.$RETURN.field0;
_2078 = *_2077;
_2079 = &_567->$data.$RETURN.field1;
_2080 = *_2079;
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
_2082 = ((frost$core$Object*) _2080);
frost$core$Frost$ref$frost$core$Object$Q(_2082);
_2084 = *(&local54);
_2085 = ((frost$core$Object*) _2084);
frost$core$Frost$unref$frost$core$Object$Q(_2085);
*(&local54) = _2080;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:605
_2089 = &param0->contexts;
_2090 = *_2089;
_2091 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_2090);
_2092 = ((org$frostlang$frostc$Interpreter$Context*) _2091);
_2093 = _2091;
frost$core$Frost$unref$frost$core$Object$Q(_2093);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:606
_2096 = *(&local54);
_2097 = _2096 != NULL;
_2098 = (frost$core$Bit) {_2097};
_2099 = _2098.value;
if (_2099) goto block206; else goto block207;
block206:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:607
_2102 = *(&local1);
_2103 = *(&local54);
_2104 = _2103 != NULL;
_2105 = (frost$core$Bit) {_2104};
_2106 = _2105.value;
if (_2106) goto block208; else goto block209;
block209:;
_2108 = (frost$core$Int) {607u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s506, _2108, &$s507);
abort(); // unreachable
block208:;
_2111 = _2103;
_2112 = ($fn508) _2102->$class->vtable[2];
_2113 = _2112(_2102, _2111);
_2114 = *(&local54);
_2115 = ((frost$core$Object*) _2114);
frost$core$Frost$unref$frost$core$Object$Q(_2115);
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
_2118 = *(&local6);
_2119 = ((frost$core$Object*) _2118);
frost$core$Frost$unref$frost$core$Object$Q(_2119);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
_2122 = *(&local1);
_2123 = ((frost$core$Object*) _2122);
frost$core$Frost$unref$frost$core$Object$Q(_2123);
*(&local1) = ((org$frostlang$frostc$Interpreter$Context*) NULL);
_2126 = *(&local0);
_2127 = ((frost$core$Object*) _2126);
frost$core$Frost$unref$frost$core$Object$Q(_2127);
*(&local0) = ((org$frostlang$frostc$Interpreter$Code*) NULL);
return _2113;
block207:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:609
_2132 = (frost$core$Int64) {18446744073709551615u};
_2133 = *(&local54);
_2134 = ((frost$core$Object*) _2133);
frost$core$Frost$unref$frost$core$Object$Q(_2134);
*(&local54) = ((org$frostlang$frostc$IR$Value*) NULL);
_2137 = *(&local6);
_2138 = ((frost$core$Object*) _2137);
frost$core$Frost$unref$frost$core$Object$Q(_2138);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
_2141 = *(&local1);
_2142 = ((frost$core$Object*) _2141);
frost$core$Frost$unref$frost$core$Object$Q(_2142);
*(&local1) = ((org$frostlang$frostc$Interpreter$Context*) NULL);
_2145 = *(&local0);
_2146 = ((frost$core$Object*) _2145);
frost$core$Frost$unref$frost$core$Object$Q(_2146);
*(&local0) = ((org$frostlang$frostc$Interpreter$Code*) NULL);
return _2132;
block204:;
_2150 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:611:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2153 = _569.value;
_2154 = _2150.value;
_2155 = _2153 == _2154;
_2156 = (frost$core$Bit) {_2155};
_2158 = _2156.value;
if (_2158) goto block210; else goto block211;
block210:;
_2160 = &_567->$data.$STATIC_CALL.field0;
_2161 = *_2160;
_2162 = &_567->$data.$STATIC_CALL.field1;
_2163 = *_2162;
*(&local55) = ((org$frostlang$frostc$MethodDecl*) NULL);
_2165 = ((frost$core$Object*) _2163);
frost$core$Frost$ref$frost$core$Object$Q(_2165);
_2167 = *(&local55);
_2168 = ((frost$core$Object*) _2167);
frost$core$Frost$unref$frost$core$Object$Q(_2168);
*(&local55) = _2163;
_2171 = &_567->$data.$STATIC_CALL.field2;
_2172 = *_2171;
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
_2174 = ((frost$core$Object*) _2172);
frost$core$Frost$ref$frost$core$Object$Q(_2174);
_2176 = *(&local56);
_2177 = ((frost$core$Object*) _2176);
frost$core$Frost$unref$frost$core$Object$Q(_2177);
*(&local56) = _2172;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:612
_2181 = *(&local1);
_2182 = &_2181->statements;
_2183 = *_2182;
_2184 = *(&local5);
_2185 = _2184.value;
_2186 = *(&local55);
_2187 = *(&local56);
_2188 = ($fn509) param0->$class->vtable[23];
_2189 = _2188(param0, _2186, _2187);
_2190 = ((frost$core$Int64$nullable) { _2189, true });
frost$core$Object* $tmp510;
if (_2190.nonnull) {
    frost$core$Int64$wrapper* $tmp511;
    $tmp511 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp511->value = ((frost$core$Int64) _2190.value);
    $tmp510 = ((frost$core$Object*) $tmp511);
}
else {
    $tmp510 = NULL;
}
_2191 = $tmp510;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:612:39
_2193 = (frost$core$Int) {0u};
_2194 = _2185.value;
_2195 = _2193.value;
_2196 = _2194 >= _2195;
_2197 = (frost$core$Bit) {_2196};
_2198 = _2197.value;
if (_2198) goto block216; else goto block215;
block216:;
_2200 = ((frost$collections$CollectionView*) _2183);
ITable* $tmp512 = _2200->$class->itable;
while ($tmp512->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp512 = $tmp512->next;
}
_2201 = $tmp512->methods[0];
_2202 = _2201(_2200);
_2203 = _2185.value;
_2204 = _2202.value;
_2205 = _2203 < _2204;
_2206 = (frost$core$Bit) {_2205};
_2207 = _2206.value;
if (_2207) goto block214; else goto block215;
block215:;
_2209 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s513, _2209, &$s514);
abort(); // unreachable
block214:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_2213 = &_2183->data;
_2214 = *_2213;
_2215 = _2214.value;
_2216 = frost$core$Int64$init$frost$core$Int(_2185);
_2217 = _2216.value;
_2218 = _2191;
frost$core$Frost$ref$frost$core$Object$Q(_2218);
_2220 = ((frost$core$Object**)_2215)[_2217];
_2221 = _2220;
frost$core$Frost$unref$frost$core$Object$Q(_2221);
((frost$core$Object**)_2215)[_2217] = _2191;
_2225 = _2191;
frost$core$Frost$unref$frost$core$Object$Q(_2225);
_2227 = *(&local56);
_2228 = ((frost$core$Object*) _2227);
frost$core$Frost$unref$frost$core$Object$Q(_2228);
*(&local56) = ((org$frostlang$frostc$FixedArray*) NULL);
_2231 = *(&local55);
_2232 = ((frost$core$Object*) _2231);
frost$core$Frost$unref$frost$core$Object$Q(_2232);
*(&local55) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block68;
block211:;
_2236 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:614:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2239 = _569.value;
_2240 = _2236.value;
_2241 = _2239 == _2240;
_2242 = (frost$core$Bit) {_2241};
_2244 = _2242.value;
if (_2244) goto block217; else goto block218;
block217:;
_2246 = &_567->$data.$STORE.field0;
_2247 = *_2246;
_2248 = &_567->$data.$STORE.field1;
_2249 = *_2248;
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
_2251 = ((frost$core$Object*) _2249);
frost$core$Frost$ref$frost$core$Object$Q(_2251);
_2253 = *(&local57);
_2254 = ((frost$core$Object*) _2253);
frost$core$Frost$unref$frost$core$Object$Q(_2254);
*(&local57) = _2249;
_2257 = &_567->$data.$STORE.field2;
_2258 = *_2257;
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
_2260 = ((frost$core$Object*) _2258);
frost$core$Frost$ref$frost$core$Object$Q(_2260);
_2262 = *(&local58);
_2263 = ((frost$core$Object*) _2262);
frost$core$Frost$unref$frost$core$Object$Q(_2263);
*(&local58) = _2258;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:615
_2267 = *(&local1);
_2268 = *(&local57);
_2269 = ($fn515) _2267->$class->vtable[2];
_2270 = _2269(_2267, _2268);
*(&local59) = _2270;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:616
_2273 = *(&local1);
_2274 = *(&local58);
_2275 = ($fn516) _2273->$class->vtable[2];
_2276 = _2275(_2273, _2274);
*(&local60) = _2276;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:617
_2279 = *(&local60);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:617:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_2282 = _2279.value;
_2283 = ((int64_t) _2282);
_2284 = (frost$core$Int) {_2283};
_2286 = frost$unsafe$Pointer$init$frost$core$Int(_2284);
_2287 = _2286.value;
_2288 = *(&local59);
*((frost$core$Int64*)_2287) = _2288;
_2290 = *(&local58);
_2291 = ((frost$core$Object*) _2290);
frost$core$Frost$unref$frost$core$Object$Q(_2291);
*(&local58) = ((org$frostlang$frostc$IR$Value*) NULL);
_2294 = *(&local57);
_2295 = ((frost$core$Object*) _2294);
frost$core$Frost$unref$frost$core$Object$Q(_2295);
*(&local57) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block68;
block218:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:620
_2300 = (frost$core$Int) {620u};
_2301 = *(&local6);
_2302 = ((frost$core$Object*) _2301);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:620:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2305 = ($fn517) _2302->$class->vtable[0];
_2306 = _2305(_2302);
_2307 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s518, _2306);
_2308 = ((frost$core$Object*) _2307);
frost$core$Frost$ref$frost$core$Object$Q(_2308);
_2310 = ((frost$core$Object*) _2307);
frost$core$Frost$unref$frost$core$Object$Q(_2310);
_2312 = ((frost$core$Object*) _2306);
frost$core$Frost$unref$frost$core$Object$Q(_2312);
_2315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2307, &$s519);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s520, _2300, _2315);
_2317 = ((frost$core$Object*) _2315);
frost$core$Frost$unref$frost$core$Object$Q(_2317);
_2319 = ((frost$core$Object*) _2307);
frost$core$Frost$unref$frost$core$Object$Q(_2319);
abort(); // unreachable
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:623
_2323 = *(&local4);
_2324 = (frost$core$Int) {1u};
_2325 = _2323.value;
_2326 = _2324.value;
_2327 = _2325 + _2326;
_2328 = (frost$core$Int) {_2327};
*(&local4) = _2328;
_2330 = *(&local6);
_2331 = ((frost$core$Object*) _2330);
frost$core$Frost$unref$frost$core$Object$Q(_2331);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block46;
block47:;
goto block222;
block222:;

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
$fn521 _36;
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
$fn522 _84;
frost$collections$Iterator* _85;
$fn523 _87;
frost$core$Bit _88;
bool _89;
$fn524 _91;
frost$core$Object* _92;
frost$core$Int64 _93;
frost$core$Int64 _96;
int64_t _99;
int64_t _100;
frost$core$Int _101;
frost$unsafe$Pointer _103;
$fn525 _104;
frost$core$Object* _106;
frost$core$Object* _109;
frost$collections$HashMap** _112;
frost$collections$HashMap* _113;
frost$collections$Stack** _116;
frost$collections$Stack* _117;
frost$core$Object* _118;
org$frostlang$frostc$Interpreter$Context* _119;
frost$core$Object* _120;
frost$collections$IdentityMap** _123;
frost$collections$IdentityMap* _124;
frost$collections$Stack** _127;
frost$collections$Stack* _128;
frost$collections$Array** _131;
frost$collections$Array* _132;
frost$collections$CollectionView* _133;
$fn526 _134;
frost$core$Int _135;
frost$core$Int _137;
int64_t _140;
int64_t _141;
bool _142;
frost$core$Bit _143;
bool _145;
frost$core$Int _147;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:628
_1 = &param0->main;
_2 = *_1;
_3 = _2 == NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:629
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Interpreter.frost:629:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s527);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s528);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:630
_18 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_18);
_20 = (frost$core$Int) {630u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s529, _20, &$s530);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:632
_24 = &param0->main;
_25 = *_24;
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block5; else goto block6;
block6:;
_30 = (frost$core$Int) {632u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s531, _30, &$s532);
abort(); // unreachable
block5:;
_33 = _25;
_34 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray), (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init(_34);
_36 = ($fn533) param0->$class->vtable[23];
_37 = _36(param0, _33, _34);
_38 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:633
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
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Interpreter.frost:633:22
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:634
_81 = &param0->strings;
_82 = *_81;
_83 = ((frost$collections$MapView*) _82);
ITable* $tmp534 = _83->$class->itable;
while ($tmp534->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp534 = $tmp534->next;
}
_84 = $tmp534->methods[5];
_85 = _84(_83);
goto block8;
block8:;
ITable* $tmp535 = _85->$class->itable;
while ($tmp535->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp535 = $tmp535->next;
}
_87 = $tmp535->methods[0];
_88 = _87(_85);
_89 = _88.value;
if (_89) goto block10; else goto block9;
block9:;
ITable* $tmp536 = _85->$class->itable;
while ($tmp536->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp536 = $tmp536->next;
}
_91 = $tmp536->methods[1];
_92 = _91(_85);
_93 = ((frost$core$Int64$wrapper*) _92)->value;
*(&local0) = _93;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:635
_96 = *(&local0);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:635:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_99 = _96.value;
_100 = ((int64_t) _99);
_101 = (frost$core$Int) {_100};
_103 = frost$unsafe$Pointer$init$frost$core$Int(_101);
_104 = ($fn537) param0->$class->vtable[11];
_104(param0, _103);
_106 = _92;
frost$core$Frost$unref$frost$core$Object$Q(_106);
goto block8;
block10:;
_109 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_109);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:637
_112 = &param0->strings;
_113 = *_112;
frost$collections$HashMap$clear(_113);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:638
_116 = &param0->contexts;
_117 = *_116;
_118 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_117);
_119 = ((org$frostlang$frostc$Interpreter$Context*) _118);
_120 = _118;
frost$core$Frost$unref$frost$core$Object$Q(_120);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:639
_123 = &param0->builtins;
_124 = *_123;
frost$collections$IdentityMap$clear(_124);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:640
_127 = &param0->contexts;
_128 = *_127;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Interpreter.frost:640:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_131 = &_128->contents;
_132 = *_131;
_133 = ((frost$collections$CollectionView*) _132);
ITable* $tmp538 = _133->$class->itable;
while ($tmp538->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp538 = $tmp538->next;
}
_134 = $tmp538->methods[0];
_135 = _134(_133);
_137 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:640:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_140 = _135.value;
_141 = _137.value;
_142 = _140 == _141;
_143 = (frost$core$Bit) {_142};
_145 = _143.value;
if (_145) goto block14; else goto block15;
block15:;
_147 = (frost$core$Int) {640u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s539, _147);
abort(); // unreachable
block14:;
return;

}
void org$frostlang$frostc$Interpreter$init(void* rawSelf) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$unsafe$Pointer local0;
frost$unsafe$Pointer local1;
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
int64_t _22;
int64_t _23;
int64_t _24;
int64_t* _27;
frost$unsafe$Pointer _29;
frost$unsafe$Pointer _32;
frost$unsafe$Pointer* _34;
frost$unsafe$Pointer* _37;
frost$unsafe$Pointer _38;
frost$unsafe$Pointer* _39;
frost$core$Weak* _42;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Weak** _47;
frost$core$Weak* _48;
frost$core$Object* _49;
frost$core$Weak** _51;
frost$core$Object* _53;
frost$collections$IdentityMap* _56;
frost$core$Object* _58;
frost$collections$IdentityMap** _60;
frost$collections$IdentityMap* _61;
frost$core$Object* _62;
frost$collections$IdentityMap** _64;
frost$core$Object* _66;
frost$collections$IdentityMap* _69;
frost$core$Object* _71;
frost$collections$IdentityMap** _73;
frost$collections$IdentityMap* _74;
frost$core$Object* _75;
frost$collections$IdentityMap** _77;
frost$core$Object* _79;
frost$collections$Stack* _82;
frost$core$Object* _84;
frost$collections$Stack** _86;
frost$collections$Stack* _87;
frost$core$Object* _88;
frost$collections$Stack** _90;
frost$core$Object* _92;
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
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:14:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_22 = _19.value;
_23 = _22 * 1u;
_24 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_23);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_27 = &(&local1)->value;
*_27 = _24;
_29 = *(&local1);
*(&local0) = _29;
_32 = *(&local0);
_34 = &param0->stackBase;
*_34 = _32;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:16
_37 = &param0->stackBase;
_38 = *_37;
_39 = &param0->stack;
*_39 = _38;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:176
_42 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_43 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_42, _43);
_45 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = &param0->compiler;
_48 = *_47;
_49 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = &param0->compiler;
*_51 = _42;
_53 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_53);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:180
_56 = (frost$collections$IdentityMap*) frostObjectAlloc(sizeof(frost$collections$IdentityMap), (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init(_56);
_58 = ((frost$core$Object*) _56);
frost$core$Frost$ref$frost$core$Object$Q(_58);
_60 = &param0->methodCode;
_61 = *_60;
_62 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = &param0->methodCode;
*_64 = _56;
_66 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_66);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:182
_69 = (frost$collections$IdentityMap*) frostObjectAlloc(sizeof(frost$collections$IdentityMap), (frost$core$Class*) &frost$collections$IdentityMap$class);
frost$collections$IdentityMap$init(_69);
_71 = ((frost$core$Object*) _69);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = &param0->builtins;
_74 = *_73;
_75 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = &param0->builtins;
*_77 = _69;
_79 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_79);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:184
_82 = (frost$collections$Stack*) frostObjectAlloc(sizeof(frost$collections$Stack), (frost$core$Class*) &frost$collections$Stack$class);
frost$collections$Stack$init(_82);
_84 = ((frost$core$Object*) _82);
frost$core$Frost$ref$frost$core$Object$Q(_84);
_86 = &param0->contexts;
_87 = *_86;
_88 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_88);
_90 = &param0->contexts;
*_90 = _82;
_92 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_92);
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

