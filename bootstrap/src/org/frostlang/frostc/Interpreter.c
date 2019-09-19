#include "org/frostlang/frostc/Interpreter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/LinkedList.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/collections/IdentityMap.h"
#include "org/frostlang/frostc/Interpreter/Code.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Int32.h"
#include "org/frostlang/frostc/Interpreter/Context.h"
#include "frost/io/Console.h"
#include "org/frostlang/frostc/Interpreter/_Closure4.h"
#include "frost/core/System.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/UInt8.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/HashKey.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int16.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Formattable.h"
#include "frost/collections/MapView.h"
#include "frost/io/MemoryOutputStream.h"
#include "frost/io/OutputStream.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$Interpreter$_org$frostlang$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class, NULL, { org$frostlang$frostc$Interpreter$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$Interpreter$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$Interpreter$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$Interpreter$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$Interpreter$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$Interpreter$finish} };

static frost$core$String $s1;
org$frostlang$frostc$Interpreter$class_type org$frostlang$frostc$Interpreter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$Interpreter$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Interpreter$cleanup, org$frostlang$frostc$Interpreter$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$Interpreter$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$Interpreter$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$Interpreter$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$Interpreter$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$Interpreter$finish, org$frostlang$frostc$Interpreter$destroyObject$frost$unsafe$Pointer$LTfrost$core$UInt8$GT, org$frostlang$frostc$Interpreter$unref$frost$unsafe$Pointer$LTfrost$core$UInt8$GT, org$frostlang$frostc$Interpreter$getBuiltin$org$frostlang$frostc$MethodDecl$R$$LPorg$frostlang$frostc$Interpreter$Context$Corg$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$RP$EQ$AM$GT$LPfrost$core$Int64$RP, org$frostlang$frostc$Interpreter$callBuiltin$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64, org$frostlang$frostc$Interpreter$cast$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$Interpreter$createStruct$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$Interpreter$extractField$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$Interpreter$getFieldPointer$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$Interpreter$binary$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value, org$frostlang$frostc$Interpreter$call$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64, org$frostlang$frostc$Interpreter$run} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$collections$Array* (*$fn8)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$collections$Array* (*$fn9)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$Object* (*$fn25)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int64 (*$fn26)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn36)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef void (*$fn37)(org$frostlang$frostc$Interpreter*, frost$core$UInt8*);
typedef void (*$fn38)(org$frostlang$frostc$Interpreter*, frost$core$UInt8*);
typedef frost$core$Int64 (*$fn39)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn40)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$MutableMethod* (*$fn56)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*);
typedef frost$core$Int64 (*$fn57)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn58)(frost$core$Object*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$FixedArray*);
typedef frost$core$MutableMethod* (*$fn59)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*);
typedef frost$core$Int64 (*$fn60)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn61)(frost$core$Object*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$FixedArray*);
typedef org$frostlang$frostc$Type* (*$fn62)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn63)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn64)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn65)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn66)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn67)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn68)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn69)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$collections$Iterator* (*$fn104)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn105)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn106)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn107)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn108)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn109)(frost$core$Object*);
typedef frost$core$Int (*$fn110)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn121)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn122)(org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn123)(frost$core$Object*);
typedef org$frostlang$frostc$Type* (*$fn134)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn135)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn136)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn137)(frost$core$Object*);
typedef frost$core$Int (*$fn138)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn139)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn140)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn141)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn146)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn150)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn151)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn153)(frost$core$Object*);
typedef frost$core$Int64 (*$fn176)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn177)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn181)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn187)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn188)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn189)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn190)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn191)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn192)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn193)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn194)(frost$core$Object*);
typedef frost$core$Int64 (*$fn195)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn196)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn207)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn208)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn215)(frost$core$Object*);
typedef frost$core$Int (*$fn219)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn220)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn221)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn222)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn223)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$collections$Iterator* (*$fn224)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn225)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn226)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn227)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn228)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn229)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn230)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn231)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn232)(frost$core$Object*);
typedef frost$core$String* (*$fn233)(frost$core$Object*);
typedef frost$core$Int (*$fn234)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn235)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn236)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn237)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn238)(frost$core$Object*);
typedef frost$core$String* (*$fn239)(frost$core$Object*);
typedef void (*$fn240)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$expression$Binary$Operator, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn241)(frost$collections$CollectionView*);
typedef void (*$fn242)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn243)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn244)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn245)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn246)(frost$collections$CollectionView*);
typedef void (*$fn247)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$ClassDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn248)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn249)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int (*$fn250)(frost$collections$CollectionView*);
typedef void (*$fn251)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef void (*$fn252)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int64 (*$fn253)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Object* (*$fn254)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn255)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn256)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn257)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn258)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn259)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn260)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn261)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn262)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int (*$fn263)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn264)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn265)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn266)(frost$core$Object*);
typedef frost$core$String* (*$fn267)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$String* (*$fn268)(frost$core$Object*);
typedef frost$core$Int64 (*$fn285)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn300)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn302)(frost$core$Object*);
typedef frost$core$String* (*$fn305)(frost$core$Object*);
typedef frost$core$String* (*$fn325)(frost$core$Object*);
typedef frost$core$String* (*$fn329)(frost$core$Object*);
typedef void (*$fn332)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$expression$Binary$Operator, org$frostlang$frostc$IR$Value*);
typedef void (*$fn338)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn339)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef void (*$fn355)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$ClassDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn356)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn357)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef void (*$fn363)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef void (*$fn364)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int64 (*$fn365)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn376)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn382)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn388)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn391)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn392)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn398)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn399)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn401)(frost$core$Object*);
typedef frost$core$String* (*$fn409)(frost$core$Object*);
typedef frost$core$Int64 (*$fn413)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$collections$Iterator* (*$fn414)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn415)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn416)(frost$collections$Iterator*);
typedef void (*$fn417)(org$frostlang$frostc$Interpreter*, frost$core$UInt8*);
typedef frost$core$Int (*$fn418)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn425)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef void (*$fn429)(org$frostlang$frostc$Interpreter*, frost$core$UInt8*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72", 32, -3100534405647567570, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x61\x69\x6e", 4, 2258945139493307336, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x75\x6e\x72\x65\x66\x28\x6f\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x29", 68, -1591211548199132021, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x70\x72\x69\x6e\x74\x28\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 67, -2650786360588262487, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x61\x74\x61\x6c\x20\x65\x72\x72\x6f\x72\x3a\x20", 13, 3817230338345850721, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x62\x79\x20\x74\x68\x65\x20", 25, -9203381872083098346, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72", 11, -6089209956535185587, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3f\x20\x74\x6f\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 293, -7245596308351737427, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3f\x20\x74\x6f\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 293, -7245596308351737427, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20", 18, 4314115219735591667, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x66\x69\x65\x6c\x64\x20\x73\x69\x7a\x65", 22, -5074326750169406355, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x62\x69\x6e\x61\x72\x79\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x20\x27", 29, 2922146385210293486, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s278 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6c\x6c\x20", 5, -1092460207959141173, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x69\x74\x68\x20", 6, -1493373441645224251, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x24", 1, -5808630540432999757, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 113, 7203827915731695709, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x6f\x72\x69\x6e\x67\x20", 8, -2270594929302622661, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x69\x6e\x74\x6f\x20", 6, 8947171831688502487, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x78", 1, -5808529385363204345, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x3a\x20", 23, 7177047828670113807, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x69\x6e\x20\x6d\x65\x74\x68\x6f\x64", 14, 8684458706139196112, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, 7363539685333061901, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$Interpreter$setCompiler$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

org$frostlang$frostc$Compiler* _1;
frost$core$Weak* _2;
frost$core$Weak* _3;
frost$core$Object* _4;
frost$core$Object* _6;
frost$core$Weak** _8;
frost$core$Weak* _9;
frost$core$Object* _10;
frost$core$Weak** _12;
frost$core$Object* _14;
org$frostlang$frostc$LLVMCodeGenerator** _17;
org$frostlang$frostc$LLVMCodeGenerator* _18;
org$frostlang$frostc$Compiler* _21;
frost$core$Weak* _22;
frost$core$Weak* _23;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Weak** _28;
frost$core$Weak* _29;
frost$core$Object* _30;
frost$core$Weak** _32;
frost$core$Object* _34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:180
_1 = param1;
_2 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_3 = _2;
_4 = ((frost$core$Object*) _1);
frost$core$Weak$init$frost$core$Weak$T$Q(_3, _4);
_6 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = &param0->compiler;
_9 = *_8;
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_12 = &param0->compiler;
*_12 = _2;
_14 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:181
_17 = &param0->llvmCodeGen;
_18 = *_17;
// begin inline call to method org.frostlang.frostc.LLVMCodeGenerator.setCompiler(compiler:org.frostlang.frostc.Compiler) from Interpreter.frost:181:32
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/LLVMCodeGenerator.frost:122
_21 = param1;
_22 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_23 = _22;
_24 = ((frost$core$Object*) _21);
frost$core$Weak$init$frost$core$Weak$T$Q(_23, _24);
_26 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_26);
_28 = &_18->compiler;
_29 = *_28;
_30 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_30);
_32 = &_18->compiler;
*_32 = _22;
_34 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_34);
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
frost$collections$Array* _2;
org$frostlang$frostc$LinkedList** _3;
org$frostlang$frostc$LinkedList* _4;
frost$collections$CollectionView* _5;
frost$collections$CollectionView* _6;
frost$core$Object* _8;
frost$core$Object* _10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:211
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
_3 = &param0->ids;
_4 = *_3;
_5 = ((frost$collections$CollectionView*) _4);
_6 = _5;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_2, _6);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
return _1;

}
frost$collections$Array* org$frostlang$frostc$Interpreter$$anonymous2$org$frostlang$frostc$IR$Block$R$frost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT(org$frostlang$frostc$IR$Block* param0) {

frost$collections$Array* _1;
frost$collections$Array* _2;
org$frostlang$frostc$LinkedList** _3;
org$frostlang$frostc$LinkedList* _4;
frost$collections$CollectionView* _5;
frost$collections$CollectionView* _6;
frost$core$Object* _8;
frost$core$Object* _10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:212
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_2 = _1;
_3 = &param0->statements;
_4 = *_3;
_5 = ((frost$collections$CollectionView*) _4);
_6 = _5;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_2, _6);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
return _1;

}
void org$frostlang$frostc$Interpreter$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(void* rawSelf, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$IR* param2) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$core$Int local2;
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
frost$collections$Array* _42;
frost$collections$Array** _43;
frost$collections$Array* _44;
frost$collections$CollectionView* _45;
$fn2 _46;
frost$core$Int _47;
frost$core$Object* _50;
frost$collections$Array* _52;
frost$core$Object* _53;
frost$core$Object* _56;
frost$core$Int _59;
frost$collections$Array** _60;
frost$collections$Array* _61;
frost$collections$CollectionView* _62;
$fn3 _63;
frost$core$Int _64;
frost$core$Bit _65;
frost$core$Range$LTfrost$core$Int$GT _66;
frost$core$Int _67;
frost$core$Int _69;
frost$core$Bit _70;
bool _71;
frost$core$Int _72;
int64_t _74;
int64_t _75;
bool _76;
frost$core$Bit _77;
bool _78;
int64_t _80;
int64_t _81;
bool _82;
frost$core$Bit _83;
bool _84;
frost$collections$Array** _87;
frost$collections$Array* _88;
frost$collections$Array* _89;
frost$core$Int _90;
frost$core$Int _92;
int64_t _93;
int64_t _94;
bool _95;
frost$core$Bit _96;
bool _97;
frost$collections$CollectionView* _99;
$fn4 _100;
frost$core$Int _101;
int64_t _102;
int64_t _103;
bool _104;
frost$core$Bit _105;
bool _106;
frost$core$Int _108;
frost$core$Object*** _112;
frost$core$Object** _113;
frost$core$Int64 _114;
int64_t _115;
frost$core$Object* _116;
frost$core$Object* _117;
org$frostlang$frostc$IR$Block* _120;
org$frostlang$frostc$IR$Block$ID* _121;
org$frostlang$frostc$IR$Block$ID _122;
frost$core$Int _123;
frost$core$Object* _125;
frost$collections$Array* _129;
frost$collections$CollectionView* _130;
$fn5 _131;
frost$core$Int _132;
frost$core$Int _133;
int64_t _134;
int64_t _135;
bool _136;
frost$core$Bit _137;
bool _138;
frost$collections$Array* _141;
frost$collections$Array* _142;
frost$core$Int _143;
frost$core$Object* _144;
frost$core$Object* _146;
frost$collections$Array* _150;
frost$collections$Array* _151;
frost$core$Int _152;
frost$core$Int _153;
frost$core$Object* _154;
frost$core$Int _156;
int64_t _157;
int64_t _158;
bool _159;
frost$core$Bit _160;
bool _161;
frost$collections$CollectionView* _163;
$fn6 _164;
frost$core$Int _165;
int64_t _166;
int64_t _167;
bool _168;
frost$core$Bit _169;
bool _170;
frost$core$Int _172;
frost$core$Object*** _176;
frost$core$Object** _177;
frost$core$Int64 _178;
int64_t _179;
frost$core$Object* _180;
frost$core$Object* _182;
frost$core$Object* _183;
frost$core$Object* _187;
frost$core$Int _190;
int64_t _191;
int64_t _192;
int64_t _193;
frost$core$Int _194;
int64_t _196;
int64_t _197;
bool _198;
frost$core$Bit _199;
bool _200;
int64_t _202;
int64_t _203;
bool _204;
frost$core$Bit _205;
bool _206;
int64_t _208;
int64_t _209;
int64_t _210;
frost$core$Int _211;
frost$collections$IdentityMap** _215;
frost$collections$IdentityMap* _216;
frost$collections$IdentityMap* _217;
frost$core$Object* _218;
org$frostlang$frostc$Interpreter$Code* _219;
frost$collections$Array** _220;
frost$collections$Array* _221;
frost$collections$CollectionView* _222;
$fn7 _223;
frost$core$Int _224;
frost$collections$Array* _225;
frost$collections$Array** _226;
frost$collections$Array* _227;
frost$collections$CollectionView* _228;
frost$core$Int8* _229;
frost$core$Method* _230;
frost$core$Int8** _233;
frost$core$Object* _236;
frost$core$Immutable** _238;
frost$core$Immutable* _239;
frost$core$Object* _240;
frost$core$Immutable** _242;
frost$core$Method* _245;
frost$core$MutableMethod* _246;
frost$core$MutableMethod* _247;
$fn8 _248;
frost$collections$Array* _249;
frost$collections$Array* _250;
frost$collections$Array** _251;
frost$collections$Array* _252;
frost$collections$CollectionView* _253;
frost$core$Int8* _254;
frost$core$Method* _255;
frost$core$Int8** _258;
frost$core$Object* _261;
frost$core$Immutable** _263;
frost$core$Immutable* _264;
frost$core$Object* _265;
frost$core$Immutable** _267;
frost$core$Method* _270;
frost$core$MutableMethod* _271;
frost$core$MutableMethod* _272;
$fn9 _273;
frost$collections$Array* _274;
frost$collections$Array* _275;
frost$core$Object* _277;
frost$core$Object* _279;
frost$core$Object* _281;
frost$core$Object* _283;
frost$core$Object* _285;
frost$core$Object* _287;
frost$collections$Array* _289;
frost$core$Object* _290;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:198
_1 = ((org$frostlang$frostc$Symbol*) param1);
_2 = &_1->name;
_3 = *_2;
_4 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_3, &$s10);
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = &param1->annotations;
_8 = *_7;
// begin inline call to function org.frostlang.frostc.Annotations.get_isClass():frost.core.Bit from Interpreter.frost:198:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:122
_11 = &_8->flags;
_12 = *_11;
_13 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:122:22
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:199
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:201
_41 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_42 = _41;
_43 = &param2->blocks;
_44 = *_43;
_45 = ((frost$collections$CollectionView*) _44);
ITable* $tmp11 = _45->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
_46 = $tmp11->methods[0];
_47 = _46(_45);
frost$collections$Array$init$frost$core$Int(_42, _47);
*(&local0) = ((frost$collections$Array*) NULL);
_50 = ((frost$core$Object*) _41);
frost$core$Frost$ref$frost$core$Object$Q(_50);
_52 = *(&local0);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
*(&local0) = _41;
_56 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_56);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:202
_59 = (frost$core$Int) {0u};
_60 = &param2->blocks;
_61 = *_60;
_62 = ((frost$collections$CollectionView*) _61);
ITable* $tmp12 = _62->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_63 = $tmp12->methods[0];
_64 = _63(_62);
_65 = (frost$core$Bit) {false};
_66 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_59, _64, _65);
_67 = _66.min;
*(&local1) = _67;
_69 = _66.max;
_70 = _66.inclusive;
_71 = _70.value;
_72 = (frost$core$Int) {1u};
if (_71) goto block9; else goto block10;
block9:;
_74 = _67.value;
_75 = _69.value;
_76 = _74 <= _75;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block6; else goto block7;
block10:;
_80 = _67.value;
_81 = _69.value;
_82 = _80 < _81;
_83 = (frost$core$Bit) {_82};
_84 = _83.value;
if (_84) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:203
_87 = &param2->blocks;
_88 = *_87;
_89 = _88;
_90 = *(&local1);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:203:31
_92 = (frost$core$Int) {0u};
_93 = _90.value;
_94 = _92.value;
_95 = _93 >= _94;
_96 = (frost$core$Bit) {_95};
_97 = _96.value;
if (_97) goto block14; else goto block13;
block14:;
_99 = ((frost$collections$CollectionView*) _89);
ITable* $tmp13 = _99->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_100 = $tmp13->methods[0];
_101 = _100(_99);
_102 = _90.value;
_103 = _101.value;
_104 = _102 < _103;
_105 = (frost$core$Bit) {_104};
_106 = _105.value;
if (_106) goto block12; else goto block13;
block13:;
_108 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _108, &$s15);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_112 = &_89->data;
_113 = *_112;
_114 = frost$core$Int64$init$frost$core$Int(_90);
_115 = _114.value;
_116 = _113[_115];
_117 = _116;
frost$core$Frost$ref$frost$core$Object$Q(_117);
_120 = ((org$frostlang$frostc$IR$Block*) _116);
_121 = &_120->id;
_122 = *_121;
_123 = _122.value;
*(&local2) = _123;
_125 = _116;
frost$core$Frost$unref$frost$core$Object$Q(_125);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:204
goto block15;
block15:;
_129 = *(&local0);
_130 = ((frost$collections$CollectionView*) _129);
ITable* $tmp16 = _130->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
_131 = $tmp16->methods[0];
_132 = _131(_130);
_133 = *(&local2);
_134 = _132.value;
_135 = _133.value;
_136 = _134 <= _135;
_137 = (frost$core$Bit) {_136};
_138 = _137.value;
if (_138) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:205
_141 = *(&local0);
_142 = _141;
_143 = (frost$core$Int) {18446744073709551615u};
frost$core$Int$wrapper* $tmp17;
$tmp17 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp17->value = _143;
_144 = ((frost$core$Object*) $tmp17);
frost$collections$Array$add$frost$collections$Array$T(_142, _144);
_146 = _144;
frost$core$Frost$unref$frost$core$Object$Q(_146);
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:207
_150 = *(&local0);
_151 = _150;
_152 = *(&local2);
_153 = *(&local1);
frost$core$Int$wrapper* $tmp18;
$tmp18 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp18->value = _153;
_154 = ((frost$core$Object*) $tmp18);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:207:21
_156 = (frost$core$Int) {0u};
_157 = _152.value;
_158 = _156.value;
_159 = _157 >= _158;
_160 = (frost$core$Bit) {_159};
_161 = _160.value;
if (_161) goto block21; else goto block20;
block21:;
_163 = ((frost$collections$CollectionView*) _151);
ITable* $tmp19 = _163->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp19 = $tmp19->next;
}
_164 = $tmp19->methods[0];
_165 = _164(_163);
_166 = _152.value;
_167 = _165.value;
_168 = _166 < _167;
_169 = (frost$core$Bit) {_168};
_170 = _169.value;
if (_170) goto block19; else goto block20;
block20:;
_172 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _172, &$s21);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_176 = &_151->data;
_177 = *_176;
_178 = frost$core$Int64$init$frost$core$Int(_152);
_179 = _178.value;
_180 = _154;
frost$core$Frost$ref$frost$core$Object$Q(_180);
_182 = _177[_179];
_183 = _182;
frost$core$Frost$unref$frost$core$Object$Q(_183);
_177[_179] = _154;
_187 = _154;
frost$core$Frost$unref$frost$core$Object$Q(_187);
_190 = *(&local1);
_191 = _69.value;
_192 = _190.value;
_193 = _191 - _192;
_194 = (frost$core$Int) {_193};
if (_71) goto block23; else goto block24;
block23:;
_196 = _194.value;
_197 = _72.value;
_198 = _196 >= _197;
_199 = (frost$core$Bit) {_198};
_200 = _199.value;
if (_200) goto block22; else goto block7;
block24:;
_202 = _194.value;
_203 = _72.value;
_204 = _202 > _203;
_205 = (frost$core$Bit) {_204};
_206 = _205.value;
if (_206) goto block22; else goto block7;
block22:;
_208 = _190.value;
_209 = _72.value;
_210 = _208 + _209;
_211 = (frost$core$Int) {_210};
*(&local1) = _211;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:209
_215 = &param0->methodCode;
_216 = *_215;
_217 = _216;
_218 = ((frost$core$Object*) param1);
_219 = (org$frostlang$frostc$Interpreter$Code*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$Code), (frost$core$Class*) &org$frostlang$frostc$Interpreter$Code$class);
_220 = &param2->locals;
_221 = *_220;
_222 = ((frost$collections$CollectionView*) _221);
ITable* $tmp22 = _222->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp22 = $tmp22->next;
}
_223 = $tmp22->methods[0];
_224 = _223(_222);
_225 = *(&local0);
_226 = &param2->blocks;
_227 = *_226;
_228 = ((frost$collections$CollectionView*) _227);
_229 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$$anonymous1$org$frostlang$frostc$IR$Block$R$frost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT);
_230 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Interpreter.frost:211:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_233 = &_230->pointer;
*_233 = _229;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_236 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_236);
_238 = &_230->target;
_239 = *_238;
_240 = ((frost$core$Object*) _239);
frost$core$Frost$unref$frost$core$Object$Q(_240);
_242 = &_230->target;
*_242 = ((frost$core$Immutable*) NULL);
_245 = _230;
_246 = ((frost$core$MutableMethod*) _245);
_247 = _246;
ITable* $tmp23 = _228->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp23 = $tmp23->next;
}
_248 = $tmp23->methods[9];
_249 = _248(_228, _247);
_250 = _249;
_251 = &param2->blocks;
_252 = *_251;
_253 = ((frost$collections$CollectionView*) _252);
_254 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$$anonymous2$org$frostlang$frostc$IR$Block$R$frost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT);
_255 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Interpreter.frost:212:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_258 = &_255->pointer;
*_258 = _254;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_261 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_261);
_263 = &_255->target;
_264 = *_263;
_265 = ((frost$core$Object*) _264);
frost$core$Frost$unref$frost$core$Object$Q(_265);
_267 = &_255->target;
*_267 = ((frost$core$Immutable*) NULL);
_270 = _255;
_271 = ((frost$core$MutableMethod*) _270);
_272 = _271;
ITable* $tmp24 = _253->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp24 = $tmp24->next;
}
_273 = $tmp24->methods[9];
_274 = _273(_253, _272);
_275 = _274;
org$frostlang$frostc$Interpreter$Code$init$frost$core$Int$frost$collections$Array$LTfrost$core$Int$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT$GT(_219, _224, _225, _250, _275);
_277 = ((frost$core$Object*) _219);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(_217, _218, _277);
_279 = ((frost$core$Object*) _274);
frost$core$Frost$unref$frost$core$Object$Q(_279);
_281 = ((frost$core$Object*) _255);
frost$core$Frost$unref$frost$core$Object$Q(_281);
_283 = ((frost$core$Object*) _249);
frost$core$Frost$unref$frost$core$Object$Q(_283);
_285 = ((frost$core$Object*) _230);
frost$core$Frost$unref$frost$core$Object$Q(_285);
_287 = ((frost$core$Object*) _219);
frost$core$Frost$unref$frost$core$Object$Q(_287);
_289 = *(&local0);
_290 = ((frost$core$Object*) _289);
frost$core$Frost$unref$frost$core$Object$Q(_290);
*(&local0) = ((frost$collections$Array*) NULL);
return;

}
void org$frostlang$frostc$Interpreter$finish(void* rawSelf) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

return;

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
frost$core$Weak* _16;
frost$core$Bit* _21;
frost$core$Bit _22;
bool _24;
frost$core$Int _26;
frost$core$Object** _30;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Object* _33;
org$frostlang$frostc$Compiler* _36;
bool _37;
frost$core$Bit _38;
bool _39;
frost$core$Int _41;
org$frostlang$frostc$Compiler* _44;
org$frostlang$frostc$ClassDecl* _45;
frost$collections$ListView* _46;
frost$collections$ListView* _47;
frost$core$Int _48;
$fn25 _49;
frost$core$Object* _50;
org$frostlang$frostc$MethodDecl* _51;
frost$core$Object* _53;
org$frostlang$frostc$MethodDecl* _55;
frost$core$Object* _56;
frost$core$Object* _59;
frost$core$Object* _61;
frost$core$Object* _63;
org$frostlang$frostc$MethodDecl* _66;
frost$collections$Array* _67;
frost$collections$Array* _68;
frost$core$Int _69;
frost$collections$Array* _71;
org$frostlang$frostc$IR$Value* _72;
frost$core$Int _73;
int64_t _74;
frost$core$Int _75;
int64_t _78;
uint64_t _79;
frost$core$UInt64 _80;
frost$core$Weak** _82;
frost$core$Weak* _83;
frost$core$Weak* _84;
frost$core$Bit* _89;
frost$core$Bit _90;
bool _92;
frost$core$Int _94;
frost$core$Object** _98;
frost$core$Object* _99;
frost$core$Object* _100;
frost$core$Object* _101;
org$frostlang$frostc$Compiler* _104;
bool _105;
frost$core$Bit _106;
bool _107;
frost$core$Int _109;
org$frostlang$frostc$Compiler* _112;
org$frostlang$frostc$Type** _113;
org$frostlang$frostc$Type* _114;
frost$core$Object* _116;
frost$collections$Array* _118;
org$frostlang$frostc$FixedArray* _119;
org$frostlang$frostc$FixedArray* _120;
$fn26 _121;
frost$core$Int64 _122;
frost$core$Object* _123;
frost$core$Object* _125;
frost$core$Object* _127;
frost$core$Object* _129;
org$frostlang$frostc$MethodDecl* _133;
frost$core$Object* _134;
org$frostlang$frostc$ClassDecl* _137;
frost$core$Object* _138;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:221
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:222
_14 = &param0->compiler;
_15 = *_14;
_16 = _15;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:222:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_21 = &_16->_valid;
_22 = *_21;
_24 = _22.value;
if (_24) goto block3; else goto block4;
block4:;
_26 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s27, _26, &$s28);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_30 = &_16->value;
_31 = *_30;
_32 = _31;
_33 = _32;
frost$core$Frost$ref$frost$core$Object$Q(_33);
_36 = ((org$frostlang$frostc$Compiler*) _32);
_37 = _36 != NULL;
_38 = (frost$core$Bit) {_37};
_39 = _38.value;
if (_39) goto block5; else goto block6;
block6:;
_41 = (frost$core$Int) {222u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s29, _41, &$s30);
abort(); // unreachable
block5:;
_44 = _36;
_45 = *(&local0);
_46 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_44, _45);
_47 = _46;
_48 = (frost$core$Int) {1u};
ITable* $tmp31 = _47->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp31 = $tmp31->next;
}
_49 = $tmp31->methods[0];
_50 = _49(_47, _48);
_51 = ((org$frostlang$frostc$MethodDecl*) _50);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
_53 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_53);
_55 = *(&local1);
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
*(&local1) = _51;
_59 = _50;
frost$core$Frost$unref$frost$core$Object$Q(_59);
_61 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = _32;
frost$core$Frost$unref$frost$core$Object$Q(_63);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:223
_66 = *(&local1);
_67 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_68 = _67;
_69 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_68, _69);
_71 = _67;
_72 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_73 = (frost$core$Int) {1u};
_74 = ((int64_t) param1);
_75 = (frost$core$Int) {_74};
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Interpreter.frost:223:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_78 = _75.value;
_79 = ((uint64_t) _78);
_80 = (frost$core$UInt64) {_79};
_82 = &param0->compiler;
_83 = *_82;
_84 = _83;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:224:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_89 = &_84->_valid;
_90 = *_89;
_92 = _90.value;
if (_92) goto block10; else goto block11;
block11:;
_94 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, _94, &$s33);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_98 = &_84->value;
_99 = *_98;
_100 = _99;
_101 = _100;
frost$core$Frost$ref$frost$core$Object$Q(_101);
_104 = ((org$frostlang$frostc$Compiler*) _100);
_105 = _104 != NULL;
_106 = (frost$core$Bit) {_105};
_107 = _106.value;
if (_107) goto block12; else goto block13;
block13:;
_109 = (frost$core$Int) {224u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, _109, &$s35);
abort(); // unreachable
block12:;
_112 = _104;
_113 = &_112->INVALID_TYPE;
_114 = *_113;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Type(_72, _73, _80, _114);
_116 = ((frost$core$Object*) _72);
frost$collections$Array$add$frost$collections$Array$T(_71, _116);
_118 = _67;
_119 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(_118);
_120 = _119;
_121 = ($fn36) param0->$class->vtable[17];
_122 = _121(param0, _66, _120);
_123 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_123);
_125 = _100;
frost$core$Frost$unref$frost$core$Object$Q(_125);
_127 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_127);
_129 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_129);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:226
frostFree(param1);
_133 = *(&local1);
_134 = ((frost$core$Object*) _133);
frost$core$Frost$unref$frost$core$Object$Q(_134);
*(&local1) = ((org$frostlang$frostc$MethodDecl*) NULL);
_137 = *(&local0);
_138 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_138);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
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
frost$core$Int _16;
frost$core$Int64 _17;
int64_t _18;
frost$core$UInt8* _19;
frost$core$Int32* _20;
frost$core$Int32* _23;
frost$core$Int32 _24;
frost$core$Int32 _27;
frost$core$Int _28;
int64_t _31;
int32_t _32;
frost$core$Int32 _33;
int32_t _37;
int32_t _38;
bool _39;
frost$core$Bit _40;
bool _42;
frost$core$Int32 _47;
frost$core$Int32 _48;
int32_t _51;
int32_t _52;
bool _53;
frost$core$Bit _54;
bool _56;
$fn37 _59;
frost$core$Int32* _64;
frost$core$Int32 _65;
frost$core$Int32 _66;
int32_t _67;
int32_t _68;
int32_t _69;
frost$core$Int32 _70;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:230
_1 = ((int64_t) param1);
_2 = (frost$core$Int) {_1};
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:230:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_11 = _9.value;
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:231
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:233
_16 = (frost$core$Int) {8u};
_17 = frost$core$Int64$init$frost$core$Int(_16);
_18 = _17.value;
_19 = param1 + _18;
_20 = ((frost$core$Int32*) _19);
*(&local0) = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:234
_23 = *(&local0);
_24 = *_23;
*(&local1) = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:235
_27 = *(&local1);
_28 = (frost$core$Int) {18446744073709550617u};
// begin inline call to function frost.core.Int.get_asInt32():frost.core.Int32 from Interpreter.frost:235:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:973
_31 = _28.value;
_32 = ((int32_t) _31);
_33 = (frost$core$Int32) {_32};
// begin inline call to function frost.core.Int32.=(other:frost.core.Int32):frost.core.Bit from Interpreter.frost:235:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:413
_37 = _27.value;
_38 = _33.value;
_39 = _37 == _38;
_40 = (frost$core$Bit) {_39};
_42 = _40.value;
if (_42) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:236
return;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:238
_47 = *(&local1);
_48 = (frost$core$Int32) {1u};
// begin inline call to function frost.core.Int32.=(other:frost.core.Int32):frost.core.Bit from Interpreter.frost:238:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:413
_51 = _47.value;
_52 = _48.value;
_53 = _51 == _52;
_54 = (frost$core$Bit) {_53};
_56 = _54.value;
if (_56) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:239
_59 = ($fn38) param0->$class->vtable[8];
_59(param0, param1);
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:242
_64 = *(&local0);
_65 = *(&local1);
_66 = (frost$core$Int32) {1u};
_67 = _65.value;
_68 = _66.value;
_69 = _67 - _68;
_70 = (frost$core$Int32) {_69};
*_64 = _70;
goto block9;
block9:;
return;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$$anonymous5$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(org$frostlang$frostc$Interpreter$Context* param0, org$frostlang$frostc$FixedArray* param1) {

frost$core$Int local0;
frost$core$String* local1 = NULL;
org$frostlang$frostc$FixedArray* _1;
frost$core$Int _2;
frost$core$Object* _3;
org$frostlang$frostc$IR$Value* _4;
$fn39 _5;
frost$core$Int64 _6;
int64_t _9;
int64_t _10;
frost$core$Int _11;
frost$core$Object* _14;
frost$core$Int _17;
int64_t _18;
frost$core$UInt8* _19;
frost$core$String* _20;
frost$core$Object* _22;
frost$core$String* _24;
frost$core$Object* _25;
frost$core$String* _29;
frost$core$Int64 _32;
frost$core$String* _33;
frost$core$Object* _34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:259
_1 = param1;
_2 = (frost$core$Int) {0u};
_3 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_1, _2);
_4 = ((org$frostlang$frostc$IR$Value*) _3);
_5 = ($fn40) param0->$class->vtable[2];
_6 = _5(param0, _4);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:259:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_9 = _6.value;
_10 = ((int64_t) _9);
_11 = (frost$core$Int) {_10};
*(&local0) = _11;
_14 = _3;
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:260
_17 = *(&local0);
_18 = _17.value;
_19 = ((frost$core$UInt8*) _18);
_20 = ((frost$core$String*) _19);
*(&local1) = ((frost$core$String*) NULL);
_22 = ((frost$core$Object*) _20);
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = *(&local1);
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
*(&local1) = _20;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:261
_29 = *(&local1);
frost$io$Console$print$frost$core$String(_29);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:262
_32 = (frost$core$Int64) {18446744073709551615u};
_33 = *(&local1);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_34);
*(&local1) = ((frost$core$String*) NULL);
return _32;

}
frost$core$MutableMethod* org$frostlang$frostc$Interpreter$getBuiltin$org$frostlang$frostc$MethodDecl$R$$LPorg$frostlang$frostc$Interpreter$Context$Corg$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$RP$EQ$AM$GT$LPfrost$core$Int64$RP(void* rawSelf, org$frostlang$frostc$MethodDecl* param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$MutableMethod* local0 = NULL;
frost$core$String* local1 = NULL;
frost$collections$IdentityMap** _1;
frost$collections$IdentityMap* _2;
frost$collections$IdentityMap* _3;
frost$core$Object* _4;
frost$core$Object* _5;
frost$core$MutableMethod* _6;
frost$core$Object* _8;
frost$core$MutableMethod* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$core$MutableMethod* _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Weak** _23;
frost$core$Weak* _24;
frost$core$Weak* _25;
frost$core$Bit* _30;
frost$core$Bit _31;
bool _33;
frost$core$Int _35;
frost$core$Object** _39;
frost$core$Object* _40;
frost$core$Object* _41;
frost$core$Object* _42;
org$frostlang$frostc$ClassDecl* _45;
frost$core$String** _46;
frost$core$String* _47;
frost$core$String* _48;
frost$core$String* _49;
frost$core$String* _50;
frost$core$Object* _52;
frost$core$String* _54;
frost$core$Object* _55;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Object* _64;
frost$core$String* _67;
frost$core$Bit _68;
bool _69;
org$frostlang$frostc$Interpreter$_Closure4* _72;
frost$core$Int8* _74;
frost$core$MutableMethod* _75;
frost$core$Object* _76;
frost$core$Int8** _79;
frost$core$Object** _83;
frost$core$Object* _84;
frost$core$Object** _86;
frost$core$MutableMethod* _89;
frost$core$MutableMethod* _90;
frost$core$Object* _91;
frost$core$MutableMethod* _93;
frost$core$Object* _94;
frost$core$Object* _97;
frost$core$Object* _99;
frost$core$Bit _102;
bool _103;
frost$core$Int8* _106;
frost$core$Method* _107;
frost$core$Int8** _110;
frost$core$Object* _113;
frost$core$Immutable** _115;
frost$core$Immutable* _116;
frost$core$Object* _117;
frost$core$Immutable** _119;
frost$core$Method* _122;
frost$core$MutableMethod* _123;
frost$core$Object* _124;
frost$core$MutableMethod* _126;
frost$core$Object* _127;
frost$core$Object* _130;
frost$core$String* _134;
frost$core$String* _135;
frost$core$String* _136;
frost$core$String* _137;
frost$core$Object* _147;
frost$core$Object* _149;
frost$core$Object* _151;
frost$core$Int _154;
frost$core$Int _156;
frost$collections$IdentityMap** _160;
frost$collections$IdentityMap* _161;
frost$collections$IdentityMap* _162;
frost$core$Object* _163;
frost$core$MutableMethod* _164;
bool _165;
frost$core$Bit _166;
bool _167;
frost$core$Int _169;
frost$core$MutableMethod* _172;
frost$core$Object* _173;
frost$core$String* _175;
frost$core$Object* _176;
frost$core$MutableMethod* _181;
bool _182;
frost$core$Bit _183;
bool _184;
frost$core$Int _186;
frost$core$MutableMethod* _189;
frost$core$Object* _190;
frost$core$MutableMethod* _192;
frost$core$Object* _193;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:247
_1 = &param0->builtins;
_2 = *_1;
_3 = _2;
_4 = ((frost$core$Object*) param1);
_5 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_3, _4);
_6 = ((frost$core$MutableMethod*) _5);
*(&local0) = ((frost$core$MutableMethod*) NULL);
_8 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local0);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local0) = _6;
_14 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:248
_17 = *(&local0);
_18 = _17 == NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:249
_23 = &param1->owner;
_24 = *_23;
_25 = _24;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:249:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_30 = &_25->_valid;
_31 = *_30;
_33 = _31.value;
if (_33) goto block5; else goto block6;
block6:;
_35 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s41, _35, &$s42);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_39 = &_25->value;
_40 = *_39;
_41 = _40;
_42 = _41;
frost$core$Frost$ref$frost$core$Object$Q(_42);
_45 = ((org$frostlang$frostc$ClassDecl*) _41);
_46 = &_45->name;
_47 = *_46;
_48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_47, &$s43);
_49 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String(param1);
_50 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_48, _49);
*(&local1) = ((frost$core$String*) NULL);
_52 = ((frost$core$Object*) _50);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local1);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local1) = _50;
_58 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = _41;
frost$core$Frost$unref$frost$core$Object$Q(_64);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:250
_67 = *(&local1);
_68 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_67, &$s44);
_69 = _68.value;
if (_69) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:252
_72 = (org$frostlang$frostc$Interpreter$_Closure4*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$_Closure4), (frost$core$Class*) &org$frostlang$frostc$Interpreter$_Closure4$class);
org$frostlang$frostc$Interpreter$_Closure4$init$org$frostlang$frostc$Interpreter(_72, param0);
_74 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$_Closure4$$anonymous3$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64);
_75 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_76 = ((frost$core$Object*) _72);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from Interpreter.frost:252:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_79 = &_75->pointer;
*_79 = _74;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_76);
_83 = &_75->target;
_84 = *_83;
frost$core$Frost$unref$frost$core$Object$Q(_84);
_86 = &_75->target;
*_86 = _76;
_89 = _75;
_90 = _89;
_91 = ((frost$core$Object*) _90);
frost$core$Frost$ref$frost$core$Object$Q(_91);
_93 = *(&local0);
_94 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_94);
*(&local0) = _90;
_97 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_97);
_99 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_99);
goto block7;
block9:;
_102 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_67, &$s45);
_103 = _102.value;
if (_103) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:258
_106 = ((frost$core$Int8*) org$frostlang$frostc$Interpreter$$anonymous5$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64);
_107 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from Interpreter.frost:258:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_110 = &_107->pointer;
*_110 = _106;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_113 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_113);
_115 = &_107->target;
_116 = *_115;
_117 = ((frost$core$Object*) _116);
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = &_107->target;
*_119 = ((frost$core$Immutable*) NULL);
_122 = _107;
_123 = ((frost$core$MutableMethod*) _122);
_124 = ((frost$core$Object*) _123);
frost$core$Frost$ref$frost$core$Object$Q(_124);
_126 = *(&local0);
_127 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_127);
*(&local0) = _123;
_130 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_130);
goto block7;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:266
_134 = *(&local1);
_135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s46, _134);
_136 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_135, &$s47);
_137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_136, &$s48);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Interpreter.frost:266:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_137);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s49);
_147 = ((frost$core$Object*) _137);
frost$core$Frost$unref$frost$core$Object$Q(_147);
_149 = ((frost$core$Object*) _136);
frost$core$Frost$unref$frost$core$Object$Q(_149);
_151 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_151);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:268
_154 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_154);
_156 = (frost$core$Int) {268u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s50, _156, &$s51);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:271
_160 = &param0->builtins;
_161 = *_160;
_162 = _161;
_163 = ((frost$core$Object*) param1);
_164 = *(&local0);
_165 = _164 != NULL;
_166 = (frost$core$Bit) {_165};
_167 = _166.value;
if (_167) goto block16; else goto block17;
block17:;
_169 = (frost$core$Int) {271u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, _169, &$s53);
abort(); // unreachable
block16:;
_172 = _164;
_173 = ((frost$core$Object*) _172);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(_162, _163, _173);
_175 = *(&local1);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_176);
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:273
_181 = *(&local0);
_182 = _181 != NULL;
_183 = (frost$core$Bit) {_182};
_184 = _183.value;
if (_184) goto block18; else goto block19;
block19:;
_186 = (frost$core$Int) {273u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s54, _186, &$s55);
abort(); // unreachable
block18:;
_189 = _181;
_190 = ((frost$core$Object*) _189);
frost$core$Frost$ref$frost$core$Object$Q(_190);
_192 = *(&local0);
_193 = ((frost$core$Object*) _192);
frost$core$Frost$unref$frost$core$Object$Q(_193);
*(&local0) = ((frost$core$MutableMethod*) NULL);
return _189;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$callBuiltin$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$FixedArray* param3) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int64 local0;
$fn56 _1;
frost$core$MutableMethod* _2;
frost$core$MutableMethod* _3;
frost$core$Int8** _4;
frost$core$Int8* _5;
frost$core$Object** _6;
frost$core$Object* _7;
bool _8;
$fn57 _10;
frost$core$Int64 _11;
$fn58 _14;
frost$core$Int64 _15;
frost$core$Int64 _18;
frost$core$Object* _19;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:277
_1 = ($fn59) param0->$class->vtable[10];
_2 = _1(param0, param2);
_3 = _2;
_4 = &_3->pointer;
_5 = *_4;
_6 = &_3->target;
_7 = *_6;
_8 = _7 != ((frost$core$Object*) NULL);
if (_8) goto block1; else goto block2;
block2:;
_10 = (($fn60) _5);
_11 = _10(param1, param3);
*(&local0) = _11;
goto block3;
block1:;
_14 = (($fn61) _5);
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
$fn62 _1;
org$frostlang$frostc$Type* _2;
frost$core$Object* _4;
org$frostlang$frostc$Type* _6;
frost$core$Object* _7;
frost$core$Object* _10;
$fn63 _13;
frost$core$Int64 _14;
frost$core$Weak** _17;
frost$core$Weak* _18;
frost$core$Weak* _19;
frost$core$Bit* _24;
frost$core$Bit _25;
bool _27;
frost$core$Int _29;
frost$core$Object** _33;
frost$core$Object* _34;
frost$core$Object* _35;
frost$core$Object* _36;
org$frostlang$frostc$Compiler* _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _44;
org$frostlang$frostc$Compiler* _47;
org$frostlang$frostc$Type* _48;
frost$core$Bit _49;
bool _50;
frost$core$Object* _51;
frost$core$Weak** _54;
frost$core$Weak* _55;
frost$core$Weak* _56;
frost$core$Bit* _61;
frost$core$Bit _62;
bool _64;
frost$core$Int _66;
frost$core$Object** _70;
frost$core$Object* _71;
frost$core$Object* _72;
frost$core$Object* _73;
org$frostlang$frostc$Compiler* _76;
bool _77;
frost$core$Bit _78;
bool _79;
frost$core$Int _81;
org$frostlang$frostc$Compiler* _84;
frost$core$Bit _85;
bool _88;
bool _89;
frost$core$Bit _90;
bool _92;
frost$core$Object* _93;
org$frostlang$frostc$LLVMCodeGenerator** _97;
org$frostlang$frostc$LLVMCodeGenerator* _98;
org$frostlang$frostc$Type* _99;
frost$core$Int _100;
frost$core$Int64 _101;
int64_t _102;
frost$core$UInt8* _103;
frost$core$Weak** _106;
frost$core$Weak* _107;
frost$core$Weak* _108;
frost$core$Bit* _113;
frost$core$Bit _114;
bool _116;
frost$core$Int _118;
frost$core$Object** _122;
frost$core$Object* _123;
frost$core$Object* _124;
frost$core$Object* _125;
org$frostlang$frostc$Compiler* _128;
bool _129;
frost$core$Bit _130;
bool _131;
frost$core$Int _133;
org$frostlang$frostc$Compiler* _136;
org$frostlang$frostc$Type* _137;
org$frostlang$frostc$ClassDecl* _138;
bool _139;
frost$core$Bit _140;
bool _141;
frost$core$Int _143;
org$frostlang$frostc$ClassDecl* _146;
frost$core$Object* _148;
org$frostlang$frostc$ClassDecl* _150;
frost$core$Object* _151;
frost$core$Object* _154;
frost$core$Object* _156;
frost$core$UInt8* _159;
org$frostlang$frostc$ClassDecl** _160;
org$frostlang$frostc$ClassDecl* _161;
frost$core$Object* _162;
org$frostlang$frostc$ClassDecl* _164;
frost$core$Object* _165;
frost$core$UInt8* _169;
frost$core$Int _170;
frost$core$Int64 _171;
int64_t _172;
frost$core$UInt8* _173;
frost$core$UInt8* _176;
frost$core$Int32* _177;
frost$core$Int32 _178;
frost$core$UInt8* _181;
frost$core$Int64 _182;
int64_t _183;
frost$core$UInt8* _184;
frost$core$Int64 _187;
int64_t _190;
int64_t _191;
frost$core$Int _192;
int64_t _194;
frost$core$UInt8* _195;
frost$core$Int _198;
org$frostlang$frostc$LLVMCodeGenerator** _199;
org$frostlang$frostc$LLVMCodeGenerator* _200;
org$frostlang$frostc$ClassDecl* _201;
org$frostlang$frostc$Type** _202;
org$frostlang$frostc$Type* _203;
frost$core$Int _204;
frost$core$Bit _205;
frost$core$Range$LTfrost$core$Int$GT _206;
frost$core$Int _207;
frost$core$Int _209;
frost$core$Bit _210;
bool _211;
frost$core$Int _212;
int64_t _214;
int64_t _215;
bool _216;
frost$core$Bit _217;
bool _218;
int64_t _220;
int64_t _221;
bool _222;
frost$core$Bit _223;
bool _224;
frost$core$UInt8* _227;
frost$core$Int _228;
frost$core$Int64 _229;
frost$core$UInt8* _230;
frost$core$Int _231;
frost$core$Int64 _232;
int64_t _233;
frost$core$UInt8 _234;
int64_t _235;
frost$core$Int _238;
int64_t _239;
int64_t _240;
int64_t _241;
frost$core$Int _242;
int64_t _244;
int64_t _245;
bool _246;
frost$core$Bit _247;
bool _248;
int64_t _250;
int64_t _251;
bool _252;
frost$core$Bit _253;
bool _254;
int64_t _256;
int64_t _257;
int64_t _258;
frost$core$Int _259;
frost$collections$Array** _263;
frost$collections$Array* _264;
frost$collections$Array* _265;
frost$core$Int _266;
frost$core$UInt8* _267;
int64_t _268;
frost$core$Int _269;
int64_t _272;
int64_t _273;
frost$core$Int64 _274;
frost$core$Int64$nullable _276;
frost$core$Object* _277;
frost$core$Int _279;
int64_t _280;
int64_t _281;
bool _282;
frost$core$Bit _283;
bool _284;
frost$collections$CollectionView* _286;
$fn64 _287;
frost$core$Int _288;
int64_t _289;
int64_t _290;
bool _291;
frost$core$Bit _292;
bool _293;
frost$core$Int _295;
frost$core$Object*** _299;
frost$core$Object** _300;
frost$core$Int64 _301;
int64_t _302;
frost$core$Object* _303;
frost$core$Object* _305;
frost$core$Object* _306;
frost$core$Object* _310;
org$frostlang$frostc$ClassDecl* _313;
frost$core$Object* _314;
org$frostlang$frostc$Type* _317;
frost$core$Object* _318;
org$frostlang$frostc$Type* _323;
frost$core$Bit _324;
bool _325;
frost$core$Bit _327;
bool _328;
org$frostlang$frostc$Type* _331;
frost$core$Int _332;
frost$core$Int _333;
int64_t _334;
int64_t _335;
bool _336;
frost$core$Bit _337;
bool _338;
frost$collections$Array** _341;
frost$collections$Array* _342;
frost$collections$Array* _343;
frost$core$Int _344;
frost$core$Int64 _345;
int64_t _348;
uint64_t _349;
frost$core$UInt64 _350;
frost$core$UInt64 _352;
frost$core$Int _353;
frost$core$Int _354;
int64_t _355;
int64_t _356;
int64_t _357;
frost$core$Int _358;
int64_t _361;
uint64_t _362;
frost$core$UInt64 _363;
uint64_t _367;
uint64_t _368;
uint64_t _369;
frost$core$UInt64 _370;
uint64_t _374;
uint64_t _375;
uint64_t _376;
frost$core$UInt64 _377;
uint64_t _381;
int64_t _382;
frost$core$Int64 _383;
frost$core$Int64$nullable _385;
frost$core$Object* _386;
frost$core$Int _388;
int64_t _389;
int64_t _390;
bool _391;
frost$core$Bit _392;
bool _393;
frost$collections$CollectionView* _395;
$fn65 _396;
frost$core$Int _397;
int64_t _398;
int64_t _399;
bool _400;
frost$core$Bit _401;
bool _402;
frost$core$Int _404;
frost$core$Object*** _408;
frost$core$Object** _409;
frost$core$Int64 _410;
int64_t _411;
frost$core$Object* _412;
frost$core$Object* _414;
frost$core$Object* _415;
frost$core$Object* _419;
org$frostlang$frostc$Type* _422;
frost$core$Object* _423;
org$frostlang$frostc$Type* _428;
frost$core$Int _429;
frost$core$Int _430;
int64_t _433;
int64_t _434;
bool _435;
frost$core$Bit _436;
bool _438;
frost$collections$Array** _441;
frost$collections$Array* _442;
frost$collections$Array* _443;
frost$core$Int _444;
frost$core$Int64 _445;
frost$core$Int64$nullable _446;
frost$core$Object* _447;
frost$core$Int _449;
int64_t _450;
int64_t _451;
bool _452;
frost$core$Bit _453;
bool _454;
frost$collections$CollectionView* _456;
$fn66 _457;
frost$core$Int _458;
int64_t _459;
int64_t _460;
bool _461;
frost$core$Bit _462;
bool _463;
frost$core$Int _465;
frost$core$Object*** _469;
frost$core$Object** _470;
frost$core$Int64 _471;
int64_t _472;
frost$core$Object* _473;
frost$core$Object* _475;
frost$core$Object* _476;
frost$core$Object* _480;
org$frostlang$frostc$Type* _483;
frost$core$Object* _484;
frost$collections$Array** _490;
frost$collections$Array* _491;
frost$collections$Array* _492;
frost$core$Int _493;
frost$core$Int64 _494;
frost$core$Int64$nullable _495;
frost$core$Object* _496;
frost$core$Int _498;
int64_t _499;
int64_t _500;
bool _501;
frost$core$Bit _502;
bool _503;
frost$collections$CollectionView* _505;
$fn67 _506;
frost$core$Int _507;
int64_t _508;
int64_t _509;
bool _510;
frost$core$Bit _511;
bool _512;
frost$core$Int _514;
frost$core$Object*** _518;
frost$core$Object** _519;
frost$core$Int64 _520;
int64_t _521;
frost$core$Object* _522;
frost$core$Object* _524;
frost$core$Object* _525;
frost$core$Object* _529;
org$frostlang$frostc$Type* _531;
frost$core$Object* _532;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:281
_1 = ($fn68) param3->$class->vtable[2];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:282
_13 = ($fn69) param1->$class->vtable[2];
_14 = _13(param1, param3);
*(&local1) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:283
_17 = &param0->compiler;
_18 = *_17;
_19 = _18;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:283:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_24 = &_19->_valid;
_25 = *_24;
_27 = _25.value;
if (_27) goto block6; else goto block7;
block7:;
_29 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s70, _29, &$s71);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_33 = &_19->value;
_34 = *_33;
_35 = _34;
_36 = _35;
frost$core$Frost$ref$frost$core$Object$Q(_36);
_39 = ((org$frostlang$frostc$Compiler*) _35);
_40 = _39 != NULL;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block8; else goto block9;
block9:;
_44 = (frost$core$Int) {283u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s72, _44, &$s73);
abort(); // unreachable
block8:;
_47 = _39;
_48 = *(&local0);
_49 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_47, _48);
_50 = _49.value;
_51 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_51);
if (_50) goto block3; else goto block2;
block3:;
_54 = &param0->compiler;
_55 = *_54;
_56 = _55;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:283:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_61 = &_56->_valid;
_62 = *_61;
_64 = _62.value;
if (_64) goto block12; else goto block13;
block13:;
_66 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s74, _66, &$s75);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_70 = &_56->value;
_71 = *_70;
_72 = _71;
_73 = _72;
frost$core$Frost$ref$frost$core$Object$Q(_73);
_76 = ((org$frostlang$frostc$Compiler*) _72);
_77 = _76 != NULL;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block14; else goto block15;
block15:;
_81 = (frost$core$Int) {283u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s76, _81, &$s77);
abort(); // unreachable
block14:;
_84 = _76;
_85 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_84, param4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Interpreter.frost:283:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_88 = _85.value;
_89 = !_88;
_90 = (frost$core$Bit) {_89};
_92 = _90.value;
_93 = _72;
frost$core$Frost$unref$frost$core$Object$Q(_93);
if (_92) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:284
_97 = &param0->llvmCodeGen;
_98 = *_97;
_99 = *(&local0);
_100 = org$frostlang$frostc$LLVMCodeGenerator$sizeOfWrapper$org$frostlang$frostc$Type$R$frost$core$Int(_98, _99);
_101 = frost$core$Int64$init$frost$core$Int(_100);
_102 = _101.value;
_103 = ((frost$core$UInt8*) frostAlloc(_102 * sizeof(frost$core$UInt8)));
*(&local2) = _103;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:285
_106 = &param0->compiler;
_107 = *_106;
_108 = _107;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:285:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_113 = &_108->_valid;
_114 = *_113;
_116 = _114.value;
if (_116) goto block19; else goto block20;
block20:;
_118 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s78, _118, &$s79);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_122 = &_108->value;
_123 = *_122;
_124 = _123;
_125 = _124;
frost$core$Frost$ref$frost$core$Object$Q(_125);
_128 = ((org$frostlang$frostc$Compiler*) _124);
_129 = _128 != NULL;
_130 = (frost$core$Bit) {_129};
_131 = _130.value;
if (_131) goto block21; else goto block22;
block22:;
_133 = (frost$core$Int) {285u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s80, _133, &$s81);
abort(); // unreachable
block21:;
_136 = _128;
_137 = *(&local0);
_138 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(_136, _137);
_139 = _138 != NULL;
_140 = (frost$core$Bit) {_139};
_141 = _140.value;
if (_141) goto block23; else goto block24;
block24:;
_143 = (frost$core$Int) {285u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s82, _143, &$s83);
abort(); // unreachable
block23:;
_146 = _138;
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
_148 = ((frost$core$Object*) _146);
frost$core$Frost$ref$frost$core$Object$Q(_148);
_150 = *(&local3);
_151 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_151);
*(&local3) = _146;
_154 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_154);
_156 = _124;
frost$core$Frost$unref$frost$core$Object$Q(_156);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:286
_159 = *(&local2);
_160 = ((org$frostlang$frostc$ClassDecl**) _159);
_161 = *(&local3);
_162 = ((frost$core$Object*) _161);
frost$core$Frost$ref$frost$core$Object$Q(_162);
_164 = *_160;
_165 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_165);
*_160 = _161;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:287
_169 = *(&local2);
_170 = (frost$core$Int) {8u};
_171 = frost$core$Int64$init$frost$core$Int(_170);
_172 = _171.value;
_173 = _169 + _172;
*(&local4) = _173;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:288
_176 = *(&local4);
_177 = ((frost$core$Int32*) _176);
_178 = (frost$core$Int32) {1u};
*_177 = _178;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:289
_181 = *(&local4);
_182 = (frost$core$Int64) {5u};
_183 = _182.value;
_184 = _181 + _183;
*(&local4) = _184;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:290
_187 = *(&local1);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:290:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_190 = _187.value;
_191 = ((int64_t) _190);
_192 = (frost$core$Int) {_191};
_194 = _192.value;
_195 = ((frost$core$UInt8*) _194);
*(&local5) = _195;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:292
_198 = (frost$core$Int) {0u};
_199 = &param0->llvmCodeGen;
_200 = *_199;
_201 = *(&local3);
_202 = &_201->type;
_203 = *_202;
_204 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(_200, _203);
_205 = (frost$core$Bit) {false};
_206 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_198, _204, _205);
_207 = _206.min;
*(&local6) = _207;
_209 = _206.max;
_210 = _206.inclusive;
_211 = _210.value;
_212 = (frost$core$Int) {1u};
if (_211) goto block29; else goto block30;
block29:;
_214 = _207.value;
_215 = _209.value;
_216 = _214 <= _215;
_217 = (frost$core$Bit) {_216};
_218 = _217.value;
if (_218) goto block26; else goto block27;
block30:;
_220 = _207.value;
_221 = _209.value;
_222 = _220 < _221;
_223 = (frost$core$Bit) {_222};
_224 = _223.value;
if (_224) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:293
_227 = *(&local4);
_228 = *(&local6);
_229 = frost$core$Int64$init$frost$core$Int(_228);
_230 = *(&local5);
_231 = *(&local6);
_232 = frost$core$Int64$init$frost$core$Int(_231);
_233 = _232.value;
_234 = _230[_233];
_235 = _229.value;
_227[_235] = _234;
_238 = *(&local6);
_239 = _209.value;
_240 = _238.value;
_241 = _239 - _240;
_242 = (frost$core$Int) {_241};
if (_211) goto block32; else goto block33;
block32:;
_244 = _242.value;
_245 = _212.value;
_246 = _244 >= _245;
_247 = (frost$core$Bit) {_246};
_248 = _247.value;
if (_248) goto block31; else goto block27;
block33:;
_250 = _242.value;
_251 = _212.value;
_252 = _250 > _251;
_253 = (frost$core$Bit) {_252};
_254 = _253.value;
if (_254) goto block31; else goto block27;
block31:;
_256 = _238.value;
_257 = _212.value;
_258 = _256 + _257;
_259 = (frost$core$Int) {_258};
*(&local6) = _259;
goto block26;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:295
_263 = &param1->statements;
_264 = *_263;
_265 = _264;
_266 = param2.value;
_267 = *(&local2);
_268 = ((int64_t) _267);
_269 = (frost$core$Int) {_268};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:295:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_272 = _269.value;
_273 = ((int64_t) _272);
_274 = (frost$core$Int64) {_273};
_276 = ((frost$core$Int64$nullable) { _274, true });
frost$core$Object* $tmp84;
if (_276.nonnull) {
    frost$core$Int64$wrapper* $tmp85;
    $tmp85 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp85->value = ((frost$core$Int64) _276.value);
    $tmp84 = ((frost$core$Object*) $tmp85);
}
else {
    $tmp84 = NULL;
}
_277 = $tmp84;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:295:31
_279 = (frost$core$Int) {0u};
_280 = _266.value;
_281 = _279.value;
_282 = _280 >= _281;
_283 = (frost$core$Bit) {_282};
_284 = _283.value;
if (_284) goto block38; else goto block37;
block38:;
_286 = ((frost$collections$CollectionView*) _265);
ITable* $tmp86 = _286->$class->itable;
while ($tmp86->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp86 = $tmp86->next;
}
_287 = $tmp86->methods[0];
_288 = _287(_286);
_289 = _266.value;
_290 = _288.value;
_291 = _289 < _290;
_292 = (frost$core$Bit) {_291};
_293 = _292.value;
if (_293) goto block36; else goto block37;
block37:;
_295 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s87, _295, &$s88);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_299 = &_265->data;
_300 = *_299;
_301 = frost$core$Int64$init$frost$core$Int(_266);
_302 = _301.value;
_303 = _277;
frost$core$Frost$ref$frost$core$Object$Q(_303);
_305 = _300[_302];
_306 = _305;
frost$core$Frost$unref$frost$core$Object$Q(_306);
_300[_302] = _277;
_310 = _277;
frost$core$Frost$unref$frost$core$Object$Q(_310);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:296
_313 = *(&local3);
_314 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_314);
*(&local3) = ((org$frostlang$frostc$ClassDecl*) NULL);
_317 = *(&local0);
_318 = ((frost$core$Object*) _317);
frost$core$Frost$unref$frost$core$Object$Q(_318);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:298
_323 = *(&local0);
_324 = org$frostlang$frostc$Type$get_isBuiltinInt$R$frost$core$Bit(_323);
_325 = _324.value;
if (_325) goto block41; else goto block40;
block41:;
_327 = org$frostlang$frostc$Type$get_isBuiltinInt$R$frost$core$Bit(param4);
_328 = _327.value;
if (_328) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:299
_331 = *(&local0);
_332 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(_331);
_333 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(param4);
_334 = _332.value;
_335 = _333.value;
_336 = _334 > _335;
_337 = (frost$core$Bit) {_336};
_338 = _337.value;
if (_338) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:300
_341 = &param1->statements;
_342 = *_341;
_343 = _342;
_344 = param2.value;
_345 = *(&local1);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Interpreter.frost:300:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_348 = _345.value;
_349 = ((uint64_t) _348);
_350 = (frost$core$UInt64) {_349};
_352 = (frost$core$UInt64) {18446744073709551615u};
_353 = (frost$core$Int) {64u};
_354 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(param4);
_355 = _353.value;
_356 = _354.value;
_357 = _355 - _356;
_358 = (frost$core$Int) {_357};
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Interpreter.frost:301:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_361 = _358.value;
_362 = ((uint64_t) _361);
_363 = (frost$core$UInt64) {_362};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from Interpreter.frost:301:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
_367 = _352.value;
_368 = _363.value;
_369 = _367 >> _368;
_370 = (frost$core$UInt64) {_369};
// begin inline call to function frost.core.UInt64.&&(other:frost.core.UInt64):frost.core.UInt64 from Interpreter.frost:300:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:166
_374 = _350.value;
_375 = _370.value;
_376 = _374 & _375;
_377 = (frost$core$UInt64) {_376};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Interpreter.frost:301:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_381 = _377.value;
_382 = ((int64_t) _381);
_383 = (frost$core$Int64) {_382};
_385 = ((frost$core$Int64$nullable) { _383, true });
frost$core$Object* $tmp89;
if (_385.nonnull) {
    frost$core$Int64$wrapper* $tmp90;
    $tmp90 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp90->value = ((frost$core$Int64) _385.value);
    $tmp89 = ((frost$core$Object*) $tmp90);
}
else {
    $tmp89 = NULL;
}
_386 = $tmp89;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:300:35
_388 = (frost$core$Int) {0u};
_389 = _344.value;
_390 = _388.value;
_391 = _389 >= _390;
_392 = (frost$core$Bit) {_391};
_393 = _392.value;
if (_393) goto block52; else goto block51;
block52:;
_395 = ((frost$collections$CollectionView*) _343);
ITable* $tmp91 = _395->$class->itable;
while ($tmp91->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp91 = $tmp91->next;
}
_396 = $tmp91->methods[0];
_397 = _396(_395);
_398 = _344.value;
_399 = _397.value;
_400 = _398 < _399;
_401 = (frost$core$Bit) {_400};
_402 = _401.value;
if (_402) goto block50; else goto block51;
block51:;
_404 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s92, _404, &$s93);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_408 = &_343->data;
_409 = *_408;
_410 = frost$core$Int64$init$frost$core$Int(_344);
_411 = _410.value;
_412 = _386;
frost$core$Frost$ref$frost$core$Object$Q(_412);
_414 = _409[_411];
_415 = _414;
frost$core$Frost$unref$frost$core$Object$Q(_415);
_409[_411] = _386;
_419 = _386;
frost$core$Frost$unref$frost$core$Object$Q(_419);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:302
_422 = *(&local0);
_423 = ((frost$core$Object*) _422);
frost$core$Frost$unref$frost$core$Object$Q(_423);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:304
_428 = *(&local0);
_429 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(_428);
_430 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(param4);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:304:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_433 = _429.value;
_434 = _430.value;
_435 = _433 == _434;
_436 = (frost$core$Bit) {_435};
_438 = _436.value;
if (_438) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:305
_441 = &param1->statements;
_442 = *_441;
_443 = _442;
_444 = param2.value;
_445 = *(&local1);
_446 = ((frost$core$Int64$nullable) { _445, true });
frost$core$Object* $tmp94;
if (_446.nonnull) {
    frost$core$Int64$wrapper* $tmp95;
    $tmp95 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp95->value = ((frost$core$Int64) _446.value);
    $tmp94 = ((frost$core$Object*) $tmp95);
}
else {
    $tmp94 = NULL;
}
_447 = $tmp94;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:305:35
_449 = (frost$core$Int) {0u};
_450 = _444.value;
_451 = _449.value;
_452 = _450 >= _451;
_453 = (frost$core$Bit) {_452};
_454 = _453.value;
if (_454) goto block59; else goto block58;
block59:;
_456 = ((frost$collections$CollectionView*) _443);
ITable* $tmp96 = _456->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp96 = $tmp96->next;
}
_457 = $tmp96->methods[0];
_458 = _457(_456);
_459 = _444.value;
_460 = _458.value;
_461 = _459 < _460;
_462 = (frost$core$Bit) {_461};
_463 = _462.value;
if (_463) goto block57; else goto block58;
block58:;
_465 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s97, _465, &$s98);
abort(); // unreachable
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_469 = &_443->data;
_470 = *_469;
_471 = frost$core$Int64$init$frost$core$Int(_444);
_472 = _471.value;
_473 = _447;
frost$core$Frost$ref$frost$core$Object$Q(_473);
_475 = _470[_472];
_476 = _475;
frost$core$Frost$unref$frost$core$Object$Q(_476);
_470[_472] = _447;
_480 = _447;
frost$core$Frost$unref$frost$core$Object$Q(_480);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:306
_483 = *(&local0);
_484 = ((frost$core$Object*) _483);
frost$core$Frost$unref$frost$core$Object$Q(_484);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block54:;
goto block40;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:309
_490 = &param1->statements;
_491 = *_490;
_492 = _491;
_493 = param2.value;
_494 = *(&local1);
_495 = ((frost$core$Int64$nullable) { _494, true });
frost$core$Object* $tmp99;
if (_495.nonnull) {
    frost$core$Int64$wrapper* $tmp100;
    $tmp100 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp100->value = ((frost$core$Int64) _495.value);
    $tmp99 = ((frost$core$Object*) $tmp100);
}
else {
    $tmp99 = NULL;
}
_496 = $tmp99;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:309:27
_498 = (frost$core$Int) {0u};
_499 = _493.value;
_500 = _498.value;
_501 = _499 >= _500;
_502 = (frost$core$Bit) {_501};
_503 = _502.value;
if (_503) goto block63; else goto block62;
block63:;
_505 = ((frost$collections$CollectionView*) _492);
ITable* $tmp101 = _505->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp101 = $tmp101->next;
}
_506 = $tmp101->methods[0];
_507 = _506(_505);
_508 = _493.value;
_509 = _507.value;
_510 = _508 < _509;
_511 = (frost$core$Bit) {_510};
_512 = _511.value;
if (_512) goto block61; else goto block62;
block62:;
_514 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s102, _514, &$s103);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_518 = &_492->data;
_519 = *_518;
_520 = frost$core$Int64$init$frost$core$Int(_493);
_521 = _520.value;
_522 = _496;
frost$core$Frost$ref$frost$core$Object$Q(_522);
_524 = _519[_521];
_525 = _524;
frost$core$Frost$unref$frost$core$Object$Q(_525);
_519[_521] = _496;
_529 = _496;
frost$core$Frost$unref$frost$core$Object$Q(_529);
_531 = *(&local0);
_532 = ((frost$core$Object*) _531);
frost$core$Frost$unref$frost$core$Object$Q(_532);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;

}
void org$frostlang$frostc$Interpreter$createStruct$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$ClassDecl* param3, org$frostlang$frostc$FixedArray* param4) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int64$nullable local0;
frost$core$UInt8* local1;
org$frostlang$frostc$IR$Value* local2 = NULL;
frost$core$Int64 local3;
frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$HashMap* _3;
frost$core$Int _4;
frost$core$Int64 _5;
frost$collections$HashKey* _6;
frost$core$Object* _7;
frost$core$Int64$nullable _8;
frost$core$Object* _10;
frost$core$Object* _12;
frost$core$Int64$nullable _15;
bool _16;
frost$core$Bit _17;
bool _18;
org$frostlang$frostc$LLVMCodeGenerator** _21;
org$frostlang$frostc$LLVMCodeGenerator* _22;
org$frostlang$frostc$Type** _23;
org$frostlang$frostc$Type* _24;
frost$core$Int _25;
frost$core$Int64 _26;
int64_t _27;
frost$core$UInt8* _28;
int64_t _29;
frost$core$Int _30;
int64_t _33;
int64_t _34;
frost$core$Int64 _35;
frost$core$Int64$nullable _37;
frost$collections$HashMap** _40;
frost$collections$HashMap* _41;
frost$collections$HashMap* _42;
frost$core$Int _43;
frost$core$Int64 _44;
frost$collections$HashKey* _45;
frost$core$Int64$nullable _46;
bool _47;
frost$core$Bit _48;
bool _49;
frost$core$Int _51;
frost$core$Int64 _54;
frost$core$Object* _55;
frost$core$Object* _57;
frost$core$Object* _59;
frost$core$Int64$nullable _63;
bool _64;
frost$core$Bit _65;
bool _66;
frost$core$Int _68;
frost$core$Int64 _71;
int64_t _74;
int64_t _75;
frost$core$Int _76;
int64_t _78;
frost$core$UInt8* _79;
frost$collections$Iterable* _82;
frost$collections$Iterable* _83;
$fn104 _84;
frost$collections$Iterator* _85;
frost$collections$Iterator* _86;
frost$collections$Iterator* _88;
$fn105 _89;
frost$core$Bit _90;
bool _91;
frost$collections$Iterator* _94;
$fn106 _95;
frost$core$Object* _96;
org$frostlang$frostc$IR$Value* _97;
frost$core$Object* _98;
org$frostlang$frostc$IR$Value* _100;
frost$core$Object* _101;
org$frostlang$frostc$IR$Value* _105;
$fn107 _106;
frost$core$Int64 _107;
org$frostlang$frostc$LLVMCodeGenerator** _110;
org$frostlang$frostc$LLVMCodeGenerator* _111;
org$frostlang$frostc$IR$Value* _112;
$fn108 _113;
org$frostlang$frostc$Type* _114;
frost$core$Int _115;
frost$core$Int _116;
int64_t _119;
int64_t _120;
bool _121;
frost$core$Bit _122;
bool _124;
frost$core$UInt8* _127;
frost$core$Int64 _128;
int64_t _131;
uint8_t _132;
frost$core$UInt8 _133;
frost$core$UInt8* _137;
frost$core$Int64 _138;
int64_t _139;
frost$core$UInt8* _140;
frost$core$Int _143;
int64_t _146;
int64_t _147;
bool _148;
frost$core$Bit _149;
bool _151;
frost$core$UInt8* _154;
frost$core$Int16* _155;
frost$core$Int64 _156;
int64_t _159;
int16_t _160;
frost$core$Int16 _161;
frost$core$UInt8* _165;
frost$core$Int64 _166;
int64_t _167;
frost$core$UInt8* _168;
frost$core$Int _171;
int64_t _174;
int64_t _175;
bool _176;
frost$core$Bit _177;
bool _179;
frost$core$UInt8* _182;
frost$core$Int32* _183;
frost$core$Int64 _184;
int64_t _187;
int32_t _188;
frost$core$Int32 _189;
frost$core$UInt8* _193;
frost$core$Int64 _194;
int64_t _195;
frost$core$UInt8* _196;
frost$core$Int _199;
int64_t _202;
int64_t _203;
bool _204;
frost$core$Bit _205;
bool _207;
frost$core$UInt8* _210;
frost$core$Int64* _211;
frost$core$Int64 _212;
frost$core$UInt8* _215;
frost$core$Int64 _216;
int64_t _217;
frost$core$UInt8* _218;
frost$core$Int _222;
org$frostlang$frostc$IR$Value* _223;
frost$core$Object* _224;
$fn109 _227;
frost$core$String* _228;
frost$core$String* _229;
frost$core$Object* _230;
frost$core$Object* _232;
frost$core$Object* _234;
frost$core$String* _237;
frost$core$Object* _239;
frost$core$Object* _241;
frost$core$Object* _244;
frost$core$Object* _246;
org$frostlang$frostc$IR$Value* _248;
frost$core$Object* _249;
frost$core$Object* _253;
frost$collections$Array** _256;
frost$collections$Array* _257;
frost$collections$Array* _258;
frost$core$Int _259;
frost$core$Int64$nullable _260;
bool _261;
frost$core$Bit _262;
bool _263;
frost$core$Int _265;
frost$core$Int64 _268;
int64_t _271;
int64_t _272;
frost$core$Int _273;
int64_t _277;
int64_t _278;
frost$core$Int64 _279;
frost$core$Int64$nullable _281;
frost$core$Object* _282;
frost$core$Int _284;
int64_t _285;
int64_t _286;
bool _287;
frost$core$Bit _288;
bool _289;
frost$collections$CollectionView* _291;
$fn110 _292;
frost$core$Int _293;
int64_t _294;
int64_t _295;
bool _296;
frost$core$Bit _297;
bool _298;
frost$core$Int _300;
frost$core$Object*** _304;
frost$core$Object** _305;
frost$core$Int64 _306;
int64_t _307;
frost$core$Object* _308;
frost$core$Object* _310;
frost$core$Object* _311;
frost$core$Object* _315;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:314
_1 = &param1->structs;
_2 = *_1;
_3 = _2;
_4 = param2.value;
_5 = frost$core$Int64$init$frost$core$Int(_4);
frost$core$Int64$wrapper* $tmp111;
$tmp111 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp111->value = _5;
_6 = ((frost$collections$HashKey*) $tmp111);
_7 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_3, _6);
_8 = (_7 != NULL ? ((frost$core$Int64$nullable) { ((frost$core$Int64$wrapper*) _7)->value, true }) : (frost$core$Int64$nullable) { .nonnull = 0 });
*(&local0) = _8;
_10 = _7;
frost$core$Frost$unref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:315
_15 = *(&local0);
_16 = !_15.nonnull;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:316
_21 = &param0->llvmCodeGen;
_22 = *_21;
_23 = &param3->type;
_24 = *_23;
_25 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(_22, _24);
_26 = frost$core$Int64$init$frost$core$Int(_25);
_27 = _26.value;
_28 = ((frost$core$UInt8*) frostAlloc(_27 * sizeof(frost$core$UInt8)));
_29 = ((int64_t) _28);
_30 = (frost$core$Int) {_29};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:316:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_33 = _30.value;
_34 = ((int64_t) _33);
_35 = (frost$core$Int64) {_34};
_37 = ((frost$core$Int64$nullable) { _35, true });
*(&local0) = _37;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:317
_40 = &param1->structs;
_41 = *_40;
_42 = _41;
_43 = param2.value;
_44 = frost$core$Int64$init$frost$core$Int(_43);
frost$core$Int64$wrapper* $tmp112;
$tmp112 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp112->value = _44;
_45 = ((frost$collections$HashKey*) $tmp112);
_46 = *(&local0);
_47 = _46.nonnull;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block4; else goto block5;
block5:;
_51 = (frost$core$Int) {317u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s113, _51, &$s114);
abort(); // unreachable
block4:;
_54 = ((frost$core$Int64) _46.value);
frost$core$Int64$wrapper* $tmp115;
$tmp115 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp115->value = _54;
_55 = ((frost$core$Object*) $tmp115);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_42, _45, _55);
_57 = _55;
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_59);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:319
_63 = *(&local0);
_64 = _63.nonnull;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block6; else goto block7;
block7:;
_68 = (frost$core$Int) {319u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s116, _68, &$s117);
abort(); // unreachable
block6:;
_71 = ((frost$core$Int64) _63.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:319:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_74 = _71.value;
_75 = ((int64_t) _74);
_76 = (frost$core$Int) {_75};
_78 = _76.value;
_79 = ((frost$core$UInt8*) _78);
*(&local1) = _79;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:320
_82 = ((frost$collections$Iterable*) param4);
_83 = _82;
ITable* $tmp118 = _83->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp118 = $tmp118->next;
}
_84 = $tmp118->methods[0];
_85 = _84(_83);
_86 = _85;
goto block9;
block9:;
_88 = _86;
ITable* $tmp119 = _88->$class->itable;
while ($tmp119->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp119 = $tmp119->next;
}
_89 = $tmp119->methods[0];
_90 = _89(_88);
_91 = _90.value;
if (_91) goto block11; else goto block10;
block10:;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
_94 = _86;
ITable* $tmp120 = _94->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp120 = $tmp120->next;
}
_95 = $tmp120->methods[1];
_96 = _95(_94);
_97 = ((org$frostlang$frostc$IR$Value*) _96);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$ref$frost$core$Object$Q(_98);
_100 = *(&local2);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local2) = _97;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:321
_105 = *(&local2);
_106 = ($fn121) param1->$class->vtable[2];
_107 = _106(param1, _105);
*(&local3) = _107;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:322
_110 = &param0->llvmCodeGen;
_111 = *_110;
_112 = *(&local2);
_113 = ($fn122) _112->$class->vtable[2];
_114 = _113(_112);
_115 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(_111, _114);
_116 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:323:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_119 = _115.value;
_120 = _116.value;
_121 = _119 == _120;
_122 = (frost$core$Bit) {_121};
_124 = _122.value;
if (_124) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:324
_127 = *(&local1);
_128 = *(&local3);
// begin inline call to function frost.core.Int64.get_asUInt8():frost.core.UInt8 from Interpreter.frost:324:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:610
_131 = _128.value;
_132 = ((uint8_t) _131);
_133 = (frost$core$UInt8) {_132};
*_127 = _133;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:325
_137 = *(&local1);
_138 = (frost$core$Int64) {1u};
_139 = _138.value;
_140 = _137 + _139;
*(&local1) = _140;
goto block12;
block14:;
_143 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:327:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_146 = _115.value;
_147 = _143.value;
_148 = _146 == _147;
_149 = (frost$core$Bit) {_148};
_151 = _149.value;
if (_151) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:328
_154 = *(&local1);
_155 = ((frost$core$Int16*) _154);
_156 = *(&local3);
// begin inline call to function frost.core.Int64.get_asInt16():frost.core.Int16 from Interpreter.frost:328:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:592
_159 = _156.value;
_160 = ((int16_t) _159);
_161 = (frost$core$Int16) {_160};
*_155 = _161;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:329
_165 = *(&local1);
_166 = (frost$core$Int64) {2u};
_167 = _166.value;
_168 = _165 + _167;
*(&local1) = _168;
goto block12;
block18:;
_171 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:331:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_174 = _115.value;
_175 = _171.value;
_176 = _174 == _175;
_177 = (frost$core$Bit) {_176};
_179 = _177.value;
if (_179) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:332
_182 = *(&local1);
_183 = ((frost$core$Int32*) _182);
_184 = *(&local3);
// begin inline call to function frost.core.Int64.get_asInt32():frost.core.Int32 from Interpreter.frost:332:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:598
_187 = _184.value;
_188 = ((int32_t) _187);
_189 = (frost$core$Int32) {_188};
*_183 = _189;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:333
_193 = *(&local1);
_194 = (frost$core$Int64) {4u};
_195 = _194.value;
_196 = _193 + _195;
*(&local1) = _196;
goto block12;
block22:;
_199 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:335:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_202 = _115.value;
_203 = _199.value;
_204 = _202 == _203;
_205 = (frost$core$Bit) {_204};
_207 = _205.value;
if (_207) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:336
_210 = *(&local1);
_211 = ((frost$core$Int64*) _210);
_212 = *(&local3);
*_211 = _212;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:337
_215 = *(&local1);
_216 = (frost$core$Int64) {8u};
_217 = _216.value;
_218 = _215 + _217;
*(&local1) = _218;
goto block12;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:340
_222 = (frost$core$Int) {340u};
_223 = *(&local2);
_224 = ((frost$core$Object*) _223);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:340:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_227 = ($fn123) _224->$class->vtable[0];
_228 = _227(_224);
_229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s124, _228);
_230 = ((frost$core$Object*) _229);
frost$core$Frost$ref$frost$core$Object$Q(_230);
_232 = ((frost$core$Object*) _229);
frost$core$Frost$unref$frost$core$Object$Q(_232);
_234 = ((frost$core$Object*) _228);
frost$core$Frost$unref$frost$core$Object$Q(_234);
_237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_229, &$s125);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s126, _222, _237);
_239 = ((frost$core$Object*) _237);
frost$core$Frost$unref$frost$core$Object$Q(_239);
_241 = ((frost$core$Object*) _229);
frost$core$Frost$unref$frost$core$Object$Q(_241);
abort(); // unreachable
block12:;
_244 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_244);
_246 = _96;
frost$core$Frost$unref$frost$core$Object$Q(_246);
_248 = *(&local2);
_249 = ((frost$core$Object*) _248);
frost$core$Frost$unref$frost$core$Object$Q(_249);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block9;
block11:;
_253 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_253);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:344
_256 = &param1->statements;
_257 = *_256;
_258 = _257;
_259 = param2.value;
_260 = *(&local0);
_261 = _260.nonnull;
_262 = (frost$core$Bit) {_261};
_263 = _262.value;
if (_263) goto block29; else goto block30;
block30:;
_265 = (frost$core$Int) {344u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s127, _265, &$s128);
abort(); // unreachable
block29:;
_268 = ((frost$core$Int64) _260.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:344:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_271 = _268.value;
_272 = ((int64_t) _271);
_273 = (frost$core$Int) {_272};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:344:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_277 = _273.value;
_278 = ((int64_t) _277);
_279 = (frost$core$Int64) {_278};
_281 = ((frost$core$Int64$nullable) { _279, true });
frost$core$Object* $tmp129;
if (_281.nonnull) {
    frost$core$Int64$wrapper* $tmp130;
    $tmp130 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp130->value = ((frost$core$Int64) _281.value);
    $tmp129 = ((frost$core$Object*) $tmp130);
}
else {
    $tmp129 = NULL;
}
_282 = $tmp129;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:344:27
_284 = (frost$core$Int) {0u};
_285 = _259.value;
_286 = _284.value;
_287 = _285 >= _286;
_288 = (frost$core$Bit) {_287};
_289 = _288.value;
if (_289) goto block36; else goto block35;
block36:;
_291 = ((frost$collections$CollectionView*) _258);
ITable* $tmp131 = _291->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp131 = $tmp131->next;
}
_292 = $tmp131->methods[0];
_293 = _292(_291);
_294 = _259.value;
_295 = _293.value;
_296 = _294 < _295;
_297 = (frost$core$Bit) {_296};
_298 = _297.value;
if (_298) goto block34; else goto block35;
block35:;
_300 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s132, _300, &$s133);
abort(); // unreachable
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_304 = &_258->data;
_305 = *_304;
_306 = frost$core$Int64$init$frost$core$Int(_259);
_307 = _306.value;
_308 = _282;
frost$core$Frost$ref$frost$core$Object$Q(_308);
_310 = _305[_307];
_311 = _310;
frost$core$Frost$unref$frost$core$Object$Q(_311);
_305[_307] = _282;
_315 = _282;
frost$core$Frost$unref$frost$core$Object$Q(_315);
return;

}
void org$frostlang$frostc$Interpreter$extractField$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

org$frostlang$frostc$ClassDecl* local0 = NULL;
frost$core$UInt8* local1;
frost$core$Weak** _1;
frost$core$Weak* _2;
frost$core$Weak* _3;
frost$core$Bit* _8;
frost$core$Bit _9;
bool _11;
frost$core$Int _13;
frost$core$Object** _17;
frost$core$Object* _18;
frost$core$Object* _19;
frost$core$Object* _20;
org$frostlang$frostc$Compiler* _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Int _28;
org$frostlang$frostc$Compiler* _31;
$fn134 _32;
org$frostlang$frostc$Type* _33;
org$frostlang$frostc$ClassDecl* _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$core$Int _39;
org$frostlang$frostc$ClassDecl* _42;
frost$core$Object* _44;
org$frostlang$frostc$ClassDecl* _46;
frost$core$Object* _47;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$Object* _54;
org$frostlang$frostc$ClassDecl* _57;
frost$core$String** _58;
frost$core$String* _59;
org$frostlang$frostc$LLVMCodeGenerator** _70;
org$frostlang$frostc$LLVMCodeGenerator* _71;
$fn135 _72;
org$frostlang$frostc$Type* _73;
frost$core$Int _74;
frost$core$Object* _75;
$fn136 _78;
frost$core$Int64 _79;
int64_t _82;
int64_t _83;
frost$core$Int _84;
frost$core$Int* _86;
frost$core$Int _87;
int64_t _88;
int64_t _89;
int64_t _90;
frost$core$Int _91;
int64_t _92;
frost$core$UInt8* _93;
frost$core$UInt8* _96;
int64_t _97;
frost$core$Int _98;
frost$core$Object* _99;
$fn137 _102;
frost$core$String* _103;
frost$core$Object* _110;
frost$core$Object* _113;
org$frostlang$frostc$LLVMCodeGenerator** _116;
org$frostlang$frostc$LLVMCodeGenerator* _117;
org$frostlang$frostc$Type** _118;
org$frostlang$frostc$Type* _119;
frost$core$Int _120;
frost$core$Int _121;
int64_t _124;
int64_t _125;
bool _126;
frost$core$Bit _127;
bool _129;
frost$collections$Array** _132;
frost$collections$Array* _133;
frost$collections$Array* _134;
frost$core$Int _135;
frost$core$UInt8* _136;
frost$core$UInt8 _137;
uint8_t _140;
int64_t _141;
frost$core$Int64 _142;
frost$core$Int64$nullable _144;
frost$core$Object* _145;
frost$core$Int _147;
int64_t _148;
int64_t _149;
bool _150;
frost$core$Bit _151;
bool _152;
frost$collections$CollectionView* _154;
$fn138 _155;
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
frost$collections$Array* _194;
frost$core$Int _195;
frost$core$UInt8* _196;
frost$core$UInt16* _197;
frost$core$UInt16 _198;
uint16_t _201;
int64_t _202;
frost$core$Int64 _203;
frost$core$Int64$nullable _205;
frost$core$Object* _206;
frost$core$Int _208;
int64_t _209;
int64_t _210;
bool _211;
frost$core$Bit _212;
bool _213;
frost$collections$CollectionView* _215;
$fn139 _216;
frost$core$Int _217;
int64_t _218;
int64_t _219;
bool _220;
frost$core$Bit _221;
bool _222;
frost$core$Int _224;
frost$core$Object*** _228;
frost$core$Object** _229;
frost$core$Int64 _230;
int64_t _231;
frost$core$Object* _232;
frost$core$Object* _234;
frost$core$Object* _235;
frost$core$Object* _239;
frost$core$Int _242;
int64_t _245;
int64_t _246;
bool _247;
frost$core$Bit _248;
bool _250;
frost$collections$Array** _253;
frost$collections$Array* _254;
frost$collections$Array* _255;
frost$core$Int _256;
frost$core$UInt8* _257;
frost$core$UInt32* _258;
frost$core$UInt32 _259;
uint32_t _262;
int64_t _263;
frost$core$Int64 _264;
frost$core$Int64$nullable _266;
frost$core$Object* _267;
frost$core$Int _269;
int64_t _270;
int64_t _271;
bool _272;
frost$core$Bit _273;
bool _274;
frost$collections$CollectionView* _276;
$fn140 _277;
frost$core$Int _278;
int64_t _279;
int64_t _280;
bool _281;
frost$core$Bit _282;
bool _283;
frost$core$Int _285;
frost$core$Object*** _289;
frost$core$Object** _290;
frost$core$Int64 _291;
int64_t _292;
frost$core$Object* _293;
frost$core$Object* _295;
frost$core$Object* _296;
frost$core$Object* _300;
frost$core$Int _303;
int64_t _306;
int64_t _307;
bool _308;
frost$core$Bit _309;
bool _311;
frost$collections$Array** _314;
frost$collections$Array* _315;
frost$collections$Array* _316;
frost$core$Int _317;
frost$core$UInt8* _318;
frost$core$UInt64* _319;
frost$core$UInt64 _320;
uint64_t _323;
int64_t _324;
frost$core$Int64 _325;
frost$core$Int64$nullable _327;
frost$core$Object* _328;
frost$core$Int _330;
int64_t _331;
int64_t _332;
bool _333;
frost$core$Bit _334;
bool _335;
frost$collections$CollectionView* _337;
$fn141 _338;
frost$core$Int _339;
int64_t _340;
int64_t _341;
bool _342;
frost$core$Bit _343;
bool _344;
frost$core$Int _346;
frost$core$Object*** _350;
frost$core$Object** _351;
frost$core$Int64 _352;
int64_t _353;
frost$core$Object* _354;
frost$core$Object* _356;
frost$core$Object* _357;
frost$core$Object* _361;
frost$core$Int _365;
org$frostlang$frostc$ClassDecl* _368;
frost$core$Object* _369;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:348
_1 = &param0->compiler;
_2 = *_1;
_3 = _2;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:348:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_8 = &_3->_valid;
_9 = *_8;
_11 = _9.value;
if (_11) goto block3; else goto block4;
block4:;
_13 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s142, _13, &$s143);
abort(); // unreachable
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_17 = &_3->value;
_18 = *_17;
_19 = _18;
_20 = _19;
frost$core$Frost$ref$frost$core$Object$Q(_20);
_23 = ((org$frostlang$frostc$Compiler*) _19);
_24 = _23 != NULL;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block5; else goto block6;
block6:;
_28 = (frost$core$Int) {348u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s144, _28, &$s145);
abort(); // unreachable
block5:;
_31 = _23;
_32 = ($fn146) param3->$class->vtable[2];
_33 = _32(param3);
_34 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(_31, _33);
_35 = _34 != NULL;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block7; else goto block8;
block8:;
_39 = (frost$core$Int) {348u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s147, _39, &$s148);
abort(); // unreachable
block7:;
_42 = _34;
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
_44 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_44);
_46 = *(&local0);
_47 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_47);
*(&local0) = _42;
_50 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_54);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:349
_57 = *(&local0);
_58 = &_57->name;
_59 = *_58;
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Interpreter.frost:349:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_59);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s149);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:351
_70 = &param0->llvmCodeGen;
_71 = *_70;
_72 = ($fn150) param3->$class->vtable[2];
_73 = _72(param3);
_74 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(_71, _73);
_75 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_75);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:352
_78 = ($fn151) param1->$class->vtable[2];
_79 = _78(param1, param3);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:352:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_82 = _79.value;
_83 = ((int64_t) _82);
_84 = (frost$core$Int) {_83};
_86 = &param4->offset;
_87 = *_86;
_88 = _84.value;
_89 = _87.value;
_90 = _88 + _89;
_91 = (frost$core$Int) {_90};
_92 = _91.value;
_93 = ((frost$core$UInt8*) _92);
*(&local1) = _93;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:353
_96 = *(&local1);
_97 = ((int64_t) _96);
_98 = (frost$core$Int) {_97};
frost$core$Int$wrapper* $tmp152;
$tmp152 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp152->value = _98;
_99 = ((frost$core$Object*) $tmp152);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Interpreter.frost:353:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
_102 = ($fn153) _99->$class->vtable[0];
_103 = _102(_99);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_103);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
_110 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_110);
_113 = _99;
frost$core$Frost$unref$frost$core$Object$Q(_113);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:354
_116 = &param0->llvmCodeGen;
_117 = *_116;
_118 = &param4->type;
_119 = *_118;
_120 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(_117, _119);
_121 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:355:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_124 = _120.value;
_125 = _121.value;
_126 = _124 == _125;
_127 = (frost$core$Bit) {_126};
_129 = _127.value;
if (_129) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:356
_132 = &param1->statements;
_133 = *_132;
_134 = _133;
_135 = param2.value;
_136 = *(&local1);
_137 = *_136;
// begin inline call to function frost.core.UInt8.get_asInt64():frost.core.Int64 from Interpreter.frost:356:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1184
_140 = _137.value;
_141 = ((int64_t) _140);
_142 = (frost$core$Int64) {_141};
_144 = ((frost$core$Int64$nullable) { _142, true });
frost$core$Object* $tmp154;
if (_144.nonnull) {
    frost$core$Int64$wrapper* $tmp155;
    $tmp155 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp155->value = ((frost$core$Int64) _144.value);
    $tmp154 = ((frost$core$Object*) $tmp155);
}
else {
    $tmp154 = NULL;
}
_145 = $tmp154;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:356:35
_147 = (frost$core$Int) {0u};
_148 = _135.value;
_149 = _147.value;
_150 = _148 >= _149;
_151 = (frost$core$Bit) {_150};
_152 = _151.value;
if (_152) goto block22; else goto block21;
block22:;
_154 = ((frost$collections$CollectionView*) _134);
ITable* $tmp156 = _154->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp156 = $tmp156->next;
}
_155 = $tmp156->methods[0];
_156 = _155(_154);
_157 = _135.value;
_158 = _156.value;
_159 = _157 < _158;
_160 = (frost$core$Bit) {_159};
_161 = _160.value;
if (_161) goto block20; else goto block21;
block21:;
_163 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s157, _163, &$s158);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_167 = &_134->data;
_168 = *_167;
_169 = frost$core$Int64$init$frost$core$Int(_135);
_170 = _169.value;
_171 = _145;
frost$core$Frost$ref$frost$core$Object$Q(_171);
_173 = _168[_170];
_174 = _173;
frost$core$Frost$unref$frost$core$Object$Q(_174);
_168[_170] = _145;
_178 = _145;
frost$core$Frost$unref$frost$core$Object$Q(_178);
goto block14;
block16:;
_181 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:358:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_184 = _120.value;
_185 = _181.value;
_186 = _184 == _185;
_187 = (frost$core$Bit) {_186};
_189 = _187.value;
if (_189) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:359
_192 = &param1->statements;
_193 = *_192;
_194 = _193;
_195 = param2.value;
_196 = *(&local1);
_197 = ((frost$core$UInt16*) _196);
_198 = *_197;
// begin inline call to function frost.core.UInt16.get_asInt64():frost.core.Int64 from Interpreter.frost:359:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1094
_201 = _198.value;
_202 = ((int64_t) _201);
_203 = (frost$core$Int64) {_202};
_205 = ((frost$core$Int64$nullable) { _203, true });
frost$core$Object* $tmp159;
if (_205.nonnull) {
    frost$core$Int64$wrapper* $tmp160;
    $tmp160 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp160->value = ((frost$core$Int64) _205.value);
    $tmp159 = ((frost$core$Object*) $tmp160);
}
else {
    $tmp159 = NULL;
}
_206 = $tmp159;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:359:35
_208 = (frost$core$Int) {0u};
_209 = _195.value;
_210 = _208.value;
_211 = _209 >= _210;
_212 = (frost$core$Bit) {_211};
_213 = _212.value;
if (_213) goto block30; else goto block29;
block30:;
_215 = ((frost$collections$CollectionView*) _194);
ITable* $tmp161 = _215->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp161 = $tmp161->next;
}
_216 = $tmp161->methods[0];
_217 = _216(_215);
_218 = _195.value;
_219 = _217.value;
_220 = _218 < _219;
_221 = (frost$core$Bit) {_220};
_222 = _221.value;
if (_222) goto block28; else goto block29;
block29:;
_224 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s162, _224, &$s163);
abort(); // unreachable
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_228 = &_194->data;
_229 = *_228;
_230 = frost$core$Int64$init$frost$core$Int(_195);
_231 = _230.value;
_232 = _206;
frost$core$Frost$ref$frost$core$Object$Q(_232);
_234 = _229[_231];
_235 = _234;
frost$core$Frost$unref$frost$core$Object$Q(_235);
_229[_231] = _206;
_239 = _206;
frost$core$Frost$unref$frost$core$Object$Q(_239);
goto block14;
block24:;
_242 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:361:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_245 = _120.value;
_246 = _242.value;
_247 = _245 == _246;
_248 = (frost$core$Bit) {_247};
_250 = _248.value;
if (_250) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:362
_253 = &param1->statements;
_254 = *_253;
_255 = _254;
_256 = param2.value;
_257 = *(&local1);
_258 = ((frost$core$UInt32*) _257);
_259 = *_258;
// begin inline call to function frost.core.UInt32.get_asInt64():frost.core.Int64 from Interpreter.frost:362:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:954
_262 = _259.value;
_263 = ((int64_t) _262);
_264 = (frost$core$Int64) {_263};
_266 = ((frost$core$Int64$nullable) { _264, true });
frost$core$Object* $tmp164;
if (_266.nonnull) {
    frost$core$Int64$wrapper* $tmp165;
    $tmp165 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp165->value = ((frost$core$Int64) _266.value);
    $tmp164 = ((frost$core$Object*) $tmp165);
}
else {
    $tmp164 = NULL;
}
_267 = $tmp164;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:362:35
_269 = (frost$core$Int) {0u};
_270 = _256.value;
_271 = _269.value;
_272 = _270 >= _271;
_273 = (frost$core$Bit) {_272};
_274 = _273.value;
if (_274) goto block38; else goto block37;
block38:;
_276 = ((frost$collections$CollectionView*) _255);
ITable* $tmp166 = _276->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
_277 = $tmp166->methods[0];
_278 = _277(_276);
_279 = _256.value;
_280 = _278.value;
_281 = _279 < _280;
_282 = (frost$core$Bit) {_281};
_283 = _282.value;
if (_283) goto block36; else goto block37;
block37:;
_285 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s167, _285, &$s168);
abort(); // unreachable
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_289 = &_255->data;
_290 = *_289;
_291 = frost$core$Int64$init$frost$core$Int(_256);
_292 = _291.value;
_293 = _267;
frost$core$Frost$ref$frost$core$Object$Q(_293);
_295 = _290[_292];
_296 = _295;
frost$core$Frost$unref$frost$core$Object$Q(_296);
_290[_292] = _267;
_300 = _267;
frost$core$Frost$unref$frost$core$Object$Q(_300);
goto block14;
block32:;
_303 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:364:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_306 = _120.value;
_307 = _303.value;
_308 = _306 == _307;
_309 = (frost$core$Bit) {_308};
_311 = _309.value;
if (_311) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:365
_314 = &param1->statements;
_315 = *_314;
_316 = _315;
_317 = param2.value;
_318 = *(&local1);
_319 = ((frost$core$UInt64*) _318);
_320 = *_319;
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Interpreter.frost:365:73
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_323 = _320.value;
_324 = ((int64_t) _323);
_325 = (frost$core$Int64) {_324};
_327 = ((frost$core$Int64$nullable) { _325, true });
frost$core$Object* $tmp169;
if (_327.nonnull) {
    frost$core$Int64$wrapper* $tmp170;
    $tmp170 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp170->value = ((frost$core$Int64) _327.value);
    $tmp169 = ((frost$core$Object*) $tmp170);
}
else {
    $tmp169 = NULL;
}
_328 = $tmp169;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:365:35
_330 = (frost$core$Int) {0u};
_331 = _317.value;
_332 = _330.value;
_333 = _331 >= _332;
_334 = (frost$core$Bit) {_333};
_335 = _334.value;
if (_335) goto block46; else goto block45;
block46:;
_337 = ((frost$collections$CollectionView*) _316);
ITable* $tmp171 = _337->$class->itable;
while ($tmp171->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp171 = $tmp171->next;
}
_338 = $tmp171->methods[0];
_339 = _338(_337);
_340 = _317.value;
_341 = _339.value;
_342 = _340 < _341;
_343 = (frost$core$Bit) {_342};
_344 = _343.value;
if (_344) goto block44; else goto block45;
block45:;
_346 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s172, _346, &$s173);
abort(); // unreachable
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_350 = &_316->data;
_351 = *_350;
_352 = frost$core$Int64$init$frost$core$Int(_317);
_353 = _352.value;
_354 = _328;
frost$core$Frost$ref$frost$core$Object$Q(_354);
_356 = _351[_353];
_357 = _356;
frost$core$Frost$unref$frost$core$Object$Q(_357);
_351[_353] = _328;
_361 = _328;
frost$core$Frost$unref$frost$core$Object$Q(_361);
goto block14;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:368
_365 = (frost$core$Int) {368u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s174, _365, &$s175);
abort(); // unreachable
block14:;
_368 = *(&local0);
_369 = ((frost$core$Object*) _368);
frost$core$Frost$unref$frost$core$Object$Q(_369);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return;

}
void org$frostlang$frostc$Interpreter$getFieldPointer$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$FieldDecl* param4) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
org$frostlang$frostc$LLVMCodeGenerator** _11;
org$frostlang$frostc$LLVMCodeGenerator* _12;
frost$core$Weak** _13;
frost$core$Weak* _14;
frost$core$Weak* _15;
frost$core$Bit* _20;
frost$core$Bit _21;
bool _23;
frost$core$Int _25;
frost$core$Object** _29;
frost$core$Object* _30;
frost$core$Object* _31;
frost$core$Object* _32;
org$frostlang$frostc$ClassDecl* _35;
org$frostlang$frostc$Type** _36;
org$frostlang$frostc$Type* _37;
frost$core$Int _38;
frost$core$Object* _39;
frost$core$Int* _42;
frost$core$Int _43;
frost$core$Int _44;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _49;
frost$core$Int _51;
frost$collections$Array** _56;
frost$collections$Array* _57;
frost$collections$Array* _58;
frost$core$Int _59;
$fn176 _60;
frost$core$Int64 _61;
frost$core$Int* _62;
frost$core$Int _63;
frost$core$Int64 _64;
int64_t _65;
int64_t _66;
int64_t _67;
frost$core$Int64 _68;
frost$core$Int64$nullable _69;
frost$core$Object* _70;
frost$core$Int _72;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
frost$collections$CollectionView* _79;
$fn177 _80;
frost$core$Int _81;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _86;
frost$core$Int _88;
frost$core$Object*** _92;
frost$core$Object** _93;
frost$core$Int64 _94;
int64_t _95;
frost$core$Object* _96;
frost$core$Object* _98;
frost$core$Object* _99;
frost$core$Object* _103;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:375
_1 = &param4->offset;
_2 = *_1;
_3 = (frost$core$Int) {0u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 < _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:377
_11 = &param0->llvmCodeGen;
_12 = *_11;
_13 = &param4->owner;
_14 = *_13;
_15 = _14;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:377:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_20 = &_15->_valid;
_21 = *_20;
_23 = _21.value;
if (_23) goto block5; else goto block6;
block6:;
_25 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s178, _25, &$s179);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_29 = &_15->value;
_30 = *_29;
_31 = _30;
_32 = _31;
frost$core$Frost$ref$frost$core$Object$Q(_32);
_35 = ((org$frostlang$frostc$ClassDecl*) _31);
_36 = &_35->type;
_37 = *_36;
_38 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(_12, _37);
_39 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_39);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:378
_42 = &param4->offset;
_43 = *_42;
_44 = (frost$core$Int) {0u};
_45 = _43.value;
_46 = _44.value;
_47 = _45 >= _46;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block7; else goto block8;
block8:;
_51 = (frost$core$Int) {378u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s180, _51);
abort(); // unreachable
block7:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:380
_56 = &param1->statements;
_57 = *_56;
_58 = _57;
_59 = param2.value;
_60 = ($fn181) param1->$class->vtable[2];
_61 = _60(param1, param3);
_62 = &param4->offset;
_63 = *_62;
_64 = frost$core$Int64$init$frost$core$Int(_63);
_65 = _61.value;
_66 = _64.value;
_67 = _65 + _66;
_68 = (frost$core$Int64) {_67};
_69 = ((frost$core$Int64$nullable) { _68, true });
frost$core$Object* $tmp182;
if (_69.nonnull) {
    frost$core$Int64$wrapper* $tmp183;
    $tmp183 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp183->value = ((frost$core$Int64) _69.value);
    $tmp182 = ((frost$core$Object*) $tmp183);
}
else {
    $tmp182 = NULL;
}
_70 = $tmp182;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:380:27
_72 = (frost$core$Int) {0u};
_73 = _59.value;
_74 = _72.value;
_75 = _73 >= _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block12; else goto block11;
block12:;
_79 = ((frost$collections$CollectionView*) _58);
ITable* $tmp184 = _79->$class->itable;
while ($tmp184->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp184 = $tmp184->next;
}
_80 = $tmp184->methods[0];
_81 = _80(_79);
_82 = _59.value;
_83 = _81.value;
_84 = _82 < _83;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block10; else goto block11;
block11:;
_88 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s185, _88, &$s186);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_92 = &_58->data;
_93 = *_92;
_94 = frost$core$Int64$init$frost$core$Int(_59);
_95 = _94.value;
_96 = _70;
frost$core$Frost$ref$frost$core$Object$Q(_96);
_98 = _93[_95];
_99 = _98;
frost$core$Frost$unref$frost$core$Object$Q(_99);
_93[_95] = _70;
_103 = _70;
frost$core$Frost$unref$frost$core$Object$Q(_103);
return;

}
void org$frostlang$frostc$Interpreter$binary$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$expression$Binary$Operator param4, org$frostlang$frostc$IR$Value* param5) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int64 local0;
frost$core$Int64 local1;
$fn187 _1;
frost$core$Int64 _2;
$fn188 _5;
frost$core$Int64 _6;
frost$core$Int _9;
frost$core$Int _10;
int64_t _13;
int64_t _14;
bool _15;
frost$core$Bit _16;
bool _18;
frost$core$Int64 _21;
frost$core$Int64 _22;
int64_t _25;
int64_t _26;
bool _27;
frost$core$Bit _28;
bool _30;
frost$collections$Array** _33;
frost$collections$Array* _34;
frost$collections$Array* _35;
frost$core$Int _36;
frost$core$Int64 _37;
frost$core$Int64$nullable _38;
frost$core$Object* _39;
frost$core$Int _41;
int64_t _42;
int64_t _43;
bool _44;
frost$core$Bit _45;
bool _46;
frost$collections$CollectionView* _48;
$fn189 _49;
frost$core$Int _50;
int64_t _51;
int64_t _52;
bool _53;
frost$core$Bit _54;
bool _55;
frost$core$Int _57;
frost$core$Object*** _61;
frost$core$Object** _62;
frost$core$Int64 _63;
int64_t _64;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Object* _68;
frost$core$Object* _72;
frost$collections$Array** _77;
frost$collections$Array* _78;
frost$collections$Array* _79;
frost$core$Int _80;
frost$core$Int64 _81;
frost$core$Int64$nullable _82;
frost$core$Object* _83;
frost$core$Int _85;
int64_t _86;
int64_t _87;
bool _88;
frost$core$Bit _89;
bool _90;
frost$collections$CollectionView* _92;
$fn190 _93;
frost$core$Int _94;
int64_t _95;
int64_t _96;
bool _97;
frost$core$Bit _98;
bool _99;
frost$core$Int _101;
frost$core$Object*** _105;
frost$core$Object** _106;
frost$core$Int64 _107;
int64_t _108;
frost$core$Object* _109;
frost$core$Object* _111;
frost$core$Object* _112;
frost$core$Object* _116;
frost$core$Int _120;
int64_t _123;
int64_t _124;
bool _125;
frost$core$Bit _126;
bool _128;
frost$collections$Array** _131;
frost$collections$Array* _132;
frost$collections$Array* _133;
frost$core$Int _134;
$fn191 _135;
frost$core$Int64 _136;
$fn192 _137;
frost$core$Int64 _138;
int64_t _139;
int64_t _140;
int64_t _141;
frost$core$Int64 _142;
frost$core$Int64$nullable _143;
frost$core$Object* _144;
frost$core$Int _146;
int64_t _147;
int64_t _148;
bool _149;
frost$core$Bit _150;
bool _151;
frost$collections$CollectionView* _153;
$fn193 _154;
frost$core$Int _155;
int64_t _156;
int64_t _157;
bool _158;
frost$core$Bit _159;
bool _160;
frost$core$Int _162;
frost$core$Object*** _166;
frost$core$Object** _167;
frost$core$Int64 _168;
int64_t _169;
frost$core$Object* _170;
frost$core$Object* _172;
frost$core$Object* _173;
frost$core$Object* _177;
frost$core$Int _181;
frost$core$Object* _182;
$fn194 _185;
frost$core$String* _186;
frost$core$String* _187;
frost$core$Object* _188;
frost$core$Object* _190;
frost$core$Object* _192;
frost$core$String* _195;
frost$core$Object* _197;
frost$core$Object* _199;
frost$core$Object* _201;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:385
_1 = ($fn195) param1->$class->vtable[2];
_2 = _1(param1, param3);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:386
_5 = ($fn196) param1->$class->vtable[2];
_6 = _5(param1, param5);
*(&local1) = _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:387
_9 = param4.$rawValue;
_10 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:388:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_13 = _9.value;
_14 = _10.value;
_15 = _13 == _14;
_16 = (frost$core$Bit) {_15};
_18 = _16.value;
if (_18) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:389
_21 = *(&local0);
_22 = *(&local1);
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Interpreter.frost:389:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
_25 = _21.value;
_26 = _22.value;
_27 = _25 == _26;
_28 = (frost$core$Bit) {_27};
_30 = _28.value;
if (_30) goto block5; else goto block7;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:390
_33 = &param1->statements;
_34 = *_33;
_35 = _34;
_36 = param2.value;
_37 = (frost$core$Int64) {1u};
_38 = ((frost$core$Int64$nullable) { _37, true });
frost$core$Object* $tmp197;
if (_38.nonnull) {
    frost$core$Int64$wrapper* $tmp198;
    $tmp198 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp198->value = ((frost$core$Int64) _38.value);
    $tmp197 = ((frost$core$Object*) $tmp198);
}
else {
    $tmp197 = NULL;
}
_39 = $tmp197;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:390:39
_41 = (frost$core$Int) {0u};
_42 = _36.value;
_43 = _41.value;
_44 = _42 >= _43;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block12; else goto block11;
block12:;
_48 = ((frost$collections$CollectionView*) _35);
ITable* $tmp199 = _48->$class->itable;
while ($tmp199->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp199 = $tmp199->next;
}
_49 = $tmp199->methods[0];
_50 = _49(_48);
_51 = _36.value;
_52 = _50.value;
_53 = _51 < _52;
_54 = (frost$core$Bit) {_53};
_55 = _54.value;
if (_55) goto block10; else goto block11;
block11:;
_57 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s200, _57, &$s201);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_61 = &_35->data;
_62 = *_61;
_63 = frost$core$Int64$init$frost$core$Int(_36);
_64 = _63.value;
_65 = _39;
frost$core$Frost$ref$frost$core$Object$Q(_65);
_67 = _62[_64];
_68 = _67;
frost$core$Frost$unref$frost$core$Object$Q(_68);
_62[_64] = _39;
_72 = _39;
frost$core$Frost$unref$frost$core$Object$Q(_72);
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:393
_77 = &param1->statements;
_78 = *_77;
_79 = _78;
_80 = param2.value;
_81 = (frost$core$Int64) {1u};
_82 = ((frost$core$Int64$nullable) { _81, true });
frost$core$Object* $tmp202;
if (_82.nonnull) {
    frost$core$Int64$wrapper* $tmp203;
    $tmp203 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp203->value = ((frost$core$Int64) _82.value);
    $tmp202 = ((frost$core$Object*) $tmp203);
}
else {
    $tmp202 = NULL;
}
_83 = $tmp202;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:393:39
_85 = (frost$core$Int) {0u};
_86 = _80.value;
_87 = _85.value;
_88 = _86 >= _87;
_89 = (frost$core$Bit) {_88};
_90 = _89.value;
if (_90) goto block16; else goto block15;
block16:;
_92 = ((frost$collections$CollectionView*) _79);
ITable* $tmp204 = _92->$class->itable;
while ($tmp204->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp204 = $tmp204->next;
}
_93 = $tmp204->methods[0];
_94 = _93(_92);
_95 = _80.value;
_96 = _94.value;
_97 = _95 < _96;
_98 = (frost$core$Bit) {_97};
_99 = _98.value;
if (_99) goto block14; else goto block15;
block15:;
_101 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s205, _101, &$s206);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_105 = &_79->data;
_106 = *_105;
_107 = frost$core$Int64$init$frost$core$Int(_80);
_108 = _107.value;
_109 = _83;
frost$core$Frost$ref$frost$core$Object$Q(_109);
_111 = _106[_108];
_112 = _111;
frost$core$Frost$unref$frost$core$Object$Q(_112);
_106[_108] = _83;
_116 = _83;
frost$core$Frost$unref$frost$core$Object$Q(_116);
goto block6;
block6:;
goto block1;
block3:;
_120 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:396:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_123 = _9.value;
_124 = _120.value;
_125 = _123 == _124;
_126 = (frost$core$Bit) {_125};
_128 = _126.value;
if (_128) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:397
_131 = &param1->statements;
_132 = *_131;
_133 = _132;
_134 = param2.value;
_135 = ($fn207) param1->$class->vtable[2];
_136 = _135(param1, param3);
_137 = ($fn208) param1->$class->vtable[2];
_138 = _137(param1, param5);
_139 = _136.value;
_140 = _138.value;
_141 = _139 - _140;
_142 = (frost$core$Int64) {_141};
_143 = ((frost$core$Int64$nullable) { _142, true });
frost$core$Object* $tmp209;
if (_143.nonnull) {
    frost$core$Int64$wrapper* $tmp210;
    $tmp210 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp210->value = ((frost$core$Int64) _143.value);
    $tmp209 = ((frost$core$Object*) $tmp210);
}
else {
    $tmp209 = NULL;
}
_144 = $tmp209;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:397:35
_146 = (frost$core$Int) {0u};
_147 = _134.value;
_148 = _146.value;
_149 = _147 >= _148;
_150 = (frost$core$Bit) {_149};
_151 = _150.value;
if (_151) goto block23; else goto block22;
block23:;
_153 = ((frost$collections$CollectionView*) _133);
ITable* $tmp211 = _153->$class->itable;
while ($tmp211->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp211 = $tmp211->next;
}
_154 = $tmp211->methods[0];
_155 = _154(_153);
_156 = _134.value;
_157 = _155.value;
_158 = _156 < _157;
_159 = (frost$core$Bit) {_158};
_160 = _159.value;
if (_160) goto block21; else goto block22;
block22:;
_162 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s212, _162, &$s213);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_166 = &_133->data;
_167 = *_166;
_168 = frost$core$Int64$init$frost$core$Int(_134);
_169 = _168.value;
_170 = _144;
frost$core$Frost$ref$frost$core$Object$Q(_170);
_172 = _167[_169];
_173 = _172;
frost$core$Frost$unref$frost$core$Object$Q(_173);
_167[_169] = _144;
_177 = _144;
frost$core$Frost$unref$frost$core$Object$Q(_177);
goto block1;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:400
_181 = (frost$core$Int) {400u};
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp214;
$tmp214 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Binary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp214->value = param4;
_182 = ((frost$core$Object*) $tmp214);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:400:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_185 = ($fn215) _182->$class->vtable[0];
_186 = _185(_182);
_187 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s216, _186);
_188 = ((frost$core$Object*) _187);
frost$core$Frost$ref$frost$core$Object$Q(_188);
_190 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_190);
_192 = ((frost$core$Object*) _186);
frost$core$Frost$unref$frost$core$Object$Q(_192);
_195 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_187, &$s217);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s218, _181, _195);
_197 = ((frost$core$Object*) _195);
frost$core$Frost$unref$frost$core$Object$Q(_197);
_199 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_199);
_201 = _182;
frost$core$Frost$unref$frost$core$Object$Q(_201);
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
org$frostlang$frostc$MethodDecl* local38 = NULL;
org$frostlang$frostc$FixedArray* local39 = NULL;
org$frostlang$frostc$IR$Value* local40 = NULL;
org$frostlang$frostc$IR$Value* local41 = NULL;
frost$core$Int64 local42;
frost$core$Int64 local43;
frost$collections$IdentityMap** _1;
frost$collections$IdentityMap* _2;
frost$collections$IdentityMap* _3;
frost$core$Object* _4;
frost$core$Object* _5;
org$frostlang$frostc$Interpreter$Code* _6;
frost$core$Object* _8;
org$frostlang$frostc$Interpreter$Code* _10;
frost$core$Object* _11;
frost$core$Object* _14;
org$frostlang$frostc$Interpreter$Code* _17;
bool _18;
frost$core$Bit _19;
bool _20;
org$frostlang$frostc$FixedArray** _23;
org$frostlang$frostc$FixedArray* _24;
bool _25;
frost$core$Bit _26;
bool _27;
frost$core$Weak** _30;
frost$core$Weak* _31;
frost$core$Weak* _32;
frost$core$Bit* _37;
frost$core$Bit _38;
bool _40;
frost$core$Int _42;
frost$core$Object** _46;
frost$core$Object* _47;
frost$core$Object* _48;
frost$core$Object* _49;
org$frostlang$frostc$Compiler* _52;
bool _53;
frost$core$Bit _54;
bool _55;
frost$core$Int _57;
org$frostlang$frostc$Compiler* _60;
frost$core$Weak** _61;
frost$core$Weak* _62;
frost$core$Weak* _63;
frost$core$Bit* _68;
frost$core$Bit _69;
bool _71;
frost$core$Int _73;
frost$core$Object** _77;
frost$core$Object* _78;
frost$core$Object* _79;
frost$core$Object* _80;
org$frostlang$frostc$ClassDecl* _83;
frost$core$Object* _85;
frost$core$Object* _87;
frost$collections$IdentityMap** _90;
frost$collections$IdentityMap* _91;
frost$collections$IdentityMap* _92;
frost$core$Object* _93;
frost$core$Object* _94;
org$frostlang$frostc$Interpreter$Code* _95;
frost$core$Object* _96;
org$frostlang$frostc$Interpreter$Code* _98;
frost$core$Object* _99;
frost$core$Object* _102;
org$frostlang$frostc$Interpreter$Code* _105;
bool _106;
frost$core$Bit _107;
bool _108;
frost$core$Int _110;
frost$collections$Stack** _116;
frost$collections$Stack* _117;
frost$collections$Stack* _118;
frost$core$Int _119;
frost$core$Int _121;
int64_t _122;
int64_t _123;
bool _124;
frost$core$Bit _125;
bool _126;
frost$collections$Array** _130;
frost$collections$Array* _131;
frost$collections$CollectionView* _132;
$fn219 _133;
frost$core$Int _134;
int64_t _136;
int64_t _137;
bool _138;
frost$core$Bit _139;
bool _140;
frost$core$Int _142;
frost$collections$Array** _146;
frost$collections$Array* _147;
frost$collections$CollectionView* _148;
$fn220 _149;
frost$core$Int _150;
int64_t _151;
int64_t _152;
bool _153;
frost$core$Bit _154;
bool _155;
frost$core$Int _157;
frost$collections$Array** _161;
frost$collections$Array* _162;
frost$collections$Array* _163;
frost$collections$Array** _164;
frost$collections$Array* _165;
frost$collections$CollectionView* _166;
$fn221 _167;
frost$core$Int _168;
frost$core$Int _169;
int64_t _170;
int64_t _171;
int64_t _172;
frost$core$Int _173;
int64_t _174;
int64_t _175;
int64_t _176;
frost$core$Int _177;
frost$core$Int _179;
int64_t _180;
int64_t _181;
bool _182;
frost$core$Bit _183;
bool _184;
frost$collections$CollectionView* _186;
$fn222 _187;
frost$core$Int _188;
int64_t _189;
int64_t _190;
bool _191;
frost$core$Bit _192;
bool _193;
frost$core$Int _195;
frost$core$Object*** _199;
frost$core$Object** _200;
frost$core$Int64 _201;
int64_t _202;
frost$core$Object* _203;
frost$core$Object* _204;
frost$core$Object* _207;
frost$core$Object* _208;
frost$core$Object* _210;
org$frostlang$frostc$Interpreter$Context* _213;
$fn223 _214;
frost$core$Int64 _215;
frost$core$Object* _216;
org$frostlang$frostc$Interpreter$Code* _218;
frost$core$Object* _219;
org$frostlang$frostc$Interpreter$Context* _225;
org$frostlang$frostc$Interpreter$Code* _226;
bool _227;
frost$core$Bit _228;
bool _229;
frost$core$Int _231;
org$frostlang$frostc$Interpreter$Code* _234;
frost$core$Object* _237;
org$frostlang$frostc$Interpreter$Context* _239;
frost$core$Object* _240;
frost$core$Object* _243;
frost$collections$Iterable* _246;
frost$collections$Iterable* _247;
$fn224 _248;
frost$collections$Iterator* _249;
frost$collections$Iterator* _250;
frost$collections$Iterator* _252;
$fn225 _253;
frost$core$Bit _254;
bool _255;
frost$collections$Iterator* _258;
$fn226 _259;
frost$core$Object* _260;
org$frostlang$frostc$IR$Value* _261;
frost$core$Object* _262;
org$frostlang$frostc$IR$Value* _264;
frost$core$Object* _265;
org$frostlang$frostc$Interpreter$Context* _269;
frost$collections$Array** _270;
frost$collections$Array* _271;
frost$collections$Array* _272;
frost$collections$Stack** _273;
frost$collections$Stack* _274;
frost$collections$Stack* _275;
frost$core$Int _276;
frost$core$Int _278;
int64_t _279;
int64_t _280;
bool _281;
frost$core$Bit _282;
bool _283;
frost$collections$Array** _287;
frost$collections$Array* _288;
frost$collections$CollectionView* _289;
$fn227 _290;
frost$core$Int _291;
int64_t _293;
int64_t _294;
bool _295;
frost$core$Bit _296;
bool _297;
frost$core$Int _299;
frost$collections$Array** _303;
frost$collections$Array* _304;
frost$collections$CollectionView* _305;
$fn228 _306;
frost$core$Int _307;
int64_t _308;
int64_t _309;
bool _310;
frost$core$Bit _311;
bool _312;
frost$core$Int _314;
frost$collections$Array** _318;
frost$collections$Array* _319;
frost$collections$Array* _320;
frost$collections$Array** _321;
frost$collections$Array* _322;
frost$collections$CollectionView* _323;
$fn229 _324;
frost$core$Int _325;
frost$core$Int _326;
int64_t _327;
int64_t _328;
int64_t _329;
frost$core$Int _330;
int64_t _331;
int64_t _332;
int64_t _333;
frost$core$Int _334;
frost$core$Int _336;
int64_t _337;
int64_t _338;
bool _339;
frost$core$Bit _340;
bool _341;
frost$collections$CollectionView* _343;
$fn230 _344;
frost$core$Int _345;
int64_t _346;
int64_t _347;
bool _348;
frost$core$Bit _349;
bool _350;
frost$core$Int _352;
frost$core$Object*** _356;
frost$core$Object** _357;
frost$core$Int64 _358;
int64_t _359;
frost$core$Object* _360;
frost$core$Object* _361;
frost$core$Object* _364;
frost$core$Object* _365;
frost$core$Object* _367;
org$frostlang$frostc$Interpreter$Context* _370;
org$frostlang$frostc$IR$Value* _371;
$fn231 _372;
frost$core$Int64 _373;
frost$core$Object* _374;
frost$core$Object* _376;
frost$core$Object* _378;
frost$core$Object* _380;
org$frostlang$frostc$IR$Value* _382;
frost$core$Object* _383;
frost$core$Object* _387;
frost$core$Object* _390;
$fn232 _393;
frost$core$String* _394;
frost$core$String* _395;
frost$core$Object* _396;
frost$core$Object* _398;
frost$core$Object* _400;
frost$core$String* _403;
org$frostlang$frostc$Interpreter$Context* _404;
frost$collections$Array** _405;
frost$collections$Array* _406;
frost$core$Object* _407;
$fn233 _410;
frost$core$String* _411;
frost$core$String* _412;
frost$core$Object* _413;
frost$core$Object* _415;
frost$core$Object* _417;
frost$core$String* _420;
frost$core$Object* _430;
frost$core$Object* _432;
frost$core$Object* _434;
frost$core$Object* _436;
frost$collections$Stack** _439;
frost$collections$Stack* _440;
frost$collections$Stack* _441;
org$frostlang$frostc$Interpreter$Context* _442;
frost$core$Object* _443;
frost$collections$Array** _446;
frost$collections$Array* _447;
frost$collections$Array* _448;
frost$core$Object* _449;
frost$core$Int _453;
frost$core$Int _456;
org$frostlang$frostc$Interpreter$Code* _461;
bool _462;
frost$core$Bit _463;
bool _464;
frost$core$Int _466;
org$frostlang$frostc$Interpreter$Code* _469;
frost$collections$Array** _470;
frost$collections$Array* _471;
frost$collections$Array* _472;
frost$core$Int _473;
frost$core$Int _475;
int64_t _476;
int64_t _477;
bool _478;
frost$core$Bit _479;
bool _480;
frost$collections$CollectionView* _482;
$fn234 _483;
frost$core$Int _484;
int64_t _485;
int64_t _486;
bool _487;
frost$core$Bit _488;
bool _489;
frost$core$Int _491;
frost$core$Object*** _495;
frost$core$Object** _496;
frost$core$Int64 _497;
int64_t _498;
frost$core$Object* _499;
frost$core$Object* _500;
frost$collections$Array* _503;
frost$collections$Array* _504;
frost$core$Int _505;
frost$core$Int _507;
int64_t _508;
int64_t _509;
bool _510;
frost$core$Bit _511;
bool _512;
frost$collections$CollectionView* _514;
$fn235 _515;
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
frost$core$Object* _532;
org$frostlang$frostc$IR$Statement$ID _535;
frost$core$Object* _537;
frost$core$Object* _539;
org$frostlang$frostc$Interpreter$Code* _542;
bool _543;
frost$core$Bit _544;
bool _545;
frost$core$Int _547;
org$frostlang$frostc$Interpreter$Code* _550;
frost$collections$Array** _551;
frost$collections$Array* _552;
frost$collections$Array* _553;
frost$core$Int _554;
frost$core$Int _556;
int64_t _557;
int64_t _558;
bool _559;
frost$core$Bit _560;
bool _561;
frost$collections$CollectionView* _563;
$fn236 _564;
frost$core$Int _565;
int64_t _566;
int64_t _567;
bool _568;
frost$core$Bit _569;
bool _570;
frost$core$Int _572;
frost$core$Object*** _576;
frost$core$Object** _577;
frost$core$Int64 _578;
int64_t _579;
frost$core$Object* _580;
frost$core$Object* _581;
frost$collections$Array* _584;
frost$collections$Array* _585;
frost$core$Int _586;
frost$core$Int _588;
int64_t _589;
int64_t _590;
bool _591;
frost$core$Bit _592;
bool _593;
frost$collections$CollectionView* _595;
$fn237 _596;
frost$core$Int _597;
int64_t _598;
int64_t _599;
bool _600;
frost$core$Bit _601;
bool _602;
frost$core$Int _604;
frost$core$Object*** _608;
frost$core$Object** _609;
frost$core$Int64 _610;
int64_t _611;
frost$core$Object* _612;
frost$core$Object* _613;
org$frostlang$frostc$IR$Statement* _616;
frost$core$Object* _618;
org$frostlang$frostc$IR$Statement* _620;
frost$core$Object* _621;
frost$core$Object* _624;
frost$core$Object* _626;
org$frostlang$frostc$IR$Statement$ID _629;
frost$core$Int _632;
frost$core$Object* _633;
$fn238 _636;
frost$core$String* _637;
frost$core$String* _638;
frost$core$Object* _639;
frost$core$Object* _641;
frost$core$Object* _643;
frost$core$String* _646;
frost$core$Object* _647;
frost$core$Object* _649;
frost$core$Object* _651;
frost$core$Object* _653;
frost$core$String* _656;
org$frostlang$frostc$IR$Statement* _657;
frost$core$Object* _658;
$fn239 _661;
frost$core$String* _662;
frost$core$String* _663;
frost$core$Object* _664;
frost$core$Object* _666;
frost$core$Object* _668;
frost$core$String* _671;
frost$core$Object* _681;
frost$core$Object* _683;
frost$core$Object* _685;
frost$core$Object* _687;
org$frostlang$frostc$IR$Statement* _690;
frost$core$Int* _691;
frost$core$Int _692;
frost$core$Int _693;
int64_t _696;
int64_t _697;
bool _698;
frost$core$Bit _699;
bool _701;
org$frostlang$frostc$Position* _703;
org$frostlang$frostc$Position _704;
org$frostlang$frostc$IR$Value** _705;
org$frostlang$frostc$IR$Value* _706;
frost$core$Object* _708;
org$frostlang$frostc$IR$Value* _710;
frost$core$Object* _711;
org$frostlang$frostc$expression$Binary$Operator* _714;
org$frostlang$frostc$expression$Binary$Operator _715;
org$frostlang$frostc$IR$Value** _717;
org$frostlang$frostc$IR$Value* _718;
frost$core$Object* _720;
org$frostlang$frostc$IR$Value* _722;
frost$core$Object* _723;
org$frostlang$frostc$Type** _726;
org$frostlang$frostc$Type* _727;
org$frostlang$frostc$Interpreter$Context* _729;
org$frostlang$frostc$IR$Statement$ID _730;
org$frostlang$frostc$IR$Value* _731;
org$frostlang$frostc$expression$Binary$Operator _732;
org$frostlang$frostc$IR$Value* _733;
$fn240 _734;
org$frostlang$frostc$IR$Value* _736;
frost$core$Object* _737;
org$frostlang$frostc$IR$Value* _740;
frost$core$Object* _741;
frost$core$Int _745;
int64_t _748;
int64_t _749;
bool _750;
frost$core$Bit _751;
bool _753;
org$frostlang$frostc$Position* _755;
org$frostlang$frostc$Position _756;
org$frostlang$frostc$IR$Block$ID* _757;
org$frostlang$frostc$IR$Block$ID _758;
org$frostlang$frostc$Interpreter$Code* _761;
bool _762;
frost$core$Bit _763;
bool _764;
frost$core$Int _766;
org$frostlang$frostc$Interpreter$Code* _769;
frost$collections$Array** _770;
frost$collections$Array* _771;
frost$collections$Array* _772;
org$frostlang$frostc$IR$Block$ID _773;
frost$core$Int _774;
frost$core$Int _776;
int64_t _777;
int64_t _778;
bool _779;
frost$core$Bit _780;
bool _781;
frost$collections$CollectionView* _783;
$fn241 _784;
frost$core$Int _785;
int64_t _786;
int64_t _787;
bool _788;
frost$core$Bit _789;
bool _790;
frost$core$Int _792;
frost$core$Object*** _796;
frost$core$Object** _797;
frost$core$Int64 _798;
int64_t _799;
frost$core$Object* _800;
frost$core$Object* _801;
frost$core$Int _804;
frost$core$Object* _806;
frost$core$Int _809;
org$frostlang$frostc$IR$Statement* _812;
frost$core$Object* _813;
frost$core$Int _817;
int64_t _820;
int64_t _821;
bool _822;
frost$core$Bit _823;
bool _825;
org$frostlang$frostc$Position* _827;
org$frostlang$frostc$Position _828;
org$frostlang$frostc$IR$Value** _829;
org$frostlang$frostc$IR$Value* _830;
frost$core$Object* _832;
org$frostlang$frostc$IR$Value* _834;
frost$core$Object* _835;
org$frostlang$frostc$Type** _838;
org$frostlang$frostc$Type* _839;
frost$core$Object* _841;
org$frostlang$frostc$Type* _843;
frost$core$Object* _844;
frost$core$Bit* _847;
frost$core$Bit _848;
org$frostlang$frostc$Interpreter$Context* _850;
org$frostlang$frostc$IR$Statement$ID _851;
org$frostlang$frostc$IR$Value* _852;
org$frostlang$frostc$Type* _853;
$fn242 _854;
org$frostlang$frostc$Type* _856;
frost$core$Object* _857;
org$frostlang$frostc$IR$Value* _860;
frost$core$Object* _861;
frost$core$Int _865;
int64_t _868;
int64_t _869;
bool _870;
frost$core$Bit _871;
bool _873;
frost$core$Int _876;
int64_t _879;
int64_t _880;
bool _881;
frost$core$Bit _882;
bool _884;
org$frostlang$frostc$Position* _886;
org$frostlang$frostc$Position _887;
org$frostlang$frostc$IR$Value** _888;
org$frostlang$frostc$IR$Value* _889;
frost$core$Object* _891;
org$frostlang$frostc$IR$Value* _893;
frost$core$Object* _894;
org$frostlang$frostc$IR$Block$ID* _897;
org$frostlang$frostc$IR$Block$ID _898;
org$frostlang$frostc$IR$Block$ID* _900;
org$frostlang$frostc$IR$Block$ID _901;
org$frostlang$frostc$Interpreter$Context* _904;
org$frostlang$frostc$IR$Value* _905;
$fn243 _906;
frost$core$Int64 _907;
frost$core$Int64 _908;
int64_t _909;
int64_t _910;
bool _911;
frost$core$Bit _912;
bool _913;
org$frostlang$frostc$Interpreter$Code* _916;
bool _917;
frost$core$Bit _918;
bool _919;
frost$core$Int _921;
org$frostlang$frostc$Interpreter$Code* _924;
frost$collections$Array** _925;
frost$collections$Array* _926;
frost$collections$Array* _927;
org$frostlang$frostc$IR$Block$ID _928;
frost$core$Int _929;
frost$core$Int _931;
int64_t _932;
int64_t _933;
bool _934;
frost$core$Bit _935;
bool _936;
frost$collections$CollectionView* _938;
$fn244 _939;
frost$core$Int _940;
int64_t _941;
int64_t _942;
bool _943;
frost$core$Bit _944;
bool _945;
frost$core$Int _947;
frost$core$Object*** _951;
frost$core$Object** _952;
frost$core$Int64 _953;
int64_t _954;
frost$core$Object* _955;
frost$core$Object* _956;
frost$core$Int _959;
frost$core$Object* _961;
org$frostlang$frostc$Interpreter$Code* _966;
bool _967;
frost$core$Bit _968;
bool _969;
frost$core$Int _971;
org$frostlang$frostc$Interpreter$Code* _974;
frost$collections$Array** _975;
frost$collections$Array* _976;
frost$collections$Array* _977;
org$frostlang$frostc$IR$Block$ID _978;
frost$core$Int _979;
frost$core$Int _981;
int64_t _982;
int64_t _983;
bool _984;
frost$core$Bit _985;
bool _986;
frost$collections$CollectionView* _988;
$fn245 _989;
frost$core$Int _990;
int64_t _991;
int64_t _992;
bool _993;
frost$core$Bit _994;
bool _995;
frost$core$Int _997;
frost$core$Object*** _1001;
frost$core$Object** _1002;
frost$core$Int64 _1003;
int64_t _1004;
frost$core$Object* _1005;
frost$core$Object* _1006;
frost$core$Int _1009;
frost$core$Object* _1011;
frost$core$Int _1015;
org$frostlang$frostc$IR$Value* _1018;
frost$core$Object* _1019;
org$frostlang$frostc$IR$Statement* _1022;
frost$core$Object* _1023;
frost$core$Int _1027;
int64_t _1030;
int64_t _1031;
bool _1032;
frost$core$Bit _1033;
bool _1035;
org$frostlang$frostc$Position* _1037;
org$frostlang$frostc$Position _1038;
org$frostlang$frostc$ClassDecl** _1039;
org$frostlang$frostc$ClassDecl* _1040;
frost$core$Object* _1042;
org$frostlang$frostc$ClassDecl* _1044;
frost$core$Object* _1045;
org$frostlang$frostc$LLVMCodeGenerator** _1049;
org$frostlang$frostc$LLVMCodeGenerator* _1050;
org$frostlang$frostc$ClassDecl* _1051;
org$frostlang$frostc$Type** _1052;
org$frostlang$frostc$Type* _1053;
frost$core$Int _1054;
frost$core$Int64 _1055;
int64_t _1056;
frost$core$UInt8* _1057;
frost$core$UInt8* _1060;
org$frostlang$frostc$ClassDecl** _1061;
org$frostlang$frostc$ClassDecl* _1062;
frost$core$Object* _1063;
org$frostlang$frostc$ClassDecl* _1065;
frost$core$Object* _1066;
frost$core$UInt8* _1070;
frost$core$Int _1071;
frost$core$Int64 _1072;
int64_t _1073;
frost$core$UInt8* _1074;
frost$core$Int32* _1075;
frost$core$Int32 _1076;
org$frostlang$frostc$Interpreter$Context* _1079;
frost$collections$Array** _1080;
frost$collections$Array* _1081;
frost$collections$Array* _1082;
org$frostlang$frostc$IR$Statement$ID _1083;
frost$core$Int _1084;
frost$core$UInt8* _1085;
int64_t _1086;
frost$core$Int _1087;
int64_t _1090;
int64_t _1091;
frost$core$Int64 _1092;
frost$core$Int64$nullable _1094;
frost$core$Object* _1095;
frost$core$Int _1097;
int64_t _1098;
int64_t _1099;
bool _1100;
frost$core$Bit _1101;
bool _1102;
frost$collections$CollectionView* _1104;
$fn246 _1105;
frost$core$Int _1106;
int64_t _1107;
int64_t _1108;
bool _1109;
frost$core$Bit _1110;
bool _1111;
frost$core$Int _1113;
frost$core$Object*** _1117;
frost$core$Object** _1118;
frost$core$Int64 _1119;
int64_t _1120;
frost$core$Object* _1121;
frost$core$Object* _1123;
frost$core$Object* _1124;
frost$core$Object* _1128;
org$frostlang$frostc$ClassDecl* _1130;
frost$core$Object* _1131;
frost$core$Int _1135;
int64_t _1138;
int64_t _1139;
bool _1140;
frost$core$Bit _1141;
bool _1143;
org$frostlang$frostc$Position* _1145;
org$frostlang$frostc$Position _1146;
org$frostlang$frostc$ClassDecl** _1147;
org$frostlang$frostc$ClassDecl* _1148;
frost$core$Object* _1150;
org$frostlang$frostc$ClassDecl* _1152;
frost$core$Object* _1153;
org$frostlang$frostc$FixedArray** _1156;
org$frostlang$frostc$FixedArray* _1157;
frost$core$Object* _1159;
org$frostlang$frostc$FixedArray* _1161;
frost$core$Object* _1162;
org$frostlang$frostc$Interpreter$Context* _1166;
org$frostlang$frostc$IR$Statement$ID _1167;
org$frostlang$frostc$ClassDecl* _1168;
org$frostlang$frostc$FixedArray* _1169;
$fn247 _1170;
org$frostlang$frostc$FixedArray* _1172;
frost$core$Object* _1173;
org$frostlang$frostc$ClassDecl* _1176;
frost$core$Object* _1177;
frost$core$Int _1181;
int64_t _1184;
int64_t _1185;
bool _1186;
frost$core$Bit _1187;
bool _1189;
org$frostlang$frostc$Position* _1191;
org$frostlang$frostc$Position _1192;
org$frostlang$frostc$IR$Value** _1193;
org$frostlang$frostc$IR$Value* _1194;
frost$core$Object* _1196;
org$frostlang$frostc$IR$Value* _1198;
frost$core$Object* _1199;
org$frostlang$frostc$FixedArray** _1202;
org$frostlang$frostc$FixedArray* _1203;
frost$core$Object* _1205;
org$frostlang$frostc$FixedArray* _1207;
frost$core$Object* _1208;
org$frostlang$frostc$Interpreter$Context* _1212;
org$frostlang$frostc$IR$Value* _1213;
$fn248 _1214;
frost$core$Int64 _1215;
int64_t _1218;
int64_t _1219;
frost$core$Int _1220;
int64_t _1222;
frost$core$UInt8* _1223;
org$frostlang$frostc$MethodDecl* _1224;
frost$core$Object* _1226;
org$frostlang$frostc$MethodDecl* _1228;
frost$core$Object* _1229;
org$frostlang$frostc$Interpreter$Context* _1233;
frost$collections$Array** _1234;
frost$collections$Array* _1235;
frost$collections$Array* _1236;
org$frostlang$frostc$IR$Statement$ID _1237;
frost$core$Int _1238;
org$frostlang$frostc$MethodDecl* _1239;
org$frostlang$frostc$FixedArray* _1240;
$fn249 _1241;
frost$core$Int64 _1242;
frost$core$Int64$nullable _1243;
frost$core$Object* _1244;
frost$core$Int _1246;
int64_t _1247;
int64_t _1248;
bool _1249;
frost$core$Bit _1250;
bool _1251;
frost$collections$CollectionView* _1253;
$fn250 _1254;
frost$core$Int _1255;
int64_t _1256;
int64_t _1257;
bool _1258;
frost$core$Bit _1259;
bool _1260;
frost$core$Int _1262;
frost$core$Object*** _1266;
frost$core$Object** _1267;
frost$core$Int64 _1268;
int64_t _1269;
frost$core$Object* _1270;
frost$core$Object* _1272;
frost$core$Object* _1273;
frost$core$Object* _1277;
org$frostlang$frostc$MethodDecl* _1279;
frost$core$Object* _1280;
org$frostlang$frostc$FixedArray* _1283;
frost$core$Object* _1284;
org$frostlang$frostc$IR$Value* _1287;
frost$core$Object* _1288;
frost$core$Int _1292;
int64_t _1295;
int64_t _1296;
bool _1297;
frost$core$Bit _1298;
bool _1300;
org$frostlang$frostc$Position* _1302;
org$frostlang$frostc$Position _1303;
org$frostlang$frostc$IR$Value** _1304;
org$frostlang$frostc$IR$Value* _1305;
frost$core$Object* _1307;
org$frostlang$frostc$IR$Value* _1309;
frost$core$Object* _1310;
org$frostlang$frostc$FieldDecl** _1313;
org$frostlang$frostc$FieldDecl* _1314;
frost$core$Object* _1316;
org$frostlang$frostc$FieldDecl* _1318;
frost$core$Object* _1319;
org$frostlang$frostc$Interpreter$Context* _1323;
org$frostlang$frostc$IR$Statement$ID _1324;
org$frostlang$frostc$IR$Value* _1325;
org$frostlang$frostc$FieldDecl* _1326;
$fn251 _1327;
org$frostlang$frostc$FieldDecl* _1329;
frost$core$Object* _1330;
org$frostlang$frostc$IR$Value* _1333;
frost$core$Object* _1334;
frost$core$Int _1338;
int64_t _1341;
int64_t _1342;
bool _1343;
frost$core$Bit _1344;
bool _1346;
org$frostlang$frostc$Position* _1348;
org$frostlang$frostc$Position _1349;
org$frostlang$frostc$IR$Value** _1350;
org$frostlang$frostc$IR$Value* _1351;
frost$core$Object* _1353;
org$frostlang$frostc$IR$Value* _1355;
frost$core$Object* _1356;
org$frostlang$frostc$FieldDecl** _1359;
org$frostlang$frostc$FieldDecl* _1360;
frost$core$Object* _1362;
org$frostlang$frostc$FieldDecl* _1364;
frost$core$Object* _1365;
org$frostlang$frostc$Interpreter$Context* _1369;
org$frostlang$frostc$IR$Statement$ID _1370;
org$frostlang$frostc$IR$Value* _1371;
org$frostlang$frostc$FieldDecl* _1372;
$fn252 _1373;
org$frostlang$frostc$FieldDecl* _1375;
frost$core$Object* _1376;
org$frostlang$frostc$IR$Value* _1379;
frost$core$Object* _1380;
frost$core$Int _1384;
int64_t _1387;
int64_t _1388;
bool _1389;
frost$core$Bit _1390;
bool _1392;
org$frostlang$frostc$Position* _1394;
org$frostlang$frostc$Position _1395;
org$frostlang$frostc$IR$Value** _1396;
org$frostlang$frostc$IR$Value* _1397;
frost$core$Object* _1399;
org$frostlang$frostc$IR$Value* _1401;
frost$core$Object* _1402;
frost$core$Int* _1405;
frost$core$Int _1406;
org$frostlang$frostc$Type** _1408;
org$frostlang$frostc$Type* _1409;
org$frostlang$frostc$Interpreter$Context* _1411;
org$frostlang$frostc$IR$Value* _1412;
$fn253 _1413;
frost$core$Int64 _1414;
int64_t _1417;
int64_t _1418;
frost$core$Int _1419;
int64_t _1421;
frost$core$Int* _1422;
frost$core$Int* _1425;
frost$core$Int _1426;
int64_t _1427;
frost$core$UInt8* _1428;
org$frostlang$frostc$ClassDecl* _1429;
frost$core$Object* _1431;
org$frostlang$frostc$ClassDecl* _1433;
frost$core$Object* _1434;
frost$core$Weak** _1438;
frost$core$Weak* _1439;
frost$core$Weak* _1440;
frost$core$Bit* _1445;
frost$core$Bit _1446;
bool _1448;
frost$core$Int _1450;
frost$core$Object** _1454;
frost$core$Object* _1455;
frost$core$Object* _1456;
frost$core$Object* _1457;
org$frostlang$frostc$Compiler* _1460;
bool _1461;
frost$core$Bit _1462;
bool _1463;
frost$core$Int _1465;
org$frostlang$frostc$Compiler* _1468;
org$frostlang$frostc$ClassDecl* _1469;
frost$collections$ListView* _1470;
frost$collections$ListView* _1471;
frost$core$Int _1472;
$fn254 _1473;
frost$core$Object* _1474;
org$frostlang$frostc$MethodDecl* _1475;
frost$core$Object* _1477;
org$frostlang$frostc$MethodDecl* _1479;
frost$core$Object* _1480;
frost$core$Object* _1483;
frost$core$Object* _1485;
frost$core$Object* _1487;
org$frostlang$frostc$Interpreter$Context* _1490;
frost$collections$Array** _1491;
frost$collections$Array* _1492;
frost$collections$Array* _1493;
org$frostlang$frostc$IR$Statement$ID _1494;
frost$core$Int _1495;
org$frostlang$frostc$MethodDecl* _1496;
frost$core$Object* _1497;
frost$core$Int _1498;
frost$core$Int64 _1499;
frost$core$Int64$nullable _1500;
frost$core$Object* _1501;
frost$core$Int _1503;
int64_t _1504;
int64_t _1505;
bool _1506;
frost$core$Bit _1507;
bool _1508;
frost$collections$CollectionView* _1510;
$fn255 _1511;
frost$core$Int _1512;
int64_t _1513;
int64_t _1514;
bool _1515;
frost$core$Bit _1516;
bool _1517;
frost$core$Int _1519;
frost$core$Object*** _1523;
frost$core$Object** _1524;
frost$core$Int64 _1525;
int64_t _1526;
frost$core$Object* _1527;
frost$core$Object* _1529;
frost$core$Object* _1530;
frost$core$Object* _1534;
org$frostlang$frostc$MethodDecl* _1536;
frost$core$Object* _1537;
org$frostlang$frostc$ClassDecl* _1540;
frost$core$Object* _1541;
org$frostlang$frostc$IR$Value* _1544;
frost$core$Object* _1545;
frost$core$Int _1549;
int64_t _1552;
int64_t _1553;
bool _1554;
frost$core$Bit _1555;
bool _1557;
org$frostlang$frostc$Position* _1559;
org$frostlang$frostc$Position _1560;
org$frostlang$frostc$IR$Value** _1561;
org$frostlang$frostc$IR$Value* _1562;
frost$core$Object* _1564;
org$frostlang$frostc$IR$Value* _1566;
frost$core$Object* _1567;
org$frostlang$frostc$Interpreter$Context* _1571;
org$frostlang$frostc$IR$Value* _1572;
$fn256 _1573;
frost$core$Int64 _1574;
int64_t _1577;
int64_t _1578;
frost$core$Int _1579;
int64_t _1581;
frost$core$Int* _1582;
org$frostlang$frostc$Interpreter$Context* _1585;
frost$collections$Array** _1586;
frost$collections$Array* _1587;
frost$collections$Array* _1588;
org$frostlang$frostc$IR$Statement$ID _1589;
frost$core$Int _1590;
frost$core$Int* _1591;
frost$core$Int _1592;
frost$core$Int64 _1593;
frost$core$Int64$nullable _1594;
frost$core$Object* _1595;
frost$core$Int _1597;
int64_t _1598;
int64_t _1599;
bool _1600;
frost$core$Bit _1601;
bool _1602;
frost$collections$CollectionView* _1604;
$fn257 _1605;
frost$core$Int _1606;
int64_t _1607;
int64_t _1608;
bool _1609;
frost$core$Bit _1610;
bool _1611;
frost$core$Int _1613;
frost$core$Object*** _1617;
frost$core$Object** _1618;
frost$core$Int64 _1619;
int64_t _1620;
frost$core$Object* _1621;
frost$core$Object* _1623;
frost$core$Object* _1624;
frost$core$Object* _1628;
org$frostlang$frostc$IR$Value* _1630;
frost$core$Object* _1631;
frost$core$Int _1635;
int64_t _1638;
int64_t _1639;
bool _1640;
frost$core$Bit _1641;
bool _1643;
org$frostlang$frostc$Position* _1645;
org$frostlang$frostc$Position _1646;
org$frostlang$frostc$IR$Value** _1647;
org$frostlang$frostc$IR$Value* _1648;
frost$core$Object* _1650;
org$frostlang$frostc$IR$Value* _1652;
frost$core$Object* _1653;
org$frostlang$frostc$Type** _1656;
org$frostlang$frostc$Type* _1657;
frost$core$Object* _1659;
org$frostlang$frostc$Type* _1661;
frost$core$Object* _1662;
org$frostlang$frostc$Interpreter$Context* _1666;
frost$collections$Array** _1667;
frost$collections$Array* _1668;
frost$collections$Array* _1669;
org$frostlang$frostc$IR$Statement$ID _1670;
frost$core$Int _1671;
org$frostlang$frostc$Interpreter$Context* _1672;
org$frostlang$frostc$IR$Value* _1673;
$fn258 _1674;
frost$core$Int64 _1675;
int64_t _1678;
int64_t _1679;
frost$core$Int _1680;
org$frostlang$frostc$LLVMCodeGenerator** _1682;
org$frostlang$frostc$LLVMCodeGenerator* _1683;
org$frostlang$frostc$Type* _1684;
frost$core$Int _1685;
int64_t _1686;
int64_t _1687;
int64_t _1688;
frost$core$Int _1689;
frost$core$Int64 _1690;
int64_t _1691;
frost$core$UInt8* _1692;
int64_t _1693;
frost$core$Int _1694;
frost$core$Int64 _1695;
frost$core$Int64$nullable _1696;
frost$core$Object* _1697;
frost$core$Int _1699;
int64_t _1700;
int64_t _1701;
bool _1702;
frost$core$Bit _1703;
bool _1704;
frost$collections$CollectionView* _1706;
$fn259 _1707;
frost$core$Int _1708;
int64_t _1709;
int64_t _1710;
bool _1711;
frost$core$Bit _1712;
bool _1713;
frost$core$Int _1715;
frost$core$Object*** _1719;
frost$core$Object** _1720;
frost$core$Int64 _1721;
int64_t _1722;
frost$core$Object* _1723;
frost$core$Object* _1725;
frost$core$Object* _1726;
frost$core$Object* _1730;
org$frostlang$frostc$Type* _1732;
frost$core$Object* _1733;
org$frostlang$frostc$IR$Value* _1736;
frost$core$Object* _1737;
frost$core$Int _1741;
int64_t _1744;
int64_t _1745;
bool _1746;
frost$core$Bit _1747;
bool _1749;
org$frostlang$frostc$Position* _1751;
org$frostlang$frostc$Position _1752;
org$frostlang$frostc$IR$Value** _1753;
org$frostlang$frostc$IR$Value* _1754;
frost$core$Object* _1756;
org$frostlang$frostc$IR$Value* _1758;
frost$core$Object* _1759;
org$frostlang$frostc$Interpreter$Context* _1763;
org$frostlang$frostc$IR$Value* _1764;
$fn260 _1765;
frost$core$Int64 _1766;
int64_t _1769;
int64_t _1770;
frost$core$Int _1771;
int64_t _1773;
frost$core$Int* _1774;
org$frostlang$frostc$IR$Value* _1776;
frost$core$Object* _1777;
frost$core$Int _1781;
int64_t _1784;
int64_t _1785;
bool _1786;
frost$core$Bit _1787;
bool _1789;
org$frostlang$frostc$Position* _1791;
org$frostlang$frostc$Position _1792;
org$frostlang$frostc$IR$Value** _1793;
org$frostlang$frostc$IR$Value* _1794;
frost$core$Object* _1796;
org$frostlang$frostc$IR$Value* _1798;
frost$core$Object* _1799;
frost$collections$Stack** _1803;
frost$collections$Stack* _1804;
frost$collections$Stack* _1805;
frost$core$Object* _1806;
org$frostlang$frostc$Interpreter$Context* _1807;
frost$core$Object* _1808;
org$frostlang$frostc$IR$Value* _1811;
bool _1812;
frost$core$Bit _1813;
bool _1814;
org$frostlang$frostc$Interpreter$Context* _1817;
org$frostlang$frostc$IR$Value* _1818;
bool _1819;
frost$core$Bit _1820;
bool _1821;
frost$core$Int _1823;
org$frostlang$frostc$IR$Value* _1826;
$fn261 _1827;
frost$core$Int64 _1828;
org$frostlang$frostc$IR$Value* _1829;
frost$core$Object* _1830;
org$frostlang$frostc$IR$Statement* _1833;
frost$core$Object* _1834;
org$frostlang$frostc$Interpreter$Context* _1837;
frost$core$Object* _1838;
org$frostlang$frostc$Interpreter$Code* _1841;
frost$core$Object* _1842;
frost$core$Int64 _1847;
org$frostlang$frostc$IR$Value* _1848;
frost$core$Object* _1849;
org$frostlang$frostc$IR$Statement* _1852;
frost$core$Object* _1853;
org$frostlang$frostc$Interpreter$Context* _1856;
frost$core$Object* _1857;
org$frostlang$frostc$Interpreter$Code* _1860;
frost$core$Object* _1861;
frost$core$Int _1865;
int64_t _1868;
int64_t _1869;
bool _1870;
frost$core$Bit _1871;
bool _1873;
org$frostlang$frostc$Position* _1875;
org$frostlang$frostc$Position _1876;
org$frostlang$frostc$MethodDecl** _1877;
org$frostlang$frostc$MethodDecl* _1878;
frost$core$Object* _1880;
org$frostlang$frostc$MethodDecl* _1882;
frost$core$Object* _1883;
org$frostlang$frostc$FixedArray** _1886;
org$frostlang$frostc$FixedArray* _1887;
frost$core$Object* _1889;
org$frostlang$frostc$FixedArray* _1891;
frost$core$Object* _1892;
org$frostlang$frostc$Interpreter$Context* _1896;
frost$collections$Array** _1897;
frost$collections$Array* _1898;
frost$collections$Array* _1899;
org$frostlang$frostc$IR$Statement$ID _1900;
frost$core$Int _1901;
org$frostlang$frostc$MethodDecl* _1902;
org$frostlang$frostc$FixedArray* _1903;
$fn262 _1904;
frost$core$Int64 _1905;
frost$core$Int64$nullable _1906;
frost$core$Object* _1907;
frost$core$Int _1909;
int64_t _1910;
int64_t _1911;
bool _1912;
frost$core$Bit _1913;
bool _1914;
frost$collections$CollectionView* _1916;
$fn263 _1917;
frost$core$Int _1918;
int64_t _1919;
int64_t _1920;
bool _1921;
frost$core$Bit _1922;
bool _1923;
frost$core$Int _1925;
frost$core$Object*** _1929;
frost$core$Object** _1930;
frost$core$Int64 _1931;
int64_t _1932;
frost$core$Object* _1933;
frost$core$Object* _1935;
frost$core$Object* _1936;
frost$core$Object* _1940;
org$frostlang$frostc$FixedArray* _1942;
frost$core$Object* _1943;
org$frostlang$frostc$MethodDecl* _1946;
frost$core$Object* _1947;
frost$core$Int _1951;
int64_t _1954;
int64_t _1955;
bool _1956;
frost$core$Bit _1957;
bool _1959;
org$frostlang$frostc$Position* _1961;
org$frostlang$frostc$Position _1962;
org$frostlang$frostc$IR$Value** _1963;
org$frostlang$frostc$IR$Value* _1964;
frost$core$Object* _1966;
org$frostlang$frostc$IR$Value* _1968;
frost$core$Object* _1969;
org$frostlang$frostc$IR$Value** _1972;
org$frostlang$frostc$IR$Value* _1973;
frost$core$Object* _1975;
org$frostlang$frostc$IR$Value* _1977;
frost$core$Object* _1978;
org$frostlang$frostc$Interpreter$Context* _1982;
org$frostlang$frostc$IR$Value* _1983;
$fn264 _1984;
frost$core$Int64 _1985;
org$frostlang$frostc$Interpreter$Context* _1988;
org$frostlang$frostc$IR$Value* _1989;
$fn265 _1990;
frost$core$Int64 _1991;
frost$core$Int64 _1994;
frost$core$Object* _1995;
$fn266 _1998;
frost$core$String* _1999;
frost$core$String* _2000;
frost$core$Object* _2001;
frost$core$Object* _2003;
frost$core$Object* _2005;
frost$core$String* _2008;
frost$core$Int64 _2009;
frost$core$Formattable* _2010;
$fn267 _2011;
frost$core$String* _2012;
frost$core$String* _2013;
frost$core$String* _2014;
frost$core$Object* _2024;
frost$core$Object* _2026;
frost$core$Object* _2028;
frost$core$Object* _2030;
frost$core$Object* _2032;
frost$core$Object* _2034;
frost$core$Object* _2036;
frost$core$Int64 _2039;
int64_t _2042;
int64_t _2043;
frost$core$Int _2044;
int64_t _2046;
frost$core$Int64* _2047;
frost$core$Int64 _2048;
org$frostlang$frostc$IR$Value* _2050;
frost$core$Object* _2051;
org$frostlang$frostc$IR$Value* _2054;
frost$core$Object* _2055;
frost$core$Int _2060;
org$frostlang$frostc$IR$Statement* _2061;
frost$core$Object* _2062;
$fn268 _2065;
frost$core$String* _2066;
frost$core$String* _2067;
frost$core$Object* _2068;
frost$core$Object* _2070;
frost$core$Object* _2072;
frost$core$String* _2075;
frost$core$Object* _2077;
frost$core$Object* _2079;
frost$core$Int _2083;
frost$core$Int _2084;
int64_t _2085;
int64_t _2086;
int64_t _2087;
frost$core$Int _2088;
org$frostlang$frostc$IR$Statement* _2090;
frost$core$Object* _2091;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:406
_1 = &param0->methodCode;
_2 = *_1;
_3 = _2;
_4 = ((frost$core$Object*) param1);
_5 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_3, _4);
_6 = ((org$frostlang$frostc$Interpreter$Code*) _5);
*(&local0) = ((org$frostlang$frostc$Interpreter$Code*) NULL);
_8 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local0);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local0) = _6;
_14 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:407
_17 = *(&local0);
_18 = _17 == NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:408
_23 = &param1->body;
_24 = *_23;
_25 = _24 != NULL;
_26 = (frost$core$Bit) {_25};
_27 = _26.value;
if (_27) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:409
_30 = &param0->compiler;
_31 = *_30;
_32 = _31;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:409:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_37 = &_32->_valid;
_38 = *_37;
_40 = _38.value;
if (_40) goto block8; else goto block9;
block9:;
_42 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s269, _42, &$s270);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_46 = &_32->value;
_47 = *_46;
_48 = _47;
_49 = _48;
frost$core$Frost$ref$frost$core$Object$Q(_49);
_52 = ((org$frostlang$frostc$Compiler*) _48);
_53 = _52 != NULL;
_54 = (frost$core$Bit) {_53};
_55 = _54.value;
if (_55) goto block10; else goto block11;
block11:;
_57 = (frost$core$Int) {409u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s271, _57, &$s272);
abort(); // unreachable
block10:;
_60 = _52;
_61 = &param1->owner;
_62 = *_61;
_63 = _62;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:409:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_68 = &_63->_valid;
_69 = *_68;
_71 = _69.value;
if (_71) goto block14; else goto block15;
block15:;
_73 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s273, _73, &$s274);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_77 = &_63->value;
_78 = *_77;
_79 = _78;
_80 = _79;
frost$core$Frost$ref$frost$core$Object$Q(_80);
_83 = ((org$frostlang$frostc$ClassDecl*) _79);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl(_60, _83);
_85 = _79;
frost$core$Frost$unref$frost$core$Object$Q(_85);
_87 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_87);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:410
_90 = &param0->methodCode;
_91 = *_90;
_92 = _91;
_93 = ((frost$core$Object*) param1);
_94 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_92, _93);
_95 = ((org$frostlang$frostc$Interpreter$Code*) _94);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$ref$frost$core$Object$Q(_96);
_98 = *(&local0);
_99 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_99);
*(&local0) = _95;
_102 = _94;
frost$core$Frost$unref$frost$core$Object$Q(_102);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:411
_105 = *(&local0);
_106 = _105 != NULL;
_107 = (frost$core$Bit) {_106};
_108 = _107.value;
if (_108) goto block16; else goto block17;
block17:;
_110 = (frost$core$Int) {411u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s275, _110);
abort(); // unreachable
block16:;
goto block2;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:414
_116 = &param0->contexts;
_117 = *_116;
_118 = _117;
_119 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Interpreter.frost:414:44
_121 = (frost$core$Int) {0u};
_122 = _119.value;
_123 = _121.value;
_124 = _122 >= _123;
_125 = (frost$core$Bit) {_124};
_126 = _125.value;
if (_126) goto block21; else goto block20;
block21:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_130 = &_118->contents;
_131 = *_130;
_132 = ((frost$collections$CollectionView*) _131);
ITable* $tmp276 = _132->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp276 = $tmp276->next;
}
_133 = $tmp276->methods[0];
_134 = _133(_132);
_136 = _119.value;
_137 = _134.value;
_138 = _136 < _137;
_139 = (frost$core$Bit) {_138};
_140 = _139.value;
if (_140) goto block19; else goto block20;
block20:;
_142 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s277, _142, &$s278);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_146 = &_118->contents;
_147 = *_146;
_148 = ((frost$collections$CollectionView*) _147);
ITable* $tmp279 = _148->$class->itable;
while ($tmp279->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp279 = $tmp279->next;
}
_149 = $tmp279->methods[0];
_150 = _149(_148);
_151 = _150.value;
_152 = _119.value;
_153 = _151 > _152;
_154 = (frost$core$Bit) {_153};
_155 = _154.value;
if (_155) goto block23; else goto block24;
block24:;
_157 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s280, _157);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_161 = &_118->contents;
_162 = *_161;
_163 = _162;
_164 = &_118->contents;
_165 = *_164;
_166 = ((frost$collections$CollectionView*) _165);
ITable* $tmp281 = _166->$class->itable;
while ($tmp281->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp281 = $tmp281->next;
}
_167 = $tmp281->methods[0];
_168 = _167(_166);
_169 = (frost$core$Int) {1u};
_170 = _168.value;
_171 = _169.value;
_172 = _170 - _171;
_173 = (frost$core$Int) {_172};
_174 = _173.value;
_175 = _119.value;
_176 = _174 - _175;
_177 = (frost$core$Int) {_176};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_179 = (frost$core$Int) {0u};
_180 = _177.value;
_181 = _179.value;
_182 = _180 >= _181;
_183 = (frost$core$Bit) {_182};
_184 = _183.value;
if (_184) goto block28; else goto block27;
block28:;
_186 = ((frost$collections$CollectionView*) _163);
ITable* $tmp282 = _186->$class->itable;
while ($tmp282->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp282 = $tmp282->next;
}
_187 = $tmp282->methods[0];
_188 = _187(_186);
_189 = _177.value;
_190 = _188.value;
_191 = _189 < _190;
_192 = (frost$core$Bit) {_191};
_193 = _192.value;
if (_193) goto block26; else goto block27;
block27:;
_195 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s283, _195, &$s284);
abort(); // unreachable
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_199 = &_163->data;
_200 = *_199;
_201 = frost$core$Int64$init$frost$core$Int(_177);
_202 = _201.value;
_203 = _200[_202];
_204 = _203;
frost$core$Frost$ref$frost$core$Object$Q(_204);
_207 = _203;
_208 = _207;
frost$core$Frost$ref$frost$core$Object$Q(_208);
_210 = _203;
frost$core$Frost$unref$frost$core$Object$Q(_210);
_213 = ((org$frostlang$frostc$Interpreter$Context*) _207);
_214 = ($fn285) param0->$class->vtable[11];
_215 = _214(param0, _213, param1, param2);
_216 = _207;
frost$core$Frost$unref$frost$core$Object$Q(_216);
_218 = *(&local0);
_219 = ((frost$core$Object*) _218);
frost$core$Frost$unref$frost$core$Object$Q(_219);
*(&local0) = ((org$frostlang$frostc$Interpreter$Code*) NULL);
return _215;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:417
_225 = (org$frostlang$frostc$Interpreter$Context*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$Context), (frost$core$Class*) &org$frostlang$frostc$Interpreter$Context$class);
_226 = *(&local0);
_227 = _226 != NULL;
_228 = (frost$core$Bit) {_227};
_229 = _228.value;
if (_229) goto block29; else goto block30;
block30:;
_231 = (frost$core$Int) {417u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s286, _231, &$s287);
abort(); // unreachable
block29:;
_234 = _226;
org$frostlang$frostc$Interpreter$Context$init$org$frostlang$frostc$Interpreter$org$frostlang$frostc$Interpreter$Code(_225, param0, _234);
*(&local1) = ((org$frostlang$frostc$Interpreter$Context*) NULL);
_237 = ((frost$core$Object*) _225);
frost$core$Frost$ref$frost$core$Object$Q(_237);
_239 = *(&local1);
_240 = ((frost$core$Object*) _239);
frost$core$Frost$unref$frost$core$Object$Q(_240);
*(&local1) = _225;
_243 = ((frost$core$Object*) _225);
frost$core$Frost$unref$frost$core$Object$Q(_243);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:418
_246 = ((frost$collections$Iterable*) param2);
_247 = _246;
ITable* $tmp288 = _247->$class->itable;
while ($tmp288->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp288 = $tmp288->next;
}
_248 = $tmp288->methods[0];
_249 = _248(_247);
_250 = _249;
goto block31;
block31:;
_252 = _250;
ITable* $tmp289 = _252->$class->itable;
while ($tmp289->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp289 = $tmp289->next;
}
_253 = $tmp289->methods[0];
_254 = _253(_252);
_255 = _254.value;
if (_255) goto block33; else goto block32;
block32:;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
_258 = _250;
ITable* $tmp290 = _258->$class->itable;
while ($tmp290->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp290 = $tmp290->next;
}
_259 = $tmp290->methods[1];
_260 = _259(_258);
_261 = ((org$frostlang$frostc$IR$Value*) _260);
_262 = ((frost$core$Object*) _261);
frost$core$Frost$ref$frost$core$Object$Q(_262);
_264 = *(&local2);
_265 = ((frost$core$Object*) _264);
frost$core$Frost$unref$frost$core$Object$Q(_265);
*(&local2) = _261;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:419
_269 = *(&local1);
_270 = &_269->arguments;
_271 = *_270;
_272 = _271;
_273 = &param0->contexts;
_274 = *_273;
_275 = _274;
_276 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Interpreter.frost:419:43
_278 = (frost$core$Int) {0u};
_279 = _276.value;
_280 = _278.value;
_281 = _279 >= _280;
_282 = (frost$core$Bit) {_281};
_283 = _282.value;
if (_283) goto block37; else goto block36;
block37:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_287 = &_275->contents;
_288 = *_287;
_289 = ((frost$collections$CollectionView*) _288);
ITable* $tmp291 = _289->$class->itable;
while ($tmp291->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp291 = $tmp291->next;
}
_290 = $tmp291->methods[0];
_291 = _290(_289);
_293 = _276.value;
_294 = _291.value;
_295 = _293 < _294;
_296 = (frost$core$Bit) {_295};
_297 = _296.value;
if (_297) goto block35; else goto block36;
block36:;
_299 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s292, _299, &$s293);
abort(); // unreachable
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_303 = &_275->contents;
_304 = *_303;
_305 = ((frost$collections$CollectionView*) _304);
ITable* $tmp294 = _305->$class->itable;
while ($tmp294->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp294 = $tmp294->next;
}
_306 = $tmp294->methods[0];
_307 = _306(_305);
_308 = _307.value;
_309 = _276.value;
_310 = _308 > _309;
_311 = (frost$core$Bit) {_310};
_312 = _311.value;
if (_312) goto block39; else goto block40;
block40:;
_314 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s295, _314);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_318 = &_275->contents;
_319 = *_318;
_320 = _319;
_321 = &_275->contents;
_322 = *_321;
_323 = ((frost$collections$CollectionView*) _322);
ITable* $tmp296 = _323->$class->itable;
while ($tmp296->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp296 = $tmp296->next;
}
_324 = $tmp296->methods[0];
_325 = _324(_323);
_326 = (frost$core$Int) {1u};
_327 = _325.value;
_328 = _326.value;
_329 = _327 - _328;
_330 = (frost$core$Int) {_329};
_331 = _330.value;
_332 = _276.value;
_333 = _331 - _332;
_334 = (frost$core$Int) {_333};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_336 = (frost$core$Int) {0u};
_337 = _334.value;
_338 = _336.value;
_339 = _337 >= _338;
_340 = (frost$core$Bit) {_339};
_341 = _340.value;
if (_341) goto block44; else goto block43;
block44:;
_343 = ((frost$collections$CollectionView*) _320);
ITable* $tmp297 = _343->$class->itable;
while ($tmp297->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp297 = $tmp297->next;
}
_344 = $tmp297->methods[0];
_345 = _344(_343);
_346 = _334.value;
_347 = _345.value;
_348 = _346 < _347;
_349 = (frost$core$Bit) {_348};
_350 = _349.value;
if (_350) goto block42; else goto block43;
block43:;
_352 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s298, _352, &$s299);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_356 = &_320->data;
_357 = *_356;
_358 = frost$core$Int64$init$frost$core$Int(_334);
_359 = _358.value;
_360 = _357[_359];
_361 = _360;
frost$core$Frost$ref$frost$core$Object$Q(_361);
_364 = _360;
_365 = _364;
frost$core$Frost$ref$frost$core$Object$Q(_365);
_367 = _360;
frost$core$Frost$unref$frost$core$Object$Q(_367);
_370 = ((org$frostlang$frostc$Interpreter$Context*) _364);
_371 = *(&local2);
_372 = ($fn300) _370->$class->vtable[2];
_373 = _372(_370, _371);
frost$core$Int64$wrapper* $tmp301;
$tmp301 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp301->value = _373;
_374 = ((frost$core$Object*) $tmp301);
frost$collections$Array$add$frost$collections$Array$T(_272, _374);
_376 = _374;
frost$core$Frost$unref$frost$core$Object$Q(_376);
_378 = _364;
frost$core$Frost$unref$frost$core$Object$Q(_378);
_380 = _260;
frost$core$Frost$unref$frost$core$Object$Q(_380);
_382 = *(&local2);
_383 = ((frost$core$Object*) _382);
frost$core$Frost$unref$frost$core$Object$Q(_383);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block31;
block33:;
_387 = ((frost$core$Object*) _249);
frost$core$Frost$unref$frost$core$Object$Q(_387);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:421
_390 = ((frost$core$Object*) param1);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:421:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_393 = ($fn302) _390->$class->vtable[0];
_394 = _393(_390);
_395 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s303, _394);
_396 = ((frost$core$Object*) _395);
frost$core$Frost$ref$frost$core$Object$Q(_396);
_398 = ((frost$core$Object*) _395);
frost$core$Frost$unref$frost$core$Object$Q(_398);
_400 = ((frost$core$Object*) _394);
frost$core$Frost$unref$frost$core$Object$Q(_400);
_403 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_395, &$s304);
_404 = *(&local1);
_405 = &_404->arguments;
_406 = *_405;
_407 = ((frost$core$Object*) _406);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:421:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_410 = ($fn305) _407->$class->vtable[0];
_411 = _410(_407);
_412 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_403, _411);
_413 = ((frost$core$Object*) _412);
frost$core$Frost$ref$frost$core$Object$Q(_413);
_415 = ((frost$core$Object*) _412);
frost$core$Frost$unref$frost$core$Object$Q(_415);
_417 = ((frost$core$Object*) _411);
frost$core$Frost$unref$frost$core$Object$Q(_417);
_420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_412, &$s306);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Interpreter.frost:421:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_420);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s307);
_430 = ((frost$core$Object*) _420);
frost$core$Frost$unref$frost$core$Object$Q(_430);
_432 = ((frost$core$Object*) _412);
frost$core$Frost$unref$frost$core$Object$Q(_432);
_434 = ((frost$core$Object*) _403);
frost$core$Frost$unref$frost$core$Object$Q(_434);
_436 = ((frost$core$Object*) _395);
frost$core$Frost$unref$frost$core$Object$Q(_436);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:422
_439 = &param0->contexts;
_440 = *_439;
_441 = _440;
_442 = *(&local1);
_443 = ((frost$core$Object*) _442);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Interpreter.frost:422:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_446 = &_441->contents;
_447 = *_446;
_448 = _447;
_449 = _443;
frost$collections$Array$add$frost$collections$Array$T(_448, _449);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:423
_453 = (frost$core$Int) {0u};
*(&local3) = _453;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:424
_456 = (frost$core$Int) {0u};
*(&local4) = _456;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:425
goto block50;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:426
_461 = *(&local0);
_462 = _461 != NULL;
_463 = (frost$core$Bit) {_462};
_464 = _463.value;
if (_464) goto block52; else goto block53;
block53:;
_466 = (frost$core$Int) {426u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s308, _466, &$s309);
abort(); // unreachable
block52:;
_469 = _461;
_470 = &_469->ids;
_471 = *_470;
_472 = _471;
_473 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:426:31
_475 = (frost$core$Int) {0u};
_476 = _473.value;
_477 = _475.value;
_478 = _476 >= _477;
_479 = (frost$core$Bit) {_478};
_480 = _479.value;
if (_480) goto block57; else goto block56;
block57:;
_482 = ((frost$collections$CollectionView*) _472);
ITable* $tmp310 = _482->$class->itable;
while ($tmp310->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp310 = $tmp310->next;
}
_483 = $tmp310->methods[0];
_484 = _483(_482);
_485 = _473.value;
_486 = _484.value;
_487 = _485 < _486;
_488 = (frost$core$Bit) {_487};
_489 = _488.value;
if (_489) goto block55; else goto block56;
block56:;
_491 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s311, _491, &$s312);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_495 = &_472->data;
_496 = *_495;
_497 = frost$core$Int64$init$frost$core$Int(_473);
_498 = _497.value;
_499 = _496[_498];
_500 = _499;
frost$core$Frost$ref$frost$core$Object$Q(_500);
_503 = ((frost$collections$Array*) _499);
_504 = _503;
_505 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:426:38
_507 = (frost$core$Int) {0u};
_508 = _505.value;
_509 = _507.value;
_510 = _508 >= _509;
_511 = (frost$core$Bit) {_510};
_512 = _511.value;
if (_512) goto block61; else goto block60;
block61:;
_514 = ((frost$collections$CollectionView*) _504);
ITable* $tmp313 = _514->$class->itable;
while ($tmp313->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp313 = $tmp313->next;
}
_515 = $tmp313->methods[0];
_516 = _515(_514);
_517 = _505.value;
_518 = _516.value;
_519 = _517 < _518;
_520 = (frost$core$Bit) {_519};
_521 = _520.value;
if (_521) goto block59; else goto block60;
block60:;
_523 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s314, _523, &$s315);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_527 = &_504->data;
_528 = *_527;
_529 = frost$core$Int64$init$frost$core$Int(_505);
_530 = _529.value;
_531 = _528[_530];
_532 = _531;
frost$core$Frost$ref$frost$core$Object$Q(_532);
_535 = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) _531)->value;
*(&local5) = _535;
_537 = _531;
frost$core$Frost$unref$frost$core$Object$Q(_537);
_539 = _499;
frost$core$Frost$unref$frost$core$Object$Q(_539);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:427
_542 = *(&local0);
_543 = _542 != NULL;
_544 = (frost$core$Bit) {_543};
_545 = _544.value;
if (_545) goto block62; else goto block63;
block63:;
_547 = (frost$core$Int) {427u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s316, _547, &$s317);
abort(); // unreachable
block62:;
_550 = _542;
_551 = &_550->ir;
_552 = *_551;
_553 = _552;
_554 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:427:32
_556 = (frost$core$Int) {0u};
_557 = _554.value;
_558 = _556.value;
_559 = _557 >= _558;
_560 = (frost$core$Bit) {_559};
_561 = _560.value;
if (_561) goto block67; else goto block66;
block67:;
_563 = ((frost$collections$CollectionView*) _553);
ITable* $tmp318 = _563->$class->itable;
while ($tmp318->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp318 = $tmp318->next;
}
_564 = $tmp318->methods[0];
_565 = _564(_563);
_566 = _554.value;
_567 = _565.value;
_568 = _566 < _567;
_569 = (frost$core$Bit) {_568};
_570 = _569.value;
if (_570) goto block65; else goto block66;
block66:;
_572 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s319, _572, &$s320);
abort(); // unreachable
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_576 = &_553->data;
_577 = *_576;
_578 = frost$core$Int64$init$frost$core$Int(_554);
_579 = _578.value;
_580 = _577[_579];
_581 = _580;
frost$core$Frost$ref$frost$core$Object$Q(_581);
_584 = ((frost$collections$Array*) _580);
_585 = _584;
_586 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:427:39
_588 = (frost$core$Int) {0u};
_589 = _586.value;
_590 = _588.value;
_591 = _589 >= _590;
_592 = (frost$core$Bit) {_591};
_593 = _592.value;
if (_593) goto block71; else goto block70;
block71:;
_595 = ((frost$collections$CollectionView*) _585);
ITable* $tmp321 = _595->$class->itable;
while ($tmp321->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp321 = $tmp321->next;
}
_596 = $tmp321->methods[0];
_597 = _596(_595);
_598 = _586.value;
_599 = _597.value;
_600 = _598 < _599;
_601 = (frost$core$Bit) {_600};
_602 = _601.value;
if (_602) goto block69; else goto block70;
block70:;
_604 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s322, _604, &$s323);
abort(); // unreachable
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_608 = &_585->data;
_609 = *_608;
_610 = frost$core$Int64$init$frost$core$Int(_586);
_611 = _610.value;
_612 = _609[_611];
_613 = _612;
frost$core$Frost$ref$frost$core$Object$Q(_613);
_616 = ((org$frostlang$frostc$IR$Statement*) _612);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
_618 = ((frost$core$Object*) _616);
frost$core$Frost$ref$frost$core$Object$Q(_618);
_620 = *(&local6);
_621 = ((frost$core$Object*) _620);
frost$core$Frost$unref$frost$core$Object$Q(_621);
*(&local6) = _616;
_624 = _612;
frost$core$Frost$unref$frost$core$Object$Q(_624);
_626 = _580;
frost$core$Frost$unref$frost$core$Object$Q(_626);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:428
_629 = *(&local5);
// begin inline call to function org.frostlang.frostc.IR.Statement.ID.get_asString():frost.core.String from Interpreter.frost:428:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:176
_632 = _629.value;
frost$core$Int$wrapper* $tmp324;
$tmp324 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp324->value = _632;
_633 = ((frost$core$Object*) $tmp324);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:176:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_636 = ($fn325) _633->$class->vtable[0];
_637 = _636(_633);
_638 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s326, _637);
_639 = ((frost$core$Object*) _638);
frost$core$Frost$ref$frost$core$Object$Q(_639);
_641 = ((frost$core$Object*) _638);
frost$core$Frost$unref$frost$core$Object$Q(_641);
_643 = ((frost$core$Object*) _637);
frost$core$Frost$unref$frost$core$Object$Q(_643);
_646 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_638, &$s327);
_647 = ((frost$core$Object*) _646);
frost$core$Frost$ref$frost$core$Object$Q(_647);
_649 = ((frost$core$Object*) _646);
frost$core$Frost$unref$frost$core$Object$Q(_649);
_651 = ((frost$core$Object*) _638);
frost$core$Frost$unref$frost$core$Object$Q(_651);
_653 = _633;
frost$core$Frost$unref$frost$core$Object$Q(_653);
_656 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_646, &$s328);
_657 = *(&local6);
_658 = ((frost$core$Object*) _657);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:428:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_661 = ($fn329) _658->$class->vtable[0];
_662 = _661(_658);
_663 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_656, _662);
_664 = ((frost$core$Object*) _663);
frost$core$Frost$ref$frost$core$Object$Q(_664);
_666 = ((frost$core$Object*) _663);
frost$core$Frost$unref$frost$core$Object$Q(_666);
_668 = ((frost$core$Object*) _662);
frost$core$Frost$unref$frost$core$Object$Q(_668);
_671 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_663, &$s330);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Interpreter.frost:428:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_671);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s331);
_681 = ((frost$core$Object*) _671);
frost$core$Frost$unref$frost$core$Object$Q(_681);
_683 = ((frost$core$Object*) _663);
frost$core$Frost$unref$frost$core$Object$Q(_683);
_685 = ((frost$core$Object*) _656);
frost$core$Frost$unref$frost$core$Object$Q(_685);
_687 = ((frost$core$Object*) _646);
frost$core$Frost$unref$frost$core$Object$Q(_687);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:429
_690 = *(&local6);
_691 = &_690->$rawValue;
_692 = *_691;
_693 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:430:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_696 = _692.value;
_697 = _693.value;
_698 = _696 == _697;
_699 = (frost$core$Bit) {_698};
_701 = _699.value;
if (_701) goto block78; else goto block79;
block78:;
_703 = &_690->$data.$BINARY.field0;
_704 = *_703;
_705 = &_690->$data.$BINARY.field1;
_706 = *_705;
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
_708 = ((frost$core$Object*) _706);
frost$core$Frost$ref$frost$core$Object$Q(_708);
_710 = *(&local7);
_711 = ((frost$core$Object*) _710);
frost$core$Frost$unref$frost$core$Object$Q(_711);
*(&local7) = _706;
_714 = &_690->$data.$BINARY.field2;
_715 = *_714;
*(&local8) = _715;
_717 = &_690->$data.$BINARY.field3;
_718 = *_717;
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_720 = ((frost$core$Object*) _718);
frost$core$Frost$ref$frost$core$Object$Q(_720);
_722 = *(&local9);
_723 = ((frost$core$Object*) _722);
frost$core$Frost$unref$frost$core$Object$Q(_723);
*(&local9) = _718;
_726 = &_690->$data.$BINARY.field4;
_727 = *_726;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:431
_729 = *(&local1);
_730 = *(&local5);
_731 = *(&local7);
_732 = *(&local8);
_733 = *(&local9);
_734 = ($fn332) param0->$class->vtable[16];
_734(param0, _729, _730, _731, _732, _733);
_736 = *(&local9);
_737 = ((frost$core$Object*) _736);
frost$core$Frost$unref$frost$core$Object$Q(_737);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
_740 = *(&local7);
_741 = ((frost$core$Object*) _740);
frost$core$Frost$unref$frost$core$Object$Q(_741);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block77;
block79:;
_745 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:433:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_748 = _692.value;
_749 = _745.value;
_750 = _748 == _749;
_751 = (frost$core$Bit) {_750};
_753 = _751.value;
if (_753) goto block81; else goto block82;
block81:;
_755 = &_690->$data.$BRANCH.field0;
_756 = *_755;
_757 = &_690->$data.$BRANCH.field1;
_758 = *_757;
*(&local10) = _758;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:434
_761 = *(&local0);
_762 = _761 != NULL;
_763 = (frost$core$Bit) {_762};
_764 = _763.value;
if (_764) goto block84; else goto block85;
block85:;
_766 = (frost$core$Int) {434u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s333, _766, &$s334);
abort(); // unreachable
block84:;
_769 = _761;
_770 = &_769->blocks;
_771 = *_770;
_772 = _771;
_773 = *(&local10);
_774 = _773.value;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:434:41
_776 = (frost$core$Int) {0u};
_777 = _774.value;
_778 = _776.value;
_779 = _777 >= _778;
_780 = (frost$core$Bit) {_779};
_781 = _780.value;
if (_781) goto block89; else goto block88;
block89:;
_783 = ((frost$collections$CollectionView*) _772);
ITable* $tmp335 = _783->$class->itable;
while ($tmp335->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp335 = $tmp335->next;
}
_784 = $tmp335->methods[0];
_785 = _784(_783);
_786 = _774.value;
_787 = _785.value;
_788 = _786 < _787;
_789 = (frost$core$Bit) {_788};
_790 = _789.value;
if (_790) goto block87; else goto block88;
block88:;
_792 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s336, _792, &$s337);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_796 = &_772->data;
_797 = *_796;
_798 = frost$core$Int64$init$frost$core$Int(_774);
_799 = _798.value;
_800 = _797[_799];
_801 = _800;
frost$core$Frost$ref$frost$core$Object$Q(_801);
_804 = ((frost$core$Int$wrapper*) _800)->value;
*(&local3) = _804;
_806 = _800;
frost$core$Frost$unref$frost$core$Object$Q(_806);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:435
_809 = (frost$core$Int) {0u};
*(&local4) = _809;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:436
_812 = *(&local6);
_813 = ((frost$core$Object*) _812);
frost$core$Frost$unref$frost$core$Object$Q(_813);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block50;
block82:;
_817 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:438:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_820 = _692.value;
_821 = _817.value;
_822 = _820 == _821;
_823 = (frost$core$Bit) {_822};
_825 = _823.value;
if (_825) goto block90; else goto block91;
block90:;
_827 = &_690->$data.$CAST.field0;
_828 = *_827;
_829 = &_690->$data.$CAST.field1;
_830 = *_829;
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
_832 = ((frost$core$Object*) _830);
frost$core$Frost$ref$frost$core$Object$Q(_832);
_834 = *(&local11);
_835 = ((frost$core$Object*) _834);
frost$core$Frost$unref$frost$core$Object$Q(_835);
*(&local11) = _830;
_838 = &_690->$data.$CAST.field2;
_839 = *_838;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
_841 = ((frost$core$Object*) _839);
frost$core$Frost$ref$frost$core$Object$Q(_841);
_843 = *(&local12);
_844 = ((frost$core$Object*) _843);
frost$core$Frost$unref$frost$core$Object$Q(_844);
*(&local12) = _839;
_847 = &_690->$data.$CAST.field3;
_848 = *_847;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:439
_850 = *(&local1);
_851 = *(&local5);
_852 = *(&local11);
_853 = *(&local12);
_854 = ($fn338) param0->$class->vtable[12];
_854(param0, _850, _851, _852, _853);
_856 = *(&local12);
_857 = ((frost$core$Object*) _856);
frost$core$Frost$unref$frost$core$Object$Q(_857);
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
_860 = *(&local11);
_861 = ((frost$core$Object*) _860);
frost$core$Frost$unref$frost$core$Object$Q(_861);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block77;
block91:;
_865 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:441:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_868 = _692.value;
_869 = _865.value;
_870 = _868 == _869;
_871 = (frost$core$Bit) {_870};
_873 = _871.value;
if (_873) goto block93; else goto block94;
block93:;
goto block77;
block94:;
_876 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:443:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_879 = _692.value;
_880 = _876.value;
_881 = _879 == _880;
_882 = (frost$core$Bit) {_881};
_884 = _882.value;
if (_884) goto block96; else goto block97;
block96:;
_886 = &_690->$data.$CONDITIONAL_BRANCH.field0;
_887 = *_886;
_888 = &_690->$data.$CONDITIONAL_BRANCH.field1;
_889 = *_888;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
_891 = ((frost$core$Object*) _889);
frost$core$Frost$ref$frost$core$Object$Q(_891);
_893 = *(&local13);
_894 = ((frost$core$Object*) _893);
frost$core$Frost$unref$frost$core$Object$Q(_894);
*(&local13) = _889;
_897 = &_690->$data.$CONDITIONAL_BRANCH.field2;
_898 = *_897;
*(&local14) = _898;
_900 = &_690->$data.$CONDITIONAL_BRANCH.field3;
_901 = *_900;
*(&local15) = _901;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:444
_904 = *(&local1);
_905 = *(&local13);
_906 = ($fn339) _904->$class->vtable[2];
_907 = _906(_904, _905);
_908 = (frost$core$Int64) {0u};
_909 = _907.value;
_910 = _908.value;
_911 = _909 != _910;
_912 = (frost$core$Bit) {_911};
_913 = _912.value;
if (_913) goto block99; else goto block101;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:445
_916 = *(&local0);
_917 = _916 != NULL;
_918 = (frost$core$Bit) {_917};
_919 = _918.value;
if (_919) goto block102; else goto block103;
block103:;
_921 = (frost$core$Int) {445u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s340, _921, &$s341);
abort(); // unreachable
block102:;
_924 = _916;
_925 = &_924->blocks;
_926 = *_925;
_927 = _926;
_928 = *(&local14);
_929 = _928.value;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:445:45
_931 = (frost$core$Int) {0u};
_932 = _929.value;
_933 = _931.value;
_934 = _932 >= _933;
_935 = (frost$core$Bit) {_934};
_936 = _935.value;
if (_936) goto block107; else goto block106;
block107:;
_938 = ((frost$collections$CollectionView*) _927);
ITable* $tmp342 = _938->$class->itable;
while ($tmp342->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp342 = $tmp342->next;
}
_939 = $tmp342->methods[0];
_940 = _939(_938);
_941 = _929.value;
_942 = _940.value;
_943 = _941 < _942;
_944 = (frost$core$Bit) {_943};
_945 = _944.value;
if (_945) goto block105; else goto block106;
block106:;
_947 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s343, _947, &$s344);
abort(); // unreachable
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_951 = &_927->data;
_952 = *_951;
_953 = frost$core$Int64$init$frost$core$Int(_929);
_954 = _953.value;
_955 = _952[_954];
_956 = _955;
frost$core$Frost$ref$frost$core$Object$Q(_956);
_959 = ((frost$core$Int$wrapper*) _955)->value;
*(&local3) = _959;
_961 = _955;
frost$core$Frost$unref$frost$core$Object$Q(_961);
goto block100;
block101:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:448
_966 = *(&local0);
_967 = _966 != NULL;
_968 = (frost$core$Bit) {_967};
_969 = _968.value;
if (_969) goto block108; else goto block109;
block109:;
_971 = (frost$core$Int) {448u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s345, _971, &$s346);
abort(); // unreachable
block108:;
_974 = _966;
_975 = &_974->blocks;
_976 = *_975;
_977 = _976;
_978 = *(&local15);
_979 = _978.value;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:448:45
_981 = (frost$core$Int) {0u};
_982 = _979.value;
_983 = _981.value;
_984 = _982 >= _983;
_985 = (frost$core$Bit) {_984};
_986 = _985.value;
if (_986) goto block113; else goto block112;
block113:;
_988 = ((frost$collections$CollectionView*) _977);
ITable* $tmp347 = _988->$class->itable;
while ($tmp347->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp347 = $tmp347->next;
}
_989 = $tmp347->methods[0];
_990 = _989(_988);
_991 = _979.value;
_992 = _990.value;
_993 = _991 < _992;
_994 = (frost$core$Bit) {_993};
_995 = _994.value;
if (_995) goto block111; else goto block112;
block112:;
_997 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s348, _997, &$s349);
abort(); // unreachable
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_1001 = &_977->data;
_1002 = *_1001;
_1003 = frost$core$Int64$init$frost$core$Int(_979);
_1004 = _1003.value;
_1005 = _1002[_1004];
_1006 = _1005;
frost$core$Frost$ref$frost$core$Object$Q(_1006);
_1009 = ((frost$core$Int$wrapper*) _1005)->value;
*(&local3) = _1009;
_1011 = _1005;
frost$core$Frost$unref$frost$core$Object$Q(_1011);
goto block100;
block100:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:450
_1015 = (frost$core$Int) {0u};
*(&local4) = _1015;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:451
_1018 = *(&local13);
_1019 = ((frost$core$Object*) _1018);
frost$core$Frost$unref$frost$core$Object$Q(_1019);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
_1022 = *(&local6);
_1023 = ((frost$core$Object*) _1022);
frost$core$Frost$unref$frost$core$Object$Q(_1023);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block50;
block97:;
_1027 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:453:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1030 = _692.value;
_1031 = _1027.value;
_1032 = _1030 == _1031;
_1033 = (frost$core$Bit) {_1032};
_1035 = _1033.value;
if (_1035) goto block114; else goto block115;
block114:;
_1037 = &_690->$data.$CONSTRUCT.field0;
_1038 = *_1037;
_1039 = &_690->$data.$CONSTRUCT.field1;
_1040 = *_1039;
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1042 = ((frost$core$Object*) _1040);
frost$core$Frost$ref$frost$core$Object$Q(_1042);
_1044 = *(&local16);
_1045 = ((frost$core$Object*) _1044);
frost$core$Frost$unref$frost$core$Object$Q(_1045);
*(&local16) = _1040;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:454
_1049 = &param0->llvmCodeGen;
_1050 = *_1049;
_1051 = *(&local16);
_1052 = &_1051->type;
_1053 = *_1052;
_1054 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(_1050, _1053);
_1055 = frost$core$Int64$init$frost$core$Int(_1054);
_1056 = _1055.value;
_1057 = ((frost$core$UInt8*) frostAlloc(_1056 * sizeof(frost$core$UInt8)));
*(&local17) = _1057;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:455
_1060 = *(&local17);
_1061 = ((org$frostlang$frostc$ClassDecl**) _1060);
_1062 = *(&local16);
_1063 = ((frost$core$Object*) _1062);
frost$core$Frost$ref$frost$core$Object$Q(_1063);
_1065 = *_1061;
_1066 = ((frost$core$Object*) _1065);
frost$core$Frost$unref$frost$core$Object$Q(_1066);
*_1061 = _1062;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:456
_1070 = *(&local17);
_1071 = (frost$core$Int) {8u};
_1072 = frost$core$Int64$init$frost$core$Int(_1071);
_1073 = _1072.value;
_1074 = _1070 + _1073;
_1075 = ((frost$core$Int32*) _1074);
_1076 = (frost$core$Int32) {1u};
*_1075 = _1076;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:457
_1079 = *(&local1);
_1080 = &_1079->statements;
_1081 = *_1080;
_1082 = _1081;
_1083 = *(&local5);
_1084 = _1083.value;
_1085 = *(&local17);
_1086 = ((int64_t) _1085);
_1087 = (frost$core$Int) {_1086};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:457:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_1090 = _1087.value;
_1091 = ((int64_t) _1090);
_1092 = (frost$core$Int64) {_1091};
_1094 = ((frost$core$Int64$nullable) { _1092, true });
frost$core$Object* $tmp350;
if (_1094.nonnull) {
    frost$core$Int64$wrapper* $tmp351;
    $tmp351 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp351->value = ((frost$core$Int64) _1094.value);
    $tmp350 = ((frost$core$Object*) $tmp351);
}
else {
    $tmp350 = NULL;
}
_1095 = $tmp350;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:457:39
_1097 = (frost$core$Int) {0u};
_1098 = _1084.value;
_1099 = _1097.value;
_1100 = _1098 >= _1099;
_1101 = (frost$core$Bit) {_1100};
_1102 = _1101.value;
if (_1102) goto block121; else goto block120;
block121:;
_1104 = ((frost$collections$CollectionView*) _1082);
ITable* $tmp352 = _1104->$class->itable;
while ($tmp352->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp352 = $tmp352->next;
}
_1105 = $tmp352->methods[0];
_1106 = _1105(_1104);
_1107 = _1084.value;
_1108 = _1106.value;
_1109 = _1107 < _1108;
_1110 = (frost$core$Bit) {_1109};
_1111 = _1110.value;
if (_1111) goto block119; else goto block120;
block120:;
_1113 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s353, _1113, &$s354);
abort(); // unreachable
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1117 = &_1082->data;
_1118 = *_1117;
_1119 = frost$core$Int64$init$frost$core$Int(_1084);
_1120 = _1119.value;
_1121 = _1095;
frost$core$Frost$ref$frost$core$Object$Q(_1121);
_1123 = _1118[_1120];
_1124 = _1123;
frost$core$Frost$unref$frost$core$Object$Q(_1124);
_1118[_1120] = _1095;
_1128 = _1095;
frost$core$Frost$unref$frost$core$Object$Q(_1128);
_1130 = *(&local16);
_1131 = ((frost$core$Object*) _1130);
frost$core$Frost$unref$frost$core$Object$Q(_1131);
*(&local16) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block77;
block115:;
_1135 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:459:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1138 = _692.value;
_1139 = _1135.value;
_1140 = _1138 == _1139;
_1141 = (frost$core$Bit) {_1140};
_1143 = _1141.value;
if (_1143) goto block122; else goto block123;
block122:;
_1145 = &_690->$data.$CREATE_STRUCT.field0;
_1146 = *_1145;
_1147 = &_690->$data.$CREATE_STRUCT.field1;
_1148 = *_1147;
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1150 = ((frost$core$Object*) _1148);
frost$core$Frost$ref$frost$core$Object$Q(_1150);
_1152 = *(&local18);
_1153 = ((frost$core$Object*) _1152);
frost$core$Frost$unref$frost$core$Object$Q(_1153);
*(&local18) = _1148;
_1156 = &_690->$data.$CREATE_STRUCT.field2;
_1157 = *_1156;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
_1159 = ((frost$core$Object*) _1157);
frost$core$Frost$ref$frost$core$Object$Q(_1159);
_1161 = *(&local19);
_1162 = ((frost$core$Object*) _1161);
frost$core$Frost$unref$frost$core$Object$Q(_1162);
*(&local19) = _1157;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:460
_1166 = *(&local1);
_1167 = *(&local5);
_1168 = *(&local18);
_1169 = *(&local19);
_1170 = ($fn355) param0->$class->vtable[13];
_1170(param0, _1166, _1167, _1168, _1169);
_1172 = *(&local19);
_1173 = ((frost$core$Object*) _1172);
frost$core$Frost$unref$frost$core$Object$Q(_1173);
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
_1176 = *(&local18);
_1177 = ((frost$core$Object*) _1176);
frost$core$Frost$unref$frost$core$Object$Q(_1177);
*(&local18) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block77;
block123:;
_1181 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:462:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1184 = _692.value;
_1185 = _1181.value;
_1186 = _1184 == _1185;
_1187 = (frost$core$Bit) {_1186};
_1189 = _1187.value;
if (_1189) goto block125; else goto block126;
block125:;
_1191 = &_690->$data.$DYNAMIC_CALL.field0;
_1192 = *_1191;
_1193 = &_690->$data.$DYNAMIC_CALL.field1;
_1194 = *_1193;
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
_1196 = ((frost$core$Object*) _1194);
frost$core$Frost$ref$frost$core$Object$Q(_1196);
_1198 = *(&local20);
_1199 = ((frost$core$Object*) _1198);
frost$core$Frost$unref$frost$core$Object$Q(_1199);
*(&local20) = _1194;
_1202 = &_690->$data.$DYNAMIC_CALL.field2;
_1203 = *_1202;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
_1205 = ((frost$core$Object*) _1203);
frost$core$Frost$ref$frost$core$Object$Q(_1205);
_1207 = *(&local21);
_1208 = ((frost$core$Object*) _1207);
frost$core$Frost$unref$frost$core$Object$Q(_1208);
*(&local21) = _1203;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:463
_1212 = *(&local1);
_1213 = *(&local20);
_1214 = ($fn356) _1212->$class->vtable[2];
_1215 = _1214(_1212, _1213);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:463:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1218 = _1215.value;
_1219 = ((int64_t) _1218);
_1220 = (frost$core$Int) {_1219};
_1222 = _1220.value;
_1223 = ((frost$core$UInt8*) _1222);
_1224 = ((org$frostlang$frostc$MethodDecl*) _1223);
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1226 = ((frost$core$Object*) _1224);
frost$core$Frost$ref$frost$core$Object$Q(_1226);
_1228 = *(&local22);
_1229 = ((frost$core$Object*) _1228);
frost$core$Frost$unref$frost$core$Object$Q(_1229);
*(&local22) = _1224;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:464
_1233 = *(&local1);
_1234 = &_1233->statements;
_1235 = *_1234;
_1236 = _1235;
_1237 = *(&local5);
_1238 = _1237.value;
_1239 = *(&local22);
_1240 = *(&local21);
_1241 = ($fn357) param0->$class->vtable[17];
_1242 = _1241(param0, _1239, _1240);
_1243 = ((frost$core$Int64$nullable) { _1242, true });
frost$core$Object* $tmp358;
if (_1243.nonnull) {
    frost$core$Int64$wrapper* $tmp359;
    $tmp359 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp359->value = ((frost$core$Int64) _1243.value);
    $tmp358 = ((frost$core$Object*) $tmp359);
}
else {
    $tmp358 = NULL;
}
_1244 = $tmp358;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:464:39
_1246 = (frost$core$Int) {0u};
_1247 = _1238.value;
_1248 = _1246.value;
_1249 = _1247 >= _1248;
_1250 = (frost$core$Bit) {_1249};
_1251 = _1250.value;
if (_1251) goto block132; else goto block131;
block132:;
_1253 = ((frost$collections$CollectionView*) _1236);
ITable* $tmp360 = _1253->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp360 = $tmp360->next;
}
_1254 = $tmp360->methods[0];
_1255 = _1254(_1253);
_1256 = _1238.value;
_1257 = _1255.value;
_1258 = _1256 < _1257;
_1259 = (frost$core$Bit) {_1258};
_1260 = _1259.value;
if (_1260) goto block130; else goto block131;
block131:;
_1262 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s361, _1262, &$s362);
abort(); // unreachable
block130:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1266 = &_1236->data;
_1267 = *_1266;
_1268 = frost$core$Int64$init$frost$core$Int(_1238);
_1269 = _1268.value;
_1270 = _1244;
frost$core$Frost$ref$frost$core$Object$Q(_1270);
_1272 = _1267[_1269];
_1273 = _1272;
frost$core$Frost$unref$frost$core$Object$Q(_1273);
_1267[_1269] = _1244;
_1277 = _1244;
frost$core$Frost$unref$frost$core$Object$Q(_1277);
_1279 = *(&local22);
_1280 = ((frost$core$Object*) _1279);
frost$core$Frost$unref$frost$core$Object$Q(_1280);
*(&local22) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1283 = *(&local21);
_1284 = ((frost$core$Object*) _1283);
frost$core$Frost$unref$frost$core$Object$Q(_1284);
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
_1287 = *(&local20);
_1288 = ((frost$core$Object*) _1287);
frost$core$Frost$unref$frost$core$Object$Q(_1288);
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block77;
block126:;
_1292 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:466:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1295 = _692.value;
_1296 = _1292.value;
_1297 = _1295 == _1296;
_1298 = (frost$core$Bit) {_1297};
_1300 = _1298.value;
if (_1300) goto block133; else goto block134;
block133:;
_1302 = &_690->$data.$EXTRACT_FIELD.field0;
_1303 = *_1302;
_1304 = &_690->$data.$EXTRACT_FIELD.field1;
_1305 = *_1304;
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
_1307 = ((frost$core$Object*) _1305);
frost$core$Frost$ref$frost$core$Object$Q(_1307);
_1309 = *(&local23);
_1310 = ((frost$core$Object*) _1309);
frost$core$Frost$unref$frost$core$Object$Q(_1310);
*(&local23) = _1305;
_1313 = &_690->$data.$EXTRACT_FIELD.field2;
_1314 = *_1313;
*(&local24) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1316 = ((frost$core$Object*) _1314);
frost$core$Frost$ref$frost$core$Object$Q(_1316);
_1318 = *(&local24);
_1319 = ((frost$core$Object*) _1318);
frost$core$Frost$unref$frost$core$Object$Q(_1319);
*(&local24) = _1314;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:467
_1323 = *(&local1);
_1324 = *(&local5);
_1325 = *(&local23);
_1326 = *(&local24);
_1327 = ($fn363) param0->$class->vtable[14];
_1327(param0, _1323, _1324, _1325, _1326);
_1329 = *(&local24);
_1330 = ((frost$core$Object*) _1329);
frost$core$Frost$unref$frost$core$Object$Q(_1330);
*(&local24) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1333 = *(&local23);
_1334 = ((frost$core$Object*) _1333);
frost$core$Frost$unref$frost$core$Object$Q(_1334);
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block77;
block134:;
_1338 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:469:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1341 = _692.value;
_1342 = _1338.value;
_1343 = _1341 == _1342;
_1344 = (frost$core$Bit) {_1343};
_1346 = _1344.value;
if (_1346) goto block136; else goto block137;
block136:;
_1348 = &_690->$data.$GET_FIELD_POINTER.field0;
_1349 = *_1348;
_1350 = &_690->$data.$GET_FIELD_POINTER.field1;
_1351 = *_1350;
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
_1353 = ((frost$core$Object*) _1351);
frost$core$Frost$ref$frost$core$Object$Q(_1353);
_1355 = *(&local25);
_1356 = ((frost$core$Object*) _1355);
frost$core$Frost$unref$frost$core$Object$Q(_1356);
*(&local25) = _1351;
_1359 = &_690->$data.$GET_FIELD_POINTER.field2;
_1360 = *_1359;
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1362 = ((frost$core$Object*) _1360);
frost$core$Frost$ref$frost$core$Object$Q(_1362);
_1364 = *(&local26);
_1365 = ((frost$core$Object*) _1364);
frost$core$Frost$unref$frost$core$Object$Q(_1365);
*(&local26) = _1360;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:470
_1369 = *(&local1);
_1370 = *(&local5);
_1371 = *(&local25);
_1372 = *(&local26);
_1373 = ($fn364) param0->$class->vtable[15];
_1373(param0, _1369, _1370, _1371, _1372);
_1375 = *(&local26);
_1376 = ((frost$core$Object*) _1375);
frost$core$Frost$unref$frost$core$Object$Q(_1376);
*(&local26) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1379 = *(&local25);
_1380 = ((frost$core$Object*) _1379);
frost$core$Frost$unref$frost$core$Object$Q(_1380);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block77;
block137:;
_1384 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:472:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1387 = _692.value;
_1388 = _1384.value;
_1389 = _1387 == _1388;
_1390 = (frost$core$Bit) {_1389};
_1392 = _1390.value;
if (_1392) goto block139; else goto block140;
block139:;
_1394 = &_690->$data.$GET_VIRTUAL_METHOD.field0;
_1395 = *_1394;
_1396 = &_690->$data.$GET_VIRTUAL_METHOD.field1;
_1397 = *_1396;
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
_1399 = ((frost$core$Object*) _1397);
frost$core$Frost$ref$frost$core$Object$Q(_1399);
_1401 = *(&local27);
_1402 = ((frost$core$Object*) _1401);
frost$core$Frost$unref$frost$core$Object$Q(_1402);
*(&local27) = _1397;
_1405 = &_690->$data.$GET_VIRTUAL_METHOD.field2;
_1406 = *_1405;
*(&local28) = _1406;
_1408 = &_690->$data.$GET_VIRTUAL_METHOD.field3;
_1409 = *_1408;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:473
_1411 = *(&local1);
_1412 = *(&local27);
_1413 = ($fn365) _1411->$class->vtable[2];
_1414 = _1413(_1411, _1412);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:473:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1417 = _1414.value;
_1418 = ((int64_t) _1417);
_1419 = (frost$core$Int) {_1418};
_1421 = _1419.value;
_1422 = ((frost$core$Int*) _1421);
*(&local29) = _1422;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:474
_1425 = *(&local29);
_1426 = *_1425;
_1427 = _1426.value;
_1428 = ((frost$core$UInt8*) _1427);
_1429 = ((org$frostlang$frostc$ClassDecl*) _1428);
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1431 = ((frost$core$Object*) _1429);
frost$core$Frost$ref$frost$core$Object$Q(_1431);
_1433 = *(&local30);
_1434 = ((frost$core$Object*) _1433);
frost$core$Frost$unref$frost$core$Object$Q(_1434);
*(&local30) = _1429;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:475
_1438 = &param0->compiler;
_1439 = *_1438;
_1440 = _1439;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:475:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_1445 = &_1440->_valid;
_1446 = *_1445;
_1448 = _1446.value;
if (_1448) goto block145; else goto block146;
block146:;
_1450 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s366, _1450, &$s367);
abort(); // unreachable
block145:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_1454 = &_1440->value;
_1455 = *_1454;
_1456 = _1455;
_1457 = _1456;
frost$core$Frost$ref$frost$core$Object$Q(_1457);
_1460 = ((org$frostlang$frostc$Compiler*) _1456);
_1461 = _1460 != NULL;
_1462 = (frost$core$Bit) {_1461};
_1463 = _1462.value;
if (_1463) goto block147; else goto block148;
block148:;
_1465 = (frost$core$Int) {475u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s368, _1465, &$s369);
abort(); // unreachable
block147:;
_1468 = _1460;
_1469 = *(&local30);
_1470 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(_1468, _1469);
_1471 = _1470;
_1472 = *(&local28);
ITable* $tmp370 = _1471->$class->itable;
while ($tmp370->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp370 = $tmp370->next;
}
_1473 = $tmp370->methods[0];
_1474 = _1473(_1471, _1472);
_1475 = ((org$frostlang$frostc$MethodDecl*) _1474);
*(&local31) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1477 = ((frost$core$Object*) _1475);
frost$core$Frost$ref$frost$core$Object$Q(_1477);
_1479 = *(&local31);
_1480 = ((frost$core$Object*) _1479);
frost$core$Frost$unref$frost$core$Object$Q(_1480);
*(&local31) = _1475;
_1483 = _1474;
frost$core$Frost$unref$frost$core$Object$Q(_1483);
_1485 = ((frost$core$Object*) _1470);
frost$core$Frost$unref$frost$core$Object$Q(_1485);
_1487 = _1456;
frost$core$Frost$unref$frost$core$Object$Q(_1487);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:476
_1490 = *(&local1);
_1491 = &_1490->statements;
_1492 = *_1491;
_1493 = _1492;
_1494 = *(&local5);
_1495 = _1494.value;
_1496 = *(&local31);
_1497 = ((frost$core$Object*) _1496);
frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int(&_1498, _1497);
_1499 = frost$core$Int64$init$frost$core$Int(_1498);
_1500 = ((frost$core$Int64$nullable) { _1499, true });
frost$core$Object* $tmp371;
if (_1500.nonnull) {
    frost$core$Int64$wrapper* $tmp372;
    $tmp372 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp372->value = ((frost$core$Int64) _1500.value);
    $tmp371 = ((frost$core$Object*) $tmp372);
}
else {
    $tmp371 = NULL;
}
_1501 = $tmp371;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:476:39
_1503 = (frost$core$Int) {0u};
_1504 = _1495.value;
_1505 = _1503.value;
_1506 = _1504 >= _1505;
_1507 = (frost$core$Bit) {_1506};
_1508 = _1507.value;
if (_1508) goto block152; else goto block151;
block152:;
_1510 = ((frost$collections$CollectionView*) _1493);
ITable* $tmp373 = _1510->$class->itable;
while ($tmp373->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp373 = $tmp373->next;
}
_1511 = $tmp373->methods[0];
_1512 = _1511(_1510);
_1513 = _1495.value;
_1514 = _1512.value;
_1515 = _1513 < _1514;
_1516 = (frost$core$Bit) {_1515};
_1517 = _1516.value;
if (_1517) goto block150; else goto block151;
block151:;
_1519 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s374, _1519, &$s375);
abort(); // unreachable
block150:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1523 = &_1493->data;
_1524 = *_1523;
_1525 = frost$core$Int64$init$frost$core$Int(_1495);
_1526 = _1525.value;
_1527 = _1501;
frost$core$Frost$ref$frost$core$Object$Q(_1527);
_1529 = _1524[_1526];
_1530 = _1529;
frost$core$Frost$unref$frost$core$Object$Q(_1530);
_1524[_1526] = _1501;
_1534 = _1501;
frost$core$Frost$unref$frost$core$Object$Q(_1534);
_1536 = *(&local31);
_1537 = ((frost$core$Object*) _1536);
frost$core$Frost$unref$frost$core$Object$Q(_1537);
*(&local31) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1540 = *(&local30);
_1541 = ((frost$core$Object*) _1540);
frost$core$Frost$unref$frost$core$Object$Q(_1541);
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1544 = *(&local27);
_1545 = ((frost$core$Object*) _1544);
frost$core$Frost$unref$frost$core$Object$Q(_1545);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block77;
block140:;
_1549 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:478:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1552 = _692.value;
_1553 = _1549.value;
_1554 = _1552 == _1553;
_1555 = (frost$core$Bit) {_1554};
_1557 = _1555.value;
if (_1557) goto block153; else goto block154;
block153:;
_1559 = &_690->$data.$LOAD.field0;
_1560 = *_1559;
_1561 = &_690->$data.$LOAD.field1;
_1562 = *_1561;
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
_1564 = ((frost$core$Object*) _1562);
frost$core$Frost$ref$frost$core$Object$Q(_1564);
_1566 = *(&local32);
_1567 = ((frost$core$Object*) _1566);
frost$core$Frost$unref$frost$core$Object$Q(_1567);
*(&local32) = _1562;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:479
_1571 = *(&local1);
_1572 = *(&local32);
_1573 = ($fn376) _1571->$class->vtable[2];
_1574 = _1573(_1571, _1572);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:479:69
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1577 = _1574.value;
_1578 = ((int64_t) _1577);
_1579 = (frost$core$Int) {_1578};
_1581 = _1579.value;
_1582 = ((frost$core$Int*) _1581);
*(&local33) = _1582;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:480
_1585 = *(&local1);
_1586 = &_1585->statements;
_1587 = *_1586;
_1588 = _1587;
_1589 = *(&local5);
_1590 = _1589.value;
_1591 = *(&local33);
_1592 = *_1591;
_1593 = frost$core$Int64$init$frost$core$Int(_1592);
_1594 = ((frost$core$Int64$nullable) { _1593, true });
frost$core$Object* $tmp377;
if (_1594.nonnull) {
    frost$core$Int64$wrapper* $tmp378;
    $tmp378 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp378->value = ((frost$core$Int64) _1594.value);
    $tmp377 = ((frost$core$Object*) $tmp378);
}
else {
    $tmp377 = NULL;
}
_1595 = $tmp377;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:480:39
_1597 = (frost$core$Int) {0u};
_1598 = _1590.value;
_1599 = _1597.value;
_1600 = _1598 >= _1599;
_1601 = (frost$core$Bit) {_1600};
_1602 = _1601.value;
if (_1602) goto block160; else goto block159;
block160:;
_1604 = ((frost$collections$CollectionView*) _1588);
ITable* $tmp379 = _1604->$class->itable;
while ($tmp379->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp379 = $tmp379->next;
}
_1605 = $tmp379->methods[0];
_1606 = _1605(_1604);
_1607 = _1590.value;
_1608 = _1606.value;
_1609 = _1607 < _1608;
_1610 = (frost$core$Bit) {_1609};
_1611 = _1610.value;
if (_1611) goto block158; else goto block159;
block159:;
_1613 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s380, _1613, &$s381);
abort(); // unreachable
block158:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1617 = &_1588->data;
_1618 = *_1617;
_1619 = frost$core$Int64$init$frost$core$Int(_1590);
_1620 = _1619.value;
_1621 = _1595;
frost$core$Frost$ref$frost$core$Object$Q(_1621);
_1623 = _1618[_1620];
_1624 = _1623;
frost$core$Frost$unref$frost$core$Object$Q(_1624);
_1618[_1620] = _1595;
_1628 = _1595;
frost$core$Frost$unref$frost$core$Object$Q(_1628);
_1630 = *(&local32);
_1631 = ((frost$core$Object*) _1630);
frost$core$Frost$unref$frost$core$Object$Q(_1631);
*(&local32) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block77;
block154:;
_1635 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:482:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1638 = _692.value;
_1639 = _1635.value;
_1640 = _1638 == _1639;
_1641 = (frost$core$Bit) {_1640};
_1643 = _1641.value;
if (_1643) goto block161; else goto block162;
block161:;
_1645 = &_690->$data.$POINTER_ALLOC.field0;
_1646 = *_1645;
_1647 = &_690->$data.$POINTER_ALLOC.field1;
_1648 = *_1647;
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
_1650 = ((frost$core$Object*) _1648);
frost$core$Frost$ref$frost$core$Object$Q(_1650);
_1652 = *(&local34);
_1653 = ((frost$core$Object*) _1652);
frost$core$Frost$unref$frost$core$Object$Q(_1653);
*(&local34) = _1648;
_1656 = &_690->$data.$POINTER_ALLOC.field2;
_1657 = *_1656;
*(&local35) = ((org$frostlang$frostc$Type*) NULL);
_1659 = ((frost$core$Object*) _1657);
frost$core$Frost$ref$frost$core$Object$Q(_1659);
_1661 = *(&local35);
_1662 = ((frost$core$Object*) _1661);
frost$core$Frost$unref$frost$core$Object$Q(_1662);
*(&local35) = _1657;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:483
_1666 = *(&local1);
_1667 = &_1666->statements;
_1668 = *_1667;
_1669 = _1668;
_1670 = *(&local5);
_1671 = _1670.value;
_1672 = *(&local1);
_1673 = *(&local34);
_1674 = ($fn382) _1672->$class->vtable[2];
_1675 = _1674(_1672, _1673);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:483:91
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1678 = _1675.value;
_1679 = ((int64_t) _1678);
_1680 = (frost$core$Int) {_1679};
_1682 = &param0->llvmCodeGen;
_1683 = *_1682;
_1684 = *(&local35);
_1685 = org$frostlang$frostc$LLVMCodeGenerator$sizeOf$org$frostlang$frostc$Type$R$frost$core$Int(_1683, _1684);
_1686 = _1680.value;
_1687 = _1685.value;
_1688 = _1686 * _1687;
_1689 = (frost$core$Int) {_1688};
_1690 = frost$core$Int64$init$frost$core$Int(_1689);
_1691 = _1690.value;
_1692 = ((frost$core$UInt8*) frostAlloc(_1691 * sizeof(frost$core$UInt8)));
_1693 = ((int64_t) _1692);
_1694 = (frost$core$Int) {_1693};
_1695 = frost$core$Int64$init$frost$core$Int(_1694);
_1696 = ((frost$core$Int64$nullable) { _1695, true });
frost$core$Object* $tmp383;
if (_1696.nonnull) {
    frost$core$Int64$wrapper* $tmp384;
    $tmp384 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp384->value = ((frost$core$Int64) _1696.value);
    $tmp383 = ((frost$core$Object*) $tmp384);
}
else {
    $tmp383 = NULL;
}
_1697 = $tmp383;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:483:40
_1699 = (frost$core$Int) {0u};
_1700 = _1671.value;
_1701 = _1699.value;
_1702 = _1700 >= _1701;
_1703 = (frost$core$Bit) {_1702};
_1704 = _1703.value;
if (_1704) goto block168; else goto block167;
block168:;
_1706 = ((frost$collections$CollectionView*) _1669);
ITable* $tmp385 = _1706->$class->itable;
while ($tmp385->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp385 = $tmp385->next;
}
_1707 = $tmp385->methods[0];
_1708 = _1707(_1706);
_1709 = _1671.value;
_1710 = _1708.value;
_1711 = _1709 < _1710;
_1712 = (frost$core$Bit) {_1711};
_1713 = _1712.value;
if (_1713) goto block166; else goto block167;
block167:;
_1715 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s386, _1715, &$s387);
abort(); // unreachable
block166:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1719 = &_1669->data;
_1720 = *_1719;
_1721 = frost$core$Int64$init$frost$core$Int(_1671);
_1722 = _1721.value;
_1723 = _1697;
frost$core$Frost$ref$frost$core$Object$Q(_1723);
_1725 = _1720[_1722];
_1726 = _1725;
frost$core$Frost$unref$frost$core$Object$Q(_1726);
_1720[_1722] = _1697;
_1730 = _1697;
frost$core$Frost$unref$frost$core$Object$Q(_1730);
_1732 = *(&local35);
_1733 = ((frost$core$Object*) _1732);
frost$core$Frost$unref$frost$core$Object$Q(_1733);
*(&local35) = ((org$frostlang$frostc$Type*) NULL);
_1736 = *(&local34);
_1737 = ((frost$core$Object*) _1736);
frost$core$Frost$unref$frost$core$Object$Q(_1737);
*(&local34) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block77;
block162:;
_1741 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:486:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1744 = _692.value;
_1745 = _1741.value;
_1746 = _1744 == _1745;
_1747 = (frost$core$Bit) {_1746};
_1749 = _1747.value;
if (_1749) goto block169; else goto block170;
block169:;
_1751 = &_690->$data.$POINTER_DESTROY.field0;
_1752 = *_1751;
_1753 = &_690->$data.$POINTER_DESTROY.field1;
_1754 = *_1753;
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
_1756 = ((frost$core$Object*) _1754);
frost$core$Frost$ref$frost$core$Object$Q(_1756);
_1758 = *(&local36);
_1759 = ((frost$core$Object*) _1758);
frost$core$Frost$unref$frost$core$Object$Q(_1759);
*(&local36) = _1754;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:487
_1763 = *(&local1);
_1764 = *(&local36);
_1765 = ($fn388) _1763->$class->vtable[2];
_1766 = _1765(_1763, _1764);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:487:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1769 = _1766.value;
_1770 = ((int64_t) _1769);
_1771 = (frost$core$Int) {_1770};
_1773 = _1771.value;
_1774 = ((frost$core$Int*) _1773);
frostFree(_1774);
_1776 = *(&local36);
_1777 = ((frost$core$Object*) _1776);
frost$core$Frost$unref$frost$core$Object$Q(_1777);
*(&local36) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block77;
block170:;
_1781 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:489:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1784 = _692.value;
_1785 = _1781.value;
_1786 = _1784 == _1785;
_1787 = (frost$core$Bit) {_1786};
_1789 = _1787.value;
if (_1789) goto block173; else goto block174;
block173:;
_1791 = &_690->$data.$RETURN.field0;
_1792 = *_1791;
_1793 = &_690->$data.$RETURN.field1;
_1794 = *_1793;
*(&local37) = ((org$frostlang$frostc$IR$Value*) NULL);
_1796 = ((frost$core$Object*) _1794);
frost$core$Frost$ref$frost$core$Object$Q(_1796);
_1798 = *(&local37);
_1799 = ((frost$core$Object*) _1798);
frost$core$Frost$unref$frost$core$Object$Q(_1799);
*(&local37) = _1794;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:490
_1803 = &param0->contexts;
_1804 = *_1803;
_1805 = _1804;
_1806 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_1805);
_1807 = ((org$frostlang$frostc$Interpreter$Context*) _1806);
_1808 = _1806;
frost$core$Frost$unref$frost$core$Object$Q(_1808);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:491
_1811 = *(&local37);
_1812 = _1811 != NULL;
_1813 = (frost$core$Bit) {_1812};
_1814 = _1813.value;
if (_1814) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:492
_1817 = *(&local1);
_1818 = *(&local37);
_1819 = _1818 != NULL;
_1820 = (frost$core$Bit) {_1819};
_1821 = _1820.value;
if (_1821) goto block178; else goto block179;
block179:;
_1823 = (frost$core$Int) {492u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s389, _1823, &$s390);
abort(); // unreachable
block178:;
_1826 = _1818;
_1827 = ($fn391) _1817->$class->vtable[2];
_1828 = _1827(_1817, _1826);
_1829 = *(&local37);
_1830 = ((frost$core$Object*) _1829);
frost$core$Frost$unref$frost$core$Object$Q(_1830);
*(&local37) = ((org$frostlang$frostc$IR$Value*) NULL);
_1833 = *(&local6);
_1834 = ((frost$core$Object*) _1833);
frost$core$Frost$unref$frost$core$Object$Q(_1834);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
_1837 = *(&local1);
_1838 = ((frost$core$Object*) _1837);
frost$core$Frost$unref$frost$core$Object$Q(_1838);
*(&local1) = ((org$frostlang$frostc$Interpreter$Context*) NULL);
_1841 = *(&local0);
_1842 = ((frost$core$Object*) _1841);
frost$core$Frost$unref$frost$core$Object$Q(_1842);
*(&local0) = ((org$frostlang$frostc$Interpreter$Code*) NULL);
return _1828;
block177:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:494
_1847 = (frost$core$Int64) {18446744073709551615u};
_1848 = *(&local37);
_1849 = ((frost$core$Object*) _1848);
frost$core$Frost$unref$frost$core$Object$Q(_1849);
*(&local37) = ((org$frostlang$frostc$IR$Value*) NULL);
_1852 = *(&local6);
_1853 = ((frost$core$Object*) _1852);
frost$core$Frost$unref$frost$core$Object$Q(_1853);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
_1856 = *(&local1);
_1857 = ((frost$core$Object*) _1856);
frost$core$Frost$unref$frost$core$Object$Q(_1857);
*(&local1) = ((org$frostlang$frostc$Interpreter$Context*) NULL);
_1860 = *(&local0);
_1861 = ((frost$core$Object*) _1860);
frost$core$Frost$unref$frost$core$Object$Q(_1861);
*(&local0) = ((org$frostlang$frostc$Interpreter$Code*) NULL);
return _1847;
block174:;
_1865 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:496:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1868 = _692.value;
_1869 = _1865.value;
_1870 = _1868 == _1869;
_1871 = (frost$core$Bit) {_1870};
_1873 = _1871.value;
if (_1873) goto block180; else goto block181;
block180:;
_1875 = &_690->$data.$STATIC_CALL.field0;
_1876 = *_1875;
_1877 = &_690->$data.$STATIC_CALL.field1;
_1878 = *_1877;
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
_1880 = ((frost$core$Object*) _1878);
frost$core$Frost$ref$frost$core$Object$Q(_1880);
_1882 = *(&local38);
_1883 = ((frost$core$Object*) _1882);
frost$core$Frost$unref$frost$core$Object$Q(_1883);
*(&local38) = _1878;
_1886 = &_690->$data.$STATIC_CALL.field2;
_1887 = *_1886;
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
_1889 = ((frost$core$Object*) _1887);
frost$core$Frost$ref$frost$core$Object$Q(_1889);
_1891 = *(&local39);
_1892 = ((frost$core$Object*) _1891);
frost$core$Frost$unref$frost$core$Object$Q(_1892);
*(&local39) = _1887;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:497
_1896 = *(&local1);
_1897 = &_1896->statements;
_1898 = *_1897;
_1899 = _1898;
_1900 = *(&local5);
_1901 = _1900.value;
_1902 = *(&local38);
_1903 = *(&local39);
_1904 = ($fn392) param0->$class->vtable[17];
_1905 = _1904(param0, _1902, _1903);
_1906 = ((frost$core$Int64$nullable) { _1905, true });
frost$core$Object* $tmp393;
if (_1906.nonnull) {
    frost$core$Int64$wrapper* $tmp394;
    $tmp394 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp394->value = ((frost$core$Int64) _1906.value);
    $tmp393 = ((frost$core$Object*) $tmp394);
}
else {
    $tmp393 = NULL;
}
_1907 = $tmp393;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:497:39
_1909 = (frost$core$Int) {0u};
_1910 = _1901.value;
_1911 = _1909.value;
_1912 = _1910 >= _1911;
_1913 = (frost$core$Bit) {_1912};
_1914 = _1913.value;
if (_1914) goto block186; else goto block185;
block186:;
_1916 = ((frost$collections$CollectionView*) _1899);
ITable* $tmp395 = _1916->$class->itable;
while ($tmp395->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp395 = $tmp395->next;
}
_1917 = $tmp395->methods[0];
_1918 = _1917(_1916);
_1919 = _1901.value;
_1920 = _1918.value;
_1921 = _1919 < _1920;
_1922 = (frost$core$Bit) {_1921};
_1923 = _1922.value;
if (_1923) goto block184; else goto block185;
block185:;
_1925 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s396, _1925, &$s397);
abort(); // unreachable
block184:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1929 = &_1899->data;
_1930 = *_1929;
_1931 = frost$core$Int64$init$frost$core$Int(_1901);
_1932 = _1931.value;
_1933 = _1907;
frost$core$Frost$ref$frost$core$Object$Q(_1933);
_1935 = _1930[_1932];
_1936 = _1935;
frost$core$Frost$unref$frost$core$Object$Q(_1936);
_1930[_1932] = _1907;
_1940 = _1907;
frost$core$Frost$unref$frost$core$Object$Q(_1940);
_1942 = *(&local39);
_1943 = ((frost$core$Object*) _1942);
frost$core$Frost$unref$frost$core$Object$Q(_1943);
*(&local39) = ((org$frostlang$frostc$FixedArray*) NULL);
_1946 = *(&local38);
_1947 = ((frost$core$Object*) _1946);
frost$core$Frost$unref$frost$core$Object$Q(_1947);
*(&local38) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block77;
block181:;
_1951 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:499:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1954 = _692.value;
_1955 = _1951.value;
_1956 = _1954 == _1955;
_1957 = (frost$core$Bit) {_1956};
_1959 = _1957.value;
if (_1959) goto block187; else goto block188;
block187:;
_1961 = &_690->$data.$STORE.field0;
_1962 = *_1961;
_1963 = &_690->$data.$STORE.field1;
_1964 = *_1963;
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
_1966 = ((frost$core$Object*) _1964);
frost$core$Frost$ref$frost$core$Object$Q(_1966);
_1968 = *(&local40);
_1969 = ((frost$core$Object*) _1968);
frost$core$Frost$unref$frost$core$Object$Q(_1969);
*(&local40) = _1964;
_1972 = &_690->$data.$STORE.field2;
_1973 = *_1972;
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
_1975 = ((frost$core$Object*) _1973);
frost$core$Frost$ref$frost$core$Object$Q(_1975);
_1977 = *(&local41);
_1978 = ((frost$core$Object*) _1977);
frost$core$Frost$unref$frost$core$Object$Q(_1978);
*(&local41) = _1973;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:500
_1982 = *(&local1);
_1983 = *(&local40);
_1984 = ($fn398) _1982->$class->vtable[2];
_1985 = _1984(_1982, _1983);
*(&local42) = _1985;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:501
_1988 = *(&local1);
_1989 = *(&local41);
_1990 = ($fn399) _1988->$class->vtable[2];
_1991 = _1990(_1988, _1989);
*(&local43) = _1991;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:502
_1994 = *(&local42);
frost$core$Int64$wrapper* $tmp400;
$tmp400 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp400->value = _1994;
_1995 = ((frost$core$Object*) $tmp400);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:502:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_1998 = ($fn401) _1995->$class->vtable[0];
_1999 = _1998(_1995);
_2000 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s402, _1999);
_2001 = ((frost$core$Object*) _2000);
frost$core$Frost$ref$frost$core$Object$Q(_2001);
_2003 = ((frost$core$Object*) _2000);
frost$core$Frost$unref$frost$core$Object$Q(_2003);
_2005 = ((frost$core$Object*) _1999);
frost$core$Frost$unref$frost$core$Object$Q(_2005);
_2008 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2000, &$s403);
_2009 = *(&local43);
frost$core$Int64$wrapper* $tmp404;
$tmp404 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp404->value = _2009;
_2010 = ((frost$core$Formattable*) $tmp404);
ITable* $tmp405 = _2010->$class->itable;
while ($tmp405->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp405 = $tmp405->next;
}
_2011 = $tmp405->methods[0];
_2012 = _2011(_2010, &$s406);
_2013 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2008, _2012);
_2014 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2013, &$s407);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Interpreter.frost:502:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_2014);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s408);
_2024 = ((frost$core$Object*) _2014);
frost$core$Frost$unref$frost$core$Object$Q(_2024);
_2026 = ((frost$core$Object*) _2013);
frost$core$Frost$unref$frost$core$Object$Q(_2026);
_2028 = ((frost$core$Object*) _2012);
frost$core$Frost$unref$frost$core$Object$Q(_2028);
_2030 = ((frost$core$Object*) _2010);
frost$core$Frost$unref$frost$core$Object$Q(_2030);
_2032 = ((frost$core$Object*) _2008);
frost$core$Frost$unref$frost$core$Object$Q(_2032);
_2034 = ((frost$core$Object*) _2000);
frost$core$Frost$unref$frost$core$Object$Q(_2034);
_2036 = _1995;
frost$core$Frost$unref$frost$core$Object$Q(_2036);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:503
_2039 = *(&local43);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:503:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_2042 = _2039.value;
_2043 = ((int64_t) _2042);
_2044 = (frost$core$Int) {_2043};
_2046 = _2044.value;
_2047 = ((frost$core$Int64*) _2046);
_2048 = *(&local42);
*_2047 = _2048;
_2050 = *(&local41);
_2051 = ((frost$core$Object*) _2050);
frost$core$Frost$unref$frost$core$Object$Q(_2051);
*(&local41) = ((org$frostlang$frostc$IR$Value*) NULL);
_2054 = *(&local40);
_2055 = ((frost$core$Object*) _2054);
frost$core$Frost$unref$frost$core$Object$Q(_2055);
*(&local40) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block77;
block188:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:506
_2060 = (frost$core$Int) {506u};
_2061 = *(&local6);
_2062 = ((frost$core$Object*) _2061);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:506:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2065 = ($fn409) _2062->$class->vtable[0];
_2066 = _2065(_2062);
_2067 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s410, _2066);
_2068 = ((frost$core$Object*) _2067);
frost$core$Frost$ref$frost$core$Object$Q(_2068);
_2070 = ((frost$core$Object*) _2067);
frost$core$Frost$unref$frost$core$Object$Q(_2070);
_2072 = ((frost$core$Object*) _2066);
frost$core$Frost$unref$frost$core$Object$Q(_2072);
_2075 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2067, &$s411);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s412, _2060, _2075);
_2077 = ((frost$core$Object*) _2075);
frost$core$Frost$unref$frost$core$Object$Q(_2077);
_2079 = ((frost$core$Object*) _2067);
frost$core$Frost$unref$frost$core$Object$Q(_2079);
abort(); // unreachable
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:509
_2083 = *(&local4);
_2084 = (frost$core$Int) {1u};
_2085 = _2083.value;
_2086 = _2084.value;
_2087 = _2085 + _2086;
_2088 = (frost$core$Int) {_2087};
*(&local4) = _2088;
_2090 = *(&local6);
_2091 = ((frost$core$Object*) _2090);
frost$core$Frost$unref$frost$core$Object$Q(_2091);
*(&local6) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block50;
block51:;
goto block195;
block195:;

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
org$frostlang$frostc$FixedArray* _35;
$fn413 _37;
frost$core$Int64 _38;
frost$core$Object* _39;
frost$collections$Stack** _42;
frost$collections$Stack* _43;
frost$collections$Stack* _44;
org$frostlang$frostc$Interpreter$Context* _45;
org$frostlang$frostc$Interpreter$Code* _46;
frost$core$Int _47;
frost$collections$Array* _48;
frost$collections$Array* _49;
frost$core$Int _50;
frost$collections$Array* _52;
frost$collections$Array* _53;
frost$core$Int _54;
frost$collections$Array* _56;
frost$collections$Array* _57;
frost$core$Int _58;
frost$core$Object* _62;
frost$collections$Array** _65;
frost$collections$Array* _66;
frost$collections$Array* _67;
frost$core$Object* _68;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Object* _75;
frost$core$Object* _77;
frost$core$Object* _79;
frost$collections$HashMap** _82;
frost$collections$HashMap* _83;
frost$collections$MapView* _84;
$fn414 _85;
frost$collections$Iterator* _86;
frost$collections$Iterator* _87;
frost$collections$Iterator* _89;
$fn415 _90;
frost$core$Bit _91;
bool _92;
frost$collections$Iterator* _94;
$fn416 _95;
frost$core$Object* _96;
frost$core$Int64 _97;
frost$core$Int64 _100;
int64_t _103;
int64_t _104;
frost$core$Int _105;
int64_t _107;
frost$core$UInt8* _108;
$fn417 _109;
frost$core$Object* _111;
frost$core$Object* _114;
frost$collections$HashMap** _117;
frost$collections$HashMap* _118;
frost$collections$HashMap* _119;
frost$collections$Stack** _122;
frost$collections$Stack* _123;
frost$collections$Stack* _124;
frost$core$Object* _125;
org$frostlang$frostc$Interpreter$Context* _126;
frost$core$Object* _127;
frost$collections$IdentityMap** _130;
frost$collections$IdentityMap* _131;
frost$collections$IdentityMap* _132;
frost$collections$Stack** _135;
frost$collections$Stack* _136;
frost$collections$Stack* _137;
frost$collections$Array** _140;
frost$collections$Array* _141;
frost$collections$CollectionView* _142;
$fn418 _143;
frost$core$Int _144;
frost$core$Int _146;
int64_t _149;
int64_t _150;
bool _151;
frost$core$Bit _152;
bool _154;
frost$core$Int _156;
org$frostlang$frostc$LLVMCodeGenerator** _160;
org$frostlang$frostc$LLVMCodeGenerator* _161;
frost$collections$IdentityMap** _162;
frost$collections$IdentityMap* _163;
frost$collections$IdentityMap* _164;
org$frostlang$frostc$LLVMCodeGenerator** _167;
org$frostlang$frostc$LLVMCodeGenerator* _168;
frost$collections$IdentityMap** _169;
frost$collections$IdentityMap* _170;
frost$collections$IdentityMap* _171;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:514
_1 = &param0->main;
_2 = *_1;
_3 = _2 == NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:515
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Interpreter.frost:515:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s419);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s420);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:516
_18 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_18);
_20 = (frost$core$Int) {516u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s421, _20, &$s422);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:518
_24 = &param0->main;
_25 = *_24;
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block5; else goto block6;
block6:;
_30 = (frost$core$Int) {518u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s423, _30, &$s424);
abort(); // unreachable
block5:;
_33 = _25;
_34 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray), (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
_35 = _34;
org$frostlang$frostc$FixedArray$init(_35);
_37 = ($fn425) param0->$class->vtable[17];
_38 = _37(param0, _33, _34);
_39 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_39);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:519
_42 = &param0->contexts;
_43 = *_42;
_44 = _43;
_45 = (org$frostlang$frostc$Interpreter$Context*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$Context), (frost$core$Class*) &org$frostlang$frostc$Interpreter$Context$class);
_46 = (org$frostlang$frostc$Interpreter$Code*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$Code), (frost$core$Class*) &org$frostlang$frostc$Interpreter$Code$class);
_47 = (frost$core$Int) {0u};
_48 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_49 = _48;
_50 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int(_49, _50);
_52 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_53 = _52;
_54 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int(_53, _54);
_56 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_57 = _56;
_58 = (frost$core$Int) {0u};
frost$collections$Array$init$frost$core$Int(_57, _58);
org$frostlang$frostc$Interpreter$Code$init$frost$core$Int$frost$collections$Array$LTfrost$core$Int$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT$GT(_46, _47, _48, _52, _56);
org$frostlang$frostc$Interpreter$Context$init$org$frostlang$frostc$Interpreter$org$frostlang$frostc$Interpreter$Code(_45, param0, _46);
_62 = ((frost$core$Object*) _45);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Interpreter.frost:519:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_65 = &_44->contents;
_66 = *_65;
_67 = _66;
_68 = _62;
frost$collections$Array$add$frost$collections$Array$T(_67, _68);
_71 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_79);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:520
_82 = &param0->strings;
_83 = *_82;
_84 = ((frost$collections$MapView*) _83);
ITable* $tmp426 = _84->$class->itable;
while ($tmp426->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp426 = $tmp426->next;
}
_85 = $tmp426->methods[5];
_86 = _85(_84);
_87 = _86;
goto block8;
block8:;
_89 = _87;
ITable* $tmp427 = _89->$class->itable;
while ($tmp427->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp427 = $tmp427->next;
}
_90 = $tmp427->methods[0];
_91 = _90(_89);
_92 = _91.value;
if (_92) goto block10; else goto block9;
block9:;
_94 = _87;
ITable* $tmp428 = _94->$class->itable;
while ($tmp428->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp428 = $tmp428->next;
}
_95 = $tmp428->methods[1];
_96 = _95(_94);
_97 = ((frost$core$Int64$wrapper*) _96)->value;
*(&local0) = _97;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:521
_100 = *(&local0);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:521:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_103 = _100.value;
_104 = ((int64_t) _103);
_105 = (frost$core$Int) {_104};
_107 = _105.value;
_108 = ((frost$core$UInt8*) _107);
_109 = ($fn429) param0->$class->vtable[8];
_109(param0, _108);
_111 = _96;
frost$core$Frost$unref$frost$core$Object$Q(_111);
goto block8;
block10:;
_114 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_114);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:523
_117 = &param0->strings;
_118 = *_117;
_119 = _118;
frost$collections$HashMap$clear(_119);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:524
_122 = &param0->contexts;
_123 = *_122;
_124 = _123;
_125 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_124);
_126 = ((org$frostlang$frostc$Interpreter$Context*) _125);
_127 = _125;
frost$core$Frost$unref$frost$core$Object$Q(_127);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:525
_130 = &param0->builtins;
_131 = *_130;
_132 = _131;
frost$collections$IdentityMap$clear(_132);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:526
_135 = &param0->contexts;
_136 = *_135;
_137 = _136;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Interpreter.frost:526:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_140 = &_137->contents;
_141 = *_140;
_142 = ((frost$collections$CollectionView*) _141);
ITable* $tmp430 = _142->$class->itable;
while ($tmp430->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp430 = $tmp430->next;
}
_143 = $tmp430->methods[0];
_144 = _143(_142);
_146 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:526:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_149 = _144.value;
_150 = _146.value;
_151 = _149 == _150;
_152 = (frost$core$Bit) {_151};
_154 = _152.value;
if (_154) goto block14; else goto block15;
block15:;
_156 = (frost$core$Int) {526u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s431, _156);
abort(); // unreachable
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:527
_160 = &param0->llvmCodeGen;
_161 = *_160;
_162 = &_161->sizes;
_163 = *_162;
_164 = _163;
frost$collections$IdentityMap$clear(_164);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:528
_167 = &param0->llvmCodeGen;
_168 = *_167;
_169 = &_168->alignments;
_170 = *_169;
_171 = _170;
frost$collections$IdentityMap$clear(_171);
return;

}
void org$frostlang$frostc$Interpreter$init(void* rawSelf) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$collections$HashMap* _1;
frost$collections$HashMap* _2;
frost$core$Object* _4;
frost$collections$HashMap** _6;
frost$collections$HashMap* _7;
frost$core$Object* _8;
frost$collections$HashMap** _10;
frost$core$Object* _12;
frost$core$Weak* _15;
frost$core$Weak* _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Weak** _21;
frost$core$Weak* _22;
frost$core$Object* _23;
frost$core$Weak** _25;
frost$core$Object* _27;
org$frostlang$frostc$LLVMCodeGenerator* _30;
frost$io$MemoryOutputStream* _31;
frost$io$OutputStream* _33;
frost$core$Object* _35;
org$frostlang$frostc$LLVMCodeGenerator** _37;
org$frostlang$frostc$LLVMCodeGenerator* _38;
frost$core$Object* _39;
org$frostlang$frostc$LLVMCodeGenerator** _41;
frost$core$Object* _43;
frost$core$Object* _45;
frost$collections$IdentityMap* _48;
frost$collections$IdentityMap* _49;
frost$core$Object* _51;
frost$collections$IdentityMap** _53;
frost$collections$IdentityMap* _54;
frost$core$Object* _55;
frost$collections$IdentityMap** _57;
frost$core$Object* _59;
frost$collections$IdentityMap* _62;
frost$collections$IdentityMap* _63;
frost$core$Object* _65;
frost$collections$IdentityMap** _67;
frost$collections$IdentityMap* _68;
frost$core$Object* _69;
frost$collections$IdentityMap** _71;
frost$core$Object* _73;
frost$collections$Stack* _76;
frost$collections$Stack* _77;
frost$core$Object* _79;
frost$collections$Stack** _81;
frost$collections$Stack* _82;
frost$core$Object* _83;
frost$collections$Stack** _85;
frost$core$Object* _87;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:10
_1 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
_2 = _1;
frost$collections$HashMap$init(_2);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->strings;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->strings;
*_10 = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:166
_15 = (frost$core$Weak*) frostObjectAlloc(sizeof(frost$core$Weak), (frost$core$Class*) &frost$core$Weak$class);
_16 = _15;
_17 = ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL));
frost$core$Weak$init$frost$core$Weak$T$Q(_16, _17);
_19 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = &param0->compiler;
_22 = *_21;
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = &param0->compiler;
*_25 = _15;
_27 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_27);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:168
_30 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$LLVMCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
_31 = (frost$io$MemoryOutputStream*) frostObjectAlloc(sizeof(frost$io$MemoryOutputStream), (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init(_31);
_33 = ((frost$io$OutputStream*) _31);
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream(_30, &$s432, _33);
_35 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = &param0->llvmCodeGen;
_38 = *_37;
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = &param0->llvmCodeGen;
*_41 = _30;
_43 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_45);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:170
_48 = (frost$collections$IdentityMap*) frostObjectAlloc(sizeof(frost$collections$IdentityMap), (frost$core$Class*) &frost$collections$IdentityMap$class);
_49 = _48;
frost$collections$IdentityMap$init(_49);
_51 = ((frost$core$Object*) _48);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = &param0->methodCode;
_54 = *_53;
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = &param0->methodCode;
*_57 = _48;
_59 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_59);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:172
_62 = (frost$collections$IdentityMap*) frostObjectAlloc(sizeof(frost$collections$IdentityMap), (frost$core$Class*) &frost$collections$IdentityMap$class);
_63 = _62;
frost$collections$IdentityMap$init(_63);
_65 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_65);
_67 = &param0->builtins;
_68 = *_67;
_69 = ((frost$core$Object*) _68);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = &param0->builtins;
*_71 = _62;
_73 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_73);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:174
_76 = (frost$collections$Stack*) frostObjectAlloc(sizeof(frost$collections$Stack), (frost$core$Class*) &frost$collections$Stack$class);
_77 = _76;
frost$collections$Stack$init(_77);
_79 = ((frost$core$Object*) _76);
frost$core$Frost$ref$frost$core$Object$Q(_79);
_81 = &param0->contexts;
_82 = *_81;
_83 = ((frost$core$Object*) _82);
frost$core$Frost$unref$frost$core$Object$Q(_83);
_85 = &param0->contexts;
*_85 = _76;
_87 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_87);
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
org$frostlang$frostc$LLVMCodeGenerator** _11;
org$frostlang$frostc$LLVMCodeGenerator* _12;
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
_11 = &param0->llvmCodeGen;
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

