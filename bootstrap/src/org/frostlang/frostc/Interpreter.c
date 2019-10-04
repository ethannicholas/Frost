#include "org/frostlang/frostc/Interpreter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Backend.h"
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
#include "org/frostlang/frostc/Interpreter/MethodCode.h"
#include "org/frostlang/frostc/Interpreter/_Closure15.h"
#include "org/frostlang/frostc/Interpreter/_Closure17.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int32.h"
#include "org/frostlang/frostc/Interpreter/Context.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "frost/core/Int8.h"
#include "frost/io/Console.h"
#include "org/frostlang/frostc/Interpreter/_Closure21.h"
#include "org/frostlang/frostc/Interpreter/_Closure23.h"
#include "frost/core/System.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt64.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int16.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/MethodPosition.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/MapView.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$Interpreter$_org$frostlang$frostc$Backend = { (frost$core$Class*) &org$frostlang$frostc$Backend$class, NULL, { org$frostlang$frostc$Interpreter$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$Interpreter$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$Interpreter$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$Interpreter$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$Interpreter$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$Interpreter$finish} };

static frost$core$String $s1;
org$frostlang$frostc$Interpreter$class_type org$frostlang$frostc$Interpreter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$Interpreter$_org$frostlang$frostc$Backend, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Interpreter$cleanup, org$frostlang$frostc$Interpreter$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$Interpreter$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$Interpreter$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$Interpreter$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$Interpreter$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$Interpreter$finish, org$frostlang$frostc$Interpreter$align$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$unsafe$Pointer$LTfrost$core$UInt8$GT, org$frostlang$frostc$Interpreter$alloca$org$frostlang$frostc$Type$R$frost$unsafe$Pointer$LTfrost$core$UInt8$GT, org$frostlang$frostc$Interpreter$needsStructPointer$org$frostlang$frostc$Type$R$frost$core$Bit, org$frostlang$frostc$Interpreter$destroyObject$frost$unsafe$Pointer$LTfrost$core$UInt8$GT, org$frostlang$frostc$Interpreter$ref$frost$unsafe$Pointer$LTfrost$core$UInt8$GT, org$frostlang$frostc$Interpreter$unref$frost$unsafe$Pointer$LTfrost$core$UInt8$GT, org$frostlang$frostc$Interpreter$getBuiltin$org$frostlang$frostc$MethodDecl$R$$LPorg$frostlang$frostc$Interpreter$Context$Corg$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$RP$EQ$AM$GT$LPfrost$core$Int64$RP, org$frostlang$frostc$Interpreter$callBuiltin$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64, org$frostlang$frostc$Interpreter$cast$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type, org$frostlang$frostc$Interpreter$createStruct$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT, org$frostlang$frostc$Interpreter$extractField$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$Interpreter$getFieldPointer$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl$R$frost$core$Int, org$frostlang$frostc$Interpreter$getFieldPointer$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$Interpreter$bit$frost$core$Bit$R$frost$core$Int64, org$frostlang$frostc$Interpreter$binary$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value, org$frostlang$frostc$Interpreter$call$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64, org$frostlang$frostc$Interpreter$call$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$frost$core$Int64$Q$R$frost$core$Int64, org$frostlang$frostc$Interpreter$run} };

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
typedef frost$core$Bit (*$fn41)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn42)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn50)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn52)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn53)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn54)(org$frostlang$frostc$MemoryLayout*);
typedef void (*$fn55)(org$frostlang$frostc$Interpreter*, frost$unsafe$Pointer);
typedef frost$core$Int (*$fn56)(org$frostlang$frostc$MemoryLayout*);
typedef void (*$fn57)(org$frostlang$frostc$Interpreter*, frost$unsafe$Pointer);
typedef frost$core$Int64 (*$fn58)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn59)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn60)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn61)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn62)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn63)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn65)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn66)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn67)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Object* (*$fn68)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn69)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn70)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Object* (*$fn71)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn72)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn73)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn74)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn75)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn76)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn77)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Object* (*$fn78)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn79)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int64 (*$fn80)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn81)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Object* (*$fn82)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn83)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn84)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Object* (*$fn85)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn86)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn93)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn94)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn103)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn113)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn141)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int64 (*$fn154)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn155)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn165)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$MutableMethod* (*$fn197)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*);
typedef frost$core$MutableMethod* (*$fn198)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*);
typedef frost$core$Int64 (*$fn199)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn200)(frost$core$Object*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$FixedArray*);
typedef org$frostlang$frostc$Type* (*$fn201)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn202)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn203)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn204)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn205)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn206)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Bit (*$fn207)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn208)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn209)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn210)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn211)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn212)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn213)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn214)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn215)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn216)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn217)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn218)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn219)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn220)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn221)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn242)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn249)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Bit (*$fn250)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn251)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Bit (*$fn277)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn283)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn309)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$collections$Iterator* (*$fn310)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn311)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn312)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn313)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn314)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn315)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$String* (*$fn316)(frost$core$Object*);
typedef frost$core$Bit (*$fn317)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn318)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn319)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn320)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn324)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn325)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn326)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$String* (*$fn327)(frost$core$Object*);
typedef frost$core$Bit (*$fn331)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Bit (*$fn342)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn343)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int (*$fn344)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn345)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn346)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn347)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn348)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn349)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn350)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn351)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn354)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn355)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int (*$fn356)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn387)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef void (*$fn393)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int64 (*$fn394)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef void (*$fn397)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$ClassDecl*);
typedef frost$core$Int64 (*$fn399)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn400)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int (*$fn401)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn402)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int64 (*$fn408)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn409)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn410)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn411)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn412)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn413)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn414)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn415)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn416)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn417)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn418)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int (*$fn419)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn420)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int (*$fn421)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn422)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int (*$fn423)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn424)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int (*$fn425)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn426)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn427)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn428)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn429)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn430)(frost$core$Object*);
typedef frost$core$Int64 (*$fn431)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn432)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn473)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int64 (*$fn479)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int64 (*$fn485)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$Int64 (*$fn491)(org$frostlang$frostc$Interpreter*, frost$core$Bit);
typedef frost$core$String* (*$fn518)(frost$core$Object*);
typedef frost$core$Int64 (*$fn522)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*, frost$core$Int64$nullable);
typedef frost$core$Int64 (*$fn523)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*, frost$core$Int64$nullable);
typedef frost$core$Int (*$fn524)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn525)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn526)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn527)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn528)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int (*$fn529)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn530)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn531)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn532)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn533)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn534)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn535)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn536)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn537)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn538)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn539)(frost$core$Object*);
typedef void (*$fn540)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$expression$Binary$Operator, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn541)(frost$collections$CollectionView*);
typedef void (*$fn542)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn543)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn544)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn545)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn546)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn547)(org$frostlang$frostc$MemoryLayout*);
typedef frost$core$Int (*$fn548)(frost$collections$CollectionView*);
typedef void (*$fn549)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$ClassDecl*, org$frostlang$frostc$FixedArray*);
typedef void (*$fn550)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef void (*$fn551)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int64 (*$fn552)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn553)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn554)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn555)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn556)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn557)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn558)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn559)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn560)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn561)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn562)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn563)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn564)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn565)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn566)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn567)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn568)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn569)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn570)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn571)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn572)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int (*$fn573)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn574)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn575)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn576)(frost$core$Object*);
typedef frost$core$Int64 (*$fn593)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn609)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn627)(frost$core$Object*);
typedef void (*$fn628)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$expression$Binary$Operator, org$frostlang$frostc$IR$Value*);
typedef void (*$fn634)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn635)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn646)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn647)(org$frostlang$frostc$MemoryLayout*);
typedef void (*$fn653)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$ClassDecl*, org$frostlang$frostc$FixedArray*);
typedef void (*$fn655)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef void (*$fn656)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Statement$ID, org$frostlang$frostc$IR$Value*, org$frostlang$frostc$FieldDecl*);
typedef frost$core$Int64 (*$fn658)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn659)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn660)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn671)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn677)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn678)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn679)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int (*$fn680)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn686)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn687)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn688)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn689)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn690)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn691)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int (*$fn692)(org$frostlang$frostc$MemoryLayout*, org$frostlang$frostc$Type*);
typedef frost$core$Int64 (*$fn695)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn696)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$core$Int64 (*$fn702)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn703)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef frost$core$String* (*$fn704)(frost$core$Object*);
typedef frost$core$Int64 (*$fn708)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef frost$collections$Iterator* (*$fn709)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn710)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn711)(frost$collections$Iterator*);
typedef void (*$fn712)(org$frostlang$frostc$Interpreter*, frost$unsafe$Pointer);
typedef frost$core$Int (*$fn713)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn720)(org$frostlang$frostc$Interpreter*, org$frostlang$frostc$MethodDecl*, org$frostlang$frostc$FixedArray*);
typedef void (*$fn724)(org$frostlang$frostc$Interpreter*, frost$unsafe$Pointer);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72", 32, -3100534405647567570, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6d\x61\x69\x6e", 4, 2258945139493307336, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x61\x6c\x6c\x6f\x63\x61\x28\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x29\x3a\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e", 139, -7836007591951303402, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 25, 5640649218337482570, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x24\x63\x6c\x61\x73\x73", 6, 884054518070421605, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x66\x43\x6f\x75\x6e\x74", 8, 8091773242217245961, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x24\x66\x6c\x61\x67\x73", 6, 4174342017609101514, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x62\x79\x74\x65\x4f\x72\x64\x65\x72", 9, 1604752574118246001, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6c\x69\x6e\x65\x45\x6e\x64\x69\x6e\x67", 10, 8040207376123656740, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x68\x61\x6e\x64\x6c\x65", 6, -5450643364628759245, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x63\x6c\x6f\x73\x65\x4f\x6e\x43\x6c\x65\x61\x6e\x75\x70", 14, 5708320875867486398, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s174 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x69\x6e\x74\x69\x6e\x67\x20\x73\x6f\x6d\x65\x20\x73\x74\x75\x66\x66\x20\x74\x6f\x20\x73\x74\x64\x65\x72\x72", 29, 6630908848420728129, NULL };
static frost$core$String $s176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20", 1, -5808626142386486913, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x61\x6c\x6c\x6f\x63\x28\x73\x69\x7a\x65\x3a\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x29\x3a\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74", 76, 4764850401415588015, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x64\x65\x73\x74\x72\x6f\x79\x28\x70\x74\x72\x3a\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x29", 65, 2157207107123538406, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x72\x65\x66\x28\x6f\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x29", 66, 8517555090198155938, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x75\x6e\x72\x65\x66\x28\x6f\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x29", 68, -1591211548199132021, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x72\x6f\x73\x74\x2e\x64\x65\x62\x75\x67\x50\x72\x69\x6e\x74\x28\x69\x3a\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34\x29", 68, -7089458726846096077, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x70\x72\x69\x6e\x74\x28\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 67, -2650786360588262487, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x65\x72\x72\x6f\x72\x53\x74\x72\x65\x61\x6d\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 78, -6346338616261503037, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x77\x72\x69\x74\x65\x28\x70\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3e\x2c\x20\x73\x69\x7a\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f", 147, 8464784818768410231, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x61\x74\x61\x6c\x20\x65\x72\x72\x6f\x72\x3a\x20", 13, 3817230338345850721, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x62\x79\x20\x74\x68\x65\x20", 25, -9203381872083098346, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72", 11, -6089209956535185587, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3f\x20\x74\x6f\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 293, -7245596308351737427, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3f\x20\x74\x6f\x20\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x6e\x74\x65\x78\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3e\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 293, -7245596308351737427, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, -4241746971283918425, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s302 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x20", 18, 4314115219735591667, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x66\x69\x65\x6c\x64\x20\x73\x69\x7a\x65", 22, -5074326750169406355, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s457 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s519 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x62\x69\x6e\x61\x72\x79\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x20\x27", 29, 2922146385210293486, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s581 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x64\x65\x72\x65\x66\x65\x72\x65\x6e\x63\x69\x6e\x67\x20\x77\x65\x61\x6b\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x61\x66\x74\x65\x72\x20\x69\x74\x73\x20\x72\x65\x66\x65\x72\x65\x6e\x74\x20\x77\x61\x73\x20\x64\x65\x73\x74\x72\x6f\x79\x65\x64", 59, 1822743730076196218, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s588 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x4d\x65\x74\x68\x6f\x64\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x4d\x65\x74\x68\x6f\x64\x43\x6f\x64\x65", 125, -7653761858597826423, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s597 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x4d\x65\x74\x68\x6f\x64\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x4d\x65\x74\x68\x6f\x64\x43\x6f\x64\x65", 125, -7653761858597826423, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x4d\x65\x74\x68\x6f\x64\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x4d\x65\x74\x68\x6f\x64\x43\x6f\x64\x65", 125, -7653761858597826423, NULL };
static frost$core$String $s622 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s629 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x4d\x65\x74\x68\x6f\x64\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x4d\x65\x74\x68\x6f\x64\x43\x6f\x64\x65", 125, -7653761858597826423, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x4d\x65\x74\x68\x6f\x64\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x4d\x65\x74\x68\x6f\x64\x43\x6f\x64\x65", 125, -7653761858597826423, NULL };
static frost$core$String $s639 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x4d\x65\x74\x68\x6f\x64\x43\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x4d\x65\x74\x68\x6f\x64\x43\x6f\x64\x65", 125, -7653761858597826423, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s652 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s657 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s669 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s685 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, 7559595925391356673, NULL };
static frost$core$String $s700 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s705 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x3a\x20", 23, 7177047828670113807, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6e\x6f\x20\x6d\x61\x69\x6e\x20\x6d\x65\x74\x68\x6f\x64", 14, 8684458706139196112, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s716 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };
static frost$core$String $s719 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 101, 7363539685333061901, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 9085113166149816897, NULL };

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
org$frostlang$frostc$Interpreter$MethodCode* _216;
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
_216 = (org$frostlang$frostc$Interpreter$MethodCode*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$MethodCode), (frost$core$Class*) &org$frostlang$frostc$Interpreter$MethodCode$class);
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
org$frostlang$frostc$Interpreter$MethodCode$init$frost$collections$Array$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTfrost$core$Int$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT$GT$frost$core$Int(_216, _218, _219, _243, _267, _364);
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
frost$core$Bit local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind* _1;
org$frostlang$frostc$Type$Kind _2;
frost$core$Equatable* _3;
frost$core$Int _4;
frost$core$Int* _7;
org$frostlang$frostc$Type$Kind _9;
org$frostlang$frostc$Type$Kind _12;
frost$core$Equatable* _13;
$fn41 _14;
frost$core$Bit _15;
bool _16;
frost$core$Weak** _18;
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
frost$core$Bit _48;
frost$core$Object* _49;
frost$core$Bit _55;
bool _56;
org$frostlang$frostc$MemoryLayout** _58;
org$frostlang$frostc$MemoryLayout* _59;
$fn42 _60;
frost$core$Int _61;
frost$core$Int _62;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
frost$core$Bit _71;
frost$core$Object* _72;
frost$core$Object* _74;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:251
_1 = &param1->typeKind;
_2 = *_1;
org$frostlang$frostc$Type$Kind$wrapper* $tmp43;
$tmp43 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp43->value = _2;
_3 = ((frost$core$Equatable*) $tmp43);
_4 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Interpreter.frost:251:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_7 = &(&local3)->$rawValue;
*_7 = _4;
_9 = *(&local3);
*(&local2) = _9;
_12 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp44;
$tmp44 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp44->value = _12;
_13 = ((frost$core$Equatable*) $tmp44);
ITable* $tmp45 = _3->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp45 = $tmp45->next;
}
_14 = $tmp45->methods[1];
_15 = _14(_3, _13);
_16 = _15.value;
if (_16) goto block2; else goto block3;
block2:;
_18 = &param0->compiler;
_19 = *_18;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:251:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_24 = &_19->_valid;
_25 = *_24;
_27 = _25.value;
if (_27) goto block7; else goto block8;
block8:;
_29 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _29, &$s47);
abort(); // unreachable
block7:;
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
if (_42) goto block9; else goto block10;
block10:;
_44 = (frost$core$Int) {251u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _44, &$s49);
abort(); // unreachable
block9:;
_47 = _39;
_48 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_47, param1);
_49 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local1) = _48;
goto block4;
block3:;
*(&local1) = _15;
goto block4;
block4:;
_55 = *(&local1);
_56 = _55.value;
if (_56) goto block11; else goto block12;
block11:;
_58 = &param0->memoryLayout;
_59 = *_58;
_60 = ($fn50) _59->$class->vtable[7];
_61 = _60(_59, param1);
_62 = (frost$core$Int) {8u};
_63 = _61.value;
_64 = _62.value;
_65 = _63 > _64;
_66 = (frost$core$Bit) {_65};
*(&local0) = _66;
goto block13;
block12:;
*(&local0) = _55;
goto block13;
block13:;
_71 = *(&local0);
_72 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_74);
return _71;

}
void org$frostlang$frostc$Interpreter$destroyObject$frost$unsafe$Pointer$LTfrost$core$UInt8$GT(void* rawSelf, frost$unsafe$Pointer param1) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:262
_1 = (frost$core$Int) {262u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s51, _1);
abort(); // unreachable

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
$fn52 _21;
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
_21 = ($fn53) _20->$class->vtable[3];
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
// begin inline call to function frost.core.Int.get_asInt32():frost.core.Int32 from Interpreter.frost:271:42
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
$fn54 _21;
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
$fn55 _83;
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
_21 = ($fn56) _20->$class->vtable[3];
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
// begin inline call to function frost.core.Int.get_asInt32():frost.core.Int32 from Interpreter.frost:283:42
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
_83 = ($fn57) param0->$class->vtable[11];
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
frost$core$Int64 org$frostlang$frostc$Interpreter$$anonymous18$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(org$frostlang$frostc$Interpreter$Context* param0, org$frostlang$frostc$FixedArray* param1) {

frost$core$Int _1;
frost$core$Object* _2;
org$frostlang$frostc$IR$Value* _3;
$fn58 _4;
frost$core$Int64 _5;
int64_t _8;
int64_t _9;
frost$core$Int _10;
int64_t _12;
int64_t _13;
frost$core$Int _14;
int64_t _17;
int64_t _18;
frost$core$Int64 _19;
frost$core$Object* _21;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:301
_1 = (frost$core$Int) {0u};
_2 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param1, _1);
_3 = ((org$frostlang$frostc$IR$Value*) _2);
_4 = ($fn59) param0->$class->vtable[2];
_5 = _4(param0, _3);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:301:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_8 = _5.value;
_9 = ((int64_t) _8);
_10 = (frost$core$Int) {_9};
_12 = _10.value;
_13 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_12);
_14 = (frost$core$Int) {_13};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:301:84
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_17 = _14.value;
_18 = ((int64_t) _17);
_19 = (frost$core$Int64) {_18};
_21 = _2;
frost$core$Frost$unref$frost$core$Object$Q(_21);
return _19;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$$anonymous19$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(org$frostlang$frostc$Interpreter$Context* param0, org$frostlang$frostc$FixedArray* param1) {

frost$core$Int _1;
frost$core$Object* _2;
org$frostlang$frostc$IR$Value* _3;
$fn60 _4;
frost$core$Int64 _5;
int64_t _8;
int64_t _9;
frost$core$Int _10;
int64_t _12;
frost$core$Object* _14;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:306
_1 = (frost$core$Int) {0u};
_2 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param1, _1);
_3 = ((org$frostlang$frostc$IR$Value*) _2);
_4 = ($fn61) param0->$class->vtable[2];
_5 = _4(param0, _3);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:306:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_8 = _5.value;
_9 = ((int64_t) _8);
_10 = (frost$core$Int) {_9};
_12 = _10.value;
frost$core$Frost$destroy$builtin_int(_12);
_14 = _2;
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:307
_17 = (frost$core$Int64) {18446744073709551615u};
return _17;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$$anonymous24$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(org$frostlang$frostc$Interpreter$Context* param0, org$frostlang$frostc$FixedArray* param1) {

frost$core$Int _1;
frost$core$Object* _2;
org$frostlang$frostc$IR$Value* _3;
$fn62 _4;
frost$core$Int64 _5;
int64_t _6;
frost$core$Object* _8;
frost$core$Int64 _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:324
_1 = (frost$core$Int) {0u};
_2 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param1, _1);
_3 = ((org$frostlang$frostc$IR$Value*) _2);
_4 = ($fn63) param0->$class->vtable[2];
_5 = _4(param0, _3);
_6 = _5.value;
frost$core$Frost$debugPrint$builtin_int64(_6);
_8 = _2;
frost$core$Frost$unref$frost$core$Object$Q(_8);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:325
_11 = (frost$core$Int64) {18446744073709551615u};
return _11;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$$anonymous25$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(org$frostlang$frostc$Interpreter$Context* param0, org$frostlang$frostc$FixedArray* param1) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:334
_1 = (frost$core$Int) {334u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s64, _1);
abort(); // unreachable

}
frost$core$Int64 org$frostlang$frostc$Interpreter$$anonymous26$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(org$frostlang$frostc$Interpreter$Context* param0, org$frostlang$frostc$FixedArray* param1) {

org$frostlang$frostc$Interpreter* local0 = NULL;
org$frostlang$frostc$Compiler* local1 = NULL;
org$frostlang$frostc$MemoryLayout* local2 = NULL;
org$frostlang$frostc$Type$Kind local3;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$ClassDecl* local6 = NULL;
frost$unsafe$Pointer local7;
frost$unsafe$Pointer local8;
int64_t local9;
int64_t local10;
int64_t local11;
int64_t local12;
int64_t local13;
int64_t local14;
int64_t local15;
int64_t local16;
int64_t local17;
int64_t local18;
int64_t local19;
int64_t local20;
int64_t local21;
int64_t local22;
frost$core$Weak** _1;
frost$core$Weak* _2;
frost$core$Bit _5;
bool _6;
frost$core$Int _8;
frost$core$Object** _12;
frost$core$Object* _13;
frost$core$Object* _14;
frost$core$Object* _15;
org$frostlang$frostc$Interpreter* _18;
frost$core$Object* _20;
org$frostlang$frostc$Interpreter* _22;
frost$core$Object* _23;
frost$core$Object* _26;
org$frostlang$frostc$Interpreter* _29;
frost$core$Weak** _30;
frost$core$Weak* _31;
frost$core$Bit _34;
bool _35;
frost$core$Int _37;
frost$core$Object** _41;
frost$core$Object* _42;
frost$core$Object* _43;
frost$core$Object* _44;
org$frostlang$frostc$Compiler* _47;
frost$core$Object* _49;
org$frostlang$frostc$Compiler* _51;
frost$core$Object* _52;
frost$core$Object* _55;
org$frostlang$frostc$Compiler* _58;
bool _59;
frost$core$Bit _60;
bool _61;
frost$core$Int _63;
org$frostlang$frostc$Compiler* _66;
org$frostlang$frostc$MemoryLayout** _67;
org$frostlang$frostc$MemoryLayout* _68;
frost$core$Object* _70;
org$frostlang$frostc$MemoryLayout* _72;
frost$core$Object* _73;
org$frostlang$frostc$MemoryLayout* _77;
$fn65 _78;
frost$core$Int _79;
org$frostlang$frostc$MemoryLayout* _80;
$fn66 _81;
frost$core$Int _82;
int64_t _85;
int64_t _86;
bool _87;
frost$core$Bit _88;
bool _90;
frost$core$Int _92;
org$frostlang$frostc$Type* _96;
frost$core$Int _97;
frost$core$Int* _100;
org$frostlang$frostc$Type$Kind _102;
org$frostlang$frostc$Type$Kind _105;
org$frostlang$frostc$Position _106;
frost$core$Bit _107;
frost$core$Object* _110;
org$frostlang$frostc$Type* _112;
frost$core$Object* _113;
frost$core$Object* _116;
org$frostlang$frostc$Compiler* _119;
bool _120;
frost$core$Bit _121;
bool _122;
frost$core$Int _124;
org$frostlang$frostc$Compiler* _127;
org$frostlang$frostc$Type* _128;
org$frostlang$frostc$ClassDecl* _129;
bool _130;
frost$core$Bit _131;
bool _132;
frost$core$Int _134;
org$frostlang$frostc$ClassDecl* _137;
frost$core$Object* _139;
org$frostlang$frostc$ClassDecl* _141;
frost$core$Object* _142;
frost$core$Object* _145;
org$frostlang$frostc$Compiler* _148;
bool _149;
frost$core$Bit _150;
bool _151;
frost$core$Int _153;
org$frostlang$frostc$Compiler* _156;
org$frostlang$frostc$ClassDecl* _157;
frost$core$Bit _158;
org$frostlang$frostc$Interpreter* _160;
org$frostlang$frostc$MemoryLayout** _161;
org$frostlang$frostc$MemoryLayout* _162;
org$frostlang$frostc$Type* _163;
$fn67 _164;
frost$core$Int _165;
int64_t _168;
int64_t _169;
int64_t _170;
frost$unsafe$Pointer _171;
frost$unsafe$Pointer _175;
org$frostlang$frostc$Compiler* _178;
bool _179;
frost$core$Bit _180;
bool _181;
frost$core$Int _183;
org$frostlang$frostc$Compiler* _186;
org$frostlang$frostc$ClassDecl* _187;
frost$collections$ListView* _188;
frost$core$Int _189;
$fn68 _190;
frost$core$Object* _191;
org$frostlang$frostc$FieldDecl* _192;
org$frostlang$frostc$Symbol* _193;
frost$core$String** _194;
frost$core$String* _195;
frost$core$Bit _196;
bool _197;
frost$core$Int _199;
frost$core$Object* _202;
frost$core$Object* _204;
frost$unsafe$Pointer _207;
int64_t _210;
frost$core$Int _211;
frost$unsafe$Pointer _213;
int64_t _216;
frost$core$Int _217;
int64_t _219;
int64_t _220;
int64_t _221;
frost$core$Int _222;
org$frostlang$frostc$Compiler* _223;
bool _224;
frost$core$Bit _225;
bool _226;
frost$core$Int _228;
org$frostlang$frostc$Compiler* _231;
org$frostlang$frostc$ClassDecl* _232;
frost$collections$ListView* _233;
frost$core$Int _234;
$fn69 _235;
frost$core$Object* _236;
org$frostlang$frostc$FieldDecl* _237;
frost$core$Int* _238;
frost$core$Int _239;
int64_t _242;
int64_t _243;
bool _244;
frost$core$Bit _245;
bool _247;
frost$core$Int _249;
frost$core$Object* _252;
frost$core$Object* _254;
frost$unsafe$Pointer _257;
int64_t _258;
org$frostlang$frostc$ClassDecl* _259;
frost$core$Object* _260;
org$frostlang$frostc$ClassDecl* _262;
frost$core$Object* _263;
frost$unsafe$Pointer _267;
org$frostlang$frostc$MemoryLayout* _268;
$fn70 _269;
frost$core$Int _270;
int64_t _273;
int64_t _278;
int64_t _279;
int64_t _280;
int64_t _281;
int64_t _282;
frost$unsafe$Pointer _283;
org$frostlang$frostc$Compiler* _287;
bool _288;
frost$core$Bit _289;
bool _290;
frost$core$Int _292;
org$frostlang$frostc$Compiler* _295;
org$frostlang$frostc$ClassDecl* _296;
frost$collections$ListView* _297;
frost$core$Int _298;
$fn71 _299;
frost$core$Object* _300;
org$frostlang$frostc$FieldDecl* _301;
org$frostlang$frostc$Symbol* _302;
frost$core$String** _303;
frost$core$String* _304;
frost$core$Bit _305;
bool _306;
frost$core$Int _308;
frost$core$Object* _311;
frost$core$Object* _313;
frost$unsafe$Pointer _316;
int64_t _319;
frost$core$Int _320;
frost$unsafe$Pointer _322;
int64_t _325;
frost$core$Int _326;
int64_t _328;
int64_t _329;
int64_t _330;
frost$core$Int _331;
org$frostlang$frostc$Compiler* _332;
bool _333;
frost$core$Bit _334;
bool _335;
frost$core$Int _337;
org$frostlang$frostc$Compiler* _340;
org$frostlang$frostc$ClassDecl* _341;
frost$collections$ListView* _342;
frost$core$Int _343;
$fn72 _344;
frost$core$Object* _345;
org$frostlang$frostc$FieldDecl* _346;
frost$core$Int* _347;
frost$core$Int _348;
int64_t _351;
int64_t _352;
bool _353;
frost$core$Bit _354;
bool _356;
frost$core$Int _358;
frost$core$Object* _361;
frost$core$Object* _363;
frost$unsafe$Pointer _366;
int64_t _367;
frost$core$Int32 _368;
frost$unsafe$Pointer _371;
frost$core$Int _372;
int64_t _375;
int64_t _380;
int64_t _381;
int64_t _382;
int64_t _383;
int64_t _384;
frost$unsafe$Pointer _385;
org$frostlang$frostc$Compiler* _389;
bool _390;
frost$core$Bit _391;
bool _392;
frost$core$Int _394;
org$frostlang$frostc$Compiler* _397;
org$frostlang$frostc$ClassDecl* _398;
frost$collections$ListView* _399;
frost$core$Int _400;
$fn73 _401;
frost$core$Object* _402;
org$frostlang$frostc$FieldDecl* _403;
org$frostlang$frostc$Symbol* _404;
frost$core$String** _405;
frost$core$String* _406;
frost$core$Bit _407;
bool _408;
frost$core$Int _410;
frost$core$Object* _413;
frost$core$Object* _415;
frost$unsafe$Pointer _418;
int64_t _421;
frost$core$Int _422;
frost$unsafe$Pointer _424;
int64_t _427;
frost$core$Int _428;
int64_t _430;
int64_t _431;
int64_t _432;
frost$core$Int _433;
org$frostlang$frostc$Compiler* _434;
bool _435;
frost$core$Bit _436;
bool _437;
frost$core$Int _439;
org$frostlang$frostc$Compiler* _442;
org$frostlang$frostc$ClassDecl* _443;
frost$collections$ListView* _444;
frost$core$Int _445;
$fn74 _446;
frost$core$Object* _447;
org$frostlang$frostc$FieldDecl* _448;
frost$core$Int* _449;
frost$core$Int _450;
int64_t _453;
int64_t _454;
bool _455;
frost$core$Bit _456;
bool _458;
frost$core$Int _460;
frost$core$Object* _463;
frost$core$Object* _465;
frost$unsafe$Pointer _468;
int64_t _469;
frost$core$Int8 _470;
frost$unsafe$Pointer _473;
frost$core$Int _474;
int64_t _477;
int64_t _482;
int64_t _483;
int64_t _484;
int64_t _485;
int64_t _486;
frost$unsafe$Pointer _487;
org$frostlang$frostc$Compiler* _491;
bool _492;
frost$core$Bit _493;
bool _494;
frost$core$Int _496;
org$frostlang$frostc$Compiler* _499;
org$frostlang$frostc$ClassDecl* _500;
frost$collections$ListView* _501;
frost$core$Int _502;
$fn75 _503;
frost$core$Object* _504;
org$frostlang$frostc$FieldDecl* _505;
org$frostlang$frostc$Symbol* _506;
frost$core$String** _507;
frost$core$String* _508;
frost$core$Bit _509;
bool _510;
frost$core$Int _512;
frost$core$Object* _515;
frost$core$Object* _517;
frost$unsafe$Pointer _520;
int64_t _523;
frost$core$Int _524;
frost$unsafe$Pointer _526;
int64_t _529;
frost$core$Int _530;
int64_t _532;
int64_t _533;
int64_t _534;
frost$core$Int _535;
org$frostlang$frostc$Compiler* _536;
bool _537;
frost$core$Bit _538;
bool _539;
frost$core$Int _541;
org$frostlang$frostc$Compiler* _544;
org$frostlang$frostc$ClassDecl* _545;
frost$collections$ListView* _546;
frost$core$Int _547;
$fn76 _548;
frost$core$Object* _549;
org$frostlang$frostc$FieldDecl* _550;
frost$core$Int* _551;
frost$core$Int _552;
int64_t _555;
int64_t _556;
bool _557;
frost$core$Bit _558;
bool _560;
frost$core$Int _562;
frost$core$Object* _565;
frost$core$Object* _567;
frost$unsafe$Pointer _570;
int64_t _571;
frost$core$Int _572;
frost$unsafe$Pointer _575;
org$frostlang$frostc$MemoryLayout* _576;
$fn77 _577;
frost$core$Int _578;
int64_t _581;
int64_t _586;
int64_t _587;
int64_t _588;
int64_t _589;
int64_t _590;
frost$unsafe$Pointer _591;
org$frostlang$frostc$Compiler* _595;
bool _596;
frost$core$Bit _597;
bool _598;
frost$core$Int _600;
org$frostlang$frostc$Compiler* _603;
org$frostlang$frostc$ClassDecl* _604;
frost$collections$ListView* _605;
frost$core$Int _606;
$fn78 _607;
frost$core$Object* _608;
org$frostlang$frostc$FieldDecl* _609;
org$frostlang$frostc$Symbol* _610;
frost$core$String** _611;
frost$core$String* _612;
frost$core$Bit _613;
bool _614;
frost$core$Int _616;
frost$core$Object* _619;
frost$core$Object* _621;
frost$unsafe$Pointer _624;
int64_t _627;
frost$core$Int _628;
frost$unsafe$Pointer _630;
int64_t _633;
frost$core$Int _634;
int64_t _636;
int64_t _637;
int64_t _638;
frost$core$Int _639;
org$frostlang$frostc$Compiler* _640;
bool _641;
frost$core$Bit _642;
bool _643;
frost$core$Int _645;
org$frostlang$frostc$Compiler* _648;
org$frostlang$frostc$ClassDecl* _649;
frost$collections$ListView* _650;
frost$core$Int _651;
$fn79 _652;
frost$core$Object* _653;
org$frostlang$frostc$FieldDecl* _654;
frost$core$Int* _655;
frost$core$Int _656;
int64_t _659;
int64_t _660;
bool _661;
frost$core$Bit _662;
bool _664;
frost$core$Int _666;
frost$core$Object* _669;
frost$core$Object* _671;
frost$unsafe$Pointer _674;
int64_t _675;
org$frostlang$frostc$IR$Value* _676;
frost$core$Int _677;
org$frostlang$frostc$Compiler* _678;
bool _679;
frost$core$Bit _680;
bool _681;
frost$core$Int _683;
org$frostlang$frostc$Compiler* _686;
org$frostlang$frostc$Type** _687;
org$frostlang$frostc$Type* _688;
$fn80 _690;
frost$core$Int64 _691;
int64_t _694;
int64_t _695;
frost$core$Int _696;
frost$core$Object* _699;
frost$unsafe$Pointer _702;
org$frostlang$frostc$MemoryLayout* _703;
$fn81 _704;
frost$core$Int _705;
int64_t _708;
int64_t _713;
int64_t _714;
int64_t _715;
int64_t _716;
int64_t _717;
frost$unsafe$Pointer _718;
org$frostlang$frostc$Compiler* _722;
bool _723;
frost$core$Bit _724;
bool _725;
frost$core$Int _727;
org$frostlang$frostc$Compiler* _730;
org$frostlang$frostc$ClassDecl* _731;
frost$collections$ListView* _732;
frost$core$Int _733;
$fn82 _734;
frost$core$Object* _735;
org$frostlang$frostc$FieldDecl* _736;
org$frostlang$frostc$Symbol* _737;
frost$core$String** _738;
frost$core$String* _739;
frost$core$Bit _740;
bool _741;
frost$core$Int _743;
frost$core$Object* _746;
frost$core$Object* _748;
frost$unsafe$Pointer _751;
int64_t _754;
frost$core$Int _755;
frost$unsafe$Pointer _757;
int64_t _760;
frost$core$Int _761;
int64_t _763;
int64_t _764;
int64_t _765;
frost$core$Int _766;
org$frostlang$frostc$Compiler* _767;
bool _768;
frost$core$Bit _769;
bool _770;
frost$core$Int _772;
org$frostlang$frostc$Compiler* _775;
org$frostlang$frostc$ClassDecl* _776;
frost$collections$ListView* _777;
frost$core$Int _778;
$fn83 _779;
frost$core$Object* _780;
org$frostlang$frostc$FieldDecl* _781;
frost$core$Int* _782;
frost$core$Int _783;
int64_t _786;
int64_t _787;
bool _788;
frost$core$Bit _789;
bool _791;
frost$core$Int _793;
frost$core$Object* _796;
frost$core$Object* _798;
frost$unsafe$Pointer _801;
int64_t _802;
frost$core$Int _803;
frost$unsafe$Pointer _806;
org$frostlang$frostc$MemoryLayout* _807;
$fn84 _808;
frost$core$Int _809;
int64_t _812;
int64_t _817;
int64_t _818;
int64_t _819;
int64_t _820;
int64_t _821;
frost$unsafe$Pointer _822;
org$frostlang$frostc$Compiler* _826;
bool _827;
frost$core$Bit _828;
bool _829;
frost$core$Int _831;
org$frostlang$frostc$Compiler* _834;
org$frostlang$frostc$ClassDecl* _835;
frost$collections$ListView* _836;
frost$core$Int _837;
$fn85 _838;
frost$core$Object* _839;
org$frostlang$frostc$FieldDecl* _840;
org$frostlang$frostc$Symbol* _841;
frost$core$String** _842;
frost$core$String* _843;
frost$core$Bit _844;
bool _845;
frost$core$Int _847;
frost$core$Object* _850;
frost$core$Object* _852;
frost$unsafe$Pointer _855;
int64_t _858;
frost$core$Int _859;
frost$unsafe$Pointer _861;
int64_t _864;
frost$core$Int _865;
int64_t _867;
int64_t _868;
int64_t _869;
frost$core$Int _870;
org$frostlang$frostc$Compiler* _871;
bool _872;
frost$core$Bit _873;
bool _874;
frost$core$Int _876;
org$frostlang$frostc$Compiler* _879;
org$frostlang$frostc$ClassDecl* _880;
frost$collections$ListView* _881;
frost$core$Int _882;
$fn86 _883;
frost$core$Object* _884;
org$frostlang$frostc$FieldDecl* _885;
frost$core$Int* _886;
frost$core$Int _887;
int64_t _890;
int64_t _891;
bool _892;
frost$core$Bit _893;
bool _895;
frost$core$Int _897;
frost$core$Object* _900;
frost$core$Object* _902;
frost$unsafe$Pointer _905;
int64_t _906;
frost$core$Bit _907;
frost$unsafe$Pointer _910;
frost$core$Int _911;
int64_t _914;
int64_t _919;
int64_t _920;
int64_t _921;
int64_t _922;
int64_t _923;
frost$unsafe$Pointer _924;
frost$unsafe$Pointer _928;
int64_t _931;
frost$core$Int _932;
int64_t _936;
int64_t _937;
frost$core$Int64 _938;
org$frostlang$frostc$ClassDecl* _940;
frost$core$Object* _941;
org$frostlang$frostc$Type* _944;
frost$core$Object* _945;
org$frostlang$frostc$MemoryLayout* _948;
frost$core$Object* _949;
org$frostlang$frostc$Compiler* _952;
frost$core$Object* _953;
org$frostlang$frostc$Interpreter* _956;
frost$core$Object* _957;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:339
_1 = &param0->interpreter;
_2 = *_1;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:339:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
_5 = frost$core$Weak$get_valid$R$frost$core$Bit(_2);
_6 = _5.value;
if (_6) goto block2; else goto block3;
block3:;
_8 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s87, _8, &$s88);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_12 = &_2->value;
_13 = *_12;
_14 = _13;
_15 = _14;
frost$core$Frost$ref$frost$core$Object$Q(_15);
_18 = ((org$frostlang$frostc$Interpreter*) _14);
*(&local0) = ((org$frostlang$frostc$Interpreter*) NULL);
_20 = ((frost$core$Object*) _18);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local0);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local0) = _18;
_26 = _14;
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:340
_29 = *(&local0);
_30 = &_29->compiler;
_31 = *_30;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:340:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
_34 = frost$core$Weak$get_valid$R$frost$core$Bit(_31);
_35 = _34.value;
if (_35) goto block5; else goto block6;
block6:;
_37 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s89, _37, &$s90);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_41 = &_31->value;
_42 = *_41;
_43 = _42;
_44 = _43;
frost$core$Frost$ref$frost$core$Object$Q(_44);
_47 = ((org$frostlang$frostc$Compiler*) _43);
*(&local1) = ((org$frostlang$frostc$Compiler*) NULL);
_49 = ((frost$core$Object*) _47);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = *(&local1);
_52 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_52);
*(&local1) = _47;
_55 = _43;
frost$core$Frost$unref$frost$core$Object$Q(_55);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:341
_58 = *(&local1);
_59 = _58 != NULL;
_60 = (frost$core$Bit) {_59};
_61 = _60.value;
if (_61) goto block7; else goto block8;
block8:;
_63 = (frost$core$Int) {341u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s91, _63, &$s92);
abort(); // unreachable
block7:;
_66 = _58;
_67 = &_66->memoryLayout;
_68 = *_67;
*(&local2) = ((org$frostlang$frostc$MemoryLayout*) NULL);
_70 = ((frost$core$Object*) _68);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = *(&local2);
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local2) = _68;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:342
_77 = *(&local2);
_78 = ($fn93) _77->$class->vtable[3];
_79 = _78(_77);
_80 = *(&local2);
_81 = ($fn94) _80->$class->vtable[2];
_82 = _81(_80);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:342:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_85 = _79.value;
_86 = _82.value;
_87 = _85 == _86;
_88 = (frost$core$Bit) {_87};
_90 = _88.value;
if (_90) goto block10; else goto block11;
block11:;
_92 = (frost$core$Int) {342u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s95, _92);
abort(); // unreachable
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:343
_96 = (org$frostlang$frostc$Type*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type), (frost$core$Class*) &org$frostlang$frostc$Type$class);
_97 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Interpreter.frost:343:80
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_100 = &(&local4)->$rawValue;
*_100 = _97;
_102 = *(&local4);
*(&local3) = _102;
_105 = *(&local3);
_106 = org$frostlang$frostc$Position$init();
_107 = (frost$core$Bit) {true};
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit(_96, &$s96, _105, _106, _107);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
_110 = ((frost$core$Object*) _96);
frost$core$Frost$ref$frost$core$Object$Q(_110);
_112 = *(&local5);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_113);
*(&local5) = _96;
_116 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_116);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:345
_119 = *(&local1);
_120 = _119 != NULL;
_121 = (frost$core$Bit) {_120};
_122 = _121.value;
if (_122) goto block13; else goto block14;
block14:;
_124 = (frost$core$Int) {345u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s97, _124, &$s98);
abort(); // unreachable
block13:;
_127 = _119;
_128 = *(&local5);
_129 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(_127, _128);
_130 = _129 != NULL;
_131 = (frost$core$Bit) {_130};
_132 = _131.value;
if (_132) goto block15; else goto block16;
block16:;
_134 = (frost$core$Int) {345u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s99, _134, &$s100);
abort(); // unreachable
block15:;
_137 = _129;
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
_139 = ((frost$core$Object*) _137);
frost$core$Frost$ref$frost$core$Object$Q(_139);
_141 = *(&local6);
_142 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_142);
*(&local6) = _137;
_145 = ((frost$core$Object*) _129);
frost$core$Frost$unref$frost$core$Object$Q(_145);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:346
_148 = *(&local1);
_149 = _148 != NULL;
_150 = (frost$core$Bit) {_149};
_151 = _150.value;
if (_151) goto block17; else goto block18;
block18:;
_153 = (frost$core$Int) {346u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s101, _153, &$s102);
abort(); // unreachable
block17:;
_156 = _148;
_157 = *(&local6);
_158 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(_156, _157);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:347
_160 = *(&local0);
_161 = &_160->memoryLayout;
_162 = *_161;
_163 = *(&local5);
_164 = ($fn103) _162->$class->vtable[7];
_165 = _164(_162, _163);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:347:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_168 = _165.value;
_169 = _168 * 1u;
_170 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_169);
_171 = frost$unsafe$Pointer$init$builtin_int(_170);
*(&local7) = _171;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:348
_175 = *(&local7);
*(&local8) = _175;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:351
_178 = *(&local1);
_179 = _178 != NULL;
_180 = (frost$core$Bit) {_179};
_181 = _180.value;
if (_181) goto block20; else goto block21;
block21:;
_183 = (frost$core$Int) {351u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s104, _183, &$s105);
abort(); // unreachable
block20:;
_186 = _178;
_187 = *(&local6);
_188 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_186, _187);
_189 = (frost$core$Int) {0u};
ITable* $tmp106 = _188->$class->itable;
while ($tmp106->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp106 = $tmp106->next;
}
_190 = $tmp106->methods[0];
_191 = _190(_188, _189);
_192 = ((org$frostlang$frostc$FieldDecl*) _191);
_193 = ((org$frostlang$frostc$Symbol*) _192);
_194 = &_193->name;
_195 = *_194;
_196 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_195, &$s107);
_197 = _196.value;
if (_197) goto block22; else goto block23;
block23:;
_199 = (frost$core$Int) {351u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s108, _199);
abort(); // unreachable
block22:;
_202 = _191;
frost$core$Frost$unref$frost$core$Object$Q(_202);
_204 = ((frost$core$Object*) _188);
frost$core$Frost$unref$frost$core$Object$Q(_204);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:352
_207 = *(&local8);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:352:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_210 = _207.value;
_211 = (frost$core$Int) {_210};
_213 = *(&local7);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:352:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_216 = _213.value;
_217 = (frost$core$Int) {_216};
_219 = _211.value;
_220 = _217.value;
_221 = _219 - _220;
_222 = (frost$core$Int) {_221};
_223 = *(&local1);
_224 = _223 != NULL;
_225 = (frost$core$Bit) {_224};
_226 = _225.value;
if (_226) goto block26; else goto block27;
block27:;
_228 = (frost$core$Int) {352u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s109, _228, &$s110);
abort(); // unreachable
block26:;
_231 = _223;
_232 = *(&local6);
_233 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_231, _232);
_234 = (frost$core$Int) {0u};
ITable* $tmp111 = _233->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp111 = $tmp111->next;
}
_235 = $tmp111->methods[0];
_236 = _235(_233, _234);
_237 = ((org$frostlang$frostc$FieldDecl*) _236);
_238 = &_237->offset;
_239 = *_238;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:352:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_242 = _222.value;
_243 = _239.value;
_244 = _242 == _243;
_245 = (frost$core$Bit) {_244};
_247 = _245.value;
if (_247) goto block29; else goto block30;
block30:;
_249 = (frost$core$Int) {352u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s112, _249);
abort(); // unreachable
block29:;
_252 = _236;
frost$core$Frost$unref$frost$core$Object$Q(_252);
_254 = ((frost$core$Object*) _233);
frost$core$Frost$unref$frost$core$Object$Q(_254);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:353
_257 = *(&local8);
_258 = _257.value;
_259 = *(&local6);
_260 = ((frost$core$Object*) _259);
frost$core$Frost$ref$frost$core$Object$Q(_260);
_262 = *((org$frostlang$frostc$ClassDecl**)_258);
_263 = ((frost$core$Object*) _262);
frost$core$Frost$unref$frost$core$Object$Q(_263);
*((org$frostlang$frostc$ClassDecl**)_258) = _259;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:354
_267 = *(&local8);
_268 = *(&local2);
_269 = ($fn113) _268->$class->vtable[3];
_270 = _269(_268);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:354:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_273 = _270.value;
*(&local9) = _273;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local10) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_278 = _267.value;
_279 = *(&local9);
_280 = *(&local10);
_281 = _279 * _280;
_282 = _278 + _281;
_283 = frost$unsafe$Pointer$init$builtin_int(_282);
*(&local8) = _283;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:357
_287 = *(&local1);
_288 = _287 != NULL;
_289 = (frost$core$Bit) {_288};
_290 = _289.value;
if (_290) goto block32; else goto block33;
block33:;
_292 = (frost$core$Int) {357u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s114, _292, &$s115);
abort(); // unreachable
block32:;
_295 = _287;
_296 = *(&local6);
_297 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_295, _296);
_298 = (frost$core$Int) {1u};
ITable* $tmp116 = _297->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp116 = $tmp116->next;
}
_299 = $tmp116->methods[0];
_300 = _299(_297, _298);
_301 = ((org$frostlang$frostc$FieldDecl*) _300);
_302 = ((org$frostlang$frostc$Symbol*) _301);
_303 = &_302->name;
_304 = *_303;
_305 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_304, &$s117);
_306 = _305.value;
if (_306) goto block34; else goto block35;
block35:;
_308 = (frost$core$Int) {357u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s118, _308);
abort(); // unreachable
block34:;
_311 = _300;
frost$core$Frost$unref$frost$core$Object$Q(_311);
_313 = ((frost$core$Object*) _297);
frost$core$Frost$unref$frost$core$Object$Q(_313);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:358
_316 = *(&local8);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:358:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_319 = _316.value;
_320 = (frost$core$Int) {_319};
_322 = *(&local7);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:358:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_325 = _322.value;
_326 = (frost$core$Int) {_325};
_328 = _320.value;
_329 = _326.value;
_330 = _328 - _329;
_331 = (frost$core$Int) {_330};
_332 = *(&local1);
_333 = _332 != NULL;
_334 = (frost$core$Bit) {_333};
_335 = _334.value;
if (_335) goto block38; else goto block39;
block39:;
_337 = (frost$core$Int) {358u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s119, _337, &$s120);
abort(); // unreachable
block38:;
_340 = _332;
_341 = *(&local6);
_342 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_340, _341);
_343 = (frost$core$Int) {1u};
ITable* $tmp121 = _342->$class->itable;
while ($tmp121->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp121 = $tmp121->next;
}
_344 = $tmp121->methods[0];
_345 = _344(_342, _343);
_346 = ((org$frostlang$frostc$FieldDecl*) _345);
_347 = &_346->offset;
_348 = *_347;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:358:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_351 = _331.value;
_352 = _348.value;
_353 = _351 == _352;
_354 = (frost$core$Bit) {_353};
_356 = _354.value;
if (_356) goto block41; else goto block42;
block42:;
_358 = (frost$core$Int) {358u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s122, _358);
abort(); // unreachable
block41:;
_361 = _345;
frost$core$Frost$unref$frost$core$Object$Q(_361);
_363 = ((frost$core$Object*) _342);
frost$core$Frost$unref$frost$core$Object$Q(_363);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:359
_366 = *(&local8);
_367 = _366.value;
_368 = (frost$core$Int32) {1u};
*((frost$core$Int32*)_367) = _368;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:360
_371 = *(&local8);
_372 = (frost$core$Int) {4u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:360:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_375 = _372.value;
*(&local11) = _375;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local12) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_380 = _371.value;
_381 = *(&local11);
_382 = *(&local12);
_383 = _381 * _382;
_384 = _380 + _383;
_385 = frost$unsafe$Pointer$init$builtin_int(_384);
*(&local8) = _385;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:363
_389 = *(&local1);
_390 = _389 != NULL;
_391 = (frost$core$Bit) {_390};
_392 = _391.value;
if (_392) goto block44; else goto block45;
block45:;
_394 = (frost$core$Int) {363u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s123, _394, &$s124);
abort(); // unreachable
block44:;
_397 = _389;
_398 = *(&local6);
_399 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_397, _398);
_400 = (frost$core$Int) {2u};
ITable* $tmp125 = _399->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp125 = $tmp125->next;
}
_401 = $tmp125->methods[0];
_402 = _401(_399, _400);
_403 = ((org$frostlang$frostc$FieldDecl*) _402);
_404 = ((org$frostlang$frostc$Symbol*) _403);
_405 = &_404->name;
_406 = *_405;
_407 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_406, &$s126);
_408 = _407.value;
if (_408) goto block46; else goto block47;
block47:;
_410 = (frost$core$Int) {363u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s127, _410);
abort(); // unreachable
block46:;
_413 = _402;
frost$core$Frost$unref$frost$core$Object$Q(_413);
_415 = ((frost$core$Object*) _399);
frost$core$Frost$unref$frost$core$Object$Q(_415);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:364
_418 = *(&local8);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:364:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_421 = _418.value;
_422 = (frost$core$Int) {_421};
_424 = *(&local7);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:364:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_427 = _424.value;
_428 = (frost$core$Int) {_427};
_430 = _422.value;
_431 = _428.value;
_432 = _430 - _431;
_433 = (frost$core$Int) {_432};
_434 = *(&local1);
_435 = _434 != NULL;
_436 = (frost$core$Bit) {_435};
_437 = _436.value;
if (_437) goto block50; else goto block51;
block51:;
_439 = (frost$core$Int) {364u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s128, _439, &$s129);
abort(); // unreachable
block50:;
_442 = _434;
_443 = *(&local6);
_444 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_442, _443);
_445 = (frost$core$Int) {2u};
ITable* $tmp130 = _444->$class->itable;
while ($tmp130->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp130 = $tmp130->next;
}
_446 = $tmp130->methods[0];
_447 = _446(_444, _445);
_448 = ((org$frostlang$frostc$FieldDecl*) _447);
_449 = &_448->offset;
_450 = *_449;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:364:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_453 = _433.value;
_454 = _450.value;
_455 = _453 == _454;
_456 = (frost$core$Bit) {_455};
_458 = _456.value;
if (_458) goto block53; else goto block54;
block54:;
_460 = (frost$core$Int) {364u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s131, _460);
abort(); // unreachable
block53:;
_463 = _447;
frost$core$Frost$unref$frost$core$Object$Q(_463);
_465 = ((frost$core$Object*) _444);
frost$core$Frost$unref$frost$core$Object$Q(_465);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:365
_468 = *(&local8);
_469 = _468.value;
_470 = (frost$core$Int8) {0u};
*((frost$core$Int8*)_469) = _470;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:366
_473 = *(&local8);
_474 = (frost$core$Int) {4u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:366:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_477 = _474.value;
*(&local13) = _477;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local14) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_482 = _473.value;
_483 = *(&local13);
_484 = *(&local14);
_485 = _483 * _484;
_486 = _482 + _485;
_487 = frost$unsafe$Pointer$init$builtin_int(_486);
*(&local8) = _487;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:369
_491 = *(&local1);
_492 = _491 != NULL;
_493 = (frost$core$Bit) {_492};
_494 = _493.value;
if (_494) goto block56; else goto block57;
block57:;
_496 = (frost$core$Int) {369u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s132, _496, &$s133);
abort(); // unreachable
block56:;
_499 = _491;
_500 = *(&local6);
_501 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_499, _500);
_502 = (frost$core$Int) {3u};
ITable* $tmp134 = _501->$class->itable;
while ($tmp134->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp134 = $tmp134->next;
}
_503 = $tmp134->methods[0];
_504 = _503(_501, _502);
_505 = ((org$frostlang$frostc$FieldDecl*) _504);
_506 = ((org$frostlang$frostc$Symbol*) _505);
_507 = &_506->name;
_508 = *_507;
_509 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_508, &$s135);
_510 = _509.value;
if (_510) goto block58; else goto block59;
block59:;
_512 = (frost$core$Int) {369u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s136, _512);
abort(); // unreachable
block58:;
_515 = _504;
frost$core$Frost$unref$frost$core$Object$Q(_515);
_517 = ((frost$core$Object*) _501);
frost$core$Frost$unref$frost$core$Object$Q(_517);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:370
_520 = *(&local8);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:370:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_523 = _520.value;
_524 = (frost$core$Int) {_523};
_526 = *(&local7);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:370:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_529 = _526.value;
_530 = (frost$core$Int) {_529};
_532 = _524.value;
_533 = _530.value;
_534 = _532 - _533;
_535 = (frost$core$Int) {_534};
_536 = *(&local1);
_537 = _536 != NULL;
_538 = (frost$core$Bit) {_537};
_539 = _538.value;
if (_539) goto block62; else goto block63;
block63:;
_541 = (frost$core$Int) {370u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s137, _541, &$s138);
abort(); // unreachable
block62:;
_544 = _536;
_545 = *(&local6);
_546 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_544, _545);
_547 = (frost$core$Int) {3u};
ITable* $tmp139 = _546->$class->itable;
while ($tmp139->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp139 = $tmp139->next;
}
_548 = $tmp139->methods[0];
_549 = _548(_546, _547);
_550 = ((org$frostlang$frostc$FieldDecl*) _549);
_551 = &_550->offset;
_552 = *_551;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:370:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_555 = _535.value;
_556 = _552.value;
_557 = _555 == _556;
_558 = (frost$core$Bit) {_557};
_560 = _558.value;
if (_560) goto block65; else goto block66;
block66:;
_562 = (frost$core$Int) {370u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s140, _562);
abort(); // unreachable
block65:;
_565 = _549;
frost$core$Frost$unref$frost$core$Object$Q(_565);
_567 = ((frost$core$Object*) _546);
frost$core$Frost$unref$frost$core$Object$Q(_567);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:371
_570 = *(&local8);
_571 = _570.value;
_572 = (frost$core$Int) {0u};
*((frost$core$Int*)_571) = _572;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:372
_575 = *(&local8);
_576 = *(&local2);
_577 = ($fn141) _576->$class->vtable[2];
_578 = _577(_576);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:372:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_581 = _578.value;
*(&local15) = _581;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local16) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_586 = _575.value;
_587 = *(&local15);
_588 = *(&local16);
_589 = _587 * _588;
_590 = _586 + _589;
_591 = frost$unsafe$Pointer$init$builtin_int(_590);
*(&local8) = _591;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:375
_595 = *(&local1);
_596 = _595 != NULL;
_597 = (frost$core$Bit) {_596};
_598 = _597.value;
if (_598) goto block68; else goto block69;
block69:;
_600 = (frost$core$Int) {375u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s142, _600, &$s143);
abort(); // unreachable
block68:;
_603 = _595;
_604 = *(&local6);
_605 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_603, _604);
_606 = (frost$core$Int) {4u};
ITable* $tmp144 = _605->$class->itable;
while ($tmp144->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp144 = $tmp144->next;
}
_607 = $tmp144->methods[0];
_608 = _607(_605, _606);
_609 = ((org$frostlang$frostc$FieldDecl*) _608);
_610 = ((org$frostlang$frostc$Symbol*) _609);
_611 = &_610->name;
_612 = *_611;
_613 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_612, &$s145);
_614 = _613.value;
if (_614) goto block70; else goto block71;
block71:;
_616 = (frost$core$Int) {375u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s146, _616);
abort(); // unreachable
block70:;
_619 = _608;
frost$core$Frost$unref$frost$core$Object$Q(_619);
_621 = ((frost$core$Object*) _605);
frost$core$Frost$unref$frost$core$Object$Q(_621);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:376
_624 = *(&local8);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:376:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_627 = _624.value;
_628 = (frost$core$Int) {_627};
_630 = *(&local7);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:376:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_633 = _630.value;
_634 = (frost$core$Int) {_633};
_636 = _628.value;
_637 = _634.value;
_638 = _636 - _637;
_639 = (frost$core$Int) {_638};
_640 = *(&local1);
_641 = _640 != NULL;
_642 = (frost$core$Bit) {_641};
_643 = _642.value;
if (_643) goto block74; else goto block75;
block75:;
_645 = (frost$core$Int) {376u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s147, _645, &$s148);
abort(); // unreachable
block74:;
_648 = _640;
_649 = *(&local6);
_650 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_648, _649);
_651 = (frost$core$Int) {4u};
ITable* $tmp149 = _650->$class->itable;
while ($tmp149->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp149 = $tmp149->next;
}
_652 = $tmp149->methods[0];
_653 = _652(_650, _651);
_654 = ((org$frostlang$frostc$FieldDecl*) _653);
_655 = &_654->offset;
_656 = *_655;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:376:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_659 = _639.value;
_660 = _656.value;
_661 = _659 == _660;
_662 = (frost$core$Bit) {_661};
_664 = _662.value;
if (_664) goto block77; else goto block78;
block78:;
_666 = (frost$core$Int) {376u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s150, _666);
abort(); // unreachable
block77:;
_669 = _653;
frost$core$Frost$unref$frost$core$Object$Q(_669);
_671 = ((frost$core$Object*) _650);
frost$core$Frost$unref$frost$core$Object$Q(_671);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:377
_674 = *(&local8);
_675 = _674.value;
_676 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(sizeof(org$frostlang$frostc$IR$Value), (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
_677 = (frost$core$Int) {8u};
_678 = *(&local1);
_679 = _678 != NULL;
_680 = (frost$core$Bit) {_679};
_681 = _680.value;
if (_681) goto block79; else goto block80;
block80:;
_683 = (frost$core$Int) {378u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s151, _683, &$s152);
abort(); // unreachable
block79:;
_686 = _678;
_687 = &_686->STRING_TYPE;
_688 = *_687;
org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$String$org$frostlang$frostc$Type(_676, _677, &$s153, _688);
_690 = ($fn154) param0->$class->vtable[2];
_691 = _690(param0, _676);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:378:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_694 = _691.value;
_695 = ((int64_t) _694);
_696 = (frost$core$Int) {_695};
*((frost$core$Int*)_675) = _696;
_699 = ((frost$core$Object*) _676);
frost$core$Frost$unref$frost$core$Object$Q(_699);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:379
_702 = *(&local8);
_703 = *(&local2);
_704 = ($fn155) _703->$class->vtable[3];
_705 = _704(_703);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:379:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_708 = _705.value;
*(&local17) = _708;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local18) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_713 = _702.value;
_714 = *(&local17);
_715 = *(&local18);
_716 = _714 * _715;
_717 = _713 + _716;
_718 = frost$unsafe$Pointer$init$builtin_int(_717);
*(&local8) = _718;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:382
_722 = *(&local1);
_723 = _722 != NULL;
_724 = (frost$core$Bit) {_723};
_725 = _724.value;
if (_725) goto block83; else goto block84;
block84:;
_727 = (frost$core$Int) {382u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s156, _727, &$s157);
abort(); // unreachable
block83:;
_730 = _722;
_731 = *(&local6);
_732 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_730, _731);
_733 = (frost$core$Int) {5u};
ITable* $tmp158 = _732->$class->itable;
while ($tmp158->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp158 = $tmp158->next;
}
_734 = $tmp158->methods[0];
_735 = _734(_732, _733);
_736 = ((org$frostlang$frostc$FieldDecl*) _735);
_737 = ((org$frostlang$frostc$Symbol*) _736);
_738 = &_737->name;
_739 = *_738;
_740 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_739, &$s159);
_741 = _740.value;
if (_741) goto block85; else goto block86;
block86:;
_743 = (frost$core$Int) {382u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s160, _743);
abort(); // unreachable
block85:;
_746 = _735;
frost$core$Frost$unref$frost$core$Object$Q(_746);
_748 = ((frost$core$Object*) _732);
frost$core$Frost$unref$frost$core$Object$Q(_748);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:383
_751 = *(&local8);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:383:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_754 = _751.value;
_755 = (frost$core$Int) {_754};
_757 = *(&local7);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:383:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_760 = _757.value;
_761 = (frost$core$Int) {_760};
_763 = _755.value;
_764 = _761.value;
_765 = _763 - _764;
_766 = (frost$core$Int) {_765};
_767 = *(&local1);
_768 = _767 != NULL;
_769 = (frost$core$Bit) {_768};
_770 = _769.value;
if (_770) goto block89; else goto block90;
block90:;
_772 = (frost$core$Int) {383u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s161, _772, &$s162);
abort(); // unreachable
block89:;
_775 = _767;
_776 = *(&local6);
_777 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_775, _776);
_778 = (frost$core$Int) {5u};
ITable* $tmp163 = _777->$class->itable;
while ($tmp163->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp163 = $tmp163->next;
}
_779 = $tmp163->methods[0];
_780 = _779(_777, _778);
_781 = ((org$frostlang$frostc$FieldDecl*) _780);
_782 = &_781->offset;
_783 = *_782;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:383:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_786 = _766.value;
_787 = _783.value;
_788 = _786 == _787;
_789 = (frost$core$Bit) {_788};
_791 = _789.value;
if (_791) goto block92; else goto block93;
block93:;
_793 = (frost$core$Int) {383u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s164, _793);
abort(); // unreachable
block92:;
_796 = _780;
frost$core$Frost$unref$frost$core$Object$Q(_796);
_798 = ((frost$core$Object*) _777);
frost$core$Frost$unref$frost$core$Object$Q(_798);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:384
_801 = *(&local8);
_802 = _801.value;
_803 = (frost$core$Int) {2u};
*((frost$core$Int*)_802) = _803;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:385
_806 = *(&local8);
_807 = *(&local2);
_808 = ($fn165) _807->$class->vtable[2];
_809 = _808(_807);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:385:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_812 = _809.value;
*(&local19) = _812;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local20) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_817 = _806.value;
_818 = *(&local19);
_819 = *(&local20);
_820 = _818 * _819;
_821 = _817 + _820;
_822 = frost$unsafe$Pointer$init$builtin_int(_821);
*(&local8) = _822;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:388
_826 = *(&local1);
_827 = _826 != NULL;
_828 = (frost$core$Bit) {_827};
_829 = _828.value;
if (_829) goto block95; else goto block96;
block96:;
_831 = (frost$core$Int) {388u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s166, _831, &$s167);
abort(); // unreachable
block95:;
_834 = _826;
_835 = *(&local6);
_836 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_834, _835);
_837 = (frost$core$Int) {6u};
ITable* $tmp168 = _836->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp168 = $tmp168->next;
}
_838 = $tmp168->methods[0];
_839 = _838(_836, _837);
_840 = ((org$frostlang$frostc$FieldDecl*) _839);
_841 = ((org$frostlang$frostc$Symbol*) _840);
_842 = &_841->name;
_843 = *_842;
_844 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_843, &$s169);
_845 = _844.value;
if (_845) goto block97; else goto block98;
block98:;
_847 = (frost$core$Int) {388u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s170, _847);
abort(); // unreachable
block97:;
_850 = _839;
frost$core$Frost$unref$frost$core$Object$Q(_850);
_852 = ((frost$core$Object*) _836);
frost$core$Frost$unref$frost$core$Object$Q(_852);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:389
_855 = *(&local8);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:389:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_858 = _855.value;
_859 = (frost$core$Int) {_858};
_861 = *(&local7);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:389:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_864 = _861.value;
_865 = (frost$core$Int) {_864};
_867 = _859.value;
_868 = _865.value;
_869 = _867 - _868;
_870 = (frost$core$Int) {_869};
_871 = *(&local1);
_872 = _871 != NULL;
_873 = (frost$core$Bit) {_872};
_874 = _873.value;
if (_874) goto block101; else goto block102;
block102:;
_876 = (frost$core$Int) {389u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s171, _876, &$s172);
abort(); // unreachable
block101:;
_879 = _871;
_880 = *(&local6);
_881 = org$frostlang$frostc$Compiler$instanceFields$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$FieldDecl$GT(_879, _880);
_882 = (frost$core$Int) {6u};
ITable* $tmp173 = _881->$class->itable;
while ($tmp173->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp173 = $tmp173->next;
}
_883 = $tmp173->methods[0];
_884 = _883(_881, _882);
_885 = ((org$frostlang$frostc$FieldDecl*) _884);
_886 = &_885->offset;
_887 = *_886;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:389:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_890 = _870.value;
_891 = _887.value;
_892 = _890 == _891;
_893 = (frost$core$Bit) {_892};
_895 = _893.value;
if (_895) goto block104; else goto block105;
block105:;
_897 = (frost$core$Int) {389u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s174, _897);
abort(); // unreachable
block104:;
_900 = _884;
frost$core$Frost$unref$frost$core$Object$Q(_900);
_902 = ((frost$core$Object*) _881);
frost$core$Frost$unref$frost$core$Object$Q(_902);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:390
_905 = *(&local8);
_906 = _905.value;
_907 = (frost$core$Bit) {false};
*((frost$core$Bit*)_906) = _907;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:391
_910 = *(&local8);
_911 = (frost$core$Int) {1u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:391:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_914 = _911.value;
*(&local21) = _914;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local22) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_919 = _910.value;
_920 = *(&local21);
_921 = *(&local22);
_922 = _920 * _921;
_923 = _919 + _922;
_924 = frost$unsafe$Pointer$init$builtin_int(_923);
*(&local8) = _924;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:393
_928 = *(&local7);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:393:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_931 = _928.value;
_932 = (frost$core$Int) {_931};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:393:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_936 = _932.value;
_937 = ((int64_t) _936);
_938 = (frost$core$Int64) {_937};
_940 = *(&local6);
_941 = ((frost$core$Object*) _940);
frost$core$Frost$unref$frost$core$Object$Q(_941);
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
_944 = *(&local5);
_945 = ((frost$core$Object*) _944);
frost$core$Frost$unref$frost$core$Object$Q(_945);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
_948 = *(&local2);
_949 = ((frost$core$Object*) _948);
frost$core$Frost$unref$frost$core$Object$Q(_949);
*(&local2) = ((org$frostlang$frostc$MemoryLayout*) NULL);
_952 = *(&local1);
_953 = ((frost$core$Object*) _952);
frost$core$Frost$unref$frost$core$Object$Q(_953);
*(&local1) = ((org$frostlang$frostc$Compiler*) NULL);
_956 = *(&local0);
_957 = ((frost$core$Object*) _956);
frost$core$Frost$unref$frost$core$Object$Q(_957);
*(&local0) = ((org$frostlang$frostc$Interpreter*) NULL);
return _938;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$$anonymous27$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(org$frostlang$frostc$Interpreter$Context* param0, org$frostlang$frostc$FixedArray* param1) {

frost$core$Int64 _8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:398
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Interpreter.frost:398:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s175);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:399
_8 = (frost$core$Int64) {18446744073709551615u};
return _8;

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
int64_t _70;
frost$core$Method* _71;
int64_t* _74;
frost$core$Object* _77;
frost$core$Immutable** _79;
frost$core$Immutable* _80;
frost$core$Object* _81;
frost$core$Immutable** _83;
frost$core$Method* _86;
frost$core$MutableMethod* _87;
frost$core$Object* _88;
frost$core$MutableMethod* _90;
frost$core$Object* _91;
frost$core$Object* _94;
frost$core$Bit _97;
bool _98;
int64_t _101;
frost$core$Method* _102;
int64_t* _105;
frost$core$Object* _108;
frost$core$Immutable** _110;
frost$core$Immutable* _111;
frost$core$Object* _112;
frost$core$Immutable** _114;
frost$core$Method* _117;
frost$core$MutableMethod* _118;
frost$core$Object* _119;
frost$core$MutableMethod* _121;
frost$core$Object* _122;
frost$core$Object* _125;
frost$core$Bit _128;
bool _129;
org$frostlang$frostc$Interpreter$_Closure21* _132;
int64_t _134;
frost$core$MutableMethod* _135;
frost$core$Object* _136;
int64_t* _139;
frost$core$Object** _143;
frost$core$Object* _144;
frost$core$Object** _146;
frost$core$MutableMethod* _149;
frost$core$MutableMethod* _150;
frost$core$Object* _151;
frost$core$MutableMethod* _153;
frost$core$Object* _154;
frost$core$Object* _157;
frost$core$Object* _159;
frost$core$Bit _162;
bool _163;
org$frostlang$frostc$Interpreter$_Closure23* _166;
int64_t _168;
frost$core$MutableMethod* _169;
frost$core$Object* _170;
int64_t* _173;
frost$core$Object** _177;
frost$core$Object* _178;
frost$core$Object** _180;
frost$core$MutableMethod* _183;
frost$core$MutableMethod* _184;
frost$core$Object* _185;
frost$core$MutableMethod* _187;
frost$core$Object* _188;
frost$core$Object* _191;
frost$core$Object* _193;
frost$core$Bit _196;
bool _197;
int64_t _200;
frost$core$Method* _201;
int64_t* _204;
frost$core$Object* _207;
frost$core$Immutable** _209;
frost$core$Immutable* _210;
frost$core$Object* _211;
frost$core$Immutable** _213;
frost$core$Method* _216;
frost$core$MutableMethod* _217;
frost$core$Object* _218;
frost$core$MutableMethod* _220;
frost$core$Object* _221;
frost$core$Object* _224;
frost$core$Bit _227;
bool _228;
int64_t _231;
frost$core$Method* _232;
int64_t* _235;
frost$core$Object* _238;
frost$core$Immutable** _240;
frost$core$Immutable* _241;
frost$core$Object* _242;
frost$core$Immutable** _244;
frost$core$Method* _247;
frost$core$MutableMethod* _248;
frost$core$Object* _249;
frost$core$MutableMethod* _251;
frost$core$Object* _252;
frost$core$Object* _255;
frost$core$Bit _258;
bool _259;
int64_t _262;
frost$core$Method* _263;
int64_t* _266;
frost$core$Object* _269;
frost$core$Immutable** _271;
frost$core$Immutable* _272;
frost$core$Object* _273;
frost$core$Immutable** _275;
frost$core$Method* _278;
frost$core$MutableMethod* _279;
frost$core$Object* _280;
frost$core$MutableMethod* _282;
frost$core$Object* _283;
frost$core$Object* _286;
frost$core$Bit _289;
bool _290;
int64_t _293;
frost$core$Method* _294;
int64_t* _297;
frost$core$Object* _300;
frost$core$Immutable** _302;
frost$core$Immutable* _303;
frost$core$Object* _304;
frost$core$Immutable** _306;
frost$core$Method* _309;
frost$core$MutableMethod* _310;
frost$core$Object* _311;
frost$core$MutableMethod* _313;
frost$core$Object* _314;
frost$core$Object* _317;
frost$core$String* _321;
frost$core$String* _322;
frost$core$String* _323;
frost$core$String* _324;
frost$core$Object* _334;
frost$core$Object* _336;
frost$core$Object* _338;
frost$core$Int _341;
frost$core$Int _343;
frost$collections$IdentityMap** _347;
frost$collections$IdentityMap* _348;
frost$core$Object* _349;
frost$core$MutableMethod* _350;
bool _351;
frost$core$Bit _352;
bool _353;
frost$core$Int _355;
frost$core$MutableMethod* _358;
frost$core$Object* _359;
frost$core$String* _361;
frost$core$Object* _362;
frost$core$MutableMethod* _367;
bool _368;
frost$core$Bit _369;
bool _370;
frost$core$Int _372;
frost$core$MutableMethod* _375;
frost$core$Object* _376;
frost$core$MutableMethod* _378;
frost$core$Object* _379;
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
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s176, _33, &$s177);
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
_46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_45, &$s178);
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
_66 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s179);
_67 = _66.value;
if (_67) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:300
_70 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$$anonymous18$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64).value;
_71 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Interpreter.frost:300:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_74 = &_71->pointer;
*_74 = _70;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_77 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_77);
_79 = &_71->target;
_80 = *_79;
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
_83 = &_71->target;
*_83 = ((frost$core$Immutable*) NULL);
_86 = _71;
_87 = ((frost$core$MutableMethod*) _86);
_88 = ((frost$core$Object*) _87);
frost$core$Frost$ref$frost$core$Object$Q(_88);
_90 = *(&local0);
_91 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_91);
*(&local0) = _87;
_94 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_94);
goto block7;
block9:;
_97 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s180);
_98 = _97.value;
if (_98) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:305
_101 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$$anonymous19$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64).value;
_102 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Interpreter.frost:305:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_105 = &_102->pointer;
*_105 = _101;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_108 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_108);
_110 = &_102->target;
_111 = *_110;
_112 = ((frost$core$Object*) _111);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = &_102->target;
*_114 = ((frost$core$Immutable*) NULL);
_117 = _102;
_118 = ((frost$core$MutableMethod*) _117);
_119 = ((frost$core$Object*) _118);
frost$core$Frost$ref$frost$core$Object$Q(_119);
_121 = *(&local0);
_122 = ((frost$core$Object*) _121);
frost$core$Frost$unref$frost$core$Object$Q(_122);
*(&local0) = _118;
_125 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_125);
goto block7;
block12:;
_128 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s181);
_129 = _128.value;
if (_129) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:311
_132 = (org$frostlang$frostc$Interpreter$_Closure21*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$_Closure21), (frost$core$Class*) &org$frostlang$frostc$Interpreter$_Closure21$class);
org$frostlang$frostc$Interpreter$_Closure21$init$org$frostlang$frostc$Interpreter(_132, param0);
_134 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$_Closure21$$anonymous20$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64).value;
_135 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_136 = ((frost$core$Object*) _132);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Interpreter.frost:311:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_139 = &_135->pointer;
*_139 = _134;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
frost$core$Frost$ref$frost$core$Object$Q(_136);
_143 = &_135->target;
_144 = *_143;
frost$core$Frost$unref$frost$core$Object$Q(_144);
_146 = &_135->target;
*_146 = _136;
_149 = _135;
_150 = _149;
_151 = ((frost$core$Object*) _150);
frost$core$Frost$ref$frost$core$Object$Q(_151);
_153 = *(&local0);
_154 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_154);
*(&local0) = _150;
_157 = ((frost$core$Object*) _135);
frost$core$Frost$unref$frost$core$Object$Q(_157);
_159 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_159);
goto block7;
block15:;
_162 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s182);
_163 = _162.value;
if (_163) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:317
_166 = (org$frostlang$frostc$Interpreter$_Closure23*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$_Closure23), (frost$core$Class*) &org$frostlang$frostc$Interpreter$_Closure23$class);
org$frostlang$frostc$Interpreter$_Closure23$init$org$frostlang$frostc$Interpreter(_166, param0);
_168 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$_Closure23$$anonymous22$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64).value;
_169 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_170 = ((frost$core$Object*) _166);
// begin inline call to frost.core.MutableMethod.init(pointer:builtin_int, target:frost.core.Object?) from Interpreter.frost:317:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_173 = &_169->pointer;
*_173 = _168;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
frost$core$Frost$ref$frost$core$Object$Q(_170);
_177 = &_169->target;
_178 = *_177;
frost$core$Frost$unref$frost$core$Object$Q(_178);
_180 = &_169->target;
*_180 = _170;
_183 = _169;
_184 = _183;
_185 = ((frost$core$Object*) _184);
frost$core$Frost$ref$frost$core$Object$Q(_185);
_187 = *(&local0);
_188 = ((frost$core$Object*) _187);
frost$core$Frost$unref$frost$core$Object$Q(_188);
*(&local0) = _184;
_191 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_191);
_193 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_193);
goto block7;
block18:;
_196 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s183);
_197 = _196.value;
if (_197) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:323
_200 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$$anonymous24$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64).value;
_201 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Interpreter.frost:323:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_204 = &_201->pointer;
*_204 = _200;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_207 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_207);
_209 = &_201->target;
_210 = *_209;
_211 = ((frost$core$Object*) _210);
frost$core$Frost$unref$frost$core$Object$Q(_211);
_213 = &_201->target;
*_213 = ((frost$core$Immutable*) NULL);
_216 = _201;
_217 = ((frost$core$MutableMethod*) _216);
_218 = ((frost$core$Object*) _217);
frost$core$Frost$ref$frost$core$Object$Q(_218);
_220 = *(&local0);
_221 = ((frost$core$Object*) _220);
frost$core$Frost$unref$frost$core$Object$Q(_221);
*(&local0) = _217;
_224 = ((frost$core$Object*) _201);
frost$core$Frost$unref$frost$core$Object$Q(_224);
goto block7;
block21:;
_227 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s184);
_228 = _227.value;
if (_228) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:329
_231 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$$anonymous25$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64).value;
_232 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Interpreter.frost:329:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_235 = &_232->pointer;
*_235 = _231;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_238 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_238);
_240 = &_232->target;
_241 = *_240;
_242 = ((frost$core$Object*) _241);
frost$core$Frost$unref$frost$core$Object$Q(_242);
_244 = &_232->target;
*_244 = ((frost$core$Immutable*) NULL);
_247 = _232;
_248 = ((frost$core$MutableMethod*) _247);
_249 = ((frost$core$Object*) _248);
frost$core$Frost$ref$frost$core$Object$Q(_249);
_251 = *(&local0);
_252 = ((frost$core$Object*) _251);
frost$core$Frost$unref$frost$core$Object$Q(_252);
*(&local0) = _248;
_255 = ((frost$core$Object*) _232);
frost$core$Frost$unref$frost$core$Object$Q(_255);
goto block7;
block24:;
_258 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s185);
_259 = _258.value;
if (_259) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:338
_262 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$$anonymous26$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64).value;
_263 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Interpreter.frost:338:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_266 = &_263->pointer;
*_266 = _262;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_269 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_269);
_271 = &_263->target;
_272 = *_271;
_273 = ((frost$core$Object*) _272);
frost$core$Frost$unref$frost$core$Object$Q(_273);
_275 = &_263->target;
*_275 = ((frost$core$Immutable*) NULL);
_278 = _263;
_279 = ((frost$core$MutableMethod*) _278);
_280 = ((frost$core$Object*) _279);
frost$core$Frost$ref$frost$core$Object$Q(_280);
_282 = *(&local0);
_283 = ((frost$core$Object*) _282);
frost$core$Frost$unref$frost$core$Object$Q(_283);
*(&local0) = _279;
_286 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_286);
goto block7;
block27:;
_289 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_65, &$s186);
_290 = _289.value;
if (_290) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:397
_293 = frost$unsafe$Pointer$init$builtin_int((intptr_t) &org$frostlang$frostc$Interpreter$$anonymous27$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64).value;
_294 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:builtin_int, target:frost.core.Immutable?) from Interpreter.frost:397:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_297 = &_294->pointer;
*_297 = _293;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
_300 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_300);
_302 = &_294->target;
_303 = *_302;
_304 = ((frost$core$Object*) _303);
frost$core$Frost$unref$frost$core$Object$Q(_304);
_306 = &_294->target;
*_306 = ((frost$core$Immutable*) NULL);
_309 = _294;
_310 = ((frost$core$MutableMethod*) _309);
_311 = ((frost$core$Object*) _310);
frost$core$Frost$ref$frost$core$Object$Q(_311);
_313 = *(&local0);
_314 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_314);
*(&local0) = _310;
_317 = ((frost$core$Object*) _294);
frost$core$Frost$unref$frost$core$Object$Q(_317);
goto block7;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:403
_321 = *(&local1);
_322 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s187, _321);
_323 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_322, &$s188);
_324 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_323, &$s189);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Interpreter.frost:403:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_324);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s190);
_334 = ((frost$core$Object*) _324);
frost$core$Frost$unref$frost$core$Object$Q(_334);
_336 = ((frost$core$Object*) _323);
frost$core$Frost$unref$frost$core$Object$Q(_336);
_338 = ((frost$core$Object*) _322);
frost$core$Frost$unref$frost$core$Object$Q(_338);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:405
_341 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_341);
_343 = (frost$core$Int) {405u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s191, _343, &$s192);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:408
_347 = &param0->builtins;
_348 = *_347;
_349 = ((frost$core$Object*) param1);
_350 = *(&local0);
_351 = _350 != NULL;
_352 = (frost$core$Bit) {_351};
_353 = _352.value;
if (_353) goto block34; else goto block35;
block35:;
_355 = (frost$core$Int) {408u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s193, _355, &$s194);
abort(); // unreachable
block34:;
_358 = _350;
_359 = ((frost$core$Object*) _358);
frost$collections$IdentityMap$$IDXEQ$frost$collections$IdentityMap$K$frost$collections$IdentityMap$V(_348, _349, _359);
_361 = *(&local1);
_362 = ((frost$core$Object*) _361);
frost$core$Frost$unref$frost$core$Object$Q(_362);
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:410
_367 = *(&local0);
_368 = _367 != NULL;
_369 = (frost$core$Bit) {_368};
_370 = _369.value;
if (_370) goto block36; else goto block37;
block37:;
_372 = (frost$core$Int) {410u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s195, _372, &$s196);
abort(); // unreachable
block36:;
_375 = _367;
_376 = ((frost$core$Object*) _375);
frost$core$Frost$ref$frost$core$Object$Q(_376);
_378 = *(&local0);
_379 = ((frost$core$Object*) _378);
frost$core$Frost$unref$frost$core$Object$Q(_379);
*(&local0) = ((frost$core$MutableMethod*) NULL);
return _375;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$callBuiltin$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$FixedArray* param3) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int64 local0;
$fn197 _1;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:414
_1 = ($fn198) param0->$class->vtable[14];
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
_11 = (($fn199) _10.value)(param1, param3);
*(&local0) = _11;
goto block3;
block1:;
_14 = (frost$unsafe$Pointer) {_5};
_15 = (($fn200) _14.value)(_7, param1, param3);
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
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
frost$core$Bit local4;
frost$unsafe$Pointer local5;
frost$unsafe$Pointer local6;
frost$unsafe$Pointer local7;
org$frostlang$frostc$ClassDecl* local8 = NULL;
int64_t local9;
int64_t local10;
frost$unsafe$Pointer local11;
frost$unsafe$Pointer local12;
frost$unsafe$Pointer local13;
int64_t local14;
int64_t local15;
frost$unsafe$Pointer local16;
frost$unsafe$Pointer local17;
frost$unsafe$Pointer local18;
frost$core$Int local19;
org$frostlang$frostc$Type$Kind local20;
org$frostlang$frostc$Type$Kind local21;
frost$core$Bit local22;
int64_t local23;
int64_t local24;
frost$unsafe$Pointer local25;
frost$unsafe$Pointer local26;
frost$unsafe$Pointer local27;
frost$core$Int local28;
frost$core$Int local29;
frost$unsafe$Pointer local30;
int64_t local31;
int64_t local32;
frost$unsafe$Pointer local33;
frost$unsafe$Pointer local34;
$fn201 _1;
org$frostlang$frostc$Type* _2;
frost$core$Object* _4;
org$frostlang$frostc$Type* _6;
frost$core$Object* _7;
frost$core$Object* _10;
$fn202 _13;
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
frost$core$Weak** _94;
frost$core$Weak* _95;
frost$core$Bit* _100;
frost$core$Bit _101;
bool _103;
frost$core$Int _105;
frost$core$Object** _109;
frost$core$Object* _110;
frost$core$Object* _111;
frost$core$Object* _112;
org$frostlang$frostc$Compiler* _115;
bool _116;
frost$core$Bit _117;
bool _118;
frost$core$Int _120;
org$frostlang$frostc$Compiler* _123;
org$frostlang$frostc$Type* _124;
frost$core$Bit _125;
bool _126;
frost$core$Object* _127;
org$frostlang$frostc$Type$Kind* _130;
org$frostlang$frostc$Type$Kind _131;
frost$core$Equatable* _132;
frost$core$Int _133;
frost$core$Int* _136;
org$frostlang$frostc$Type$Kind _138;
org$frostlang$frostc$Type$Kind _141;
frost$core$Equatable* _142;
$fn203 _143;
frost$core$Bit _144;
bool _145;
frost$core$Object* _146;
frost$core$Object* _148;
org$frostlang$frostc$FixedArray** _153;
org$frostlang$frostc$FixedArray* _154;
bool _155;
frost$core$Bit _156;
bool _157;
frost$core$Int _159;
org$frostlang$frostc$FixedArray* _162;
frost$core$Object* _163;
frost$core$Int _166;
frost$core$Object* _167;
org$frostlang$frostc$Type* _168;
org$frostlang$frostc$Type* _169;
org$frostlang$frostc$Symbol* _172;
frost$core$String** _173;
frost$core$String* _174;
org$frostlang$frostc$Symbol* _175;
frost$core$String** _176;
frost$core$String* _177;
frost$core$Bit _178;
bool _179;
org$frostlang$frostc$Type$Kind* _181;
org$frostlang$frostc$Type$Kind _182;
frost$core$Equatable* _183;
org$frostlang$frostc$Type$Kind* _184;
org$frostlang$frostc$Type$Kind _185;
frost$core$Equatable* _186;
$fn204 _187;
frost$core$Bit _188;
frost$core$Object* _189;
frost$core$Object* _191;
frost$core$Bit _197;
bool _199;
frost$core$Object* _200;
frost$core$Object* _202;
org$frostlang$frostc$MemoryLayout** _206;
org$frostlang$frostc$MemoryLayout* _207;
org$frostlang$frostc$Type* _208;
$fn205 _209;
frost$core$Int _210;
int64_t _213;
int64_t _214;
int64_t _215;
int64_t* _218;
frost$unsafe$Pointer _220;
frost$unsafe$Pointer _223;
frost$core$Weak** _227;
frost$core$Weak* _228;
frost$core$Bit* _233;
frost$core$Bit _234;
bool _236;
frost$core$Int _238;
frost$core$Object** _242;
frost$core$Object* _243;
frost$core$Object* _244;
frost$core$Object* _245;
org$frostlang$frostc$Compiler* _248;
bool _249;
frost$core$Bit _250;
bool _251;
frost$core$Int _253;
org$frostlang$frostc$Compiler* _256;
org$frostlang$frostc$Type* _257;
org$frostlang$frostc$ClassDecl* _258;
bool _259;
frost$core$Bit _260;
bool _261;
frost$core$Int _263;
org$frostlang$frostc$ClassDecl* _266;
frost$core$Object* _268;
org$frostlang$frostc$ClassDecl* _270;
frost$core$Object* _271;
frost$core$Object* _274;
frost$core$Object* _276;
frost$unsafe$Pointer _279;
int64_t _280;
org$frostlang$frostc$ClassDecl* _281;
frost$core$Object* _282;
org$frostlang$frostc$ClassDecl* _284;
frost$core$Object* _285;
frost$unsafe$Pointer _289;
org$frostlang$frostc$MemoryLayout** _290;
org$frostlang$frostc$MemoryLayout* _291;
$fn206 _292;
frost$core$Int _293;
int64_t _296;
int64_t _301;
int64_t _302;
int64_t _303;
int64_t _304;
int64_t _305;
int64_t* _308;
frost$unsafe$Pointer _310;
frost$unsafe$Pointer _313;
frost$unsafe$Pointer _317;
int64_t _318;
frost$core$Int32 _319;
frost$unsafe$Pointer _322;
frost$core$Int _323;
int64_t _326;
int64_t _331;
int64_t _332;
int64_t _333;
int64_t _334;
int64_t _335;
int64_t* _338;
frost$unsafe$Pointer _340;
frost$unsafe$Pointer _343;
org$frostlang$frostc$Type* _348;
$fn207 _349;
frost$core$Bit _350;
bool _351;
frost$core$Int64 _354;
int64_t _357;
int64_t _358;
frost$core$Int _359;
frost$unsafe$Pointer _361;
frost$unsafe$Pointer* _366;
frost$unsafe$Pointer _367;
int64_t _368;
frost$core$Int64 _369;
frost$unsafe$Pointer* _372;
frost$unsafe$Pointer _373;
frost$core$Int _377;
org$frostlang$frostc$MemoryLayout** _378;
org$frostlang$frostc$MemoryLayout* _379;
org$frostlang$frostc$ClassDecl* _380;
org$frostlang$frostc$Type** _381;
org$frostlang$frostc$Type* _382;
$fn208 _383;
frost$core$Int _384;
frost$core$Bit _385;
frost$core$Range$LTfrost$core$Int$GT _386;
frost$core$Int _387;
frost$core$Int _389;
frost$core$Bit _390;
bool _391;
frost$core$Int _392;
int64_t _394;
int64_t _395;
bool _396;
frost$core$Bit _397;
bool _398;
int64_t _400;
int64_t _401;
bool _402;
frost$core$Bit _403;
bool _404;
frost$unsafe$Pointer _407;
int64_t _408;
frost$core$Int _409;
frost$core$Int64 _410;
frost$unsafe$Pointer _411;
int64_t _412;
frost$core$Int _413;
frost$core$Int64 _414;
int64_t _415;
frost$core$UInt8 _416;
int64_t _417;
frost$core$Int _420;
int64_t _421;
int64_t _422;
int64_t _423;
frost$core$Int _424;
int64_t _426;
int64_t _427;
bool _428;
frost$core$Bit _429;
bool _430;
int64_t _432;
int64_t _433;
bool _434;
frost$core$Bit _435;
bool _436;
int64_t _438;
int64_t _439;
int64_t _440;
frost$core$Int _441;
frost$collections$Array** _445;
frost$collections$Array* _446;
frost$core$Int _447;
frost$unsafe$Pointer _448;
int64_t _451;
frost$core$Int _452;
int64_t _456;
int64_t _457;
frost$core$Int64 _458;
frost$core$Int64$nullable _460;
frost$core$Object* _461;
frost$core$Int _463;
int64_t _464;
int64_t _465;
bool _466;
frost$core$Bit _467;
bool _468;
frost$collections$CollectionView* _470;
$fn209 _471;
frost$core$Int _472;
int64_t _473;
int64_t _474;
bool _475;
frost$core$Bit _476;
bool _477;
frost$core$Int _479;
frost$unsafe$Pointer* _483;
frost$unsafe$Pointer _484;
int64_t _485;
frost$core$Int64 _486;
int64_t _487;
frost$core$Object* _488;
frost$core$Object* _490;
frost$core$Object* _491;
frost$core$Object* _495;
org$frostlang$frostc$ClassDecl* _498;
frost$core$Object* _499;
org$frostlang$frostc$Type* _502;
frost$core$Object* _503;
frost$core$Weak** _508;
frost$core$Weak* _509;
frost$core$Bit* _514;
frost$core$Bit _515;
bool _517;
frost$core$Int _519;
frost$core$Object** _523;
frost$core$Object* _524;
frost$core$Object* _525;
frost$core$Object* _526;
org$frostlang$frostc$Compiler* _529;
bool _530;
frost$core$Bit _531;
bool _532;
frost$core$Int _534;
org$frostlang$frostc$Compiler* _537;
org$frostlang$frostc$Type* _538;
frost$core$Bit _539;
bool _542;
bool _543;
frost$core$Bit _544;
bool _546;
frost$core$Object* _547;
frost$core$Weak** _550;
frost$core$Weak* _551;
frost$core$Bit* _556;
frost$core$Bit _557;
bool _559;
frost$core$Int _561;
frost$core$Object** _565;
frost$core$Object* _566;
frost$core$Object* _567;
frost$core$Object* _568;
org$frostlang$frostc$Compiler* _571;
bool _572;
frost$core$Bit _573;
bool _574;
frost$core$Int _576;
org$frostlang$frostc$Compiler* _579;
frost$core$Bit _580;
bool _581;
frost$core$Object* _582;
frost$core$Weak** _585;
frost$core$Weak* _586;
frost$core$Bit* _591;
frost$core$Bit _592;
bool _594;
frost$core$Int _596;
frost$core$Object** _600;
frost$core$Object* _601;
frost$core$Object* _602;
frost$core$Object* _603;
org$frostlang$frostc$Compiler* _606;
bool _607;
frost$core$Bit _608;
bool _609;
frost$core$Int _611;
org$frostlang$frostc$Compiler* _614;
frost$core$Bit _615;
bool _616;
frost$core$Object* _617;
org$frostlang$frostc$Type* _620;
org$frostlang$frostc$Type$Kind* _621;
org$frostlang$frostc$Type$Kind _622;
frost$core$Equatable* _623;
frost$core$Int _624;
frost$core$Int* _627;
org$frostlang$frostc$Type$Kind _629;
org$frostlang$frostc$Type$Kind _632;
frost$core$Equatable* _633;
$fn210 _634;
frost$core$Bit _635;
bool _636;
frost$core$Object* _637;
frost$core$Object* _639;
org$frostlang$frostc$Type* _642;
org$frostlang$frostc$FixedArray** _645;
org$frostlang$frostc$FixedArray* _646;
bool _647;
frost$core$Bit _648;
bool _649;
frost$core$Int _651;
org$frostlang$frostc$FixedArray* _654;
frost$core$Object* _655;
frost$core$Int _658;
frost$core$Object* _659;
org$frostlang$frostc$Type* _660;
org$frostlang$frostc$Symbol* _663;
frost$core$String** _664;
frost$core$String* _665;
org$frostlang$frostc$Symbol* _666;
frost$core$String** _667;
frost$core$String* _668;
frost$core$Bit _669;
bool _670;
org$frostlang$frostc$Type$Kind* _672;
org$frostlang$frostc$Type$Kind _673;
frost$core$Equatable* _674;
org$frostlang$frostc$Type$Kind* _675;
org$frostlang$frostc$Type$Kind _676;
frost$core$Equatable* _677;
$fn211 _678;
frost$core$Bit _679;
frost$core$Object* _680;
frost$core$Object* _682;
frost$core$Bit _688;
bool _690;
frost$core$Object* _691;
frost$core$Object* _693;
frost$core$Int64 _697;
int64_t _700;
int64_t _701;
frost$core$Int _702;
frost$unsafe$Pointer _704;
frost$core$Int _705;
int64_t _708;
int64_t _713;
int64_t _714;
int64_t _715;
int64_t _716;
int64_t _717;
int64_t* _720;
frost$unsafe$Pointer _722;
frost$unsafe$Pointer _725;
org$frostlang$frostc$Type* _729;
$fn212 _730;
frost$core$Bit _731;
bool _732;
frost$collections$Array** _735;
frost$collections$Array* _736;
frost$core$Int _737;
frost$unsafe$Pointer* _738;
frost$unsafe$Pointer _739;
int64_t _742;
frost$core$Int _743;
frost$core$Int64 _745;
frost$core$Int64$nullable _746;
frost$core$Object* _747;
frost$core$Int _749;
int64_t _750;
int64_t _751;
bool _752;
frost$core$Bit _753;
bool _754;
frost$collections$CollectionView* _756;
$fn213 _757;
frost$core$Int _758;
int64_t _759;
int64_t _760;
bool _761;
frost$core$Bit _762;
bool _763;
frost$core$Int _765;
frost$unsafe$Pointer* _769;
frost$unsafe$Pointer _770;
int64_t _771;
frost$core$Int64 _772;
int64_t _773;
frost$core$Object* _774;
frost$core$Object* _776;
frost$core$Object* _777;
frost$core$Object* _781;
org$frostlang$frostc$MemoryLayout** _784;
org$frostlang$frostc$MemoryLayout* _785;
org$frostlang$frostc$Type* _786;
$fn214 _787;
frost$core$Int _788;
frost$core$Int _791;
frost$core$Int _792;
frost$core$Bit _793;
frost$core$Range$LTfrost$core$Int$GT _794;
frost$core$Int _795;
frost$core$Int _797;
frost$core$Bit _798;
bool _799;
frost$core$Int _800;
int64_t _802;
int64_t _803;
bool _804;
frost$core$Bit _805;
bool _806;
int64_t _808;
int64_t _809;
bool _810;
frost$core$Bit _811;
bool _812;
frost$unsafe$Pointer* _815;
frost$unsafe$Pointer _816;
int64_t _817;
frost$core$Int _818;
frost$core$Int64 _819;
frost$unsafe$Pointer _820;
int64_t _821;
frost$core$Int _822;
frost$core$Int64 _823;
int64_t _824;
frost$core$UInt8 _825;
int64_t _826;
frost$core$Int _829;
int64_t _830;
int64_t _831;
int64_t _832;
frost$core$Int _833;
int64_t _835;
int64_t _836;
bool _837;
frost$core$Bit _838;
bool _839;
int64_t _841;
int64_t _842;
bool _843;
frost$core$Bit _844;
bool _845;
int64_t _847;
int64_t _848;
int64_t _849;
frost$core$Int _850;
frost$unsafe$Pointer* _854;
frost$unsafe$Pointer _855;
frost$unsafe$Pointer* _858;
frost$unsafe$Pointer _859;
frost$core$Int _860;
int64_t _863;
int64_t _868;
int64_t _869;
int64_t _870;
int64_t _871;
int64_t _872;
int64_t* _875;
frost$unsafe$Pointer _877;
frost$unsafe$Pointer _880;
frost$unsafe$Pointer* _882;
frost$collections$Array** _885;
frost$collections$Array* _886;
frost$core$Int _887;
frost$unsafe$Pointer _888;
int64_t _891;
frost$core$Int _892;
int64_t _896;
int64_t _897;
frost$core$Int64 _898;
frost$core$Int64$nullable _900;
frost$core$Object* _901;
frost$core$Int _903;
int64_t _904;
int64_t _905;
bool _906;
frost$core$Bit _907;
bool _908;
frost$collections$CollectionView* _910;
$fn215 _911;
frost$core$Int _912;
int64_t _913;
int64_t _914;
bool _915;
frost$core$Bit _916;
bool _917;
frost$core$Int _919;
frost$unsafe$Pointer* _923;
frost$unsafe$Pointer _924;
int64_t _925;
frost$core$Int64 _926;
int64_t _927;
frost$core$Object* _928;
frost$core$Object* _930;
frost$core$Object* _931;
frost$core$Object* _935;
org$frostlang$frostc$Type* _938;
frost$core$Object* _939;
frost$collections$Array** _945;
frost$collections$Array* _946;
frost$core$Int _947;
frost$unsafe$Pointer _948;
int64_t _949;
frost$core$Int64 _950;
frost$core$Int64$nullable _951;
frost$core$Object* _952;
frost$core$Int _954;
int64_t _955;
int64_t _956;
bool _957;
frost$core$Bit _958;
bool _959;
frost$collections$CollectionView* _961;
$fn216 _962;
frost$core$Int _963;
int64_t _964;
int64_t _965;
bool _966;
frost$core$Bit _967;
bool _968;
frost$core$Int _970;
frost$unsafe$Pointer* _974;
frost$unsafe$Pointer _975;
int64_t _976;
frost$core$Int64 _977;
int64_t _978;
frost$core$Object* _979;
frost$core$Object* _981;
frost$core$Object* _982;
frost$core$Object* _986;
org$frostlang$frostc$Type* _989;
frost$core$Object* _990;
org$frostlang$frostc$Type* _997;
frost$core$Bit _998;
bool _999;
frost$core$Bit _1001;
bool _1002;
org$frostlang$frostc$Type* _1005;
frost$core$Int _1006;
frost$core$Int _1007;
int64_t _1008;
int64_t _1009;
bool _1010;
frost$core$Bit _1011;
bool _1012;
frost$collections$Array** _1015;
frost$collections$Array* _1016;
frost$core$Int _1017;
frost$core$Int64 _1018;
int64_t _1021;
uint64_t _1022;
frost$core$UInt64 _1023;
frost$core$UInt64 _1025;
frost$core$Int _1026;
frost$core$Int _1027;
int64_t _1028;
int64_t _1029;
int64_t _1030;
frost$core$Int _1031;
int64_t _1034;
uint64_t _1035;
frost$core$UInt64 _1036;
uint64_t _1040;
uint64_t _1041;
uint64_t _1042;
frost$core$UInt64 _1043;
uint64_t _1047;
uint64_t _1048;
uint64_t _1049;
frost$core$UInt64 _1050;
uint64_t _1054;
int64_t _1055;
frost$core$Int64 _1056;
frost$core$Int64$nullable _1058;
frost$core$Object* _1059;
frost$core$Int _1061;
int64_t _1062;
int64_t _1063;
bool _1064;
frost$core$Bit _1065;
bool _1066;
frost$collections$CollectionView* _1068;
$fn217 _1069;
frost$core$Int _1070;
int64_t _1071;
int64_t _1072;
bool _1073;
frost$core$Bit _1074;
bool _1075;
frost$core$Int _1077;
frost$unsafe$Pointer* _1081;
frost$unsafe$Pointer _1082;
int64_t _1083;
frost$core$Int64 _1084;
int64_t _1085;
frost$core$Object* _1086;
frost$core$Object* _1088;
frost$core$Object* _1089;
frost$core$Object* _1093;
org$frostlang$frostc$Type* _1096;
frost$core$Object* _1097;
org$frostlang$frostc$Type* _1102;
frost$core$Int _1103;
frost$core$Int _1104;
int64_t _1107;
int64_t _1108;
bool _1109;
frost$core$Bit _1110;
bool _1112;
frost$collections$Array** _1115;
frost$collections$Array* _1116;
frost$core$Int _1117;
frost$core$Int64 _1118;
frost$core$Int64$nullable _1119;
frost$core$Object* _1120;
frost$core$Int _1122;
int64_t _1123;
int64_t _1124;
bool _1125;
frost$core$Bit _1126;
bool _1127;
frost$collections$CollectionView* _1129;
$fn218 _1130;
frost$core$Int _1131;
int64_t _1132;
int64_t _1133;
bool _1134;
frost$core$Bit _1135;
bool _1136;
frost$core$Int _1138;
frost$unsafe$Pointer* _1142;
frost$unsafe$Pointer _1143;
int64_t _1144;
frost$core$Int64 _1145;
int64_t _1146;
frost$core$Object* _1147;
frost$core$Object* _1149;
frost$core$Object* _1150;
frost$core$Object* _1154;
org$frostlang$frostc$Type* _1157;
frost$core$Object* _1158;
frost$collections$Array** _1164;
frost$collections$Array* _1165;
frost$core$Int _1166;
frost$core$Int64 _1167;
frost$core$Int64$nullable _1168;
frost$core$Object* _1169;
frost$core$Int _1171;
int64_t _1172;
int64_t _1173;
bool _1174;
frost$core$Bit _1175;
bool _1176;
frost$collections$CollectionView* _1178;
$fn219 _1179;
frost$core$Int _1180;
int64_t _1181;
int64_t _1182;
bool _1183;
frost$core$Bit _1184;
bool _1185;
frost$core$Int _1187;
frost$unsafe$Pointer* _1191;
frost$unsafe$Pointer _1192;
int64_t _1193;
frost$core$Int64 _1194;
int64_t _1195;
frost$core$Object* _1196;
frost$core$Object* _1198;
frost$core$Object* _1199;
frost$core$Object* _1203;
org$frostlang$frostc$Type* _1205;
frost$core$Object* _1206;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:418
_1 = ($fn220) param3->$class->vtable[2];
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:419
_13 = ($fn221) param1->$class->vtable[2];
_14 = _13(param1, param3);
*(&local1) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:420
_17 = &param0->compiler;
_18 = *_17;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:420:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_23 = &_18->_valid;
_24 = *_23;
_26 = _24.value;
if (_26) goto block8; else goto block9;
block9:;
_28 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s222, _28, &$s223);
abort(); // unreachable
block8:;
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
if (_41) goto block10; else goto block11;
block11:;
_43 = (frost$core$Int) {420u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s224, _43, &$s225);
abort(); // unreachable
block10:;
_46 = _38;
_47 = *(&local0);
_48 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_46, _47);
_49 = _48.value;
_50 = _34;
frost$core$Frost$unref$frost$core$Object$Q(_50);
if (_49) goto block5; else goto block4;
block5:;
_53 = &param0->compiler;
_54 = *_53;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:420:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_59 = &_54->_valid;
_60 = *_59;
_62 = _60.value;
if (_62) goto block14; else goto block15;
block15:;
_64 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s226, _64, &$s227);
abort(); // unreachable
block14:;
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
if (_77) goto block16; else goto block17;
block17:;
_79 = (frost$core$Int) {420u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s228, _79, &$s229);
abort(); // unreachable
block16:;
_82 = _74;
_83 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_82, param4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Interpreter.frost:420:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_86 = _83.value;
_87 = !_86;
_88 = (frost$core$Bit) {_87};
_90 = _88.value;
_91 = _70;
frost$core$Frost$unref$frost$core$Object$Q(_91);
if (_90) goto block1; else goto block4;
block4:;
_94 = &param0->compiler;
_95 = *_94;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:420:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_100 = &_95->_valid;
_101 = *_100;
_103 = _101.value;
if (_103) goto block23; else goto block24;
block24:;
_105 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s230, _105, &$s231);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_109 = &_95->value;
_110 = *_109;
_111 = _110;
_112 = _111;
frost$core$Frost$ref$frost$core$Object$Q(_112);
_115 = ((org$frostlang$frostc$Compiler*) _111);
_116 = _115 != NULL;
_117 = (frost$core$Bit) {_116};
_118 = _117.value;
if (_118) goto block25; else goto block26;
block26:;
_120 = (frost$core$Int) {420u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s232, _120, &$s233);
abort(); // unreachable
block25:;
_123 = _115;
_124 = *(&local0);
_125 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_123, _124);
_126 = _125.value;
_127 = _111;
frost$core$Frost$unref$frost$core$Object$Q(_127);
if (_126) goto block20; else goto block3;
block20:;
_130 = &param4->typeKind;
_131 = *_130;
org$frostlang$frostc$Type$Kind$wrapper* $tmp234;
$tmp234 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp234->value = _131;
_132 = ((frost$core$Equatable*) $tmp234);
_133 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Interpreter.frost:421:39
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_136 = &(&local3)->$rawValue;
*_136 = _133;
_138 = *(&local3);
*(&local2) = _138;
_141 = *(&local2);
org$frostlang$frostc$Type$Kind$wrapper* $tmp235;
$tmp235 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp235->value = _141;
_142 = ((frost$core$Equatable*) $tmp235);
ITable* $tmp236 = _132->$class->itable;
while ($tmp236->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp236 = $tmp236->next;
}
_143 = $tmp236->methods[0];
_144 = _143(_132, _142);
_145 = _144.value;
_146 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_146);
_148 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_148);
if (_145) goto block19; else goto block3;
block19:;
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Interpreter.frost:421:52
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_153 = &param4->_subtypes;
_154 = *_153;
_155 = _154 != NULL;
_156 = (frost$core$Bit) {_155};
_157 = _156.value;
if (_157) goto block29; else goto block30;
block30:;
_159 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s237, _159, &$s238);
abort(); // unreachable
block29:;
_162 = _154;
_163 = ((frost$core$Object*) _162);
frost$core$Frost$ref$frost$core$Object$Q(_163);
_166 = (frost$core$Int) {0u};
_167 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_162, _166);
_168 = ((org$frostlang$frostc$Type*) _167);
_169 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Interpreter.frost:421:65
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:256
_172 = ((org$frostlang$frostc$Symbol*) _168);
_173 = &_172->name;
_174 = *_173;
_175 = ((org$frostlang$frostc$Symbol*) _169);
_176 = &_175->name;
_177 = *_176;
_178 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_174, _177);
_179 = _178.value;
if (_179) goto block32; else goto block33;
block32:;
_181 = &_168->typeKind;
_182 = *_181;
org$frostlang$frostc$Type$Kind$wrapper* $tmp239;
$tmp239 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp239->value = _182;
_183 = ((frost$core$Equatable*) $tmp239);
_184 = &_169->typeKind;
_185 = *_184;
org$frostlang$frostc$Type$Kind$wrapper* $tmp240;
$tmp240 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp240->value = _185;
_186 = ((frost$core$Equatable*) $tmp240);
ITable* $tmp241 = _183->$class->itable;
while ($tmp241->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp241 = $tmp241->next;
}
_187 = $tmp241->methods[0];
_188 = _187(_183, _186);
_189 = ((frost$core$Object*) _186);
frost$core$Frost$unref$frost$core$Object$Q(_189);
_191 = ((frost$core$Object*) _183);
frost$core$Frost$unref$frost$core$Object$Q(_191);
*(&local4) = _188;
goto block34;
block33:;
*(&local4) = _178;
goto block34;
block34:;
_197 = *(&local4);
_199 = _197.value;
_200 = _167;
frost$core$Frost$unref$frost$core$Object$Q(_200);
_202 = ((frost$core$Object*) _162);
frost$core$Frost$unref$frost$core$Object$Q(_202);
if (_199) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:423
_206 = &param0->memoryLayout;
_207 = *_206;
_208 = *(&local0);
_209 = ($fn242) _207->$class->vtable[9];
_210 = _209(_207, _208);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:423:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_213 = _210.value;
_214 = _213 * 1u;
_215 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_214);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_218 = &(&local6)->value;
*_218 = _215;
_220 = *(&local6);
*(&local5) = _220;
_223 = *(&local5);
*(&local7) = _223;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:424
_227 = &param0->compiler;
_228 = *_227;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:424:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_233 = &_228->_valid;
_234 = *_233;
_236 = _234.value;
if (_236) goto block39; else goto block40;
block40:;
_238 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s243, _238, &$s244);
abort(); // unreachable
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_242 = &_228->value;
_243 = *_242;
_244 = _243;
_245 = _244;
frost$core$Frost$ref$frost$core$Object$Q(_245);
_248 = ((org$frostlang$frostc$Compiler*) _244);
_249 = _248 != NULL;
_250 = (frost$core$Bit) {_249};
_251 = _250.value;
if (_251) goto block41; else goto block42;
block42:;
_253 = (frost$core$Int) {424u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s245, _253, &$s246);
abort(); // unreachable
block41:;
_256 = _248;
_257 = *(&local0);
_258 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(_256, _257);
_259 = _258 != NULL;
_260 = (frost$core$Bit) {_259};
_261 = _260.value;
if (_261) goto block43; else goto block44;
block44:;
_263 = (frost$core$Int) {424u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s247, _263, &$s248);
abort(); // unreachable
block43:;
_266 = _258;
*(&local8) = ((org$frostlang$frostc$ClassDecl*) NULL);
_268 = ((frost$core$Object*) _266);
frost$core$Frost$ref$frost$core$Object$Q(_268);
_270 = *(&local8);
_271 = ((frost$core$Object*) _270);
frost$core$Frost$unref$frost$core$Object$Q(_271);
*(&local8) = _266;
_274 = ((frost$core$Object*) _258);
frost$core$Frost$unref$frost$core$Object$Q(_274);
_276 = _244;
frost$core$Frost$unref$frost$core$Object$Q(_276);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:425
_279 = *(&local7);
_280 = _279.value;
_281 = *(&local8);
_282 = ((frost$core$Object*) _281);
frost$core$Frost$ref$frost$core$Object$Q(_282);
_284 = *((org$frostlang$frostc$ClassDecl**)_280);
_285 = ((frost$core$Object*) _284);
frost$core$Frost$unref$frost$core$Object$Q(_285);
*((org$frostlang$frostc$ClassDecl**)_280) = _281;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:426
_289 = *(&local7);
_290 = &param0->memoryLayout;
_291 = *_290;
_292 = ($fn249) _291->$class->vtable[3];
_293 = _292(_291);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:426:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_296 = _293.value;
*(&local9) = _296;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local10) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_301 = _289.value;
_302 = *(&local9);
_303 = *(&local10);
_304 = _302 * _303;
_305 = _301 + _304;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_308 = &(&local12)->value;
*_308 = _305;
_310 = *(&local12);
*(&local11) = _310;
_313 = *(&local11);
*(&local13) = _313;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:427
_317 = *(&local13);
_318 = _317.value;
_319 = (frost$core$Int32) {1u};
*((frost$core$Int32*)_318) = _319;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:429
_322 = *(&local13);
_323 = (frost$core$Int) {5u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:429:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_326 = _323.value;
*(&local14) = _326;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local15) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_331 = _322.value;
_332 = *(&local14);
_333 = *(&local15);
_334 = _332 * _333;
_335 = _331 + _334;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_338 = &(&local17)->value;
*_338 = _335;
_340 = *(&local17);
*(&local16) = _340;
_343 = *(&local16);
*(&local13) = _343;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:430
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:431
_348 = *(&local0);
_349 = ($fn250) param0->$class->vtable[10];
_350 = _349(param0, _348);
_351 = _350.value;
if (_351) goto block49; else goto block51;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:432
_354 = *(&local1);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:432:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_357 = _354.value;
_358 = ((int64_t) _357);
_359 = (frost$core$Int) {_358};
_361 = frost$unsafe$Pointer$init$frost$core$Int(_359);
*(&local18) = _361;
goto block50;
block51:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:435
_366 = &param0->stack;
_367 = *_366;
_368 = _367.value;
_369 = *(&local1);
*((frost$core$Int64*)_368) = _369;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:436
_372 = &param0->stack;
_373 = *_372;
*(&local18) = _373;
goto block50;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:439
_377 = (frost$core$Int) {0u};
_378 = &param0->memoryLayout;
_379 = *_378;
_380 = *(&local8);
_381 = &_380->type;
_382 = *_381;
_383 = ($fn251) _379->$class->vtable[7];
_384 = _383(_379, _382);
_385 = (frost$core$Bit) {false};
_386 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_377, _384, _385);
_387 = _386.min;
*(&local19) = _387;
_389 = _386.max;
_390 = _386.inclusive;
_391 = _390.value;
_392 = (frost$core$Int) {1u};
if (_391) goto block56; else goto block57;
block56:;
_394 = _387.value;
_395 = _389.value;
_396 = _394 <= _395;
_397 = (frost$core$Bit) {_396};
_398 = _397.value;
if (_398) goto block53; else goto block54;
block57:;
_400 = _387.value;
_401 = _389.value;
_402 = _400 < _401;
_403 = (frost$core$Bit) {_402};
_404 = _403.value;
if (_404) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:440
_407 = *(&local13);
_408 = _407.value;
_409 = *(&local19);
_410 = frost$core$Int64$init$frost$core$Int(_409);
_411 = *(&local18);
_412 = _411.value;
_413 = *(&local19);
_414 = frost$core$Int64$init$frost$core$Int(_413);
_415 = _414.value;
_416 = ((frost$core$UInt8*)_412)[_415];
_417 = _410.value;
((frost$core$UInt8*)_408)[_417] = _416;
_420 = *(&local19);
_421 = _389.value;
_422 = _420.value;
_423 = _421 - _422;
_424 = (frost$core$Int) {_423};
if (_391) goto block59; else goto block60;
block59:;
_426 = _424.value;
_427 = _392.value;
_428 = _426 >= _427;
_429 = (frost$core$Bit) {_428};
_430 = _429.value;
if (_430) goto block58; else goto block54;
block60:;
_432 = _424.value;
_433 = _392.value;
_434 = _432 > _433;
_435 = (frost$core$Bit) {_434};
_436 = _435.value;
if (_436) goto block58; else goto block54;
block58:;
_438 = _420.value;
_439 = _392.value;
_440 = _438 + _439;
_441 = (frost$core$Int) {_440};
*(&local19) = _441;
goto block53;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:442
_445 = &param1->statements;
_446 = *_445;
_447 = param2.value;
_448 = *(&local7);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:442:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_451 = _448.value;
_452 = (frost$core$Int) {_451};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:442:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_456 = _452.value;
_457 = ((int64_t) _456);
_458 = (frost$core$Int64) {_457};
_460 = ((frost$core$Int64$nullable) { _458, true });
frost$core$Object* $tmp252;
if (_460.nonnull) {
    frost$core$Int64$wrapper* $tmp253;
    $tmp253 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp253->value = ((frost$core$Int64) _460.value);
    $tmp252 = ((frost$core$Object*) $tmp253);
}
else {
    $tmp252 = NULL;
}
_461 = $tmp252;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:442:31
_463 = (frost$core$Int) {0u};
_464 = _447.value;
_465 = _463.value;
_466 = _464 >= _465;
_467 = (frost$core$Bit) {_466};
_468 = _467.value;
if (_468) goto block66; else goto block65;
block66:;
_470 = ((frost$collections$CollectionView*) _446);
ITable* $tmp254 = _470->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp254 = $tmp254->next;
}
_471 = $tmp254->methods[0];
_472 = _471(_470);
_473 = _447.value;
_474 = _472.value;
_475 = _473 < _474;
_476 = (frost$core$Bit) {_475};
_477 = _476.value;
if (_477) goto block64; else goto block65;
block65:;
_479 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s255, _479, &$s256);
abort(); // unreachable
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_483 = &_446->data;
_484 = *_483;
_485 = _484.value;
_486 = frost$core$Int64$init$frost$core$Int(_447);
_487 = _486.value;
_488 = _461;
frost$core$Frost$ref$frost$core$Object$Q(_488);
_490 = ((frost$core$Object**)_485)[_487];
_491 = _490;
frost$core$Frost$unref$frost$core$Object$Q(_491);
((frost$core$Object**)_485)[_487] = _461;
_495 = _461;
frost$core$Frost$unref$frost$core$Object$Q(_495);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:443
_498 = *(&local8);
_499 = ((frost$core$Object*) _498);
frost$core$Frost$unref$frost$core$Object$Q(_499);
*(&local8) = ((org$frostlang$frostc$ClassDecl*) NULL);
_502 = *(&local0);
_503 = ((frost$core$Object*) _502);
frost$core$Frost$unref$frost$core$Object$Q(_503);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:445
_508 = &param0->compiler;
_509 = *_508;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:445:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_514 = &_509->_valid;
_515 = *_514;
_517 = _515.value;
if (_517) goto block73; else goto block74;
block74:;
_519 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s257, _519, &$s258);
abort(); // unreachable
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_523 = &_509->value;
_524 = *_523;
_525 = _524;
_526 = _525;
frost$core$Frost$ref$frost$core$Object$Q(_526);
_529 = ((org$frostlang$frostc$Compiler*) _525);
_530 = _529 != NULL;
_531 = (frost$core$Bit) {_530};
_532 = _531.value;
if (_532) goto block75; else goto block76;
block76:;
_534 = (frost$core$Int) {445u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s259, _534, &$s260);
abort(); // unreachable
block75:;
_537 = _529;
_538 = *(&local0);
_539 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_537, _538);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Interpreter.frost:445:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_542 = _539.value;
_543 = !_542;
_544 = (frost$core$Bit) {_543};
_546 = _544.value;
_547 = _525;
frost$core$Frost$unref$frost$core$Object$Q(_547);
if (_546) goto block70; else goto block69;
block70:;
_550 = &param0->compiler;
_551 = *_550;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:445:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_556 = &_551->_valid;
_557 = *_556;
_559 = _557.value;
if (_559) goto block80; else goto block81;
block81:;
_561 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s261, _561, &$s262);
abort(); // unreachable
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_565 = &_551->value;
_566 = *_565;
_567 = _566;
_568 = _567;
frost$core$Frost$ref$frost$core$Object$Q(_568);
_571 = ((org$frostlang$frostc$Compiler*) _567);
_572 = _571 != NULL;
_573 = (frost$core$Bit) {_572};
_574 = _573.value;
if (_574) goto block82; else goto block83;
block83:;
_576 = (frost$core$Int) {445u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s263, _576, &$s264);
abort(); // unreachable
block82:;
_579 = _571;
_580 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_579, param4);
_581 = _580.value;
_582 = _567;
frost$core$Frost$unref$frost$core$Object$Q(_582);
if (_581) goto block67; else goto block69;
block69:;
_585 = &param0->compiler;
_586 = *_585;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:445:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_591 = &_586->_valid;
_592 = *_591;
_594 = _592.value;
if (_594) goto block88; else goto block89;
block89:;
_596 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s265, _596, &$s266);
abort(); // unreachable
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_600 = &_586->value;
_601 = *_600;
_602 = _601;
_603 = _602;
frost$core$Frost$ref$frost$core$Object$Q(_603);
_606 = ((org$frostlang$frostc$Compiler*) _602);
_607 = _606 != NULL;
_608 = (frost$core$Bit) {_607};
_609 = _608.value;
if (_609) goto block90; else goto block91;
block91:;
_611 = (frost$core$Int) {445u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s267, _611, &$s268);
abort(); // unreachable
block90:;
_614 = _606;
_615 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$Type$R$frost$core$Bit(_614, param4);
_616 = _615.value;
_617 = _602;
frost$core$Frost$unref$frost$core$Object$Q(_617);
if (_616) goto block85; else goto block68;
block85:;
_620 = *(&local0);
_621 = &_620->typeKind;
_622 = *_621;
org$frostlang$frostc$Type$Kind$wrapper* $tmp269;
$tmp269 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp269->value = _622;
_623 = ((frost$core$Equatable*) $tmp269);
_624 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Interpreter.frost:446:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_627 = &(&local21)->$rawValue;
*_627 = _624;
_629 = *(&local21);
*(&local20) = _629;
_632 = *(&local20);
org$frostlang$frostc$Type$Kind$wrapper* $tmp270;
$tmp270 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp270->value = _632;
_633 = ((frost$core$Equatable*) $tmp270);
ITable* $tmp271 = _623->$class->itable;
while ($tmp271->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp271 = $tmp271->next;
}
_634 = $tmp271->methods[0];
_635 = _634(_623, _633);
_636 = _635.value;
_637 = ((frost$core$Object*) _633);
frost$core$Frost$unref$frost$core$Object$Q(_637);
_639 = ((frost$core$Object*) _623);
frost$core$Frost$unref$frost$core$Object$Q(_639);
if (_636) goto block84; else goto block68;
block84:;
_642 = *(&local0);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from Interpreter.frost:446:64
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:246
_645 = &_642->_subtypes;
_646 = *_645;
_647 = _646 != NULL;
_648 = (frost$core$Bit) {_647};
_649 = _648.value;
if (_649) goto block94; else goto block95;
block95:;
_651 = (frost$core$Int) {246u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s272, _651, &$s273);
abort(); // unreachable
block94:;
_654 = _646;
_655 = ((frost$core$Object*) _654);
frost$core$Frost$ref$frost$core$Object$Q(_655);
_658 = (frost$core$Int) {0u};
_659 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_654, _658);
_660 = ((org$frostlang$frostc$Type*) _659);
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Interpreter.frost:446:77
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:256
_663 = ((org$frostlang$frostc$Symbol*) _660);
_664 = &_663->name;
_665 = *_664;
_666 = ((org$frostlang$frostc$Symbol*) param4);
_667 = &_666->name;
_668 = *_667;
_669 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_665, _668);
_670 = _669.value;
if (_670) goto block97; else goto block98;
block97:;
_672 = &_660->typeKind;
_673 = *_672;
org$frostlang$frostc$Type$Kind$wrapper* $tmp274;
$tmp274 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp274->value = _673;
_674 = ((frost$core$Equatable*) $tmp274);
_675 = &param4->typeKind;
_676 = *_675;
org$frostlang$frostc$Type$Kind$wrapper* $tmp275;
$tmp275 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp275->value = _676;
_677 = ((frost$core$Equatable*) $tmp275);
ITable* $tmp276 = _674->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp276 = $tmp276->next;
}
_678 = $tmp276->methods[0];
_679 = _678(_674, _677);
_680 = ((frost$core$Object*) _677);
frost$core$Frost$unref$frost$core$Object$Q(_680);
_682 = ((frost$core$Object*) _674);
frost$core$Frost$unref$frost$core$Object$Q(_682);
*(&local22) = _679;
goto block99;
block98:;
*(&local22) = _669;
goto block99;
block99:;
_688 = *(&local22);
_690 = _688.value;
_691 = _659;
frost$core$Frost$unref$frost$core$Object$Q(_691);
_693 = ((frost$core$Object*) _654);
frost$core$Frost$unref$frost$core$Object$Q(_693);
if (_690) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:449
_697 = *(&local1);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:449:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_700 = _697.value;
_701 = ((int64_t) _700);
_702 = (frost$core$Int) {_701};
_704 = frost$unsafe$Pointer$init$frost$core$Int(_702);
_705 = (frost$core$Int) {13u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:449:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_708 = _705.value;
*(&local23) = _708;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local24) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_713 = _704.value;
_714 = *(&local23);
_715 = *(&local24);
_716 = _714 * _715;
_717 = _713 + _716;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_720 = &(&local26)->value;
*_720 = _717;
_722 = *(&local26);
*(&local25) = _722;
_725 = *(&local25);
*(&local27) = _725;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:450
_729 = *(&local0);
_730 = ($fn277) param0->$class->vtable[10];
_731 = _730(param0, _729);
_732 = _731.value;
if (_732) goto block103; else goto block105;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:451
_735 = &param1->statements;
_736 = *_735;
_737 = param2.value;
_738 = &param0->stack;
_739 = *_738;
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:451:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_742 = _739.value;
_743 = (frost$core$Int) {_742};
_745 = frost$core$Int64$init$frost$core$Int(_743);
_746 = ((frost$core$Int64$nullable) { _745, true });
frost$core$Object* $tmp278;
if (_746.nonnull) {
    frost$core$Int64$wrapper* $tmp279;
    $tmp279 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp279->value = ((frost$core$Int64) _746.value);
    $tmp278 = ((frost$core$Object*) $tmp279);
}
else {
    $tmp278 = NULL;
}
_747 = $tmp278;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:451:35
_749 = (frost$core$Int) {0u};
_750 = _737.value;
_751 = _749.value;
_752 = _750 >= _751;
_753 = (frost$core$Bit) {_752};
_754 = _753.value;
if (_754) goto block110; else goto block109;
block110:;
_756 = ((frost$collections$CollectionView*) _736);
ITable* $tmp280 = _756->$class->itable;
while ($tmp280->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp280 = $tmp280->next;
}
_757 = $tmp280->methods[0];
_758 = _757(_756);
_759 = _737.value;
_760 = _758.value;
_761 = _759 < _760;
_762 = (frost$core$Bit) {_761};
_763 = _762.value;
if (_763) goto block108; else goto block109;
block109:;
_765 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s281, _765, &$s282);
abort(); // unreachable
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_769 = &_736->data;
_770 = *_769;
_771 = _770.value;
_772 = frost$core$Int64$init$frost$core$Int(_737);
_773 = _772.value;
_774 = _747;
frost$core$Frost$ref$frost$core$Object$Q(_774);
_776 = ((frost$core$Object**)_771)[_773];
_777 = _776;
frost$core$Frost$unref$frost$core$Object$Q(_777);
((frost$core$Object**)_771)[_773] = _747;
_781 = _747;
frost$core$Frost$unref$frost$core$Object$Q(_781);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:452
_784 = &param0->memoryLayout;
_785 = *_784;
_786 = *(&local0);
_787 = ($fn283) _785->$class->vtable[7];
_788 = _787(_785, _786);
*(&local28) = _788;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:454
_791 = (frost$core$Int) {0u};
_792 = *(&local28);
_793 = (frost$core$Bit) {false};
_794 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_791, _792, _793);
_795 = _794.min;
*(&local29) = _795;
_797 = _794.max;
_798 = _794.inclusive;
_799 = _798.value;
_800 = (frost$core$Int) {1u};
if (_799) goto block114; else goto block115;
block114:;
_802 = _795.value;
_803 = _797.value;
_804 = _802 <= _803;
_805 = (frost$core$Bit) {_804};
_806 = _805.value;
if (_806) goto block111; else goto block112;
block115:;
_808 = _795.value;
_809 = _797.value;
_810 = _808 < _809;
_811 = (frost$core$Bit) {_810};
_812 = _811.value;
if (_812) goto block111; else goto block112;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:455
_815 = &param0->stack;
_816 = *_815;
_817 = _816.value;
_818 = *(&local29);
_819 = frost$core$Int64$init$frost$core$Int(_818);
_820 = *(&local27);
_821 = _820.value;
_822 = *(&local29);
_823 = frost$core$Int64$init$frost$core$Int(_822);
_824 = _823.value;
_825 = ((frost$core$UInt8*)_821)[_824];
_826 = _819.value;
((frost$core$UInt8*)_817)[_826] = _825;
_829 = *(&local29);
_830 = _797.value;
_831 = _829.value;
_832 = _830 - _831;
_833 = (frost$core$Int) {_832};
if (_799) goto block117; else goto block118;
block117:;
_835 = _833.value;
_836 = _800.value;
_837 = _835 >= _836;
_838 = (frost$core$Bit) {_837};
_839 = _838.value;
if (_839) goto block116; else goto block112;
block118:;
_841 = _833.value;
_842 = _800.value;
_843 = _841 > _842;
_844 = (frost$core$Bit) {_843};
_845 = _844.value;
if (_845) goto block116; else goto block112;
block116:;
_847 = _829.value;
_848 = _800.value;
_849 = _847 + _848;
_850 = (frost$core$Int) {_849};
*(&local29) = _850;
goto block111;
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:457
_854 = &param0->stack;
_855 = *_854;
*(&local30) = _855;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:458
_858 = &param0->stack;
_859 = *_858;
_860 = *(&local28);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:458:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_863 = _860.value;
*(&local31) = _863;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local32) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_868 = _859.value;
_869 = *(&local31);
_870 = *(&local32);
_871 = _869 * _870;
_872 = _868 + _871;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_875 = &(&local34)->value;
*_875 = _872;
_877 = *(&local34);
*(&local33) = _877;
_880 = *(&local33);
_882 = &param0->stack;
*_882 = _880;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:459
_885 = &param1->statements;
_886 = *_885;
_887 = param2.value;
_888 = *(&local30);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:459:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_891 = _888.value;
_892 = (frost$core$Int) {_891};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:459:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_896 = _892.value;
_897 = ((int64_t) _896);
_898 = (frost$core$Int64) {_897};
_900 = ((frost$core$Int64$nullable) { _898, true });
frost$core$Object* $tmp284;
if (_900.nonnull) {
    frost$core$Int64$wrapper* $tmp285;
    $tmp285 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp285->value = ((frost$core$Int64) _900.value);
    $tmp284 = ((frost$core$Object*) $tmp285);
}
else {
    $tmp284 = NULL;
}
_901 = $tmp284;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:459:35
_903 = (frost$core$Int) {0u};
_904 = _887.value;
_905 = _903.value;
_906 = _904 >= _905;
_907 = (frost$core$Bit) {_906};
_908 = _907.value;
if (_908) goto block126; else goto block125;
block126:;
_910 = ((frost$collections$CollectionView*) _886);
ITable* $tmp286 = _910->$class->itable;
while ($tmp286->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp286 = $tmp286->next;
}
_911 = $tmp286->methods[0];
_912 = _911(_910);
_913 = _887.value;
_914 = _912.value;
_915 = _913 < _914;
_916 = (frost$core$Bit) {_915};
_917 = _916.value;
if (_917) goto block124; else goto block125;
block125:;
_919 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s287, _919, &$s288);
abort(); // unreachable
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_923 = &_886->data;
_924 = *_923;
_925 = _924.value;
_926 = frost$core$Int64$init$frost$core$Int(_887);
_927 = _926.value;
_928 = _901;
frost$core$Frost$ref$frost$core$Object$Q(_928);
_930 = ((frost$core$Object**)_925)[_927];
_931 = _930;
frost$core$Frost$unref$frost$core$Object$Q(_931);
((frost$core$Object**)_925)[_927] = _901;
_935 = _901;
frost$core$Frost$unref$frost$core$Object$Q(_935);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:460
_938 = *(&local0);
_939 = ((frost$core$Object*) _938);
frost$core$Frost$unref$frost$core$Object$Q(_939);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block105:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:463
_945 = &param1->statements;
_946 = *_945;
_947 = param2.value;
_948 = *(&local27);
_949 = _948.value;
_950 = *((frost$core$Int64*)_949);
_951 = ((frost$core$Int64$nullable) { _950, true });
frost$core$Object* $tmp289;
if (_951.nonnull) {
    frost$core$Int64$wrapper* $tmp290;
    $tmp290 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp290->value = ((frost$core$Int64) _951.value);
    $tmp289 = ((frost$core$Object*) $tmp290);
}
else {
    $tmp289 = NULL;
}
_952 = $tmp289;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:463:35
_954 = (frost$core$Int) {0u};
_955 = _947.value;
_956 = _954.value;
_957 = _955 >= _956;
_958 = (frost$core$Bit) {_957};
_959 = _958.value;
if (_959) goto block130; else goto block129;
block130:;
_961 = ((frost$collections$CollectionView*) _946);
ITable* $tmp291 = _961->$class->itable;
while ($tmp291->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp291 = $tmp291->next;
}
_962 = $tmp291->methods[0];
_963 = _962(_961);
_964 = _947.value;
_965 = _963.value;
_966 = _964 < _965;
_967 = (frost$core$Bit) {_966};
_968 = _967.value;
if (_968) goto block128; else goto block129;
block129:;
_970 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s292, _970, &$s293);
abort(); // unreachable
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_974 = &_946->data;
_975 = *_974;
_976 = _975.value;
_977 = frost$core$Int64$init$frost$core$Int(_947);
_978 = _977.value;
_979 = _952;
frost$core$Frost$ref$frost$core$Object$Q(_979);
_981 = ((frost$core$Object**)_976)[_978];
_982 = _981;
frost$core$Frost$unref$frost$core$Object$Q(_982);
((frost$core$Object**)_976)[_978] = _952;
_986 = _952;
frost$core$Frost$unref$frost$core$Object$Q(_986);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:464
_989 = *(&local0);
_990 = ((frost$core$Object*) _989);
frost$core$Frost$unref$frost$core$Object$Q(_990);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block104:;
goto block68;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:467
_997 = *(&local0);
_998 = org$frostlang$frostc$Type$get_isBuiltinInt$R$frost$core$Bit(_997);
_999 = _998.value;
if (_999) goto block133; else goto block132;
block133:;
_1001 = org$frostlang$frostc$Type$get_isBuiltinInt$R$frost$core$Bit(param4);
_1002 = _1001.value;
if (_1002) goto block131; else goto block132;
block131:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:468
_1005 = *(&local0);
_1006 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(_1005);
_1007 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(param4);
_1008 = _1006.value;
_1009 = _1007.value;
_1010 = _1008 > _1009;
_1011 = (frost$core$Bit) {_1010};
_1012 = _1011.value;
if (_1012) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:469
_1015 = &param1->statements;
_1016 = *_1015;
_1017 = param2.value;
_1018 = *(&local1);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Interpreter.frost:469:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_1021 = _1018.value;
_1022 = ((uint64_t) _1021);
_1023 = (frost$core$UInt64) {_1022};
_1025 = (frost$core$UInt64) {18446744073709551615u};
_1026 = (frost$core$Int) {64u};
_1027 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(param4);
_1028 = _1026.value;
_1029 = _1027.value;
_1030 = _1028 - _1029;
_1031 = (frost$core$Int) {_1030};
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Interpreter.frost:470:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_1034 = _1031.value;
_1035 = ((uint64_t) _1034);
_1036 = (frost$core$UInt64) {_1035};
// begin inline call to function frost.core.UInt64.>>(other:frost.core.UInt64):frost.core.UInt64 from Interpreter.frost:470:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
_1040 = _1025.value;
_1041 = _1036.value;
_1042 = _1040 >> _1041;
_1043 = (frost$core$UInt64) {_1042};
// begin inline call to function frost.core.UInt64.&&(other:frost.core.UInt64):frost.core.UInt64 from Interpreter.frost:469:65
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:166
_1047 = _1023.value;
_1048 = _1043.value;
_1049 = _1047 & _1048;
_1050 = (frost$core$UInt64) {_1049};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Interpreter.frost:470:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_1054 = _1050.value;
_1055 = ((int64_t) _1054);
_1056 = (frost$core$Int64) {_1055};
_1058 = ((frost$core$Int64$nullable) { _1056, true });
frost$core$Object* $tmp294;
if (_1058.nonnull) {
    frost$core$Int64$wrapper* $tmp295;
    $tmp295 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp295->value = ((frost$core$Int64) _1058.value);
    $tmp294 = ((frost$core$Object*) $tmp295);
}
else {
    $tmp294 = NULL;
}
_1059 = $tmp294;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:469:35
_1061 = (frost$core$Int) {0u};
_1062 = _1017.value;
_1063 = _1061.value;
_1064 = _1062 >= _1063;
_1065 = (frost$core$Bit) {_1064};
_1066 = _1065.value;
if (_1066) goto block144; else goto block143;
block144:;
_1068 = ((frost$collections$CollectionView*) _1016);
ITable* $tmp296 = _1068->$class->itable;
while ($tmp296->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp296 = $tmp296->next;
}
_1069 = $tmp296->methods[0];
_1070 = _1069(_1068);
_1071 = _1017.value;
_1072 = _1070.value;
_1073 = _1071 < _1072;
_1074 = (frost$core$Bit) {_1073};
_1075 = _1074.value;
if (_1075) goto block142; else goto block143;
block143:;
_1077 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s297, _1077, &$s298);
abort(); // unreachable
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1081 = &_1016->data;
_1082 = *_1081;
_1083 = _1082.value;
_1084 = frost$core$Int64$init$frost$core$Int(_1017);
_1085 = _1084.value;
_1086 = _1059;
frost$core$Frost$ref$frost$core$Object$Q(_1086);
_1088 = ((frost$core$Object**)_1083)[_1085];
_1089 = _1088;
frost$core$Frost$unref$frost$core$Object$Q(_1089);
((frost$core$Object**)_1083)[_1085] = _1059;
_1093 = _1059;
frost$core$Frost$unref$frost$core$Object$Q(_1093);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:471
_1096 = *(&local0);
_1097 = ((frost$core$Object*) _1096);
frost$core$Frost$unref$frost$core$Object$Q(_1097);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block135:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:473
_1102 = *(&local0);
_1103 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(_1102);
_1104 = org$frostlang$frostc$Type$get_size$R$frost$core$Int(param4);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:473:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1107 = _1103.value;
_1108 = _1104.value;
_1109 = _1107 == _1108;
_1110 = (frost$core$Bit) {_1109};
_1112 = _1110.value;
if (_1112) goto block145; else goto block146;
block145:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:474
_1115 = &param1->statements;
_1116 = *_1115;
_1117 = param2.value;
_1118 = *(&local1);
_1119 = ((frost$core$Int64$nullable) { _1118, true });
frost$core$Object* $tmp299;
if (_1119.nonnull) {
    frost$core$Int64$wrapper* $tmp300;
    $tmp300 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp300->value = ((frost$core$Int64) _1119.value);
    $tmp299 = ((frost$core$Object*) $tmp300);
}
else {
    $tmp299 = NULL;
}
_1120 = $tmp299;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:474:35
_1122 = (frost$core$Int) {0u};
_1123 = _1117.value;
_1124 = _1122.value;
_1125 = _1123 >= _1124;
_1126 = (frost$core$Bit) {_1125};
_1127 = _1126.value;
if (_1127) goto block151; else goto block150;
block151:;
_1129 = ((frost$collections$CollectionView*) _1116);
ITable* $tmp301 = _1129->$class->itable;
while ($tmp301->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp301 = $tmp301->next;
}
_1130 = $tmp301->methods[0];
_1131 = _1130(_1129);
_1132 = _1117.value;
_1133 = _1131.value;
_1134 = _1132 < _1133;
_1135 = (frost$core$Bit) {_1134};
_1136 = _1135.value;
if (_1136) goto block149; else goto block150;
block150:;
_1138 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s302, _1138, &$s303);
abort(); // unreachable
block149:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1142 = &_1116->data;
_1143 = *_1142;
_1144 = _1143.value;
_1145 = frost$core$Int64$init$frost$core$Int(_1117);
_1146 = _1145.value;
_1147 = _1120;
frost$core$Frost$ref$frost$core$Object$Q(_1147);
_1149 = ((frost$core$Object**)_1144)[_1146];
_1150 = _1149;
frost$core$Frost$unref$frost$core$Object$Q(_1150);
((frost$core$Object**)_1144)[_1146] = _1120;
_1154 = _1120;
frost$core$Frost$unref$frost$core$Object$Q(_1154);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:475
_1157 = *(&local0);
_1158 = ((frost$core$Object*) _1157);
frost$core$Frost$unref$frost$core$Object$Q(_1158);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return;
block146:;
goto block132;
block132:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:478
_1164 = &param1->statements;
_1165 = *_1164;
_1166 = param2.value;
_1167 = *(&local1);
_1168 = ((frost$core$Int64$nullable) { _1167, true });
frost$core$Object* $tmp304;
if (_1168.nonnull) {
    frost$core$Int64$wrapper* $tmp305;
    $tmp305 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp305->value = ((frost$core$Int64) _1168.value);
    $tmp304 = ((frost$core$Object*) $tmp305);
}
else {
    $tmp304 = NULL;
}
_1169 = $tmp304;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:478:27
_1171 = (frost$core$Int) {0u};
_1172 = _1166.value;
_1173 = _1171.value;
_1174 = _1172 >= _1173;
_1175 = (frost$core$Bit) {_1174};
_1176 = _1175.value;
if (_1176) goto block155; else goto block154;
block155:;
_1178 = ((frost$collections$CollectionView*) _1165);
ITable* $tmp306 = _1178->$class->itable;
while ($tmp306->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp306 = $tmp306->next;
}
_1179 = $tmp306->methods[0];
_1180 = _1179(_1178);
_1181 = _1166.value;
_1182 = _1180.value;
_1183 = _1181 < _1182;
_1184 = (frost$core$Bit) {_1183};
_1185 = _1184.value;
if (_1185) goto block153; else goto block154;
block154:;
_1187 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s307, _1187, &$s308);
abort(); // unreachable
block153:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1191 = &_1165->data;
_1192 = *_1191;
_1193 = _1192.value;
_1194 = frost$core$Int64$init$frost$core$Int(_1166);
_1195 = _1194.value;
_1196 = _1169;
frost$core$Frost$ref$frost$core$Object$Q(_1196);
_1198 = ((frost$core$Object**)_1193)[_1195];
_1199 = _1198;
frost$core$Frost$unref$frost$core$Object$Q(_1199);
((frost$core$Object**)_1193)[_1195] = _1169;
_1203 = _1169;
frost$core$Frost$unref$frost$core$Object$Q(_1203);
_1205 = *(&local0);
_1206 = ((frost$core$Object*) _1205);
frost$core$Frost$unref$frost$core$Object$Q(_1206);
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
$fn309 _5;
frost$core$Int _6;
frost$unsafe$Pointer* _9;
frost$unsafe$Pointer _10;
frost$collections$Iterable* _13;
$fn310 _14;
frost$collections$Iterator* _15;
$fn311 _17;
frost$core$Bit _18;
bool _19;
$fn312 _22;
frost$core$Object* _23;
org$frostlang$frostc$IR$Value* _24;
frost$core$Object* _25;
org$frostlang$frostc$IR$Value* _27;
frost$core$Object* _28;
org$frostlang$frostc$IR$Value* _32;
$fn313 _33;
frost$core$Int64 _34;
org$frostlang$frostc$MemoryLayout** _37;
org$frostlang$frostc$MemoryLayout* _38;
org$frostlang$frostc$IR$Value* _39;
$fn314 _40;
org$frostlang$frostc$Type* _41;
$fn315 _42;
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
$fn316 _232;
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
$fn317 _263;
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
$fn318 _290;
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
$fn319 _412;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:483
_1 = &param0->memoryLayout;
_2 = *_1;
_3 = &param3->type;
_4 = *_3;
_5 = ($fn320) _2->$class->vtable[7];
_6 = _5(_2, _4);
*(&local0) = _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:484
_9 = &param0->stack;
_10 = *_9;
*(&local1) = _10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:485
_13 = ((frost$collections$Iterable*) param4);
ITable* $tmp321 = _13->$class->itable;
while ($tmp321->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp321 = $tmp321->next;
}
_14 = $tmp321->methods[0];
_15 = _14(_13);
goto block1;
block1:;
ITable* $tmp322 = _15->$class->itable;
while ($tmp322->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp322 = $tmp322->next;
}
_17 = $tmp322->methods[0];
_18 = _17(_15);
_19 = _18.value;
if (_19) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
ITable* $tmp323 = _15->$class->itable;
while ($tmp323->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp323 = $tmp323->next;
}
_22 = $tmp323->methods[1];
_23 = _22(_15);
_24 = ((org$frostlang$frostc$IR$Value*) _23);
_25 = ((frost$core$Object*) _24);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local2);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local2) = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:486
_32 = *(&local2);
_33 = ($fn324) param1->$class->vtable[2];
_34 = _33(param1, _32);
*(&local3) = _34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:487
_37 = &param0->memoryLayout;
_38 = *_37;
_39 = *(&local2);
_40 = ($fn325) _39->$class->vtable[2];
_41 = _40(_39);
_42 = ($fn326) _38->$class->vtable[7];
_43 = _42(_38, _41);
_44 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:489:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_47 = _43.value;
_48 = _44.value;
_49 = _47 == _48;
_50 = (frost$core$Bit) {_49};
_52 = _50.value;
if (_52) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:490
_55 = *(&local1);
_56 = _55.value;
_57 = *(&local3);
// begin inline call to function frost.core.Int64.get_asUInt8():frost.core.UInt8 from Interpreter.frost:490:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:610
_60 = _57.value;
_61 = ((uint8_t) _60);
_62 = (frost$core$UInt8) {_61};
*((frost$core$UInt8*)_56) = _62;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:491
_66 = *(&local1);
_67 = (frost$core$Int) {1u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:491:21
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:493:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_94 = _43.value;
_95 = _91.value;
_96 = _94 == _95;
_97 = (frost$core$Bit) {_96};
_99 = _97.value;
if (_99) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:494
_102 = *(&local1);
_103 = _102.value;
_104 = *(&local3);
// begin inline call to function frost.core.Int64.get_asInt16():frost.core.Int16 from Interpreter.frost:494:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:592
_107 = _104.value;
_108 = ((int16_t) _107);
_109 = (frost$core$Int16) {_108};
*((frost$core$Int16*)_103) = _109;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:495
_113 = *(&local1);
_114 = (frost$core$Int) {2u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:495:21
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:497:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_141 = _43.value;
_142 = _138.value;
_143 = _141 == _142;
_144 = (frost$core$Bit) {_143};
_146 = _144.value;
if (_146) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:498
_149 = *(&local1);
_150 = _149.value;
_151 = *(&local3);
// begin inline call to function frost.core.Int64.get_asInt32():frost.core.Int32 from Interpreter.frost:498:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:598
_154 = _151.value;
_155 = ((int32_t) _154);
_156 = (frost$core$Int32) {_155};
*((frost$core$Int32*)_150) = _156;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:499
_160 = *(&local1);
_161 = (frost$core$Int) {4u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:499:21
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:501:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_188 = _43.value;
_189 = _185.value;
_190 = _188 == _189;
_191 = (frost$core$Bit) {_190};
_193 = _191.value;
if (_193) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:502
_196 = *(&local1);
_197 = _196.value;
_198 = *(&local3);
*((frost$core$Int64*)_197) = _198;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:503
_201 = *(&local1);
_202 = (frost$core$Int) {8u};
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:503:21
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:506
_227 = (frost$core$Int) {506u};
_228 = *(&local2);
_229 = ((frost$core$Object*) _228);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:506:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_232 = ($fn327) _229->$class->vtable[0];
_233 = _232(_229);
_234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s328, _233);
_235 = ((frost$core$Object*) _234);
frost$core$Frost$ref$frost$core$Object$Q(_235);
_237 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_237);
_239 = ((frost$core$Object*) _233);
frost$core$Frost$unref$frost$core$Object$Q(_239);
_242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_234, &$s329);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s330, _227, _242);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:510
_261 = &param3->type;
_262 = *_261;
_263 = ($fn331) param0->$class->vtable[10];
_264 = _263(param0, _262);
_265 = _264.value;
if (_265) goto block29; else goto block31;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:511
_268 = &param1->statements;
_269 = *_268;
_270 = param2.value;
_271 = &param0->stack;
_272 = *_271;
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:511:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_275 = _272.value;
_276 = (frost$core$Int) {_275};
_278 = frost$core$Int64$init$frost$core$Int(_276);
_279 = ((frost$core$Int64$nullable) { _278, true });
frost$core$Object* $tmp332;
if (_279.nonnull) {
    frost$core$Int64$wrapper* $tmp333;
    $tmp333 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp333->value = ((frost$core$Int64) _279.value);
    $tmp332 = ((frost$core$Object*) $tmp333);
}
else {
    $tmp332 = NULL;
}
_280 = $tmp332;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:511:31
_282 = (frost$core$Int) {0u};
_283 = _270.value;
_284 = _282.value;
_285 = _283 >= _284;
_286 = (frost$core$Bit) {_285};
_287 = _286.value;
if (_287) goto block36; else goto block35;
block36:;
_289 = ((frost$collections$CollectionView*) _269);
ITable* $tmp334 = _289->$class->itable;
while ($tmp334->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp334 = $tmp334->next;
}
_290 = $tmp334->methods[0];
_291 = _290(_289);
_292 = _270.value;
_293 = _291.value;
_294 = _292 < _293;
_295 = (frost$core$Bit) {_294};
_296 = _295.value;
if (_296) goto block34; else goto block35;
block35:;
_298 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s335, _298, &$s336);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:512
_317 = *(&local1);
_318 = &param0->stack;
*_318 = _317;
goto block30;
block31:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:515
_323 = *(&local1);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:515:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_326 = _323.value;
_327 = (frost$core$Int) {_326};
_329 = &param0->stack;
_330 = *_329;
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:515:44
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:516
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:518
_394 = &param1->statements;
_395 = *_394;
_396 = param2.value;
_397 = &param0->stack;
_398 = *_397;
_399 = _398.value;
_400 = *((frost$core$Int64*)_399);
_401 = ((frost$core$Int64$nullable) { _400, true });
frost$core$Object* $tmp337;
if (_401.nonnull) {
    frost$core$Int64$wrapper* $tmp338;
    $tmp338 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp338->value = ((frost$core$Int64) _401.value);
    $tmp337 = ((frost$core$Object*) $tmp338);
}
else {
    $tmp337 = NULL;
}
_402 = $tmp337;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:518:31
_404 = (frost$core$Int) {0u};
_405 = _396.value;
_406 = _404.value;
_407 = _405 >= _406;
_408 = (frost$core$Bit) {_407};
_409 = _408.value;
if (_409) goto block50; else goto block49;
block50:;
_411 = ((frost$collections$CollectionView*) _395);
ITable* $tmp339 = _411->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp339 = $tmp339->next;
}
_412 = $tmp339->methods[0];
_413 = _412(_411);
_414 = _396.value;
_415 = _413.value;
_416 = _414 < _415;
_417 = (frost$core$Bit) {_416};
_418 = _417.value;
if (_418) goto block48; else goto block49;
block49:;
_420 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s340, _420, &$s341);
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
$fn342 _25;
frost$core$Bit _26;
bool _27;
frost$core$Object* _28;
$fn343 _32;
frost$core$Int _33;
frost$unsafe$Pointer _34;
org$frostlang$frostc$MemoryLayout** _37;
org$frostlang$frostc$MemoryLayout* _38;
org$frostlang$frostc$Type** _39;
org$frostlang$frostc$Type* _40;
$fn344 _41;
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
$fn345 _77;
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
$fn346 _138;
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
$fn347 _199;
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
$fn348 _260;
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
$fn349 _348;
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
$fn350 _373;
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
$fn351 _386;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:523
_1 = &param4->owner;
_2 = *_1;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:523:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_7 = &_2->_valid;
_8 = *_7;
_10 = _8.value;
if (_10) goto block6; else goto block7;
block7:;
_12 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s352, _12, &$s353);
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
_25 = ($fn354) param0->$class->vtable[10];
_26 = _25(param0, _24);
_27 = _26.value;
_28 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_28);
if (_27) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:524
_32 = ($fn355) param0->$class->vtable[19];
_33 = _32(param0, param1, param3, param4);
_34 = frost$unsafe$Pointer$init$frost$core$Int(_33);
*(&local0) = _34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:525
_37 = &param0->memoryLayout;
_38 = *_37;
_39 = &param4->type;
_40 = *_39;
_41 = ($fn356) _38->$class->vtable[7];
_42 = _41(_38, _40);
_43 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:526:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_46 = _42.value;
_47 = _43.value;
_48 = _46 == _47;
_49 = (frost$core$Bit) {_48};
_51 = _49.value;
if (_51) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:527
_54 = &param1->statements;
_55 = *_54;
_56 = param2.value;
_57 = *(&local0);
_58 = _57.value;
_59 = *((frost$core$UInt8*)_58);
// begin inline call to function frost.core.UInt8.get_asInt64():frost.core.Int64 from Interpreter.frost:527:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1184
_62 = _59.value;
_63 = ((int64_t) _62);
_64 = (frost$core$Int64) {_63};
_66 = ((frost$core$Int64$nullable) { _64, true });
frost$core$Object* $tmp357;
if (_66.nonnull) {
    frost$core$Int64$wrapper* $tmp358;
    $tmp358 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp358->value = ((frost$core$Int64) _66.value);
    $tmp357 = ((frost$core$Object*) $tmp358);
}
else {
    $tmp357 = NULL;
}
_67 = $tmp357;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:527:39
_69 = (frost$core$Int) {0u};
_70 = _56.value;
_71 = _69.value;
_72 = _70 >= _71;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block16; else goto block15;
block16:;
_76 = ((frost$collections$CollectionView*) _55);
ITable* $tmp359 = _76->$class->itable;
while ($tmp359->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp359 = $tmp359->next;
}
_77 = $tmp359->methods[0];
_78 = _77(_76);
_79 = _56.value;
_80 = _78.value;
_81 = _79 < _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block14; else goto block15;
block15:;
_85 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s360, _85, &$s361);
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:529:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_107 = _42.value;
_108 = _104.value;
_109 = _107 == _108;
_110 = (frost$core$Bit) {_109};
_112 = _110.value;
if (_112) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:530
_115 = &param1->statements;
_116 = *_115;
_117 = param2.value;
_118 = *(&local0);
_119 = _118.value;
_120 = *((frost$core$UInt16*)_119);
// begin inline call to function frost.core.UInt16.get_asInt64():frost.core.Int64 from Interpreter.frost:530:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1094
_123 = _120.value;
_124 = ((int64_t) _123);
_125 = (frost$core$Int64) {_124};
_127 = ((frost$core$Int64$nullable) { _125, true });
frost$core$Object* $tmp362;
if (_127.nonnull) {
    frost$core$Int64$wrapper* $tmp363;
    $tmp363 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp363->value = ((frost$core$Int64) _127.value);
    $tmp362 = ((frost$core$Object*) $tmp363);
}
else {
    $tmp362 = NULL;
}
_128 = $tmp362;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:530:39
_130 = (frost$core$Int) {0u};
_131 = _117.value;
_132 = _130.value;
_133 = _131 >= _132;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block24; else goto block23;
block24:;
_137 = ((frost$collections$CollectionView*) _116);
ITable* $tmp364 = _137->$class->itable;
while ($tmp364->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp364 = $tmp364->next;
}
_138 = $tmp364->methods[0];
_139 = _138(_137);
_140 = _117.value;
_141 = _139.value;
_142 = _140 < _141;
_143 = (frost$core$Bit) {_142};
_144 = _143.value;
if (_144) goto block22; else goto block23;
block23:;
_146 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s365, _146, &$s366);
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:532:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_168 = _42.value;
_169 = _165.value;
_170 = _168 == _169;
_171 = (frost$core$Bit) {_170};
_173 = _171.value;
if (_173) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:533
_176 = &param1->statements;
_177 = *_176;
_178 = param2.value;
_179 = *(&local0);
_180 = _179.value;
_181 = *((frost$core$UInt32*)_180);
// begin inline call to function frost.core.UInt32.get_asInt64():frost.core.Int64 from Interpreter.frost:533:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:954
_184 = _181.value;
_185 = ((int64_t) _184);
_186 = (frost$core$Int64) {_185};
_188 = ((frost$core$Int64$nullable) { _186, true });
frost$core$Object* $tmp367;
if (_188.nonnull) {
    frost$core$Int64$wrapper* $tmp368;
    $tmp368 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp368->value = ((frost$core$Int64) _188.value);
    $tmp367 = ((frost$core$Object*) $tmp368);
}
else {
    $tmp367 = NULL;
}
_189 = $tmp367;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:533:39
_191 = (frost$core$Int) {0u};
_192 = _178.value;
_193 = _191.value;
_194 = _192 >= _193;
_195 = (frost$core$Bit) {_194};
_196 = _195.value;
if (_196) goto block32; else goto block31;
block32:;
_198 = ((frost$collections$CollectionView*) _177);
ITable* $tmp369 = _198->$class->itable;
while ($tmp369->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp369 = $tmp369->next;
}
_199 = $tmp369->methods[0];
_200 = _199(_198);
_201 = _178.value;
_202 = _200.value;
_203 = _201 < _202;
_204 = (frost$core$Bit) {_203};
_205 = _204.value;
if (_205) goto block30; else goto block31;
block31:;
_207 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s370, _207, &$s371);
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:535:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_229 = _42.value;
_230 = _226.value;
_231 = _229 == _230;
_232 = (frost$core$Bit) {_231};
_234 = _232.value;
if (_234) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:536
_237 = &param1->statements;
_238 = *_237;
_239 = param2.value;
_240 = *(&local0);
_241 = _240.value;
_242 = *((frost$core$UInt64*)_241);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Interpreter.frost:536:77
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_245 = _242.value;
_246 = ((int64_t) _245);
_247 = (frost$core$Int64) {_246};
_249 = ((frost$core$Int64$nullable) { _247, true });
frost$core$Object* $tmp372;
if (_249.nonnull) {
    frost$core$Int64$wrapper* $tmp373;
    $tmp373 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp373->value = ((frost$core$Int64) _249.value);
    $tmp372 = ((frost$core$Object*) $tmp373);
}
else {
    $tmp372 = NULL;
}
_250 = $tmp372;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:536:39
_252 = (frost$core$Int) {0u};
_253 = _239.value;
_254 = _252.value;
_255 = _253 >= _254;
_256 = (frost$core$Bit) {_255};
_257 = _256.value;
if (_257) goto block40; else goto block39;
block40:;
_259 = ((frost$collections$CollectionView*) _238);
ITable* $tmp374 = _259->$class->itable;
while ($tmp374->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp374 = $tmp374->next;
}
_260 = $tmp374->methods[0];
_261 = _260(_259);
_262 = _239.value;
_263 = _261.value;
_264 = _262 < _263;
_265 = (frost$core$Bit) {_264};
_266 = _265.value;
if (_266) goto block38; else goto block39;
block39:;
_268 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s375, _268, &$s376);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:539
_288 = (frost$core$Int) {539u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s377, _288, &$s378);
abort(); // unreachable
block8:;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:545
_294 = &param0->compiler;
_295 = *_294;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:545:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_300 = &_295->_valid;
_301 = *_300;
_303 = _301.value;
if (_303) goto block43; else goto block44;
block44:;
_305 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s379, _305, &$s380);
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
_320 = (frost$core$Int) {545u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s381, _320, &$s382);
abort(); // unreachable
block45:;
_323 = _315;
_324 = &param4->owner;
_325 = *_324;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:545:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_330 = &_325->_valid;
_331 = *_330;
_333 = _331.value;
if (_333) goto block49; else goto block50;
block50:;
_335 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s383, _335, &$s384);
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
ITable* $tmp385 = _347->$class->itable;
while ($tmp385->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp385 = $tmp385->next;
}
_348 = $tmp385->methods[0];
_349 = _348(_347);
_350 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:545:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_353 = _349.value;
_354 = _350.value;
_355 = _353 == _354;
_356 = (frost$core$Bit) {_355};
_358 = _356.value;
if (_358) goto block52; else goto block53;
block53:;
_360 = (frost$core$Int) {545u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s386, _360);
abort(); // unreachable
block52:;
_363 = ((frost$core$Object*) _346);
frost$core$Frost$unref$frost$core$Object$Q(_363);
_365 = _341;
frost$core$Frost$unref$frost$core$Object$Q(_365);
_367 = _311;
frost$core$Frost$unref$frost$core$Object$Q(_367);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:546
_370 = &param1->statements;
_371 = *_370;
_372 = param2.value;
_373 = ($fn387) param1->$class->vtable[2];
_374 = _373(param1, param3);
_375 = ((frost$core$Int64$nullable) { _374, true });
frost$core$Object* $tmp388;
if (_375.nonnull) {
    frost$core$Int64$wrapper* $tmp389;
    $tmp389 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp389->value = ((frost$core$Int64) _375.value);
    $tmp388 = ((frost$core$Object*) $tmp389);
}
else {
    $tmp388 = NULL;
}
_376 = $tmp388;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:546:31
_378 = (frost$core$Int) {0u};
_379 = _372.value;
_380 = _378.value;
_381 = _379 >= _380;
_382 = (frost$core$Bit) {_381};
_383 = _382.value;
if (_383) goto block57; else goto block56;
block57:;
_385 = ((frost$collections$CollectionView*) _371);
ITable* $tmp390 = _385->$class->itable;
while ($tmp390->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp390 = $tmp390->next;
}
_386 = $tmp390->methods[0];
_387 = _386(_385);
_388 = _372.value;
_389 = _387.value;
_390 = _388 < _389;
_391 = (frost$core$Bit) {_390};
_392 = _391.value;
if (_392) goto block55; else goto block56;
block56:;
_394 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s391, _394, &$s392);
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
$fn393 _35;
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
$fn394 _54;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:552
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:553
_11 = &param0->memoryLayout;
_12 = *_11;
_13 = &param3->owner;
_14 = *_13;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:553:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_19 = &_14->_valid;
_20 = *_19;
_22 = _20.value;
if (_22) goto block5; else goto block6;
block6:;
_24 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s395, _24, &$s396);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
_28 = &_14->value;
_29 = *_28;
_30 = _29;
_31 = _30;
frost$core$Frost$ref$frost$core$Object$Q(_31);
_34 = ((org$frostlang$frostc$ClassDecl*) _30);
_35 = ($fn397) _12->$class->vtable[6];
_35(_12, _34);
_37 = _30;
frost$core$Frost$unref$frost$core$Object$Q(_37);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:554
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
_49 = (frost$core$Int) {554u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s398, _49);
abort(); // unreachable
block7:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:556
_54 = ($fn399) param1->$class->vtable[2];
_55 = _54(param1, param2);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:556:36
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
$fn400 _4;
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
$fn401 _18;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:560
_1 = &param1->statements;
_2 = *_1;
_3 = param2.value;
_4 = ($fn402) param0->$class->vtable[19];
_5 = _4(param0, param1, param3, param4);
_6 = frost$core$Int64$init$frost$core$Int(_5);
_7 = ((frost$core$Int64$nullable) { _6, true });
frost$core$Object* $tmp403;
if (_7.nonnull) {
    frost$core$Int64$wrapper* $tmp404;
    $tmp404 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp404->value = ((frost$core$Int64) _7.value);
    $tmp403 = ((frost$core$Object*) $tmp404);
}
else {
    $tmp403 = NULL;
}
_8 = $tmp403;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:560:27
_10 = (frost$core$Int) {0u};
_11 = _3.value;
_12 = _10.value;
_13 = _11 >= _12;
_14 = (frost$core$Bit) {_13};
_15 = _14.value;
if (_15) goto block4; else goto block3;
block4:;
_17 = ((frost$collections$CollectionView*) _2);
ITable* $tmp405 = _17->$class->itable;
while ($tmp405->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp405 = $tmp405->next;
}
_18 = $tmp405->methods[0];
_19 = _18(_17);
_20 = _3.value;
_21 = _19.value;
_22 = _20 < _21;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block2; else goto block3;
block3:;
_26 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s406, _26, &$s407);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:564
_1 = param1.value;
if (_1) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:565
_4 = (frost$core$Int64) {1u};
return _4;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:567
_7 = (frost$core$Int64) {0u};
return _7;

}
void org$frostlang$frostc$Interpreter$binary$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$IR$Value* param3, org$frostlang$frostc$expression$Binary$Operator param4, org$frostlang$frostc$IR$Value* param5) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

frost$core$Int64 local0;
frost$core$Int64 local1;
$fn408 _1;
frost$core$Int64 _2;
$fn409 _5;
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
$fn410 _41;
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
$fn411 _99;
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
$fn412 _157;
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
int64_t _200;
int64_t _201;
int64_t _202;
frost$core$Int64 _203;
frost$core$Int64$nullable _204;
frost$core$Object* _205;
frost$core$Int _207;
int64_t _208;
int64_t _209;
bool _210;
frost$core$Bit _211;
bool _212;
frost$collections$CollectionView* _214;
$fn413 _215;
frost$core$Int _216;
int64_t _217;
int64_t _218;
bool _219;
frost$core$Bit _220;
bool _221;
frost$core$Int _223;
frost$unsafe$Pointer* _227;
frost$unsafe$Pointer _228;
int64_t _229;
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
frost$core$Int _255;
frost$core$Int64 _256;
frost$core$Int64 _257;
int64_t _260;
int64_t _261;
int64_t _262;
frost$core$Int64 _263;
frost$core$Int64$nullable _265;
frost$core$Object* _266;
frost$core$Int _268;
int64_t _269;
int64_t _270;
bool _271;
frost$core$Bit _272;
bool _273;
frost$collections$CollectionView* _275;
$fn414 _276;
frost$core$Int _277;
int64_t _278;
int64_t _279;
bool _280;
frost$core$Bit _281;
bool _282;
frost$core$Int _284;
frost$unsafe$Pointer* _288;
frost$unsafe$Pointer _289;
int64_t _290;
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
frost$core$Int _316;
frost$core$Int64 _317;
frost$core$Int64 _318;
int64_t _321;
int64_t _322;
int64_t _323;
frost$core$Int64 _324;
frost$core$Int64$nullable _326;
frost$core$Object* _327;
frost$core$Int _329;
int64_t _330;
int64_t _331;
bool _332;
frost$core$Bit _333;
bool _334;
frost$collections$CollectionView* _336;
$fn415 _337;
frost$core$Int _338;
int64_t _339;
int64_t _340;
bool _341;
frost$core$Bit _342;
bool _343;
frost$core$Int _345;
frost$unsafe$Pointer* _349;
frost$unsafe$Pointer _350;
int64_t _351;
frost$core$Int64 _352;
int64_t _353;
frost$core$Object* _354;
frost$core$Object* _356;
frost$core$Object* _357;
frost$core$Object* _361;
frost$core$Int _364;
int64_t _367;
int64_t _368;
bool _369;
frost$core$Bit _370;
bool _372;
frost$collections$Array** _375;
frost$collections$Array* _376;
frost$core$Int _377;
frost$core$Int64 _378;
frost$core$Int64 _379;
int64_t _382;
int64_t _383;
int64_t _384;
frost$core$Int64 _385;
frost$core$Int64$nullable _387;
frost$core$Object* _388;
frost$core$Int _390;
int64_t _391;
int64_t _392;
bool _393;
frost$core$Bit _394;
bool _395;
frost$collections$CollectionView* _397;
$fn416 _398;
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
int64_t _443;
int64_t _444;
int64_t _445;
frost$core$Int64 _446;
frost$core$Int64$nullable _448;
frost$core$Object* _449;
frost$core$Int _451;
int64_t _452;
int64_t _453;
bool _454;
frost$core$Bit _455;
bool _456;
frost$collections$CollectionView* _458;
$fn417 _459;
frost$core$Int _460;
int64_t _461;
int64_t _462;
bool _463;
frost$core$Bit _464;
bool _465;
frost$core$Int _467;
frost$unsafe$Pointer* _471;
frost$unsafe$Pointer _472;
int64_t _473;
frost$core$Int64 _474;
int64_t _475;
frost$core$Object* _476;
frost$core$Object* _478;
frost$core$Object* _479;
frost$core$Object* _483;
frost$core$Int _486;
int64_t _489;
int64_t _490;
bool _491;
frost$core$Bit _492;
bool _494;
frost$collections$Array** _497;
frost$collections$Array* _498;
frost$core$Int _499;
frost$core$Int64 _500;
frost$core$Int64 _501;
int64_t _502;
int64_t _503;
bool _504;
frost$core$Bit _505;
$fn418 _506;
frost$core$Int64 _507;
frost$core$Int64$nullable _508;
frost$core$Object* _509;
frost$core$Int _511;
int64_t _512;
int64_t _513;
bool _514;
frost$core$Bit _515;
bool _516;
frost$collections$CollectionView* _518;
$fn419 _519;
frost$core$Int _520;
int64_t _521;
int64_t _522;
bool _523;
frost$core$Bit _524;
bool _525;
frost$core$Int _527;
frost$unsafe$Pointer* _531;
frost$unsafe$Pointer _532;
int64_t _533;
frost$core$Int64 _534;
int64_t _535;
frost$core$Object* _536;
frost$core$Object* _538;
frost$core$Object* _539;
frost$core$Object* _543;
frost$core$Int _546;
int64_t _549;
int64_t _550;
bool _551;
frost$core$Bit _552;
bool _554;
frost$collections$Array** _557;
frost$collections$Array* _558;
frost$core$Int _559;
frost$core$Int64 _560;
frost$core$Int64 _561;
int64_t _562;
int64_t _563;
bool _564;
frost$core$Bit _565;
$fn420 _566;
frost$core$Int64 _567;
frost$core$Int64$nullable _568;
frost$core$Object* _569;
frost$core$Int _571;
int64_t _572;
int64_t _573;
bool _574;
frost$core$Bit _575;
bool _576;
frost$collections$CollectionView* _578;
$fn421 _579;
frost$core$Int _580;
int64_t _581;
int64_t _582;
bool _583;
frost$core$Bit _584;
bool _585;
frost$core$Int _587;
frost$unsafe$Pointer* _591;
frost$unsafe$Pointer _592;
int64_t _593;
frost$core$Int64 _594;
int64_t _595;
frost$core$Object* _596;
frost$core$Object* _598;
frost$core$Object* _599;
frost$core$Object* _603;
frost$core$Int _606;
int64_t _609;
int64_t _610;
bool _611;
frost$core$Bit _612;
bool _614;
frost$collections$Array** _617;
frost$collections$Array* _618;
frost$core$Int _619;
frost$core$Int64 _620;
frost$core$Int64 _621;
int64_t _622;
int64_t _623;
bool _624;
frost$core$Bit _625;
$fn422 _626;
frost$core$Int64 _627;
frost$core$Int64$nullable _628;
frost$core$Object* _629;
frost$core$Int _631;
int64_t _632;
int64_t _633;
bool _634;
frost$core$Bit _635;
bool _636;
frost$collections$CollectionView* _638;
$fn423 _639;
frost$core$Int _640;
int64_t _641;
int64_t _642;
bool _643;
frost$core$Bit _644;
bool _645;
frost$core$Int _647;
frost$unsafe$Pointer* _651;
frost$unsafe$Pointer _652;
int64_t _653;
frost$core$Int64 _654;
int64_t _655;
frost$core$Object* _656;
frost$core$Object* _658;
frost$core$Object* _659;
frost$core$Object* _663;
frost$core$Int _666;
int64_t _669;
int64_t _670;
bool _671;
frost$core$Bit _672;
bool _674;
frost$collections$Array** _677;
frost$collections$Array* _678;
frost$core$Int _679;
frost$core$Int64 _680;
frost$core$Int64 _681;
int64_t _682;
int64_t _683;
bool _684;
frost$core$Bit _685;
$fn424 _686;
frost$core$Int64 _687;
frost$core$Int64$nullable _688;
frost$core$Object* _689;
frost$core$Int _691;
int64_t _692;
int64_t _693;
bool _694;
frost$core$Bit _695;
bool _696;
frost$collections$CollectionView* _698;
$fn425 _699;
frost$core$Int _700;
int64_t _701;
int64_t _702;
bool _703;
frost$core$Bit _704;
bool _705;
frost$core$Int _707;
frost$unsafe$Pointer* _711;
frost$unsafe$Pointer _712;
int64_t _713;
frost$core$Int64 _714;
int64_t _715;
frost$core$Object* _716;
frost$core$Object* _718;
frost$core$Object* _719;
frost$core$Object* _723;
frost$core$Int _726;
int64_t _729;
int64_t _730;
bool _731;
frost$core$Bit _732;
bool _734;
frost$core$Int64 _737;
frost$core$Int64 _738;
int64_t _741;
int64_t _742;
bool _743;
frost$core$Bit _744;
bool _746;
frost$collections$Array** _749;
frost$collections$Array* _750;
frost$core$Int _751;
frost$core$Int64 _752;
frost$core$Int64$nullable _753;
frost$core$Object* _754;
frost$core$Int _756;
int64_t _757;
int64_t _758;
bool _759;
frost$core$Bit _760;
bool _761;
frost$collections$CollectionView* _763;
$fn426 _764;
frost$core$Int _765;
int64_t _766;
int64_t _767;
bool _768;
frost$core$Bit _769;
bool _770;
frost$core$Int _772;
frost$unsafe$Pointer* _776;
frost$unsafe$Pointer _777;
int64_t _778;
frost$core$Int64 _779;
int64_t _780;
frost$core$Object* _781;
frost$core$Object* _783;
frost$core$Object* _784;
frost$core$Object* _788;
frost$collections$Array** _793;
frost$collections$Array* _794;
frost$core$Int _795;
frost$core$Int64 _796;
frost$core$Int64$nullable _797;
frost$core$Object* _798;
frost$core$Int _800;
int64_t _801;
int64_t _802;
bool _803;
frost$core$Bit _804;
bool _805;
frost$collections$CollectionView* _807;
$fn427 _808;
frost$core$Int _809;
int64_t _810;
int64_t _811;
bool _812;
frost$core$Bit _813;
bool _814;
frost$core$Int _816;
frost$unsafe$Pointer* _820;
frost$unsafe$Pointer _821;
int64_t _822;
frost$core$Int64 _823;
int64_t _824;
frost$core$Object* _825;
frost$core$Object* _827;
frost$core$Object* _828;
frost$core$Object* _832;
frost$core$Int _836;
int64_t _839;
int64_t _840;
bool _841;
frost$core$Bit _842;
bool _844;
frost$core$Int64 _847;
frost$core$Int64 _848;
int64_t _849;
int64_t _850;
bool _851;
frost$core$Bit _852;
bool _853;
frost$collections$Array** _856;
frost$collections$Array* _857;
frost$core$Int _858;
frost$core$Int64 _859;
frost$core$Int64$nullable _860;
frost$core$Object* _861;
frost$core$Int _863;
int64_t _864;
int64_t _865;
bool _866;
frost$core$Bit _867;
bool _868;
frost$collections$CollectionView* _870;
$fn428 _871;
frost$core$Int _872;
int64_t _873;
int64_t _874;
bool _875;
frost$core$Bit _876;
bool _877;
frost$core$Int _879;
frost$unsafe$Pointer* _883;
frost$unsafe$Pointer _884;
int64_t _885;
frost$core$Int64 _886;
int64_t _887;
frost$core$Object* _888;
frost$core$Object* _890;
frost$core$Object* _891;
frost$core$Object* _895;
frost$collections$Array** _900;
frost$collections$Array* _901;
frost$core$Int _902;
frost$core$Int64 _903;
frost$core$Int64$nullable _904;
frost$core$Object* _905;
frost$core$Int _907;
int64_t _908;
int64_t _909;
bool _910;
frost$core$Bit _911;
bool _912;
frost$collections$CollectionView* _914;
$fn429 _915;
frost$core$Int _916;
int64_t _917;
int64_t _918;
bool _919;
frost$core$Bit _920;
bool _921;
frost$core$Int _923;
frost$unsafe$Pointer* _927;
frost$unsafe$Pointer _928;
int64_t _929;
frost$core$Int64 _930;
int64_t _931;
frost$core$Object* _932;
frost$core$Object* _934;
frost$core$Object* _935;
frost$core$Object* _939;
frost$core$Int _944;
frost$core$Object* _945;
$fn430 _948;
frost$core$String* _949;
frost$core$String* _950;
frost$core$Object* _951;
frost$core$Object* _953;
frost$core$Object* _955;
frost$core$String* _958;
frost$core$Object* _960;
frost$core$Object* _962;
frost$core$Object* _964;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:572
_1 = ($fn431) param1->$class->vtable[2];
_2 = _1(param1, param3);
*(&local0) = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:573
_5 = ($fn432) param1->$class->vtable[2];
_6 = _5(param1, param5);
*(&local1) = _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:574
_9 = param4.$rawValue;
_10 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:575:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_13 = _9.value;
_14 = _10.value;
_15 = _13 == _14;
_16 = (frost$core$Bit) {_15};
_18 = _16.value;
if (_18) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:576
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
frost$core$Object* $tmp433;
if (_30.nonnull) {
    frost$core$Int64$wrapper* $tmp434;
    $tmp434 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp434->value = ((frost$core$Int64) _30.value);
    $tmp433 = ((frost$core$Object*) $tmp434);
}
else {
    $tmp433 = NULL;
}
_31 = $tmp433;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:576:35
_33 = (frost$core$Int) {0u};
_34 = _23.value;
_35 = _33.value;
_36 = _34 >= _35;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block8; else goto block7;
block8:;
_40 = ((frost$collections$CollectionView*) _22);
ITable* $tmp435 = _40->$class->itable;
while ($tmp435->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp435 = $tmp435->next;
}
_41 = $tmp435->methods[0];
_42 = _41(_40);
_43 = _23.value;
_44 = _42.value;
_45 = _43 < _44;
_46 = (frost$core$Bit) {_45};
_47 = _46.value;
if (_47) goto block6; else goto block7;
block7:;
_49 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s436, _49, &$s437);
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:578:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_71 = _9.value;
_72 = _68.value;
_73 = _71 == _72;
_74 = (frost$core$Bit) {_73};
_76 = _74.value;
if (_76) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:579
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
frost$core$Object* $tmp438;
if (_88.nonnull) {
    frost$core$Int64$wrapper* $tmp439;
    $tmp439 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp439->value = ((frost$core$Int64) _88.value);
    $tmp438 = ((frost$core$Object*) $tmp439);
}
else {
    $tmp438 = NULL;
}
_89 = $tmp438;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:579:35
_91 = (frost$core$Int) {0u};
_92 = _81.value;
_93 = _91.value;
_94 = _92 >= _93;
_95 = (frost$core$Bit) {_94};
_96 = _95.value;
if (_96) goto block15; else goto block14;
block15:;
_98 = ((frost$collections$CollectionView*) _80);
ITable* $tmp440 = _98->$class->itable;
while ($tmp440->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp440 = $tmp440->next;
}
_99 = $tmp440->methods[0];
_100 = _99(_98);
_101 = _81.value;
_102 = _100.value;
_103 = _101 < _102;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block13; else goto block14;
block14:;
_107 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s441, _107, &$s442);
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
_126 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:581:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_129 = _9.value;
_130 = _126.value;
_131 = _129 == _130;
_132 = (frost$core$Bit) {_131};
_134 = _132.value;
if (_134) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:582
_137 = &param1->statements;
_138 = *_137;
_139 = param2.value;
_140 = *(&local0);
_141 = *(&local1);
_142 = _140.value;
_143 = _141.value;
_144 = _142 * _143;
_145 = (frost$core$Int64) {_144};
_146 = ((frost$core$Int64$nullable) { _145, true });
frost$core$Object* $tmp443;
if (_146.nonnull) {
    frost$core$Int64$wrapper* $tmp444;
    $tmp444 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp444->value = ((frost$core$Int64) _146.value);
    $tmp443 = ((frost$core$Object*) $tmp444);
}
else {
    $tmp443 = NULL;
}
_147 = $tmp443;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:582:35
_149 = (frost$core$Int) {0u};
_150 = _139.value;
_151 = _149.value;
_152 = _150 >= _151;
_153 = (frost$core$Bit) {_152};
_154 = _153.value;
if (_154) goto block22; else goto block21;
block22:;
_156 = ((frost$collections$CollectionView*) _138);
ITable* $tmp445 = _156->$class->itable;
while ($tmp445->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp445 = $tmp445->next;
}
_157 = $tmp445->methods[0];
_158 = _157(_156);
_159 = _139.value;
_160 = _158.value;
_161 = _159 < _160;
_162 = (frost$core$Bit) {_161};
_163 = _162.value;
if (_163) goto block20; else goto block21;
block21:;
_165 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s446, _165, &$s447);
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
_184 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:584:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_187 = _9.value;
_188 = _184.value;
_189 = _187 == _188;
_190 = (frost$core$Bit) {_189};
_192 = _190.value;
if (_192) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:585
_195 = &param1->statements;
_196 = *_195;
_197 = param2.value;
_198 = *(&local0);
_199 = *(&local1);
_200 = _198.value;
_201 = _199.value;
_202 = _200 / _201;
_203 = (frost$core$Int64) {_202};
_204 = ((frost$core$Int64$nullable) { _203, true });
frost$core$Object* $tmp448;
if (_204.nonnull) {
    frost$core$Int64$wrapper* $tmp449;
    $tmp449 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp449->value = ((frost$core$Int64) _204.value);
    $tmp448 = ((frost$core$Object*) $tmp449);
}
else {
    $tmp448 = NULL;
}
_205 = $tmp448;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:585:35
_207 = (frost$core$Int) {0u};
_208 = _197.value;
_209 = _207.value;
_210 = _208 >= _209;
_211 = (frost$core$Bit) {_210};
_212 = _211.value;
if (_212) goto block29; else goto block28;
block29:;
_214 = ((frost$collections$CollectionView*) _196);
ITable* $tmp450 = _214->$class->itable;
while ($tmp450->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp450 = $tmp450->next;
}
_215 = $tmp450->methods[0];
_216 = _215(_214);
_217 = _197.value;
_218 = _216.value;
_219 = _217 < _218;
_220 = (frost$core$Bit) {_219};
_221 = _220.value;
if (_221) goto block27; else goto block28;
block28:;
_223 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s451, _223, &$s452);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_227 = &_196->data;
_228 = *_227;
_229 = _228.value;
_230 = frost$core$Int64$init$frost$core$Int(_197);
_231 = _230.value;
_232 = _205;
frost$core$Frost$ref$frost$core$Object$Q(_232);
_234 = ((frost$core$Object**)_229)[_231];
_235 = _234;
frost$core$Frost$unref$frost$core$Object$Q(_235);
((frost$core$Object**)_229)[_231] = _205;
_239 = _205;
frost$core$Frost$unref$frost$core$Object$Q(_239);
goto block1;
block24:;
_242 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:587:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_245 = _9.value;
_246 = _242.value;
_247 = _245 == _246;
_248 = (frost$core$Bit) {_247};
_250 = _248.value;
if (_250) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:588
_253 = &param1->statements;
_254 = *_253;
_255 = param2.value;
_256 = *(&local0);
_257 = *(&local1);
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Interpreter.frost:588:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:107
_260 = _256.value;
_261 = _257.value;
_262 = _260 % _261;
_263 = (frost$core$Int64) {_262};
_265 = ((frost$core$Int64$nullable) { _263, true });
frost$core$Object* $tmp453;
if (_265.nonnull) {
    frost$core$Int64$wrapper* $tmp454;
    $tmp454 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp454->value = ((frost$core$Int64) _265.value);
    $tmp453 = ((frost$core$Object*) $tmp454);
}
else {
    $tmp453 = NULL;
}
_266 = $tmp453;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:588:35
_268 = (frost$core$Int) {0u};
_269 = _255.value;
_270 = _268.value;
_271 = _269 >= _270;
_272 = (frost$core$Bit) {_271};
_273 = _272.value;
if (_273) goto block37; else goto block36;
block37:;
_275 = ((frost$collections$CollectionView*) _254);
ITable* $tmp455 = _275->$class->itable;
while ($tmp455->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp455 = $tmp455->next;
}
_276 = $tmp455->methods[0];
_277 = _276(_275);
_278 = _255.value;
_279 = _277.value;
_280 = _278 < _279;
_281 = (frost$core$Bit) {_280};
_282 = _281.value;
if (_282) goto block35; else goto block36;
block36:;
_284 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s456, _284, &$s457);
abort(); // unreachable
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_288 = &_254->data;
_289 = *_288;
_290 = _289.value;
_291 = frost$core$Int64$init$frost$core$Int(_255);
_292 = _291.value;
_293 = _266;
frost$core$Frost$ref$frost$core$Object$Q(_293);
_295 = ((frost$core$Object**)_290)[_292];
_296 = _295;
frost$core$Frost$unref$frost$core$Object$Q(_296);
((frost$core$Object**)_290)[_292] = _266;
_300 = _266;
frost$core$Frost$unref$frost$core$Object$Q(_300);
goto block1;
block31:;
_303 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:590:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_306 = _9.value;
_307 = _303.value;
_308 = _306 == _307;
_309 = (frost$core$Bit) {_308};
_311 = _309.value;
if (_311) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:591
_314 = &param1->statements;
_315 = *_314;
_316 = param2.value;
_317 = *(&local0);
_318 = *(&local1);
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Interpreter.frost:591:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:178
_321 = _317.value;
_322 = _318.value;
_323 = _321 & _322;
_324 = (frost$core$Int64) {_323};
_326 = ((frost$core$Int64$nullable) { _324, true });
frost$core$Object* $tmp458;
if (_326.nonnull) {
    frost$core$Int64$wrapper* $tmp459;
    $tmp459 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp459->value = ((frost$core$Int64) _326.value);
    $tmp458 = ((frost$core$Object*) $tmp459);
}
else {
    $tmp458 = NULL;
}
_327 = $tmp458;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:591:35
_329 = (frost$core$Int) {0u};
_330 = _316.value;
_331 = _329.value;
_332 = _330 >= _331;
_333 = (frost$core$Bit) {_332};
_334 = _333.value;
if (_334) goto block45; else goto block44;
block45:;
_336 = ((frost$collections$CollectionView*) _315);
ITable* $tmp460 = _336->$class->itable;
while ($tmp460->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp460 = $tmp460->next;
}
_337 = $tmp460->methods[0];
_338 = _337(_336);
_339 = _316.value;
_340 = _338.value;
_341 = _339 < _340;
_342 = (frost$core$Bit) {_341};
_343 = _342.value;
if (_343) goto block43; else goto block44;
block44:;
_345 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s461, _345, &$s462);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_349 = &_315->data;
_350 = *_349;
_351 = _350.value;
_352 = frost$core$Int64$init$frost$core$Int(_316);
_353 = _352.value;
_354 = _327;
frost$core$Frost$ref$frost$core$Object$Q(_354);
_356 = ((frost$core$Object**)_351)[_353];
_357 = _356;
frost$core$Frost$unref$frost$core$Object$Q(_357);
((frost$core$Object**)_351)[_353] = _327;
_361 = _327;
frost$core$Frost$unref$frost$core$Object$Q(_361);
goto block1;
block39:;
_364 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:593:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_367 = _9.value;
_368 = _364.value;
_369 = _367 == _368;
_370 = (frost$core$Bit) {_369};
_372 = _370.value;
if (_372) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:594
_375 = &param1->statements;
_376 = *_375;
_377 = param2.value;
_378 = *(&local0);
_379 = *(&local1);
// begin inline call to function frost.core.Int64.||(other:frost.core.Int64):frost.core.Int64 from Interpreter.frost:594:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:190
_382 = _378.value;
_383 = _379.value;
_384 = _382 | _383;
_385 = (frost$core$Int64) {_384};
_387 = ((frost$core$Int64$nullable) { _385, true });
frost$core$Object* $tmp463;
if (_387.nonnull) {
    frost$core$Int64$wrapper* $tmp464;
    $tmp464 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp464->value = ((frost$core$Int64) _387.value);
    $tmp463 = ((frost$core$Object*) $tmp464);
}
else {
    $tmp463 = NULL;
}
_388 = $tmp463;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:594:35
_390 = (frost$core$Int) {0u};
_391 = _377.value;
_392 = _390.value;
_393 = _391 >= _392;
_394 = (frost$core$Bit) {_393};
_395 = _394.value;
if (_395) goto block53; else goto block52;
block53:;
_397 = ((frost$collections$CollectionView*) _376);
ITable* $tmp465 = _397->$class->itable;
while ($tmp465->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp465 = $tmp465->next;
}
_398 = $tmp465->methods[0];
_399 = _398(_397);
_400 = _377.value;
_401 = _399.value;
_402 = _400 < _401;
_403 = (frost$core$Bit) {_402};
_404 = _403.value;
if (_404) goto block51; else goto block52;
block52:;
_406 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s466, _406, &$s467);
abort(); // unreachable
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_410 = &_376->data;
_411 = *_410;
_412 = _411.value;
_413 = frost$core$Int64$init$frost$core$Int(_377);
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
block47:;
_425 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:596:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_428 = _9.value;
_429 = _425.value;
_430 = _428 == _429;
_431 = (frost$core$Bit) {_430};
_433 = _431.value;
if (_433) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:597
_436 = &param1->statements;
_437 = *_436;
_438 = param2.value;
_439 = *(&local0);
_440 = *(&local1);
// begin inline call to function frost.core.Int64.~~(other:frost.core.Int64):frost.core.Int64 from Interpreter.frost:597:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:202
_443 = _439.value;
_444 = _440.value;
_445 = _443 ^ _444;
_446 = (frost$core$Int64) {_445};
_448 = ((frost$core$Int64$nullable) { _446, true });
frost$core$Object* $tmp468;
if (_448.nonnull) {
    frost$core$Int64$wrapper* $tmp469;
    $tmp469 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp469->value = ((frost$core$Int64) _448.value);
    $tmp468 = ((frost$core$Object*) $tmp469);
}
else {
    $tmp468 = NULL;
}
_449 = $tmp468;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:597:35
_451 = (frost$core$Int) {0u};
_452 = _438.value;
_453 = _451.value;
_454 = _452 >= _453;
_455 = (frost$core$Bit) {_454};
_456 = _455.value;
if (_456) goto block61; else goto block60;
block61:;
_458 = ((frost$collections$CollectionView*) _437);
ITable* $tmp470 = _458->$class->itable;
while ($tmp470->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp470 = $tmp470->next;
}
_459 = $tmp470->methods[0];
_460 = _459(_458);
_461 = _438.value;
_462 = _460.value;
_463 = _461 < _462;
_464 = (frost$core$Bit) {_463};
_465 = _464.value;
if (_465) goto block59; else goto block60;
block60:;
_467 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s471, _467, &$s472);
abort(); // unreachable
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_471 = &_437->data;
_472 = *_471;
_473 = _472.value;
_474 = frost$core$Int64$init$frost$core$Int(_438);
_475 = _474.value;
_476 = _449;
frost$core$Frost$ref$frost$core$Object$Q(_476);
_478 = ((frost$core$Object**)_473)[_475];
_479 = _478;
frost$core$Frost$unref$frost$core$Object$Q(_479);
((frost$core$Object**)_473)[_475] = _449;
_483 = _449;
frost$core$Frost$unref$frost$core$Object$Q(_483);
goto block1;
block55:;
_486 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:599:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_489 = _9.value;
_490 = _486.value;
_491 = _489 == _490;
_492 = (frost$core$Bit) {_491};
_494 = _492.value;
if (_494) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:600
_497 = &param1->statements;
_498 = *_497;
_499 = param2.value;
_500 = *(&local0);
_501 = *(&local1);
_502 = _500.value;
_503 = _501.value;
_504 = _502 > _503;
_505 = (frost$core$Bit) {_504};
_506 = ($fn473) param0->$class->vtable[21];
_507 = _506(param0, _505);
_508 = ((frost$core$Int64$nullable) { _507, true });
frost$core$Object* $tmp474;
if (_508.nonnull) {
    frost$core$Int64$wrapper* $tmp475;
    $tmp475 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp475->value = ((frost$core$Int64) _508.value);
    $tmp474 = ((frost$core$Object*) $tmp475);
}
else {
    $tmp474 = NULL;
}
_509 = $tmp474;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:600:35
_511 = (frost$core$Int) {0u};
_512 = _499.value;
_513 = _511.value;
_514 = _512 >= _513;
_515 = (frost$core$Bit) {_514};
_516 = _515.value;
if (_516) goto block68; else goto block67;
block68:;
_518 = ((frost$collections$CollectionView*) _498);
ITable* $tmp476 = _518->$class->itable;
while ($tmp476->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp476 = $tmp476->next;
}
_519 = $tmp476->methods[0];
_520 = _519(_518);
_521 = _499.value;
_522 = _520.value;
_523 = _521 < _522;
_524 = (frost$core$Bit) {_523};
_525 = _524.value;
if (_525) goto block66; else goto block67;
block67:;
_527 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s477, _527, &$s478);
abort(); // unreachable
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_531 = &_498->data;
_532 = *_531;
_533 = _532.value;
_534 = frost$core$Int64$init$frost$core$Int(_499);
_535 = _534.value;
_536 = _509;
frost$core$Frost$ref$frost$core$Object$Q(_536);
_538 = ((frost$core$Object**)_533)[_535];
_539 = _538;
frost$core$Frost$unref$frost$core$Object$Q(_539);
((frost$core$Object**)_533)[_535] = _509;
_543 = _509;
frost$core$Frost$unref$frost$core$Object$Q(_543);
goto block1;
block63:;
_546 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:602:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_549 = _9.value;
_550 = _546.value;
_551 = _549 == _550;
_552 = (frost$core$Bit) {_551};
_554 = _552.value;
if (_554) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:603
_557 = &param1->statements;
_558 = *_557;
_559 = param2.value;
_560 = *(&local0);
_561 = *(&local1);
_562 = _560.value;
_563 = _561.value;
_564 = _562 >= _563;
_565 = (frost$core$Bit) {_564};
_566 = ($fn479) param0->$class->vtable[21];
_567 = _566(param0, _565);
_568 = ((frost$core$Int64$nullable) { _567, true });
frost$core$Object* $tmp480;
if (_568.nonnull) {
    frost$core$Int64$wrapper* $tmp481;
    $tmp481 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp481->value = ((frost$core$Int64) _568.value);
    $tmp480 = ((frost$core$Object*) $tmp481);
}
else {
    $tmp480 = NULL;
}
_569 = $tmp480;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:603:35
_571 = (frost$core$Int) {0u};
_572 = _559.value;
_573 = _571.value;
_574 = _572 >= _573;
_575 = (frost$core$Bit) {_574};
_576 = _575.value;
if (_576) goto block75; else goto block74;
block75:;
_578 = ((frost$collections$CollectionView*) _558);
ITable* $tmp482 = _578->$class->itable;
while ($tmp482->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp482 = $tmp482->next;
}
_579 = $tmp482->methods[0];
_580 = _579(_578);
_581 = _559.value;
_582 = _580.value;
_583 = _581 < _582;
_584 = (frost$core$Bit) {_583};
_585 = _584.value;
if (_585) goto block73; else goto block74;
block74:;
_587 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s483, _587, &$s484);
abort(); // unreachable
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_591 = &_558->data;
_592 = *_591;
_593 = _592.value;
_594 = frost$core$Int64$init$frost$core$Int(_559);
_595 = _594.value;
_596 = _569;
frost$core$Frost$ref$frost$core$Object$Q(_596);
_598 = ((frost$core$Object**)_593)[_595];
_599 = _598;
frost$core$Frost$unref$frost$core$Object$Q(_599);
((frost$core$Object**)_593)[_595] = _569;
_603 = _569;
frost$core$Frost$unref$frost$core$Object$Q(_603);
goto block1;
block70:;
_606 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:605:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_609 = _9.value;
_610 = _606.value;
_611 = _609 == _610;
_612 = (frost$core$Bit) {_611};
_614 = _612.value;
if (_614) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:606
_617 = &param1->statements;
_618 = *_617;
_619 = param2.value;
_620 = *(&local0);
_621 = *(&local1);
_622 = _620.value;
_623 = _621.value;
_624 = _622 < _623;
_625 = (frost$core$Bit) {_624};
_626 = ($fn485) param0->$class->vtable[21];
_627 = _626(param0, _625);
_628 = ((frost$core$Int64$nullable) { _627, true });
frost$core$Object* $tmp486;
if (_628.nonnull) {
    frost$core$Int64$wrapper* $tmp487;
    $tmp487 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp487->value = ((frost$core$Int64) _628.value);
    $tmp486 = ((frost$core$Object*) $tmp487);
}
else {
    $tmp486 = NULL;
}
_629 = $tmp486;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:606:35
_631 = (frost$core$Int) {0u};
_632 = _619.value;
_633 = _631.value;
_634 = _632 >= _633;
_635 = (frost$core$Bit) {_634};
_636 = _635.value;
if (_636) goto block82; else goto block81;
block82:;
_638 = ((frost$collections$CollectionView*) _618);
ITable* $tmp488 = _638->$class->itable;
while ($tmp488->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp488 = $tmp488->next;
}
_639 = $tmp488->methods[0];
_640 = _639(_638);
_641 = _619.value;
_642 = _640.value;
_643 = _641 < _642;
_644 = (frost$core$Bit) {_643};
_645 = _644.value;
if (_645) goto block80; else goto block81;
block81:;
_647 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s489, _647, &$s490);
abort(); // unreachable
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_651 = &_618->data;
_652 = *_651;
_653 = _652.value;
_654 = frost$core$Int64$init$frost$core$Int(_619);
_655 = _654.value;
_656 = _629;
frost$core$Frost$ref$frost$core$Object$Q(_656);
_658 = ((frost$core$Object**)_653)[_655];
_659 = _658;
frost$core$Frost$unref$frost$core$Object$Q(_659);
((frost$core$Object**)_653)[_655] = _629;
_663 = _629;
frost$core$Frost$unref$frost$core$Object$Q(_663);
goto block1;
block77:;
_666 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:608:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_669 = _9.value;
_670 = _666.value;
_671 = _669 == _670;
_672 = (frost$core$Bit) {_671};
_674 = _672.value;
if (_674) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:609
_677 = &param1->statements;
_678 = *_677;
_679 = param2.value;
_680 = *(&local0);
_681 = *(&local1);
_682 = _680.value;
_683 = _681.value;
_684 = _682 <= _683;
_685 = (frost$core$Bit) {_684};
_686 = ($fn491) param0->$class->vtable[21];
_687 = _686(param0, _685);
_688 = ((frost$core$Int64$nullable) { _687, true });
frost$core$Object* $tmp492;
if (_688.nonnull) {
    frost$core$Int64$wrapper* $tmp493;
    $tmp493 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp493->value = ((frost$core$Int64) _688.value);
    $tmp492 = ((frost$core$Object*) $tmp493);
}
else {
    $tmp492 = NULL;
}
_689 = $tmp492;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:609:35
_691 = (frost$core$Int) {0u};
_692 = _679.value;
_693 = _691.value;
_694 = _692 >= _693;
_695 = (frost$core$Bit) {_694};
_696 = _695.value;
if (_696) goto block89; else goto block88;
block89:;
_698 = ((frost$collections$CollectionView*) _678);
ITable* $tmp494 = _698->$class->itable;
while ($tmp494->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp494 = $tmp494->next;
}
_699 = $tmp494->methods[0];
_700 = _699(_698);
_701 = _679.value;
_702 = _700.value;
_703 = _701 < _702;
_704 = (frost$core$Bit) {_703};
_705 = _704.value;
if (_705) goto block87; else goto block88;
block88:;
_707 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s495, _707, &$s496);
abort(); // unreachable
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_711 = &_678->data;
_712 = *_711;
_713 = _712.value;
_714 = frost$core$Int64$init$frost$core$Int(_679);
_715 = _714.value;
_716 = _689;
frost$core$Frost$ref$frost$core$Object$Q(_716);
_718 = ((frost$core$Object**)_713)[_715];
_719 = _718;
frost$core$Frost$unref$frost$core$Object$Q(_719);
((frost$core$Object**)_713)[_715] = _689;
_723 = _689;
frost$core$Frost$unref$frost$core$Object$Q(_723);
goto block1;
block84:;
_726 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:611:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_729 = _9.value;
_730 = _726.value;
_731 = _729 == _730;
_732 = (frost$core$Bit) {_731};
_734 = _732.value;
if (_734) goto block90; else goto block91;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:612
_737 = *(&local0);
_738 = *(&local1);
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Interpreter.frost:612:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
_741 = _737.value;
_742 = _738.value;
_743 = _741 == _742;
_744 = (frost$core$Bit) {_743};
_746 = _744.value;
if (_746) goto block93; else goto block95;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:613
_749 = &param1->statements;
_750 = *_749;
_751 = param2.value;
_752 = (frost$core$Int64) {1u};
_753 = ((frost$core$Int64$nullable) { _752, true });
frost$core$Object* $tmp497;
if (_753.nonnull) {
    frost$core$Int64$wrapper* $tmp498;
    $tmp498 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp498->value = ((frost$core$Int64) _753.value);
    $tmp497 = ((frost$core$Object*) $tmp498);
}
else {
    $tmp497 = NULL;
}
_754 = $tmp497;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:613:39
_756 = (frost$core$Int) {0u};
_757 = _751.value;
_758 = _756.value;
_759 = _757 >= _758;
_760 = (frost$core$Bit) {_759};
_761 = _760.value;
if (_761) goto block100; else goto block99;
block100:;
_763 = ((frost$collections$CollectionView*) _750);
ITable* $tmp499 = _763->$class->itable;
while ($tmp499->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp499 = $tmp499->next;
}
_764 = $tmp499->methods[0];
_765 = _764(_763);
_766 = _751.value;
_767 = _765.value;
_768 = _766 < _767;
_769 = (frost$core$Bit) {_768};
_770 = _769.value;
if (_770) goto block98; else goto block99;
block99:;
_772 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s500, _772, &$s501);
abort(); // unreachable
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_776 = &_750->data;
_777 = *_776;
_778 = _777.value;
_779 = frost$core$Int64$init$frost$core$Int(_751);
_780 = _779.value;
_781 = _754;
frost$core$Frost$ref$frost$core$Object$Q(_781);
_783 = ((frost$core$Object**)_778)[_780];
_784 = _783;
frost$core$Frost$unref$frost$core$Object$Q(_784);
((frost$core$Object**)_778)[_780] = _754;
_788 = _754;
frost$core$Frost$unref$frost$core$Object$Q(_788);
goto block94;
block95:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:616
_793 = &param1->statements;
_794 = *_793;
_795 = param2.value;
_796 = (frost$core$Int64) {0u};
_797 = ((frost$core$Int64$nullable) { _796, true });
frost$core$Object* $tmp502;
if (_797.nonnull) {
    frost$core$Int64$wrapper* $tmp503;
    $tmp503 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp503->value = ((frost$core$Int64) _797.value);
    $tmp502 = ((frost$core$Object*) $tmp503);
}
else {
    $tmp502 = NULL;
}
_798 = $tmp502;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:616:39
_800 = (frost$core$Int) {0u};
_801 = _795.value;
_802 = _800.value;
_803 = _801 >= _802;
_804 = (frost$core$Bit) {_803};
_805 = _804.value;
if (_805) goto block104; else goto block103;
block104:;
_807 = ((frost$collections$CollectionView*) _794);
ITable* $tmp504 = _807->$class->itable;
while ($tmp504->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp504 = $tmp504->next;
}
_808 = $tmp504->methods[0];
_809 = _808(_807);
_810 = _795.value;
_811 = _809.value;
_812 = _810 < _811;
_813 = (frost$core$Bit) {_812};
_814 = _813.value;
if (_814) goto block102; else goto block103;
block103:;
_816 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s505, _816, &$s506);
abort(); // unreachable
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_820 = &_794->data;
_821 = *_820;
_822 = _821.value;
_823 = frost$core$Int64$init$frost$core$Int(_795);
_824 = _823.value;
_825 = _798;
frost$core$Frost$ref$frost$core$Object$Q(_825);
_827 = ((frost$core$Object**)_822)[_824];
_828 = _827;
frost$core$Frost$unref$frost$core$Object$Q(_828);
((frost$core$Object**)_822)[_824] = _798;
_832 = _798;
frost$core$Frost$unref$frost$core$Object$Q(_832);
goto block94;
block94:;
goto block1;
block91:;
_836 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:619:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_839 = _9.value;
_840 = _836.value;
_841 = _839 == _840;
_842 = (frost$core$Bit) {_841};
_844 = _842.value;
if (_844) goto block105; else goto block106;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:620
_847 = *(&local0);
_848 = *(&local1);
_849 = _847.value;
_850 = _848.value;
_851 = _849 != _850;
_852 = (frost$core$Bit) {_851};
_853 = _852.value;
if (_853) goto block108; else goto block110;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:621
_856 = &param1->statements;
_857 = *_856;
_858 = param2.value;
_859 = (frost$core$Int64) {1u};
_860 = ((frost$core$Int64$nullable) { _859, true });
frost$core$Object* $tmp507;
if (_860.nonnull) {
    frost$core$Int64$wrapper* $tmp508;
    $tmp508 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp508->value = ((frost$core$Int64) _860.value);
    $tmp507 = ((frost$core$Object*) $tmp508);
}
else {
    $tmp507 = NULL;
}
_861 = $tmp507;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:621:39
_863 = (frost$core$Int) {0u};
_864 = _858.value;
_865 = _863.value;
_866 = _864 >= _865;
_867 = (frost$core$Bit) {_866};
_868 = _867.value;
if (_868) goto block114; else goto block113;
block114:;
_870 = ((frost$collections$CollectionView*) _857);
ITable* $tmp509 = _870->$class->itable;
while ($tmp509->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp509 = $tmp509->next;
}
_871 = $tmp509->methods[0];
_872 = _871(_870);
_873 = _858.value;
_874 = _872.value;
_875 = _873 < _874;
_876 = (frost$core$Bit) {_875};
_877 = _876.value;
if (_877) goto block112; else goto block113;
block113:;
_879 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s510, _879, &$s511);
abort(); // unreachable
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_883 = &_857->data;
_884 = *_883;
_885 = _884.value;
_886 = frost$core$Int64$init$frost$core$Int(_858);
_887 = _886.value;
_888 = _861;
frost$core$Frost$ref$frost$core$Object$Q(_888);
_890 = ((frost$core$Object**)_885)[_887];
_891 = _890;
frost$core$Frost$unref$frost$core$Object$Q(_891);
((frost$core$Object**)_885)[_887] = _861;
_895 = _861;
frost$core$Frost$unref$frost$core$Object$Q(_895);
goto block109;
block110:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:624
_900 = &param1->statements;
_901 = *_900;
_902 = param2.value;
_903 = (frost$core$Int64) {0u};
_904 = ((frost$core$Int64$nullable) { _903, true });
frost$core$Object* $tmp512;
if (_904.nonnull) {
    frost$core$Int64$wrapper* $tmp513;
    $tmp513 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp513->value = ((frost$core$Int64) _904.value);
    $tmp512 = ((frost$core$Object*) $tmp513);
}
else {
    $tmp512 = NULL;
}
_905 = $tmp512;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:624:39
_907 = (frost$core$Int) {0u};
_908 = _902.value;
_909 = _907.value;
_910 = _908 >= _909;
_911 = (frost$core$Bit) {_910};
_912 = _911.value;
if (_912) goto block118; else goto block117;
block118:;
_914 = ((frost$collections$CollectionView*) _901);
ITable* $tmp514 = _914->$class->itable;
while ($tmp514->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp514 = $tmp514->next;
}
_915 = $tmp514->methods[0];
_916 = _915(_914);
_917 = _902.value;
_918 = _916.value;
_919 = _917 < _918;
_920 = (frost$core$Bit) {_919};
_921 = _920.value;
if (_921) goto block116; else goto block117;
block117:;
_923 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s515, _923, &$s516);
abort(); // unreachable
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_927 = &_901->data;
_928 = *_927;
_929 = _928.value;
_930 = frost$core$Int64$init$frost$core$Int(_902);
_931 = _930.value;
_932 = _905;
frost$core$Frost$ref$frost$core$Object$Q(_932);
_934 = ((frost$core$Object**)_929)[_931];
_935 = _934;
frost$core$Frost$unref$frost$core$Object$Q(_935);
((frost$core$Object**)_929)[_931] = _905;
_939 = _905;
frost$core$Frost$unref$frost$core$Object$Q(_939);
goto block109;
block109:;
goto block1;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:628
_944 = (frost$core$Int) {628u};
org$frostlang$frostc$expression$Binary$Operator$wrapper* $tmp517;
$tmp517 = (org$frostlang$frostc$expression$Binary$Operator$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$expression$Binary$Operator$wrapper), (frost$core$Class*) &org$frostlang$frostc$expression$Binary$Operator$wrapperclass);
$tmp517->value = param4;
_945 = ((frost$core$Object*) $tmp517);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:628:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_948 = ($fn518) _945->$class->vtable[0];
_949 = _948(_945);
_950 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s519, _949);
_951 = ((frost$core$Object*) _950);
frost$core$Frost$ref$frost$core$Object$Q(_951);
_953 = ((frost$core$Object*) _950);
frost$core$Frost$unref$frost$core$Object$Q(_953);
_955 = ((frost$core$Object*) _949);
frost$core$Frost$unref$frost$core$Object$Q(_955);
_958 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_950, &$s520);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s521, _944, _958);
_960 = ((frost$core$Object*) _958);
frost$core$Frost$unref$frost$core$Object$Q(_960);
_962 = ((frost$core$Object*) _950);
frost$core$Frost$unref$frost$core$Object$Q(_962);
_964 = _945;
frost$core$Frost$unref$frost$core$Object$Q(_964);
abort(); // unreachable
block1:;
return;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$call$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(void* rawSelf, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$FixedArray* param2) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

$fn522 _1;
frost$core$Int64 _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:634
_1 = ($fn523) param0->$class->vtable[24];
_2 = _1(param0, param1, param2, ((frost$core$Int64$nullable) { .nonnull = false }));
return _2;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$call$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$frost$core$Int64$Q$R$frost$core$Int64(void* rawSelf, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$FixedArray* param2, frost$core$Int64$nullable param3) {
org$frostlang$frostc$Interpreter* param0 = (org$frostlang$frostc$Interpreter*) rawSelf;

org$frostlang$frostc$Interpreter$MethodCode* local0 = NULL;
frost$core$Int local1;
org$frostlang$frostc$Interpreter$Context* local2 = NULL;
frost$core$Int local3;
frost$core$Int local4;
frost$core$Int local5;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$IR$Statement* local7 = NULL;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$expression$Binary$Operator local9;
org$frostlang$frostc$IR$Value* local10 = NULL;
org$frostlang$frostc$IR$Block$ID local11;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$Type* local13 = NULL;
org$frostlang$frostc$IR$Value* local14 = NULL;
org$frostlang$frostc$IR$Block$ID local15;
org$frostlang$frostc$IR$Block$ID local16;
org$frostlang$frostc$ClassDecl* local17 = NULL;
frost$unsafe$Pointer local18;
frost$unsafe$Pointer local19;
frost$unsafe$Pointer local20;
int64_t local21;
int64_t local22;
frost$unsafe$Pointer local23;
frost$unsafe$Pointer local24;
org$frostlang$frostc$ClassDecl* local25 = NULL;
org$frostlang$frostc$FixedArray* local26 = NULL;
org$frostlang$frostc$IR$Value* local27 = NULL;
org$frostlang$frostc$FixedArray* local28 = NULL;
org$frostlang$frostc$IR$Value* local29 = NULL;
org$frostlang$frostc$FieldDecl* local30 = NULL;
org$frostlang$frostc$IR$Value* local31 = NULL;
org$frostlang$frostc$FieldDecl* local32 = NULL;
org$frostlang$frostc$IR$Value* local33 = NULL;
frost$core$Int local34;
org$frostlang$frostc$IR$Value* local35 = NULL;
frost$unsafe$Pointer local36;
org$frostlang$frostc$IR$Value* local37 = NULL;
org$frostlang$frostc$IR$Value* local38 = NULL;
org$frostlang$frostc$IR$Value* local39 = NULL;
org$frostlang$frostc$Type* local40 = NULL;
frost$unsafe$Pointer local41;
frost$core$Int local42;
frost$core$Int local43;
org$frostlang$frostc$IR$Value* local44 = NULL;
org$frostlang$frostc$IR$Value* local45 = NULL;
org$frostlang$frostc$IR$Value* local46 = NULL;
org$frostlang$frostc$Type* local47 = NULL;
frost$unsafe$Pointer local48;
frost$core$Int64 local49;
frost$core$Int local50;
frost$core$Int local51;
org$frostlang$frostc$IR$Value* local52 = NULL;
org$frostlang$frostc$MethodDecl* local53 = NULL;
org$frostlang$frostc$FixedArray* local54 = NULL;
org$frostlang$frostc$IR$Value* local55 = NULL;
org$frostlang$frostc$IR$Value* local56 = NULL;
frost$core$Int64 local57;
frost$core$Int64 local58;
frost$collections$IdentityMap** _1;
frost$collections$IdentityMap* _2;
frost$core$Object* _3;
frost$core$Object* _4;
org$frostlang$frostc$Interpreter$MethodCode* _5;
frost$core$Object* _7;
org$frostlang$frostc$Interpreter$MethodCode* _9;
frost$core$Object* _10;
frost$core$Object* _13;
org$frostlang$frostc$Interpreter$MethodCode* _16;
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
org$frostlang$frostc$Interpreter$MethodCode* _91;
frost$core$Object* _92;
org$frostlang$frostc$Interpreter$MethodCode* _94;
frost$core$Object* _95;
frost$core$Object* _98;
org$frostlang$frostc$Interpreter$MethodCode* _101;
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
$fn524 _128;
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
$fn525 _144;
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
$fn526 _161;
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
$fn527 _181;
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
$fn528 _209;
frost$core$Int64 _210;
frost$core$Object* _211;
org$frostlang$frostc$Interpreter$MethodCode* _213;
frost$core$Object* _214;
org$frostlang$frostc$Interpreter$Context* _221;
org$frostlang$frostc$Interpreter$MethodCode* _222;
bool _223;
frost$core$Bit _224;
bool _225;
frost$core$Int _227;
org$frostlang$frostc$Interpreter$MethodCode* _230;
frost$core$Object* _233;
org$frostlang$frostc$Interpreter$Context* _235;
frost$core$Object* _236;
frost$core$Object* _239;
bool _242;
frost$core$Bit _243;
bool _244;
org$frostlang$frostc$Interpreter$Context* _247;
frost$collections$Array** _248;
frost$collections$Array* _249;
bool _250;
frost$core$Bit _251;
bool _252;
frost$core$Int _254;
frost$core$Int64 _257;
frost$core$Object* _258;
frost$core$Object* _260;
frost$core$Int _263;
frost$core$Int _268;
frost$core$Int _272;
frost$collections$CollectionView* _273;
$fn529 _274;
frost$core$Int _275;
frost$core$Bit _276;
frost$core$Range$LTfrost$core$Int$GT _277;
frost$core$Int _278;
frost$core$Int _280;
frost$core$Bit _281;
bool _282;
frost$core$Int _283;
int64_t _285;
int64_t _286;
bool _287;
frost$core$Bit _288;
bool _289;
int64_t _291;
int64_t _292;
bool _293;
frost$core$Bit _294;
bool _295;
org$frostlang$frostc$Interpreter$Context* _298;
frost$collections$Array** _299;
frost$collections$Array* _300;
frost$collections$Stack** _301;
frost$collections$Stack* _302;
frost$core$Int _303;
frost$core$Int _305;
int64_t _306;
int64_t _307;
bool _308;
frost$core$Bit _309;
bool _310;
frost$collections$Array** _314;
frost$collections$Array* _315;
frost$collections$CollectionView* _316;
$fn530 _317;
frost$core$Int _318;
int64_t _320;
int64_t _321;
bool _322;
frost$core$Bit _323;
bool _324;
frost$core$Int _326;
frost$collections$Array** _330;
frost$collections$Array* _331;
frost$collections$CollectionView* _332;
$fn531 _333;
frost$core$Int _334;
int64_t _335;
int64_t _336;
bool _337;
frost$core$Bit _338;
bool _339;
frost$core$Int _341;
frost$collections$Array** _345;
frost$collections$Array* _346;
frost$collections$Array** _347;
frost$collections$Array* _348;
frost$collections$CollectionView* _349;
$fn532 _350;
frost$core$Int _351;
frost$core$Int _352;
int64_t _353;
int64_t _354;
int64_t _355;
frost$core$Int _356;
int64_t _357;
int64_t _358;
int64_t _359;
frost$core$Int _360;
frost$core$Int _362;
int64_t _363;
int64_t _364;
bool _365;
frost$core$Bit _366;
bool _367;
frost$collections$CollectionView* _369;
$fn533 _370;
frost$core$Int _371;
int64_t _372;
int64_t _373;
bool _374;
frost$core$Bit _375;
bool _376;
frost$core$Int _378;
frost$unsafe$Pointer* _382;
frost$unsafe$Pointer _383;
int64_t _384;
frost$core$Int64 _385;
int64_t _386;
frost$core$Object* _387;
frost$core$Object* _388;
frost$core$Object* _391;
frost$core$Object* _392;
frost$core$Object* _394;
org$frostlang$frostc$Interpreter$Context* _397;
frost$core$Int _398;
frost$core$Object* _399;
org$frostlang$frostc$IR$Value* _400;
$fn534 _401;
frost$core$Int64 _402;
frost$core$Object* _403;
frost$core$Object* _405;
frost$core$Object* _407;
frost$core$Object* _409;
frost$core$Int _412;
int64_t _413;
int64_t _414;
int64_t _415;
frost$core$Int _416;
int64_t _418;
int64_t _419;
bool _420;
frost$core$Bit _421;
bool _422;
int64_t _424;
int64_t _425;
bool _426;
frost$core$Bit _427;
bool _428;
int64_t _430;
int64_t _431;
int64_t _432;
frost$core$Int _433;
frost$collections$Stack** _437;
frost$collections$Stack* _438;
org$frostlang$frostc$Interpreter$Context* _439;
frost$core$Object* _440;
frost$collections$Array** _443;
frost$collections$Array* _444;
frost$core$Object* _445;
frost$core$Int _449;
frost$core$Int _452;
org$frostlang$frostc$Interpreter$MethodCode* _457;
bool _458;
frost$core$Bit _459;
bool _460;
frost$core$Int _462;
org$frostlang$frostc$Interpreter$MethodCode* _465;
frost$collections$Array** _466;
frost$collections$Array* _467;
frost$core$Int _468;
frost$core$Int _470;
int64_t _471;
int64_t _472;
bool _473;
frost$core$Bit _474;
bool _475;
frost$collections$CollectionView* _477;
$fn535 _478;
frost$core$Int _479;
int64_t _480;
int64_t _481;
bool _482;
frost$core$Bit _483;
bool _484;
frost$core$Int _486;
frost$unsafe$Pointer* _490;
frost$unsafe$Pointer _491;
int64_t _492;
frost$core$Int64 _493;
int64_t _494;
frost$core$Object* _495;
frost$core$Object* _496;
frost$collections$Array* _499;
frost$core$Int _500;
frost$core$Int _502;
int64_t _503;
int64_t _504;
bool _505;
frost$core$Bit _506;
bool _507;
frost$collections$CollectionView* _509;
$fn536 _510;
frost$core$Int _511;
int64_t _512;
int64_t _513;
bool _514;
frost$core$Bit _515;
bool _516;
frost$core$Int _518;
frost$unsafe$Pointer* _522;
frost$unsafe$Pointer _523;
int64_t _524;
frost$core$Int64 _525;
int64_t _526;
frost$core$Object* _527;
frost$core$Object* _528;
org$frostlang$frostc$IR$Statement$ID _531;
frost$core$Object* _533;
frost$core$Object* _535;
org$frostlang$frostc$Interpreter$MethodCode* _538;
bool _539;
frost$core$Bit _540;
bool _541;
frost$core$Int _543;
org$frostlang$frostc$Interpreter$MethodCode* _546;
frost$collections$Array** _547;
frost$collections$Array* _548;
frost$core$Int _549;
frost$core$Int _551;
int64_t _552;
int64_t _553;
bool _554;
frost$core$Bit _555;
bool _556;
frost$collections$CollectionView* _558;
$fn537 _559;
frost$core$Int _560;
int64_t _561;
int64_t _562;
bool _563;
frost$core$Bit _564;
bool _565;
frost$core$Int _567;
frost$unsafe$Pointer* _571;
frost$unsafe$Pointer _572;
int64_t _573;
frost$core$Int64 _574;
int64_t _575;
frost$core$Object* _576;
frost$core$Object* _577;
frost$collections$Array* _580;
frost$core$Int _581;
frost$core$Int _583;
int64_t _584;
int64_t _585;
bool _586;
frost$core$Bit _587;
bool _588;
frost$collections$CollectionView* _590;
$fn538 _591;
frost$core$Int _592;
int64_t _593;
int64_t _594;
bool _595;
frost$core$Bit _596;
bool _597;
frost$core$Int _599;
frost$unsafe$Pointer* _603;
frost$unsafe$Pointer _604;
int64_t _605;
frost$core$Int64 _606;
int64_t _607;
frost$core$Object* _608;
frost$core$Object* _609;
org$frostlang$frostc$IR$Statement* _612;
frost$core$Object* _614;
org$frostlang$frostc$IR$Statement* _616;
frost$core$Object* _617;
frost$core$Object* _620;
frost$core$Object* _622;
org$frostlang$frostc$IR$Statement* _625;
frost$core$Object* _626;
$fn539 _629;
frost$core$String* _630;
frost$core$Object* _637;
org$frostlang$frostc$IR$Statement* _641;
frost$core$Int* _642;
frost$core$Int _643;
frost$core$Int _644;
int64_t _647;
int64_t _648;
bool _649;
frost$core$Bit _650;
bool _652;
org$frostlang$frostc$MethodPosition* _654;
org$frostlang$frostc$MethodPosition _655;
org$frostlang$frostc$IR$Value** _656;
org$frostlang$frostc$IR$Value* _657;
frost$core$Object* _659;
org$frostlang$frostc$IR$Value* _661;
frost$core$Object* _662;
org$frostlang$frostc$expression$Binary$Operator* _665;
org$frostlang$frostc$expression$Binary$Operator _666;
org$frostlang$frostc$IR$Value** _668;
org$frostlang$frostc$IR$Value* _669;
frost$core$Object* _671;
org$frostlang$frostc$IR$Value* _673;
frost$core$Object* _674;
org$frostlang$frostc$Type** _677;
org$frostlang$frostc$Type* _678;
org$frostlang$frostc$Interpreter$Context* _680;
org$frostlang$frostc$IR$Statement$ID _681;
org$frostlang$frostc$IR$Value* _682;
org$frostlang$frostc$expression$Binary$Operator _683;
org$frostlang$frostc$IR$Value* _684;
$fn540 _685;
org$frostlang$frostc$IR$Value* _687;
frost$core$Object* _688;
org$frostlang$frostc$IR$Value* _691;
frost$core$Object* _692;
frost$core$Int _696;
int64_t _699;
int64_t _700;
bool _701;
frost$core$Bit _702;
bool _704;
org$frostlang$frostc$MethodPosition* _706;
org$frostlang$frostc$MethodPosition _707;
org$frostlang$frostc$IR$Block$ID* _708;
org$frostlang$frostc$IR$Block$ID _709;
org$frostlang$frostc$Interpreter$MethodCode* _712;
bool _713;
frost$core$Bit _714;
bool _715;
frost$core$Int _717;
org$frostlang$frostc$Interpreter$MethodCode* _720;
frost$collections$Array** _721;
frost$collections$Array* _722;
org$frostlang$frostc$IR$Block$ID _723;
frost$core$Int _724;
frost$core$Int _726;
int64_t _727;
int64_t _728;
bool _729;
frost$core$Bit _730;
bool _731;
frost$collections$CollectionView* _733;
$fn541 _734;
frost$core$Int _735;
int64_t _736;
int64_t _737;
bool _738;
frost$core$Bit _739;
bool _740;
frost$core$Int _742;
frost$unsafe$Pointer* _746;
frost$unsafe$Pointer _747;
int64_t _748;
frost$core$Int64 _749;
int64_t _750;
frost$core$Object* _751;
frost$core$Object* _752;
frost$core$Int _755;
frost$core$Object* _757;
frost$core$Int _760;
org$frostlang$frostc$IR$Statement* _763;
frost$core$Object* _764;
frost$core$Int _768;
int64_t _771;
int64_t _772;
bool _773;
frost$core$Bit _774;
bool _776;
org$frostlang$frostc$MethodPosition* _778;
org$frostlang$frostc$MethodPosition _779;
org$frostlang$frostc$IR$Value** _780;
org$frostlang$frostc$IR$Value* _781;
frost$core$Object* _783;
org$frostlang$frostc$IR$Value* _785;
frost$core$Object* _786;
org$frostlang$frostc$Type** _789;
org$frostlang$frostc$Type* _790;
frost$core$Object* _792;
org$frostlang$frostc$Type* _794;
frost$core$Object* _795;
frost$core$Bit* _798;
frost$core$Bit _799;
org$frostlang$frostc$Interpreter$Context* _801;
org$frostlang$frostc$IR$Statement$ID _802;
org$frostlang$frostc$IR$Value* _803;
org$frostlang$frostc$Type* _804;
$fn542 _805;
org$frostlang$frostc$Type* _807;
frost$core$Object* _808;
org$frostlang$frostc$IR$Value* _811;
frost$core$Object* _812;
frost$core$Int _816;
int64_t _819;
int64_t _820;
bool _821;
frost$core$Bit _822;
bool _824;
frost$core$Int _827;
int64_t _830;
int64_t _831;
bool _832;
frost$core$Bit _833;
bool _835;
org$frostlang$frostc$MethodPosition* _837;
org$frostlang$frostc$MethodPosition _838;
org$frostlang$frostc$IR$Value** _839;
org$frostlang$frostc$IR$Value* _840;
frost$core$Object* _842;
org$frostlang$frostc$IR$Value* _844;
frost$core$Object* _845;
org$frostlang$frostc$IR$Block$ID* _848;
org$frostlang$frostc$IR$Block$ID _849;
org$frostlang$frostc$IR$Block$ID* _851;
org$frostlang$frostc$IR$Block$ID _852;
org$frostlang$frostc$Interpreter$Context* _855;
org$frostlang$frostc$IR$Value* _856;
$fn543 _857;
frost$core$Int64 _858;
frost$core$Int64 _859;
int64_t _860;
int64_t _861;
bool _862;
frost$core$Bit _863;
bool _864;
org$frostlang$frostc$Interpreter$MethodCode* _867;
bool _868;
frost$core$Bit _869;
bool _870;
frost$core$Int _872;
org$frostlang$frostc$Interpreter$MethodCode* _875;
frost$collections$Array** _876;
frost$collections$Array* _877;
org$frostlang$frostc$IR$Block$ID _878;
frost$core$Int _879;
frost$core$Int _881;
int64_t _882;
int64_t _883;
bool _884;
frost$core$Bit _885;
bool _886;
frost$collections$CollectionView* _888;
$fn544 _889;
frost$core$Int _890;
int64_t _891;
int64_t _892;
bool _893;
frost$core$Bit _894;
bool _895;
frost$core$Int _897;
frost$unsafe$Pointer* _901;
frost$unsafe$Pointer _902;
int64_t _903;
frost$core$Int64 _904;
int64_t _905;
frost$core$Object* _906;
frost$core$Object* _907;
frost$core$Int _910;
frost$core$Object* _912;
org$frostlang$frostc$Interpreter$MethodCode* _917;
bool _918;
frost$core$Bit _919;
bool _920;
frost$core$Int _922;
org$frostlang$frostc$Interpreter$MethodCode* _925;
frost$collections$Array** _926;
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
$fn545 _939;
frost$core$Int _940;
int64_t _941;
int64_t _942;
bool _943;
frost$core$Bit _944;
bool _945;
frost$core$Int _947;
frost$unsafe$Pointer* _951;
frost$unsafe$Pointer _952;
int64_t _953;
frost$core$Int64 _954;
int64_t _955;
frost$core$Object* _956;
frost$core$Object* _957;
frost$core$Int _960;
frost$core$Object* _962;
frost$core$Int _966;
org$frostlang$frostc$IR$Value* _969;
frost$core$Object* _970;
org$frostlang$frostc$IR$Statement* _973;
frost$core$Object* _974;
frost$core$Int _978;
int64_t _981;
int64_t _982;
bool _983;
frost$core$Bit _984;
bool _986;
org$frostlang$frostc$MethodPosition* _988;
org$frostlang$frostc$MethodPosition _989;
org$frostlang$frostc$ClassDecl** _990;
org$frostlang$frostc$ClassDecl* _991;
frost$core$Object* _993;
org$frostlang$frostc$ClassDecl* _995;
frost$core$Object* _996;
org$frostlang$frostc$MemoryLayout** _1000;
org$frostlang$frostc$MemoryLayout* _1001;
org$frostlang$frostc$ClassDecl* _1002;
org$frostlang$frostc$Type** _1003;
org$frostlang$frostc$Type* _1004;
$fn546 _1005;
frost$core$Int _1006;
int64_t _1009;
int64_t _1010;
int64_t _1011;
int64_t* _1014;
frost$unsafe$Pointer _1016;
frost$unsafe$Pointer _1019;
frost$unsafe$Pointer _1023;
int64_t _1024;
org$frostlang$frostc$ClassDecl* _1025;
frost$core$Object* _1026;
org$frostlang$frostc$ClassDecl* _1028;
frost$core$Object* _1029;
frost$unsafe$Pointer _1033;
org$frostlang$frostc$MemoryLayout** _1034;
org$frostlang$frostc$MemoryLayout* _1035;
$fn547 _1036;
frost$core$Int _1037;
int64_t _1040;
int64_t _1045;
int64_t _1046;
int64_t _1047;
int64_t _1048;
int64_t _1049;
int64_t* _1052;
frost$unsafe$Pointer _1054;
frost$unsafe$Pointer _1057;
int64_t _1061;
frost$core$Int _1062;
frost$unsafe$Pointer _1064;
int64_t _1065;
frost$core$Int32 _1066;
org$frostlang$frostc$Interpreter$Context* _1069;
frost$collections$Array** _1070;
frost$collections$Array* _1071;
org$frostlang$frostc$IR$Statement$ID _1072;
frost$core$Int _1073;
frost$unsafe$Pointer _1074;
int64_t _1077;
frost$core$Int _1078;
int64_t _1082;
int64_t _1083;
frost$core$Int64 _1084;
frost$core$Int64$nullable _1086;
frost$core$Object* _1087;
frost$core$Int _1089;
int64_t _1090;
int64_t _1091;
bool _1092;
frost$core$Bit _1093;
bool _1094;
frost$collections$CollectionView* _1096;
$fn548 _1097;
frost$core$Int _1098;
int64_t _1099;
int64_t _1100;
bool _1101;
frost$core$Bit _1102;
bool _1103;
frost$core$Int _1105;
frost$unsafe$Pointer* _1109;
frost$unsafe$Pointer _1110;
int64_t _1111;
frost$core$Int64 _1112;
int64_t _1113;
frost$core$Object* _1114;
frost$core$Object* _1116;
frost$core$Object* _1117;
frost$core$Object* _1121;
org$frostlang$frostc$ClassDecl* _1123;
frost$core$Object* _1124;
frost$core$Int _1128;
int64_t _1131;
int64_t _1132;
bool _1133;
frost$core$Bit _1134;
bool _1136;
org$frostlang$frostc$MethodPosition* _1138;
org$frostlang$frostc$MethodPosition _1139;
org$frostlang$frostc$ClassDecl** _1140;
org$frostlang$frostc$ClassDecl* _1141;
frost$core$Object* _1143;
org$frostlang$frostc$ClassDecl* _1145;
frost$core$Object* _1146;
org$frostlang$frostc$FixedArray** _1149;
org$frostlang$frostc$FixedArray* _1150;
frost$core$Object* _1152;
org$frostlang$frostc$FixedArray* _1154;
frost$core$Object* _1155;
org$frostlang$frostc$Interpreter$Context* _1159;
org$frostlang$frostc$IR$Statement$ID _1160;
org$frostlang$frostc$ClassDecl* _1161;
org$frostlang$frostc$FixedArray* _1162;
$fn549 _1163;
org$frostlang$frostc$FixedArray* _1165;
frost$core$Object* _1166;
org$frostlang$frostc$ClassDecl* _1169;
frost$core$Object* _1170;
frost$core$Int _1174;
int64_t _1177;
int64_t _1178;
bool _1179;
frost$core$Bit _1180;
bool _1182;
org$frostlang$frostc$MethodPosition* _1184;
org$frostlang$frostc$MethodPosition _1185;
org$frostlang$frostc$IR$Value** _1186;
org$frostlang$frostc$IR$Value* _1187;
frost$core$Object* _1189;
org$frostlang$frostc$IR$Value* _1191;
frost$core$Object* _1192;
org$frostlang$frostc$FixedArray** _1195;
org$frostlang$frostc$FixedArray* _1196;
frost$core$Object* _1198;
org$frostlang$frostc$FixedArray* _1200;
frost$core$Object* _1201;
frost$core$Int _1205;
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
$fn550 _1243;
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
org$frostlang$frostc$FieldDecl** _1275;
org$frostlang$frostc$FieldDecl* _1276;
frost$core$Object* _1278;
org$frostlang$frostc$FieldDecl* _1280;
frost$core$Object* _1281;
org$frostlang$frostc$Interpreter$Context* _1285;
org$frostlang$frostc$IR$Statement$ID _1286;
org$frostlang$frostc$IR$Value* _1287;
org$frostlang$frostc$FieldDecl* _1288;
$fn551 _1289;
org$frostlang$frostc$FieldDecl* _1291;
frost$core$Object* _1292;
org$frostlang$frostc$IR$Value* _1295;
frost$core$Object* _1296;
frost$core$Int _1300;
int64_t _1303;
int64_t _1304;
bool _1305;
frost$core$Bit _1306;
bool _1308;
org$frostlang$frostc$MethodPosition* _1310;
org$frostlang$frostc$MethodPosition _1311;
org$frostlang$frostc$IR$Value** _1312;
org$frostlang$frostc$IR$Value* _1313;
frost$core$Object* _1315;
org$frostlang$frostc$IR$Value* _1317;
frost$core$Object* _1318;
frost$core$Int* _1321;
frost$core$Int _1322;
org$frostlang$frostc$Type** _1324;
org$frostlang$frostc$Type* _1325;
frost$core$Int _1327;
frost$core$Int _1330;
int64_t _1333;
int64_t _1334;
bool _1335;
frost$core$Bit _1336;
bool _1338;
org$frostlang$frostc$MethodPosition* _1340;
org$frostlang$frostc$MethodPosition _1341;
org$frostlang$frostc$IR$Value** _1342;
org$frostlang$frostc$IR$Value* _1343;
frost$core$Object* _1345;
org$frostlang$frostc$IR$Value* _1347;
frost$core$Object* _1348;
org$frostlang$frostc$Interpreter$Context* _1352;
org$frostlang$frostc$IR$Value* _1353;
$fn552 _1354;
frost$core$Int64 _1355;
int64_t _1358;
int64_t _1359;
frost$core$Int _1360;
frost$unsafe$Pointer _1362;
org$frostlang$frostc$IR$Value* _1365;
$fn553 _1366;
org$frostlang$frostc$Type* _1367;
$fn554 _1368;
frost$core$Bit _1369;
bool _1370;
frost$core$Object* _1371;
org$frostlang$frostc$Interpreter$Context* _1375;
frost$collections$Array** _1376;
frost$collections$Array* _1377;
org$frostlang$frostc$IR$Statement$ID _1378;
frost$core$Int _1379;
frost$unsafe$Pointer _1380;
int64_t _1383;
frost$core$Int _1384;
frost$core$Int64 _1386;
frost$core$Int64$nullable _1387;
frost$core$Object* _1388;
frost$core$Int _1390;
int64_t _1391;
int64_t _1392;
bool _1393;
frost$core$Bit _1394;
bool _1395;
frost$collections$CollectionView* _1397;
$fn555 _1398;
frost$core$Int _1399;
int64_t _1400;
int64_t _1401;
bool _1402;
frost$core$Bit _1403;
bool _1404;
frost$core$Int _1406;
frost$unsafe$Pointer* _1410;
frost$unsafe$Pointer _1411;
int64_t _1412;
frost$core$Int64 _1413;
int64_t _1414;
frost$core$Object* _1415;
frost$core$Object* _1417;
frost$core$Object* _1418;
frost$core$Object* _1422;
org$frostlang$frostc$Interpreter$Context* _1427;
frost$collections$Array** _1428;
frost$collections$Array* _1429;
org$frostlang$frostc$IR$Statement$ID _1430;
frost$core$Int _1431;
frost$unsafe$Pointer _1432;
int64_t _1433;
frost$core$Int _1434;
frost$core$Int64 _1435;
frost$core$Int64$nullable _1436;
frost$core$Object* _1437;
frost$core$Int _1439;
int64_t _1440;
int64_t _1441;
bool _1442;
frost$core$Bit _1443;
bool _1444;
frost$collections$CollectionView* _1446;
$fn556 _1447;
frost$core$Int _1448;
int64_t _1449;
int64_t _1450;
bool _1451;
frost$core$Bit _1452;
bool _1453;
frost$core$Int _1455;
frost$unsafe$Pointer* _1459;
frost$unsafe$Pointer _1460;
int64_t _1461;
frost$core$Int64 _1462;
int64_t _1463;
frost$core$Object* _1464;
frost$core$Object* _1466;
frost$core$Object* _1467;
frost$core$Object* _1471;
org$frostlang$frostc$IR$Value* _1474;
frost$core$Object* _1475;
frost$core$Int _1479;
int64_t _1482;
int64_t _1483;
bool _1484;
frost$core$Bit _1485;
bool _1487;
org$frostlang$frostc$MethodPosition* _1489;
org$frostlang$frostc$MethodPosition _1490;
org$frostlang$frostc$IR$Value** _1491;
org$frostlang$frostc$IR$Value* _1492;
frost$core$Object* _1494;
org$frostlang$frostc$IR$Value* _1496;
frost$core$Object* _1497;
org$frostlang$frostc$Interpreter$Context* _1501;
frost$collections$Array** _1502;
frost$collections$Array* _1503;
org$frostlang$frostc$IR$Statement$ID _1504;
frost$core$Int _1505;
org$frostlang$frostc$Interpreter$Context* _1506;
org$frostlang$frostc$IR$Value* _1507;
$fn557 _1508;
frost$core$Int64 _1509;
int64_t _1512;
int64_t _1513;
frost$core$Int64 _1514;
frost$core$Int64$nullable _1516;
frost$core$Object* _1517;
frost$core$Int _1519;
int64_t _1520;
int64_t _1521;
bool _1522;
frost$core$Bit _1523;
bool _1524;
frost$collections$CollectionView* _1526;
$fn558 _1527;
frost$core$Int _1528;
int64_t _1529;
int64_t _1530;
bool _1531;
frost$core$Bit _1532;
bool _1533;
frost$core$Int _1535;
frost$unsafe$Pointer* _1539;
frost$unsafe$Pointer _1540;
int64_t _1541;
frost$core$Int64 _1542;
int64_t _1543;
frost$core$Object* _1544;
frost$core$Object* _1546;
frost$core$Object* _1547;
frost$core$Object* _1551;
org$frostlang$frostc$IR$Value* _1553;
frost$core$Object* _1554;
frost$core$Int _1558;
int64_t _1561;
int64_t _1562;
bool _1563;
frost$core$Bit _1564;
bool _1566;
org$frostlang$frostc$MethodPosition* _1568;
org$frostlang$frostc$MethodPosition _1569;
org$frostlang$frostc$IR$Value** _1570;
org$frostlang$frostc$IR$Value* _1571;
frost$core$Object* _1573;
org$frostlang$frostc$IR$Value* _1575;
frost$core$Object* _1576;
org$frostlang$frostc$IR$Value** _1579;
org$frostlang$frostc$IR$Value* _1580;
frost$core$Object* _1582;
org$frostlang$frostc$IR$Value* _1584;
frost$core$Object* _1585;
org$frostlang$frostc$Type** _1588;
org$frostlang$frostc$Type* _1589;
frost$core$Object* _1591;
org$frostlang$frostc$Type* _1593;
frost$core$Object* _1594;
org$frostlang$frostc$Interpreter$Context* _1598;
org$frostlang$frostc$IR$Value* _1599;
$fn559 _1600;
frost$core$Int64 _1601;
org$frostlang$frostc$Interpreter$Context* _1602;
org$frostlang$frostc$IR$Value* _1603;
$fn560 _1604;
frost$core$Int64 _1605;
org$frostlang$frostc$MemoryLayout** _1606;
org$frostlang$frostc$MemoryLayout* _1607;
org$frostlang$frostc$Type* _1608;
$fn561 _1609;
frost$core$Int _1610;
frost$core$Int64 _1611;
int64_t _1612;
int64_t _1613;
int64_t _1614;
frost$core$Int64 _1615;
int64_t _1616;
int64_t _1617;
int64_t _1618;
frost$core$Int64 _1619;
int64_t _1622;
int64_t _1623;
frost$core$Int _1624;
frost$unsafe$Pointer _1626;
frost$unsafe$Pointer* _1629;
frost$unsafe$Pointer _1630;
int64_t _1631;
frost$core$Int64 _1632;
frost$core$Int _1635;
org$frostlang$frostc$MemoryLayout** _1636;
org$frostlang$frostc$MemoryLayout* _1637;
org$frostlang$frostc$Type* _1638;
$fn562 _1639;
frost$core$Int _1640;
frost$core$Int _1641;
int64_t _1644;
int64_t _1645;
bool _1646;
frost$core$Bit _1647;
bool _1648;
int64_t _1651;
frost$core$Int _1652;
int64_t _1656;
frost$core$Int _1657;
frost$core$Int _1660;
frost$core$Bit _1661;
frost$core$Range$LTfrost$core$Int$GT _1662;
frost$core$Int _1663;
frost$core$Int _1665;
frost$core$Bit _1666;
bool _1667;
frost$core$Int _1668;
int64_t _1670;
int64_t _1671;
bool _1672;
frost$core$Bit _1673;
bool _1674;
int64_t _1676;
int64_t _1677;
bool _1678;
frost$core$Bit _1679;
bool _1680;
frost$unsafe$Pointer* _1683;
frost$unsafe$Pointer _1684;
int64_t _1685;
frost$core$Int _1686;
frost$core$Int64 _1687;
frost$unsafe$Pointer _1688;
int64_t _1689;
frost$core$Int _1690;
frost$core$Int64 _1691;
int64_t _1692;
frost$core$UInt8 _1693;
int64_t _1694;
frost$core$Int _1697;
int64_t _1698;
int64_t _1699;
int64_t _1700;
frost$core$Int _1701;
int64_t _1703;
int64_t _1704;
bool _1705;
frost$core$Bit _1706;
bool _1707;
int64_t _1709;
int64_t _1710;
bool _1711;
frost$core$Bit _1712;
bool _1713;
int64_t _1715;
int64_t _1716;
int64_t _1717;
frost$core$Int _1718;
org$frostlang$frostc$Interpreter$Context* _1722;
frost$collections$Array** _1723;
frost$collections$Array* _1724;
org$frostlang$frostc$IR$Statement$ID _1725;
frost$core$Int _1726;
frost$unsafe$Pointer* _1727;
frost$unsafe$Pointer _1728;
int64_t _1729;
frost$core$Int64 _1730;
frost$core$Int64$nullable _1731;
frost$core$Object* _1732;
frost$core$Int _1734;
int64_t _1735;
int64_t _1736;
bool _1737;
frost$core$Bit _1738;
bool _1739;
frost$collections$CollectionView* _1741;
$fn563 _1742;
frost$core$Int _1743;
int64_t _1744;
int64_t _1745;
bool _1746;
frost$core$Bit _1747;
bool _1748;
frost$core$Int _1750;
frost$unsafe$Pointer* _1754;
frost$unsafe$Pointer _1755;
int64_t _1756;
frost$core$Int64 _1757;
int64_t _1758;
frost$core$Object* _1759;
frost$core$Object* _1761;
frost$core$Object* _1762;
frost$core$Object* _1766;
org$frostlang$frostc$Type* _1768;
frost$core$Object* _1769;
org$frostlang$frostc$IR$Value* _1772;
frost$core$Object* _1773;
org$frostlang$frostc$IR$Value* _1776;
frost$core$Object* _1777;
frost$core$Int _1781;
int64_t _1784;
int64_t _1785;
bool _1786;
frost$core$Bit _1787;
bool _1789;
org$frostlang$frostc$MethodPosition* _1791;
org$frostlang$frostc$MethodPosition _1792;
org$frostlang$frostc$IR$Value** _1793;
org$frostlang$frostc$IR$Value* _1794;
frost$core$Object* _1796;
org$frostlang$frostc$IR$Value* _1798;
frost$core$Object* _1799;
org$frostlang$frostc$IR$Value** _1802;
org$frostlang$frostc$IR$Value* _1803;
frost$core$Object* _1805;
org$frostlang$frostc$IR$Value* _1807;
frost$core$Object* _1808;
org$frostlang$frostc$IR$Value** _1811;
org$frostlang$frostc$IR$Value* _1812;
frost$core$Object* _1814;
org$frostlang$frostc$IR$Value* _1816;
frost$core$Object* _1817;
org$frostlang$frostc$Type** _1820;
org$frostlang$frostc$Type* _1821;
frost$core$Object* _1823;
org$frostlang$frostc$Type* _1825;
frost$core$Object* _1826;
org$frostlang$frostc$Interpreter$Context* _1830;
org$frostlang$frostc$IR$Value* _1831;
$fn564 _1832;
frost$core$Int64 _1833;
org$frostlang$frostc$Interpreter$Context* _1834;
org$frostlang$frostc$IR$Value* _1835;
$fn565 _1836;
frost$core$Int64 _1837;
org$frostlang$frostc$MemoryLayout** _1838;
org$frostlang$frostc$MemoryLayout* _1839;
org$frostlang$frostc$IR$Value* _1840;
$fn566 _1841;
org$frostlang$frostc$Type* _1842;
$fn567 _1843;
frost$core$Int _1844;
frost$core$Int64 _1845;
int64_t _1846;
int64_t _1847;
int64_t _1848;
frost$core$Int64 _1849;
int64_t _1850;
int64_t _1851;
int64_t _1852;
frost$core$Int64 _1853;
int64_t _1856;
int64_t _1857;
frost$core$Int _1858;
frost$unsafe$Pointer _1860;
frost$core$Object* _1862;
org$frostlang$frostc$Interpreter$Context* _1865;
org$frostlang$frostc$IR$Value* _1866;
$fn568 _1867;
frost$core$Int64 _1868;
frost$unsafe$Pointer* _1871;
frost$unsafe$Pointer _1872;
int64_t _1873;
frost$core$Int64 _1874;
frost$core$Int _1877;
org$frostlang$frostc$MemoryLayout** _1878;
org$frostlang$frostc$MemoryLayout* _1879;
org$frostlang$frostc$IR$Value* _1880;
$fn569 _1881;
org$frostlang$frostc$Type* _1882;
$fn570 _1883;
frost$core$Int _1884;
frost$core$Int _1885;
int64_t _1888;
int64_t _1889;
bool _1890;
frost$core$Bit _1891;
bool _1892;
int64_t _1895;
frost$core$Int _1896;
int64_t _1900;
frost$core$Int _1901;
frost$core$Int _1904;
frost$core$Bit _1905;
frost$core$Range$LTfrost$core$Int$GT _1906;
frost$core$Int _1907;
frost$core$Int _1909;
frost$core$Bit _1910;
bool _1911;
frost$core$Int _1912;
int64_t _1914;
int64_t _1915;
bool _1916;
frost$core$Bit _1917;
bool _1918;
int64_t _1920;
int64_t _1921;
bool _1922;
frost$core$Bit _1923;
bool _1924;
frost$unsafe$Pointer _1927;
int64_t _1928;
frost$core$Int _1929;
frost$core$Int64 _1930;
frost$unsafe$Pointer* _1931;
frost$unsafe$Pointer _1932;
int64_t _1933;
frost$core$Int _1934;
frost$core$Int64 _1935;
int64_t _1936;
frost$core$UInt8 _1937;
int64_t _1938;
frost$core$Int _1941;
int64_t _1942;
int64_t _1943;
int64_t _1944;
frost$core$Int _1945;
int64_t _1947;
int64_t _1948;
bool _1949;
frost$core$Bit _1950;
bool _1951;
int64_t _1953;
int64_t _1954;
bool _1955;
frost$core$Bit _1956;
bool _1957;
int64_t _1959;
int64_t _1960;
int64_t _1961;
frost$core$Int _1962;
frost$core$Object* _1965;
org$frostlang$frostc$Type* _1967;
frost$core$Object* _1968;
org$frostlang$frostc$IR$Value* _1971;
frost$core$Object* _1972;
org$frostlang$frostc$IR$Value* _1975;
frost$core$Object* _1976;
org$frostlang$frostc$IR$Value* _1979;
frost$core$Object* _1980;
frost$core$Int _1984;
int64_t _1987;
int64_t _1988;
bool _1989;
frost$core$Bit _1990;
bool _1992;
org$frostlang$frostc$MethodPosition* _1994;
org$frostlang$frostc$MethodPosition _1995;
org$frostlang$frostc$IR$Value** _1996;
org$frostlang$frostc$IR$Value* _1997;
frost$core$Object* _1999;
org$frostlang$frostc$IR$Value* _2001;
frost$core$Object* _2002;
frost$collections$Stack** _2006;
frost$collections$Stack* _2007;
frost$core$Object* _2008;
org$frostlang$frostc$Interpreter$Context* _2009;
frost$core$Object* _2010;
org$frostlang$frostc$IR$Value* _2013;
bool _2014;
frost$core$Bit _2015;
bool _2016;
org$frostlang$frostc$Interpreter$Context* _2019;
org$frostlang$frostc$IR$Value* _2020;
bool _2021;
frost$core$Bit _2022;
bool _2023;
frost$core$Int _2025;
org$frostlang$frostc$IR$Value* _2028;
$fn571 _2029;
frost$core$Int64 _2030;
org$frostlang$frostc$IR$Value* _2031;
frost$core$Object* _2032;
org$frostlang$frostc$IR$Statement* _2035;
frost$core$Object* _2036;
org$frostlang$frostc$Interpreter$Context* _2039;
frost$core$Object* _2040;
org$frostlang$frostc$Interpreter$MethodCode* _2043;
frost$core$Object* _2044;
frost$core$Int64 _2049;
org$frostlang$frostc$IR$Value* _2050;
frost$core$Object* _2051;
org$frostlang$frostc$IR$Statement* _2054;
frost$core$Object* _2055;
org$frostlang$frostc$Interpreter$Context* _2058;
frost$core$Object* _2059;
org$frostlang$frostc$Interpreter$MethodCode* _2062;
frost$core$Object* _2063;
frost$core$Int _2067;
int64_t _2070;
int64_t _2071;
bool _2072;
frost$core$Bit _2073;
bool _2075;
org$frostlang$frostc$MethodPosition* _2077;
org$frostlang$frostc$MethodPosition _2078;
org$frostlang$frostc$MethodDecl** _2079;
org$frostlang$frostc$MethodDecl* _2080;
frost$core$Object* _2082;
org$frostlang$frostc$MethodDecl* _2084;
frost$core$Object* _2085;
org$frostlang$frostc$FixedArray** _2088;
org$frostlang$frostc$FixedArray* _2089;
frost$core$Object* _2091;
org$frostlang$frostc$FixedArray* _2093;
frost$core$Object* _2094;
org$frostlang$frostc$Interpreter$Context* _2098;
frost$collections$Array** _2099;
frost$collections$Array* _2100;
org$frostlang$frostc$IR$Statement$ID _2101;
frost$core$Int _2102;
org$frostlang$frostc$MethodDecl* _2103;
org$frostlang$frostc$FixedArray* _2104;
$fn572 _2105;
frost$core$Int64 _2106;
frost$core$Int64$nullable _2107;
frost$core$Object* _2108;
frost$core$Int _2110;
int64_t _2111;
int64_t _2112;
bool _2113;
frost$core$Bit _2114;
bool _2115;
frost$collections$CollectionView* _2117;
$fn573 _2118;
frost$core$Int _2119;
int64_t _2120;
int64_t _2121;
bool _2122;
frost$core$Bit _2123;
bool _2124;
frost$core$Int _2126;
frost$unsafe$Pointer* _2130;
frost$unsafe$Pointer _2131;
int64_t _2132;
frost$core$Int64 _2133;
int64_t _2134;
frost$core$Object* _2135;
frost$core$Object* _2137;
frost$core$Object* _2138;
frost$core$Object* _2142;
org$frostlang$frostc$FixedArray* _2144;
frost$core$Object* _2145;
org$frostlang$frostc$MethodDecl* _2148;
frost$core$Object* _2149;
frost$core$Int _2153;
int64_t _2156;
int64_t _2157;
bool _2158;
frost$core$Bit _2159;
bool _2161;
org$frostlang$frostc$MethodPosition* _2163;
org$frostlang$frostc$MethodPosition _2164;
org$frostlang$frostc$IR$Value** _2165;
org$frostlang$frostc$IR$Value* _2166;
frost$core$Object* _2168;
org$frostlang$frostc$IR$Value* _2170;
frost$core$Object* _2171;
org$frostlang$frostc$IR$Value** _2174;
org$frostlang$frostc$IR$Value* _2175;
frost$core$Object* _2177;
org$frostlang$frostc$IR$Value* _2179;
frost$core$Object* _2180;
org$frostlang$frostc$Interpreter$Context* _2184;
org$frostlang$frostc$IR$Value* _2185;
$fn574 _2186;
frost$core$Int64 _2187;
org$frostlang$frostc$Interpreter$Context* _2190;
org$frostlang$frostc$IR$Value* _2191;
$fn575 _2192;
frost$core$Int64 _2193;
frost$core$Int64 _2196;
int64_t _2199;
int64_t _2200;
frost$core$Int _2201;
frost$unsafe$Pointer _2203;
int64_t _2204;
frost$core$Int64 _2205;
org$frostlang$frostc$IR$Value* _2207;
frost$core$Object* _2208;
org$frostlang$frostc$IR$Value* _2211;
frost$core$Object* _2212;
frost$core$Int _2217;
org$frostlang$frostc$IR$Statement* _2218;
frost$core$Object* _2219;
$fn576 _2222;
frost$core$String* _2223;
frost$core$String* _2224;
frost$core$Object* _2225;
frost$core$Object* _2227;
frost$core$Object* _2229;
frost$core$String* _2232;
frost$core$Object* _2234;
frost$core$Object* _2236;
frost$core$Int _2240;
frost$core$Int _2241;
int64_t _2242;
int64_t _2243;
int64_t _2244;
frost$core$Int _2245;
org$frostlang$frostc$IR$Statement* _2247;
frost$core$Object* _2248;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:638
_1 = &param0->methodCode;
_2 = *_1;
_3 = ((frost$core$Object*) param1);
_4 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_2, _3);
_5 = ((org$frostlang$frostc$Interpreter$MethodCode*) _4);
*(&local0) = ((org$frostlang$frostc$Interpreter$MethodCode*) NULL);
_7 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local0);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local0) = _5;
_13 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:639
_16 = *(&local0);
_17 = _16 == NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:640
_22 = &param1->body;
_23 = *_22;
_24 = _23 != NULL;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:641
_29 = &param0->compiler;
_30 = *_29;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:641:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_35 = &_30->_valid;
_36 = *_35;
_38 = _36.value;
if (_38) goto block8; else goto block9;
block9:;
_40 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s577, _40, &$s578);
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
_55 = (frost$core$Int) {641u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s579, _55, &$s580);
abort(); // unreachable
block10:;
_58 = _50;
_59 = &param1->owner;
_60 = *_59;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from Interpreter.frost:641:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
_65 = &_60->_valid;
_66 = *_65;
_68 = _66.value;
if (_68) goto block14; else goto block15;
block15:;
_70 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s581, _70, &$s582);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:642
_87 = &param0->methodCode;
_88 = *_87;
_89 = ((frost$core$Object*) param1);
_90 = frost$collections$IdentityMap$$IDX$frost$collections$IdentityMap$K$R$frost$collections$IdentityMap$V$Q(_88, _89);
_91 = ((org$frostlang$frostc$Interpreter$MethodCode*) _90);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$ref$frost$core$Object$Q(_92);
_94 = *(&local0);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_95);
*(&local0) = _91;
_98 = _90;
frost$core$Frost$unref$frost$core$Object$Q(_98);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:643
_101 = *(&local0);
_102 = _101 != NULL;
_103 = (frost$core$Bit) {_102};
_104 = _103.value;
if (_104) goto block16; else goto block17;
block17:;
_106 = (frost$core$Int) {643u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s583, _106);
abort(); // unreachable
block16:;
goto block2;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:646
_112 = &param0->contexts;
_113 = *_112;
_114 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Interpreter.frost:646:44
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
ITable* $tmp584 = _127->$class->itable;
while ($tmp584->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp584 = $tmp584->next;
}
_128 = $tmp584->methods[0];
_129 = _128(_127);
_131 = _114.value;
_132 = _129.value;
_133 = _131 < _132;
_134 = (frost$core$Bit) {_133};
_135 = _134.value;
if (_135) goto block19; else goto block20;
block20:;
_137 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s585, _137, &$s586);
abort(); // unreachable
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_141 = &_113->contents;
_142 = *_141;
_143 = ((frost$collections$CollectionView*) _142);
ITable* $tmp587 = _143->$class->itable;
while ($tmp587->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp587 = $tmp587->next;
}
_144 = $tmp587->methods[0];
_145 = _144(_143);
_146 = _145.value;
_147 = _114.value;
_148 = _146 > _147;
_149 = (frost$core$Bit) {_148};
_150 = _149.value;
if (_150) goto block23; else goto block24;
block24:;
_152 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s588, _152);
abort(); // unreachable
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_156 = &_113->contents;
_157 = *_156;
_158 = &_113->contents;
_159 = *_158;
_160 = ((frost$collections$CollectionView*) _159);
ITable* $tmp589 = _160->$class->itable;
while ($tmp589->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp589 = $tmp589->next;
}
_161 = $tmp589->methods[0];
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
ITable* $tmp590 = _180->$class->itable;
while ($tmp590->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp590 = $tmp590->next;
}
_181 = $tmp590->methods[0];
_182 = _181(_180);
_183 = _171.value;
_184 = _182.value;
_185 = _183 < _184;
_186 = (frost$core$Bit) {_185};
_187 = _186.value;
if (_187) goto block26; else goto block27;
block27:;
_189 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s591, _189, &$s592);
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
_209 = ($fn593) param0->$class->vtable[15];
_210 = _209(param0, _208, param1, param2);
_211 = _202;
frost$core$Frost$unref$frost$core$Object$Q(_211);
_213 = *(&local0);
_214 = ((frost$core$Object*) _213);
frost$core$Frost$unref$frost$core$Object$Q(_214);
*(&local0) = ((org$frostlang$frostc$Interpreter$MethodCode*) NULL);
return _210;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:649
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:650
_221 = (org$frostlang$frostc$Interpreter$Context*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$Context), (frost$core$Class*) &org$frostlang$frostc$Interpreter$Context$class);
_222 = *(&local0);
_223 = _222 != NULL;
_224 = (frost$core$Bit) {_223};
_225 = _224.value;
if (_225) goto block29; else goto block30;
block30:;
_227 = (frost$core$Int) {650u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s594, _227, &$s595);
abort(); // unreachable
block29:;
_230 = _222;
org$frostlang$frostc$Interpreter$Context$init$org$frostlang$frostc$Interpreter$org$frostlang$frostc$Interpreter$MethodCode(_221, param0, _230);
*(&local2) = ((org$frostlang$frostc$Interpreter$Context*) NULL);
_233 = ((frost$core$Object*) _221);
frost$core$Frost$ref$frost$core$Object$Q(_233);
_235 = *(&local2);
_236 = ((frost$core$Object*) _235);
frost$core$Frost$unref$frost$core$Object$Q(_236);
*(&local2) = _221;
_239 = ((frost$core$Object*) _221);
frost$core$Frost$unref$frost$core$Object$Q(_239);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:651
_242 = param3.nonnull;
_243 = (frost$core$Bit) {_242};
_244 = _243.value;
if (_244) goto block31; else goto block33;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:652
_247 = *(&local2);
_248 = &_247->arguments;
_249 = *_248;
_250 = param3.nonnull;
_251 = (frost$core$Bit) {_250};
_252 = _251.value;
if (_252) goto block34; else goto block35;
block35:;
_254 = (frost$core$Int) {652u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s596, _254, &$s597);
abort(); // unreachable
block34:;
_257 = ((frost$core$Int64) param3.value);
frost$core$Int64$wrapper* $tmp598;
$tmp598 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp598->value = _257;
_258 = ((frost$core$Object*) $tmp598);
frost$collections$Array$add$frost$collections$Array$T(_249, _258);
_260 = _258;
frost$core$Frost$unref$frost$core$Object$Q(_260);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:653
_263 = (frost$core$Int) {1u};
*(&local1) = _263;
goto block32;
block33:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:656
_268 = (frost$core$Int) {0u};
*(&local1) = _268;
goto block32;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:658
_272 = *(&local1);
_273 = ((frost$collections$CollectionView*) param2);
ITable* $tmp599 = _273->$class->itable;
while ($tmp599->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp599 = $tmp599->next;
}
_274 = $tmp599->methods[0];
_275 = _274(_273);
_276 = (frost$core$Bit) {false};
_277 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_272, _275, _276);
_278 = _277.min;
*(&local3) = _278;
_280 = _277.max;
_281 = _277.inclusive;
_282 = _281.value;
_283 = (frost$core$Int) {1u};
if (_282) goto block39; else goto block40;
block39:;
_285 = _278.value;
_286 = _280.value;
_287 = _285 <= _286;
_288 = (frost$core$Bit) {_287};
_289 = _288.value;
if (_289) goto block36; else goto block37;
block40:;
_291 = _278.value;
_292 = _280.value;
_293 = _291 < _292;
_294 = (frost$core$Bit) {_293};
_295 = _294.value;
if (_295) goto block36; else goto block37;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:659
_298 = *(&local2);
_299 = &_298->arguments;
_300 = *_299;
_301 = &param0->contexts;
_302 = *_301;
_303 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Interpreter.frost:659:43
_305 = (frost$core$Int) {0u};
_306 = _303.value;
_307 = _305.value;
_308 = _306 >= _307;
_309 = (frost$core$Bit) {_308};
_310 = _309.value;
if (_310) goto block44; else goto block43;
block44:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_314 = &_302->contents;
_315 = *_314;
_316 = ((frost$collections$CollectionView*) _315);
ITable* $tmp600 = _316->$class->itable;
while ($tmp600->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp600 = $tmp600->next;
}
_317 = $tmp600->methods[0];
_318 = _317(_316);
_320 = _303.value;
_321 = _318.value;
_322 = _320 < _321;
_323 = (frost$core$Bit) {_322};
_324 = _323.value;
if (_324) goto block42; else goto block43;
block43:;
_326 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s601, _326, &$s602);
abort(); // unreachable
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_330 = &_302->contents;
_331 = *_330;
_332 = ((frost$collections$CollectionView*) _331);
ITable* $tmp603 = _332->$class->itable;
while ($tmp603->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp603 = $tmp603->next;
}
_333 = $tmp603->methods[0];
_334 = _333(_332);
_335 = _334.value;
_336 = _303.value;
_337 = _335 > _336;
_338 = (frost$core$Bit) {_337};
_339 = _338.value;
if (_339) goto block46; else goto block47;
block47:;
_341 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s604, _341);
abort(); // unreachable
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_345 = &_302->contents;
_346 = *_345;
_347 = &_302->contents;
_348 = *_347;
_349 = ((frost$collections$CollectionView*) _348);
ITable* $tmp605 = _349->$class->itable;
while ($tmp605->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp605 = $tmp605->next;
}
_350 = $tmp605->methods[0];
_351 = _350(_349);
_352 = (frost$core$Int) {1u};
_353 = _351.value;
_354 = _352.value;
_355 = _353 - _354;
_356 = (frost$core$Int) {_355};
_357 = _356.value;
_358 = _303.value;
_359 = _357 - _358;
_360 = (frost$core$Int) {_359};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_362 = (frost$core$Int) {0u};
_363 = _360.value;
_364 = _362.value;
_365 = _363 >= _364;
_366 = (frost$core$Bit) {_365};
_367 = _366.value;
if (_367) goto block51; else goto block50;
block51:;
_369 = ((frost$collections$CollectionView*) _346);
ITable* $tmp606 = _369->$class->itable;
while ($tmp606->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp606 = $tmp606->next;
}
_370 = $tmp606->methods[0];
_371 = _370(_369);
_372 = _360.value;
_373 = _371.value;
_374 = _372 < _373;
_375 = (frost$core$Bit) {_374};
_376 = _375.value;
if (_376) goto block49; else goto block50;
block50:;
_378 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s607, _378, &$s608);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_382 = &_346->data;
_383 = *_382;
_384 = _383.value;
_385 = frost$core$Int64$init$frost$core$Int(_360);
_386 = _385.value;
_387 = ((frost$core$Object**)_384)[_386];
_388 = _387;
frost$core$Frost$ref$frost$core$Object$Q(_388);
_391 = _387;
_392 = _391;
frost$core$Frost$ref$frost$core$Object$Q(_392);
_394 = _387;
frost$core$Frost$unref$frost$core$Object$Q(_394);
_397 = ((org$frostlang$frostc$Interpreter$Context*) _391);
_398 = *(&local3);
_399 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param2, _398);
_400 = ((org$frostlang$frostc$IR$Value*) _399);
_401 = ($fn609) _397->$class->vtable[2];
_402 = _401(_397, _400);
frost$core$Int64$wrapper* $tmp610;
$tmp610 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp610->value = _402;
_403 = ((frost$core$Object*) $tmp610);
frost$collections$Array$add$frost$collections$Array$T(_300, _403);
_405 = _403;
frost$core$Frost$unref$frost$core$Object$Q(_405);
_407 = _399;
frost$core$Frost$unref$frost$core$Object$Q(_407);
_409 = _391;
frost$core$Frost$unref$frost$core$Object$Q(_409);
_412 = *(&local3);
_413 = _280.value;
_414 = _412.value;
_415 = _413 - _414;
_416 = (frost$core$Int) {_415};
if (_282) goto block53; else goto block54;
block53:;
_418 = _416.value;
_419 = _283.value;
_420 = _418 >= _419;
_421 = (frost$core$Bit) {_420};
_422 = _421.value;
if (_422) goto block52; else goto block37;
block54:;
_424 = _416.value;
_425 = _283.value;
_426 = _424 > _425;
_427 = (frost$core$Bit) {_426};
_428 = _427.value;
if (_428) goto block52; else goto block37;
block52:;
_430 = _412.value;
_431 = _283.value;
_432 = _430 + _431;
_433 = (frost$core$Int) {_432};
*(&local3) = _433;
goto block36;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:661
_437 = &param0->contexts;
_438 = *_437;
_439 = *(&local2);
_440 = ((frost$core$Object*) _439);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Interpreter.frost:661:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_443 = &_438->contents;
_444 = *_443;
_445 = _440;
frost$collections$Array$add$frost$collections$Array$T(_444, _445);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:662
_449 = (frost$core$Int) {0u};
*(&local4) = _449;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:663
_452 = (frost$core$Int) {0u};
*(&local5) = _452;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:664
goto block56;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:665
_457 = *(&local0);
_458 = _457 != NULL;
_459 = (frost$core$Bit) {_458};
_460 = _459.value;
if (_460) goto block58; else goto block59;
block59:;
_462 = (frost$core$Int) {665u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s611, _462, &$s612);
abort(); // unreachable
block58:;
_465 = _457;
_466 = &_465->ids;
_467 = *_466;
_468 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:665:31
_470 = (frost$core$Int) {0u};
_471 = _468.value;
_472 = _470.value;
_473 = _471 >= _472;
_474 = (frost$core$Bit) {_473};
_475 = _474.value;
if (_475) goto block63; else goto block62;
block63:;
_477 = ((frost$collections$CollectionView*) _467);
ITable* $tmp613 = _477->$class->itable;
while ($tmp613->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp613 = $tmp613->next;
}
_478 = $tmp613->methods[0];
_479 = _478(_477);
_480 = _468.value;
_481 = _479.value;
_482 = _480 < _481;
_483 = (frost$core$Bit) {_482};
_484 = _483.value;
if (_484) goto block61; else goto block62;
block62:;
_486 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s614, _486, &$s615);
abort(); // unreachable
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_490 = &_467->data;
_491 = *_490;
_492 = _491.value;
_493 = frost$core$Int64$init$frost$core$Int(_468);
_494 = _493.value;
_495 = ((frost$core$Object**)_492)[_494];
_496 = _495;
frost$core$Frost$ref$frost$core$Object$Q(_496);
_499 = ((frost$collections$Array*) _495);
_500 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:665:38
_502 = (frost$core$Int) {0u};
_503 = _500.value;
_504 = _502.value;
_505 = _503 >= _504;
_506 = (frost$core$Bit) {_505};
_507 = _506.value;
if (_507) goto block67; else goto block66;
block67:;
_509 = ((frost$collections$CollectionView*) _499);
ITable* $tmp616 = _509->$class->itable;
while ($tmp616->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp616 = $tmp616->next;
}
_510 = $tmp616->methods[0];
_511 = _510(_509);
_512 = _500.value;
_513 = _511.value;
_514 = _512 < _513;
_515 = (frost$core$Bit) {_514};
_516 = _515.value;
if (_516) goto block65; else goto block66;
block66:;
_518 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s617, _518, &$s618);
abort(); // unreachable
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_522 = &_499->data;
_523 = *_522;
_524 = _523.value;
_525 = frost$core$Int64$init$frost$core$Int(_500);
_526 = _525.value;
_527 = ((frost$core$Object**)_524)[_526];
_528 = _527;
frost$core$Frost$ref$frost$core$Object$Q(_528);
_531 = ((org$frostlang$frostc$IR$Statement$ID$wrapper*) _527)->value;
*(&local6) = _531;
_533 = _527;
frost$core$Frost$unref$frost$core$Object$Q(_533);
_535 = _495;
frost$core$Frost$unref$frost$core$Object$Q(_535);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:666
_538 = *(&local0);
_539 = _538 != NULL;
_540 = (frost$core$Bit) {_539};
_541 = _540.value;
if (_541) goto block68; else goto block69;
block69:;
_543 = (frost$core$Int) {666u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s619, _543, &$s620);
abort(); // unreachable
block68:;
_546 = _538;
_547 = &_546->ir;
_548 = *_547;
_549 = *(&local4);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:666:32
_551 = (frost$core$Int) {0u};
_552 = _549.value;
_553 = _551.value;
_554 = _552 >= _553;
_555 = (frost$core$Bit) {_554};
_556 = _555.value;
if (_556) goto block73; else goto block72;
block73:;
_558 = ((frost$collections$CollectionView*) _548);
ITable* $tmp621 = _558->$class->itable;
while ($tmp621->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp621 = $tmp621->next;
}
_559 = $tmp621->methods[0];
_560 = _559(_558);
_561 = _549.value;
_562 = _560.value;
_563 = _561 < _562;
_564 = (frost$core$Bit) {_563};
_565 = _564.value;
if (_565) goto block71; else goto block72;
block72:;
_567 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s622, _567, &$s623);
abort(); // unreachable
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_571 = &_548->data;
_572 = *_571;
_573 = _572.value;
_574 = frost$core$Int64$init$frost$core$Int(_549);
_575 = _574.value;
_576 = ((frost$core$Object**)_573)[_575];
_577 = _576;
frost$core$Frost$ref$frost$core$Object$Q(_577);
_580 = ((frost$collections$Array*) _576);
_581 = *(&local5);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:666:39
_583 = (frost$core$Int) {0u};
_584 = _581.value;
_585 = _583.value;
_586 = _584 >= _585;
_587 = (frost$core$Bit) {_586};
_588 = _587.value;
if (_588) goto block77; else goto block76;
block77:;
_590 = ((frost$collections$CollectionView*) _580);
ITable* $tmp624 = _590->$class->itable;
while ($tmp624->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp624 = $tmp624->next;
}
_591 = $tmp624->methods[0];
_592 = _591(_590);
_593 = _581.value;
_594 = _592.value;
_595 = _593 < _594;
_596 = (frost$core$Bit) {_595};
_597 = _596.value;
if (_597) goto block75; else goto block76;
block76:;
_599 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s625, _599, &$s626);
abort(); // unreachable
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_603 = &_580->data;
_604 = *_603;
_605 = _604.value;
_606 = frost$core$Int64$init$frost$core$Int(_581);
_607 = _606.value;
_608 = ((frost$core$Object**)_605)[_607];
_609 = _608;
frost$core$Frost$ref$frost$core$Object$Q(_609);
_612 = ((org$frostlang$frostc$IR$Statement*) _608);
*(&local7) = ((org$frostlang$frostc$IR$Statement*) NULL);
_614 = ((frost$core$Object*) _612);
frost$core$Frost$ref$frost$core$Object$Q(_614);
_616 = *(&local7);
_617 = ((frost$core$Object*) _616);
frost$core$Frost$unref$frost$core$Object$Q(_617);
*(&local7) = _612;
_620 = _608;
frost$core$Frost$unref$frost$core$Object$Q(_620);
_622 = _576;
frost$core$Frost$unref$frost$core$Object$Q(_622);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:667
_625 = *(&local7);
_626 = ((frost$core$Object*) _625);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Interpreter.frost:667:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
_629 = ($fn627) _626->$class->vtable[0];
_630 = _629(_626);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_630);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
_637 = ((frost$core$Object*) _630);
frost$core$Frost$unref$frost$core$Object$Q(_637);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:668
_641 = *(&local7);
_642 = &_641->$rawValue;
_643 = *_642;
_644 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:669:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_647 = _643.value;
_648 = _644.value;
_649 = _647 == _648;
_650 = (frost$core$Bit) {_649};
_652 = _650.value;
if (_652) goto block81; else goto block82;
block81:;
_654 = &_641->$data.$BINARY.field0;
_655 = *_654;
_656 = &_641->$data.$BINARY.field1;
_657 = *_656;
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
_659 = ((frost$core$Object*) _657);
frost$core$Frost$ref$frost$core$Object$Q(_659);
_661 = *(&local8);
_662 = ((frost$core$Object*) _661);
frost$core$Frost$unref$frost$core$Object$Q(_662);
*(&local8) = _657;
_665 = &_641->$data.$BINARY.field2;
_666 = *_665;
*(&local9) = _666;
_668 = &_641->$data.$BINARY.field3;
_669 = *_668;
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
_671 = ((frost$core$Object*) _669);
frost$core$Frost$ref$frost$core$Object$Q(_671);
_673 = *(&local10);
_674 = ((frost$core$Object*) _673);
frost$core$Frost$unref$frost$core$Object$Q(_674);
*(&local10) = _669;
_677 = &_641->$data.$BINARY.field4;
_678 = *_677;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:670
_680 = *(&local2);
_681 = *(&local6);
_682 = *(&local8);
_683 = *(&local9);
_684 = *(&local10);
_685 = ($fn628) param0->$class->vtable[22];
_685(param0, _680, _681, _682, _683, _684);
_687 = *(&local10);
_688 = ((frost$core$Object*) _687);
frost$core$Frost$unref$frost$core$Object$Q(_688);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
_691 = *(&local8);
_692 = ((frost$core$Object*) _691);
frost$core$Frost$unref$frost$core$Object$Q(_692);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block80;
block82:;
_696 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:672:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_699 = _643.value;
_700 = _696.value;
_701 = _699 == _700;
_702 = (frost$core$Bit) {_701};
_704 = _702.value;
if (_704) goto block84; else goto block85;
block84:;
_706 = &_641->$data.$BRANCH.field0;
_707 = *_706;
_708 = &_641->$data.$BRANCH.field1;
_709 = *_708;
*(&local11) = _709;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:673
_712 = *(&local0);
_713 = _712 != NULL;
_714 = (frost$core$Bit) {_713};
_715 = _714.value;
if (_715) goto block87; else goto block88;
block88:;
_717 = (frost$core$Int) {673u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s629, _717, &$s630);
abort(); // unreachable
block87:;
_720 = _712;
_721 = &_720->blocks;
_722 = *_721;
_723 = *(&local11);
_724 = _723.value;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:673:41
_726 = (frost$core$Int) {0u};
_727 = _724.value;
_728 = _726.value;
_729 = _727 >= _728;
_730 = (frost$core$Bit) {_729};
_731 = _730.value;
if (_731) goto block92; else goto block91;
block92:;
_733 = ((frost$collections$CollectionView*) _722);
ITable* $tmp631 = _733->$class->itable;
while ($tmp631->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp631 = $tmp631->next;
}
_734 = $tmp631->methods[0];
_735 = _734(_733);
_736 = _724.value;
_737 = _735.value;
_738 = _736 < _737;
_739 = (frost$core$Bit) {_738};
_740 = _739.value;
if (_740) goto block90; else goto block91;
block91:;
_742 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s632, _742, &$s633);
abort(); // unreachable
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_746 = &_722->data;
_747 = *_746;
_748 = _747.value;
_749 = frost$core$Int64$init$frost$core$Int(_724);
_750 = _749.value;
_751 = ((frost$core$Object**)_748)[_750];
_752 = _751;
frost$core$Frost$ref$frost$core$Object$Q(_752);
_755 = ((frost$core$Int$wrapper*) _751)->value;
*(&local4) = _755;
_757 = _751;
frost$core$Frost$unref$frost$core$Object$Q(_757);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:674
_760 = (frost$core$Int) {0u};
*(&local5) = _760;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:675
_763 = *(&local7);
_764 = ((frost$core$Object*) _763);
frost$core$Frost$unref$frost$core$Object$Q(_764);
*(&local7) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block56;
block85:;
_768 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:677:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_771 = _643.value;
_772 = _768.value;
_773 = _771 == _772;
_774 = (frost$core$Bit) {_773};
_776 = _774.value;
if (_776) goto block93; else goto block94;
block93:;
_778 = &_641->$data.$CAST.field0;
_779 = *_778;
_780 = &_641->$data.$CAST.field1;
_781 = *_780;
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
_783 = ((frost$core$Object*) _781);
frost$core$Frost$ref$frost$core$Object$Q(_783);
_785 = *(&local12);
_786 = ((frost$core$Object*) _785);
frost$core$Frost$unref$frost$core$Object$Q(_786);
*(&local12) = _781;
_789 = &_641->$data.$CAST.field2;
_790 = *_789;
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
_792 = ((frost$core$Object*) _790);
frost$core$Frost$ref$frost$core$Object$Q(_792);
_794 = *(&local13);
_795 = ((frost$core$Object*) _794);
frost$core$Frost$unref$frost$core$Object$Q(_795);
*(&local13) = _790;
_798 = &_641->$data.$CAST.field3;
_799 = *_798;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:678
_801 = *(&local2);
_802 = *(&local6);
_803 = *(&local12);
_804 = *(&local13);
_805 = ($fn634) param0->$class->vtable[16];
_805(param0, _801, _802, _803, _804);
_807 = *(&local13);
_808 = ((frost$core$Object*) _807);
frost$core$Frost$unref$frost$core$Object$Q(_808);
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
_811 = *(&local12);
_812 = ((frost$core$Object*) _811);
frost$core$Frost$unref$frost$core$Object$Q(_812);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block80;
block94:;
_816 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:680:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_819 = _643.value;
_820 = _816.value;
_821 = _819 == _820;
_822 = (frost$core$Bit) {_821};
_824 = _822.value;
if (_824) goto block96; else goto block97;
block96:;
goto block80;
block97:;
_827 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:682:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_830 = _643.value;
_831 = _827.value;
_832 = _830 == _831;
_833 = (frost$core$Bit) {_832};
_835 = _833.value;
if (_835) goto block99; else goto block100;
block99:;
_837 = &_641->$data.$CONDITIONAL_BRANCH.field0;
_838 = *_837;
_839 = &_641->$data.$CONDITIONAL_BRANCH.field1;
_840 = *_839;
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
_842 = ((frost$core$Object*) _840);
frost$core$Frost$ref$frost$core$Object$Q(_842);
_844 = *(&local14);
_845 = ((frost$core$Object*) _844);
frost$core$Frost$unref$frost$core$Object$Q(_845);
*(&local14) = _840;
_848 = &_641->$data.$CONDITIONAL_BRANCH.field2;
_849 = *_848;
*(&local15) = _849;
_851 = &_641->$data.$CONDITIONAL_BRANCH.field3;
_852 = *_851;
*(&local16) = _852;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:683
_855 = *(&local2);
_856 = *(&local14);
_857 = ($fn635) _855->$class->vtable[2];
_858 = _857(_855, _856);
_859 = (frost$core$Int64) {0u};
_860 = _858.value;
_861 = _859.value;
_862 = _860 != _861;
_863 = (frost$core$Bit) {_862};
_864 = _863.value;
if (_864) goto block102; else goto block104;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:684
_867 = *(&local0);
_868 = _867 != NULL;
_869 = (frost$core$Bit) {_868};
_870 = _869.value;
if (_870) goto block105; else goto block106;
block106:;
_872 = (frost$core$Int) {684u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s636, _872, &$s637);
abort(); // unreachable
block105:;
_875 = _867;
_876 = &_875->blocks;
_877 = *_876;
_878 = *(&local15);
_879 = _878.value;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:684:45
_881 = (frost$core$Int) {0u};
_882 = _879.value;
_883 = _881.value;
_884 = _882 >= _883;
_885 = (frost$core$Bit) {_884};
_886 = _885.value;
if (_886) goto block110; else goto block109;
block110:;
_888 = ((frost$collections$CollectionView*) _877);
ITable* $tmp638 = _888->$class->itable;
while ($tmp638->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp638 = $tmp638->next;
}
_889 = $tmp638->methods[0];
_890 = _889(_888);
_891 = _879.value;
_892 = _890.value;
_893 = _891 < _892;
_894 = (frost$core$Bit) {_893};
_895 = _894.value;
if (_895) goto block108; else goto block109;
block109:;
_897 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s639, _897, &$s640);
abort(); // unreachable
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_901 = &_877->data;
_902 = *_901;
_903 = _902.value;
_904 = frost$core$Int64$init$frost$core$Int(_879);
_905 = _904.value;
_906 = ((frost$core$Object**)_903)[_905];
_907 = _906;
frost$core$Frost$ref$frost$core$Object$Q(_907);
_910 = ((frost$core$Int$wrapper*) _906)->value;
*(&local4) = _910;
_912 = _906;
frost$core$Frost$unref$frost$core$Object$Q(_912);
goto block103;
block104:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:687
_917 = *(&local0);
_918 = _917 != NULL;
_919 = (frost$core$Bit) {_918};
_920 = _919.value;
if (_920) goto block111; else goto block112;
block112:;
_922 = (frost$core$Int) {687u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s641, _922, &$s642);
abort(); // unreachable
block111:;
_925 = _917;
_926 = &_925->blocks;
_927 = *_926;
_928 = *(&local16);
_929 = _928.value;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Interpreter.frost:687:45
_931 = (frost$core$Int) {0u};
_932 = _929.value;
_933 = _931.value;
_934 = _932 >= _933;
_935 = (frost$core$Bit) {_934};
_936 = _935.value;
if (_936) goto block116; else goto block115;
block116:;
_938 = ((frost$collections$CollectionView*) _927);
ITable* $tmp643 = _938->$class->itable;
while ($tmp643->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp643 = $tmp643->next;
}
_939 = $tmp643->methods[0];
_940 = _939(_938);
_941 = _929.value;
_942 = _940.value;
_943 = _941 < _942;
_944 = (frost$core$Bit) {_943};
_945 = _944.value;
if (_945) goto block114; else goto block115;
block115:;
_947 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s644, _947, &$s645);
abort(); // unreachable
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_951 = &_927->data;
_952 = *_951;
_953 = _952.value;
_954 = frost$core$Int64$init$frost$core$Int(_929);
_955 = _954.value;
_956 = ((frost$core$Object**)_953)[_955];
_957 = _956;
frost$core$Frost$ref$frost$core$Object$Q(_957);
_960 = ((frost$core$Int$wrapper*) _956)->value;
*(&local4) = _960;
_962 = _956;
frost$core$Frost$unref$frost$core$Object$Q(_962);
goto block103;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:689
_966 = (frost$core$Int) {0u};
*(&local5) = _966;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:690
_969 = *(&local14);
_970 = ((frost$core$Object*) _969);
frost$core$Frost$unref$frost$core$Object$Q(_970);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
_973 = *(&local7);
_974 = ((frost$core$Object*) _973);
frost$core$Frost$unref$frost$core$Object$Q(_974);
*(&local7) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block56;
block100:;
_978 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:692:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_981 = _643.value;
_982 = _978.value;
_983 = _981 == _982;
_984 = (frost$core$Bit) {_983};
_986 = _984.value;
if (_986) goto block117; else goto block118;
block117:;
_988 = &_641->$data.$CONSTRUCT.field0;
_989 = *_988;
_990 = &_641->$data.$CONSTRUCT.field1;
_991 = *_990;
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
_993 = ((frost$core$Object*) _991);
frost$core$Frost$ref$frost$core$Object$Q(_993);
_995 = *(&local17);
_996 = ((frost$core$Object*) _995);
frost$core$Frost$unref$frost$core$Object$Q(_996);
*(&local17) = _991;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:693
_1000 = &param0->memoryLayout;
_1001 = *_1000;
_1002 = *(&local17);
_1003 = &_1002->type;
_1004 = *_1003;
_1005 = ($fn646) _1001->$class->vtable[7];
_1006 = _1005(_1001, _1004);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:693:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_1009 = _1006.value;
_1010 = _1009 * 1u;
_1011 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_1010);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_1014 = &(&local19)->value;
*_1014 = _1011;
_1016 = *(&local19);
*(&local18) = _1016;
_1019 = *(&local18);
*(&local20) = _1019;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:694
_1023 = *(&local20);
_1024 = _1023.value;
_1025 = *(&local17);
_1026 = ((frost$core$Object*) _1025);
frost$core$Frost$ref$frost$core$Object$Q(_1026);
_1028 = *((org$frostlang$frostc$ClassDecl**)_1024);
_1029 = ((frost$core$Object*) _1028);
frost$core$Frost$unref$frost$core$Object$Q(_1029);
*((org$frostlang$frostc$ClassDecl**)_1024) = _1025;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:695
_1033 = *(&local20);
_1034 = &param0->memoryLayout;
_1035 = *_1034;
_1036 = ($fn647) _1035->$class->vtable[3];
_1037 = _1036(_1035);
// begin inline call to function frost.unsafe.Pointer.+(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Interpreter.frost:695:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:105
_1040 = _1037.value;
*(&local21) = _1040;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:106
*(&local22) = 1u;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:107
_1045 = _1033.value;
_1046 = *(&local21);
_1047 = *(&local22);
_1048 = _1046 * _1047;
_1049 = _1045 + _1048;
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:107:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_1052 = &(&local24)->value;
*_1052 = _1049;
_1054 = *(&local24);
*(&local23) = _1054;
_1057 = *(&local23);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:695:68
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1061 = _1057.value;
_1062 = (frost$core$Int) {_1061};
_1064 = frost$unsafe$Pointer$init$frost$core$Int(_1062);
_1065 = _1064.value;
_1066 = (frost$core$Int32) {1u};
*((frost$core$Int32*)_1065) = _1066;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:696
_1069 = *(&local2);
_1070 = &_1069->statements;
_1071 = *_1070;
_1072 = *(&local6);
_1073 = _1072.value;
_1074 = *(&local20);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:696:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1077 = _1074.value;
_1078 = (frost$core$Int) {_1077};
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Interpreter.frost:696:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_1082 = _1078.value;
_1083 = ((int64_t) _1082);
_1084 = (frost$core$Int64) {_1083};
_1086 = ((frost$core$Int64$nullable) { _1084, true });
frost$core$Object* $tmp648;
if (_1086.nonnull) {
    frost$core$Int64$wrapper* $tmp649;
    $tmp649 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp649->value = ((frost$core$Int64) _1086.value);
    $tmp648 = ((frost$core$Object*) $tmp649);
}
else {
    $tmp648 = NULL;
}
_1087 = $tmp648;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:696:39
_1089 = (frost$core$Int) {0u};
_1090 = _1073.value;
_1091 = _1089.value;
_1092 = _1090 >= _1091;
_1093 = (frost$core$Bit) {_1092};
_1094 = _1093.value;
if (_1094) goto block130; else goto block129;
block130:;
_1096 = ((frost$collections$CollectionView*) _1071);
ITable* $tmp650 = _1096->$class->itable;
while ($tmp650->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp650 = $tmp650->next;
}
_1097 = $tmp650->methods[0];
_1098 = _1097(_1096);
_1099 = _1073.value;
_1100 = _1098.value;
_1101 = _1099 < _1100;
_1102 = (frost$core$Bit) {_1101};
_1103 = _1102.value;
if (_1103) goto block128; else goto block129;
block129:;
_1105 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s651, _1105, &$s652);
abort(); // unreachable
block128:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1109 = &_1071->data;
_1110 = *_1109;
_1111 = _1110.value;
_1112 = frost$core$Int64$init$frost$core$Int(_1073);
_1113 = _1112.value;
_1114 = _1087;
frost$core$Frost$ref$frost$core$Object$Q(_1114);
_1116 = ((frost$core$Object**)_1111)[_1113];
_1117 = _1116;
frost$core$Frost$unref$frost$core$Object$Q(_1117);
((frost$core$Object**)_1111)[_1113] = _1087;
_1121 = _1087;
frost$core$Frost$unref$frost$core$Object$Q(_1121);
_1123 = *(&local17);
_1124 = ((frost$core$Object*) _1123);
frost$core$Frost$unref$frost$core$Object$Q(_1124);
*(&local17) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block80;
block118:;
_1128 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:698:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1131 = _643.value;
_1132 = _1128.value;
_1133 = _1131 == _1132;
_1134 = (frost$core$Bit) {_1133};
_1136 = _1134.value;
if (_1136) goto block131; else goto block132;
block131:;
_1138 = &_641->$data.$CREATE_STRUCT.field0;
_1139 = *_1138;
_1140 = &_641->$data.$CREATE_STRUCT.field1;
_1141 = *_1140;
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
_1143 = ((frost$core$Object*) _1141);
frost$core$Frost$ref$frost$core$Object$Q(_1143);
_1145 = *(&local25);
_1146 = ((frost$core$Object*) _1145);
frost$core$Frost$unref$frost$core$Object$Q(_1146);
*(&local25) = _1141;
_1149 = &_641->$data.$CREATE_STRUCT.field2;
_1150 = *_1149;
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
_1152 = ((frost$core$Object*) _1150);
frost$core$Frost$ref$frost$core$Object$Q(_1152);
_1154 = *(&local26);
_1155 = ((frost$core$Object*) _1154);
frost$core$Frost$unref$frost$core$Object$Q(_1155);
*(&local26) = _1150;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:699
_1159 = *(&local2);
_1160 = *(&local6);
_1161 = *(&local25);
_1162 = *(&local26);
_1163 = ($fn653) param0->$class->vtable[17];
_1163(param0, _1159, _1160, _1161, _1162);
_1165 = *(&local26);
_1166 = ((frost$core$Object*) _1165);
frost$core$Frost$unref$frost$core$Object$Q(_1166);
*(&local26) = ((org$frostlang$frostc$FixedArray*) NULL);
_1169 = *(&local25);
_1170 = ((frost$core$Object*) _1169);
frost$core$Frost$unref$frost$core$Object$Q(_1170);
*(&local25) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block80;
block132:;
_1174 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:701:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1177 = _643.value;
_1178 = _1174.value;
_1179 = _1177 == _1178;
_1180 = (frost$core$Bit) {_1179};
_1182 = _1180.value;
if (_1182) goto block134; else goto block135;
block134:;
_1184 = &_641->$data.$DYNAMIC_CALL.field0;
_1185 = *_1184;
_1186 = &_641->$data.$DYNAMIC_CALL.field1;
_1187 = *_1186;
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
_1189 = ((frost$core$Object*) _1187);
frost$core$Frost$ref$frost$core$Object$Q(_1189);
_1191 = *(&local27);
_1192 = ((frost$core$Object*) _1191);
frost$core$Frost$unref$frost$core$Object$Q(_1192);
*(&local27) = _1187;
_1195 = &_641->$data.$DYNAMIC_CALL.field2;
_1196 = *_1195;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
_1198 = ((frost$core$Object*) _1196);
frost$core$Frost$ref$frost$core$Object$Q(_1198);
_1200 = *(&local28);
_1201 = ((frost$core$Object*) _1200);
frost$core$Frost$unref$frost$core$Object$Q(_1201);
*(&local28) = _1196;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:712
_1205 = (frost$core$Int) {712u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s654, _1205);
abort(); // unreachable
block135:;
_1208 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:714:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1211 = _643.value;
_1212 = _1208.value;
_1213 = _1211 == _1212;
_1214 = (frost$core$Bit) {_1213};
_1216 = _1214.value;
if (_1216) goto block137; else goto block138;
block137:;
_1218 = &_641->$data.$EXTRACT_FIELD.field0;
_1219 = *_1218;
_1220 = &_641->$data.$EXTRACT_FIELD.field1;
_1221 = *_1220;
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
_1223 = ((frost$core$Object*) _1221);
frost$core$Frost$ref$frost$core$Object$Q(_1223);
_1225 = *(&local29);
_1226 = ((frost$core$Object*) _1225);
frost$core$Frost$unref$frost$core$Object$Q(_1226);
*(&local29) = _1221;
_1229 = &_641->$data.$EXTRACT_FIELD.field2;
_1230 = *_1229;
*(&local30) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1232 = ((frost$core$Object*) _1230);
frost$core$Frost$ref$frost$core$Object$Q(_1232);
_1234 = *(&local30);
_1235 = ((frost$core$Object*) _1234);
frost$core$Frost$unref$frost$core$Object$Q(_1235);
*(&local30) = _1230;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:715
_1239 = *(&local2);
_1240 = *(&local6);
_1241 = *(&local29);
_1242 = *(&local30);
_1243 = ($fn655) param0->$class->vtable[18];
_1243(param0, _1239, _1240, _1241, _1242);
_1245 = *(&local30);
_1246 = ((frost$core$Object*) _1245);
frost$core$Frost$unref$frost$core$Object$Q(_1246);
*(&local30) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1249 = *(&local29);
_1250 = ((frost$core$Object*) _1249);
frost$core$Frost$unref$frost$core$Object$Q(_1250);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block80;
block138:;
_1254 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:717:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1257 = _643.value;
_1258 = _1254.value;
_1259 = _1257 == _1258;
_1260 = (frost$core$Bit) {_1259};
_1262 = _1260.value;
if (_1262) goto block140; else goto block141;
block140:;
_1264 = &_641->$data.$GET_FIELD_POINTER.field0;
_1265 = *_1264;
_1266 = &_641->$data.$GET_FIELD_POINTER.field1;
_1267 = *_1266;
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
_1269 = ((frost$core$Object*) _1267);
frost$core$Frost$ref$frost$core$Object$Q(_1269);
_1271 = *(&local31);
_1272 = ((frost$core$Object*) _1271);
frost$core$Frost$unref$frost$core$Object$Q(_1272);
*(&local31) = _1267;
_1275 = &_641->$data.$GET_FIELD_POINTER.field2;
_1276 = *_1275;
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1278 = ((frost$core$Object*) _1276);
frost$core$Frost$ref$frost$core$Object$Q(_1278);
_1280 = *(&local32);
_1281 = ((frost$core$Object*) _1280);
frost$core$Frost$unref$frost$core$Object$Q(_1281);
*(&local32) = _1276;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:718
_1285 = *(&local2);
_1286 = *(&local6);
_1287 = *(&local31);
_1288 = *(&local32);
_1289 = ($fn656) param0->$class->vtable[20];
_1289(param0, _1285, _1286, _1287, _1288);
_1291 = *(&local32);
_1292 = ((frost$core$Object*) _1291);
frost$core$Frost$unref$frost$core$Object$Q(_1292);
*(&local32) = ((org$frostlang$frostc$FieldDecl*) NULL);
_1295 = *(&local31);
_1296 = ((frost$core$Object*) _1295);
frost$core$Frost$unref$frost$core$Object$Q(_1296);
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block80;
block141:;
_1300 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:720:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1303 = _643.value;
_1304 = _1300.value;
_1305 = _1303 == _1304;
_1306 = (frost$core$Bit) {_1305};
_1308 = _1306.value;
if (_1308) goto block143; else goto block144;
block143:;
_1310 = &_641->$data.$GET_VIRTUAL_METHOD.field0;
_1311 = *_1310;
_1312 = &_641->$data.$GET_VIRTUAL_METHOD.field1;
_1313 = *_1312;
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
_1315 = ((frost$core$Object*) _1313);
frost$core$Frost$ref$frost$core$Object$Q(_1315);
_1317 = *(&local33);
_1318 = ((frost$core$Object*) _1317);
frost$core$Frost$unref$frost$core$Object$Q(_1318);
*(&local33) = _1313;
_1321 = &_641->$data.$GET_VIRTUAL_METHOD.field2;
_1322 = *_1321;
*(&local34) = _1322;
_1324 = &_641->$data.$GET_VIRTUAL_METHOD.field3;
_1325 = *_1324;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:725
_1327 = (frost$core$Int) {725u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s657, _1327);
abort(); // unreachable
block144:;
_1330 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:727:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1333 = _643.value;
_1334 = _1330.value;
_1335 = _1333 == _1334;
_1336 = (frost$core$Bit) {_1335};
_1338 = _1336.value;
if (_1338) goto block146; else goto block147;
block146:;
_1340 = &_641->$data.$LOAD.field0;
_1341 = *_1340;
_1342 = &_641->$data.$LOAD.field1;
_1343 = *_1342;
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
_1345 = ((frost$core$Object*) _1343);
frost$core$Frost$ref$frost$core$Object$Q(_1345);
_1347 = *(&local35);
_1348 = ((frost$core$Object*) _1347);
frost$core$Frost$unref$frost$core$Object$Q(_1348);
*(&local35) = _1343;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:728
_1352 = *(&local2);
_1353 = *(&local35);
_1354 = ($fn658) _1352->$class->vtable[2];
_1355 = _1354(_1352, _1353);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:728:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1358 = _1355.value;
_1359 = ((int64_t) _1358);
_1360 = (frost$core$Int) {_1359};
_1362 = frost$unsafe$Pointer$init$frost$core$Int(_1360);
*(&local36) = _1362;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:729
_1365 = *(&local35);
_1366 = ($fn659) _1365->$class->vtable[2];
_1367 = _1366(_1365);
_1368 = ($fn660) param0->$class->vtable[10];
_1369 = _1368(param0, _1367);
_1370 = _1369.value;
_1371 = ((frost$core$Object*) _1367);
frost$core$Frost$unref$frost$core$Object$Q(_1371);
if (_1370) goto block150; else goto block152;
block150:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:730
_1375 = *(&local2);
_1376 = &_1375->statements;
_1377 = *_1376;
_1378 = *(&local6);
_1379 = _1378.value;
_1380 = *(&local36);
// begin inline call to function frost.unsafe.Pointer.get_asInt():frost.core.Int from Interpreter.frost:730:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:137
_1383 = _1380.value;
_1384 = (frost$core$Int) {_1383};
_1386 = frost$core$Int64$init$frost$core$Int(_1384);
_1387 = ((frost$core$Int64$nullable) { _1386, true });
frost$core$Object* $tmp661;
if (_1387.nonnull) {
    frost$core$Int64$wrapper* $tmp662;
    $tmp662 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp662->value = ((frost$core$Int64) _1387.value);
    $tmp661 = ((frost$core$Object*) $tmp662);
}
else {
    $tmp661 = NULL;
}
_1388 = $tmp661;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:730:43
_1390 = (frost$core$Int) {0u};
_1391 = _1379.value;
_1392 = _1390.value;
_1393 = _1391 >= _1392;
_1394 = (frost$core$Bit) {_1393};
_1395 = _1394.value;
if (_1395) goto block157; else goto block156;
block157:;
_1397 = ((frost$collections$CollectionView*) _1377);
ITable* $tmp663 = _1397->$class->itable;
while ($tmp663->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp663 = $tmp663->next;
}
_1398 = $tmp663->methods[0];
_1399 = _1398(_1397);
_1400 = _1379.value;
_1401 = _1399.value;
_1402 = _1400 < _1401;
_1403 = (frost$core$Bit) {_1402};
_1404 = _1403.value;
if (_1404) goto block155; else goto block156;
block156:;
_1406 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s664, _1406, &$s665);
abort(); // unreachable
block155:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1410 = &_1377->data;
_1411 = *_1410;
_1412 = _1411.value;
_1413 = frost$core$Int64$init$frost$core$Int(_1379);
_1414 = _1413.value;
_1415 = _1388;
frost$core$Frost$ref$frost$core$Object$Q(_1415);
_1417 = ((frost$core$Object**)_1412)[_1414];
_1418 = _1417;
frost$core$Frost$unref$frost$core$Object$Q(_1418);
((frost$core$Object**)_1412)[_1414] = _1388;
_1422 = _1388;
frost$core$Frost$unref$frost$core$Object$Q(_1422);
goto block151;
block152:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:733
_1427 = *(&local2);
_1428 = &_1427->statements;
_1429 = *_1428;
_1430 = *(&local6);
_1431 = _1430.value;
_1432 = *(&local36);
_1433 = _1432.value;
_1434 = *((frost$core$Int*)_1433);
_1435 = frost$core$Int64$init$frost$core$Int(_1434);
_1436 = ((frost$core$Int64$nullable) { _1435, true });
frost$core$Object* $tmp666;
if (_1436.nonnull) {
    frost$core$Int64$wrapper* $tmp667;
    $tmp667 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp667->value = ((frost$core$Int64) _1436.value);
    $tmp666 = ((frost$core$Object*) $tmp667);
}
else {
    $tmp666 = NULL;
}
_1437 = $tmp666;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:733:43
_1439 = (frost$core$Int) {0u};
_1440 = _1431.value;
_1441 = _1439.value;
_1442 = _1440 >= _1441;
_1443 = (frost$core$Bit) {_1442};
_1444 = _1443.value;
if (_1444) goto block161; else goto block160;
block161:;
_1446 = ((frost$collections$CollectionView*) _1429);
ITable* $tmp668 = _1446->$class->itable;
while ($tmp668->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp668 = $tmp668->next;
}
_1447 = $tmp668->methods[0];
_1448 = _1447(_1446);
_1449 = _1431.value;
_1450 = _1448.value;
_1451 = _1449 < _1450;
_1452 = (frost$core$Bit) {_1451};
_1453 = _1452.value;
if (_1453) goto block159; else goto block160;
block160:;
_1455 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s669, _1455, &$s670);
abort(); // unreachable
block159:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1459 = &_1429->data;
_1460 = *_1459;
_1461 = _1460.value;
_1462 = frost$core$Int64$init$frost$core$Int(_1431);
_1463 = _1462.value;
_1464 = _1437;
frost$core$Frost$ref$frost$core$Object$Q(_1464);
_1466 = ((frost$core$Object**)_1461)[_1463];
_1467 = _1466;
frost$core$Frost$unref$frost$core$Object$Q(_1467);
((frost$core$Object**)_1461)[_1463] = _1437;
_1471 = _1437;
frost$core$Frost$unref$frost$core$Object$Q(_1471);
goto block151;
block151:;
_1474 = *(&local35);
_1475 = ((frost$core$Object*) _1474);
frost$core$Frost$unref$frost$core$Object$Q(_1475);
*(&local35) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block80;
block147:;
_1479 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:736:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1482 = _643.value;
_1483 = _1479.value;
_1484 = _1482 == _1483;
_1485 = (frost$core$Bit) {_1484};
_1487 = _1485.value;
if (_1487) goto block162; else goto block163;
block162:;
_1489 = &_641->$data.$NEGATE.field0;
_1490 = *_1489;
_1491 = &_641->$data.$NEGATE.field1;
_1492 = *_1491;
*(&local37) = ((org$frostlang$frostc$IR$Value*) NULL);
_1494 = ((frost$core$Object*) _1492);
frost$core$Frost$ref$frost$core$Object$Q(_1494);
_1496 = *(&local37);
_1497 = ((frost$core$Object*) _1496);
frost$core$Frost$unref$frost$core$Object$Q(_1497);
*(&local37) = _1492;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:737
_1501 = *(&local2);
_1502 = &_1501->statements;
_1503 = *_1502;
_1504 = *(&local6);
_1505 = _1504.value;
_1506 = *(&local2);
_1507 = *(&local37);
_1508 = ($fn671) _1506->$class->vtable[2];
_1509 = _1508(_1506, _1507);
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Interpreter.frost:737:53
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_1512 = _1509.value;
_1513 = -_1512;
_1514 = (frost$core$Int64) {_1513};
_1516 = ((frost$core$Int64$nullable) { _1514, true });
frost$core$Object* $tmp672;
if (_1516.nonnull) {
    frost$core$Int64$wrapper* $tmp673;
    $tmp673 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp673->value = ((frost$core$Int64) _1516.value);
    $tmp672 = ((frost$core$Object*) $tmp673);
}
else {
    $tmp672 = NULL;
}
_1517 = $tmp672;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:737:39
_1519 = (frost$core$Int) {0u};
_1520 = _1505.value;
_1521 = _1519.value;
_1522 = _1520 >= _1521;
_1523 = (frost$core$Bit) {_1522};
_1524 = _1523.value;
if (_1524) goto block169; else goto block168;
block169:;
_1526 = ((frost$collections$CollectionView*) _1503);
ITable* $tmp674 = _1526->$class->itable;
while ($tmp674->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp674 = $tmp674->next;
}
_1527 = $tmp674->methods[0];
_1528 = _1527(_1526);
_1529 = _1505.value;
_1530 = _1528.value;
_1531 = _1529 < _1530;
_1532 = (frost$core$Bit) {_1531};
_1533 = _1532.value;
if (_1533) goto block167; else goto block168;
block168:;
_1535 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s675, _1535, &$s676);
abort(); // unreachable
block167:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1539 = &_1503->data;
_1540 = *_1539;
_1541 = _1540.value;
_1542 = frost$core$Int64$init$frost$core$Int(_1505);
_1543 = _1542.value;
_1544 = _1517;
frost$core$Frost$ref$frost$core$Object$Q(_1544);
_1546 = ((frost$core$Object**)_1541)[_1543];
_1547 = _1546;
frost$core$Frost$unref$frost$core$Object$Q(_1547);
((frost$core$Object**)_1541)[_1543] = _1517;
_1551 = _1517;
frost$core$Frost$unref$frost$core$Object$Q(_1551);
_1553 = *(&local37);
_1554 = ((frost$core$Object*) _1553);
frost$core$Frost$unref$frost$core$Object$Q(_1554);
*(&local37) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block80;
block163:;
_1558 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:739:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1561 = _643.value;
_1562 = _1558.value;
_1563 = _1561 == _1562;
_1564 = (frost$core$Bit) {_1563};
_1566 = _1564.value;
if (_1566) goto block170; else goto block171;
block170:;
_1568 = &_641->$data.$POINTER_GET_INDEX.field0;
_1569 = *_1568;
_1570 = &_641->$data.$POINTER_GET_INDEX.field1;
_1571 = *_1570;
*(&local38) = ((org$frostlang$frostc$IR$Value*) NULL);
_1573 = ((frost$core$Object*) _1571);
frost$core$Frost$ref$frost$core$Object$Q(_1573);
_1575 = *(&local38);
_1576 = ((frost$core$Object*) _1575);
frost$core$Frost$unref$frost$core$Object$Q(_1576);
*(&local38) = _1571;
_1579 = &_641->$data.$POINTER_GET_INDEX.field2;
_1580 = *_1579;
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
_1582 = ((frost$core$Object*) _1580);
frost$core$Frost$ref$frost$core$Object$Q(_1582);
_1584 = *(&local39);
_1585 = ((frost$core$Object*) _1584);
frost$core$Frost$unref$frost$core$Object$Q(_1585);
*(&local39) = _1580;
_1588 = &_641->$data.$POINTER_GET_INDEX.field3;
_1589 = *_1588;
*(&local40) = ((org$frostlang$frostc$Type*) NULL);
_1591 = ((frost$core$Object*) _1589);
frost$core$Frost$ref$frost$core$Object$Q(_1591);
_1593 = *(&local40);
_1594 = ((frost$core$Object*) _1593);
frost$core$Frost$unref$frost$core$Object$Q(_1594);
*(&local40) = _1589;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:740
_1598 = *(&local2);
_1599 = *(&local38);
_1600 = ($fn677) _1598->$class->vtable[2];
_1601 = _1600(_1598, _1599);
_1602 = *(&local2);
_1603 = *(&local39);
_1604 = ($fn678) _1602->$class->vtable[2];
_1605 = _1604(_1602, _1603);
_1606 = &param0->memoryLayout;
_1607 = *_1606;
_1608 = *(&local40);
_1609 = ($fn679) _1607->$class->vtable[7];
_1610 = _1609(_1607, _1608);
_1611 = frost$core$Int64$init$frost$core$Int(_1610);
_1612 = _1605.value;
_1613 = _1611.value;
_1614 = _1612 * _1613;
_1615 = (frost$core$Int64) {_1614};
_1616 = _1601.value;
_1617 = _1615.value;
_1618 = _1616 + _1617;
_1619 = (frost$core$Int64) {_1618};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:741:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1622 = _1619.value;
_1623 = ((int64_t) _1622);
_1624 = (frost$core$Int) {_1623};
_1626 = frost$unsafe$Pointer$init$frost$core$Int(_1624);
*(&local41) = _1626;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:742
_1629 = &param0->stack;
_1630 = *_1629;
_1631 = _1630.value;
_1632 = (frost$core$Int64) {0u};
*((frost$core$Int64*)_1631) = _1632;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:743
_1635 = (frost$core$Int) {0u};
_1636 = &param0->memoryLayout;
_1637 = *_1636;
_1638 = *(&local40);
_1639 = ($fn680) _1637->$class->vtable[7];
_1640 = _1639(_1637, _1638);
_1641 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.min(other:frost.core.Int):frost.core.Int from Interpreter.frost:743:64
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:776
_1644 = _1640.value;
_1645 = _1641.value;
_1646 = _1644 < _1645;
_1647 = (frost$core$Bit) {_1646};
_1648 = _1647.value;
if (_1648) goto block175; else goto block176;
block175:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:777
_1651 = _1640.value;
_1652 = (frost$core$Int) {_1651};
*(&local42) = _1652;
goto block174;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:779
_1656 = _1641.value;
_1657 = (frost$core$Int) {_1656};
*(&local42) = _1657;
goto block174;
block174:;
_1660 = *(&local42);
_1661 = (frost$core$Bit) {false};
_1662 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1635, _1660, _1661);
_1663 = _1662.min;
*(&local43) = _1663;
_1665 = _1662.max;
_1666 = _1662.inclusive;
_1667 = _1666.value;
_1668 = (frost$core$Int) {1u};
if (_1667) goto block180; else goto block181;
block180:;
_1670 = _1663.value;
_1671 = _1665.value;
_1672 = _1670 <= _1671;
_1673 = (frost$core$Bit) {_1672};
_1674 = _1673.value;
if (_1674) goto block177; else goto block178;
block181:;
_1676 = _1663.value;
_1677 = _1665.value;
_1678 = _1676 < _1677;
_1679 = (frost$core$Bit) {_1678};
_1680 = _1679.value;
if (_1680) goto block177; else goto block178;
block177:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:744
_1683 = &param0->stack;
_1684 = *_1683;
_1685 = _1684.value;
_1686 = *(&local43);
_1687 = frost$core$Int64$init$frost$core$Int(_1686);
_1688 = *(&local41);
_1689 = _1688.value;
_1690 = *(&local43);
_1691 = frost$core$Int64$init$frost$core$Int(_1690);
_1692 = _1691.value;
_1693 = ((frost$core$UInt8*)_1689)[_1692];
_1694 = _1687.value;
((frost$core$UInt8*)_1685)[_1694] = _1693;
_1697 = *(&local43);
_1698 = _1665.value;
_1699 = _1697.value;
_1700 = _1698 - _1699;
_1701 = (frost$core$Int) {_1700};
if (_1667) goto block183; else goto block184;
block183:;
_1703 = _1701.value;
_1704 = _1668.value;
_1705 = _1703 >= _1704;
_1706 = (frost$core$Bit) {_1705};
_1707 = _1706.value;
if (_1707) goto block182; else goto block178;
block184:;
_1709 = _1701.value;
_1710 = _1668.value;
_1711 = _1709 > _1710;
_1712 = (frost$core$Bit) {_1711};
_1713 = _1712.value;
if (_1713) goto block182; else goto block178;
block182:;
_1715 = _1697.value;
_1716 = _1668.value;
_1717 = _1715 + _1716;
_1718 = (frost$core$Int) {_1717};
*(&local43) = _1718;
goto block177;
block178:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:746
_1722 = *(&local2);
_1723 = &_1722->statements;
_1724 = *_1723;
_1725 = *(&local6);
_1726 = _1725.value;
_1727 = &param0->stack;
_1728 = *_1727;
_1729 = _1728.value;
_1730 = *((frost$core$Int64*)_1729);
_1731 = ((frost$core$Int64$nullable) { _1730, true });
frost$core$Object* $tmp681;
if (_1731.nonnull) {
    frost$core$Int64$wrapper* $tmp682;
    $tmp682 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp682->value = ((frost$core$Int64) _1731.value);
    $tmp681 = ((frost$core$Object*) $tmp682);
}
else {
    $tmp681 = NULL;
}
_1732 = $tmp681;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:746:39
_1734 = (frost$core$Int) {0u};
_1735 = _1726.value;
_1736 = _1734.value;
_1737 = _1735 >= _1736;
_1738 = (frost$core$Bit) {_1737};
_1739 = _1738.value;
if (_1739) goto block188; else goto block187;
block188:;
_1741 = ((frost$collections$CollectionView*) _1724);
ITable* $tmp683 = _1741->$class->itable;
while ($tmp683->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp683 = $tmp683->next;
}
_1742 = $tmp683->methods[0];
_1743 = _1742(_1741);
_1744 = _1726.value;
_1745 = _1743.value;
_1746 = _1744 < _1745;
_1747 = (frost$core$Bit) {_1746};
_1748 = _1747.value;
if (_1748) goto block186; else goto block187;
block187:;
_1750 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s684, _1750, &$s685);
abort(); // unreachable
block186:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_1754 = &_1724->data;
_1755 = *_1754;
_1756 = _1755.value;
_1757 = frost$core$Int64$init$frost$core$Int(_1726);
_1758 = _1757.value;
_1759 = _1732;
frost$core$Frost$ref$frost$core$Object$Q(_1759);
_1761 = ((frost$core$Object**)_1756)[_1758];
_1762 = _1761;
frost$core$Frost$unref$frost$core$Object$Q(_1762);
((frost$core$Object**)_1756)[_1758] = _1732;
_1766 = _1732;
frost$core$Frost$unref$frost$core$Object$Q(_1766);
_1768 = *(&local40);
_1769 = ((frost$core$Object*) _1768);
frost$core$Frost$unref$frost$core$Object$Q(_1769);
*(&local40) = ((org$frostlang$frostc$Type*) NULL);
_1772 = *(&local39);
_1773 = ((frost$core$Object*) _1772);
frost$core$Frost$unref$frost$core$Object$Q(_1773);
*(&local39) = ((org$frostlang$frostc$IR$Value*) NULL);
_1776 = *(&local38);
_1777 = ((frost$core$Object*) _1776);
frost$core$Frost$unref$frost$core$Object$Q(_1777);
*(&local38) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block80;
block171:;
_1781 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:748:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1784 = _643.value;
_1785 = _1781.value;
_1786 = _1784 == _1785;
_1787 = (frost$core$Bit) {_1786};
_1789 = _1787.value;
if (_1789) goto block189; else goto block190;
block189:;
_1791 = &_641->$data.$POINTER_SET_INDEX.field0;
_1792 = *_1791;
_1793 = &_641->$data.$POINTER_SET_INDEX.field1;
_1794 = *_1793;
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
_1796 = ((frost$core$Object*) _1794);
frost$core$Frost$ref$frost$core$Object$Q(_1796);
_1798 = *(&local44);
_1799 = ((frost$core$Object*) _1798);
frost$core$Frost$unref$frost$core$Object$Q(_1799);
*(&local44) = _1794;
_1802 = &_641->$data.$POINTER_SET_INDEX.field2;
_1803 = *_1802;
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
_1805 = ((frost$core$Object*) _1803);
frost$core$Frost$ref$frost$core$Object$Q(_1805);
_1807 = *(&local45);
_1808 = ((frost$core$Object*) _1807);
frost$core$Frost$unref$frost$core$Object$Q(_1808);
*(&local45) = _1803;
_1811 = &_641->$data.$POINTER_SET_INDEX.field3;
_1812 = *_1811;
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
_1814 = ((frost$core$Object*) _1812);
frost$core$Frost$ref$frost$core$Object$Q(_1814);
_1816 = *(&local46);
_1817 = ((frost$core$Object*) _1816);
frost$core$Frost$unref$frost$core$Object$Q(_1817);
*(&local46) = _1812;
_1820 = &_641->$data.$POINTER_SET_INDEX.field4;
_1821 = *_1820;
*(&local47) = ((org$frostlang$frostc$Type*) NULL);
_1823 = ((frost$core$Object*) _1821);
frost$core$Frost$ref$frost$core$Object$Q(_1823);
_1825 = *(&local47);
_1826 = ((frost$core$Object*) _1825);
frost$core$Frost$unref$frost$core$Object$Q(_1826);
*(&local47) = _1821;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:749
_1830 = *(&local2);
_1831 = *(&local45);
_1832 = ($fn686) _1830->$class->vtable[2];
_1833 = _1832(_1830, _1831);
_1834 = *(&local2);
_1835 = *(&local46);
_1836 = ($fn687) _1834->$class->vtable[2];
_1837 = _1836(_1834, _1835);
_1838 = &param0->memoryLayout;
_1839 = *_1838;
_1840 = *(&local44);
_1841 = ($fn688) _1840->$class->vtable[2];
_1842 = _1841(_1840);
_1843 = ($fn689) _1839->$class->vtable[7];
_1844 = _1843(_1839, _1842);
_1845 = frost$core$Int64$init$frost$core$Int(_1844);
_1846 = _1837.value;
_1847 = _1845.value;
_1848 = _1846 * _1847;
_1849 = (frost$core$Int64) {_1848};
_1850 = _1833.value;
_1851 = _1849.value;
_1852 = _1850 + _1851;
_1853 = (frost$core$Int64) {_1852};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:750:63
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1856 = _1853.value;
_1857 = ((int64_t) _1856);
_1858 = (frost$core$Int) {_1857};
_1860 = frost$unsafe$Pointer$init$frost$core$Int(_1858);
*(&local48) = _1860;
_1862 = ((frost$core$Object*) _1842);
frost$core$Frost$unref$frost$core$Object$Q(_1862);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:751
_1865 = *(&local2);
_1866 = *(&local44);
_1867 = ($fn690) _1865->$class->vtable[2];
_1868 = _1867(_1865, _1866);
*(&local49) = _1868;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:752
_1871 = &param0->stack;
_1872 = *_1871;
_1873 = _1872.value;
_1874 = *(&local49);
*((frost$core$Int64*)_1873) = _1874;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:753
_1877 = (frost$core$Int) {0u};
_1878 = &param0->memoryLayout;
_1879 = *_1878;
_1880 = *(&local44);
_1881 = ($fn691) _1880->$class->vtable[2];
_1882 = _1881(_1880);
_1883 = ($fn692) _1879->$class->vtable[7];
_1884 = _1883(_1879, _1882);
_1885 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.min(other:frost.core.Int):frost.core.Int from Interpreter.frost:753:72
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:776
_1888 = _1884.value;
_1889 = _1885.value;
_1890 = _1888 < _1889;
_1891 = (frost$core$Bit) {_1890};
_1892 = _1891.value;
if (_1892) goto block194; else goto block195;
block194:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:777
_1895 = _1884.value;
_1896 = (frost$core$Int) {_1895};
*(&local50) = _1896;
goto block193;
block195:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:779
_1900 = _1885.value;
_1901 = (frost$core$Int) {_1900};
*(&local50) = _1901;
goto block193;
block193:;
_1904 = *(&local50);
_1905 = (frost$core$Bit) {false};
_1906 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1877, _1904, _1905);
_1907 = _1906.min;
*(&local51) = _1907;
_1909 = _1906.max;
_1910 = _1906.inclusive;
_1911 = _1910.value;
_1912 = (frost$core$Int) {1u};
if (_1911) goto block199; else goto block200;
block199:;
_1914 = _1907.value;
_1915 = _1909.value;
_1916 = _1914 <= _1915;
_1917 = (frost$core$Bit) {_1916};
_1918 = _1917.value;
if (_1918) goto block196; else goto block197;
block200:;
_1920 = _1907.value;
_1921 = _1909.value;
_1922 = _1920 < _1921;
_1923 = (frost$core$Bit) {_1922};
_1924 = _1923.value;
if (_1924) goto block196; else goto block197;
block196:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:754
_1927 = *(&local48);
_1928 = _1927.value;
_1929 = *(&local51);
_1930 = frost$core$Int64$init$frost$core$Int(_1929);
_1931 = &param0->stack;
_1932 = *_1931;
_1933 = _1932.value;
_1934 = *(&local51);
_1935 = frost$core$Int64$init$frost$core$Int(_1934);
_1936 = _1935.value;
_1937 = ((frost$core$UInt8*)_1933)[_1936];
_1938 = _1930.value;
((frost$core$UInt8*)_1928)[_1938] = _1937;
_1941 = *(&local51);
_1942 = _1909.value;
_1943 = _1941.value;
_1944 = _1942 - _1943;
_1945 = (frost$core$Int) {_1944};
if (_1911) goto block202; else goto block203;
block202:;
_1947 = _1945.value;
_1948 = _1912.value;
_1949 = _1947 >= _1948;
_1950 = (frost$core$Bit) {_1949};
_1951 = _1950.value;
if (_1951) goto block201; else goto block197;
block203:;
_1953 = _1945.value;
_1954 = _1912.value;
_1955 = _1953 > _1954;
_1956 = (frost$core$Bit) {_1955};
_1957 = _1956.value;
if (_1957) goto block201; else goto block197;
block201:;
_1959 = _1941.value;
_1960 = _1912.value;
_1961 = _1959 + _1960;
_1962 = (frost$core$Int) {_1961};
*(&local51) = _1962;
goto block196;
block197:;
_1965 = ((frost$core$Object*) _1882);
frost$core$Frost$unref$frost$core$Object$Q(_1965);
_1967 = *(&local47);
_1968 = ((frost$core$Object*) _1967);
frost$core$Frost$unref$frost$core$Object$Q(_1968);
*(&local47) = ((org$frostlang$frostc$Type*) NULL);
_1971 = *(&local46);
_1972 = ((frost$core$Object*) _1971);
frost$core$Frost$unref$frost$core$Object$Q(_1972);
*(&local46) = ((org$frostlang$frostc$IR$Value*) NULL);
_1975 = *(&local45);
_1976 = ((frost$core$Object*) _1975);
frost$core$Frost$unref$frost$core$Object$Q(_1976);
*(&local45) = ((org$frostlang$frostc$IR$Value*) NULL);
_1979 = *(&local44);
_1980 = ((frost$core$Object*) _1979);
frost$core$Frost$unref$frost$core$Object$Q(_1980);
*(&local44) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block80;
block190:;
_1984 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:757:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1987 = _643.value;
_1988 = _1984.value;
_1989 = _1987 == _1988;
_1990 = (frost$core$Bit) {_1989};
_1992 = _1990.value;
if (_1992) goto block204; else goto block205;
block204:;
_1994 = &_641->$data.$RETURN.field0;
_1995 = *_1994;
_1996 = &_641->$data.$RETURN.field1;
_1997 = *_1996;
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
_1999 = ((frost$core$Object*) _1997);
frost$core$Frost$ref$frost$core$Object$Q(_1999);
_2001 = *(&local52);
_2002 = ((frost$core$Object*) _2001);
frost$core$Frost$unref$frost$core$Object$Q(_2002);
*(&local52) = _1997;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:758
_2006 = &param0->contexts;
_2007 = *_2006;
_2008 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_2007);
_2009 = ((org$frostlang$frostc$Interpreter$Context*) _2008);
_2010 = _2008;
frost$core$Frost$unref$frost$core$Object$Q(_2010);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:759
_2013 = *(&local52);
_2014 = _2013 != NULL;
_2015 = (frost$core$Bit) {_2014};
_2016 = _2015.value;
if (_2016) goto block207; else goto block208;
block207:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:760
_2019 = *(&local2);
_2020 = *(&local52);
_2021 = _2020 != NULL;
_2022 = (frost$core$Bit) {_2021};
_2023 = _2022.value;
if (_2023) goto block209; else goto block210;
block210:;
_2025 = (frost$core$Int) {760u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s693, _2025, &$s694);
abort(); // unreachable
block209:;
_2028 = _2020;
_2029 = ($fn695) _2019->$class->vtable[2];
_2030 = _2029(_2019, _2028);
_2031 = *(&local52);
_2032 = ((frost$core$Object*) _2031);
frost$core$Frost$unref$frost$core$Object$Q(_2032);
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
_2035 = *(&local7);
_2036 = ((frost$core$Object*) _2035);
frost$core$Frost$unref$frost$core$Object$Q(_2036);
*(&local7) = ((org$frostlang$frostc$IR$Statement*) NULL);
_2039 = *(&local2);
_2040 = ((frost$core$Object*) _2039);
frost$core$Frost$unref$frost$core$Object$Q(_2040);
*(&local2) = ((org$frostlang$frostc$Interpreter$Context*) NULL);
_2043 = *(&local0);
_2044 = ((frost$core$Object*) _2043);
frost$core$Frost$unref$frost$core$Object$Q(_2044);
*(&local0) = ((org$frostlang$frostc$Interpreter$MethodCode*) NULL);
return _2030;
block208:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:762
_2049 = (frost$core$Int64) {18446744073709551615u};
_2050 = *(&local52);
_2051 = ((frost$core$Object*) _2050);
frost$core$Frost$unref$frost$core$Object$Q(_2051);
*(&local52) = ((org$frostlang$frostc$IR$Value*) NULL);
_2054 = *(&local7);
_2055 = ((frost$core$Object*) _2054);
frost$core$Frost$unref$frost$core$Object$Q(_2055);
*(&local7) = ((org$frostlang$frostc$IR$Statement*) NULL);
_2058 = *(&local2);
_2059 = ((frost$core$Object*) _2058);
frost$core$Frost$unref$frost$core$Object$Q(_2059);
*(&local2) = ((org$frostlang$frostc$Interpreter$Context*) NULL);
_2062 = *(&local0);
_2063 = ((frost$core$Object*) _2062);
frost$core$Frost$unref$frost$core$Object$Q(_2063);
*(&local0) = ((org$frostlang$frostc$Interpreter$MethodCode*) NULL);
return _2049;
block205:;
_2067 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:764:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2070 = _643.value;
_2071 = _2067.value;
_2072 = _2070 == _2071;
_2073 = (frost$core$Bit) {_2072};
_2075 = _2073.value;
if (_2075) goto block211; else goto block212;
block211:;
_2077 = &_641->$data.$STATIC_CALL.field0;
_2078 = *_2077;
_2079 = &_641->$data.$STATIC_CALL.field1;
_2080 = *_2079;
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
_2082 = ((frost$core$Object*) _2080);
frost$core$Frost$ref$frost$core$Object$Q(_2082);
_2084 = *(&local53);
_2085 = ((frost$core$Object*) _2084);
frost$core$Frost$unref$frost$core$Object$Q(_2085);
*(&local53) = _2080;
_2088 = &_641->$data.$STATIC_CALL.field2;
_2089 = *_2088;
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
_2091 = ((frost$core$Object*) _2089);
frost$core$Frost$ref$frost$core$Object$Q(_2091);
_2093 = *(&local54);
_2094 = ((frost$core$Object*) _2093);
frost$core$Frost$unref$frost$core$Object$Q(_2094);
*(&local54) = _2089;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:765
_2098 = *(&local2);
_2099 = &_2098->statements;
_2100 = *_2099;
_2101 = *(&local6);
_2102 = _2101.value;
_2103 = *(&local53);
_2104 = *(&local54);
_2105 = ($fn696) param0->$class->vtable[23];
_2106 = _2105(param0, _2103, _2104);
_2107 = ((frost$core$Int64$nullable) { _2106, true });
frost$core$Object* $tmp697;
if (_2107.nonnull) {
    frost$core$Int64$wrapper* $tmp698;
    $tmp698 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp698->value = ((frost$core$Int64) _2107.value);
    $tmp697 = ((frost$core$Object*) $tmp698);
}
else {
    $tmp697 = NULL;
}
_2108 = $tmp697;
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from Interpreter.frost:765:39
_2110 = (frost$core$Int) {0u};
_2111 = _2102.value;
_2112 = _2110.value;
_2113 = _2111 >= _2112;
_2114 = (frost$core$Bit) {_2113};
_2115 = _2114.value;
if (_2115) goto block217; else goto block216;
block217:;
_2117 = ((frost$collections$CollectionView*) _2100);
ITable* $tmp699 = _2117->$class->itable;
while ($tmp699->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp699 = $tmp699->next;
}
_2118 = $tmp699->methods[0];
_2119 = _2118(_2117);
_2120 = _2102.value;
_2121 = _2119.value;
_2122 = _2120 < _2121;
_2123 = (frost$core$Bit) {_2122};
_2124 = _2123.value;
if (_2124) goto block215; else goto block216;
block216:;
_2126 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s700, _2126, &$s701);
abort(); // unreachable
block215:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_2130 = &_2100->data;
_2131 = *_2130;
_2132 = _2131.value;
_2133 = frost$core$Int64$init$frost$core$Int(_2102);
_2134 = _2133.value;
_2135 = _2108;
frost$core$Frost$ref$frost$core$Object$Q(_2135);
_2137 = ((frost$core$Object**)_2132)[_2134];
_2138 = _2137;
frost$core$Frost$unref$frost$core$Object$Q(_2138);
((frost$core$Object**)_2132)[_2134] = _2108;
_2142 = _2108;
frost$core$Frost$unref$frost$core$Object$Q(_2142);
_2144 = *(&local54);
_2145 = ((frost$core$Object*) _2144);
frost$core$Frost$unref$frost$core$Object$Q(_2145);
*(&local54) = ((org$frostlang$frostc$FixedArray*) NULL);
_2148 = *(&local53);
_2149 = ((frost$core$Object*) _2148);
frost$core$Frost$unref$frost$core$Object$Q(_2149);
*(&local53) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block80;
block212:;
_2153 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:767:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_2156 = _643.value;
_2157 = _2153.value;
_2158 = _2156 == _2157;
_2159 = (frost$core$Bit) {_2158};
_2161 = _2159.value;
if (_2161) goto block218; else goto block219;
block218:;
_2163 = &_641->$data.$STORE.field0;
_2164 = *_2163;
_2165 = &_641->$data.$STORE.field1;
_2166 = *_2165;
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
_2168 = ((frost$core$Object*) _2166);
frost$core$Frost$ref$frost$core$Object$Q(_2168);
_2170 = *(&local55);
_2171 = ((frost$core$Object*) _2170);
frost$core$Frost$unref$frost$core$Object$Q(_2171);
*(&local55) = _2166;
_2174 = &_641->$data.$STORE.field2;
_2175 = *_2174;
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
_2177 = ((frost$core$Object*) _2175);
frost$core$Frost$ref$frost$core$Object$Q(_2177);
_2179 = *(&local56);
_2180 = ((frost$core$Object*) _2179);
frost$core$Frost$unref$frost$core$Object$Q(_2180);
*(&local56) = _2175;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:768
_2184 = *(&local2);
_2185 = *(&local55);
_2186 = ($fn702) _2184->$class->vtable[2];
_2187 = _2186(_2184, _2185);
*(&local57) = _2187;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:769
_2190 = *(&local2);
_2191 = *(&local56);
_2192 = ($fn703) _2190->$class->vtable[2];
_2193 = _2192(_2190, _2191);
*(&local58) = _2193;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:770
_2196 = *(&local58);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:770:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_2199 = _2196.value;
_2200 = ((int64_t) _2199);
_2201 = (frost$core$Int) {_2200};
_2203 = frost$unsafe$Pointer$init$frost$core$Int(_2201);
_2204 = _2203.value;
_2205 = *(&local57);
*((frost$core$Int64*)_2204) = _2205;
_2207 = *(&local56);
_2208 = ((frost$core$Object*) _2207);
frost$core$Frost$unref$frost$core$Object$Q(_2208);
*(&local56) = ((org$frostlang$frostc$IR$Value*) NULL);
_2211 = *(&local55);
_2212 = ((frost$core$Object*) _2211);
frost$core$Frost$unref$frost$core$Object$Q(_2212);
*(&local55) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block80;
block219:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:773
_2217 = (frost$core$Int) {773u};
_2218 = *(&local7);
_2219 = ((frost$core$Object*) _2218);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Interpreter.frost:773:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_2222 = ($fn704) _2219->$class->vtable[0];
_2223 = _2222(_2219);
_2224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s705, _2223);
_2225 = ((frost$core$Object*) _2224);
frost$core$Frost$ref$frost$core$Object$Q(_2225);
_2227 = ((frost$core$Object*) _2224);
frost$core$Frost$unref$frost$core$Object$Q(_2227);
_2229 = ((frost$core$Object*) _2223);
frost$core$Frost$unref$frost$core$Object$Q(_2229);
_2232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_2224, &$s706);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s707, _2217, _2232);
_2234 = ((frost$core$Object*) _2232);
frost$core$Frost$unref$frost$core$Object$Q(_2234);
_2236 = ((frost$core$Object*) _2224);
frost$core$Frost$unref$frost$core$Object$Q(_2236);
abort(); // unreachable
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:776
_2240 = *(&local5);
_2241 = (frost$core$Int) {1u};
_2242 = _2240.value;
_2243 = _2241.value;
_2244 = _2242 + _2243;
_2245 = (frost$core$Int) {_2244};
*(&local5) = _2245;
_2247 = *(&local7);
_2248 = ((frost$core$Object*) _2247);
frost$core$Frost$unref$frost$core$Object$Q(_2248);
*(&local7) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block56;
block57:;
goto block223;
block223:;

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
$fn708 _36;
frost$core$Int64 _37;
frost$core$Object* _38;
frost$collections$Stack** _41;
frost$collections$Stack* _42;
org$frostlang$frostc$Interpreter$Context* _43;
org$frostlang$frostc$Interpreter$MethodCode* _44;
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
$fn709 _84;
frost$collections$Iterator* _85;
$fn710 _87;
frost$core$Bit _88;
bool _89;
$fn711 _91;
frost$core$Object* _92;
frost$core$Int64 _93;
frost$core$Int64 _96;
int64_t _99;
int64_t _100;
frost$core$Int _101;
frost$unsafe$Pointer _103;
$fn712 _104;
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
$fn713 _134;
frost$core$Int _135;
frost$core$Int _137;
int64_t _140;
int64_t _141;
bool _142;
frost$core$Bit _143;
bool _145;
frost$core$Int _147;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:781
_1 = &param0->main;
_2 = *_1;
_3 = _2 == NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:782
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Interpreter.frost:782:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s714);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s715);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:783
_18 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_18);
_20 = (frost$core$Int) {783u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s716, _20, &$s717);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:785
_24 = &param0->main;
_25 = *_24;
_26 = _25 != NULL;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block5; else goto block6;
block6:;
_30 = (frost$core$Int) {785u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s718, _30, &$s719);
abort(); // unreachable
block5:;
_33 = _25;
_34 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray), (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init(_34);
_36 = ($fn720) param0->$class->vtable[23];
_37 = _36(param0, _33, _34);
_38 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_38);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:786
_41 = &param0->contexts;
_42 = *_41;
_43 = (org$frostlang$frostc$Interpreter$Context*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$Context), (frost$core$Class*) &org$frostlang$frostc$Interpreter$Context$class);
_44 = (org$frostlang$frostc$Interpreter$MethodCode*) frostObjectAlloc(sizeof(org$frostlang$frostc$Interpreter$MethodCode), (frost$core$Class*) &org$frostlang$frostc$Interpreter$MethodCode$class);
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
org$frostlang$frostc$Interpreter$MethodCode$init$frost$collections$Array$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTfrost$core$Int$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT$GT$frost$core$Int(_44, _45, _48, _51, _54, _57);
org$frostlang$frostc$Interpreter$Context$init$org$frostlang$frostc$Interpreter$org$frostlang$frostc$Interpreter$MethodCode(_43, param0, _44);
_60 = ((frost$core$Object*) _43);
// begin inline call to method frost.collections.Stack.push(v:frost.collections.Stack.T) from Interpreter.frost:786:22
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:787
_81 = &param0->strings;
_82 = *_81;
_83 = ((frost$collections$MapView*) _82);
ITable* $tmp721 = _83->$class->itable;
while ($tmp721->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp721 = $tmp721->next;
}
_84 = $tmp721->methods[5];
_85 = _84(_83);
goto block8;
block8:;
ITable* $tmp722 = _85->$class->itable;
while ($tmp722->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp722 = $tmp722->next;
}
_87 = $tmp722->methods[0];
_88 = _87(_85);
_89 = _88.value;
if (_89) goto block10; else goto block9;
block9:;
ITable* $tmp723 = _85->$class->itable;
while ($tmp723->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp723 = $tmp723->next;
}
_91 = $tmp723->methods[1];
_92 = _91(_85);
_93 = ((frost$core$Int64$wrapper*) _92)->value;
*(&local0) = _93;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:788
_96 = *(&local0);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:788:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_99 = _96.value;
_100 = ((int64_t) _99);
_101 = (frost$core$Int) {_100};
_103 = frost$unsafe$Pointer$init$frost$core$Int(_101);
_104 = ($fn724) param0->$class->vtable[11];
_104(param0, _103);
_106 = _92;
frost$core$Frost$unref$frost$core$Object$Q(_106);
goto block8;
block10:;
_109 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_109);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:790
_112 = &param0->strings;
_113 = *_112;
frost$collections$HashMap$clear(_113);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:791
_116 = &param0->contexts;
_117 = *_116;
_118 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_117);
_119 = ((org$frostlang$frostc$Interpreter$Context*) _118);
_120 = _118;
frost$core$Frost$unref$frost$core$Object$Q(_120);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:792
_123 = &param0->builtins;
_124 = *_123;
frost$collections$IdentityMap$clear(_124);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:793
_127 = &param0->contexts;
_128 = *_127;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Interpreter.frost:793:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_131 = &_128->contents;
_132 = *_131;
_133 = ((frost$collections$CollectionView*) _132);
ITable* $tmp725 = _133->$class->itable;
while ($tmp725->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp725 = $tmp725->next;
}
_134 = $tmp725->methods[0];
_135 = _134(_133);
_137 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Interpreter.frost:793:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_140 = _135.value;
_141 = _137.value;
_142 = _140 == _141;
_143 = (frost$core$Bit) {_142};
_145 = _143.value;
if (_145) goto block14; else goto block15;
block15:;
_147 = (frost$core$Int) {793u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s726, _147);
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

