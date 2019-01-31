#include "org/frostlang/frostc/expression/Call.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Pair.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/expression/Binary/Operator.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/ImmutableArray.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Key.h"
#include "frost/io/Console.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Formattable.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/expression/Dot.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/Scanner.h"
#include "org/frostlang/frostc/Symbol/Kind.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Call$class_type org$frostlang$frostc$expression$Call$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Call$cleanup} };

typedef frost$core$Bit (*$fn44)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn59)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn83)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn107)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn124)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn144)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn170)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn195)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn216)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn230)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn253)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn276)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn298)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn309)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn335)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn347)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn366)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn385)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn399)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn421)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn444)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn469)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn481)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn528)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn537)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn559)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn584)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn801)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn810)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn833)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn858)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn918)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn949)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn999)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1003)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1008)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1048)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1052)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1057)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn1074)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1088)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1159)(org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn1163)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$Int64 (*$fn1174)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1250)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1286)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1290)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1295)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1301)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn1312)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn1350)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1366)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1391)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1411)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn1417)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn1441)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1464)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1508)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1518)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1522)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1527)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1535)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1539)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1555)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1567)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1596)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1629)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1652)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn1769)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1788)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1805)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn1824)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1849)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn1858)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1870)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1876)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1899)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn1944)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1951)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1967)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2008)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2019)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2045)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2055)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2072)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2076)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2081)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2086)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2099)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2104)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2121)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2136)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2143)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2148)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2229)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2244)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2251)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2256)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2265)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn2337)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2354)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2433)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2450)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2536)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2559)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn2571)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2575)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2580)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2631)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2637)(org$frostlang$frostc$Compiler$TypeContext*);
typedef frost$core$Int64 (*$fn2671)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2695)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn2708)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2712)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2717)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2769)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2775)(org$frostlang$frostc$Compiler$TypeContext*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2905)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn2948)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2970)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2974)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2979)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2992)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2997)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3018)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3029)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3034)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn3049)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3092)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3096)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3101)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3114)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3119)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3130)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3140)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3169)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3180)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3185)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3196)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3206)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn3248)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3292)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3314)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3363)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3377)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn3406)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn3415)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3533)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn3665)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn3674)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn3697)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn3721)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3733)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3804)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3826)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3834)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3846)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3858)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3869)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn3879)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3923)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3932)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3967)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn4016)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn4102)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4122)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4181)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn4325)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4342)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c", 36, -3986479872985642702, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x72", 5, 20924392920, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63\x3a\x20", 31, 5572221770796053896, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s534 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static frost$core$String $s636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s736 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s761 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s816 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x65\x3a\x20\x63\x61\x6e\x27\x74\x20\x63\x6f\x65\x72\x63\x65\x20\x27", 20, -7237900421143798122, NULL };
static frost$core$String $s1317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x74\x6f\x20", 5, 14602620331, NULL };
static frost$core$String $s1323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x66\x69\x6e\x64\x42\x65\x73\x74\x4d\x65\x74\x68\x6f\x64\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x6d\x65\x74\x68\x6f\x64\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3e\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x41\x72\x67\x75\x6d\x65\x6e\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x2c\x20\x61\x72\x67\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f", 561, 3652659893303705938, NULL };
static frost$core$String $s1815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static frost$core$String $s1817 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static frost$core$String $s1833 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 16, 4303665098026904440, NULL };
static frost$core$String $s1835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static frost$core$String $s1841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1851 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s1853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static frost$core$String $s1855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static frost$core$String $s1863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1985 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72", 7, 227281454102470, NULL };
static frost$core$String $s2023 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x61\x72\x67\x65\x74", 6, 2290904182948, NULL };
static frost$core$String $s2078 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x20\x74\x61\x72\x67\x65\x74", 24, 8706842098394974193, NULL };
static frost$core$String $s2083 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x74\x61\x72\x67\x65\x74", 27, -7788775699050637059, NULL };
static frost$core$String $s2088 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x6d\x65\x72\x67\x65", 18, 706487662591854902, NULL };
static frost$core$String $s2381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static frost$core$String $s2383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s2392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static frost$core$String $s2479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s2488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2604 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static frost$core$String $s2606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static frost$core$String $s2627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2741 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static frost$core$String $s2743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static frost$core$String $s2765 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2773 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2849 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2851 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x61\x6e\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x61\x6e\x64\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20", 33, -951937104078344354, NULL };
static frost$core$String $s2853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64", 20, -5656431249470931269, NULL };
static frost$core$String $s2871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2881 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x69\x74\x20\x66\x6f\x72\x20", 12, -9112629214783660015, NULL };
static frost$core$String $s2883 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2884 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20", 12, 8187822430156838052, NULL };
static frost$core$String $s2936 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2937 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3f\x20\x6e\x75\x6c\x6c", 11, 8052739787235849537, NULL };
static frost$core$String $s2981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3f\x20\x65\x72\x72\x6f\x72", 12, 1669979266660959244, NULL };
static frost$core$String $s3021 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s3068 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3072 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s3078 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3098 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x79\x62\x65\x20\x73\x75\x63\x63\x65\x73\x73", 13, 1014790702408506444, NULL };
static frost$core$String $s3103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x79\x62\x65\x20\x65\x72\x72\x6f\x72", 11, 6235211091261808005, NULL };
static frost$core$String $s3172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static frost$core$String $s3372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static frost$core$String $s3392 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x73\x20", 9, 1451156555704250829, NULL };
static frost$core$String $s3398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s3410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static frost$core$String $s3412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static frost$core$String $s3420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static frost$core$String $s3445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20", 7, 142360281799925, NULL };
static frost$core$String $s3447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x73\x74\x61\x6e\x63\x65", 8, 22203976303606054, NULL };
static frost$core$String $s3520 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3552 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s3617 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 21, -1285496544752055923, NULL };
static frost$core$String $s3619 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x63\x6f\x6e\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static frost$core$String $s3976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static frost$core$String $s4013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4014 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x72\x61\x77\x4d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2c\x20\x61\x72\x67\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 375, 7210268903382943599, NULL };
static frost$core$String $s4035 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static frost$core$String $s4037 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static frost$core$String $s4040 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s4074 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4097 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s4241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s4271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s4358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s4360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x75\x6e\x75\x73\x65\x64\x20\x61\x6e\x64\x20\x69\x73\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x27\x74\x72\x79\x27\x20\x62\x6c\x6f\x63\x6b", 43, 4374382365862179306, NULL };
static frost$core$String $s4362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 21, -4228310936216902871, NULL };

org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compilePointerIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$IR$Statement$ID local7;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$IR$Statement$ID local9;
org$frostlang$frostc$IR$Value* local10 = NULL;
org$frostlang$frostc$IR$Statement$ID local11;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$IR$Value* local13 = NULL;
org$frostlang$frostc$IR$Value* local14 = NULL;
org$frostlang$frostc$IR$Statement$ID local15;
org$frostlang$frostc$Type* local16 = NULL;
org$frostlang$frostc$IR$Value* local17 = NULL;
org$frostlang$frostc$IR$Value* local18 = NULL;
org$frostlang$frostc$IR$Statement$ID local19;
// line 24
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 25
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
// line 26
org$frostlang$frostc$Type** $tmp5 = &param3->target;
org$frostlang$frostc$Type* $tmp6 = *$tmp5;
frost$core$Bit $tmp7 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp6);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block3;
block1:;
// line 27
org$frostlang$frostc$Type** $tmp9 = &param3->target;
org$frostlang$frostc$Type* $tmp10 = *$tmp9;
org$frostlang$frostc$FixedArray* $tmp11 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp10);
frost$core$Int64 $tmp12 = (frost$core$Int64) {1};
frost$core$Object* $tmp13 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp11, $tmp12);
org$frostlang$frostc$Type* $tmp14 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, ((org$frostlang$frostc$Type*) $tmp13));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlang$frostc$Type* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = $tmp14;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q($tmp13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
goto block2;
block3:;
// line 1
// line 30
org$frostlang$frostc$Type** $tmp16 = &param3->target;
org$frostlang$frostc$Type* $tmp17 = *$tmp16;
org$frostlang$frostc$FixedArray* $tmp18 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp17);
frost$core$Int64 $tmp19 = (frost$core$Int64) {1};
frost$core$Object* $tmp20 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp18, $tmp19);
org$frostlang$frostc$FixedArray* $tmp21 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(((org$frostlang$frostc$Type*) $tmp20));
frost$core$Int64 $tmp22 = (frost$core$Int64) {1};
frost$core$Object* $tmp23 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp21, $tmp22);
org$frostlang$frostc$Type* $tmp24 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, ((org$frostlang$frostc$Type*) $tmp23));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlang$frostc$Type* $tmp25 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local1) = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q($tmp20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
goto block2;
block2:;
// line 32
org$frostlang$frostc$Type* $tmp26 = *(&local1);
frost$core$Bit $tmp27 = frost$core$Bit$init$builtin_bit($tmp26 == NULL);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block4; else goto block5;
block4:;
// line 33
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp29 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp30 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp31;
$tmp31 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp31->value = $tmp30;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp29, ((frost$core$Object*) $tmp31), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlang$frostc$Type* $tmp32 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp33 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp29;
block5:;
// line 35
org$frostlang$frostc$Type** $tmp34 = &param3->target;
org$frostlang$frostc$Type* $tmp35 = *$tmp34;
org$frostlang$frostc$Type$Kind* $tmp36 = &$tmp35->typeKind;
org$frostlang$frostc$Type$Kind $tmp37 = *$tmp36;
org$frostlang$frostc$Type$Kind$wrapper* $tmp38;
$tmp38 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp38->value = $tmp37;
frost$core$Int64 $tmp39 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp40 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp39);
org$frostlang$frostc$Type$Kind$wrapper* $tmp41;
$tmp41 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp41->value = $tmp40;
ITable* $tmp42 = ((frost$core$Equatable*) $tmp38)->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp42 = $tmp42->next;
}
$fn44 $tmp43 = $tmp42->methods[0];
frost$core$Bit $tmp45 = $tmp43(((frost$core$Equatable*) $tmp38), ((frost$core$Equatable*) $tmp41));
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp47 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s48, $tmp47);
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp41)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp38)));
// line 36
org$frostlang$frostc$MethodDecl** $tmp49 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp50 = *$tmp49;
frost$core$String** $tmp51 = &((org$frostlang$frostc$Symbol*) $tmp50)->name;
frost$core$String* $tmp52 = *$tmp51;
frost$core$Bit $tmp53 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp52, &$s54);
bool $tmp55 = $tmp53.value;
if ($tmp55) goto block9; else goto block10;
block9:;
// line 38
frost$core$Int64 $tmp56 = (frost$core$Int64) {0};
ITable* $tmp57 = param4->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
frost$core$Object* $tmp60 = $tmp58(param4, $tmp56);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp61 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp62 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp63 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp64 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp61, $tmp62, $tmp63, $tmp64);
org$frostlang$frostc$IR$Value* $tmp65 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp60), $tmp61);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
org$frostlang$frostc$IR$Value* $tmp66 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local2) = $tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
frost$core$Frost$unref$frost$core$Object$Q($tmp60);
// line 40
org$frostlang$frostc$IR$Value* $tmp67 = *(&local2);
frost$core$Bit $tmp68 = frost$core$Bit$init$builtin_bit($tmp67 == NULL);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block11; else goto block12;
block11:;
// line 41
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp70 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp71 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp72;
$tmp72 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp72->value = $tmp71;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp70, ((frost$core$Object*) $tmp72), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
org$frostlang$frostc$IR$Value* $tmp73 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp74 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp75 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp70;
block12:;
// line 43
org$frostlang$frostc$IR* $tmp76 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp77 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp78 = (frost$core$Int64) {17};
org$frostlang$frostc$IR$Value* $tmp79 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp80 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp79);
org$frostlang$frostc$Type* $tmp81 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp77, $tmp78, param1, $tmp80, $tmp81);
$fn83 $tmp82 = ($fn83) $tmp76->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp84 = $tmp82($tmp76, $tmp77);
*(&local3) = $tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// line 45
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp85 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp86 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp87;
$tmp87 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp87->value = $tmp86;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp88 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp89 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp90 = *(&local3);
org$frostlang$frostc$Type* $tmp91 = *(&local1);
org$frostlang$frostc$Type* $tmp92 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp91);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp88, $tmp89, $tmp90, $tmp92);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp85, ((frost$core$Object*) $tmp87), ((frost$core$Object*) $tmp88));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
org$frostlang$frostc$IR$Value* $tmp93 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp94 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp95 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp85;
block10:;
frost$core$Bit $tmp96 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp52, &$s97);
bool $tmp98 = $tmp96.value;
if ($tmp98) goto block13; else goto block14;
block13:;
// line 49
frost$core$Bit $tmp99 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp101 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s102, $tmp101);
abort(); // unreachable
block15:;
// line 50
org$frostlang$frostc$IR* $tmp103 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp104 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp105 = (frost$core$Int64) {18};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp104, $tmp105, param1, param2);
$fn107 $tmp106 = ($fn107) $tmp103->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp108 = $tmp106($tmp103, $tmp104);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// line 51
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp109 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp110 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp111;
$tmp111 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp111->value = $tmp110;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp109, ((frost$core$Object*) $tmp111), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
org$frostlang$frostc$Type* $tmp112 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp113 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp109;
block14:;
frost$core$Bit $tmp114 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp52, &$s115);
bool $tmp116 = $tmp114.value;
if ($tmp116) goto block17; else goto block18;
block17:;
// line 54
frost$core$Bit $tmp117 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp119 = (frost$core$Int64) {54};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s120, $tmp119);
abort(); // unreachable
block19:;
// line 55
frost$core$Int64 $tmp121 = (frost$core$Int64) {0};
ITable* $tmp122 = param4->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[0];
frost$core$Object* $tmp125 = $tmp123(param4, $tmp121);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp126 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp127 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp128 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp129 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp126, $tmp127, $tmp128, $tmp129);
org$frostlang$frostc$IR$Value* $tmp130 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp125), $tmp126);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
org$frostlang$frostc$IR$Value* $tmp131 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local4) = $tmp130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
// line 57
org$frostlang$frostc$IR$Value* $tmp132 = *(&local4);
frost$core$Bit $tmp133 = frost$core$Bit$init$builtin_bit($tmp132 == NULL);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block21; else goto block22;
block21:;
// line 58
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp135 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp137;
$tmp137 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp137->value = $tmp136;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp135, ((frost$core$Object*) $tmp137), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
org$frostlang$frostc$IR$Value* $tmp138 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp139 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp140 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp135;
block22:;
// line 60
frost$core$Int64 $tmp141 = (frost$core$Int64) {1};
ITable* $tmp142 = param4->$class->itable;
while ($tmp142->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp142 = $tmp142->next;
}
$fn144 $tmp143 = $tmp142->methods[0];
frost$core$Object* $tmp145 = $tmp143(param4, $tmp141);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp146 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp147 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp148 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp149 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp146, $tmp147, $tmp148, $tmp149);
org$frostlang$frostc$IR$Value* $tmp150 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp145), $tmp146);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
org$frostlang$frostc$IR$Value* $tmp151 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local5) = $tmp150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q($tmp145);
// line 62
org$frostlang$frostc$IR$Value* $tmp152 = *(&local5);
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit($tmp152 == NULL);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block23; else goto block24;
block23:;
// line 63
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp155 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp156 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp157;
$tmp157 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp157->value = $tmp156;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp155, ((frost$core$Object*) $tmp157), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
org$frostlang$frostc$IR$Value* $tmp158 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp159 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp160 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp161 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp155;
block24:;
// line 65
org$frostlang$frostc$IR* $tmp162 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp163 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp164 = (frost$core$Int64) {22};
org$frostlang$frostc$IR$Value* $tmp165 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp166 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp165);
org$frostlang$frostc$IR$Value* $tmp167 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp168 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp167);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp163, $tmp164, param1, param2, $tmp166, $tmp168);
$fn170 $tmp169 = ($fn170) $tmp162->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp171 = $tmp169($tmp162, $tmp163);
*(&local6) = $tmp171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// line 68
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp172 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp173 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp174;
$tmp174 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp174->value = $tmp173;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp175 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp176 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp177 = *(&local6);
org$frostlang$frostc$Type* $tmp178 = *(&local1);
org$frostlang$frostc$Type* $tmp179 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp178);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp175, $tmp176, $tmp177, $tmp179);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp172, ((frost$core$Object*) $tmp174), ((frost$core$Object*) $tmp175));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
org$frostlang$frostc$IR$Value* $tmp180 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp181 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp183 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp172;
block18:;
frost$core$Bit $tmp184 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp52, &$s185);
bool $tmp186 = $tmp184.value;
if ($tmp186) goto block25; else goto block26;
block25:;
// line 72
frost$core$Bit $tmp187 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp189 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s190, $tmp189);
abort(); // unreachable
block27:;
// line 73
org$frostlang$frostc$IR* $tmp191 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp192 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp193 = (frost$core$Int64) {19};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp192, $tmp193, param1, param2);
$fn195 $tmp194 = ($fn195) $tmp191->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp196 = $tmp194($tmp191, $tmp192);
*(&local7) = $tmp196;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// line 74
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp197 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp198 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp199;
$tmp199 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp199->value = $tmp198;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp200 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp201 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp202 = *(&local7);
org$frostlang$frostc$Type* $tmp203 = *(&local1);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp200, $tmp201, $tmp202, $tmp203);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp197, ((frost$core$Object*) $tmp199), ((frost$core$Object*) $tmp200));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
org$frostlang$frostc$Type* $tmp204 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp205 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp197;
block26:;
frost$core$Bit $tmp206 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp52, &$s207);
bool $tmp208 = $tmp206.value;
if ($tmp208) goto block29; else goto block30;
block29:;
// line 77
frost$core$Bit $tmp209 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp211 = (frost$core$Int64) {77};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s212, $tmp211);
abort(); // unreachable
block31:;
// line 78
frost$core$Int64 $tmp213 = (frost$core$Int64) {0};
ITable* $tmp214 = param4->$class->itable;
while ($tmp214->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp214 = $tmp214->next;
}
$fn216 $tmp215 = $tmp214->methods[0];
frost$core$Object* $tmp217 = $tmp215(param4, $tmp213);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp218 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp219 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp220 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp218, $tmp219, $tmp220, $tmp221);
org$frostlang$frostc$IR$Value* $tmp222 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp217), $tmp218);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
org$frostlang$frostc$IR$Value* $tmp223 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
*(&local8) = $tmp222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q($tmp217);
// line 80
org$frostlang$frostc$IR* $tmp224 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp225 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp226 = (frost$core$Int64) {21};
org$frostlang$frostc$IR$Value* $tmp227 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp228 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp227);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp225, $tmp226, param1, param2, $tmp228);
$fn230 $tmp229 = ($fn230) $tmp224->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp231 = $tmp229($tmp224, $tmp225);
*(&local9) = $tmp231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// line 82
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp232 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp233 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp234;
$tmp234 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp234->value = $tmp233;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp235 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp236 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp237 = *(&local9);
org$frostlang$frostc$Type* $tmp238 = *(&local1);
org$frostlang$frostc$Type* $tmp239 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp238);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp235, $tmp236, $tmp237, $tmp239);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp232, ((frost$core$Object*) $tmp234), ((frost$core$Object*) $tmp235));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
org$frostlang$frostc$IR$Value* $tmp240 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp242 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp232;
block30:;
frost$core$Bit $tmp243 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp52, &$s244);
bool $tmp245 = $tmp243.value;
if ($tmp245) goto block33; else goto block34;
block33:;
// line 86
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp248 = (frost$core$Int64) {86};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s249, $tmp248);
abort(); // unreachable
block35:;
// line 87
frost$core$Int64 $tmp250 = (frost$core$Int64) {0};
ITable* $tmp251 = param4->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
frost$core$Object* $tmp254 = $tmp252(param4, $tmp250);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp255 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp256 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp257 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp258 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp255, $tmp256, $tmp257, $tmp258);
org$frostlang$frostc$IR$Value* $tmp259 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp254), $tmp255);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
org$frostlang$frostc$IR$Value* $tmp260 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local10) = $tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
// line 89
org$frostlang$frostc$IR$Value* $tmp261 = *(&local10);
frost$core$Bit $tmp262 = frost$core$Bit$init$builtin_bit($tmp261 == NULL);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block37; else goto block38;
block37:;
// line 90
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp264 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp265 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp266;
$tmp266 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp266->value = $tmp265;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp264, ((frost$core$Object*) $tmp266), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
org$frostlang$frostc$IR$Value* $tmp267 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp268 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp264;
block38:;
// line 92
org$frostlang$frostc$IR* $tmp270 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp271 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp272 = (frost$core$Int64) {20};
org$frostlang$frostc$IR$Value* $tmp273 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp274 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp273);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp271, $tmp272, param1, param2, $tmp274);
$fn276 $tmp275 = ($fn276) $tmp270->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp277 = $tmp275($tmp270, $tmp271);
*(&local11) = $tmp277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
// line 94
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp278 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp279 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp280;
$tmp280 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp280->value = $tmp279;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp281 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp282 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp283 = *(&local11);
org$frostlang$frostc$Type* $tmp284 = *(&local1);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp281, $tmp282, $tmp283, $tmp284);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp278, ((frost$core$Object*) $tmp280), ((frost$core$Object*) $tmp281));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
org$frostlang$frostc$IR$Value* $tmp285 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp286 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp287 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp278;
block34:;
frost$core$Bit $tmp288 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp52, &$s289);
bool $tmp290 = $tmp288.value;
if ($tmp290) goto block39; else goto block40;
block39:;
// line 97
frost$core$Bit $tmp291 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp293 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s294, $tmp293);
abort(); // unreachable
block41:;
// line 98
frost$core$Int64 $tmp295 = (frost$core$Int64) {0};
ITable* $tmp296 = param4->$class->itable;
while ($tmp296->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp296 = $tmp296->next;
}
$fn298 $tmp297 = $tmp296->methods[0];
frost$core$Object* $tmp299 = $tmp297(param4, $tmp295);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp300 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp301 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp302 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp303 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp300, $tmp301, $tmp302, $tmp303);
org$frostlang$frostc$IR$Value* $tmp304 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp299), $tmp300);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
org$frostlang$frostc$IR$Value* $tmp305 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local12) = $tmp304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
frost$core$Frost$unref$frost$core$Object$Q($tmp299);
// line 100
frost$core$Int64 $tmp306 = (frost$core$Int64) {1};
ITable* $tmp307 = param4->$class->itable;
while ($tmp307->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp307 = $tmp307->next;
}
$fn309 $tmp308 = $tmp307->methods[0];
frost$core$Object* $tmp310 = $tmp308(param4, $tmp306);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp311 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp312 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp313 = *(&local1);
frost$core$Bit $tmp314 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp311, $tmp312, $tmp313, $tmp314);
org$frostlang$frostc$IR$Value* $tmp315 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp310), $tmp311);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
org$frostlang$frostc$IR$Value* $tmp316 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local13) = $tmp315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
frost$core$Frost$unref$frost$core$Object$Q($tmp310);
// line 102
org$frostlang$frostc$IR$Value* $tmp317 = *(&local12);
frost$core$Bit $tmp318 = frost$core$Bit$init$builtin_bit($tmp317 != NULL);
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block45; else goto block44;
block45:;
org$frostlang$frostc$IR$Value* $tmp320 = *(&local13);
frost$core$Bit $tmp321 = frost$core$Bit$init$builtin_bit($tmp320 != NULL);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block43; else goto block44;
block43:;
// line 103
org$frostlang$frostc$IR$Value* $tmp323 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp324 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp323);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
org$frostlang$frostc$IR$Value* $tmp325 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local14) = $tmp324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// line 104
org$frostlang$frostc$Type* $tmp326 = *(&local1);
frost$core$Bit $tmp327 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp326);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block46; else goto block47;
block46:;
// line 105
org$frostlang$frostc$IR$Value* $tmp329 = *(&local13);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp329);
// line 106
org$frostlang$frostc$IR* $tmp330 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp331 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp332 = (frost$core$Int64) {20};
org$frostlang$frostc$IR$Value* $tmp333 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp331, $tmp332, param1, param2, $tmp333);
$fn335 $tmp334 = ($fn335) $tmp330->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp336 = $tmp334($tmp330, $tmp331);
*(&local15) = $tmp336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// line 107
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp337 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp338 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp339 = *(&local15);
org$frostlang$frostc$Type* $tmp340 = *(&local1);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp337, $tmp338, $tmp339, $tmp340);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp337);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
goto block47;
block47:;
// line 109
org$frostlang$frostc$IR* $tmp341 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp342 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp343 = (frost$core$Int64) {24};
org$frostlang$frostc$IR$Value* $tmp344 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp345 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp342, $tmp343, param1, $tmp344, param2, $tmp345);
$fn347 $tmp346 = ($fn347) $tmp341->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp348 = $tmp346($tmp341, $tmp342);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
org$frostlang$frostc$IR$Value* $tmp349 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block44;
block44:;
// line 111
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp350 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp351 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp352;
$tmp352 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp352->value = $tmp351;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp350, ((frost$core$Object*) $tmp352), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
org$frostlang$frostc$IR$Value* $tmp353 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp354 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp355 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp356 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp350;
block40:;
frost$core$Bit $tmp357 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp52, &$s358);
bool $tmp359 = $tmp357.value;
if ($tmp359) goto block48; else goto block49;
block48:;
// line 114
org$frostlang$frostc$Type* $tmp360 = *(&local1);
org$frostlang$frostc$Type* $tmp361 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp360);
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
org$frostlang$frostc$Type* $tmp362 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local16) = $tmp361;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// line 115
frost$core$Int64 $tmp363 = (frost$core$Int64) {0};
ITable* $tmp364 = param4->$class->itable;
while ($tmp364->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp364 = $tmp364->next;
}
$fn366 $tmp365 = $tmp364->methods[0];
frost$core$Object* $tmp367 = $tmp365(param4, $tmp363);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp368 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp369 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp370 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp371 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp368, $tmp369, $tmp370, $tmp371);
org$frostlang$frostc$IR$Value* $tmp372 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp367), $tmp368);
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
org$frostlang$frostc$IR$Value* $tmp373 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
*(&local17) = $tmp372;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$Frost$unref$frost$core$Object$Q($tmp367);
// line 117
org$frostlang$frostc$Type* $tmp374 = *(&local16);
frost$core$Bit $tmp375 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp374);
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block50; else goto block51;
block50:;
// line 118
org$frostlang$frostc$IR$Value* $tmp377 = *(&local17);
org$frostlang$frostc$IR$Value* $tmp378 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp377);
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
org$frostlang$frostc$IR$Value* $tmp379 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local18) = $tmp378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// line 119
org$frostlang$frostc$IR* $tmp380 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp381 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp382 = (frost$core$Int64) {20};
org$frostlang$frostc$IR$Value* $tmp383 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp381, $tmp382, param1, param2, $tmp383);
$fn385 $tmp384 = ($fn385) $tmp380->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp386 = $tmp384($tmp380, $tmp381);
*(&local19) = $tmp386;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// line 120
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp387 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp388 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp389 = *(&local19);
org$frostlang$frostc$Type* $tmp390 = *(&local16);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp387, $tmp388, $tmp389, $tmp390);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp387);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// line 121
org$frostlang$frostc$IR* $tmp391 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp392 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp393 = (frost$core$Int64) {24};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp394 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp395 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp396 = *(&local16);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp394, $tmp395, $tmp396);
org$frostlang$frostc$IR$Value* $tmp397 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp392, $tmp393, param1, $tmp394, param2, $tmp397);
$fn399 $tmp398 = ($fn399) $tmp391->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp400 = $tmp398($tmp391, $tmp392);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
org$frostlang$frostc$IR$Value* $tmp401 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block51;
block51:;
// line 124
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp402 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp403 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp404;
$tmp404 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp404->value = $tmp403;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp402, ((frost$core$Object*) $tmp404), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
org$frostlang$frostc$IR$Value* $tmp405 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp406 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp407 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp408 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp402;
block49:;
// line 127
frost$core$Int64 $tmp409 = (frost$core$Int64) {127};
org$frostlang$frostc$MethodDecl** $tmp410 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp411 = *$tmp410;
frost$core$String** $tmp412 = &((org$frostlang$frostc$Symbol*) $tmp411)->name;
frost$core$String* $tmp413 = *$tmp412;
frost$core$String* $tmp414 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s415, $tmp413);
frost$core$String* $tmp416 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp414, &$s417);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s418, $tmp409, $tmp416);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
abort(); // unreachable
block8:;
goto block52;
block52:;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$expression$Binary$Operator param3, frost$collections$ListView* param4, org$frostlang$frostc$Type* param5, org$frostlang$frostc$Type* param6) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$Type* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
// line 137
ITable* $tmp419 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp419->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp419 = $tmp419->next;
}
$fn421 $tmp420 = $tmp419->methods[0];
frost$core$Int64 $tmp422 = $tmp420(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp423 = (frost$core$Int64) {1};
int64_t $tmp424 = $tmp422.value;
int64_t $tmp425 = $tmp423.value;
bool $tmp426 = $tmp424 != $tmp425;
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block1; else goto block2;
block1:;
// line 138
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp429 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp430 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp431;
$tmp431 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp431->value = $tmp430;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp429, ((frost$core$Object*) $tmp431), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
return $tmp429;
block2:;
// line 140
org$frostlang$frostc$IR$Value* $tmp432 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param5);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
org$frostlang$frostc$IR$Value* $tmp433 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local0) = $tmp432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// line 141
org$frostlang$frostc$IR$Value* $tmp434 = *(&local0);
frost$core$Bit $tmp435 = frost$core$Bit$init$builtin_bit($tmp434 == NULL);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block3; else goto block4;
block3:;
// line 142
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp437 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp438 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp439;
$tmp439 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp439->value = $tmp438;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp437, ((frost$core$Object*) $tmp439), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
org$frostlang$frostc$IR$Value* $tmp440 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp437;
block4:;
// line 144
frost$core$Int64 $tmp441 = (frost$core$Int64) {0};
ITable* $tmp442 = param4->$class->itable;
while ($tmp442->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp442 = $tmp442->next;
}
$fn444 $tmp443 = $tmp442->methods[0];
frost$core$Object* $tmp445 = $tmp443(param4, $tmp441);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp446 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp447 = (frost$core$Int64) {3};
frost$core$Bit $tmp448 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp446, $tmp447, param5, $tmp448);
org$frostlang$frostc$IR$Value* $tmp449 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp445), $tmp446);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
org$frostlang$frostc$IR$Value* $tmp450 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local1) = $tmp449;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q($tmp445);
// line 145
org$frostlang$frostc$IR$Value* $tmp451 = *(&local1);
frost$core$Bit $tmp452 = frost$core$Bit$init$builtin_bit($tmp451 == NULL);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block5; else goto block6;
block5:;
// line 146
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp454 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp455 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp456;
$tmp456 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp456->value = $tmp455;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp454, ((frost$core$Object*) $tmp456), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
org$frostlang$frostc$IR$Value* $tmp457 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp458 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp454;
block6:;
// line 148
org$frostlang$frostc$IR$Value* $tmp459 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp460 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp459);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
org$frostlang$frostc$IR$Value* $tmp461 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local2) = $tmp460;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// line 149
// line 150
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
// line 151
org$frostlang$frostc$Type* $tmp462 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp463 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param6, $tmp462);
bool $tmp464 = $tmp463.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
if ($tmp464) goto block7; else goto block9;
block7:;
// line 152
org$frostlang$frostc$Type* $tmp465 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
org$frostlang$frostc$Type* $tmp466 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local4) = $tmp465;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
goto block8;
block9:;
// line 1
// line 155
org$frostlang$frostc$IR$Value* $tmp467 = *(&local2);
$fn469 $tmp468 = ($fn469) $tmp467->$class->vtable[2];
org$frostlang$frostc$Type* $tmp470 = $tmp468($tmp467);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
org$frostlang$frostc$Type* $tmp471 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local4) = $tmp470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
goto block8;
block8:;
// line 157
org$frostlang$frostc$IR** $tmp472 = &param0->ir;
org$frostlang$frostc$IR* $tmp473 = *$tmp472;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp474 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp475 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp476 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp477 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp478 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp477);
org$frostlang$frostc$Type* $tmp479 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp474, $tmp475, param1, $tmp476, param3, $tmp478, $tmp479);
$fn481 $tmp480 = ($fn481) $tmp473->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp482 = $tmp480($tmp473, $tmp474);
*(&local3) = $tmp482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// line 159
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp483 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp483);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
frost$collections$Array* $tmp484 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local5) = $tmp483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
// line 160
frost$collections$Array* $tmp485 = *(&local5);
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp486 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp487 = (frost$core$Int64) {26};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp488 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp489 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp490 = *(&local3);
org$frostlang$frostc$Type* $tmp491 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp488, $tmp489, $tmp490, $tmp491);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp486, $tmp487, param1, $tmp488);
frost$collections$Array$add$frost$collections$Array$T($tmp485, ((frost$core$Object*) $tmp486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// line 161
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp492 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp493 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp492, $tmp493, param6);
frost$collections$Array* $tmp494 = *(&local5);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp495 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp496 = (frost$core$Int64) {3};
frost$core$Bit $tmp497 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp495, $tmp496, param6, $tmp497);
org$frostlang$frostc$IR$Value* $tmp498 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp492, ((frost$collections$ListView*) $tmp494), $tmp495);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
org$frostlang$frostc$IR$Value* $tmp499 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
*(&local6) = $tmp498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
// line 163
org$frostlang$frostc$IR$Value* $tmp500 = *(&local6);
frost$core$Bit $tmp501 = frost$core$Bit$init$builtin_bit($tmp500 != NULL);
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp503 = (frost$core$Int64) {163};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s504, $tmp503);
abort(); // unreachable
block10:;
// line 164
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp505 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp506 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp507;
$tmp507 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp507->value = $tmp506;
org$frostlang$frostc$IR$Value* $tmp508 = *(&local6);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp505, ((frost$core$Object*) $tmp507), ((frost$core$Object*) $tmp508));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
org$frostlang$frostc$IR$Value* $tmp509 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp510 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp511 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp512 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp513 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp514 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp505;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
// line 171
org$frostlang$frostc$MethodDecl** $tmp515 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp516 = *$tmp515;
frost$core$String** $tmp517 = &((org$frostlang$frostc$Symbol*) $tmp516)->name;
frost$core$String* $tmp518 = *$tmp517;
frost$core$Bit $tmp519 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp518, &$s520);
bool $tmp521 = $tmp519.value;
if ($tmp521) goto block2; else goto block3;
block2:;
// line 173
org$frostlang$frostc$MethodDecl** $tmp522 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp523 = *$tmp522;
frost$collections$Array** $tmp524 = &$tmp523->parameters;
frost$collections$Array* $tmp525 = *$tmp524;
ITable* $tmp526 = ((frost$collections$CollectionView*) $tmp525)->$class->itable;
while ($tmp526->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp526 = $tmp526->next;
}
$fn528 $tmp527 = $tmp526->methods[0];
frost$core$Int64 $tmp529 = $tmp527(((frost$collections$CollectionView*) $tmp525));
frost$core$Int64 $tmp530 = (frost$core$Int64) {1};
frost$core$Bit $tmp531 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp529, $tmp530);
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp533 = (frost$core$Int64) {173};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s534, $tmp533);
abort(); // unreachable
block4:;
// line 174
ITable* $tmp535 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp535->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp535 = $tmp535->next;
}
$fn537 $tmp536 = $tmp535->methods[0];
frost$core$Int64 $tmp538 = $tmp536(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp539 = (frost$core$Int64) {1};
frost$core$Bit $tmp540 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp538, $tmp539);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp542 = (frost$core$Int64) {174};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s543, $tmp542);
abort(); // unreachable
block6:;
// line 175
org$frostlang$frostc$MethodDecl** $tmp544 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp545 = *$tmp544;
frost$collections$Array** $tmp546 = &$tmp545->parameters;
frost$collections$Array* $tmp547 = *$tmp546;
frost$core$Int64 $tmp548 = (frost$core$Int64) {0};
frost$core$Object* $tmp549 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp547, $tmp548);
org$frostlang$frostc$Type** $tmp550 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp549)->type;
org$frostlang$frostc$Type* $tmp551 = *$tmp550;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
org$frostlang$frostc$Type* $tmp552 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local0) = $tmp551;
frost$core$Frost$unref$frost$core$Object$Q($tmp549);
// line 176
org$frostlang$frostc$Type* $tmp553 = *(&local0);
frost$core$Bit $tmp554 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp553);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block8; else goto block9;
block8:;
// line 177
frost$core$Int64 $tmp556 = (frost$core$Int64) {0};
ITable* $tmp557 = param4->$class->itable;
while ($tmp557->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp557 = $tmp557->next;
}
$fn559 $tmp558 = $tmp557->methods[0];
frost$core$Object* $tmp560 = $tmp558(param4, $tmp556);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp561 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp562 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp563 = *(&local0);
frost$core$Bit $tmp564 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp561, $tmp562, $tmp563, $tmp564);
org$frostlang$frostc$IR$Value* $tmp565 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp560), $tmp561);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
org$frostlang$frostc$IR$Value* $tmp566 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local1) = $tmp565;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
frost$core$Frost$unref$frost$core$Object$Q($tmp560);
// line 179
org$frostlang$frostc$IR$Value* $tmp567 = *(&local1);
frost$core$Bit $tmp568 = frost$core$Bit$init$builtin_bit($tmp567 != NULL);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block10; else goto block11;
block10:;
// line 180
org$frostlang$frostc$IR** $tmp570 = &param0->ir;
org$frostlang$frostc$IR* $tmp571 = *$tmp570;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp572 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp573 = (frost$core$Int64) {7};
org$frostlang$frostc$MethodDecl** $tmp574 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp575 = *$tmp574;
frost$core$Weak** $tmp576 = &$tmp575->owner;
frost$core$Weak* $tmp577 = *$tmp576;
frost$core$Object* $tmp578 = frost$core$Weak$get$R$frost$core$Weak$T($tmp577);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp579 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp580 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp579, $tmp580);
org$frostlang$frostc$IR$Value* $tmp581 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp579, ((frost$core$Object*) $tmp581));
org$frostlang$frostc$FixedArray* $tmp582 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp579);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp572, $tmp573, param1, ((org$frostlang$frostc$ClassDecl*) $tmp578), $tmp582);
$fn584 $tmp583 = ($fn584) $tmp571->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp585 = $tmp583($tmp571, $tmp572);
*(&local2) = $tmp585;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$Frost$unref$frost$core$Object$Q($tmp578);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// line 182
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp586 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp587 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp588;
$tmp588 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp588->value = $tmp587;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp589 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp590 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp591 = *(&local2);
org$frostlang$frostc$MethodDecl** $tmp592 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp593 = *$tmp592;
frost$core$Weak** $tmp594 = &$tmp593->owner;
frost$core$Weak* $tmp595 = *$tmp594;
frost$core$Object* $tmp596 = frost$core$Weak$get$R$frost$core$Weak$T($tmp595);
org$frostlang$frostc$Type** $tmp597 = &((org$frostlang$frostc$ClassDecl*) $tmp596)->type;
org$frostlang$frostc$Type* $tmp598 = *$tmp597;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp589, $tmp590, $tmp591, $tmp598);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp586, ((frost$core$Object*) $tmp588), ((frost$core$Object*) $tmp589));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$core$Frost$unref$frost$core$Object$Q($tmp596);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
org$frostlang$frostc$IR$Value* $tmp599 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp600 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp586;
block11:;
org$frostlang$frostc$IR$Value* $tmp601 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block9;
block9:;
org$frostlang$frostc$Type* $tmp602 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Bit $tmp603 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp518, &$s604);
bool $tmp605 = $tmp603.value;
if ($tmp605) goto block12; else goto block13;
block12:;
// line 187
frost$core$Int64 $tmp606 = (frost$core$Int64) {0};
org$frostlang$frostc$expression$Binary$Operator $tmp607 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp606);
org$frostlang$frostc$Type* $tmp608 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp609 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp610 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp607, param4, $tmp608, $tmp609);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
return $tmp610;
block13:;
frost$core$Bit $tmp611 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp518, &$s612);
bool $tmp613 = $tmp611.value;
if ($tmp613) goto block14; else goto block15;
block14:;
// line 191
frost$core$Int64 $tmp614 = (frost$core$Int64) {1};
org$frostlang$frostc$expression$Binary$Operator $tmp615 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp614);
org$frostlang$frostc$Type* $tmp616 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp617 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp618 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp615, param4, $tmp616, $tmp617);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
return $tmp618;
block15:;
frost$core$Bit $tmp619 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp518, &$s620);
bool $tmp621 = $tmp619.value;
if ($tmp621) goto block16; else goto block17;
block16:;
// line 195
frost$core$Int64 $tmp622 = (frost$core$Int64) {2};
org$frostlang$frostc$expression$Binary$Operator $tmp623 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp622);
org$frostlang$frostc$Type* $tmp624 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp625 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp626 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp623, param4, $tmp624, $tmp625);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
return $tmp626;
block17:;
frost$core$Bit $tmp627 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp518, &$s628);
bool $tmp629 = $tmp627.value;
if ($tmp629) goto block18; else goto block19;
block18:;
// line 199
frost$core$Int64 $tmp630 = (frost$core$Int64) {4};
org$frostlang$frostc$expression$Binary$Operator $tmp631 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp630);
org$frostlang$frostc$Type* $tmp632 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp633 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp634 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp631, param4, $tmp632, $tmp633);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
return $tmp634;
block19:;
frost$core$Bit $tmp635 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp518, &$s636);
bool $tmp637 = $tmp635.value;
if ($tmp637) goto block20; else goto block21;
block20:;
// line 203
frost$core$Int64 $tmp638 = (frost$core$Int64) {8};
org$frostlang$frostc$expression$Binary$Operator $tmp639 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp638);
org$frostlang$frostc$MethodDecl** $tmp640 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp641 = *$tmp640;
frost$core$Weak** $tmp642 = &$tmp641->owner;
frost$core$Weak* $tmp643 = *$tmp642;
frost$core$Object* $tmp644 = frost$core$Weak$get$R$frost$core$Weak$T($tmp643);
org$frostlang$frostc$Type** $tmp645 = &((org$frostlang$frostc$ClassDecl*) $tmp644)->type;
org$frostlang$frostc$Type* $tmp646 = *$tmp645;
org$frostlang$frostc$MethodDecl** $tmp647 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp648 = *$tmp647;
frost$collections$Array** $tmp649 = &$tmp648->parameters;
frost$collections$Array* $tmp650 = *$tmp649;
frost$core$Int64 $tmp651 = (frost$core$Int64) {0};
frost$core$Object* $tmp652 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp650, $tmp651);
org$frostlang$frostc$Type** $tmp653 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp652)->type;
org$frostlang$frostc$Type* $tmp654 = *$tmp653;
frost$core$Bit $tmp655 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp656 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp657 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp646, $tmp654, $tmp655, $tmp656);
org$frostlang$frostc$Type* $tmp658 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp659 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp639, param4, $tmp657, $tmp658);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$Frost$unref$frost$core$Object$Q($tmp652);
frost$core$Frost$unref$frost$core$Object$Q($tmp644);
return $tmp659;
block21:;
frost$core$Bit $tmp660 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp518, &$s661);
bool $tmp662 = $tmp660.value;
if ($tmp662) goto block22; else goto block23;
block22:;
// line 209
frost$core$Int64 $tmp663 = (frost$core$Int64) {10};
org$frostlang$frostc$expression$Binary$Operator $tmp664 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp663);
org$frostlang$frostc$MethodDecl** $tmp665 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp666 = *$tmp665;
frost$core$Weak** $tmp667 = &$tmp666->owner;
frost$core$Weak* $tmp668 = *$tmp667;
frost$core$Object* $tmp669 = frost$core$Weak$get$R$frost$core$Weak$T($tmp668);
org$frostlang$frostc$Type** $tmp670 = &((org$frostlang$frostc$ClassDecl*) $tmp669)->type;
org$frostlang$frostc$Type* $tmp671 = *$tmp670;
org$frostlang$frostc$MethodDecl** $tmp672 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp673 = *$tmp672;
frost$collections$Array** $tmp674 = &$tmp673->parameters;
frost$collections$Array* $tmp675 = *$tmp674;
frost$core$Int64 $tmp676 = (frost$core$Int64) {0};
frost$core$Object* $tmp677 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp675, $tmp676);
org$frostlang$frostc$Type** $tmp678 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp677)->type;
org$frostlang$frostc$Type* $tmp679 = *$tmp678;
frost$core$Bit $tmp680 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp681 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp682 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp671, $tmp679, $tmp680, $tmp681);
org$frostlang$frostc$Type* $tmp683 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp684 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp664, param4, $tmp682, $tmp683);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
frost$core$Frost$unref$frost$core$Object$Q($tmp677);
frost$core$Frost$unref$frost$core$Object$Q($tmp669);
return $tmp684;
block23:;
frost$core$Bit $tmp685 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp518, &$s686);
bool $tmp687 = $tmp685.value;
if ($tmp687) goto block24; else goto block25;
block24:;
// line 215
frost$core$Int64 $tmp688 = (frost$core$Int64) {9};
org$frostlang$frostc$expression$Binary$Operator $tmp689 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp688);
org$frostlang$frostc$MethodDecl** $tmp690 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp691 = *$tmp690;
frost$core$Weak** $tmp692 = &$tmp691->owner;
frost$core$Weak* $tmp693 = *$tmp692;
frost$core$Object* $tmp694 = frost$core$Weak$get$R$frost$core$Weak$T($tmp693);
org$frostlang$frostc$Type** $tmp695 = &((org$frostlang$frostc$ClassDecl*) $tmp694)->type;
org$frostlang$frostc$Type* $tmp696 = *$tmp695;
org$frostlang$frostc$MethodDecl** $tmp697 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp698 = *$tmp697;
frost$collections$Array** $tmp699 = &$tmp698->parameters;
frost$collections$Array* $tmp700 = *$tmp699;
frost$core$Int64 $tmp701 = (frost$core$Int64) {0};
frost$core$Object* $tmp702 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp700, $tmp701);
org$frostlang$frostc$Type** $tmp703 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp702)->type;
org$frostlang$frostc$Type* $tmp704 = *$tmp703;
frost$core$Bit $tmp705 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp706 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp707 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp696, $tmp704, $tmp705, $tmp706);
org$frostlang$frostc$Type* $tmp708 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp709 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp689, param4, $tmp707, $tmp708);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$core$Frost$unref$frost$core$Object$Q($tmp702);
frost$core$Frost$unref$frost$core$Object$Q($tmp694);
return $tmp709;
block25:;
frost$core$Bit $tmp710 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp518, &$s711);
bool $tmp712 = $tmp710.value;
if ($tmp712) goto block26; else goto block27;
block26:;
// line 221
frost$core$Int64 $tmp713 = (frost$core$Int64) {11};
org$frostlang$frostc$expression$Binary$Operator $tmp714 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp713);
org$frostlang$frostc$MethodDecl** $tmp715 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp716 = *$tmp715;
frost$core$Weak** $tmp717 = &$tmp716->owner;
frost$core$Weak* $tmp718 = *$tmp717;
frost$core$Object* $tmp719 = frost$core$Weak$get$R$frost$core$Weak$T($tmp718);
org$frostlang$frostc$Type** $tmp720 = &((org$frostlang$frostc$ClassDecl*) $tmp719)->type;
org$frostlang$frostc$Type* $tmp721 = *$tmp720;
org$frostlang$frostc$MethodDecl** $tmp722 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp723 = *$tmp722;
frost$collections$Array** $tmp724 = &$tmp723->parameters;
frost$collections$Array* $tmp725 = *$tmp724;
frost$core$Int64 $tmp726 = (frost$core$Int64) {0};
frost$core$Object* $tmp727 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp725, $tmp726);
org$frostlang$frostc$Type** $tmp728 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp727)->type;
org$frostlang$frostc$Type* $tmp729 = *$tmp728;
frost$core$Bit $tmp730 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp731 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp732 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp721, $tmp729, $tmp730, $tmp731);
org$frostlang$frostc$Type* $tmp733 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp734 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp714, param4, $tmp732, $tmp733);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
frost$core$Frost$unref$frost$core$Object$Q($tmp727);
frost$core$Frost$unref$frost$core$Object$Q($tmp719);
return $tmp734;
block27:;
frost$core$Bit $tmp735 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp518, &$s736);
bool $tmp737 = $tmp735.value;
if ($tmp737) goto block28; else goto block29;
block28:;
// line 227
frost$core$Int64 $tmp738 = (frost$core$Int64) {6};
org$frostlang$frostc$expression$Binary$Operator $tmp739 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp738);
org$frostlang$frostc$MethodDecl** $tmp740 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp741 = *$tmp740;
frost$core$Weak** $tmp742 = &$tmp741->owner;
frost$core$Weak* $tmp743 = *$tmp742;
frost$core$Object* $tmp744 = frost$core$Weak$get$R$frost$core$Weak$T($tmp743);
org$frostlang$frostc$Type** $tmp745 = &((org$frostlang$frostc$ClassDecl*) $tmp744)->type;
org$frostlang$frostc$Type* $tmp746 = *$tmp745;
org$frostlang$frostc$MethodDecl** $tmp747 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp748 = *$tmp747;
frost$collections$Array** $tmp749 = &$tmp748->parameters;
frost$collections$Array* $tmp750 = *$tmp749;
frost$core$Int64 $tmp751 = (frost$core$Int64) {0};
frost$core$Object* $tmp752 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp750, $tmp751);
org$frostlang$frostc$Type** $tmp753 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp752)->type;
org$frostlang$frostc$Type* $tmp754 = *$tmp753;
frost$core$Bit $tmp755 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp756 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp757 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp746, $tmp754, $tmp755, $tmp756);
org$frostlang$frostc$Type* $tmp758 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp759 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp739, param4, $tmp757, $tmp758);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$core$Frost$unref$frost$core$Object$Q($tmp752);
frost$core$Frost$unref$frost$core$Object$Q($tmp744);
return $tmp759;
block29:;
frost$core$Bit $tmp760 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp518, &$s761);
bool $tmp762 = $tmp760.value;
if ($tmp762) goto block30; else goto block1;
block30:;
// line 233
frost$core$Int64 $tmp763 = (frost$core$Int64) {7};
org$frostlang$frostc$expression$Binary$Operator $tmp764 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp763);
org$frostlang$frostc$MethodDecl** $tmp765 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp766 = *$tmp765;
frost$core$Weak** $tmp767 = &$tmp766->owner;
frost$core$Weak* $tmp768 = *$tmp767;
frost$core$Object* $tmp769 = frost$core$Weak$get$R$frost$core$Weak$T($tmp768);
org$frostlang$frostc$Type** $tmp770 = &((org$frostlang$frostc$ClassDecl*) $tmp769)->type;
org$frostlang$frostc$Type* $tmp771 = *$tmp770;
org$frostlang$frostc$MethodDecl** $tmp772 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp773 = *$tmp772;
frost$collections$Array** $tmp774 = &$tmp773->parameters;
frost$collections$Array* $tmp775 = *$tmp774;
frost$core$Int64 $tmp776 = (frost$core$Int64) {0};
frost$core$Object* $tmp777 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp775, $tmp776);
org$frostlang$frostc$Type** $tmp778 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp777)->type;
org$frostlang$frostc$Type* $tmp779 = *$tmp778;
frost$core$Bit $tmp780 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp781 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp782 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp771, $tmp779, $tmp780, $tmp781);
org$frostlang$frostc$Type* $tmp783 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp784 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp764, param4, $tmp782, $tmp783);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q($tmp777);
frost$core$Frost$unref$frost$core$Object$Q($tmp769);
return $tmp784;
block1:;
// line 239
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp785 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp786 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp787;
$tmp787 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp787->value = $tmp786;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp785, ((frost$core$Object*) $tmp787), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
return $tmp785;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileBitIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
// line 246
org$frostlang$frostc$MethodDecl** $tmp788 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp789 = *$tmp788;
frost$core$String** $tmp790 = &((org$frostlang$frostc$Symbol*) $tmp789)->name;
frost$core$String* $tmp791 = *$tmp790;
frost$core$Bit $tmp792 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp791, &$s793);
bool $tmp794 = $tmp792.value;
if ($tmp794) goto block2; else goto block1;
block2:;
// line 248
org$frostlang$frostc$MethodDecl** $tmp795 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp796 = *$tmp795;
frost$collections$Array** $tmp797 = &$tmp796->parameters;
frost$collections$Array* $tmp798 = *$tmp797;
ITable* $tmp799 = ((frost$collections$CollectionView*) $tmp798)->$class->itable;
while ($tmp799->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp799 = $tmp799->next;
}
$fn801 $tmp800 = $tmp799->methods[0];
frost$core$Int64 $tmp802 = $tmp800(((frost$collections$CollectionView*) $tmp798));
frost$core$Int64 $tmp803 = (frost$core$Int64) {1};
frost$core$Bit $tmp804 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp802, $tmp803);
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp806 = (frost$core$Int64) {248};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s807, $tmp806);
abort(); // unreachable
block3:;
// line 249
ITable* $tmp808 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp808->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp808 = $tmp808->next;
}
$fn810 $tmp809 = $tmp808->methods[0];
frost$core$Int64 $tmp811 = $tmp809(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp812 = (frost$core$Int64) {1};
frost$core$Bit $tmp813 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp811, $tmp812);
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp815 = (frost$core$Int64) {249};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s816, $tmp815);
abort(); // unreachable
block5:;
// line 250
org$frostlang$frostc$MethodDecl** $tmp817 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp818 = *$tmp817;
frost$collections$Array** $tmp819 = &$tmp818->parameters;
frost$collections$Array* $tmp820 = *$tmp819;
frost$core$Int64 $tmp821 = (frost$core$Int64) {0};
frost$core$Object* $tmp822 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp820, $tmp821);
org$frostlang$frostc$Type** $tmp823 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp822)->type;
org$frostlang$frostc$Type* $tmp824 = *$tmp823;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
org$frostlang$frostc$Type* $tmp825 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
*(&local0) = $tmp824;
frost$core$Frost$unref$frost$core$Object$Q($tmp822);
// line 251
org$frostlang$frostc$Type* $tmp826 = *(&local0);
org$frostlang$frostc$Type* $tmp827 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp828 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp826, $tmp827);
bool $tmp829 = $tmp828.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
if ($tmp829) goto block7; else goto block8;
block7:;
// line 252
frost$core$Int64 $tmp830 = (frost$core$Int64) {0};
ITable* $tmp831 = param4->$class->itable;
while ($tmp831->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp831 = $tmp831->next;
}
$fn833 $tmp832 = $tmp831->methods[0];
frost$core$Object* $tmp834 = $tmp832(param4, $tmp830);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp835 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp836 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp837 = *(&local0);
frost$core$Bit $tmp838 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp835, $tmp836, $tmp837, $tmp838);
org$frostlang$frostc$IR$Value* $tmp839 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp834), $tmp835);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
org$frostlang$frostc$IR$Value* $tmp840 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local1) = $tmp839;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
frost$core$Frost$unref$frost$core$Object$Q($tmp834);
// line 254
org$frostlang$frostc$IR$Value* $tmp841 = *(&local1);
frost$core$Bit $tmp842 = frost$core$Bit$init$builtin_bit($tmp841 != NULL);
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block9; else goto block10;
block9:;
// line 255
org$frostlang$frostc$IR** $tmp844 = &param0->ir;
org$frostlang$frostc$IR* $tmp845 = *$tmp844;
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp846 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp847 = (frost$core$Int64) {7};
org$frostlang$frostc$MethodDecl** $tmp848 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp849 = *$tmp848;
frost$core$Weak** $tmp850 = &$tmp849->owner;
frost$core$Weak* $tmp851 = *$tmp850;
frost$core$Object* $tmp852 = frost$core$Weak$get$R$frost$core$Weak$T($tmp851);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp853 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp854 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp853, $tmp854);
org$frostlang$frostc$IR$Value* $tmp855 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp853, ((frost$core$Object*) $tmp855));
org$frostlang$frostc$FixedArray* $tmp856 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp853);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp846, $tmp847, param1, ((org$frostlang$frostc$ClassDecl*) $tmp852), $tmp856);
$fn858 $tmp857 = ($fn858) $tmp845->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp859 = $tmp857($tmp845, $tmp846);
*(&local2) = $tmp859;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
frost$core$Frost$unref$frost$core$Object$Q($tmp852);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
// line 257
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp860 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp861 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp862;
$tmp862 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp862->value = $tmp861;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp863 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp864 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp865 = *(&local2);
org$frostlang$frostc$MethodDecl** $tmp866 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp867 = *$tmp866;
frost$core$Weak** $tmp868 = &$tmp867->owner;
frost$core$Weak* $tmp869 = *$tmp868;
frost$core$Object* $tmp870 = frost$core$Weak$get$R$frost$core$Weak$T($tmp869);
org$frostlang$frostc$Type** $tmp871 = &((org$frostlang$frostc$ClassDecl*) $tmp870)->type;
org$frostlang$frostc$Type* $tmp872 = *$tmp871;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp863, $tmp864, $tmp865, $tmp872);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp860, ((frost$core$Object*) $tmp862), ((frost$core$Object*) $tmp863));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
frost$core$Frost$unref$frost$core$Object$Q($tmp870);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
org$frostlang$frostc$IR$Value* $tmp873 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp874 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp860;
block10:;
org$frostlang$frostc$IR$Value* $tmp875 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block8;
block8:;
org$frostlang$frostc$Type* $tmp876 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 262
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp877 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp878 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp879;
$tmp879 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp879->value = $tmp878;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp877, ((frost$core$Object*) $tmp879), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
return $tmp877;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

// line 268
org$frostlang$frostc$Type** $tmp880 = &param3->target;
org$frostlang$frostc$Type* $tmp881 = *$tmp880;
frost$core$Bit $tmp882 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp881);
bool $tmp883 = $tmp882.value;
if ($tmp883) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type** $tmp884 = &param3->target;
org$frostlang$frostc$Type* $tmp885 = *$tmp884;
frost$core$Bit $tmp886 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp885);
bool $tmp887 = $tmp886.value;
if ($tmp887) goto block4; else goto block2;
block4:;
org$frostlang$frostc$Type** $tmp888 = &param3->target;
org$frostlang$frostc$Type* $tmp889 = *$tmp888;
org$frostlang$frostc$FixedArray* $tmp890 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp889);
frost$core$Int64 $tmp891 = (frost$core$Int64) {1};
frost$core$Object* $tmp892 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp890, $tmp891);
frost$core$Bit $tmp893 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp892));
bool $tmp894 = $tmp893.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp892);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
if ($tmp894) goto block1; else goto block2;
block1:;
// line 269
org$frostlang$frostc$Pair* $tmp895 = org$frostlang$frostc$expression$Call$compilePointerIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
return $tmp895;
block2:;
// line 271
org$frostlang$frostc$Type** $tmp896 = &param3->target;
org$frostlang$frostc$Type* $tmp897 = *$tmp896;
frost$core$Bit $tmp898 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp897);
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block5; else goto block6;
block5:;
// line 272
org$frostlang$frostc$Pair* $tmp900 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
return $tmp900;
block6:;
// line 274
org$frostlang$frostc$Type** $tmp901 = &param3->target;
org$frostlang$frostc$Type* $tmp902 = *$tmp901;
org$frostlang$frostc$Type* $tmp903 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp904 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp902, $tmp903);
bool $tmp905 = $tmp904.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
if ($tmp905) goto block7; else goto block8;
block7:;
// line 275
org$frostlang$frostc$Pair* $tmp906 = org$frostlang$frostc$expression$Call$compileBitIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
return $tmp906;
block8:;
// line 277
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp907 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp908 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp909;
$tmp909 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp909->value = $tmp908;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp907, ((frost$core$Object*) $tmp909), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
return $tmp907;

}
frost$collections$ListView* org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
frost$collections$ListView* local2 = NULL;
frost$collections$ListView* local3 = NULL;
frost$collections$Array* local4 = NULL;
// line 291
frost$core$Bit $tmp910 = org$frostlang$frostc$Type$get_hasSubtypes$R$frost$core$Bit(param1);
frost$core$Bit $tmp911 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp910);
bool $tmp912 = $tmp911.value;
if ($tmp912) goto block1; else goto block2;
block1:;
// line 292
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
return ((frost$collections$ListView*) NULL);
block2:;
// line 294
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp913 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
*(&local0) = ((frost$collections$Array*) NULL);
// line 295
frost$core$Int64 $tmp914 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp915 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
ITable* $tmp916 = ((frost$collections$CollectionView*) $tmp915)->$class->itable;
while ($tmp916->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp916 = $tmp916->next;
}
$fn918 $tmp917 = $tmp916->methods[0];
frost$core$Int64 $tmp919 = $tmp917(((frost$collections$CollectionView*) $tmp915));
frost$core$Bit $tmp920 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp921 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp914, $tmp919, $tmp920);
frost$core$Int64 $tmp922 = $tmp921.min;
*(&local1) = $tmp922;
frost$core$Int64 $tmp923 = $tmp921.max;
frost$core$Bit $tmp924 = $tmp921.inclusive;
bool $tmp925 = $tmp924.value;
frost$core$Int64 $tmp926 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp927 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp926);
if ($tmp925) goto block6; else goto block7;
block6:;
int64_t $tmp928 = $tmp922.value;
int64_t $tmp929 = $tmp923.value;
bool $tmp930 = $tmp928 <= $tmp929;
frost$core$Bit $tmp931 = (frost$core$Bit) {$tmp930};
bool $tmp932 = $tmp931.value;
if ($tmp932) goto block3; else goto block4;
block7:;
int64_t $tmp933 = $tmp922.value;
int64_t $tmp934 = $tmp923.value;
bool $tmp935 = $tmp933 < $tmp934;
frost$core$Bit $tmp936 = (frost$core$Bit) {$tmp935};
bool $tmp937 = $tmp936.value;
if ($tmp937) goto block3; else goto block4;
block3:;
// line 296
org$frostlang$frostc$FixedArray* $tmp938 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp939 = *(&local1);
frost$core$Object* $tmp940 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp938, $tmp939);
org$frostlang$frostc$Type$Kind* $tmp941 = &((org$frostlang$frostc$Type*) $tmp940)->typeKind;
org$frostlang$frostc$Type$Kind $tmp942 = *$tmp941;
org$frostlang$frostc$Type$Kind$wrapper* $tmp943;
$tmp943 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp943->value = $tmp942;
frost$core$Int64 $tmp944 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp945 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp944);
org$frostlang$frostc$Type$Kind$wrapper* $tmp946;
$tmp946 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp946->value = $tmp945;
ITable* $tmp947 = ((frost$core$Equatable*) $tmp943)->$class->itable;
while ($tmp947->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp947 = $tmp947->next;
}
$fn949 $tmp948 = $tmp947->methods[0];
frost$core$Bit $tmp950 = $tmp948(((frost$core$Equatable*) $tmp943), ((frost$core$Equatable*) $tmp946));
bool $tmp951 = $tmp950.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp946)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp943)));
frost$core$Frost$unref$frost$core$Object$Q($tmp940);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
if ($tmp951) goto block8; else goto block10;
block8:;
// line 297
org$frostlang$frostc$FixedArray* $tmp952 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp953 = *(&local1);
frost$core$Object* $tmp954 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp952, $tmp953);
frost$core$Weak** $tmp955 = &((org$frostlang$frostc$Type*) $tmp954)->genericMethodParameter;
frost$core$Weak* $tmp956 = *$tmp955;
frost$core$Object* $tmp957 = frost$core$Weak$get$R$frost$core$Weak$T($tmp956);
frost$core$String** $tmp958 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp957)->owner;
frost$core$String* $tmp959 = *$tmp958;
frost$core$Weak** $tmp960 = &param0->owner;
frost$core$Weak* $tmp961 = *$tmp960;
frost$core$Object* $tmp962 = frost$core$Weak$get$R$frost$core$Weak$T($tmp961);
frost$core$String** $tmp963 = &((org$frostlang$frostc$ClassDecl*) $tmp962)->name;
frost$core$String* $tmp964 = *$tmp963;
frost$core$String* $tmp965 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp964, &$s966);
frost$core$String** $tmp967 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp968 = *$tmp967;
frost$core$String* $tmp969 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp965, $tmp968);
frost$core$Bit $tmp970 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp959, $tmp969);
bool $tmp971 = $tmp970.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp965));
frost$core$Frost$unref$frost$core$Object$Q($tmp962);
frost$core$Frost$unref$frost$core$Object$Q($tmp957);
frost$core$Frost$unref$frost$core$Object$Q($tmp954);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
if ($tmp971) goto block11; else goto block12;
block11:;
// line 298
frost$collections$Array* $tmp972 = *(&local0);
frost$core$Bit $tmp973 = frost$core$Bit$init$builtin_bit($tmp972 == NULL);
bool $tmp974 = $tmp973.value;
if ($tmp974) goto block13; else goto block14;
block13:;
// line 299
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp975 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp975);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
frost$collections$Array* $tmp976 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local0) = $tmp975;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
goto block14;
block14:;
// line 301
frost$collections$Array* $tmp977 = *(&local0);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp978 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp979 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp978, $tmp979);
frost$core$Int64 $tmp980 = *(&local1);
frost$core$Int64$wrapper* $tmp981;
$tmp981 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp981->value = $tmp980;
frost$collections$Array$add$frost$collections$Array$T($tmp978, ((frost$core$Object*) $tmp981));
frost$collections$ImmutableArray* $tmp982 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT($tmp978);
frost$collections$Array$add$frost$collections$Array$T($tmp977, ((frost$core$Object*) ((frost$collections$ListView*) $tmp982)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
goto block12;
block12:;
goto block9;
block10:;
// line 1
// line 305
org$frostlang$frostc$FixedArray* $tmp983 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp984 = *(&local1);
frost$core$Object* $tmp985 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp983, $tmp984);
frost$collections$ListView* $tmp986 = org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q(param0, ((org$frostlang$frostc$Type*) $tmp985));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
frost$collections$ListView* $tmp987 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
*(&local2) = $tmp986;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
frost$core$Frost$unref$frost$core$Object$Q($tmp985);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
// line 306
frost$collections$ListView* $tmp988 = *(&local2);
frost$core$Bit $tmp989 = frost$core$Bit$init$builtin_bit($tmp988 != NULL);
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block15; else goto block16;
block15:;
// line 307
frost$collections$Array* $tmp991 = *(&local0);
frost$core$Bit $tmp992 = frost$core$Bit$init$builtin_bit($tmp991 == NULL);
bool $tmp993 = $tmp992.value;
if ($tmp993) goto block17; else goto block18;
block17:;
// line 308
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp994 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp994);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$collections$Array* $tmp995 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
*(&local0) = $tmp994;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
goto block18;
block18:;
// line 310
frost$collections$ListView* $tmp996 = *(&local2);
ITable* $tmp997 = ((frost$collections$Iterable*) $tmp996)->$class->itable;
while ($tmp997->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp997 = $tmp997->next;
}
$fn999 $tmp998 = $tmp997->methods[0];
frost$collections$Iterator* $tmp1000 = $tmp998(((frost$collections$Iterable*) $tmp996));
goto block19;
block19:;
ITable* $tmp1001 = $tmp1000->$class->itable;
while ($tmp1001->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1001 = $tmp1001->next;
}
$fn1003 $tmp1002 = $tmp1001->methods[0];
frost$core$Bit $tmp1004 = $tmp1002($tmp1000);
bool $tmp1005 = $tmp1004.value;
if ($tmp1005) goto block21; else goto block20;
block20:;
*(&local3) = ((frost$collections$ListView*) NULL);
ITable* $tmp1006 = $tmp1000->$class->itable;
while ($tmp1006->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1006 = $tmp1006->next;
}
$fn1008 $tmp1007 = $tmp1006->methods[1];
frost$core$Object* $tmp1009 = $tmp1007($tmp1000);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1009)));
frost$collections$ListView* $tmp1010 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
*(&local3) = ((frost$collections$ListView*) $tmp1009);
// line 311
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1011 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1012 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1011, $tmp1012);
frost$core$Int64 $tmp1013 = *(&local1);
frost$core$Int64$wrapper* $tmp1014;
$tmp1014 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1014->value = $tmp1013;
frost$collections$Array$add$frost$collections$Array$T($tmp1011, ((frost$core$Object*) $tmp1014));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$collections$Array* $tmp1015 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
*(&local4) = $tmp1011;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
// line 312
frost$collections$Array* $tmp1016 = *(&local4);
frost$collections$ListView* $tmp1017 = *(&local3);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp1016, ((frost$collections$CollectionView*) $tmp1017));
// line 313
frost$collections$Array* $tmp1018 = *(&local0);
frost$collections$Array* $tmp1019 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp1018, ((frost$core$Object*) ((frost$collections$ListView*) $tmp1019)));
frost$collections$Array* $tmp1020 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1009);
frost$collections$ListView* $tmp1021 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
*(&local3) = ((frost$collections$ListView*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
goto block16;
block16:;
frost$collections$ListView* $tmp1022 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
*(&local2) = ((frost$collections$ListView*) NULL);
goto block9;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp1023 = *(&local1);
int64_t $tmp1024 = $tmp923.value;
int64_t $tmp1025 = $tmp1023.value;
int64_t $tmp1026 = $tmp1024 - $tmp1025;
frost$core$Int64 $tmp1027 = (frost$core$Int64) {$tmp1026};
frost$core$UInt64 $tmp1028 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1027);
if ($tmp925) goto block23; else goto block24;
block23:;
uint64_t $tmp1029 = $tmp1028.value;
uint64_t $tmp1030 = $tmp927.value;
bool $tmp1031 = $tmp1029 >= $tmp1030;
frost$core$Bit $tmp1032 = (frost$core$Bit) {$tmp1031};
bool $tmp1033 = $tmp1032.value;
if ($tmp1033) goto block22; else goto block4;
block24:;
uint64_t $tmp1034 = $tmp1028.value;
uint64_t $tmp1035 = $tmp927.value;
bool $tmp1036 = $tmp1034 > $tmp1035;
frost$core$Bit $tmp1037 = (frost$core$Bit) {$tmp1036};
bool $tmp1038 = $tmp1037.value;
if ($tmp1038) goto block22; else goto block4;
block22:;
int64_t $tmp1039 = $tmp1023.value;
int64_t $tmp1040 = $tmp926.value;
int64_t $tmp1041 = $tmp1039 + $tmp1040;
frost$core$Int64 $tmp1042 = (frost$core$Int64) {$tmp1041};
*(&local1) = $tmp1042;
goto block3;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
// line 318
frost$collections$Array* $tmp1043 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1043)));
frost$collections$Array* $tmp1044 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp1043);

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$ListView* param1) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Int64 local1;
// line 323
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1045 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local0) = param0;
// line 324
ITable* $tmp1046 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp1046->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1046 = $tmp1046->next;
}
$fn1048 $tmp1047 = $tmp1046->methods[0];
frost$collections$Iterator* $tmp1049 = $tmp1047(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp1050 = $tmp1049->$class->itable;
while ($tmp1050->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1050 = $tmp1050->next;
}
$fn1052 $tmp1051 = $tmp1050->methods[0];
frost$core$Bit $tmp1053 = $tmp1051($tmp1049);
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block3; else goto block2;
block2:;
ITable* $tmp1055 = $tmp1049->$class->itable;
while ($tmp1055->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1055 = $tmp1055->next;
}
$fn1057 $tmp1056 = $tmp1055->methods[1];
frost$core$Object* $tmp1058 = $tmp1056($tmp1049);
*(&local1) = ((frost$core$Int64$wrapper*) $tmp1058)->value;
// line 325
org$frostlang$frostc$Type* $tmp1059 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp1060 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp1059);
frost$core$Int64 $tmp1061 = *(&local1);
frost$core$Object* $tmp1062 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1060, $tmp1061);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1062)));
org$frostlang$frostc$Type* $tmp1063 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1062);
frost$core$Frost$unref$frost$core$Object$Q($tmp1062);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
frost$core$Frost$unref$frost$core$Object$Q($tmp1058);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
// line 327
org$frostlang$frostc$Type* $tmp1064 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
org$frostlang$frostc$Type* $tmp1065 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1064;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Call$methodRemap$org$frostlang$frostc$Type$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$HashMap* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
// line 332
org$frostlang$frostc$Type$Kind* $tmp1066 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1067 = *$tmp1066;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1068;
$tmp1068 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1068->value = $tmp1067;
frost$core$Int64 $tmp1069 = (frost$core$Int64) {1};
org$frostlang$frostc$Type$Kind $tmp1070 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1069);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1071;
$tmp1071 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1071->value = $tmp1070;
ITable* $tmp1072 = ((frost$core$Equatable*) $tmp1068)->$class->itable;
while ($tmp1072->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1072 = $tmp1072->next;
}
$fn1074 $tmp1073 = $tmp1072->methods[0];
frost$core$Bit $tmp1075 = $tmp1073(((frost$core$Equatable*) $tmp1068), ((frost$core$Equatable*) $tmp1071));
bool $tmp1076 = $tmp1075.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1071)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1068)));
if ($tmp1076) goto block1; else goto block2;
block1:;
// line 333
org$frostlang$frostc$Type* $tmp1077 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type(param0);
org$frostlang$frostc$Type* $tmp1078 = org$frostlang$frostc$expression$Call$methodRemap$org$frostlang$frostc$Type$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1077, param1);
org$frostlang$frostc$Type* $tmp1079 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1078);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
return $tmp1079;
block2:;
// line 335
frost$core$Bit $tmp1080 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit(param0);
bool $tmp1081 = $tmp1080.value;
if ($tmp1081) goto block3; else goto block4;
block3:;
// line 336
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1082 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1082);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$collections$Array* $tmp1083 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
*(&local0) = $tmp1082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
// line 337
frost$core$Int64 $tmp1084 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray* $tmp1085 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
ITable* $tmp1086 = ((frost$collections$CollectionView*) $tmp1085)->$class->itable;
while ($tmp1086->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1086 = $tmp1086->next;
}
$fn1088 $tmp1087 = $tmp1086->methods[0];
frost$core$Int64 $tmp1089 = $tmp1087(((frost$collections$CollectionView*) $tmp1085));
frost$core$Int64 $tmp1090 = (frost$core$Int64) {1};
int64_t $tmp1091 = $tmp1089.value;
int64_t $tmp1092 = $tmp1090.value;
int64_t $tmp1093 = $tmp1091 - $tmp1092;
frost$core$Int64 $tmp1094 = (frost$core$Int64) {$tmp1093};
frost$core$Bit $tmp1095 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1096 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1084, $tmp1094, $tmp1095);
frost$core$Int64 $tmp1097 = $tmp1096.min;
*(&local1) = $tmp1097;
frost$core$Int64 $tmp1098 = $tmp1096.max;
frost$core$Bit $tmp1099 = $tmp1096.inclusive;
bool $tmp1100 = $tmp1099.value;
frost$core$Int64 $tmp1101 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1102 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1101);
if ($tmp1100) goto block8; else goto block9;
block8:;
int64_t $tmp1103 = $tmp1097.value;
int64_t $tmp1104 = $tmp1098.value;
bool $tmp1105 = $tmp1103 <= $tmp1104;
frost$core$Bit $tmp1106 = (frost$core$Bit) {$tmp1105};
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block5; else goto block6;
block9:;
int64_t $tmp1108 = $tmp1097.value;
int64_t $tmp1109 = $tmp1098.value;
bool $tmp1110 = $tmp1108 < $tmp1109;
frost$core$Bit $tmp1111 = (frost$core$Bit) {$tmp1110};
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block5; else goto block6;
block5:;
// line 338
frost$collections$Array* $tmp1113 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp1114 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param0);
frost$core$Int64 $tmp1115 = *(&local1);
frost$core$Object* $tmp1116 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1114, $tmp1115);
org$frostlang$frostc$Type* $tmp1117 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1116), param1);
frost$collections$Array$add$frost$collections$Array$T($tmp1113, ((frost$core$Object*) $tmp1117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
frost$core$Frost$unref$frost$core$Object$Q($tmp1116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
goto block7;
block7:;
frost$core$Int64 $tmp1118 = *(&local1);
int64_t $tmp1119 = $tmp1098.value;
int64_t $tmp1120 = $tmp1118.value;
int64_t $tmp1121 = $tmp1119 - $tmp1120;
frost$core$Int64 $tmp1122 = (frost$core$Int64) {$tmp1121};
frost$core$UInt64 $tmp1123 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1122);
if ($tmp1100) goto block11; else goto block12;
block11:;
uint64_t $tmp1124 = $tmp1123.value;
uint64_t $tmp1125 = $tmp1102.value;
bool $tmp1126 = $tmp1124 >= $tmp1125;
frost$core$Bit $tmp1127 = (frost$core$Bit) {$tmp1126};
bool $tmp1128 = $tmp1127.value;
if ($tmp1128) goto block10; else goto block6;
block12:;
uint64_t $tmp1129 = $tmp1123.value;
uint64_t $tmp1130 = $tmp1102.value;
bool $tmp1131 = $tmp1129 > $tmp1130;
frost$core$Bit $tmp1132 = (frost$core$Bit) {$tmp1131};
bool $tmp1133 = $tmp1132.value;
if ($tmp1133) goto block10; else goto block6;
block10:;
int64_t $tmp1134 = $tmp1118.value;
int64_t $tmp1135 = $tmp1101.value;
int64_t $tmp1136 = $tmp1134 + $tmp1135;
frost$core$Int64 $tmp1137 = (frost$core$Int64) {$tmp1136};
*(&local1) = $tmp1137;
goto block5;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
// line 340
org$frostlang$frostc$Position* $tmp1138 = &((org$frostlang$frostc$Symbol*) param0)->position;
org$frostlang$frostc$Position $tmp1139 = *$tmp1138;
org$frostlang$frostc$Type$Kind* $tmp1140 = &param0->typeKind;
org$frostlang$frostc$Type$Kind $tmp1141 = *$tmp1140;
frost$collections$Array* $tmp1142 = *(&local0);
org$frostlang$frostc$Type* $tmp1143 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type(param0);
frost$core$Int64* $tmp1144 = &param0->priority;
frost$core$Int64 $tmp1145 = *$tmp1144;
org$frostlang$frostc$Type* $tmp1146 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1139, $tmp1141, ((frost$collections$ListView*) $tmp1142), $tmp1143, $tmp1145);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
frost$collections$Array* $tmp1147 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1147));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1146;
block4:;
// line 343
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Call$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodDecl$GenericParameter* param0) {

// line 351
org$frostlang$frostc$Type** $tmp1148 = &param0->bound;
org$frostlang$frostc$Type* $tmp1149 = *$tmp1148;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1149));
return $tmp1149;

}
org$frostlang$frostc$MethodRef* org$frostlang$frostc$expression$Call$performTypeInference$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$MethodRef$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodRef* param1, frost$collections$ListView* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Bit local1;
frost$collections$HashMap* local2 = NULL;
frost$core$Int64 local3;
frost$core$Int64 local4;
org$frostlang$frostc$Type* local5 = NULL;
frost$collections$ListView* local6 = NULL;
frost$collections$ListView* local7 = NULL;
org$frostlang$frostc$Pair* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
frost$core$Int64 local10;
org$frostlang$frostc$Type* local11 = NULL;
org$frostlang$frostc$Pair* local12 = NULL;
frost$core$Int64 local13;
org$frostlang$frostc$Type* local14 = NULL;
// line 348
frost$core$Bit* $tmp1150 = &param1->requiresTypeInference;
frost$core$Bit $tmp1151 = *$tmp1150;
frost$core$Bit $tmp1152 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1151);
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block1; else goto block2;
block1:;
// line 349
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// line 351
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1154 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$MethodDecl** $tmp1155 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1156 = *$tmp1155;
frost$collections$Array** $tmp1157 = &$tmp1156->genericParameters;
frost$collections$Array* $tmp1158 = *$tmp1157;
FROST_ASSERT(32 == sizeof(frost$core$Method));
frost$core$Method* $tmp1160 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp1160, ((frost$core$Int8*) org$frostlang$frostc$expression$Call$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type), ((frost$core$Immutable*) NULL));
ITable* $tmp1161 = ((frost$collections$CollectionView*) $tmp1158)->$class->itable;
while ($tmp1161->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1161 = $tmp1161->next;
}
$fn1163 $tmp1162 = $tmp1161->methods[8];
frost$collections$Array* $tmp1164 = $tmp1162(((frost$collections$CollectionView*) $tmp1158), ((frost$core$MutableMethod*) $tmp1160));
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp1154, ((frost$collections$CollectionView*) $tmp1164));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
frost$collections$Array* $tmp1165 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
*(&local0) = $tmp1154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
// line 352
frost$core$Bit $tmp1166 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1166;
// line 353
goto block3;
block3:;
// line 354
frost$core$Bit $tmp1167 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1167;
// line 355
FROST_ASSERT(56 == sizeof(frost$collections$HashMap));
frost$collections$HashMap* $tmp1168 = (frost$collections$HashMap*) frostObjectAlloc(56, (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init($tmp1168);
*(&local2) = ((frost$collections$HashMap*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$collections$HashMap* $tmp1169 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
*(&local2) = $tmp1168;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
// line 356
frost$core$Int64 $tmp1170 = (frost$core$Int64) {0};
frost$collections$Array* $tmp1171 = *(&local0);
ITable* $tmp1172 = ((frost$collections$CollectionView*) $tmp1171)->$class->itable;
while ($tmp1172->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1172 = $tmp1172->next;
}
$fn1174 $tmp1173 = $tmp1172->methods[0];
frost$core$Int64 $tmp1175 = $tmp1173(((frost$collections$CollectionView*) $tmp1171));
frost$core$Bit $tmp1176 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1177 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1170, $tmp1175, $tmp1176);
frost$core$Int64 $tmp1178 = $tmp1177.min;
*(&local3) = $tmp1178;
frost$core$Int64 $tmp1179 = $tmp1177.max;
frost$core$Bit $tmp1180 = $tmp1177.inclusive;
bool $tmp1181 = $tmp1180.value;
frost$core$Int64 $tmp1182 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1183 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1182);
if ($tmp1181) goto block9; else goto block10;
block9:;
int64_t $tmp1184 = $tmp1178.value;
int64_t $tmp1185 = $tmp1179.value;
bool $tmp1186 = $tmp1184 <= $tmp1185;
frost$core$Bit $tmp1187 = (frost$core$Bit) {$tmp1186};
bool $tmp1188 = $tmp1187.value;
if ($tmp1188) goto block6; else goto block7;
block10:;
int64_t $tmp1189 = $tmp1178.value;
int64_t $tmp1190 = $tmp1179.value;
bool $tmp1191 = $tmp1189 < $tmp1190;
frost$core$Bit $tmp1192 = (frost$core$Bit) {$tmp1191};
bool $tmp1193 = $tmp1192.value;
if ($tmp1193) goto block6; else goto block7;
block6:;
// line 357
frost$collections$HashMap* $tmp1194 = *(&local2);
org$frostlang$frostc$MethodDecl** $tmp1195 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1196 = *$tmp1195;
frost$core$Weak** $tmp1197 = &$tmp1196->owner;
frost$core$Weak* $tmp1198 = *$tmp1197;
frost$core$Object* $tmp1199 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1198);
frost$core$String** $tmp1200 = &((org$frostlang$frostc$ClassDecl*) $tmp1199)->name;
frost$core$String* $tmp1201 = *$tmp1200;
frost$core$String* $tmp1202 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1201, &$s1203);
org$frostlang$frostc$MethodDecl** $tmp1204 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1205 = *$tmp1204;
frost$core$String** $tmp1206 = &((org$frostlang$frostc$Symbol*) $tmp1205)->name;
frost$core$String* $tmp1207 = *$tmp1206;
frost$core$String* $tmp1208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1202, $tmp1207);
frost$core$String* $tmp1209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1208, &$s1210);
org$frostlang$frostc$MethodDecl** $tmp1211 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1212 = *$tmp1211;
frost$collections$Array** $tmp1213 = &$tmp1212->genericParameters;
frost$collections$Array* $tmp1214 = *$tmp1213;
frost$core$Int64 $tmp1215 = *(&local3);
frost$core$Object* $tmp1216 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1214, $tmp1215);
frost$core$String** $tmp1217 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1216))->name;
frost$core$String* $tmp1218 = *$tmp1217;
frost$core$String* $tmp1219 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1209, $tmp1218);
frost$collections$Array* $tmp1220 = *(&local0);
frost$core$Int64 $tmp1221 = *(&local3);
frost$core$Object* $tmp1222 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1220, $tmp1221);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V($tmp1194, ((frost$collections$Key*) $tmp1219), ((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1222)));
frost$core$Frost$unref$frost$core$Object$Q($tmp1222);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
frost$core$Frost$unref$frost$core$Object$Q($tmp1216);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
frost$core$Frost$unref$frost$core$Object$Q($tmp1199);
goto block8;
block8:;
frost$core$Int64 $tmp1223 = *(&local3);
int64_t $tmp1224 = $tmp1179.value;
int64_t $tmp1225 = $tmp1223.value;
int64_t $tmp1226 = $tmp1224 - $tmp1225;
frost$core$Int64 $tmp1227 = (frost$core$Int64) {$tmp1226};
frost$core$UInt64 $tmp1228 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1227);
if ($tmp1181) goto block12; else goto block13;
block12:;
uint64_t $tmp1229 = $tmp1228.value;
uint64_t $tmp1230 = $tmp1183.value;
bool $tmp1231 = $tmp1229 >= $tmp1230;
frost$core$Bit $tmp1232 = (frost$core$Bit) {$tmp1231};
bool $tmp1233 = $tmp1232.value;
if ($tmp1233) goto block11; else goto block7;
block13:;
uint64_t $tmp1234 = $tmp1228.value;
uint64_t $tmp1235 = $tmp1183.value;
bool $tmp1236 = $tmp1234 > $tmp1235;
frost$core$Bit $tmp1237 = (frost$core$Bit) {$tmp1236};
bool $tmp1238 = $tmp1237.value;
if ($tmp1238) goto block11; else goto block7;
block11:;
int64_t $tmp1239 = $tmp1223.value;
int64_t $tmp1240 = $tmp1182.value;
int64_t $tmp1241 = $tmp1239 + $tmp1240;
frost$core$Int64 $tmp1242 = (frost$core$Int64) {$tmp1241};
*(&local3) = $tmp1242;
goto block6;
block7:;
// line 360
frost$core$Int64 $tmp1243 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl** $tmp1244 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1245 = *$tmp1244;
frost$collections$Array** $tmp1246 = &$tmp1245->parameters;
frost$collections$Array* $tmp1247 = *$tmp1246;
ITable* $tmp1248 = ((frost$collections$CollectionView*) $tmp1247)->$class->itable;
while ($tmp1248->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1248 = $tmp1248->next;
}
$fn1250 $tmp1249 = $tmp1248->methods[0];
frost$core$Int64 $tmp1251 = $tmp1249(((frost$collections$CollectionView*) $tmp1247));
frost$core$Bit $tmp1252 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1253 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1243, $tmp1251, $tmp1252);
frost$core$Int64 $tmp1254 = $tmp1253.min;
*(&local4) = $tmp1254;
frost$core$Int64 $tmp1255 = $tmp1253.max;
frost$core$Bit $tmp1256 = $tmp1253.inclusive;
bool $tmp1257 = $tmp1256.value;
frost$core$Int64 $tmp1258 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1259 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1258);
if ($tmp1257) goto block17; else goto block18;
block17:;
int64_t $tmp1260 = $tmp1254.value;
int64_t $tmp1261 = $tmp1255.value;
bool $tmp1262 = $tmp1260 <= $tmp1261;
frost$core$Bit $tmp1263 = (frost$core$Bit) {$tmp1262};
bool $tmp1264 = $tmp1263.value;
if ($tmp1264) goto block14; else goto block15;
block18:;
int64_t $tmp1265 = $tmp1254.value;
int64_t $tmp1266 = $tmp1255.value;
bool $tmp1267 = $tmp1265 < $tmp1266;
frost$core$Bit $tmp1268 = (frost$core$Bit) {$tmp1267};
bool $tmp1269 = $tmp1268.value;
if ($tmp1269) goto block14; else goto block15;
block14:;
// line 361
frost$core$Int64 $tmp1270 = *(&local4);
org$frostlang$frostc$Type* $tmp1271 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp1270);
frost$collections$HashMap* $tmp1272 = *(&local2);
org$frostlang$frostc$Type* $tmp1273 = org$frostlang$frostc$expression$Call$methodRemap$org$frostlang$frostc$Type$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1271, $tmp1272);
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
org$frostlang$frostc$Type* $tmp1274 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local5) = $tmp1273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
// line 362
org$frostlang$frostc$MethodDecl** $tmp1275 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1276 = *$tmp1275;
org$frostlang$frostc$Type* $tmp1277 = *(&local5);
frost$collections$ListView* $tmp1278 = org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q($tmp1276, $tmp1277);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
frost$collections$ListView* $tmp1279 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
*(&local6) = $tmp1278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
// line 363
frost$collections$ListView* $tmp1280 = *(&local6);
frost$core$Bit $tmp1281 = frost$core$Bit$init$builtin_bit($tmp1280 != NULL);
bool $tmp1282 = $tmp1281.value;
if ($tmp1282) goto block19; else goto block21;
block19:;
// line 364
frost$collections$ListView* $tmp1283 = *(&local6);
ITable* $tmp1284 = ((frost$collections$Iterable*) $tmp1283)->$class->itable;
while ($tmp1284->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1284 = $tmp1284->next;
}
$fn1286 $tmp1285 = $tmp1284->methods[0];
frost$collections$Iterator* $tmp1287 = $tmp1285(((frost$collections$Iterable*) $tmp1283));
goto block22;
block22:;
ITable* $tmp1288 = $tmp1287->$class->itable;
while ($tmp1288->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1288 = $tmp1288->next;
}
$fn1290 $tmp1289 = $tmp1288->methods[0];
frost$core$Bit $tmp1291 = $tmp1289($tmp1287);
bool $tmp1292 = $tmp1291.value;
if ($tmp1292) goto block24; else goto block23;
block23:;
*(&local7) = ((frost$collections$ListView*) NULL);
ITable* $tmp1293 = $tmp1287->$class->itable;
while ($tmp1293->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1293 = $tmp1293->next;
}
$fn1295 $tmp1294 = $tmp1293->methods[1];
frost$core$Object* $tmp1296 = $tmp1294($tmp1287);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1296)));
frost$collections$ListView* $tmp1297 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
*(&local7) = ((frost$collections$ListView*) $tmp1296);
// line 365
frost$core$Int64 $tmp1298 = *(&local4);
ITable* $tmp1299 = param2->$class->itable;
while ($tmp1299->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1299 = $tmp1299->next;
}
$fn1301 $tmp1300 = $tmp1299->methods[0];
frost$core$Object* $tmp1302 = $tmp1300(param2, $tmp1298);
org$frostlang$frostc$Type* $tmp1303 = *(&local5);
org$frostlang$frostc$Pair* $tmp1304 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1302), $tmp1303);
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
org$frostlang$frostc$Pair* $tmp1305 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local8) = $tmp1304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q($tmp1302);
// line 366
org$frostlang$frostc$Pair* $tmp1306 = *(&local8);
frost$core$Bit $tmp1307 = frost$core$Bit$init$builtin_bit($tmp1306 == NULL);
bool $tmp1308 = $tmp1307.value;
if ($tmp1308) goto block25; else goto block26;
block25:;
// line 367
frost$core$Int64 $tmp1309 = *(&local4);
ITable* $tmp1310 = param2->$class->itable;
while ($tmp1310->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1310 = $tmp1310->next;
}
$fn1312 $tmp1311 = $tmp1310->methods[0];
frost$core$Object* $tmp1313 = $tmp1311(param2, $tmp1309);
frost$core$String* $tmp1314 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1315, ((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1313)));
frost$core$String* $tmp1316 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1314, &$s1317);
org$frostlang$frostc$Type* $tmp1318 = *(&local5);
frost$collections$HashMap* $tmp1319 = *(&local2);
org$frostlang$frostc$Type* $tmp1320 = org$frostlang$frostc$Type$remap$frost$collections$HashMap$LTfrost$core$String$Corg$frostlang$frostc$Type$GT$R$org$frostlang$frostc$Type($tmp1318, $tmp1319);
frost$core$String* $tmp1321 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1316, ((frost$core$Object*) $tmp1320));
frost$core$String* $tmp1322 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1321, &$s1323);
frost$io$Console$printLine$frost$core$String($tmp1322);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$core$Frost$unref$frost$core$Object$Q($tmp1313);
// line 368
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Pair* $tmp1324 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1296);
frost$collections$ListView* $tmp1325 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
*(&local7) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
frost$collections$ListView* $tmp1326 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Type* $tmp1327 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashMap* $tmp1328 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
*(&local2) = ((frost$collections$HashMap*) NULL);
frost$collections$Array* $tmp1329 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
*(&local0) = ((frost$collections$Array*) NULL);
return param1;
block26:;
// line 370
org$frostlang$frostc$MethodDecl** $tmp1330 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1331 = *$tmp1330;
frost$collections$Array** $tmp1332 = &$tmp1331->parameters;
frost$collections$Array* $tmp1333 = *$tmp1332;
frost$core$Int64 $tmp1334 = *(&local4);
frost$core$Object* $tmp1335 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1333, $tmp1334);
org$frostlang$frostc$Type** $tmp1336 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1335)->type;
org$frostlang$frostc$Type* $tmp1337 = *$tmp1336;
frost$collections$ListView* $tmp1338 = *(&local7);
org$frostlang$frostc$Type* $tmp1339 = org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type($tmp1337, $tmp1338);
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
org$frostlang$frostc$Type* $tmp1340 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local9) = $tmp1339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
frost$core$Frost$unref$frost$core$Object$Q($tmp1335);
// line 371
org$frostlang$frostc$Type* $tmp1341 = *(&local9);
org$frostlang$frostc$Type$Kind* $tmp1342 = &$tmp1341->typeKind;
org$frostlang$frostc$Type$Kind $tmp1343 = *$tmp1342;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1344;
$tmp1344 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1344->value = $tmp1343;
frost$core$Int64 $tmp1345 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp1346 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1345);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1347;
$tmp1347 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1347->value = $tmp1346;
ITable* $tmp1348 = ((frost$core$Equatable*) $tmp1344)->$class->itable;
while ($tmp1348->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1348 = $tmp1348->next;
}
$fn1350 $tmp1349 = $tmp1348->methods[0];
frost$core$Bit $tmp1351 = $tmp1349(((frost$core$Equatable*) $tmp1344), ((frost$core$Equatable*) $tmp1347));
bool $tmp1352 = $tmp1351.value;
if ($tmp1352) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp1353 = (frost$core$Int64) {371};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1354, $tmp1353);
abort(); // unreachable
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1347)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1344)));
// line 372
frost$core$Int64 $tmp1355 = (frost$core$Int64) {0};
*(&local10) = $tmp1355;
// line 373
goto block29;
block29:;
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1356 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
org$frostlang$frostc$MethodDecl** $tmp1357 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1358 = *$tmp1357;
frost$collections$Array** $tmp1359 = &$tmp1358->genericParameters;
frost$collections$Array* $tmp1360 = *$tmp1359;
frost$core$Int64 $tmp1361 = *(&local10);
frost$core$Object* $tmp1362 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1360, $tmp1361);
org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodDecl$GenericParameter($tmp1356, ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1362));
org$frostlang$frostc$Type* $tmp1363 = *(&local9);
ITable* $tmp1364 = ((frost$core$Equatable*) $tmp1356)->$class->itable;
while ($tmp1364->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1364 = $tmp1364->next;
}
$fn1366 $tmp1365 = $tmp1364->methods[1];
frost$core$Bit $tmp1367 = $tmp1365(((frost$core$Equatable*) $tmp1356), ((frost$core$Equatable*) $tmp1363));
bool $tmp1368 = $tmp1367.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1362);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
if ($tmp1368) goto block30; else goto block31;
block30:;
// line 374
frost$core$Int64 $tmp1369 = *(&local10);
frost$core$Int64 $tmp1370 = (frost$core$Int64) {1};
int64_t $tmp1371 = $tmp1369.value;
int64_t $tmp1372 = $tmp1370.value;
int64_t $tmp1373 = $tmp1371 + $tmp1372;
frost$core$Int64 $tmp1374 = (frost$core$Int64) {$tmp1373};
*(&local10) = $tmp1374;
goto block29;
block31:;
// line 376
frost$collections$Array* $tmp1375 = *(&local0);
frost$core$Int64 $tmp1376 = *(&local10);
frost$core$Object* $tmp1377 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1375, $tmp1376);
org$frostlang$frostc$Pair* $tmp1378 = *(&local8);
frost$core$Object** $tmp1379 = &$tmp1378->first;
frost$core$Object* $tmp1380 = *$tmp1379;
frost$collections$ListView* $tmp1381 = *(&local7);
org$frostlang$frostc$Type* $tmp1382 = org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1380), $tmp1381);
org$frostlang$frostc$Type* $tmp1383 = org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1377), param0, $tmp1382);
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
org$frostlang$frostc$Type* $tmp1384 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local11) = $tmp1383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
frost$core$Frost$unref$frost$core$Object$Q($tmp1377);
// line 378
org$frostlang$frostc$Type* $tmp1385 = *(&local11);
frost$collections$Array* $tmp1386 = *(&local0);
frost$core$Int64 $tmp1387 = *(&local10);
frost$core$Object* $tmp1388 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1386, $tmp1387);
ITable* $tmp1389 = ((frost$core$Equatable*) $tmp1385)->$class->itable;
while ($tmp1389->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1389 = $tmp1389->next;
}
$fn1391 $tmp1390 = $tmp1389->methods[1];
frost$core$Bit $tmp1392 = $tmp1390(((frost$core$Equatable*) $tmp1385), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp1388)));
bool $tmp1393 = $tmp1392.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1388);
if ($tmp1393) goto block32; else goto block33;
block32:;
// line 379
frost$collections$Array* $tmp1394 = *(&local0);
frost$core$Int64 $tmp1395 = *(&local10);
org$frostlang$frostc$Type* $tmp1396 = *(&local11);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp1394, $tmp1395, ((frost$core$Object*) $tmp1396));
// line 380
frost$core$Bit $tmp1397 = frost$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp1397;
goto block33;
block33:;
org$frostlang$frostc$Type* $tmp1398 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1399 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp1400 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
*(&local8) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1296);
frost$collections$ListView* $tmp1401 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
*(&local7) = ((frost$collections$ListView*) NULL);
goto block22;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
goto block20;
block21:;
// line 384
org$frostlang$frostc$Type* $tmp1402 = *(&local5);
org$frostlang$frostc$Type$Kind* $tmp1403 = &$tmp1402->typeKind;
org$frostlang$frostc$Type$Kind $tmp1404 = *$tmp1403;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1405;
$tmp1405 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1405->value = $tmp1404;
frost$core$Int64 $tmp1406 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp1407 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1406);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1408;
$tmp1408 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1408->value = $tmp1407;
ITable* $tmp1409 = ((frost$core$Equatable*) $tmp1405)->$class->itable;
while ($tmp1409->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1409 = $tmp1409->next;
}
$fn1411 $tmp1410 = $tmp1409->methods[0];
frost$core$Bit $tmp1412 = $tmp1410(((frost$core$Equatable*) $tmp1405), ((frost$core$Equatable*) $tmp1408));
bool $tmp1413 = $tmp1412.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1408)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1405)));
if ($tmp1413) goto block34; else goto block35;
block34:;
// line 385
frost$core$Int64 $tmp1414 = *(&local4);
ITable* $tmp1415 = param2->$class->itable;
while ($tmp1415->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1415 = $tmp1415->next;
}
$fn1417 $tmp1416 = $tmp1415->methods[0];
frost$core$Object* $tmp1418 = $tmp1416(param2, $tmp1414);
org$frostlang$frostc$Type* $tmp1419 = *(&local5);
org$frostlang$frostc$Pair* $tmp1420 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1418), $tmp1419);
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
org$frostlang$frostc$Pair* $tmp1421 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local12) = $tmp1420;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
frost$core$Frost$unref$frost$core$Object$Q($tmp1418);
// line 386
org$frostlang$frostc$Pair* $tmp1422 = *(&local12);
frost$core$Bit $tmp1423 = frost$core$Bit$init$builtin_bit($tmp1422 == NULL);
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block36; else goto block37;
block36:;
// line 387
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Pair* $tmp1425 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
frost$collections$ListView* $tmp1426 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Type* $tmp1427 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$HashMap* $tmp1428 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
*(&local2) = ((frost$collections$HashMap*) NULL);
frost$collections$Array* $tmp1429 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
*(&local0) = ((frost$collections$Array*) NULL);
return param1;
block37:;
// line 389
frost$core$Int64 $tmp1430 = (frost$core$Int64) {0};
*(&local13) = $tmp1430;
// line 390
goto block38;
block38:;
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp1431 = (org$frostlang$frostc$Type*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$Type$class);
org$frostlang$frostc$MethodDecl** $tmp1432 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1433 = *$tmp1432;
frost$collections$Array** $tmp1434 = &$tmp1433->genericParameters;
frost$collections$Array* $tmp1435 = *$tmp1434;
frost$core$Int64 $tmp1436 = *(&local13);
frost$core$Object* $tmp1437 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1435, $tmp1436);
org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodDecl$GenericParameter($tmp1431, ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1437));
org$frostlang$frostc$Type* $tmp1438 = *(&local5);
ITable* $tmp1439 = ((frost$core$Equatable*) $tmp1431)->$class->itable;
while ($tmp1439->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1439 = $tmp1439->next;
}
$fn1441 $tmp1440 = $tmp1439->methods[1];
frost$core$Bit $tmp1442 = $tmp1440(((frost$core$Equatable*) $tmp1431), ((frost$core$Equatable*) $tmp1438));
bool $tmp1443 = $tmp1442.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1437);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
if ($tmp1443) goto block39; else goto block40;
block39:;
// line 391
frost$core$Int64 $tmp1444 = *(&local13);
frost$core$Int64 $tmp1445 = (frost$core$Int64) {1};
int64_t $tmp1446 = $tmp1444.value;
int64_t $tmp1447 = $tmp1445.value;
int64_t $tmp1448 = $tmp1446 + $tmp1447;
frost$core$Int64 $tmp1449 = (frost$core$Int64) {$tmp1448};
*(&local13) = $tmp1449;
goto block38;
block40:;
// line 393
frost$collections$Array* $tmp1450 = *(&local0);
frost$core$Int64 $tmp1451 = *(&local13);
frost$core$Object* $tmp1452 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1450, $tmp1451);
org$frostlang$frostc$Pair* $tmp1453 = *(&local12);
frost$core$Object** $tmp1454 = &$tmp1453->first;
frost$core$Object* $tmp1455 = *$tmp1454;
org$frostlang$frostc$Type* $tmp1456 = org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1452), param0, ((org$frostlang$frostc$Type*) $tmp1455));
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
org$frostlang$frostc$Type* $tmp1457 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
*(&local14) = $tmp1456;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
frost$core$Frost$unref$frost$core$Object$Q($tmp1452);
// line 394
org$frostlang$frostc$Type* $tmp1458 = *(&local14);
frost$collections$Array* $tmp1459 = *(&local0);
frost$core$Int64 $tmp1460 = *(&local13);
frost$core$Object* $tmp1461 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1459, $tmp1460);
ITable* $tmp1462 = ((frost$core$Equatable*) $tmp1458)->$class->itable;
while ($tmp1462->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1462 = $tmp1462->next;
}
$fn1464 $tmp1463 = $tmp1462->methods[1];
frost$core$Bit $tmp1465 = $tmp1463(((frost$core$Equatable*) $tmp1458), ((frost$core$Equatable*) ((org$frostlang$frostc$Type*) $tmp1461)));
bool $tmp1466 = $tmp1465.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1461);
if ($tmp1466) goto block41; else goto block42;
block41:;
// line 395
frost$collections$Array* $tmp1467 = *(&local0);
frost$core$Int64 $tmp1468 = *(&local13);
org$frostlang$frostc$Type* $tmp1469 = *(&local14);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp1467, $tmp1468, ((frost$core$Object*) $tmp1469));
// line 396
frost$core$Bit $tmp1470 = frost$core$Bit$init$builtin_bit(true);
*(&local1) = $tmp1470;
goto block42;
block42:;
org$frostlang$frostc$Type* $tmp1471 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp1472 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1472));
*(&local12) = ((org$frostlang$frostc$Pair*) NULL);
goto block35;
block35:;
goto block20;
block20:;
frost$collections$ListView* $tmp1473 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1473));
*(&local6) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Type* $tmp1474 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1474));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
goto block16;
block16:;
frost$core$Int64 $tmp1475 = *(&local4);
int64_t $tmp1476 = $tmp1255.value;
int64_t $tmp1477 = $tmp1475.value;
int64_t $tmp1478 = $tmp1476 - $tmp1477;
frost$core$Int64 $tmp1479 = (frost$core$Int64) {$tmp1478};
frost$core$UInt64 $tmp1480 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1479);
if ($tmp1257) goto block44; else goto block45;
block44:;
uint64_t $tmp1481 = $tmp1480.value;
uint64_t $tmp1482 = $tmp1259.value;
bool $tmp1483 = $tmp1481 >= $tmp1482;
frost$core$Bit $tmp1484 = (frost$core$Bit) {$tmp1483};
bool $tmp1485 = $tmp1484.value;
if ($tmp1485) goto block43; else goto block15;
block45:;
uint64_t $tmp1486 = $tmp1480.value;
uint64_t $tmp1487 = $tmp1259.value;
bool $tmp1488 = $tmp1486 > $tmp1487;
frost$core$Bit $tmp1489 = (frost$core$Bit) {$tmp1488};
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block43; else goto block15;
block43:;
int64_t $tmp1491 = $tmp1475.value;
int64_t $tmp1492 = $tmp1258.value;
int64_t $tmp1493 = $tmp1491 + $tmp1492;
frost$core$Int64 $tmp1494 = (frost$core$Int64) {$tmp1493};
*(&local4) = $tmp1494;
goto block14;
block15:;
frost$collections$HashMap* $tmp1495 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
*(&local2) = ((frost$collections$HashMap*) NULL);
goto block4;
block4:;
frost$core$Bit $tmp1496 = *(&local1);
bool $tmp1497 = $tmp1496.value;
if ($tmp1497) goto block3; else goto block5;
block5:;
// line 402
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$MethodRef));
org$frostlang$frostc$MethodRef* $tmp1498 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type** $tmp1499 = &param1->target;
org$frostlang$frostc$Type* $tmp1500 = *$tmp1499;
org$frostlang$frostc$MethodDecl** $tmp1501 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1502 = *$tmp1501;
frost$collections$Array* $tmp1503 = *(&local0);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1498, param0, $tmp1500, $tmp1502, ((frost$collections$ListView*) $tmp1503));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
frost$collections$Array* $tmp1504 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1504));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1498;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3, frost$collections$ListView* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

// line 409
org$frostlang$frostc$Pair* $tmp1505 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, param2, param3, ((frost$collections$ListView*) NULL), param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
return $tmp1505;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3, frost$collections$ListView* param4, frost$collections$ListView* param5, org$frostlang$frostc$Compiler$TypeContext* param6) {

org$frostlang$frostc$Pair* local0 = NULL;
frost$core$Bit local1;
frost$core$Int64 local2;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$MethodDecl* local4 = NULL;
org$frostlang$frostc$MethodRef* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
frost$core$Int64 local7;
frost$core$Int64 local8;
org$frostlang$frostc$Pair* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
org$frostlang$frostc$Pair* local11 = NULL;
// line 417
ITable* $tmp1506 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1506->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1506 = $tmp1506->next;
}
$fn1508 $tmp1507 = $tmp1506->methods[0];
frost$core$Int64 $tmp1509 = $tmp1507(((frost$collections$CollectionView*) param3));
frost$core$Int64 $tmp1510 = (frost$core$Int64) {0};
frost$core$Bit $tmp1511 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1509, $tmp1510);
bool $tmp1512 = $tmp1511.value;
if ($tmp1512) goto block7; else goto block8;
block7:;
// line 418
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block8:;
// line 420
frost$core$Int64 $tmp1513 = (frost$core$Int64) {9223372036854775807};
*(&local2) = $tmp1513;
// line 421
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1514 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1514);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
frost$collections$Array* $tmp1515 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1515));
*(&local3) = $tmp1514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1514));
// line 422
ITable* $tmp1516 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp1516->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1516 = $tmp1516->next;
}
$fn1518 $tmp1517 = $tmp1516->methods[0];
frost$collections$Iterator* $tmp1519 = $tmp1517(((frost$collections$Iterable*) param3));
goto block9;
block9:;
ITable* $tmp1520 = $tmp1519->$class->itable;
while ($tmp1520->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1520 = $tmp1520->next;
}
$fn1522 $tmp1521 = $tmp1520->methods[0];
frost$core$Bit $tmp1523 = $tmp1521($tmp1519);
bool $tmp1524 = $tmp1523.value;
if ($tmp1524) goto block11; else goto block10;
block10:;
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1525 = $tmp1519->$class->itable;
while ($tmp1525->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1525 = $tmp1525->next;
}
$fn1527 $tmp1526 = $tmp1525->methods[1];
frost$core$Object* $tmp1528 = $tmp1526($tmp1519);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1528)));
org$frostlang$frostc$MethodDecl* $tmp1529 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) $tmp1528);
// line 423
org$frostlang$frostc$MethodDecl* $tmp1530 = *(&local4);
frost$collections$Array** $tmp1531 = &$tmp1530->parameters;
frost$collections$Array* $tmp1532 = *$tmp1531;
ITable* $tmp1533 = ((frost$collections$CollectionView*) $tmp1532)->$class->itable;
while ($tmp1533->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1533 = $tmp1533->next;
}
$fn1535 $tmp1534 = $tmp1533->methods[0];
frost$core$Int64 $tmp1536 = $tmp1534(((frost$collections$CollectionView*) $tmp1532));
ITable* $tmp1537 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp1537->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1537 = $tmp1537->next;
}
$fn1539 $tmp1538 = $tmp1537->methods[0];
frost$core$Int64 $tmp1540 = $tmp1538(((frost$collections$CollectionView*) param5));
int64_t $tmp1541 = $tmp1536.value;
int64_t $tmp1542 = $tmp1540.value;
bool $tmp1543 = $tmp1541 != $tmp1542;
frost$core$Bit $tmp1544 = (frost$core$Bit) {$tmp1543};
bool $tmp1545 = $tmp1544.value;
if ($tmp1545) goto block12; else goto block13;
block12:;
// line 424
frost$core$Frost$unref$frost$core$Object$Q($tmp1528);
org$frostlang$frostc$MethodDecl* $tmp1546 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1546));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block13:;
// line 426
org$frostlang$frostc$MethodDecl* $tmp1547 = *(&local4);
frost$core$Bit $tmp1548 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp1547);
frost$core$Bit $tmp1549 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1548);
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block14; else goto block15;
block14:;
// line 427
frost$core$Frost$unref$frost$core$Object$Q($tmp1528);
org$frostlang$frostc$MethodDecl* $tmp1551 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1551));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block15:;
// line 429
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
// line 430
frost$core$Bit $tmp1552 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp1553 = $tmp1552.value;
if ($tmp1553) goto block16; else goto block18;
block16:;
// line 431
$fn1555 $tmp1554 = ($fn1555) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1556 = $tmp1554(param2);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
org$frostlang$frostc$Type* $tmp1557 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
*(&local6) = $tmp1556;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
// line 432
org$frostlang$frostc$Type* $tmp1558 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp1559 = &$tmp1558->typeKind;
org$frostlang$frostc$Type$Kind $tmp1560 = *$tmp1559;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1561;
$tmp1561 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1561->value = $tmp1560;
frost$core$Int64 $tmp1562 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp1563 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1562);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1564;
$tmp1564 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1564->value = $tmp1563;
ITable* $tmp1565 = ((frost$core$Equatable*) $tmp1561)->$class->itable;
while ($tmp1565->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1565 = $tmp1565->next;
}
$fn1567 $tmp1566 = $tmp1565->methods[0];
frost$core$Bit $tmp1568 = $tmp1566(((frost$core$Equatable*) $tmp1561), ((frost$core$Equatable*) $tmp1564));
bool $tmp1569 = $tmp1568.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1564)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1561)));
if ($tmp1569) goto block19; else goto block20;
block19:;
// line 433
org$frostlang$frostc$Type* $tmp1570 = *(&local6);
frost$core$Weak** $tmp1571 = &$tmp1570->genericMethodParameter;
frost$core$Weak* $tmp1572 = *$tmp1571;
frost$core$Object* $tmp1573 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1572);
org$frostlang$frostc$Type** $tmp1574 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1573)->bound;
org$frostlang$frostc$Type* $tmp1575 = *$tmp1574;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
org$frostlang$frostc$Type* $tmp1576 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1576));
*(&local6) = $tmp1575;
frost$core$Frost$unref$frost$core$Object$Q($tmp1573);
goto block20;
block20:;
// line 435
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$MethodRef));
org$frostlang$frostc$MethodRef* $tmp1577 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp1578 = *(&local6);
org$frostlang$frostc$MethodDecl* $tmp1579 = *(&local4);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1577, param0, $tmp1578, $tmp1579, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
org$frostlang$frostc$MethodRef* $tmp1580 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
*(&local5) = $tmp1577;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
org$frostlang$frostc$Type* $tmp1581 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
goto block17;
block18:;
// line 437
org$frostlang$frostc$MethodDecl* $tmp1582 = *(&local4);
org$frostlang$frostc$Annotations** $tmp1583 = &$tmp1582->annotations;
org$frostlang$frostc$Annotations* $tmp1584 = *$tmp1583;
frost$core$Bit $tmp1585 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1584);
bool $tmp1586 = $tmp1585.value;
if ($tmp1586) goto block21; else goto block24;
block24:;
org$frostlang$frostc$MethodDecl* $tmp1587 = *(&local4);
org$frostlang$frostc$MethodDecl$Kind* $tmp1588 = &$tmp1587->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1589 = *$tmp1588;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1590;
$tmp1590 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1590->value = $tmp1589;
frost$core$Int64 $tmp1591 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1592 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1591);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1593;
$tmp1593 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1593->value = $tmp1592;
ITable* $tmp1594 = ((frost$core$Equatable*) $tmp1590)->$class->itable;
while ($tmp1594->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1594 = $tmp1594->next;
}
$fn1596 $tmp1595 = $tmp1594->methods[0];
frost$core$Bit $tmp1597 = $tmp1595(((frost$core$Equatable*) $tmp1590), ((frost$core$Equatable*) $tmp1593));
bool $tmp1598 = $tmp1597.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1593)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1590)));
if ($tmp1598) goto block21; else goto block23;
block21:;
// line 438
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$MethodRef));
org$frostlang$frostc$MethodRef* $tmp1599 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$MethodDecl* $tmp1600 = *(&local4);
frost$core$Weak** $tmp1601 = &$tmp1600->owner;
frost$core$Weak* $tmp1602 = *$tmp1601;
frost$core$Object* $tmp1603 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1602);
org$frostlang$frostc$Type** $tmp1604 = &((org$frostlang$frostc$ClassDecl*) $tmp1603)->type;
org$frostlang$frostc$Type* $tmp1605 = *$tmp1604;
org$frostlang$frostc$MethodDecl* $tmp1606 = *(&local4);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1599, param0, $tmp1605, $tmp1606, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
org$frostlang$frostc$MethodRef* $tmp1607 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1607));
*(&local5) = $tmp1599;
frost$core$Frost$unref$frost$core$Object$Q($tmp1603);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
goto block22;
block23:;
// line 1
// line 441
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$MethodRef));
org$frostlang$frostc$MethodRef* $tmp1608 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
frost$collections$Stack** $tmp1609 = &param0->currentClass;
frost$collections$Stack* $tmp1610 = *$tmp1609;
frost$core$Int64 $tmp1611 = (frost$core$Int64) {0};
frost$core$Object* $tmp1612 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1610, $tmp1611);
org$frostlang$frostc$Type** $tmp1613 = &((org$frostlang$frostc$ClassDecl*) $tmp1612)->type;
org$frostlang$frostc$Type* $tmp1614 = *$tmp1613;
org$frostlang$frostc$MethodDecl* $tmp1615 = *(&local4);
frost$core$Weak** $tmp1616 = &$tmp1615->owner;
frost$core$Weak* $tmp1617 = *$tmp1616;
frost$core$Object* $tmp1618 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1617);
org$frostlang$frostc$Type* $tmp1619 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp1614, ((org$frostlang$frostc$ClassDecl*) $tmp1618));
org$frostlang$frostc$MethodDecl* $tmp1620 = *(&local4);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1608, param0, $tmp1619, $tmp1620, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
org$frostlang$frostc$MethodRef* $tmp1621 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
*(&local5) = $tmp1608;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
frost$core$Frost$unref$frost$core$Object$Q($tmp1618);
frost$core$Frost$unref$frost$core$Object$Q($tmp1612);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1608));
goto block22;
block22:;
goto block17;
block17:;
// line 444
org$frostlang$frostc$MethodRef* $tmp1622 = *(&local5);
org$frostlang$frostc$MethodRef* $tmp1623 = org$frostlang$frostc$expression$Call$performTypeInference$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$MethodRef$Q(param0, $tmp1622, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
org$frostlang$frostc$MethodRef* $tmp1624 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
*(&local5) = $tmp1623;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
// line 445
frost$core$Int64 $tmp1625 = (frost$core$Int64) {0};
*(&local7) = $tmp1625;
// line 446
frost$core$Int64 $tmp1626 = (frost$core$Int64) {0};
ITable* $tmp1627 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp1627->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1627 = $tmp1627->next;
}
$fn1629 $tmp1628 = $tmp1627->methods[0];
frost$core$Int64 $tmp1630 = $tmp1628(((frost$collections$CollectionView*) param5));
frost$core$Bit $tmp1631 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1632 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1626, $tmp1630, $tmp1631);
frost$core$Int64 $tmp1633 = $tmp1632.min;
*(&local8) = $tmp1633;
frost$core$Int64 $tmp1634 = $tmp1632.max;
frost$core$Bit $tmp1635 = $tmp1632.inclusive;
bool $tmp1636 = $tmp1635.value;
frost$core$Int64 $tmp1637 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1638 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1637);
if ($tmp1636) goto block28; else goto block29;
block28:;
int64_t $tmp1639 = $tmp1633.value;
int64_t $tmp1640 = $tmp1634.value;
bool $tmp1641 = $tmp1639 <= $tmp1640;
frost$core$Bit $tmp1642 = (frost$core$Bit) {$tmp1641};
bool $tmp1643 = $tmp1642.value;
if ($tmp1643) goto block25; else goto block26;
block29:;
int64_t $tmp1644 = $tmp1633.value;
int64_t $tmp1645 = $tmp1634.value;
bool $tmp1646 = $tmp1644 < $tmp1645;
frost$core$Bit $tmp1647 = (frost$core$Bit) {$tmp1646};
bool $tmp1648 = $tmp1647.value;
if ($tmp1648) goto block25; else goto block26;
block25:;
// line 447
frost$core$Int64 $tmp1649 = *(&local8);
ITable* $tmp1650 = param5->$class->itable;
while ($tmp1650->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1650 = $tmp1650->next;
}
$fn1652 $tmp1651 = $tmp1650->methods[0];
frost$core$Object* $tmp1653 = $tmp1651(param5, $tmp1649);
org$frostlang$frostc$MethodRef* $tmp1654 = *(&local5);
frost$core$Int64 $tmp1655 = *(&local8);
org$frostlang$frostc$Type* $tmp1656 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1654, $tmp1655);
org$frostlang$frostc$Pair* $tmp1657 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1653), $tmp1656);
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
org$frostlang$frostc$Pair* $tmp1658 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1658));
*(&local9) = $tmp1657;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1656));
frost$core$Frost$unref$frost$core$Object$Q($tmp1653);
// line 448
org$frostlang$frostc$Pair* $tmp1659 = *(&local9);
frost$core$Bit $tmp1660 = frost$core$Bit$init$builtin_bit($tmp1659 == NULL);
bool $tmp1661 = $tmp1660.value;
if ($tmp1661) goto block30; else goto block31;
block30:;
// line 449
org$frostlang$frostc$Pair* $tmp1662 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp1663 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1663));
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1528);
org$frostlang$frostc$MethodDecl* $tmp1664 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block31:;
// line 451
frost$core$Int64 $tmp1665 = *(&local7);
org$frostlang$frostc$Pair* $tmp1666 = *(&local9);
frost$core$Object** $tmp1667 = &$tmp1666->second;
frost$core$Object* $tmp1668 = *$tmp1667;
int64_t $tmp1669 = $tmp1665.value;
int64_t $tmp1670 = ((frost$core$Int64$wrapper*) $tmp1668)->value.value;
int64_t $tmp1671 = $tmp1669 + $tmp1670;
frost$core$Int64 $tmp1672 = (frost$core$Int64) {$tmp1671};
*(&local7) = $tmp1672;
org$frostlang$frostc$Pair* $tmp1673 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
goto block27;
block27:;
frost$core$Int64 $tmp1674 = *(&local8);
int64_t $tmp1675 = $tmp1634.value;
int64_t $tmp1676 = $tmp1674.value;
int64_t $tmp1677 = $tmp1675 - $tmp1676;
frost$core$Int64 $tmp1678 = (frost$core$Int64) {$tmp1677};
frost$core$UInt64 $tmp1679 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1678);
if ($tmp1636) goto block33; else goto block34;
block33:;
uint64_t $tmp1680 = $tmp1679.value;
uint64_t $tmp1681 = $tmp1638.value;
bool $tmp1682 = $tmp1680 >= $tmp1681;
frost$core$Bit $tmp1683 = (frost$core$Bit) {$tmp1682};
bool $tmp1684 = $tmp1683.value;
if ($tmp1684) goto block32; else goto block26;
block34:;
uint64_t $tmp1685 = $tmp1679.value;
uint64_t $tmp1686 = $tmp1638.value;
bool $tmp1687 = $tmp1685 > $tmp1686;
frost$core$Bit $tmp1688 = (frost$core$Bit) {$tmp1687};
bool $tmp1689 = $tmp1688.value;
if ($tmp1689) goto block32; else goto block26;
block32:;
int64_t $tmp1690 = $tmp1674.value;
int64_t $tmp1691 = $tmp1637.value;
int64_t $tmp1692 = $tmp1690 + $tmp1691;
frost$core$Int64 $tmp1693 = (frost$core$Int64) {$tmp1692};
*(&local8) = $tmp1693;
goto block25;
block26:;
// line 453
frost$core$Int64* $tmp1694 = &param6->$rawValue;
frost$core$Int64 $tmp1695 = *$tmp1694;
frost$core$Int64 $tmp1696 = (frost$core$Int64) {2};
frost$core$Bit $tmp1697 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1695, $tmp1696);
bool $tmp1698 = $tmp1697.value;
if ($tmp1698) goto block36; else goto block37;
block36:;
// line 455
org$frostlang$frostc$MethodDecl* $tmp1699 = *(&local4);
org$frostlang$frostc$Type** $tmp1700 = &$tmp1699->returnType;
org$frostlang$frostc$Type* $tmp1701 = *$tmp1700;
org$frostlang$frostc$Type* $tmp1702 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1703 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1701, $tmp1702);
bool $tmp1704 = $tmp1703.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1702));
if ($tmp1704) goto block38; else goto block40;
block40:;
org$frostlang$frostc$MethodRef* $tmp1705 = *(&local5);
org$frostlang$frostc$Type* $tmp1706 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type($tmp1705);
frost$core$Bit $tmp1707 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1706);
frost$core$Bit $tmp1708 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1707);
bool $tmp1709 = $tmp1708.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
if ($tmp1709) goto block38; else goto block39;
block38:;
// line 456
org$frostlang$frostc$MethodRef* $tmp1710 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1710));
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1528);
org$frostlang$frostc$MethodDecl* $tmp1711 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1711));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block39:;
goto block35;
block37:;
frost$core$Int64 $tmp1712 = (frost$core$Int64) {3};
frost$core$Bit $tmp1713 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1695, $tmp1712);
bool $tmp1714 = $tmp1713.value;
if ($tmp1714) goto block41; else goto block35;
block41:;
org$frostlang$frostc$Type** $tmp1715 = (org$frostlang$frostc$Type**) (param6->$data + 0);
org$frostlang$frostc$Type* $tmp1716 = *$tmp1715;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1716));
org$frostlang$frostc$Type* $tmp1717 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
*(&local10) = $tmp1716;
frost$core$Bit* $tmp1718 = (frost$core$Bit*) (param6->$data + 8);
frost$core$Bit $tmp1719 = *$tmp1718;
// line 460
org$frostlang$frostc$MethodRef* $tmp1720 = *(&local5);
org$frostlang$frostc$Type* $tmp1721 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type($tmp1720);
org$frostlang$frostc$Type* $tmp1722 = *(&local10);
org$frostlang$frostc$Pair* $tmp1723 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, $tmp1721, $tmp1722);
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
org$frostlang$frostc$Pair* $tmp1724 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
*(&local11) = $tmp1723;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1721));
// line 461
org$frostlang$frostc$Pair* $tmp1725 = *(&local11);
frost$core$Bit $tmp1726 = frost$core$Bit$init$builtin_bit($tmp1725 == NULL);
bool $tmp1727 = $tmp1726.value;
if ($tmp1727) goto block42; else goto block43;
block42:;
// line 462
org$frostlang$frostc$Pair* $tmp1728 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1728));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1729 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp1730 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1528);
org$frostlang$frostc$MethodDecl* $tmp1731 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block43:;
// line 464
frost$core$Int64 $tmp1732 = *(&local7);
org$frostlang$frostc$Pair* $tmp1733 = *(&local11);
frost$core$Object** $tmp1734 = &$tmp1733->second;
frost$core$Object* $tmp1735 = *$tmp1734;
int64_t $tmp1736 = $tmp1732.value;
int64_t $tmp1737 = ((frost$core$Int64$wrapper*) $tmp1735)->value.value;
int64_t $tmp1738 = $tmp1736 + $tmp1737;
frost$core$Int64 $tmp1739 = (frost$core$Int64) {$tmp1738};
*(&local7) = $tmp1739;
org$frostlang$frostc$Pair* $tmp1740 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1741 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block35;
block35:;
// line 467
frost$core$Int64 $tmp1742 = *(&local7);
org$frostlang$frostc$MethodDecl* $tmp1743 = *(&local4);
frost$core$Int64 $tmp1744 = org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64($tmp1743);
int64_t $tmp1745 = $tmp1742.value;
int64_t $tmp1746 = $tmp1744.value;
int64_t $tmp1747 = $tmp1745 - $tmp1746;
frost$core$Int64 $tmp1748 = (frost$core$Int64) {$tmp1747};
*(&local7) = $tmp1748;
// line 468
frost$core$Int64 $tmp1749 = *(&local7);
frost$core$Int64 $tmp1750 = *(&local2);
int64_t $tmp1751 = $tmp1749.value;
int64_t $tmp1752 = $tmp1750.value;
bool $tmp1753 = $tmp1751 < $tmp1752;
frost$core$Bit $tmp1754 = (frost$core$Bit) {$tmp1753};
bool $tmp1755 = $tmp1754.value;
if ($tmp1755) goto block44; else goto block45;
block44:;
// line 469
frost$core$Int64 $tmp1756 = *(&local7);
*(&local2) = $tmp1756;
// line 470
frost$collections$Array* $tmp1757 = *(&local3);
frost$collections$Array$clear($tmp1757);
goto block45;
block45:;
// line 472
frost$core$Int64 $tmp1758 = *(&local7);
frost$core$Int64 $tmp1759 = *(&local2);
frost$core$Bit $tmp1760 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1758, $tmp1759);
bool $tmp1761 = $tmp1760.value;
if ($tmp1761) goto block46; else goto block47;
block46:;
// line 473
frost$collections$Array* $tmp1762 = *(&local3);
org$frostlang$frostc$MethodRef* $tmp1763 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp1762, ((frost$core$Object*) $tmp1763));
goto block47;
block47:;
org$frostlang$frostc$MethodRef* $tmp1764 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1528);
org$frostlang$frostc$MethodDecl* $tmp1765 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1765));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1519));
// line 476
frost$collections$Array* $tmp1766 = *(&local3);
ITable* $tmp1767 = ((frost$collections$CollectionView*) $tmp1766)->$class->itable;
while ($tmp1767->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1767 = $tmp1767->next;
}
$fn1769 $tmp1768 = $tmp1767->methods[0];
frost$core$Int64 $tmp1770 = $tmp1768(((frost$collections$CollectionView*) $tmp1766));
frost$core$Int64 $tmp1771 = (frost$core$Int64) {0};
frost$core$Bit $tmp1772 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1770, $tmp1771);
bool $tmp1773 = $tmp1772.value;
if ($tmp1773) goto block48; else goto block49;
block48:;
// line 477
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp1774 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1774));
*(&local3) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block49:;
// line 479
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Pair));
org$frostlang$frostc$Pair* $tmp1775 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp1776 = *(&local3);
frost$core$Int64 $tmp1777 = *(&local2);
frost$core$Int64$wrapper* $tmp1778;
$tmp1778 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1778->value = $tmp1777;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1775, ((frost$core$Object*) ((frost$collections$ListView*) $tmp1776)), ((frost$core$Object*) $tmp1778));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
frost$collections$Array* $tmp1779 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
*(&local3) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp1775;
goto block1;
block1:;
org$frostlang$frostc$Pair* $tmp1780 = *(&local0);
frost$core$Bit $tmp1781 = frost$core$Bit$init$builtin_bit($tmp1780 == NULL);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block2; else goto block3;
block2:;
*(&local1) = $tmp1781;
goto block4;
block3:;
org$frostlang$frostc$Pair* $tmp1783 = *(&local0);
frost$core$Object** $tmp1784 = &$tmp1783->first;
frost$core$Object* $tmp1785 = *$tmp1784;
ITable* $tmp1786 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp1785))->$class->itable;
while ($tmp1786->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1786 = $tmp1786->next;
}
$fn1788 $tmp1787 = $tmp1786->methods[0];
frost$core$Int64 $tmp1789 = $tmp1787(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp1785)));
frost$core$Int64 $tmp1790 = (frost$core$Int64) {0};
int64_t $tmp1791 = $tmp1789.value;
int64_t $tmp1792 = $tmp1790.value;
bool $tmp1793 = $tmp1791 > $tmp1792;
frost$core$Bit $tmp1794 = (frost$core$Bit) {$tmp1793};
*(&local1) = $tmp1794;
goto block4;
block4:;
frost$core$Bit $tmp1795 = *(&local1);
bool $tmp1796 = $tmp1795.value;
if ($tmp1796) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Pair* $tmp1797 = *(&local0);
return $tmp1797;
block6:;
frost$core$Int64 $tmp1798 = (frost$core$Int64) {414};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1799, $tmp1798, &$s1800);
abort(); // unreachable

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$callMethodObject$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
frost$core$Int64 local6;
org$frostlang$frostc$Type* local7 = NULL;
org$frostlang$frostc$Type* local8 = NULL;
org$frostlang$frostc$SymbolTable* local9 = NULL;
org$frostlang$frostc$FieldDecl* local10 = NULL;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$IR$Statement$ID local12;
org$frostlang$frostc$IR$Statement$ID local13;
org$frostlang$frostc$FieldDecl* local14 = NULL;
org$frostlang$frostc$IR$Statement$ID local15;
org$frostlang$frostc$IR$Statement$ID local16;
org$frostlang$frostc$IR$Statement$ID local17;
org$frostlang$frostc$IR$Block$ID local18;
org$frostlang$frostc$IR$Block$ID local19;
org$frostlang$frostc$IR$Block$ID local20;
org$frostlang$frostc$IR$Value* local21 = NULL;
org$frostlang$frostc$IR$Statement$ID local22;
frost$collections$Array* local23 = NULL;
frost$core$Int64 local24;
org$frostlang$frostc$Type* local25 = NULL;
org$frostlang$frostc$IR$Value* local26 = NULL;
org$frostlang$frostc$IR$Statement$ID local27;
org$frostlang$frostc$IR$Statement$ID local28;
org$frostlang$frostc$IR$Value* local29 = NULL;
// line 485
org$frostlang$frostc$IR** $tmp1801 = &param0->ir;
org$frostlang$frostc$IR* $tmp1802 = *$tmp1801;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
org$frostlang$frostc$IR* $tmp1803 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
*(&local0) = $tmp1802;
// line 486
$fn1805 $tmp1804 = ($fn1805) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1806 = $tmp1804(param2);
org$frostlang$frostc$Type* $tmp1807 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp1806);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
org$frostlang$frostc$Type* $tmp1808 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
*(&local1) = $tmp1807;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
// line 487
org$frostlang$frostc$Type* $tmp1809 = *(&local1);
frost$core$Bit $tmp1810 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp1809);
frost$core$Bit $tmp1811 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1810);
bool $tmp1812 = $tmp1811.value;
if ($tmp1812) goto block1; else goto block2;
block1:;
// line 488
org$frostlang$frostc$Type* $tmp1813 = *(&local1);
frost$core$String* $tmp1814 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1815, ((frost$core$Object*) $tmp1813));
frost$core$String* $tmp1816 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1814, &$s1817);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1816);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
// line 489
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1818 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1818));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1819 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 491
org$frostlang$frostc$Type* $tmp1820 = *(&local1);
frost$core$Int64 $tmp1821 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1820);
ITable* $tmp1822 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1822->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1822 = $tmp1822->next;
}
$fn1824 $tmp1823 = $tmp1822->methods[0];
frost$core$Int64 $tmp1825 = $tmp1823(((frost$collections$CollectionView*) param3));
int64_t $tmp1826 = $tmp1821.value;
int64_t $tmp1827 = $tmp1825.value;
bool $tmp1828 = $tmp1826 != $tmp1827;
frost$core$Bit $tmp1829 = (frost$core$Bit) {$tmp1828};
bool $tmp1830 = $tmp1829.value;
if ($tmp1830) goto block3; else goto block4;
block3:;
// line 492
org$frostlang$frostc$Type* $tmp1831 = *(&local1);
frost$core$String* $tmp1832 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1833, ((frost$core$Object*) $tmp1831));
frost$core$String* $tmp1834 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1832, &$s1835);
org$frostlang$frostc$Type* $tmp1836 = *(&local1);
frost$core$Int64 $tmp1837 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1836);
frost$core$Int64$wrapper* $tmp1838;
$tmp1838 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1838->value = $tmp1837;
frost$core$String* $tmp1839 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1834, ((frost$core$Object*) $tmp1838));
frost$core$String* $tmp1840 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1839, &$s1841);
org$frostlang$frostc$Type* $tmp1842 = *(&local1);
frost$core$Int64 $tmp1843 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1842);
frost$core$Int64 $tmp1844 = (frost$core$Int64) {1};
frost$core$Bit $tmp1845 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1843, $tmp1844);
frost$core$Bit$wrapper* $tmp1846;
$tmp1846 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1846->value = $tmp1845;
ITable* $tmp1847 = ((frost$core$Formattable*) $tmp1846)->$class->itable;
while ($tmp1847->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp1847 = $tmp1847->next;
}
$fn1849 $tmp1848 = $tmp1847->methods[0];
frost$core$String* $tmp1850 = $tmp1848(((frost$core$Formattable*) $tmp1846), &$s1851);
frost$core$String* $tmp1852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1853, $tmp1850);
frost$core$String* $tmp1854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1852, &$s1855);
ITable* $tmp1856 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1856->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1856 = $tmp1856->next;
}
$fn1858 $tmp1857 = $tmp1856->methods[0];
frost$core$Int64 $tmp1859 = $tmp1857(((frost$collections$CollectionView*) param3));
frost$core$Int64$wrapper* $tmp1860;
$tmp1860 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1860->value = $tmp1859;
frost$core$String* $tmp1861 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1854, ((frost$core$Object*) $tmp1860));
frost$core$String* $tmp1862 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1861, &$s1863);
frost$core$String* $tmp1864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1840, $tmp1862);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1864);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp1846)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1839));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1838));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
// line 494
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1865 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1865));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1866 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1866));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// line 496
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1867 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp1868 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1868->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1868 = $tmp1868->next;
}
$fn1870 $tmp1869 = $tmp1868->methods[0];
frost$core$Int64 $tmp1871 = $tmp1869(((frost$collections$CollectionView*) param3));
frost$collections$Array$init$frost$core$Int64($tmp1867, $tmp1871);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$collections$Array* $tmp1872 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
*(&local2) = $tmp1867;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
// line 497
frost$core$Int64 $tmp1873 = (frost$core$Int64) {0};
ITable* $tmp1874 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1874->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1874 = $tmp1874->next;
}
$fn1876 $tmp1875 = $tmp1874->methods[0];
frost$core$Int64 $tmp1877 = $tmp1875(((frost$collections$CollectionView*) param3));
frost$core$Bit $tmp1878 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1879 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1873, $tmp1877, $tmp1878);
frost$core$Int64 $tmp1880 = $tmp1879.min;
*(&local3) = $tmp1880;
frost$core$Int64 $tmp1881 = $tmp1879.max;
frost$core$Bit $tmp1882 = $tmp1879.inclusive;
bool $tmp1883 = $tmp1882.value;
frost$core$Int64 $tmp1884 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1885 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1884);
if ($tmp1883) goto block8; else goto block9;
block8:;
int64_t $tmp1886 = $tmp1880.value;
int64_t $tmp1887 = $tmp1881.value;
bool $tmp1888 = $tmp1886 <= $tmp1887;
frost$core$Bit $tmp1889 = (frost$core$Bit) {$tmp1888};
bool $tmp1890 = $tmp1889.value;
if ($tmp1890) goto block5; else goto block6;
block9:;
int64_t $tmp1891 = $tmp1880.value;
int64_t $tmp1892 = $tmp1881.value;
bool $tmp1893 = $tmp1891 < $tmp1892;
frost$core$Bit $tmp1894 = (frost$core$Bit) {$tmp1893};
bool $tmp1895 = $tmp1894.value;
if ($tmp1895) goto block5; else goto block6;
block5:;
// line 498
frost$core$Int64 $tmp1896 = *(&local3);
ITable* $tmp1897 = param3->$class->itable;
while ($tmp1897->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1897 = $tmp1897->next;
}
$fn1899 $tmp1898 = $tmp1897->methods[0];
frost$core$Object* $tmp1900 = $tmp1898(param3, $tmp1896);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp1901 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1902 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1903 = *(&local1);
frost$core$Int64 $tmp1904 = *(&local3);
org$frostlang$frostc$Type* $tmp1905 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1903, $tmp1904);
frost$core$Bit $tmp1906 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1901, $tmp1902, $tmp1905, $tmp1906);
org$frostlang$frostc$IR$Value* $tmp1907 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1900), $tmp1901);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
org$frostlang$frostc$IR$Value* $tmp1908 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
*(&local4) = $tmp1907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1907));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
frost$core$Frost$unref$frost$core$Object$Q($tmp1900);
// line 500
org$frostlang$frostc$IR$Value* $tmp1909 = *(&local4);
frost$core$Bit $tmp1910 = frost$core$Bit$init$builtin_bit($tmp1909 == NULL);
bool $tmp1911 = $tmp1910.value;
if ($tmp1911) goto block10; else goto block11;
block10:;
// line 501
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1912 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1912));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1913 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1913));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1914 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1914));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1915 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block11:;
// line 503
frost$collections$Array* $tmp1916 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp1917 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp1916, ((frost$core$Object*) $tmp1917));
org$frostlang$frostc$IR$Value* $tmp1918 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1918));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block7;
block7:;
frost$core$Int64 $tmp1919 = *(&local3);
int64_t $tmp1920 = $tmp1881.value;
int64_t $tmp1921 = $tmp1919.value;
int64_t $tmp1922 = $tmp1920 - $tmp1921;
frost$core$Int64 $tmp1923 = (frost$core$Int64) {$tmp1922};
frost$core$UInt64 $tmp1924 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1923);
if ($tmp1883) goto block13; else goto block14;
block13:;
uint64_t $tmp1925 = $tmp1924.value;
uint64_t $tmp1926 = $tmp1885.value;
bool $tmp1927 = $tmp1925 >= $tmp1926;
frost$core$Bit $tmp1928 = (frost$core$Bit) {$tmp1927};
bool $tmp1929 = $tmp1928.value;
if ($tmp1929) goto block12; else goto block6;
block14:;
uint64_t $tmp1930 = $tmp1924.value;
uint64_t $tmp1931 = $tmp1885.value;
bool $tmp1932 = $tmp1930 > $tmp1931;
frost$core$Bit $tmp1933 = (frost$core$Bit) {$tmp1932};
bool $tmp1934 = $tmp1933.value;
if ($tmp1934) goto block12; else goto block6;
block12:;
int64_t $tmp1935 = $tmp1919.value;
int64_t $tmp1936 = $tmp1884.value;
int64_t $tmp1937 = $tmp1935 + $tmp1936;
frost$core$Int64 $tmp1938 = (frost$core$Int64) {$tmp1937};
*(&local3) = $tmp1938;
goto block5;
block6:;
// line 505
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 506
org$frostlang$frostc$IR* $tmp1939 = *(&local0);
frost$collections$Array** $tmp1940 = &$tmp1939->locals;
frost$collections$Array* $tmp1941 = *$tmp1940;
ITable* $tmp1942 = ((frost$collections$CollectionView*) $tmp1941)->$class->itable;
while ($tmp1942->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1942 = $tmp1942->next;
}
$fn1944 $tmp1943 = $tmp1942->methods[0];
frost$core$Int64 $tmp1945 = $tmp1943(((frost$collections$CollectionView*) $tmp1941));
*(&local6) = $tmp1945;
// line 507
org$frostlang$frostc$Type* $tmp1946 = *(&local1);
org$frostlang$frostc$Type* $tmp1947 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1946);
org$frostlang$frostc$Type* $tmp1948 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1949 = ((frost$core$Equatable*) $tmp1947)->$class->itable;
while ($tmp1949->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1949 = $tmp1949->next;
}
$fn1951 $tmp1950 = $tmp1949->methods[1];
frost$core$Bit $tmp1952 = $tmp1950(((frost$core$Equatable*) $tmp1947), ((frost$core$Equatable*) $tmp1948));
bool $tmp1953 = $tmp1952.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
if ($tmp1953) goto block15; else goto block17;
block15:;
// line 508
org$frostlang$frostc$IR* $tmp1954 = *(&local0);
frost$collections$Array** $tmp1955 = &$tmp1954->locals;
frost$collections$Array* $tmp1956 = *$tmp1955;
org$frostlang$frostc$Type* $tmp1957 = *(&local1);
org$frostlang$frostc$Type* $tmp1958 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1957);
frost$collections$Array$add$frost$collections$Array$T($tmp1956, ((frost$core$Object*) $tmp1958));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1958));
// line 509
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp1959 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1960 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1961 = *(&local6);
org$frostlang$frostc$Type* $tmp1962 = *(&local1);
org$frostlang$frostc$Type* $tmp1963 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1962);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1959, $tmp1960, $tmp1961, $tmp1963);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
org$frostlang$frostc$IR$Value* $tmp1964 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
*(&local5) = $tmp1959;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1963));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
goto block16;
block17:;
// line 1
// line 512
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1965 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block16;
block16:;
// line 514
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
// line 515
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 516
$fn1967 $tmp1966 = ($fn1967) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1968 = $tmp1966(param2);
frost$core$Bit $tmp1969 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1968);
bool $tmp1970 = $tmp1969.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1968));
if ($tmp1970) goto block18; else goto block20;
block18:;
// line 517
org$frostlang$frostc$Type* $tmp1971 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
org$frostlang$frostc$Type* $tmp1972 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
*(&local7) = $tmp1971;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
// line 518
org$frostlang$frostc$Type* $tmp1973 = org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
org$frostlang$frostc$Type* $tmp1974 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
*(&local8) = $tmp1973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
goto block19;
block20:;
// line 1
// line 521
org$frostlang$frostc$Type* $tmp1975 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
org$frostlang$frostc$Type* $tmp1976 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
*(&local7) = $tmp1975;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1975));
// line 522
org$frostlang$frostc$Type* $tmp1977 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
org$frostlang$frostc$Type* $tmp1978 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1978));
*(&local8) = $tmp1977;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
goto block19;
block19:;
// line 524
org$frostlang$frostc$Type* $tmp1979 = *(&local7);
org$frostlang$frostc$ClassDecl* $tmp1980 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp1979);
org$frostlang$frostc$SymbolTable* $tmp1981 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp1980);
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
org$frostlang$frostc$SymbolTable* $tmp1982 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
*(&local9) = $tmp1981;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
// line 525
org$frostlang$frostc$SymbolTable* $tmp1983 = *(&local9);
org$frostlang$frostc$Symbol* $tmp1984 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp1983, &$s1985);
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp1984)));
org$frostlang$frostc$FieldDecl* $tmp1986 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1986));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) $tmp1984);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
// line 526
org$frostlang$frostc$FieldDecl* $tmp1987 = *(&local10);
frost$core$Bit $tmp1988 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp1987);
frost$core$Bit $tmp1989 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1988);
bool $tmp1990 = $tmp1989.value;
if ($tmp1990) goto block21; else goto block22;
block21:;
// line 527
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp1991 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1991));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp1992 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp1993 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1994 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1995 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1995));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1996 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1997 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1997));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1998 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block22:;
// line 529
org$frostlang$frostc$Type* $tmp1999 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp2000 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp1999);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
org$frostlang$frostc$IR$Value* $tmp2001 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
*(&local11) = $tmp2000;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
// line 530
org$frostlang$frostc$IR* $tmp2002 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2003 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2004 = (frost$core$Int64) {11};
org$frostlang$frostc$IR$Value* $tmp2005 = *(&local11);
org$frostlang$frostc$FieldDecl* $tmp2006 = *(&local10);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp2003, $tmp2004, param1, $tmp2005, $tmp2006);
$fn2008 $tmp2007 = ($fn2008) $tmp2002->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2009 = $tmp2007($tmp2002, $tmp2003);
*(&local12) = $tmp2009;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
// line 532
org$frostlang$frostc$IR* $tmp2010 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2011 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2012 = (frost$core$Int64) {14};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2013 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2014 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2015 = *(&local12);
org$frostlang$frostc$Type* $tmp2016 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp2017 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2016);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2013, $tmp2014, $tmp2015, $tmp2017);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2011, $tmp2012, param1, $tmp2013);
$fn2019 $tmp2018 = ($fn2019) $tmp2010->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2020 = $tmp2018($tmp2010, $tmp2011);
*(&local13) = $tmp2020;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2017));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2016));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
// line 534
org$frostlang$frostc$SymbolTable* $tmp2021 = *(&local9);
org$frostlang$frostc$Symbol* $tmp2022 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp2021, &$s2023);
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp2022)));
org$frostlang$frostc$FieldDecl* $tmp2024 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2024));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) $tmp2022);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2022));
// line 535
org$frostlang$frostc$FieldDecl* $tmp2025 = *(&local14);
frost$core$Bit $tmp2026 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp2025);
frost$core$Bit $tmp2027 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2026);
bool $tmp2028 = $tmp2027.value;
if ($tmp2028) goto block23; else goto block24;
block23:;
// line 536
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp2029 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2029));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2030 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2031 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2032 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2032));
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2033 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2034 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2034));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2035 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2035));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2036 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2036));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2037 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2038 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block24:;
// line 538
org$frostlang$frostc$IR* $tmp2039 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2040 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2041 = (frost$core$Int64) {11};
org$frostlang$frostc$IR$Value* $tmp2042 = *(&local11);
org$frostlang$frostc$FieldDecl* $tmp2043 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp2040, $tmp2041, param1, $tmp2042, $tmp2043);
$fn2045 $tmp2044 = ($fn2045) $tmp2039->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2046 = $tmp2044($tmp2039, $tmp2040);
*(&local15) = $tmp2046;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
// line 539
org$frostlang$frostc$IR* $tmp2047 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2048 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2049 = (frost$core$Int64) {14};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2050 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2051 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2052 = *(&local15);
org$frostlang$frostc$Type* $tmp2053 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2050, $tmp2051, $tmp2052, $tmp2053);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2048, $tmp2049, param1, $tmp2050);
$fn2055 $tmp2054 = ($fn2055) $tmp2047->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2056 = $tmp2054($tmp2047, $tmp2048);
*(&local16) = $tmp2056;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
// line 540
org$frostlang$frostc$IR* $tmp2057 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2058 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2059 = (frost$core$Int64) {0};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2060 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2061 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2062 = *(&local16);
org$frostlang$frostc$Type* $tmp2063 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2060, $tmp2061, $tmp2062, $tmp2063);
frost$core$Int64 $tmp2064 = (frost$core$Int64) {22};
org$frostlang$frostc$expression$Binary$Operator $tmp2065 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2064);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2066 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2067 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp2068 = *(&local8);
org$frostlang$frostc$Type* $tmp2069 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp2068);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp2066, $tmp2067, $tmp2069);
org$frostlang$frostc$Type* $tmp2070 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp2058, $tmp2059, param1, $tmp2060, $tmp2065, $tmp2066, $tmp2070);
$fn2072 $tmp2071 = ($fn2072) $tmp2057->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2073 = $tmp2071($tmp2057, $tmp2058);
*(&local17) = $tmp2073;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
// line 542
org$frostlang$frostc$IR* $tmp2074 = *(&local0);
$fn2076 $tmp2075 = ($fn2076) $tmp2074->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2077 = $tmp2075($tmp2074, &$s2078);
*(&local18) = $tmp2077;
// line 543
org$frostlang$frostc$IR* $tmp2079 = *(&local0);
$fn2081 $tmp2080 = ($fn2081) $tmp2079->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2082 = $tmp2080($tmp2079, &$s2083);
*(&local19) = $tmp2082;
// line 544
org$frostlang$frostc$IR* $tmp2084 = *(&local0);
$fn2086 $tmp2085 = ($fn2086) $tmp2084->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2087 = $tmp2085($tmp2084, &$s2088);
*(&local20) = $tmp2087;
// line 545
org$frostlang$frostc$IR* $tmp2089 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2090 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2091 = (frost$core$Int64) {5};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2092 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2093 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2094 = *(&local17);
org$frostlang$frostc$Type* $tmp2095 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2092, $tmp2093, $tmp2094, $tmp2095);
org$frostlang$frostc$IR$Block$ID $tmp2096 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp2097 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2090, $tmp2091, param1, $tmp2092, $tmp2096, $tmp2097);
$fn2099 $tmp2098 = ($fn2099) $tmp2089->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2100 = $tmp2098($tmp2089, $tmp2090);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2095));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
// line 547
org$frostlang$frostc$IR* $tmp2101 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2102 = *(&local19);
$fn2104 $tmp2103 = ($fn2104) $tmp2101->$class->vtable[4];
$tmp2103($tmp2101, $tmp2102);
// line 548
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2105 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2106 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2107 = *(&local13);
org$frostlang$frostc$Type* $tmp2108 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp2109 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2108);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2105, $tmp2106, $tmp2107, $tmp2109);
org$frostlang$frostc$Type* $tmp2110 = *(&local1);
org$frostlang$frostc$Type* $tmp2111 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2110);
org$frostlang$frostc$IR$Value* $tmp2112 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2105, $tmp2111);
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
org$frostlang$frostc$IR$Value* $tmp2113 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2113));
*(&local21) = $tmp2112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2111));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
// line 550
org$frostlang$frostc$IR* $tmp2114 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2115 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2116 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp2117 = *(&local21);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp2118 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
frost$collections$Array* $tmp2119 = *(&local2);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2118, ((frost$collections$ListView*) $tmp2119));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp2115, $tmp2116, param1, $tmp2117, $tmp2118);
$fn2121 $tmp2120 = ($fn2121) $tmp2114->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2122 = $tmp2120($tmp2114, $tmp2115);
*(&local22) = $tmp2122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2115));
// line 552
org$frostlang$frostc$IR$Value* $tmp2123 = *(&local5);
frost$core$Bit $tmp2124 = frost$core$Bit$init$builtin_bit($tmp2123 != NULL);
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block25; else goto block26;
block25:;
// line 553
org$frostlang$frostc$IR* $tmp2126 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2127 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2128 = (frost$core$Int64) {27};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2129 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2130 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2131 = *(&local22);
org$frostlang$frostc$Type* $tmp2132 = *(&local1);
org$frostlang$frostc$Type* $tmp2133 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2132);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2129, $tmp2130, $tmp2131, $tmp2133);
org$frostlang$frostc$IR$Value* $tmp2134 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2127, $tmp2128, param1, $tmp2129, $tmp2134);
$fn2136 $tmp2135 = ($fn2136) $tmp2126->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2137 = $tmp2135($tmp2126, $tmp2127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2127));
goto block26;
block26:;
// line 556
org$frostlang$frostc$IR* $tmp2138 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2139 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2140 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2141 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2139, $tmp2140, param1, $tmp2141);
$fn2143 $tmp2142 = ($fn2143) $tmp2138->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2144 = $tmp2142($tmp2138, $tmp2139);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
// line 557
org$frostlang$frostc$IR* $tmp2145 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2146 = *(&local18);
$fn2148 $tmp2147 = ($fn2148) $tmp2145->$class->vtable[4];
$tmp2147($tmp2145, $tmp2146);
// line 558
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2149 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2149);
*(&local23) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$collections$Array* $tmp2150 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
*(&local23) = $tmp2149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
// line 559
frost$collections$Array* $tmp2151 = *(&local23);
org$frostlang$frostc$Type* $tmp2152 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp2151, ((frost$core$Object*) $tmp2152));
// line 560
frost$core$Int64 $tmp2153 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp2154 = *(&local1);
frost$core$Int64 $tmp2155 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp2154);
frost$core$Bit $tmp2156 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2157 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2153, $tmp2155, $tmp2156);
frost$core$Int64 $tmp2158 = $tmp2157.min;
*(&local24) = $tmp2158;
frost$core$Int64 $tmp2159 = $tmp2157.max;
frost$core$Bit $tmp2160 = $tmp2157.inclusive;
bool $tmp2161 = $tmp2160.value;
frost$core$Int64 $tmp2162 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2163 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2162);
if ($tmp2161) goto block30; else goto block31;
block30:;
int64_t $tmp2164 = $tmp2158.value;
int64_t $tmp2165 = $tmp2159.value;
bool $tmp2166 = $tmp2164 <= $tmp2165;
frost$core$Bit $tmp2167 = (frost$core$Bit) {$tmp2166};
bool $tmp2168 = $tmp2167.value;
if ($tmp2168) goto block27; else goto block28;
block31:;
int64_t $tmp2169 = $tmp2158.value;
int64_t $tmp2170 = $tmp2159.value;
bool $tmp2171 = $tmp2169 < $tmp2170;
frost$core$Bit $tmp2172 = (frost$core$Bit) {$tmp2171};
bool $tmp2173 = $tmp2172.value;
if ($tmp2173) goto block27; else goto block28;
block27:;
// line 561
frost$collections$Array* $tmp2174 = *(&local23);
org$frostlang$frostc$Type* $tmp2175 = *(&local1);
frost$core$Int64 $tmp2176 = *(&local24);
org$frostlang$frostc$Type* $tmp2177 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp2175, $tmp2176);
frost$collections$Array$add$frost$collections$Array$T($tmp2174, ((frost$core$Object*) $tmp2177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2177));
goto block29;
block29:;
frost$core$Int64 $tmp2178 = *(&local24);
int64_t $tmp2179 = $tmp2159.value;
int64_t $tmp2180 = $tmp2178.value;
int64_t $tmp2181 = $tmp2179 - $tmp2180;
frost$core$Int64 $tmp2182 = (frost$core$Int64) {$tmp2181};
frost$core$UInt64 $tmp2183 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2182);
if ($tmp2161) goto block33; else goto block34;
block33:;
uint64_t $tmp2184 = $tmp2183.value;
uint64_t $tmp2185 = $tmp2163.value;
bool $tmp2186 = $tmp2184 >= $tmp2185;
frost$core$Bit $tmp2187 = (frost$core$Bit) {$tmp2186};
bool $tmp2188 = $tmp2187.value;
if ($tmp2188) goto block32; else goto block28;
block34:;
uint64_t $tmp2189 = $tmp2183.value;
uint64_t $tmp2190 = $tmp2163.value;
bool $tmp2191 = $tmp2189 > $tmp2190;
frost$core$Bit $tmp2192 = (frost$core$Bit) {$tmp2191};
bool $tmp2193 = $tmp2192.value;
if ($tmp2193) goto block32; else goto block28;
block32:;
int64_t $tmp2194 = $tmp2178.value;
int64_t $tmp2195 = $tmp2162.value;
int64_t $tmp2196 = $tmp2194 + $tmp2195;
frost$core$Int64 $tmp2197 = (frost$core$Int64) {$tmp2196};
*(&local24) = $tmp2197;
goto block27;
block28:;
// line 563
org$frostlang$frostc$Type* $tmp2198 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp2199 = &$tmp2198->typeKind;
org$frostlang$frostc$Type$Kind $tmp2200 = *$tmp2199;
frost$collections$Array* $tmp2201 = *(&local23);
org$frostlang$frostc$Type* $tmp2202 = *(&local1);
org$frostlang$frostc$Type* $tmp2203 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2202);
frost$core$Int64 $tmp2204 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp2205 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp2200, ((frost$collections$ListView*) $tmp2201), $tmp2203, $tmp2204);
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
org$frostlang$frostc$Type* $tmp2206 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2206));
*(&local25) = $tmp2205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2203));
// line 565
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2207 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2208 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2209 = *(&local13);
org$frostlang$frostc$Type* $tmp2210 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp2211 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2210);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2207, $tmp2208, $tmp2209, $tmp2211);
org$frostlang$frostc$Type* $tmp2212 = *(&local25);
org$frostlang$frostc$Type* $tmp2213 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2212);
org$frostlang$frostc$IR$Value* $tmp2214 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2207, $tmp2213);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
org$frostlang$frostc$IR$Value* $tmp2215 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
*(&local26) = $tmp2214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2207));
// line 567
frost$collections$Array* $tmp2216 = *(&local2);
frost$core$Int64 $tmp2217 = (frost$core$Int64) {0};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2218 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2219 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2220 = *(&local16);
org$frostlang$frostc$Type* $tmp2221 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2218, $tmp2219, $tmp2220, $tmp2221);
frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T($tmp2216, $tmp2217, ((frost$core$Object*) $tmp2218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
// line 568
org$frostlang$frostc$IR* $tmp2222 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2223 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2224 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp2225 = *(&local26);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$FixedArray));
org$frostlang$frostc$FixedArray* $tmp2226 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
frost$collections$Array* $tmp2227 = *(&local2);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2226, ((frost$collections$ListView*) $tmp2227));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp2223, $tmp2224, param1, $tmp2225, $tmp2226);
$fn2229 $tmp2228 = ($fn2229) $tmp2222->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2230 = $tmp2228($tmp2222, $tmp2223);
*(&local27) = $tmp2230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2223));
// line 570
org$frostlang$frostc$IR$Value* $tmp2231 = *(&local5);
frost$core$Bit $tmp2232 = frost$core$Bit$init$builtin_bit($tmp2231 != NULL);
bool $tmp2233 = $tmp2232.value;
if ($tmp2233) goto block35; else goto block36;
block35:;
// line 571
org$frostlang$frostc$IR* $tmp2234 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2235 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2236 = (frost$core$Int64) {27};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2237 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2238 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2239 = *(&local27);
org$frostlang$frostc$Type* $tmp2240 = *(&local1);
org$frostlang$frostc$Type* $tmp2241 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2240);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2237, $tmp2238, $tmp2239, $tmp2241);
org$frostlang$frostc$IR$Value* $tmp2242 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2235, $tmp2236, param1, $tmp2237, $tmp2242);
$fn2244 $tmp2243 = ($fn2244) $tmp2234->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2245 = $tmp2243($tmp2234, $tmp2235);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
goto block36;
block36:;
// line 574
org$frostlang$frostc$IR* $tmp2246 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2247 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2248 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2249 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2247, $tmp2248, param1, $tmp2249);
$fn2251 $tmp2250 = ($fn2251) $tmp2246->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2252 = $tmp2250($tmp2246, $tmp2247);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2247));
// line 575
org$frostlang$frostc$IR* $tmp2253 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2254 = *(&local20);
$fn2256 $tmp2255 = ($fn2256) $tmp2253->$class->vtable[4];
$tmp2255($tmp2253, $tmp2254);
// line 576
org$frostlang$frostc$IR$Value* $tmp2257 = *(&local5);
frost$core$Bit $tmp2258 = frost$core$Bit$init$builtin_bit($tmp2257 != NULL);
bool $tmp2259 = $tmp2258.value;
if ($tmp2259) goto block37; else goto block38;
block37:;
// line 577
org$frostlang$frostc$IR* $tmp2260 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2261 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2262 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp2263 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2261, $tmp2262, param1, $tmp2263);
$fn2265 $tmp2264 = ($fn2265) $tmp2260->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2266 = $tmp2264($tmp2260, $tmp2261);
*(&local28) = $tmp2266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
// line 578
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2267 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2268 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2269 = *(&local28);
org$frostlang$frostc$Type* $tmp2270 = *(&local1);
org$frostlang$frostc$Type* $tmp2271 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2270);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2267, $tmp2268, $tmp2269, $tmp2271);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
org$frostlang$frostc$IR$Value* $tmp2272 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
*(&local29) = $tmp2267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
// line 579
org$frostlang$frostc$Type* $tmp2273 = *(&local1);
org$frostlang$frostc$Type* $tmp2274 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2273);
frost$core$Bit $tmp2275 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2274);
bool $tmp2276 = $tmp2275.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2274));
if ($tmp2276) goto block39; else goto block40;
block39:;
// line 580
frost$collections$Stack** $tmp2277 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2278 = *$tmp2277;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2279 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp2280 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp2281 = *(&local29);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp2279, $tmp2280, $tmp2281);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2278, ((frost$core$Object*) $tmp2279));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
goto block40;
block40:;
// line 582
org$frostlang$frostc$IR$Value* $tmp2282 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp2283 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2282, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2283));
org$frostlang$frostc$IR$Value* $tmp2284 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2284));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2285 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2286 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2287 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$IR$Value* $tmp2288 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2288));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2289 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2289));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2290 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2291 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2292 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2292));
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2293 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2294 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2295 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2296 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2296));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2297 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2297));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2298 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2298));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp2283;
block38:;
// line 584
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp2299 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2299));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2300 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2300));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2301 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2301));
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$IR$Value* $tmp2302 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2302));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2303 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2303));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2304 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2304));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2305 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2305));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2306 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2307 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2308 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2309 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2310 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2311 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2311));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2312 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2312));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$IR* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$MethodDecl* local7 = NULL;
org$frostlang$frostc$FixedArray* local8 = NULL;
org$frostlang$frostc$Type* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$FixedArray* local12 = NULL;
org$frostlang$frostc$Pair* local13 = NULL;
frost$collections$Array* local14 = NULL;
org$frostlang$frostc$ASTNode* local15 = NULL;
org$frostlang$frostc$Type* local16 = NULL;
frost$core$Int64 local17;
org$frostlang$frostc$IR$Value* local18 = NULL;
org$frostlang$frostc$FixedArray* local19 = NULL;
org$frostlang$frostc$FixedArray* local20 = NULL;
org$frostlang$frostc$Pair* local21 = NULL;
frost$collections$Array* local22 = NULL;
org$frostlang$frostc$ASTNode* local23 = NULL;
org$frostlang$frostc$Type* local24 = NULL;
frost$core$Int64 local25;
org$frostlang$frostc$Type* local26 = NULL;
org$frostlang$frostc$Type* local27 = NULL;
org$frostlang$frostc$ClassDecl* local28 = NULL;
org$frostlang$frostc$Symbol* local29 = NULL;
org$frostlang$frostc$IR$Statement$ID local30;
org$frostlang$frostc$IR$Value* local31 = NULL;
// line 590
frost$collections$Stack** $tmp2313 = &param0->currentClass;
frost$collections$Stack* $tmp2314 = *$tmp2313;
frost$core$Int64 $tmp2315 = (frost$core$Int64) {0};
frost$core$Object* $tmp2316 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2314, $tmp2315);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp2316)));
org$frostlang$frostc$ClassDecl* $tmp2317 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp2316);
frost$core$Frost$unref$frost$core$Object$Q($tmp2316);
// line 591
org$frostlang$frostc$IR** $tmp2318 = &param0->ir;
org$frostlang$frostc$IR* $tmp2319 = *$tmp2318;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
org$frostlang$frostc$IR* $tmp2320 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
*(&local1) = $tmp2319;
// line 592
frost$core$Int64* $tmp2321 = &param2->$rawValue;
frost$core$Int64 $tmp2322 = *$tmp2321;
frost$core$Int64 $tmp2323 = (frost$core$Int64) {9};
frost$core$Bit $tmp2324 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2322, $tmp2323);
bool $tmp2325 = $tmp2324.value;
if ($tmp2325) goto block2; else goto block3;
block2:;
org$frostlang$frostc$IR$Value** $tmp2326 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2327 = *$tmp2326;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
org$frostlang$frostc$IR$Value* $tmp2328 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2328));
*(&local2) = $tmp2327;
org$frostlang$frostc$MethodDecl** $tmp2329 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp2330 = *$tmp2329;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
org$frostlang$frostc$MethodDecl* $tmp2331 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
*(&local3) = $tmp2330;
// line 594
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
// line 595
org$frostlang$frostc$IR$Value* $tmp2332 = *(&local2);
frost$core$Bit $tmp2333 = frost$core$Bit$init$builtin_bit($tmp2332 != NULL);
bool $tmp2334 = $tmp2333.value;
if ($tmp2334) goto block4; else goto block6;
block4:;
// line 596
org$frostlang$frostc$IR$Value* $tmp2335 = *(&local2);
$fn2337 $tmp2336 = ($fn2337) $tmp2335->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2338 = $tmp2336($tmp2335);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
org$frostlang$frostc$Type* $tmp2339 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2339));
*(&local4) = $tmp2338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2338));
goto block5;
block6:;
// line 598
org$frostlang$frostc$MethodDecl* $tmp2340 = *(&local3);
org$frostlang$frostc$Annotations** $tmp2341 = &$tmp2340->annotations;
org$frostlang$frostc$Annotations* $tmp2342 = *$tmp2341;
frost$core$Bit $tmp2343 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2342);
bool $tmp2344 = $tmp2343.value;
if ($tmp2344) goto block7; else goto block10;
block10:;
org$frostlang$frostc$MethodDecl* $tmp2345 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind* $tmp2346 = &$tmp2345->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2347 = *$tmp2346;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2348;
$tmp2348 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2348->value = $tmp2347;
frost$core$Int64 $tmp2349 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2350 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2349);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2351;
$tmp2351 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2351->value = $tmp2350;
ITable* $tmp2352 = ((frost$core$Equatable*) $tmp2348)->$class->itable;
while ($tmp2352->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2352 = $tmp2352->next;
}
$fn2354 $tmp2353 = $tmp2352->methods[0];
frost$core$Bit $tmp2355 = $tmp2353(((frost$core$Equatable*) $tmp2348), ((frost$core$Equatable*) $tmp2351));
bool $tmp2356 = $tmp2355.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2351)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2348)));
if ($tmp2356) goto block7; else goto block9;
block7:;
// line 599
org$frostlang$frostc$MethodDecl* $tmp2357 = *(&local3);
frost$core$Weak** $tmp2358 = &$tmp2357->owner;
frost$core$Weak* $tmp2359 = *$tmp2358;
frost$core$Object* $tmp2360 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2359);
org$frostlang$frostc$Type** $tmp2361 = &((org$frostlang$frostc$ClassDecl*) $tmp2360)->type;
org$frostlang$frostc$Type* $tmp2362 = *$tmp2361;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
org$frostlang$frostc$Type* $tmp2363 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2363));
*(&local4) = $tmp2362;
frost$core$Frost$unref$frost$core$Object$Q($tmp2360);
goto block8;
block9:;
// line 1
// line 602
org$frostlang$frostc$ClassDecl* $tmp2364 = *(&local0);
org$frostlang$frostc$Type** $tmp2365 = &$tmp2364->type;
org$frostlang$frostc$Type* $tmp2366 = *$tmp2365;
org$frostlang$frostc$MethodDecl* $tmp2367 = *(&local3);
frost$core$Weak** $tmp2368 = &$tmp2367->owner;
frost$core$Weak* $tmp2369 = *$tmp2368;
frost$core$Object* $tmp2370 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2369);
org$frostlang$frostc$Type* $tmp2371 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp2366, ((org$frostlang$frostc$ClassDecl*) $tmp2370));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
org$frostlang$frostc$Type* $tmp2372 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
*(&local5) = $tmp2371;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
frost$core$Frost$unref$frost$core$Object$Q($tmp2370);
// line 603
org$frostlang$frostc$Type* $tmp2373 = *(&local5);
frost$core$Bit $tmp2374 = frost$core$Bit$init$builtin_bit($tmp2373 != NULL);
bool $tmp2375 = $tmp2374.value;
if ($tmp2375) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2376 = (frost$core$Int64) {603};
org$frostlang$frostc$ClassDecl* $tmp2377 = *(&local0);
org$frostlang$frostc$Type** $tmp2378 = &$tmp2377->type;
org$frostlang$frostc$Type* $tmp2379 = *$tmp2378;
frost$core$String* $tmp2380 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2381, ((frost$core$Object*) $tmp2379));
frost$core$String* $tmp2382 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2380, &$s2383);
org$frostlang$frostc$MethodDecl* $tmp2384 = *(&local3);
frost$core$Weak** $tmp2385 = &$tmp2384->owner;
frost$core$Weak* $tmp2386 = *$tmp2385;
frost$core$Object* $tmp2387 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2386);
frost$core$String** $tmp2388 = &((org$frostlang$frostc$ClassDecl*) $tmp2387)->name;
frost$core$String* $tmp2389 = *$tmp2388;
frost$core$String* $tmp2390 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2382, $tmp2389);
frost$core$String* $tmp2391 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2390, &$s2392);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2393, $tmp2376, $tmp2391);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2390));
frost$core$Frost$unref$frost$core$Object$Q($tmp2387);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2380));
abort(); // unreachable
block11:;
// line 605
org$frostlang$frostc$Type* $tmp2394 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
org$frostlang$frostc$Type* $tmp2395 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2395));
*(&local4) = $tmp2394;
org$frostlang$frostc$Type* $tmp2396 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2396));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
goto block8;
block8:;
goto block5;
block5:;
// line 607
org$frostlang$frostc$MethodDecl* $tmp2397 = *(&local3);
frost$core$Bit $tmp2398 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp2397);
frost$core$Bit $tmp2399 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2398);
bool $tmp2400 = $tmp2399.value;
if ($tmp2400) goto block13; else goto block14;
block13:;
// line 608
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2401 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2401));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2402 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2403 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2404 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2405 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
// line 610
org$frostlang$frostc$IR$Value* $tmp2406 = *(&local2);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$MethodRef));
org$frostlang$frostc$MethodRef* $tmp2407 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp2408 = *(&local4);
org$frostlang$frostc$MethodDecl* $tmp2409 = *(&local3);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl($tmp2407, param0, $tmp2408, $tmp2409);
org$frostlang$frostc$IR$Value* $tmp2410 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2406, $tmp2407, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
org$frostlang$frostc$Type* $tmp2411 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2412 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2413 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2414 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2415 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2410;
block3:;
frost$core$Int64 $tmp2416 = (frost$core$Int64) {11};
frost$core$Bit $tmp2417 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2322, $tmp2416);
bool $tmp2418 = $tmp2417.value;
if ($tmp2418) goto block15; else goto block16;
block15:;
org$frostlang$frostc$IR$Value** $tmp2419 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2420 = *$tmp2419;
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
org$frostlang$frostc$IR$Value* $tmp2421 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
*(&local6) = $tmp2420;
org$frostlang$frostc$MethodDecl** $tmp2422 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp2423 = *$tmp2422;
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
org$frostlang$frostc$MethodDecl* $tmp2424 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
*(&local7) = $tmp2423;
org$frostlang$frostc$FixedArray** $tmp2425 = (org$frostlang$frostc$FixedArray**) (param2->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2426 = *$tmp2425;
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
org$frostlang$frostc$FixedArray* $tmp2427 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
*(&local8) = $tmp2426;
// line 614
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
// line 615
org$frostlang$frostc$IR$Value* $tmp2428 = *(&local6);
frost$core$Bit $tmp2429 = frost$core$Bit$init$builtin_bit($tmp2428 != NULL);
bool $tmp2430 = $tmp2429.value;
if ($tmp2430) goto block17; else goto block19;
block17:;
// line 616
org$frostlang$frostc$IR$Value* $tmp2431 = *(&local6);
$fn2433 $tmp2432 = ($fn2433) $tmp2431->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2434 = $tmp2432($tmp2431);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
org$frostlang$frostc$Type* $tmp2435 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
*(&local9) = $tmp2434;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
goto block18;
block19:;
// line 618
org$frostlang$frostc$MethodDecl* $tmp2436 = *(&local7);
org$frostlang$frostc$Annotations** $tmp2437 = &$tmp2436->annotations;
org$frostlang$frostc$Annotations* $tmp2438 = *$tmp2437;
frost$core$Bit $tmp2439 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2438);
bool $tmp2440 = $tmp2439.value;
if ($tmp2440) goto block20; else goto block23;
block23:;
org$frostlang$frostc$MethodDecl* $tmp2441 = *(&local7);
org$frostlang$frostc$MethodDecl$Kind* $tmp2442 = &$tmp2441->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2443 = *$tmp2442;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2444;
$tmp2444 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2444->value = $tmp2443;
frost$core$Int64 $tmp2445 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2446 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2445);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2447;
$tmp2447 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2447->value = $tmp2446;
ITable* $tmp2448 = ((frost$core$Equatable*) $tmp2444)->$class->itable;
while ($tmp2448->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2448 = $tmp2448->next;
}
$fn2450 $tmp2449 = $tmp2448->methods[0];
frost$core$Bit $tmp2451 = $tmp2449(((frost$core$Equatable*) $tmp2444), ((frost$core$Equatable*) $tmp2447));
bool $tmp2452 = $tmp2451.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2447)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2444)));
if ($tmp2452) goto block20; else goto block22;
block20:;
// line 619
org$frostlang$frostc$MethodDecl* $tmp2453 = *(&local7);
frost$core$Weak** $tmp2454 = &$tmp2453->owner;
frost$core$Weak* $tmp2455 = *$tmp2454;
frost$core$Object* $tmp2456 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2455);
org$frostlang$frostc$Type** $tmp2457 = &((org$frostlang$frostc$ClassDecl*) $tmp2456)->type;
org$frostlang$frostc$Type* $tmp2458 = *$tmp2457;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
org$frostlang$frostc$Type* $tmp2459 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
*(&local9) = $tmp2458;
frost$core$Frost$unref$frost$core$Object$Q($tmp2456);
goto block21;
block22:;
// line 1
// line 622
org$frostlang$frostc$ClassDecl* $tmp2460 = *(&local0);
org$frostlang$frostc$Type** $tmp2461 = &$tmp2460->type;
org$frostlang$frostc$Type* $tmp2462 = *$tmp2461;
org$frostlang$frostc$MethodDecl* $tmp2463 = *(&local7);
frost$core$Weak** $tmp2464 = &$tmp2463->owner;
frost$core$Weak* $tmp2465 = *$tmp2464;
frost$core$Object* $tmp2466 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2465);
org$frostlang$frostc$Type* $tmp2467 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp2462, ((org$frostlang$frostc$ClassDecl*) $tmp2466));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
org$frostlang$frostc$Type* $tmp2468 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
*(&local10) = $tmp2467;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
frost$core$Frost$unref$frost$core$Object$Q($tmp2466);
// line 623
org$frostlang$frostc$Type* $tmp2469 = *(&local10);
frost$core$Bit $tmp2470 = frost$core$Bit$init$builtin_bit($tmp2469 != NULL);
bool $tmp2471 = $tmp2470.value;
if ($tmp2471) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp2472 = (frost$core$Int64) {623};
org$frostlang$frostc$ClassDecl* $tmp2473 = *(&local0);
org$frostlang$frostc$Type** $tmp2474 = &$tmp2473->type;
org$frostlang$frostc$Type* $tmp2475 = *$tmp2474;
frost$core$String* $tmp2476 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2477, ((frost$core$Object*) $tmp2475));
frost$core$String* $tmp2478 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2476, &$s2479);
org$frostlang$frostc$MethodDecl* $tmp2480 = *(&local7);
frost$core$Weak** $tmp2481 = &$tmp2480->owner;
frost$core$Weak* $tmp2482 = *$tmp2481;
frost$core$Object* $tmp2483 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2482);
frost$core$String** $tmp2484 = &((org$frostlang$frostc$ClassDecl*) $tmp2483)->name;
frost$core$String* $tmp2485 = *$tmp2484;
frost$core$String* $tmp2486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2478, $tmp2485);
frost$core$String* $tmp2487 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2486, &$s2488);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2489, $tmp2472, $tmp2487);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
frost$core$Frost$unref$frost$core$Object$Q($tmp2483);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2476));
abort(); // unreachable
block24:;
// line 625
org$frostlang$frostc$Type* $tmp2490 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
org$frostlang$frostc$Type* $tmp2491 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2491));
*(&local9) = $tmp2490;
org$frostlang$frostc$Type* $tmp2492 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2492));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block21;
block21:;
goto block18;
block18:;
// line 627
org$frostlang$frostc$MethodDecl* $tmp2493 = *(&local7);
frost$core$Bit $tmp2494 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp2493);
frost$core$Bit $tmp2495 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2494);
bool $tmp2496 = $tmp2495.value;
if ($tmp2496) goto block26; else goto block27;
block26:;
// line 628
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2497 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp2498 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2499 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2500 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2501 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2501));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2502 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block27:;
// line 630
org$frostlang$frostc$IR$Value* $tmp2503 = *(&local6);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$MethodRef));
org$frostlang$frostc$MethodRef* $tmp2504 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp2505 = *(&local9);
org$frostlang$frostc$MethodDecl* $tmp2506 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp2507 = *(&local8);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp2504, param0, $tmp2505, $tmp2506, ((frost$collections$ListView*) $tmp2507));
org$frostlang$frostc$IR$Value* $tmp2508 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2503, $tmp2504, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
org$frostlang$frostc$Type* $tmp2509 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp2510 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2511 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2512 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2513 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2514 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2508;
block16:;
frost$core$Int64 $tmp2515 = (frost$core$Int64) {10};
frost$core$Bit $tmp2516 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2322, $tmp2515);
bool $tmp2517 = $tmp2516.value;
if ($tmp2517) goto block28; else goto block29;
block28:;
org$frostlang$frostc$IR$Value** $tmp2518 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2519 = *$tmp2518;
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
org$frostlang$frostc$IR$Value* $tmp2520 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
*(&local11) = $tmp2519;
org$frostlang$frostc$FixedArray** $tmp2521 = (org$frostlang$frostc$FixedArray**) (param2->$data + 8);
org$frostlang$frostc$FixedArray* $tmp2522 = *$tmp2521;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2522));
org$frostlang$frostc$FixedArray* $tmp2523 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
*(&local12) = $tmp2522;
// line 634
org$frostlang$frostc$IR$Value* $tmp2524 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp2525 = *(&local12);
org$frostlang$frostc$Pair* $tmp2526 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, $tmp2524, ((frost$collections$ListView*) $tmp2525), param3, param4);
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
org$frostlang$frostc$Pair* $tmp2527 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
*(&local13) = $tmp2526;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2526));
// line 635
org$frostlang$frostc$Pair* $tmp2528 = *(&local13);
frost$core$Bit $tmp2529 = frost$core$Bit$init$builtin_bit($tmp2528 != NULL);
bool $tmp2530 = $tmp2529.value;
if ($tmp2530) goto block30; else goto block31;
block30:;
// line 636
org$frostlang$frostc$Pair* $tmp2531 = *(&local13);
frost$core$Object** $tmp2532 = &$tmp2531->first;
frost$core$Object* $tmp2533 = *$tmp2532;
ITable* $tmp2534 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2533))->$class->itable;
while ($tmp2534->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2534 = $tmp2534->next;
}
$fn2536 $tmp2535 = $tmp2534->methods[0];
frost$core$Int64 $tmp2537 = $tmp2535(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2533)));
frost$core$Int64 $tmp2538 = (frost$core$Int64) {1};
int64_t $tmp2539 = $tmp2537.value;
int64_t $tmp2540 = $tmp2538.value;
bool $tmp2541 = $tmp2539 > $tmp2540;
frost$core$Bit $tmp2542 = (frost$core$Bit) {$tmp2541};
bool $tmp2543 = $tmp2542.value;
if ($tmp2543) goto block32; else goto block33;
block32:;
// line 637
org$frostlang$frostc$Pair* $tmp2544 = *(&local13);
frost$core$Object** $tmp2545 = &$tmp2544->first;
frost$core$Object* $tmp2546 = *$tmp2545;
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp2546), param3, param4);
// line 638
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp2547 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2548 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2549 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2550 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2551 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block33:;
// line 640
org$frostlang$frostc$IR$Value* $tmp2552 = *(&local11);
org$frostlang$frostc$Pair* $tmp2553 = *(&local13);
frost$core$Object** $tmp2554 = &$tmp2553->first;
frost$core$Object* $tmp2555 = *$tmp2554;
frost$core$Int64 $tmp2556 = (frost$core$Int64) {0};
ITable* $tmp2557 = ((frost$collections$ListView*) $tmp2555)->$class->itable;
while ($tmp2557->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2557 = $tmp2557->next;
}
$fn2559 $tmp2558 = $tmp2557->methods[0];
frost$core$Object* $tmp2560 = $tmp2558(((frost$collections$ListView*) $tmp2555), $tmp2556);
org$frostlang$frostc$IR$Value* $tmp2561 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2552, ((org$frostlang$frostc$MethodRef*) $tmp2560), param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
frost$core$Frost$unref$frost$core$Object$Q($tmp2560);
org$frostlang$frostc$Pair* $tmp2562 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2563 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2564 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2564));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2565 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2566 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2561;
block31:;
// line 643
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2567 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2567);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
frost$collections$Array* $tmp2568 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
*(&local14) = $tmp2567;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
// line 644
ITable* $tmp2569 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2569->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2569 = $tmp2569->next;
}
$fn2571 $tmp2570 = $tmp2569->methods[0];
frost$collections$Iterator* $tmp2572 = $tmp2570(((frost$collections$Iterable*) param3));
goto block34;
block34:;
ITable* $tmp2573 = $tmp2572->$class->itable;
while ($tmp2573->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2573 = $tmp2573->next;
}
$fn2575 $tmp2574 = $tmp2573->methods[0];
frost$core$Bit $tmp2576 = $tmp2574($tmp2572);
bool $tmp2577 = $tmp2576.value;
if ($tmp2577) goto block36; else goto block35;
block35:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2578 = $tmp2572->$class->itable;
while ($tmp2578->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2578 = $tmp2578->next;
}
$fn2580 $tmp2579 = $tmp2578->methods[1];
frost$core$Object* $tmp2581 = $tmp2579($tmp2572);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2581)));
org$frostlang$frostc$ASTNode* $tmp2582 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp2581);
// line 645
org$frostlang$frostc$ASTNode* $tmp2583 = *(&local15);
org$frostlang$frostc$Type* $tmp2584 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp2583);
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
org$frostlang$frostc$Type* $tmp2585 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
*(&local16) = $tmp2584;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2584));
// line 646
org$frostlang$frostc$Type* $tmp2586 = *(&local16);
frost$core$Bit $tmp2587 = frost$core$Bit$init$builtin_bit($tmp2586 == NULL);
bool $tmp2588 = $tmp2587.value;
if ($tmp2588) goto block37; else goto block38;
block37:;
// line 648
frost$core$Int64* $tmp2589 = &param0->errorCount;
frost$core$Int64 $tmp2590 = *$tmp2589;
*(&local17) = $tmp2590;
// line 649
org$frostlang$frostc$ASTNode* $tmp2591 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp2592 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2591);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
// line 650
frost$core$Int64* $tmp2593 = &param0->errorCount;
frost$core$Int64 $tmp2594 = *$tmp2593;
frost$core$Int64 $tmp2595 = *(&local17);
frost$core$Bit $tmp2596 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2594, $tmp2595);
bool $tmp2597 = $tmp2596.value;
if ($tmp2597) goto block39; else goto block40;
block39:;
// line 652
org$frostlang$frostc$FixedArray* $tmp2598 = *(&local12);
frost$core$Int64 $tmp2599 = (frost$core$Int64) {0};
frost$core$Object* $tmp2600 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2598, $tmp2599);
frost$core$String** $tmp2601 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2600))->name;
frost$core$String* $tmp2602 = *$tmp2601;
frost$core$String* $tmp2603 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2604, $tmp2602);
frost$core$String* $tmp2605 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2603, &$s2606);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2605);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
frost$core$Frost$unref$frost$core$Object$Q($tmp2600);
goto block40;
block40:;
// line 654
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2607 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2581);
org$frostlang$frostc$ASTNode* $tmp2608 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2608));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
frost$collections$Array* $tmp2609 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2609));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2610 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2610));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2611 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2612 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2613 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2614 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block38:;
// line 656
frost$collections$Array* $tmp2615 = *(&local14);
org$frostlang$frostc$Type* $tmp2616 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp2615, ((frost$core$Object*) $tmp2616));
org$frostlang$frostc$Type* $tmp2617 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2581);
org$frostlang$frostc$ASTNode* $tmp2618 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block34;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
// line 658
org$frostlang$frostc$FixedArray* $tmp2619 = *(&local12);
frost$core$Int64 $tmp2620 = (frost$core$Int64) {0};
frost$core$Object* $tmp2621 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2619, $tmp2620);
frost$core$String** $tmp2622 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2621))->name;
frost$core$String* $tmp2623 = *$tmp2622;
frost$core$String* $tmp2624 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2625, $tmp2623);
frost$core$String* $tmp2626 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2624, &$s2627);
frost$collections$Array* $tmp2628 = *(&local14);
ITable* $tmp2629 = ((frost$collections$CollectionView*) $tmp2628)->$class->itable;
while ($tmp2629->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2629 = $tmp2629->next;
}
$fn2631 $tmp2630 = $tmp2629->methods[1];
frost$core$String* $tmp2632 = $tmp2630(((frost$collections$CollectionView*) $tmp2628));
frost$core$String* $tmp2633 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2626, $tmp2632);
frost$core$String* $tmp2634 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2633, &$s2635);
$fn2637 $tmp2636 = ($fn2637) param4->$class->vtable[2];
frost$core$String* $tmp2638 = $tmp2636(param4);
frost$core$String* $tmp2639 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2634, $tmp2638);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2639);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2633));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
frost$core$Frost$unref$frost$core$Object$Q($tmp2621);
// line 660
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$Array* $tmp2640 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2641 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2642 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2643 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2643));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2644 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2645 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block29:;
frost$core$Int64 $tmp2646 = (frost$core$Int64) {12};
frost$core$Bit $tmp2647 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2322, $tmp2646);
bool $tmp2648 = $tmp2647.value;
if ($tmp2648) goto block41; else goto block42;
block41:;
org$frostlang$frostc$IR$Value** $tmp2649 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2650 = *$tmp2649;
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
org$frostlang$frostc$IR$Value* $tmp2651 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2651));
*(&local18) = $tmp2650;
org$frostlang$frostc$FixedArray** $tmp2652 = (org$frostlang$frostc$FixedArray**) (param2->$data + 8);
org$frostlang$frostc$FixedArray* $tmp2653 = *$tmp2652;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
org$frostlang$frostc$FixedArray* $tmp2654 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
*(&local19) = $tmp2653;
org$frostlang$frostc$FixedArray** $tmp2655 = (org$frostlang$frostc$FixedArray**) (param2->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2656 = *$tmp2655;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
org$frostlang$frostc$FixedArray* $tmp2657 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
*(&local20) = $tmp2656;
// line 663
org$frostlang$frostc$IR$Value* $tmp2658 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2659 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp2660 = *(&local20);
org$frostlang$frostc$Pair* $tmp2661 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, $tmp2658, ((frost$collections$ListView*) $tmp2659), ((frost$collections$ListView*) $tmp2660), param3, param4);
*(&local21) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
org$frostlang$frostc$Pair* $tmp2662 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
*(&local21) = $tmp2661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
// line 664
org$frostlang$frostc$Pair* $tmp2663 = *(&local21);
frost$core$Bit $tmp2664 = frost$core$Bit$init$builtin_bit($tmp2663 != NULL);
bool $tmp2665 = $tmp2664.value;
if ($tmp2665) goto block43; else goto block44;
block43:;
// line 665
org$frostlang$frostc$Pair* $tmp2666 = *(&local21);
frost$core$Object** $tmp2667 = &$tmp2666->first;
frost$core$Object* $tmp2668 = *$tmp2667;
ITable* $tmp2669 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2668))->$class->itable;
while ($tmp2669->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2669 = $tmp2669->next;
}
$fn2671 $tmp2670 = $tmp2669->methods[0];
frost$core$Int64 $tmp2672 = $tmp2670(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2668)));
frost$core$Int64 $tmp2673 = (frost$core$Int64) {1};
int64_t $tmp2674 = $tmp2672.value;
int64_t $tmp2675 = $tmp2673.value;
bool $tmp2676 = $tmp2674 > $tmp2675;
frost$core$Bit $tmp2677 = (frost$core$Bit) {$tmp2676};
bool $tmp2678 = $tmp2677.value;
if ($tmp2678) goto block45; else goto block46;
block45:;
// line 666
org$frostlang$frostc$Pair* $tmp2679 = *(&local21);
frost$core$Object** $tmp2680 = &$tmp2679->first;
frost$core$Object* $tmp2681 = *$tmp2680;
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp2681), param3, param4);
// line 667
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp2682 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
*(&local21) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2683 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2684 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2685 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2686 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2686));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2687 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block46:;
// line 669
org$frostlang$frostc$IR$Value* $tmp2688 = *(&local18);
org$frostlang$frostc$Pair* $tmp2689 = *(&local21);
frost$core$Object** $tmp2690 = &$tmp2689->first;
frost$core$Object* $tmp2691 = *$tmp2690;
frost$core$Int64 $tmp2692 = (frost$core$Int64) {0};
ITable* $tmp2693 = ((frost$collections$ListView*) $tmp2691)->$class->itable;
while ($tmp2693->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2693 = $tmp2693->next;
}
$fn2695 $tmp2694 = $tmp2693->methods[0];
frost$core$Object* $tmp2696 = $tmp2694(((frost$collections$ListView*) $tmp2691), $tmp2692);
org$frostlang$frostc$IR$Value* $tmp2697 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2688, ((org$frostlang$frostc$MethodRef*) $tmp2696), param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2697));
frost$core$Frost$unref$frost$core$Object$Q($tmp2696);
org$frostlang$frostc$Pair* $tmp2698 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
*(&local21) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2699 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2699));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2700 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2700));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2701 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2702 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2702));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2703 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2703));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2697;
block44:;
// line 672
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp2704 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2704);
*(&local22) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
frost$collections$Array* $tmp2705 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
*(&local22) = $tmp2704;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2704));
// line 673
ITable* $tmp2706 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2706->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2706 = $tmp2706->next;
}
$fn2708 $tmp2707 = $tmp2706->methods[0];
frost$collections$Iterator* $tmp2709 = $tmp2707(((frost$collections$Iterable*) param3));
goto block47;
block47:;
ITable* $tmp2710 = $tmp2709->$class->itable;
while ($tmp2710->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2710 = $tmp2710->next;
}
$fn2712 $tmp2711 = $tmp2710->methods[0];
frost$core$Bit $tmp2713 = $tmp2711($tmp2709);
bool $tmp2714 = $tmp2713.value;
if ($tmp2714) goto block49; else goto block48;
block48:;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2715 = $tmp2709->$class->itable;
while ($tmp2715->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2715 = $tmp2715->next;
}
$fn2717 $tmp2716 = $tmp2715->methods[1];
frost$core$Object* $tmp2718 = $tmp2716($tmp2709);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2718)));
org$frostlang$frostc$ASTNode* $tmp2719 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2719));
*(&local23) = ((org$frostlang$frostc$ASTNode*) $tmp2718);
// line 674
org$frostlang$frostc$ASTNode* $tmp2720 = *(&local23);
org$frostlang$frostc$Type* $tmp2721 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp2720);
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
org$frostlang$frostc$Type* $tmp2722 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2722));
*(&local24) = $tmp2721;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
// line 675
org$frostlang$frostc$Type* $tmp2723 = *(&local24);
frost$core$Bit $tmp2724 = frost$core$Bit$init$builtin_bit($tmp2723 == NULL);
bool $tmp2725 = $tmp2724.value;
if ($tmp2725) goto block50; else goto block51;
block50:;
// line 677
frost$core$Int64* $tmp2726 = &param0->errorCount;
frost$core$Int64 $tmp2727 = *$tmp2726;
*(&local25) = $tmp2727;
// line 678
org$frostlang$frostc$ASTNode* $tmp2728 = *(&local23);
org$frostlang$frostc$IR$Value* $tmp2729 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2728);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
// line 679
frost$core$Int64* $tmp2730 = &param0->errorCount;
frost$core$Int64 $tmp2731 = *$tmp2730;
frost$core$Int64 $tmp2732 = *(&local25);
frost$core$Bit $tmp2733 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2731, $tmp2732);
bool $tmp2734 = $tmp2733.value;
if ($tmp2734) goto block52; else goto block53;
block52:;
// line 681
org$frostlang$frostc$FixedArray* $tmp2735 = *(&local19);
frost$core$Int64 $tmp2736 = (frost$core$Int64) {0};
frost$core$Object* $tmp2737 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2735, $tmp2736);
frost$core$String** $tmp2738 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2737))->name;
frost$core$String* $tmp2739 = *$tmp2738;
frost$core$String* $tmp2740 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2741, $tmp2739);
frost$core$String* $tmp2742 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2740, &$s2743);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2742);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
frost$core$Frost$unref$frost$core$Object$Q($tmp2737);
goto block53;
block53:;
// line 683
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2744 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2718);
org$frostlang$frostc$ASTNode* $tmp2745 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
frost$collections$Array* $tmp2746 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
*(&local22) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2747 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2747));
*(&local21) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2748 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2748));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2749 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2749));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2750 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2750));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2751 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2751));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2752 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block51:;
// line 685
frost$collections$Array* $tmp2753 = *(&local22);
org$frostlang$frostc$Type* $tmp2754 = *(&local24);
frost$collections$Array$add$frost$collections$Array$T($tmp2753, ((frost$core$Object*) $tmp2754));
org$frostlang$frostc$Type* $tmp2755 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2755));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2718);
org$frostlang$frostc$ASTNode* $tmp2756 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2756));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2709));
// line 687
org$frostlang$frostc$FixedArray* $tmp2757 = *(&local19);
frost$core$Int64 $tmp2758 = (frost$core$Int64) {0};
frost$core$Object* $tmp2759 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2757, $tmp2758);
frost$core$String** $tmp2760 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2759))->name;
frost$core$String* $tmp2761 = *$tmp2760;
frost$core$String* $tmp2762 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2763, $tmp2761);
frost$core$String* $tmp2764 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2762, &$s2765);
frost$collections$Array* $tmp2766 = *(&local22);
ITable* $tmp2767 = ((frost$collections$CollectionView*) $tmp2766)->$class->itable;
while ($tmp2767->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2767 = $tmp2767->next;
}
$fn2769 $tmp2768 = $tmp2767->methods[1];
frost$core$String* $tmp2770 = $tmp2768(((frost$collections$CollectionView*) $tmp2766));
frost$core$String* $tmp2771 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2764, $tmp2770);
frost$core$String* $tmp2772 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2771, &$s2773);
$fn2775 $tmp2774 = ($fn2775) param4->$class->vtable[2];
frost$core$String* $tmp2776 = $tmp2774(param4);
frost$core$String* $tmp2777 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2772, $tmp2776);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2777);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2762));
frost$core$Frost$unref$frost$core$Object$Q($tmp2759);
// line 689
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$Array* $tmp2778 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
*(&local22) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2779 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
*(&local21) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2780 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2781 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2782 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2783 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2783));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2784 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2784));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block42:;
frost$core$Int64 $tmp2785 = (frost$core$Int64) {5};
frost$core$Bit $tmp2786 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2322, $tmp2785);
bool $tmp2787 = $tmp2786.value;
if ($tmp2787) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp2788 = (frost$core$Int64) {7};
frost$core$Bit $tmp2789 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2322, $tmp2788);
bool $tmp2790 = $tmp2789.value;
if ($tmp2790) goto block54; else goto block56;
block54:;
// line 692
org$frostlang$frostc$IR$Value* $tmp2791 = org$frostlang$frostc$expression$Call$callMethodObject$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
org$frostlang$frostc$IR* $tmp2792 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2793 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2793));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2791;
block56:;
frost$core$Int64 $tmp2794 = (frost$core$Int64) {14};
frost$core$Bit $tmp2795 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2322, $tmp2794);
bool $tmp2796 = $tmp2795.value;
if ($tmp2796) goto block57; else goto block58;
block57:;
org$frostlang$frostc$Type** $tmp2797 = (org$frostlang$frostc$Type**) (param2->$data + 0);
org$frostlang$frostc$Type* $tmp2798 = *$tmp2797;
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2798));
org$frostlang$frostc$Type* $tmp2799 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
*(&local26) = $tmp2798;
// line 695
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
// line 696
org$frostlang$frostc$Type* $tmp2800 = *(&local26);
frost$core$Bit $tmp2801 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp2800);
bool $tmp2802 = $tmp2801.value;
if ($tmp2802) goto block59; else goto block61;
block59:;
// line 697
org$frostlang$frostc$Type* $tmp2803 = *(&local26);
org$frostlang$frostc$FixedArray* $tmp2804 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp2803);
frost$core$Int64 $tmp2805 = (frost$core$Int64) {1};
frost$core$Object* $tmp2806 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2804, $tmp2805);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2806)));
org$frostlang$frostc$Type* $tmp2807 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
*(&local27) = ((org$frostlang$frostc$Type*) $tmp2806);
frost$core$Frost$unref$frost$core$Object$Q($tmp2806);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2804));
goto block60;
block61:;
// line 1
// line 700
org$frostlang$frostc$Type* $tmp2808 = *(&local26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
org$frostlang$frostc$Type* $tmp2809 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
*(&local27) = $tmp2808;
goto block60;
block60:;
// line 702
org$frostlang$frostc$Type* $tmp2810 = *(&local27);
org$frostlang$frostc$ClassDecl* $tmp2811 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2810);
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
org$frostlang$frostc$ClassDecl* $tmp2812 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
*(&local28) = $tmp2811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
// line 703
org$frostlang$frostc$ClassDecl* $tmp2813 = *(&local28);
frost$core$Bit $tmp2814 = frost$core$Bit$init$builtin_bit($tmp2813 == NULL);
bool $tmp2815 = $tmp2814.value;
if ($tmp2815) goto block62; else goto block63;
block62:;
// line 704
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2816 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2817 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2818 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2819 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2819));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2820 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block63:;
// line 706
org$frostlang$frostc$ClassDecl* $tmp2821 = *(&local28);
frost$core$Bit $tmp2822 = org$frostlang$frostc$ClassDecl$isSpecialization$R$frost$core$Bit($tmp2821);
frost$core$Bit $tmp2823 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2822);
bool $tmp2824 = $tmp2823.value;
if ($tmp2824) goto block66; else goto block65;
block66:;
org$frostlang$frostc$ClassDecl* $tmp2825 = *(&local28);
org$frostlang$frostc$Type* $tmp2826 = *(&local26);
frost$core$Bit $tmp2827 = org$frostlang$frostc$Compiler$checkGenericArguments$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$Type$R$frost$core$Bit(param0, param1, $tmp2825, $tmp2826);
frost$core$Bit $tmp2828 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2827);
bool $tmp2829 = $tmp2828.value;
if ($tmp2829) goto block64; else goto block65;
block64:;
// line 707
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2830 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2831 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2831));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2832 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2832));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2833 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2834 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block65:;
// line 709
org$frostlang$frostc$ClassDecl* $tmp2835 = *(&local28);
org$frostlang$frostc$ClassDecl$Kind* $tmp2836 = &$tmp2835->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp2837 = *$tmp2836;
frost$core$Int64 $tmp2838 = $tmp2837.$rawValue;
frost$core$Int64 $tmp2839 = (frost$core$Int64) {2};
frost$core$Bit $tmp2840 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2838, $tmp2839);
bool $tmp2841 = $tmp2840.value;
if ($tmp2841) goto block68; else goto block69;
block68:;
goto block67;
block69:;
frost$core$Int64 $tmp2842 = (frost$core$Int64) {1};
frost$core$Bit $tmp2843 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2838, $tmp2842);
bool $tmp2844 = $tmp2843.value;
if ($tmp2844) goto block70; else goto block67;
block70:;
// line 716
org$frostlang$frostc$ClassDecl* $tmp2845 = *(&local28);
frost$core$String** $tmp2846 = &$tmp2845->name;
frost$core$String* $tmp2847 = *$tmp2846;
frost$core$String* $tmp2848 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2849, $tmp2847);
frost$core$String* $tmp2850 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2848, &$s2851);
frost$core$String* $tmp2852 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2850, &$s2853);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2852);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2852));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2850));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2848));
// line 718
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2854 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2854));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2855 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2855));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2856 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2857 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2857));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2858 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block67:;
// line 721
org$frostlang$frostc$ClassDecl* $tmp2859 = *(&local28);
frost$core$Bit $tmp2860 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, $tmp2859);
frost$core$Bit $tmp2861 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2860);
bool $tmp2862 = $tmp2861.value;
if ($tmp2862) goto block71; else goto block72;
block71:;
// line 722
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2863 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2863));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2864 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2864));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2865 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2866 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2867 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block72:;
// line 724
org$frostlang$frostc$ClassDecl* $tmp2868 = *(&local28);
org$frostlang$frostc$SymbolTable* $tmp2869 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp2868);
org$frostlang$frostc$Symbol* $tmp2870 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp2869, &$s2871);
*(&local29) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
org$frostlang$frostc$Symbol* $tmp2872 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
*(&local29) = $tmp2870;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
// line 725
org$frostlang$frostc$Symbol* $tmp2873 = *(&local29);
frost$core$Bit $tmp2874 = frost$core$Bit$init$builtin_bit($tmp2873 != NULL);
bool $tmp2875 = $tmp2874.value;
if ($tmp2875) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp2876 = (frost$core$Int64) {725};
org$frostlang$frostc$ClassDecl* $tmp2877 = *(&local28);
frost$core$String** $tmp2878 = &$tmp2877->name;
frost$core$String* $tmp2879 = *$tmp2878;
frost$core$String* $tmp2880 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2881, $tmp2879);
frost$core$String* $tmp2882 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2880, &$s2883);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2884, $tmp2876, $tmp2882);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2880));
abort(); // unreachable
block73:;
// line 726
org$frostlang$frostc$ClassDecl* $tmp2885 = *(&local28);
frost$core$Bit $tmp2886 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, $tmp2885);
bool $tmp2887 = $tmp2886.value;
if ($tmp2887) goto block75; else goto block76;
block75:;
// line 727
org$frostlang$frostc$Symbol* $tmp2888 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp2889 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), $tmp2888);
org$frostlang$frostc$IR$Value* $tmp2890 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2889, param3, param4);
org$frostlang$frostc$Type* $tmp2891 = *(&local27);
org$frostlang$frostc$IR$Value* $tmp2892 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2890, $tmp2891);
org$frostlang$frostc$IR$Value* $tmp2893 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2892, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
org$frostlang$frostc$Symbol* $tmp2894 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2894));
*(&local29) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2895 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2895));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2896 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2896));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2897 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2898 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2899 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2899));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2893;
block76:;
// line 731
org$frostlang$frostc$IR* $tmp2900 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2901 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2902 = (frost$core$Int64) {6};
org$frostlang$frostc$ClassDecl* $tmp2903 = *(&local28);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl($tmp2901, $tmp2902, param1, $tmp2903);
$fn2905 $tmp2904 = ($fn2905) $tmp2900->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2906 = $tmp2904($tmp2900, $tmp2901);
*(&local30) = $tmp2906;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
// line 732
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2907 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2908 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2909 = *(&local30);
org$frostlang$frostc$Type* $tmp2910 = *(&local27);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2907, $tmp2908, $tmp2909, $tmp2910);
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
org$frostlang$frostc$IR$Value* $tmp2911 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2911));
*(&local31) = $tmp2907;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
// line 733
frost$collections$Stack** $tmp2912 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2913 = *$tmp2912;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2914 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp2915 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp2916 = *(&local31);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp2914, $tmp2915, $tmp2916);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2913, ((frost$core$Object*) $tmp2914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2914));
// line 734
org$frostlang$frostc$IR$Value* $tmp2917 = *(&local31);
org$frostlang$frostc$Symbol* $tmp2918 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp2919 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2917, $tmp2918);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp2920 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2921 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2920, $tmp2921);
org$frostlang$frostc$IR$Value* $tmp2922 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2919, param3, $tmp2920);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2920));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2919));
// line 736
org$frostlang$frostc$IR$Value* $tmp2923 = *(&local31);
org$frostlang$frostc$IR$Value* $tmp2924 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2923, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
org$frostlang$frostc$IR$Value* $tmp2925 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2925));
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Symbol* $tmp2926 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
*(&local29) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2927 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2927));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2928 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2929 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2929));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2930 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2931 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2924;
block58:;
// line 739
frost$core$Int64 $tmp2932 = (frost$core$Int64) {739};
frost$core$String* $tmp2933 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2934, ((frost$core$Object*) param2));
frost$core$String* $tmp2935 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2933, &$s2936);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2937, $tmp2932, $tmp2935);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2933));
abort(); // unreachable
block1:;
goto block77;
block77:;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$handleErrors$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2) {

org$frostlang$frostc$Pair* local0 = NULL;
org$frostlang$frostc$IR* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
org$frostlang$frostc$Type* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$IR$Statement$ID local5;
org$frostlang$frostc$IR$Block$ID local6;
org$frostlang$frostc$IR$Block$ID local7;
frost$core$Int64 local8;
org$frostlang$frostc$ClassDecl* local9 = NULL;
org$frostlang$frostc$IR$Value* local10 = NULL;
org$frostlang$frostc$IR$Statement$ID local11;
org$frostlang$frostc$IR$Block$ID local12;
org$frostlang$frostc$IR$Block$ID local13;
org$frostlang$frostc$IR$Statement$ID local14;
org$frostlang$frostc$IR$Statement$ID local15;
org$frostlang$frostc$IR$Value* local16 = NULL;
frost$core$Int64 local17;
org$frostlang$frostc$IR$Statement$ID local18;
org$frostlang$frostc$IR$Statement$ID local19;
org$frostlang$frostc$IR$Value* local20 = NULL;
// line 746
org$frostlang$frostc$Pair* $tmp2938 = org$frostlang$frostc$Compiler$getTryScope$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Block$ID$Q$Corg$frostlang$frostc$Variable$Q$GT$Q(param0);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
org$frostlang$frostc$Pair* $tmp2939 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
*(&local0) = $tmp2938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
// line 747
org$frostlang$frostc$Pair* $tmp2940 = *(&local0);
frost$core$Bit $tmp2941 = frost$core$Bit$init$builtin_bit($tmp2940 == NULL);
bool $tmp2942 = $tmp2941.value;
if ($tmp2942) goto block1; else goto block2;
block1:;
// line 748
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Pair* $tmp2943 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return param2;
block2:;
// line 750
org$frostlang$frostc$IR** $tmp2944 = &param0->ir;
org$frostlang$frostc$IR* $tmp2945 = *$tmp2944;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
org$frostlang$frostc$IR* $tmp2946 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
*(&local1) = $tmp2945;
// line 751
$fn2948 $tmp2947 = ($fn2948) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2949 = $tmp2947(param2);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
org$frostlang$frostc$Type* $tmp2950 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
*(&local2) = $tmp2949;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
// line 752
org$frostlang$frostc$Type* $tmp2951 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
org$frostlang$frostc$Type* $tmp2952 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2952));
*(&local3) = $tmp2951;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
// line 753
org$frostlang$frostc$Type* $tmp2953 = *(&local3);
org$frostlang$frostc$Type* $tmp2954 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp2953);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
org$frostlang$frostc$Type* $tmp2955 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
*(&local4) = $tmp2954;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
// line 754
org$frostlang$frostc$Type* $tmp2956 = *(&local2);
org$frostlang$frostc$Type* $tmp2957 = *(&local4);
frost$core$Bit $tmp2958 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp2956, $tmp2957);
bool $tmp2959 = $tmp2958.value;
if ($tmp2959) goto block3; else goto block5;
block3:;
// line 755
org$frostlang$frostc$IR* $tmp2960 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2961 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2962 = (frost$core$Int64) {0};
frost$core$Int64 $tmp2963 = (frost$core$Int64) {21};
org$frostlang$frostc$expression$Binary$Operator $tmp2964 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2963);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2965 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2966 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp2967 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp2965, $tmp2966, $tmp2967);
org$frostlang$frostc$Type* $tmp2968 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp2961, $tmp2962, param1, param2, $tmp2964, $tmp2965, $tmp2968);
$fn2970 $tmp2969 = ($fn2970) $tmp2960->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2971 = $tmp2969($tmp2960, $tmp2961);
*(&local5) = $tmp2971;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2961));
// line 757
org$frostlang$frostc$IR* $tmp2972 = *(&local1);
$fn2974 $tmp2973 = ($fn2974) $tmp2972->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2975 = $tmp2973($tmp2972, &$s2976);
*(&local6) = $tmp2975;
// line 758
org$frostlang$frostc$IR* $tmp2977 = *(&local1);
$fn2979 $tmp2978 = ($fn2979) $tmp2977->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2980 = $tmp2978($tmp2977, &$s2981);
*(&local7) = $tmp2980;
// line 759
org$frostlang$frostc$IR* $tmp2982 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp2983 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2984 = (frost$core$Int64) {5};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp2985 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2986 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2987 = *(&local5);
org$frostlang$frostc$Type* $tmp2988 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2985, $tmp2986, $tmp2987, $tmp2988);
org$frostlang$frostc$IR$Block$ID $tmp2989 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2990 = *(&local7);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2983, $tmp2984, param1, $tmp2985, $tmp2989, $tmp2990);
$fn2992 $tmp2991 = ($fn2992) $tmp2982->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2993 = $tmp2991($tmp2982, $tmp2983);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2988));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2983));
// line 761
org$frostlang$frostc$IR* $tmp2994 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp2995 = *(&local7);
$fn2997 $tmp2996 = ($fn2997) $tmp2994->$class->vtable[4];
$tmp2996($tmp2994, $tmp2995);
// line 762
org$frostlang$frostc$Pair* $tmp2998 = *(&local0);
frost$core$Object** $tmp2999 = &$tmp2998->second;
frost$core$Object* $tmp3000 = *$tmp2999;
org$frostlang$frostc$Variable$Storage** $tmp3001 = &((org$frostlang$frostc$Variable*) $tmp3000)->storage;
org$frostlang$frostc$Variable$Storage* $tmp3002 = *$tmp3001;
frost$core$Int64* $tmp3003 = &$tmp3002->$rawValue;
frost$core$Int64 $tmp3004 = *$tmp3003;
frost$core$Int64 $tmp3005 = (frost$core$Int64) {0};
frost$core$Bit $tmp3006 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3004, $tmp3005);
bool $tmp3007 = $tmp3006.value;
if ($tmp3007) goto block7; else goto block8;
block7:;
frost$core$Int64* $tmp3008 = (frost$core$Int64*) ($tmp3002->$data + 0);
frost$core$Int64 $tmp3009 = *$tmp3008;
*(&local8) = $tmp3009;
// line 764
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, param2);
// line 765
org$frostlang$frostc$IR* $tmp3010 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3011 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3012 = (frost$core$Int64) {27};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3013 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3014 = (frost$core$Int64) {2};
frost$core$Int64 $tmp3015 = *(&local8);
org$frostlang$frostc$Type* $tmp3016 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp3013, $tmp3014, $tmp3015, $tmp3016);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp3011, $tmp3012, param1, param2, $tmp3013);
$fn3018 $tmp3017 = ($fn3018) $tmp3010->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3019 = $tmp3017($tmp3010, $tmp3011);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3013));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
goto block6;
block8:;
// line 768
frost$core$Int64 $tmp3020 = (frost$core$Int64) {768};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3021, $tmp3020);
abort(); // unreachable
block6:;
// line 771
org$frostlang$frostc$Compiler$leaveTryScope(param0);
// line 772
org$frostlang$frostc$IR* $tmp3022 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3023 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3024 = (frost$core$Int64) {1};
org$frostlang$frostc$Pair* $tmp3025 = *(&local0);
frost$core$Object** $tmp3026 = &$tmp3025->first;
frost$core$Object* $tmp3027 = *$tmp3026;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3023, $tmp3024, param1, ((org$frostlang$frostc$IR$Block$ID) ($tmp3027 != NULL ? ((org$frostlang$frostc$IR$Block$ID$nullable) { ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp3027)->value, true }) : (org$frostlang$frostc$IR$Block$ID$nullable) { .nonnull = 0 }).value));
$fn3029 $tmp3028 = ($fn3029) $tmp3022->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3030 = $tmp3028($tmp3022, $tmp3023);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3023));
// line 773
org$frostlang$frostc$IR* $tmp3031 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp3032 = *(&local6);
$fn3034 $tmp3033 = ($fn3034) $tmp3031->$class->vtable[4];
$tmp3033($tmp3031, $tmp3032);
// line 774
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp3035 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3035));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3036 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3036));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3037 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3037));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3038 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3038));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Pair* $tmp3039 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3039));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block5:;
// line 776
org$frostlang$frostc$Type* $tmp3040 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp3041 = &$tmp3040->typeKind;
org$frostlang$frostc$Type$Kind $tmp3042 = *$tmp3041;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3043;
$tmp3043 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3043->value = $tmp3042;
frost$core$Int64 $tmp3044 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp3045 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3044);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3046;
$tmp3046 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3046->value = $tmp3045;
ITable* $tmp3047 = ((frost$core$Equatable*) $tmp3043)->$class->itable;
while ($tmp3047->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3047 = $tmp3047->next;
}
$fn3049 $tmp3048 = $tmp3047->methods[0];
frost$core$Bit $tmp3050 = $tmp3048(((frost$core$Equatable*) $tmp3043), ((frost$core$Equatable*) $tmp3046));
bool $tmp3051 = $tmp3050.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3046)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3043)));
if ($tmp3051) goto block11; else goto block10;
block11:;
org$frostlang$frostc$Type* $tmp3052 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3053 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp3052);
frost$core$Int64 $tmp3054 = (frost$core$Int64) {0};
frost$core$Object* $tmp3055 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3053, $tmp3054);
frost$core$String** $tmp3056 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3055))->name;
frost$core$String* $tmp3057 = *$tmp3056;
frost$core$Bit $tmp3058 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3057, &$s3059);
bool $tmp3060 = $tmp3058.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3055);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3053));
if ($tmp3060) goto block9; else goto block10;
block9:;
// line 777
org$frostlang$frostc$Type* $tmp3061 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp3062 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp3061);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
org$frostlang$frostc$ClassDecl* $tmp3063 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3063));
*(&local9) = $tmp3062;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
// line 778
org$frostlang$frostc$ClassDecl* $tmp3064 = *(&local9);
frost$core$Bit $tmp3065 = frost$core$Bit$init$builtin_bit($tmp3064 != NULL);
bool $tmp3066 = $tmp3065.value;
if ($tmp3066) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp3067 = (frost$core$Int64) {778};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3068, $tmp3067);
abort(); // unreachable
block12:;
// line 779
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp3069 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3070 = (frost$core$Int64) {26};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp3069, $tmp3070, param1, param2);
org$frostlang$frostc$IR$Value* $tmp3071 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3069, &$s3072);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
org$frostlang$frostc$IR$Value* $tmp3073 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3073));
*(&local10) = $tmp3071;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3071));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3069));
// line 781
org$frostlang$frostc$IR$Value* $tmp3074 = *(&local10);
frost$core$Bit $tmp3075 = frost$core$Bit$init$builtin_bit($tmp3074 != NULL);
bool $tmp3076 = $tmp3075.value;
if ($tmp3076) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp3077 = (frost$core$Int64) {781};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3078, $tmp3077);
abort(); // unreachable
block14:;
// line 782
org$frostlang$frostc$IR* $tmp3079 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3080 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3081 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp3082 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp3083 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp3082);
frost$core$Int64 $tmp3084 = (frost$core$Int64) {6};
org$frostlang$frostc$expression$Binary$Operator $tmp3085 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp3084);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3086 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3087 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3088 = (frost$core$UInt64) {0};
org$frostlang$frostc$Type* $tmp3089 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp3086, $tmp3087, $tmp3088, $tmp3089);
org$frostlang$frostc$Type* $tmp3090 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp3080, $tmp3081, param1, $tmp3083, $tmp3085, $tmp3086, $tmp3090);
$fn3092 $tmp3091 = ($fn3092) $tmp3079->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3093 = $tmp3091($tmp3079, $tmp3080);
*(&local11) = $tmp3093;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3090));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3086));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
// line 785
org$frostlang$frostc$IR* $tmp3094 = *(&local1);
$fn3096 $tmp3095 = ($fn3096) $tmp3094->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3097 = $tmp3095($tmp3094, &$s3098);
*(&local12) = $tmp3097;
// line 786
org$frostlang$frostc$IR* $tmp3099 = *(&local1);
$fn3101 $tmp3100 = ($fn3101) $tmp3099->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3102 = $tmp3100($tmp3099, &$s3103);
*(&local13) = $tmp3102;
// line 787
org$frostlang$frostc$IR* $tmp3104 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3105 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3106 = (frost$core$Int64) {5};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3107 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3108 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3109 = *(&local11);
org$frostlang$frostc$Type* $tmp3110 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3107, $tmp3108, $tmp3109, $tmp3110);
org$frostlang$frostc$IR$Block$ID $tmp3111 = *(&local12);
org$frostlang$frostc$IR$Block$ID $tmp3112 = *(&local13);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3105, $tmp3106, param1, $tmp3107, $tmp3111, $tmp3112);
$fn3114 $tmp3113 = ($fn3114) $tmp3104->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3115 = $tmp3113($tmp3104, $tmp3105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
// line 789
org$frostlang$frostc$IR* $tmp3116 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp3117 = *(&local13);
$fn3119 $tmp3118 = ($fn3119) $tmp3116->$class->vtable[4];
$tmp3118($tmp3116, $tmp3117);
// line 790
org$frostlang$frostc$IR* $tmp3120 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3121 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3122 = (frost$core$Int64) {4};
org$frostlang$frostc$ClassDecl* $tmp3123 = *(&local9);
frost$collections$Array** $tmp3124 = &$tmp3123->choiceCases;
frost$collections$Array* $tmp3125 = *$tmp3124;
frost$core$Int64 $tmp3126 = (frost$core$Int64) {1};
frost$core$Object* $tmp3127 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3125, $tmp3126);
frost$core$Int64 $tmp3128 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp3121, $tmp3122, param1, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp3127), $tmp3128);
$fn3130 $tmp3129 = ($fn3130) $tmp3120->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3131 = $tmp3129($tmp3120, $tmp3121);
*(&local14) = $tmp3131;
frost$core$Frost$unref$frost$core$Object$Q($tmp3127);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
// line 792
org$frostlang$frostc$IR* $tmp3132 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3133 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3134 = (frost$core$Int64) {14};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3135 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3136 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3137 = *(&local14);
org$frostlang$frostc$Type* $tmp3138 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3135, $tmp3136, $tmp3137, $tmp3138);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp3133, $tmp3134, param1, $tmp3135);
$fn3140 $tmp3139 = ($fn3140) $tmp3132->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3141 = $tmp3139($tmp3132, $tmp3133);
*(&local15) = $tmp3141;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
// line 794
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3142 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3143 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3144 = *(&local15);
org$frostlang$frostc$Type* $tmp3145 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3142, $tmp3143, $tmp3144, $tmp3145);
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
org$frostlang$frostc$IR$Value* $tmp3146 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
*(&local16) = $tmp3142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
// line 795
org$frostlang$frostc$IR$Value* $tmp3147 = *(&local16);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp3147);
// line 796
org$frostlang$frostc$Pair* $tmp3148 = *(&local0);
frost$core$Object** $tmp3149 = &$tmp3148->second;
frost$core$Object* $tmp3150 = *$tmp3149;
org$frostlang$frostc$Variable$Storage** $tmp3151 = &((org$frostlang$frostc$Variable*) $tmp3150)->storage;
org$frostlang$frostc$Variable$Storage* $tmp3152 = *$tmp3151;
frost$core$Int64* $tmp3153 = &$tmp3152->$rawValue;
frost$core$Int64 $tmp3154 = *$tmp3153;
frost$core$Int64 $tmp3155 = (frost$core$Int64) {0};
frost$core$Bit $tmp3156 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3154, $tmp3155);
bool $tmp3157 = $tmp3156.value;
if ($tmp3157) goto block17; else goto block18;
block17:;
frost$core$Int64* $tmp3158 = (frost$core$Int64*) ($tmp3152->$data + 0);
frost$core$Int64 $tmp3159 = *$tmp3158;
*(&local17) = $tmp3159;
// line 798
org$frostlang$frostc$IR* $tmp3160 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3161 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3162 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp3163 = *(&local16);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3164 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3165 = (frost$core$Int64) {2};
frost$core$Int64 $tmp3166 = *(&local17);
org$frostlang$frostc$Type* $tmp3167 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp3164, $tmp3165, $tmp3166, $tmp3167);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp3161, $tmp3162, param1, $tmp3163, $tmp3164);
$fn3169 $tmp3168 = ($fn3169) $tmp3160->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3170 = $tmp3168($tmp3160, $tmp3161);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3161));
goto block16;
block18:;
// line 801
frost$core$Int64 $tmp3171 = (frost$core$Int64) {801};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3172, $tmp3171);
abort(); // unreachable
block16:;
// line 804
org$frostlang$frostc$Compiler$leaveTryScope(param0);
// line 805
org$frostlang$frostc$IR* $tmp3173 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3174 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3175 = (frost$core$Int64) {1};
org$frostlang$frostc$Pair* $tmp3176 = *(&local0);
frost$core$Object** $tmp3177 = &$tmp3176->first;
frost$core$Object* $tmp3178 = *$tmp3177;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3174, $tmp3175, param1, ((org$frostlang$frostc$IR$Block$ID) ($tmp3178 != NULL ? ((org$frostlang$frostc$IR$Block$ID$nullable) { ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp3178)->value, true }) : (org$frostlang$frostc$IR$Block$ID$nullable) { .nonnull = 0 }).value));
$fn3180 $tmp3179 = ($fn3180) $tmp3173->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3181 = $tmp3179($tmp3173, $tmp3174);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3174));
// line 806
org$frostlang$frostc$IR* $tmp3182 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp3183 = *(&local12);
$fn3185 $tmp3184 = ($fn3185) $tmp3182->$class->vtable[4];
$tmp3184($tmp3182, $tmp3183);
// line 807
org$frostlang$frostc$IR* $tmp3186 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3187 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3188 = (frost$core$Int64) {4};
org$frostlang$frostc$ClassDecl* $tmp3189 = *(&local9);
frost$collections$Array** $tmp3190 = &$tmp3189->choiceCases;
frost$collections$Array* $tmp3191 = *$tmp3190;
frost$core$Int64 $tmp3192 = (frost$core$Int64) {0};
frost$core$Object* $tmp3193 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3191, $tmp3192);
frost$core$Int64 $tmp3194 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp3187, $tmp3188, param1, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp3193), $tmp3194);
$fn3196 $tmp3195 = ($fn3196) $tmp3186->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3197 = $tmp3195($tmp3186, $tmp3187);
*(&local18) = $tmp3197;
frost$core$Frost$unref$frost$core$Object$Q($tmp3193);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
// line 809
org$frostlang$frostc$IR* $tmp3198 = *(&local1);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3199 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3200 = (frost$core$Int64) {14};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3201 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3202 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3203 = *(&local18);
org$frostlang$frostc$Type* $tmp3204 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3201, $tmp3202, $tmp3203, $tmp3204);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp3199, $tmp3200, param1, $tmp3201);
$fn3206 $tmp3205 = ($fn3206) $tmp3198->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3207 = $tmp3205($tmp3198, $tmp3199);
*(&local19) = $tmp3207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3199));
// line 811
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3208 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3209 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3210 = *(&local19);
org$frostlang$frostc$Type* $tmp3211 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3208, $tmp3209, $tmp3210, $tmp3211);
org$frostlang$frostc$Type* $tmp3212 = *(&local2);
org$frostlang$frostc$FixedArray* $tmp3213 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp3212);
frost$core$Int64 $tmp3214 = (frost$core$Int64) {1};
frost$core$Object* $tmp3215 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3213, $tmp3214);
org$frostlang$frostc$IR$Value* $tmp3216 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3208, ((org$frostlang$frostc$Type*) $tmp3215));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3216));
org$frostlang$frostc$IR$Value* $tmp3217 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3217));
*(&local20) = $tmp3216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3216));
frost$core$Frost$unref$frost$core$Object$Q($tmp3215);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
// line 813
org$frostlang$frostc$IR$Value* $tmp3218 = *(&local20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3218));
org$frostlang$frostc$IR$Value* $tmp3219 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3220 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3221 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3222 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp3223 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3224 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3225 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3226 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3226));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Pair* $tmp3227 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3227));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp3218;
block10:;
goto block4;
block4:;
// line 815
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp3228 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3228));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3229 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3229));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3230 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3230));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3231 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3231));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Pair* $tmp3232 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3232));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return param2;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

org$frostlang$frostc$IR$Value* local0 = NULL;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
org$frostlang$frostc$IR* local5 = NULL;
org$frostlang$frostc$MethodRef* local6 = NULL;
frost$core$Bit local7;
frost$core$Bit local8;
frost$core$Int64 local9;
frost$core$Bit local10;
org$frostlang$frostc$IR$Statement$ID local11;
org$frostlang$frostc$IR$Statement* local12 = NULL;
org$frostlang$frostc$Pair* local13 = NULL;
org$frostlang$frostc$MethodRef* local14 = NULL;
frost$core$Bit local15;
org$frostlang$frostc$Type* local16 = NULL;
org$frostlang$frostc$Type* local17 = NULL;
frost$collections$Array* local18 = NULL;
org$frostlang$frostc$IR$Value* local19 = NULL;
frost$core$Int64 local20;
frost$core$Int64 local21;
org$frostlang$frostc$IR$Value* local22 = NULL;
org$frostlang$frostc$IR$Statement$ID local23;
org$frostlang$frostc$IR$Statement$ID local24;
org$frostlang$frostc$IR$Value* local25 = NULL;
// line 823
org$frostlang$frostc$IR** $tmp3233 = &param0->ir;
org$frostlang$frostc$IR* $tmp3234 = *$tmp3233;
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3234));
org$frostlang$frostc$IR* $tmp3235 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3235));
*(&local5) = $tmp3234;
// line 825
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodRef* $tmp3236 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3236));
*(&local6) = param3;
// line 826
org$frostlang$frostc$MethodRef* $tmp3237 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3238 = &$tmp3237->value;
org$frostlang$frostc$MethodDecl* $tmp3239 = *$tmp3238;
org$frostlang$frostc$MethodDecl$Kind* $tmp3240 = &$tmp3239->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3241 = *$tmp3240;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3242;
$tmp3242 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3242->value = $tmp3241;
frost$core$Int64 $tmp3243 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3244 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3243);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3245;
$tmp3245 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3245->value = $tmp3244;
ITable* $tmp3246 = ((frost$core$Equatable*) $tmp3242)->$class->itable;
while ($tmp3246->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3246 = $tmp3246->next;
}
$fn3248 $tmp3247 = $tmp3246->methods[0];
frost$core$Bit $tmp3249 = $tmp3247(((frost$core$Equatable*) $tmp3242), ((frost$core$Equatable*) $tmp3245));
bool $tmp3250 = $tmp3249.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3245)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3242)));
if ($tmp3250) goto block16; else goto block17;
block16:;
// line 827
frost$core$Bit $tmp3251 = frost$core$Bit$init$builtin_bit(false);
*(&local7) = $tmp3251;
// line 828
frost$core$Bit $tmp3252 = frost$core$Bit$init$builtin_bit(false);
*(&local8) = $tmp3252;
// line 829
frost$core$Bit $tmp3253 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3254 = $tmp3253.value;
if ($tmp3254) goto block18; else goto block20;
block18:;
// line 830
frost$core$Int64* $tmp3255 = &param2->$rawValue;
frost$core$Int64 $tmp3256 = *$tmp3255;
frost$core$Int64 $tmp3257 = (frost$core$Int64) {5};
frost$core$Bit $tmp3258 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3256, $tmp3257);
bool $tmp3259 = $tmp3258.value;
if ($tmp3259) goto block22; else goto block23;
block22:;
frost$core$Int64* $tmp3260 = (frost$core$Int64*) (param2->$data + 0);
frost$core$Int64 $tmp3261 = *$tmp3260;
*(&local9) = $tmp3261;
org$frostlang$frostc$Type** $tmp3262 = (org$frostlang$frostc$Type**) (param2->$data + 8);
org$frostlang$frostc$Type* $tmp3263 = *$tmp3262;
// line 832
frost$core$Int64 $tmp3264 = *(&local9);
frost$core$Int64 $tmp3265 = (frost$core$Int64) {0};
frost$core$Bit $tmp3266 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3264, $tmp3265);
bool $tmp3267 = $tmp3266.value;
if ($tmp3267) goto block24; else goto block25;
block24:;
frost$core$Bit $tmp3268 = org$frostlang$frostc$Compiler$isClassContext$R$frost$core$Bit(param0);
frost$core$Bit $tmp3269 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3268);
*(&local10) = $tmp3269;
goto block26;
block25:;
*(&local10) = $tmp3266;
goto block26;
block26:;
frost$core$Bit $tmp3270 = *(&local10);
*(&local8) = $tmp3270;
// line 833
frost$core$Bit $tmp3271 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3271;
goto block21;
block23:;
frost$core$Int64 $tmp3272 = (frost$core$Int64) {7};
frost$core$Bit $tmp3273 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3256, $tmp3272);
bool $tmp3274 = $tmp3273.value;
if ($tmp3274) goto block27; else goto block28;
block27:;
org$frostlang$frostc$IR$Statement$ID* $tmp3275 = (org$frostlang$frostc$IR$Statement$ID*) (param2->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp3276 = *$tmp3275;
*(&local11) = $tmp3276;
org$frostlang$frostc$Type** $tmp3277 = (org$frostlang$frostc$Type**) (param2->$data + 8);
org$frostlang$frostc$Type* $tmp3278 = *$tmp3277;
// line 836
org$frostlang$frostc$IR$Statement$ID $tmp3279 = *(&local11);
org$frostlang$frostc$IR* $tmp3280 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3281 = &$tmp3280->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3282 = *$tmp3281;
frost$collections$Array** $tmp3283 = &$tmp3282->ids;
frost$collections$Array* $tmp3284 = *$tmp3283;
org$frostlang$frostc$IR* $tmp3285 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3286 = &$tmp3285->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3287 = *$tmp3286;
frost$collections$Array** $tmp3288 = &$tmp3287->ids;
frost$collections$Array* $tmp3289 = *$tmp3288;
ITable* $tmp3290 = ((frost$collections$CollectionView*) $tmp3289)->$class->itable;
while ($tmp3290->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3290 = $tmp3290->next;
}
$fn3292 $tmp3291 = $tmp3290->methods[0];
frost$core$Int64 $tmp3293 = $tmp3291(((frost$collections$CollectionView*) $tmp3289));
frost$core$Int64 $tmp3294 = (frost$core$Int64) {1};
int64_t $tmp3295 = $tmp3293.value;
int64_t $tmp3296 = $tmp3294.value;
int64_t $tmp3297 = $tmp3295 - $tmp3296;
frost$core$Int64 $tmp3298 = (frost$core$Int64) {$tmp3297};
frost$core$Object* $tmp3299 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3284, $tmp3298);
frost$core$Bit $tmp3300 = org$frostlang$frostc$IR$Statement$ID$$EQ$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Bit($tmp3279, ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp3299)->value);
bool $tmp3301 = $tmp3300.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3299);
if ($tmp3301) goto block29; else goto block30;
block29:;
// line 837
org$frostlang$frostc$IR* $tmp3302 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3303 = &$tmp3302->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3304 = *$tmp3303;
frost$collections$Array** $tmp3305 = &$tmp3304->statements;
frost$collections$Array* $tmp3306 = *$tmp3305;
org$frostlang$frostc$IR* $tmp3307 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3308 = &$tmp3307->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3309 = *$tmp3308;
frost$collections$Array** $tmp3310 = &$tmp3309->statements;
frost$collections$Array* $tmp3311 = *$tmp3310;
ITable* $tmp3312 = ((frost$collections$CollectionView*) $tmp3311)->$class->itable;
while ($tmp3312->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3312 = $tmp3312->next;
}
$fn3314 $tmp3313 = $tmp3312->methods[0];
frost$core$Int64 $tmp3315 = $tmp3313(((frost$collections$CollectionView*) $tmp3311));
frost$core$Int64 $tmp3316 = (frost$core$Int64) {1};
int64_t $tmp3317 = $tmp3315.value;
int64_t $tmp3318 = $tmp3316.value;
int64_t $tmp3319 = $tmp3317 - $tmp3318;
frost$core$Int64 $tmp3320 = (frost$core$Int64) {$tmp3319};
frost$core$Object* $tmp3321 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3306, $tmp3320);
*(&local12) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp3321)));
org$frostlang$frostc$IR$Statement* $tmp3322 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3322));
*(&local12) = ((org$frostlang$frostc$IR$Statement*) $tmp3321);
frost$core$Frost$unref$frost$core$Object$Q($tmp3321);
// line 838
org$frostlang$frostc$IR$Statement* $tmp3323 = *(&local12);
frost$core$Int64* $tmp3324 = &$tmp3323->$rawValue;
frost$core$Int64 $tmp3325 = *$tmp3324;
frost$core$Int64 $tmp3326 = (frost$core$Int64) {6};
frost$core$Bit $tmp3327 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3325, $tmp3326);
bool $tmp3328 = $tmp3327.value;
if ($tmp3328) goto block32; else goto block31;
block32:;
// line 840
frost$core$Bit $tmp3329 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3329;
goto block31;
block31:;
org$frostlang$frostc$IR$Statement* $tmp3330 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3330));
*(&local12) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block30;
block30:;
goto block21;
block28:;
frost$core$Int64 $tmp3331 = (frost$core$Int64) {13};
frost$core$Bit $tmp3332 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3256, $tmp3331);
bool $tmp3333 = $tmp3332.value;
if ($tmp3333) goto block33; else goto block21;
block33:;
// line 846
frost$core$Bit $tmp3334 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp3334;
// line 847
frost$core$Bit $tmp3335 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3335;
goto block21;
block21:;
goto block19;
block20:;
// line 1
// line 852
org$frostlang$frostc$MethodRef* $tmp3336 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3337 = &$tmp3336->value;
org$frostlang$frostc$MethodDecl* $tmp3338 = *$tmp3337;
frost$core$Weak** $tmp3339 = &$tmp3338->owner;
frost$core$Weak* $tmp3340 = *$tmp3339;
frost$core$Object* $tmp3341 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3340);
frost$core$Bit $tmp3342 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp3341));
bool $tmp3343 = $tmp3342.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3341);
if ($tmp3343) goto block34; else goto block36;
block34:;
// line 853
frost$core$Bit $tmp3344 = frost$core$Bit$init$builtin_bit(false);
*(&local8) = $tmp3344;
// line 854
frost$core$Bit $tmp3345 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3345;
goto block35;
block36:;
// line 1
// line 857
frost$core$Bit $tmp3346 = org$frostlang$frostc$Compiler$isClassContext$R$frost$core$Bit(param0);
frost$core$Bit $tmp3347 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3346);
*(&local8) = $tmp3347;
// line 858
frost$core$Bit $tmp3348 = *(&local8);
*(&local7) = $tmp3348;
goto block35;
block35:;
goto block19;
block19:;
// line 861
frost$core$Bit $tmp3349 = *(&local8);
bool $tmp3350 = $tmp3349.value;
if ($tmp3350) goto block39; else goto block38;
block39:;
frost$collections$Stack** $tmp3351 = &param0->currentMethod;
frost$collections$Stack* $tmp3352 = *$tmp3351;
frost$core$Int64 $tmp3353 = (frost$core$Int64) {0};
frost$core$Object* $tmp3354 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3352, $tmp3353);
org$frostlang$frostc$MethodDecl$Kind* $tmp3355 = &((org$frostlang$frostc$MethodDecl*) $tmp3354)->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3356 = *$tmp3355;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3357;
$tmp3357 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3357->value = $tmp3356;
frost$core$Int64 $tmp3358 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3359 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3358);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3360;
$tmp3360 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3360->value = $tmp3359;
ITable* $tmp3361 = ((frost$core$Equatable*) $tmp3357)->$class->itable;
while ($tmp3361->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3361 = $tmp3361->next;
}
$fn3363 $tmp3362 = $tmp3361->methods[1];
frost$core$Bit $tmp3364 = $tmp3362(((frost$core$Equatable*) $tmp3357), ((frost$core$Equatable*) $tmp3360));
bool $tmp3365 = $tmp3364.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3360)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3357)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3354);
if ($tmp3365) goto block37; else goto block38;
block37:;
// line 862
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s3366);
// line 863
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3367 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3367));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3368 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block38:;
// line 865
frost$core$Bit $tmp3369 = *(&local7);
frost$core$Bit $tmp3370 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3369);
bool $tmp3371 = $tmp3370.value;
if ($tmp3371) goto block40; else goto block41;
block40:;
// line 866
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s3372);
// line 867
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3373 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3374 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3374));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block41:;
goto block17;
block17:;
// line 870
ITable* $tmp3375 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3375->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3375 = $tmp3375->next;
}
$fn3377 $tmp3376 = $tmp3375->methods[0];
frost$core$Int64 $tmp3378 = $tmp3376(((frost$collections$CollectionView*) param4));
org$frostlang$frostc$MethodRef* $tmp3379 = *(&local6);
frost$core$Int64 $tmp3380 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3379);
int64_t $tmp3381 = $tmp3378.value;
int64_t $tmp3382 = $tmp3380.value;
bool $tmp3383 = $tmp3381 != $tmp3382;
frost$core$Bit $tmp3384 = (frost$core$Bit) {$tmp3383};
bool $tmp3385 = $tmp3384.value;
if ($tmp3385) goto block42; else goto block43;
block42:;
// line 871
org$frostlang$frostc$MethodRef* $tmp3386 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3387 = &$tmp3386->value;
org$frostlang$frostc$MethodDecl* $tmp3388 = *$tmp3387;
frost$core$String* $tmp3389 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3388);
frost$core$String* $tmp3390 = frost$core$String$get_asString$R$frost$core$String($tmp3389);
frost$core$String* $tmp3391 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3390, &$s3392);
org$frostlang$frostc$MethodRef* $tmp3393 = *(&local6);
frost$core$Int64 $tmp3394 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3393);
frost$core$Int64$wrapper* $tmp3395;
$tmp3395 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3395->value = $tmp3394;
frost$core$String* $tmp3396 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3391, ((frost$core$Object*) $tmp3395));
frost$core$String* $tmp3397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3396, &$s3398);
org$frostlang$frostc$MethodRef* $tmp3399 = *(&local6);
frost$core$Int64 $tmp3400 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3399);
frost$core$Int64 $tmp3401 = (frost$core$Int64) {1};
frost$core$Bit $tmp3402 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3400, $tmp3401);
frost$core$Bit$wrapper* $tmp3403;
$tmp3403 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3403->value = $tmp3402;
ITable* $tmp3404 = ((frost$core$Formattable*) $tmp3403)->$class->itable;
while ($tmp3404->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp3404 = $tmp3404->next;
}
$fn3406 $tmp3405 = $tmp3404->methods[0];
frost$core$String* $tmp3407 = $tmp3405(((frost$core$Formattable*) $tmp3403), &$s3408);
frost$core$String* $tmp3409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3410, $tmp3407);
frost$core$String* $tmp3411 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3409, &$s3412);
ITable* $tmp3413 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3413->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3413 = $tmp3413->next;
}
$fn3415 $tmp3414 = $tmp3413->methods[0];
frost$core$Int64 $tmp3416 = $tmp3414(((frost$collections$CollectionView*) param4));
frost$core$Int64$wrapper* $tmp3417;
$tmp3417 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3417->value = $tmp3416;
frost$core$String* $tmp3418 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3411, ((frost$core$Object*) $tmp3417));
frost$core$String* $tmp3419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3418, &$s3420);
frost$core$String* $tmp3421 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3397, $tmp3419);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3421);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3421));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3418));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3403)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3389));
// line 873
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3422 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3422));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3423 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block43:;
// line 875
frost$core$Bit $tmp3424 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3425 = $tmp3424.value;
if ($tmp3425) goto block46; else goto block45;
block46:;
org$frostlang$frostc$MethodRef* $tmp3426 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3427 = &$tmp3426->value;
org$frostlang$frostc$MethodDecl* $tmp3428 = *$tmp3427;
org$frostlang$frostc$Annotations** $tmp3429 = &$tmp3428->annotations;
org$frostlang$frostc$Annotations* $tmp3430 = *$tmp3429;
frost$core$Bit $tmp3431 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3430);
bool $tmp3432 = $tmp3431.value;
if ($tmp3432) goto block44; else goto block45;
block44:;
// line 876
frost$core$Int64* $tmp3433 = &param2->$rawValue;
frost$core$Int64 $tmp3434 = *$tmp3433;
frost$core$Int64 $tmp3435 = (frost$core$Int64) {14};
frost$core$Bit $tmp3436 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3434, $tmp3435);
bool $tmp3437 = $tmp3436.value;
if ($tmp3437) goto block48; else goto block49;
block48:;
goto block47;
block49:;
// line 881
org$frostlang$frostc$MethodRef* $tmp3438 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3439 = &$tmp3438->value;
org$frostlang$frostc$MethodDecl* $tmp3440 = *$tmp3439;
frost$core$String* $tmp3441 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3440);
frost$core$String* $tmp3442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3443, $tmp3441);
frost$core$String* $tmp3444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3442, &$s3445);
frost$core$String* $tmp3446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3444, &$s3447);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3446);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3441));
goto block47;
block47:;
goto block45;
block45:;
// line 886
org$frostlang$frostc$MethodRef* $tmp3448 = *(&local6);
org$frostlang$frostc$Pair* $tmp3449 = org$frostlang$frostc$expression$Call$compileIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp3448, param4);
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3449));
org$frostlang$frostc$Pair* $tmp3450 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3450));
*(&local13) = $tmp3449;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3449));
// line 887
org$frostlang$frostc$Pair* $tmp3451 = *(&local13);
frost$core$Object** $tmp3452 = &$tmp3451->first;
frost$core$Object* $tmp3453 = *$tmp3452;
bool $tmp3454 = ((frost$core$Bit$wrapper*) $tmp3453)->value.value;
if ($tmp3454) goto block50; else goto block51;
block50:;
// line 888
org$frostlang$frostc$Pair* $tmp3455 = *(&local13);
frost$core$Object** $tmp3456 = &$tmp3455->second;
frost$core$Object* $tmp3457 = *$tmp3456;
frost$core$Bit $tmp3458 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$IR$Value*) $tmp3457) != NULL);
bool $tmp3459 = $tmp3458.value;
if ($tmp3459) goto block52; else goto block53;
block52:;
// line 889
org$frostlang$frostc$Pair* $tmp3460 = *(&local13);
frost$core$Object** $tmp3461 = &$tmp3460->second;
frost$core$Object* $tmp3462 = *$tmp3461;
org$frostlang$frostc$IR$Value* $tmp3463 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) $tmp3462), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3463));
org$frostlang$frostc$Pair* $tmp3464 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3464));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3465 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3465));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3466 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3466));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = $tmp3463;
goto block1;
block53:;
// line 891
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp3467 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3467));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3468 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3468));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3469 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3469));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block51:;
// line 893
org$frostlang$frostc$MethodRef* $tmp3470 = *(&local6);
org$frostlang$frostc$MethodRef* $tmp3471 = org$frostlang$frostc$expression$Call$performTypeInference$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$MethodRef$Q(param0, $tmp3470, param4);
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
org$frostlang$frostc$MethodRef* $tmp3472 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3472));
*(&local14) = $tmp3471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
// line 894
org$frostlang$frostc$MethodRef* $tmp3473 = *(&local14);
frost$core$Bit $tmp3474 = frost$core$Bit$init$builtin_bit($tmp3473 == NULL);
bool $tmp3475 = $tmp3474.value;
if ($tmp3475) goto block54; else goto block55;
block54:;
// line 895
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3476 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3476));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3477 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3477));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3478 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3478));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3479 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3479));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block55:;
// line 897
org$frostlang$frostc$MethodRef* $tmp3480 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3480));
org$frostlang$frostc$MethodRef* $tmp3481 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
*(&local6) = $tmp3480;
// line 898
// line 899
frost$core$Bit $tmp3482 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3483 = $tmp3482.value;
if ($tmp3483) goto block56; else goto block58;
block56:;
// line 900
frost$core$Int64* $tmp3484 = &param2->$rawValue;
frost$core$Int64 $tmp3485 = *$tmp3484;
frost$core$Int64 $tmp3486 = (frost$core$Int64) {13};
frost$core$Bit $tmp3487 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3485, $tmp3486);
bool $tmp3488 = $tmp3487.value;
if ($tmp3488) goto block60; else goto block61;
block60:;
// line 902
frost$core$Bit $tmp3489 = frost$core$Bit$init$builtin_bit(true);
*(&local15) = $tmp3489;
goto block59;
block61:;
// line 905
frost$core$Bit $tmp3490 = frost$core$Bit$init$builtin_bit(false);
*(&local15) = $tmp3490;
goto block59;
block59:;
goto block57;
block58:;
// line 1
// line 910
frost$core$Bit $tmp3491 = frost$core$Bit$init$builtin_bit(false);
*(&local15) = $tmp3491;
goto block57;
block57:;
// line 914
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
// line 915
org$frostlang$frostc$MethodRef* $tmp3492 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3493 = &$tmp3492->value;
org$frostlang$frostc$MethodDecl* $tmp3494 = *$tmp3493;
frost$core$Bit $tmp3495 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit($tmp3494);
bool $tmp3496 = $tmp3495.value;
if ($tmp3496) goto block62; else goto block64;
block62:;
// line 916
org$frostlang$frostc$MethodRef* $tmp3497 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3498 = &$tmp3497->value;
org$frostlang$frostc$MethodDecl* $tmp3499 = *$tmp3498;
org$frostlang$frostc$Type* $tmp3500 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(param0, $tmp3499);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3500));
org$frostlang$frostc$Type* $tmp3501 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3501));
*(&local16) = $tmp3500;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3500));
goto block63;
block64:;
// line 1
// line 919
org$frostlang$frostc$MethodRef* $tmp3502 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3503 = &$tmp3502->value;
org$frostlang$frostc$MethodDecl* $tmp3504 = *$tmp3503;
org$frostlang$frostc$MethodRef* $tmp3505 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3506 = &$tmp3505->value;
org$frostlang$frostc$MethodDecl* $tmp3507 = *$tmp3506;
frost$core$Weak** $tmp3508 = &$tmp3507->owner;
frost$core$Weak* $tmp3509 = *$tmp3508;
frost$core$Object* $tmp3510 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3509);
org$frostlang$frostc$Type** $tmp3511 = &((org$frostlang$frostc$ClassDecl*) $tmp3510)->type;
org$frostlang$frostc$Type* $tmp3512 = *$tmp3511;
frost$core$Bit $tmp3513 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp3514 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp3504, $tmp3512, $tmp3513);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3514));
org$frostlang$frostc$Type* $tmp3515 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3515));
*(&local16) = $tmp3514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3514));
frost$core$Frost$unref$frost$core$Object$Q($tmp3510);
goto block63;
block63:;
// line 921
org$frostlang$frostc$Type* $tmp3516 = *(&local16);
frost$core$Bit $tmp3517 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp3516);
bool $tmp3518 = $tmp3517.value;
if ($tmp3518) goto block65; else goto block66;
block66:;
frost$core$Int64 $tmp3519 = (frost$core$Int64) {921};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3520, $tmp3519);
abort(); // unreachable
block65:;
// line 922
org$frostlang$frostc$MethodRef* $tmp3521 = *(&local6);
org$frostlang$frostc$Type** $tmp3522 = &$tmp3521->effectiveType;
org$frostlang$frostc$Type* $tmp3523 = *$tmp3522;
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3523));
org$frostlang$frostc$Type* $tmp3524 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
*(&local17) = $tmp3523;
// line 923
org$frostlang$frostc$Type* $tmp3525 = *(&local17);
frost$core$Bit $tmp3526 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp3525);
bool $tmp3527 = $tmp3526.value;
if ($tmp3527) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp3528 = (frost$core$Int64) {923};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3529, $tmp3528);
abort(); // unreachable
block67:;
// line 924
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp3530 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp3531 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3531->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3531 = $tmp3531->next;
}
$fn3533 $tmp3532 = $tmp3531->methods[0];
frost$core$Int64 $tmp3534 = $tmp3532(((frost$collections$CollectionView*) param4));
frost$collections$Array$init$frost$core$Int64($tmp3530, $tmp3534);
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3530));
frost$collections$Array* $tmp3535 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3535));
*(&local18) = $tmp3530;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3530));
// line 925
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 926
frost$core$Bit $tmp3536 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3537 = $tmp3536.value;
if ($tmp3537) goto block69; else goto block71;
block69:;
// line 927
frost$core$Int64* $tmp3538 = &param2->$rawValue;
frost$core$Int64 $tmp3539 = *$tmp3538;
frost$core$Int64 $tmp3540 = (frost$core$Int64) {14};
frost$core$Bit $tmp3541 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3539, $tmp3540);
bool $tmp3542 = $tmp3541.value;
if ($tmp3542) goto block73; else goto block74;
block73:;
goto block72;
block74:;
// line 932
org$frostlang$frostc$MethodRef* $tmp3543 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3544 = &$tmp3543->value;
org$frostlang$frostc$MethodDecl* $tmp3545 = *$tmp3544;
frost$core$Weak** $tmp3546 = &$tmp3545->owner;
frost$core$Weak* $tmp3547 = *$tmp3546;
frost$core$Object* $tmp3548 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3547);
frost$core$String** $tmp3549 = &((org$frostlang$frostc$ClassDecl*) $tmp3548)->name;
frost$core$String* $tmp3550 = *$tmp3549;
frost$core$Bit $tmp3551 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3550, &$s3552);
bool $tmp3553 = $tmp3551.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3548);
if ($tmp3553) goto block75; else goto block77;
block75:;
// line 933
org$frostlang$frostc$Type* $tmp3554 = *(&local16);
frost$core$Int64 $tmp3555 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp3556 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3554, $tmp3555);
org$frostlang$frostc$IR$Value* $tmp3557 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp3556);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
org$frostlang$frostc$IR$Value* $tmp3558 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3558));
*(&local19) = $tmp3557;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3556));
goto block76;
block77:;
// line 936
frost$core$Bit $tmp3559 = *(&local15);
bool $tmp3560 = $tmp3559.value;
if ($tmp3560) goto block78; else goto block80;
block78:;
// line 937
frost$core$Bit $tmp3561 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp3562 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3561);
org$frostlang$frostc$MethodRef* $tmp3563 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3564 = &$tmp3563->value;
org$frostlang$frostc$MethodDecl* $tmp3565 = *$tmp3564;
frost$core$Weak** $tmp3566 = &$tmp3565->owner;
frost$core$Weak* $tmp3567 = *$tmp3566;
frost$core$Object* $tmp3568 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3567);
org$frostlang$frostc$Type** $tmp3569 = &((org$frostlang$frostc$ClassDecl*) $tmp3568)->type;
org$frostlang$frostc$Type* $tmp3570 = *$tmp3569;
org$frostlang$frostc$IR$Value* $tmp3571 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3562, $tmp3570);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3571));
org$frostlang$frostc$IR$Value* $tmp3572 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3572));
*(&local19) = $tmp3571;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3571));
frost$core$Frost$unref$frost$core$Object$Q($tmp3568);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3562));
goto block79;
block80:;
// line 1
// line 942
org$frostlang$frostc$MethodRef* $tmp3573 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3574 = &$tmp3573->value;
org$frostlang$frostc$MethodDecl* $tmp3575 = *$tmp3574;
frost$core$Weak** $tmp3576 = &$tmp3575->owner;
frost$core$Weak* $tmp3577 = *$tmp3576;
frost$core$Object* $tmp3578 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3577);
org$frostlang$frostc$Type** $tmp3579 = &((org$frostlang$frostc$ClassDecl*) $tmp3578)->type;
org$frostlang$frostc$Type* $tmp3580 = *$tmp3579;
org$frostlang$frostc$IR$Value* $tmp3581 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp3580);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3581));
org$frostlang$frostc$IR$Value* $tmp3582 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3582));
*(&local19) = $tmp3581;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3581));
frost$core$Frost$unref$frost$core$Object$Q($tmp3578);
goto block79;
block79:;
goto block76;
block76:;
// line 944
org$frostlang$frostc$IR$Value* $tmp3583 = *(&local19);
frost$core$Bit $tmp3584 = frost$core$Bit$init$builtin_bit($tmp3583 == NULL);
bool $tmp3585 = $tmp3584.value;
if ($tmp3585) goto block81; else goto block82;
block81:;
// line 945
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3586 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3586));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3587 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3587));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3588 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3588));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3589 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3590 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3590));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3591 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3591));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3592 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3592));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3593 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3593));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block82:;
// line 947
frost$collections$Array* $tmp3594 = *(&local18);
org$frostlang$frostc$IR$Value* $tmp3595 = *(&local19);
frost$collections$Array$add$frost$collections$Array$T($tmp3594, ((frost$core$Object*) $tmp3595));
goto block72;
block72:;
goto block70;
block71:;
// line 951
org$frostlang$frostc$MethodRef* $tmp3596 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3597 = &$tmp3596->value;
org$frostlang$frostc$MethodDecl* $tmp3598 = *$tmp3597;
org$frostlang$frostc$Annotations** $tmp3599 = &$tmp3598->annotations;
org$frostlang$frostc$Annotations* $tmp3600 = *$tmp3599;
frost$core$Bit $tmp3601 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3600);
frost$core$Bit $tmp3602 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3601);
bool $tmp3603 = $tmp3602.value;
if ($tmp3603) goto block86; else goto block85;
block86:;
org$frostlang$frostc$MethodRef* $tmp3604 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3605 = &$tmp3604->value;
org$frostlang$frostc$MethodDecl* $tmp3606 = *$tmp3605;
frost$core$Bit $tmp3607 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp3606);
frost$core$Bit $tmp3608 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3607);
bool $tmp3609 = $tmp3608.value;
if ($tmp3609) goto block83; else goto block85;
block83:;
// line 952
frost$core$Bit $tmp3610 = org$frostlang$frostc$Compiler$isClassContext$R$frost$core$Bit(param0);
bool $tmp3611 = $tmp3610.value;
if ($tmp3611) goto block87; else goto block88;
block87:;
// line 953
org$frostlang$frostc$MethodRef* $tmp3612 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3613 = &$tmp3612->value;
org$frostlang$frostc$MethodDecl* $tmp3614 = *$tmp3613;
frost$core$String* $tmp3615 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3614);
frost$core$String* $tmp3616 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3617, $tmp3615);
frost$core$String* $tmp3618 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3616, &$s3619);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3618);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3615));
// line 955
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3620 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3620));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3621 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3621));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3622 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3622));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3623 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3623));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3624 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3624));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3625 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3625));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3626 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3627 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3627));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block88:;
// line 957
frost$core$Bit $tmp3628 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp3629 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3628);
org$frostlang$frostc$MethodRef* $tmp3630 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3631 = &$tmp3630->value;
org$frostlang$frostc$MethodDecl* $tmp3632 = *$tmp3631;
frost$core$Weak** $tmp3633 = &$tmp3632->owner;
frost$core$Weak* $tmp3634 = *$tmp3633;
frost$core$Object* $tmp3635 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3634);
org$frostlang$frostc$Type** $tmp3636 = &((org$frostlang$frostc$ClassDecl*) $tmp3635)->type;
org$frostlang$frostc$Type* $tmp3637 = *$tmp3636;
org$frostlang$frostc$IR$Value* $tmp3638 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3629, $tmp3637);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3638));
org$frostlang$frostc$IR$Value* $tmp3639 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3639));
*(&local19) = $tmp3638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3638));
frost$core$Frost$unref$frost$core$Object$Q($tmp3635);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
// line 959
org$frostlang$frostc$IR$Value* $tmp3640 = *(&local19);
frost$core$Bit $tmp3641 = frost$core$Bit$init$builtin_bit($tmp3640 == NULL);
bool $tmp3642 = $tmp3641.value;
if ($tmp3642) goto block89; else goto block90;
block89:;
// line 960
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3643 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3643));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3644 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3644));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3645 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3645));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3646 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3646));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3647 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3647));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3648 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3648));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3649 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3649));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3650 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3650));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block90:;
// line 962
frost$collections$Array* $tmp3651 = *(&local18);
org$frostlang$frostc$IR$Value* $tmp3652 = *(&local19);
frost$collections$Array$add$frost$collections$Array$T($tmp3651, ((frost$core$Object*) $tmp3652));
goto block84;
block85:;
// line 1
// line 965
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3653 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3653));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block84;
block84:;
goto block70;
block70:;
// line 967
// line 968
org$frostlang$frostc$MethodRef* $tmp3654 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3655 = &$tmp3654->value;
org$frostlang$frostc$MethodDecl* $tmp3656 = *$tmp3655;
org$frostlang$frostc$Annotations** $tmp3657 = &$tmp3656->annotations;
org$frostlang$frostc$Annotations* $tmp3658 = *$tmp3657;
frost$core$Bit $tmp3659 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3658);
frost$core$Bit $tmp3660 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3659);
bool $tmp3661 = $tmp3660.value;
if ($tmp3661) goto block95; else goto block93;
block95:;
frost$core$Bit $tmp3662 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3663 = $tmp3662.value;
if ($tmp3663) goto block94; else goto block93;
block94:;
$fn3665 $tmp3664 = ($fn3665) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3666 = $tmp3664(param2);
frost$core$Bit $tmp3667 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp3666);
bool $tmp3668 = $tmp3667.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3666));
if ($tmp3668) goto block91; else goto block93;
block91:;
// line 969
frost$core$Int64 $tmp3669 = (frost$core$Int64) {0};
*(&local20) = $tmp3669;
goto block92;
block93:;
// line 1
// line 972
frost$core$Int64 $tmp3670 = (frost$core$Int64) {1};
*(&local20) = $tmp3670;
goto block92;
block92:;
// line 974
frost$core$Int64 $tmp3671 = (frost$core$Int64) {0};
ITable* $tmp3672 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3672->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3672 = $tmp3672->next;
}
$fn3674 $tmp3673 = $tmp3672->methods[0];
frost$core$Int64 $tmp3675 = $tmp3673(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp3676 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3677 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3671, $tmp3675, $tmp3676);
frost$core$Int64 $tmp3678 = $tmp3677.min;
*(&local21) = $tmp3678;
frost$core$Int64 $tmp3679 = $tmp3677.max;
frost$core$Bit $tmp3680 = $tmp3677.inclusive;
bool $tmp3681 = $tmp3680.value;
frost$core$Int64 $tmp3682 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3683 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3682);
if ($tmp3681) goto block99; else goto block100;
block99:;
int64_t $tmp3684 = $tmp3678.value;
int64_t $tmp3685 = $tmp3679.value;
bool $tmp3686 = $tmp3684 <= $tmp3685;
frost$core$Bit $tmp3687 = (frost$core$Bit) {$tmp3686};
bool $tmp3688 = $tmp3687.value;
if ($tmp3688) goto block96; else goto block97;
block100:;
int64_t $tmp3689 = $tmp3678.value;
int64_t $tmp3690 = $tmp3679.value;
bool $tmp3691 = $tmp3689 < $tmp3690;
frost$core$Bit $tmp3692 = (frost$core$Bit) {$tmp3691};
bool $tmp3693 = $tmp3692.value;
if ($tmp3693) goto block96; else goto block97;
block96:;
// line 975
frost$core$Int64 $tmp3694 = *(&local21);
ITable* $tmp3695 = param4->$class->itable;
while ($tmp3695->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp3695 = $tmp3695->next;
}
$fn3697 $tmp3696 = $tmp3695->methods[0];
frost$core$Object* $tmp3698 = $tmp3696(param4, $tmp3694);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3699 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3700 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp3701 = *(&local17);
frost$core$Int64 $tmp3702 = *(&local21);
org$frostlang$frostc$Type* $tmp3703 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3701, $tmp3702);
frost$core$Bit $tmp3704 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp3699, $tmp3700, $tmp3703, $tmp3704);
org$frostlang$frostc$IR$Value* $tmp3705 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp3698), $tmp3699);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3705));
org$frostlang$frostc$IR$Value* $tmp3706 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3706));
*(&local22) = $tmp3705;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3699));
frost$core$Frost$unref$frost$core$Object$Q($tmp3698);
// line 977
org$frostlang$frostc$IR$Value* $tmp3707 = *(&local22);
frost$core$Bit $tmp3708 = frost$core$Bit$init$builtin_bit($tmp3707 == NULL);
bool $tmp3709 = $tmp3708.value;
if ($tmp3709) goto block101; else goto block102;
block101:;
// line 978
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3710 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3711 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3711));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3712 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3712));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3713 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3713));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3714 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3714));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3715 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3715));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3716 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3716));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3717 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3717));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3718 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3718));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block102:;
// line 980
org$frostlang$frostc$IR$Value* $tmp3719 = *(&local22);
$fn3721 $tmp3720 = ($fn3721) $tmp3719->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3722 = $tmp3720($tmp3719);
org$frostlang$frostc$Type* $tmp3723 = *(&local16);
frost$core$Int64 $tmp3724 = *(&local21);
frost$core$Int64 $tmp3725 = *(&local20);
int64_t $tmp3726 = $tmp3724.value;
int64_t $tmp3727 = $tmp3725.value;
int64_t $tmp3728 = $tmp3726 + $tmp3727;
frost$core$Int64 $tmp3729 = (frost$core$Int64) {$tmp3728};
org$frostlang$frostc$Type* $tmp3730 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3723, $tmp3729);
ITable* $tmp3731 = ((frost$core$Equatable*) $tmp3722)->$class->itable;
while ($tmp3731->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3731 = $tmp3731->next;
}
$fn3733 $tmp3732 = $tmp3731->methods[1];
frost$core$Bit $tmp3734 = $tmp3732(((frost$core$Equatable*) $tmp3722), ((frost$core$Equatable*) $tmp3730));
bool $tmp3735 = $tmp3734.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3730));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3722));
if ($tmp3735) goto block103; else goto block104;
block103:;
// line 981
org$frostlang$frostc$IR$Value* $tmp3736 = *(&local22);
org$frostlang$frostc$Type* $tmp3737 = *(&local16);
frost$core$Int64 $tmp3738 = *(&local21);
frost$core$Int64 $tmp3739 = *(&local20);
int64_t $tmp3740 = $tmp3738.value;
int64_t $tmp3741 = $tmp3739.value;
int64_t $tmp3742 = $tmp3740 + $tmp3741;
frost$core$Int64 $tmp3743 = (frost$core$Int64) {$tmp3742};
org$frostlang$frostc$Type* $tmp3744 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3737, $tmp3743);
org$frostlang$frostc$IR$Value* $tmp3745 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3736, $tmp3744);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3745));
org$frostlang$frostc$IR$Value* $tmp3746 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
*(&local22) = $tmp3745;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3744));
goto block104;
block104:;
// line 983
org$frostlang$frostc$IR$Value* $tmp3747 = *(&local22);
frost$core$Bit $tmp3748 = frost$core$Bit$init$builtin_bit($tmp3747 == NULL);
bool $tmp3749 = $tmp3748.value;
if ($tmp3749) goto block105; else goto block106;
block105:;
// line 984
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3750 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3750));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3751 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3751));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3752 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3752));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3753 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3753));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3754 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3754));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3755 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3755));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3756 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3756));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3757 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3757));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3758 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3758));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block106:;
// line 986
frost$collections$Array* $tmp3759 = *(&local18);
org$frostlang$frostc$IR$Value* $tmp3760 = *(&local22);
frost$collections$Array$add$frost$collections$Array$T($tmp3759, ((frost$core$Object*) $tmp3760));
org$frostlang$frostc$IR$Value* $tmp3761 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3761));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block98;
block98:;
frost$core$Int64 $tmp3762 = *(&local21);
int64_t $tmp3763 = $tmp3679.value;
int64_t $tmp3764 = $tmp3762.value;
int64_t $tmp3765 = $tmp3763 - $tmp3764;
frost$core$Int64 $tmp3766 = (frost$core$Int64) {$tmp3765};
frost$core$UInt64 $tmp3767 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3766);
if ($tmp3681) goto block108; else goto block109;
block108:;
uint64_t $tmp3768 = $tmp3767.value;
uint64_t $tmp3769 = $tmp3683.value;
bool $tmp3770 = $tmp3768 >= $tmp3769;
frost$core$Bit $tmp3771 = (frost$core$Bit) {$tmp3770};
bool $tmp3772 = $tmp3771.value;
if ($tmp3772) goto block107; else goto block97;
block109:;
uint64_t $tmp3773 = $tmp3767.value;
uint64_t $tmp3774 = $tmp3683.value;
bool $tmp3775 = $tmp3773 > $tmp3774;
frost$core$Bit $tmp3776 = (frost$core$Bit) {$tmp3775};
bool $tmp3777 = $tmp3776.value;
if ($tmp3777) goto block107; else goto block97;
block107:;
int64_t $tmp3778 = $tmp3762.value;
int64_t $tmp3779 = $tmp3682.value;
int64_t $tmp3780 = $tmp3778 + $tmp3779;
frost$core$Int64 $tmp3781 = (frost$core$Int64) {$tmp3780};
*(&local21) = $tmp3781;
goto block96;
block97:;
// line 988
// line 989
frost$core$Bit $tmp3782 = *(&local15);
frost$core$Bit $tmp3783 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3782);
bool $tmp3784 = $tmp3783.value;
if ($tmp3784) goto block113; else goto block112;
block113:;
org$frostlang$frostc$MethodRef* $tmp3785 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3786 = &$tmp3785->value;
org$frostlang$frostc$MethodDecl* $tmp3787 = *$tmp3786;
frost$core$Bit $tmp3788 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit($tmp3787);
bool $tmp3789 = $tmp3788.value;
if ($tmp3789) goto block110; else goto block112;
block110:;
// line 990
// line 991
org$frostlang$frostc$MethodRef* $tmp3790 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3791 = &$tmp3790->value;
org$frostlang$frostc$MethodDecl* $tmp3792 = *$tmp3791;
frost$core$Weak** $tmp3793 = &$tmp3792->owner;
frost$core$Weak* $tmp3794 = *$tmp3793;
frost$core$Object* $tmp3795 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3794);
org$frostlang$frostc$ClassDecl$Kind* $tmp3796 = &((org$frostlang$frostc$ClassDecl*) $tmp3795)->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp3797 = *$tmp3796;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3798;
$tmp3798 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3798->value = $tmp3797;
frost$core$Int64 $tmp3799 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp3800 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp3799);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3801;
$tmp3801 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3801->value = $tmp3800;
ITable* $tmp3802 = ((frost$core$Equatable*) $tmp3798)->$class->itable;
while ($tmp3802->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3802 = $tmp3802->next;
}
$fn3804 $tmp3803 = $tmp3802->methods[0];
frost$core$Bit $tmp3805 = $tmp3803(((frost$core$Equatable*) $tmp3798), ((frost$core$Equatable*) $tmp3801));
bool $tmp3806 = $tmp3805.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3801)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3798)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3795);
if ($tmp3806) goto block114; else goto block116;
block114:;
// line 992
org$frostlang$frostc$IR* $tmp3807 = *(&local5);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3808 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3809 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp3810 = *(&local19);
org$frostlang$frostc$MethodRef* $tmp3811 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3812 = &$tmp3811->value;
org$frostlang$frostc$MethodDecl* $tmp3813 = *$tmp3812;
frost$core$Weak** $tmp3814 = &$tmp3813->owner;
frost$core$Weak* $tmp3815 = *$tmp3814;
frost$core$Object* $tmp3816 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3815);
org$frostlang$frostc$MethodRef* $tmp3817 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3818 = &$tmp3817->value;
org$frostlang$frostc$MethodDecl* $tmp3819 = *$tmp3818;
frost$core$Int64 $tmp3820 = org$frostlang$frostc$Compiler$getVTableIndex$org$frostlang$frostc$MethodDecl$R$frost$core$Int64(param0, $tmp3819);
org$frostlang$frostc$Type* $tmp3821 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp3822 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp3821);
frost$collections$ListView* $tmp3823 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp3822);
ITable* $tmp3824 = ((frost$collections$CollectionView*) $tmp3823)->$class->itable;
while ($tmp3824->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3824 = $tmp3824->next;
}
$fn3826 $tmp3825 = $tmp3824->methods[0];
frost$core$Int64 $tmp3827 = $tmp3825(((frost$collections$CollectionView*) $tmp3823));
int64_t $tmp3828 = $tmp3820.value;
int64_t $tmp3829 = $tmp3827.value;
int64_t $tmp3830 = $tmp3828 - $tmp3829;
frost$core$Int64 $tmp3831 = (frost$core$Int64) {$tmp3830};
org$frostlang$frostc$Type* $tmp3832 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type($tmp3808, $tmp3809, param1, $tmp3810, ((org$frostlang$frostc$ClassDecl*) $tmp3816), $tmp3831, $tmp3832);
$fn3834 $tmp3833 = ($fn3834) $tmp3807->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3835 = $tmp3833($tmp3807, $tmp3808);
*(&local24) = $tmp3835;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3821));
frost$core$Frost$unref$frost$core$Object$Q($tmp3816);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3808));
goto block115;
block116:;
// line 1
// line 999
org$frostlang$frostc$IR* $tmp3836 = *(&local5);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3837 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3838 = (frost$core$Int64) {12};
org$frostlang$frostc$IR$Value* $tmp3839 = *(&local19);
org$frostlang$frostc$MethodRef* $tmp3840 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3841 = &$tmp3840->value;
org$frostlang$frostc$MethodDecl* $tmp3842 = *$tmp3841;
frost$core$Int64 $tmp3843 = org$frostlang$frostc$Compiler$getVTableIndex$org$frostlang$frostc$MethodDecl$R$frost$core$Int64(param0, $tmp3842);
org$frostlang$frostc$Type* $tmp3844 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type($tmp3837, $tmp3838, param1, $tmp3839, $tmp3843, $tmp3844);
$fn3846 $tmp3845 = ($fn3846) $tmp3836->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3847 = $tmp3845($tmp3836, $tmp3837);
*(&local24) = $tmp3847;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3837));
goto block115;
block115:;
// line 1002
org$frostlang$frostc$IR* $tmp3848 = *(&local5);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3849 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3850 = (frost$core$Int64) {8};
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3851 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3852 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3853 = *(&local24);
org$frostlang$frostc$Type* $tmp3854 = *(&local16);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3851, $tmp3852, $tmp3853, $tmp3854);
frost$collections$Array* $tmp3855 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp3856 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3855);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp3849, $tmp3850, param1, $tmp3851, $tmp3856);
$fn3858 $tmp3857 = ($fn3858) $tmp3848->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3859 = $tmp3857($tmp3848, $tmp3849);
*(&local23) = $tmp3859;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3856));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3849));
goto block111;
block112:;
// line 1
// line 1006
org$frostlang$frostc$IR* $tmp3860 = *(&local5);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp3861 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3862 = (frost$core$Int64) {26};
org$frostlang$frostc$MethodRef* $tmp3863 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3864 = &$tmp3863->value;
org$frostlang$frostc$MethodDecl* $tmp3865 = *$tmp3864;
frost$collections$Array* $tmp3866 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp3867 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3866);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp3861, $tmp3862, param1, $tmp3865, $tmp3867);
$fn3869 $tmp3868 = ($fn3869) $tmp3860->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3870 = $tmp3868($tmp3860, $tmp3861);
*(&local23) = $tmp3870;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3861));
goto block111;
block111:;
// line 1009
org$frostlang$frostc$MethodRef* $tmp3871 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3872 = &$tmp3871->value;
org$frostlang$frostc$MethodDecl* $tmp3873 = *$tmp3872;
org$frostlang$frostc$Type** $tmp3874 = &$tmp3873->returnType;
org$frostlang$frostc$Type* $tmp3875 = *$tmp3874;
org$frostlang$frostc$Type* $tmp3876 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp3877 = ((frost$core$Equatable*) $tmp3875)->$class->itable;
while ($tmp3877->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3877 = $tmp3877->next;
}
$fn3879 $tmp3878 = $tmp3877->methods[1];
frost$core$Bit $tmp3880 = $tmp3878(((frost$core$Equatable*) $tmp3875), ((frost$core$Equatable*) $tmp3876));
bool $tmp3881 = $tmp3880.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
if ($tmp3881) goto block117; else goto block118;
block117:;
// line 1010
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp3882 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3883 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3884 = *(&local23);
org$frostlang$frostc$Type* $tmp3885 = *(&local16);
org$frostlang$frostc$Type* $tmp3886 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3885);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3882, $tmp3883, $tmp3884, $tmp3886);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3882));
org$frostlang$frostc$IR$Value* $tmp3887 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3887));
*(&local25) = $tmp3882;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3882));
// line 1011
org$frostlang$frostc$Type* $tmp3888 = *(&local16);
org$frostlang$frostc$Type* $tmp3889 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3888);
frost$core$Bit $tmp3890 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp3889);
bool $tmp3891 = $tmp3890.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3889));
if ($tmp3891) goto block119; else goto block120;
block119:;
// line 1012
frost$collections$Stack** $tmp3892 = &param0->enclosingContexts;
frost$collections$Stack* $tmp3893 = *$tmp3892;
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp3894 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp3895 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp3896 = *(&local25);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp3894, $tmp3895, $tmp3896);
frost$collections$Stack$push$frost$collections$Stack$T($tmp3893, ((frost$core$Object*) $tmp3894));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3894));
goto block120;
block120:;
// line 1014
org$frostlang$frostc$IR$Value* $tmp3897 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp3898 = org$frostlang$frostc$expression$Call$handleErrors$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3897);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3898));
org$frostlang$frostc$IR$Value* $tmp3899 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3899));
*(&local25) = $tmp3898;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3898));
// line 1015
org$frostlang$frostc$IR$Value* $tmp3900 = *(&local25);
frost$core$Bit $tmp3901 = frost$core$Bit$init$builtin_bit($tmp3900 == NULL);
bool $tmp3902 = $tmp3901.value;
if ($tmp3902) goto block121; else goto block122;
block121:;
// line 1016
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3903 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3903));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3904 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3904));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3905 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3905));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3906 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3906));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3907 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3907));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3908 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3908));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3909 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3909));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3910 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3910));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3911 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3911));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block122:;
// line 1018
org$frostlang$frostc$MethodRef* $tmp3912 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3913 = &$tmp3912->value;
org$frostlang$frostc$MethodDecl* $tmp3914 = *$tmp3913;
org$frostlang$frostc$MethodDecl$Kind* $tmp3915 = &$tmp3914->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3916 = *$tmp3915;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3917;
$tmp3917 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3917->value = $tmp3916;
frost$core$Int64 $tmp3918 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3919 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3918);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3920;
$tmp3920 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3920->value = $tmp3919;
ITable* $tmp3921 = ((frost$core$Equatable*) $tmp3917)->$class->itable;
while ($tmp3921->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3921 = $tmp3921->next;
}
$fn3923 $tmp3922 = $tmp3921->methods[1];
frost$core$Bit $tmp3924 = $tmp3922(((frost$core$Equatable*) $tmp3917), ((frost$core$Equatable*) $tmp3920));
bool $tmp3925 = $tmp3924.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3920)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3917)));
if ($tmp3925) goto block125; else goto block124;
block125:;
org$frostlang$frostc$Type* $tmp3926 = *(&local17);
org$frostlang$frostc$Type* $tmp3927 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3926);
org$frostlang$frostc$Type* $tmp3928 = *(&local16);
org$frostlang$frostc$Type* $tmp3929 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3928);
ITable* $tmp3930 = ((frost$core$Equatable*) $tmp3927)->$class->itable;
while ($tmp3930->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3930 = $tmp3930->next;
}
$fn3932 $tmp3931 = $tmp3930->methods[1];
frost$core$Bit $tmp3933 = $tmp3931(((frost$core$Equatable*) $tmp3927), ((frost$core$Equatable*) $tmp3929));
bool $tmp3934 = $tmp3933.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3929));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3927));
if ($tmp3934) goto block123; else goto block124;
block123:;
// line 1020
org$frostlang$frostc$IR$Value* $tmp3935 = *(&local25);
org$frostlang$frostc$Type* $tmp3936 = *(&local17);
org$frostlang$frostc$Type* $tmp3937 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3936);
org$frostlang$frostc$IR$Value* $tmp3938 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3935, $tmp3937);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3938));
org$frostlang$frostc$IR$Value* $tmp3939 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3939));
*(&local25) = $tmp3938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3937));
// line 1021
org$frostlang$frostc$IR$Value* $tmp3940 = *(&local25);
frost$core$Bit $tmp3941 = frost$core$Bit$init$builtin_bit($tmp3940 == NULL);
bool $tmp3942 = $tmp3941.value;
if ($tmp3942) goto block126; else goto block127;
block126:;
// line 1022
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3943 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3943));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3944 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3944));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3945 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3945));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3946 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3946));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3947 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3948 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3948));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3949 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3949));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3950 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3950));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3951 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3951));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block127:;
goto block124;
block124:;
// line 1025
org$frostlang$frostc$IR$Value* $tmp3952 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp3953 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3952, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3953));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3953));
org$frostlang$frostc$IR$Value* $tmp3954 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3954));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3955 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3955));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3956 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3956));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3957 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3957));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3958 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3958));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3959 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3959));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3960 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3960));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3961 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3961));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3962 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3962));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = $tmp3953;
goto block1;
block118:;
// line 1027
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp3963 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3964 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3963, $tmp3964);
ITable* $tmp3965 = ((frost$core$Equatable*) param5)->$class->itable;
while ($tmp3965->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3965 = $tmp3965->next;
}
$fn3967 $tmp3966 = $tmp3965->methods[1];
frost$core$Bit $tmp3968 = $tmp3966(((frost$core$Equatable*) param5), ((frost$core$Equatable*) $tmp3963));
bool $tmp3969 = $tmp3968.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3963));
if ($tmp3969) goto block128; else goto block129;
block128:;
// line 1028
org$frostlang$frostc$MethodRef* $tmp3970 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3971 = &$tmp3970->value;
org$frostlang$frostc$MethodDecl* $tmp3972 = *$tmp3971;
frost$core$String* $tmp3973 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3972);
frost$core$String* $tmp3974 = frost$core$String$get_asString$R$frost$core$String($tmp3973);
frost$core$String* $tmp3975 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3974, &$s3976);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3975);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3975));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3973));
goto block129;
block129:;
// line 1030
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3977 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3977));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3978 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3978));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3979 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3980 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3981 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3981));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3982 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3982));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3983 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3983));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3984 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3984));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp3985 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp3986 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp3987 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp3985, $tmp3986);
bool $tmp3988 = $tmp3987.value;
if ($tmp3988) goto block2; else goto block3;
block2:;
org$frostlang$frostc$IR$Value* $tmp3989 = *(&local0);
frost$core$Bit $tmp3990 = frost$core$Bit$init$builtin_bit($tmp3989 == NULL);
*(&local4) = $tmp3990;
goto block4;
block3:;
*(&local4) = $tmp3987;
goto block4;
block4:;
frost$core$Bit $tmp3991 = *(&local4);
bool $tmp3992 = $tmp3991.value;
if ($tmp3992) goto block5; else goto block6;
block5:;
*(&local3) = $tmp3991;
goto block7;
block6:;
org$frostlang$frostc$IR$Value* $tmp3993 = *(&local0);
frost$core$Bit $tmp3994 = frost$core$Bit$init$builtin_bit($tmp3993 != NULL);
*(&local3) = $tmp3994;
goto block7;
block7:;
frost$core$Bit $tmp3995 = *(&local3);
bool $tmp3996 = $tmp3995.value;
if ($tmp3996) goto block8; else goto block9;
block8:;
*(&local2) = $tmp3995;
goto block10;
block9:;
frost$core$Int64* $tmp3997 = &param0->errorCount;
frost$core$Int64 $tmp3998 = *$tmp3997;
frost$core$Int64 $tmp3999 = (frost$core$Int64) {0};
int64_t $tmp4000 = $tmp3998.value;
int64_t $tmp4001 = $tmp3999.value;
bool $tmp4002 = $tmp4000 > $tmp4001;
frost$core$Bit $tmp4003 = (frost$core$Bit) {$tmp4002};
*(&local2) = $tmp4003;
goto block10;
block10:;
frost$core$Bit $tmp4004 = *(&local2);
bool $tmp4005 = $tmp4004.value;
if ($tmp4005) goto block11; else goto block12;
block11:;
*(&local1) = $tmp4004;
goto block13;
block12:;
frost$core$Bit* $tmp4006 = &param0->reportErrors;
frost$core$Bit $tmp4007 = *$tmp4006;
frost$core$Bit $tmp4008 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp4007);
*(&local1) = $tmp4008;
goto block13;
block13:;
frost$core$Bit $tmp4009 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3986));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3985));
bool $tmp4010 = $tmp4009.value;
if ($tmp4010) goto block14; else goto block15;
block14:;
org$frostlang$frostc$IR$Value* $tmp4011 = *(&local0);
return $tmp4011;
block15:;
frost$core$Int64 $tmp4012 = (frost$core$Int64) {821};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4013, $tmp4012, &$s4014);
abort(); // unreachable

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$core$String* param3, frost$collections$ListView* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
// line 1036
$fn4016 $tmp4015 = ($fn4016) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4017 = $tmp4015(param2);
org$frostlang$frostc$ClassDecl* $tmp4018 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp4017);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4018));
org$frostlang$frostc$ClassDecl* $tmp4019 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4019));
*(&local0) = $tmp4018;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4017));
// line 1037
org$frostlang$frostc$ClassDecl* $tmp4020 = *(&local0);
frost$core$Bit $tmp4021 = frost$core$Bit$init$builtin_bit($tmp4020 == NULL);
bool $tmp4022 = $tmp4021.value;
if ($tmp4022) goto block1; else goto block2;
block1:;
// line 1038
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp4023 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4023));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 1040
org$frostlang$frostc$ClassDecl* $tmp4024 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp4025 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp4024);
org$frostlang$frostc$Symbol* $tmp4026 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp4025, param3);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4026));
org$frostlang$frostc$Symbol* $tmp4027 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4027));
*(&local1) = $tmp4026;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4026));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4025));
// line 1041
org$frostlang$frostc$Symbol* $tmp4028 = *(&local1);
frost$core$Bit $tmp4029 = frost$core$Bit$init$builtin_bit($tmp4028 == NULL);
bool $tmp4030 = $tmp4029.value;
if ($tmp4030) goto block3; else goto block4;
block3:;
// line 1042
org$frostlang$frostc$ClassDecl* $tmp4031 = *(&local0);
frost$core$String** $tmp4032 = &$tmp4031->name;
frost$core$String* $tmp4033 = *$tmp4032;
frost$core$String* $tmp4034 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4035, $tmp4033);
frost$core$String* $tmp4036 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4034, &$s4037);
frost$core$String* $tmp4038 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4036, param3);
frost$core$String* $tmp4039 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4038, &$s4040);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp4039);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4034));
// line 1043
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Symbol* $tmp4041 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4042 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4042));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// line 1045
org$frostlang$frostc$Symbol* $tmp4043 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp4044 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp4043);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4044));
org$frostlang$frostc$IR$Value* $tmp4045 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4045));
*(&local2) = $tmp4044;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4044));
// line 1046
org$frostlang$frostc$IR$Value* $tmp4046 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp4047 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4046, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4047));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4047));
org$frostlang$frostc$IR$Value* $tmp4048 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Symbol* $tmp4049 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4049));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4050 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4050));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp4047;

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$frost$core$Bit$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$FixedArray* param3, frost$core$Bit param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$FixedArray* local1 = NULL;
org$frostlang$frostc$Type* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
frost$core$Int64 local5;
org$frostlang$frostc$Pair* local6 = NULL;
org$frostlang$frostc$Position local7;
org$frostlang$frostc$ASTNode* local8 = NULL;
frost$core$String* local9 = NULL;
org$frostlang$frostc$Symbol* local10 = NULL;
frost$collections$Array* local11 = NULL;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$ClassDecl* local13 = NULL;
org$frostlang$frostc$Type* local14 = NULL;
org$frostlang$frostc$IR$Value* local15 = NULL;
org$frostlang$frostc$IR$Value* local16 = NULL;
org$frostlang$frostc$Type* local17 = NULL;
// line 1055
frost$core$Int64* $tmp4051 = &param2->$rawValue;
frost$core$Int64 $tmp4052 = *$tmp4051;
frost$core$Int64 $tmp4053 = (frost$core$Int64) {21};
frost$core$Bit $tmp4054 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4052, $tmp4053);
bool $tmp4055 = $tmp4054.value;
if ($tmp4055) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Position* $tmp4056 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp4057 = *$tmp4056;
frost$core$String** $tmp4058 = (frost$core$String**) (param2->$data + 16);
frost$core$String* $tmp4059 = *$tmp4058;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4059));
frost$core$String* $tmp4060 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4060));
*(&local0) = $tmp4059;
org$frostlang$frostc$FixedArray** $tmp4061 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp4062 = *$tmp4061;
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4062));
org$frostlang$frostc$FixedArray* $tmp4063 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4063));
*(&local1) = $tmp4062;
// line 1057
org$frostlang$frostc$Type* $tmp4064 = org$frostlang$frostc$Compiler$tryResolveType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4064));
org$frostlang$frostc$Type* $tmp4065 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4065));
*(&local2) = $tmp4064;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4064));
// line 1058
org$frostlang$frostc$Type* $tmp4066 = *(&local2);
frost$core$Bit $tmp4067 = frost$core$Bit$init$builtin_bit($tmp4066 != NULL);
bool $tmp4068 = $tmp4067.value;
if ($tmp4068) goto block3; else goto block4;
block3:;
// line 1059
org$frostlang$frostc$Type* $tmp4069 = *(&local2);
frost$core$Bit $tmp4070 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp4069);
frost$core$Bit $tmp4071 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp4070);
bool $tmp4072 = $tmp4071.value;
if ($tmp4072) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp4073 = (frost$core$Int64) {1059};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4074, $tmp4073);
abort(); // unreachable
block5:;
// line 1060
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp4075 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp4076 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp4077 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp4075, $tmp4076, $tmp4077);
org$frostlang$frostc$IR$Value* $tmp4078 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4075, ((frost$collections$ListView*) param3), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4078));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4075));
org$frostlang$frostc$Type* $tmp4079 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4079));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp4080 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4080));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4081 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4081));
*(&local0) = ((frost$core$String*) NULL);
return $tmp4078;
block4:;
// line 1062
frost$core$Bit $tmp4082 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp4083 = org$frostlang$frostc$Compiler$tryResolveType$org$frostlang$frostc$ASTNode$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, param2, $tmp4082);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4083));
org$frostlang$frostc$Type* $tmp4084 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4084));
*(&local2) = $tmp4083;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4083));
// line 1063
org$frostlang$frostc$Type* $tmp4085 = *(&local2);
frost$core$Bit $tmp4086 = frost$core$Bit$init$builtin_bit($tmp4085 != NULL);
bool $tmp4087 = $tmp4086.value;
if ($tmp4087) goto block7; else goto block8;
block7:;
// line 1065
org$frostlang$frostc$Scanner** $tmp4088 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp4089 = *$tmp4088;
org$frostlang$frostc$Type* $tmp4090 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp4089, param2);
org$frostlang$frostc$Type* $tmp4091 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp4090);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4091));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4090));
// line 1066
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp4092 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4092));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp4093 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4093));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4094 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4094));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// line 1069
frost$core$String* $tmp4095 = *(&local0);
frost$collections$Array* $tmp4096 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp4095, &$s4097);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4096));
frost$collections$Array* $tmp4098 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4098));
*(&local3) = $tmp4096;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4096));
// line 1070
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1071
frost$collections$Array* $tmp4099 = *(&local3);
ITable* $tmp4100 = ((frost$collections$CollectionView*) $tmp4099)->$class->itable;
while ($tmp4100->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4100 = $tmp4100->next;
}
$fn4102 $tmp4101 = $tmp4100->methods[0];
frost$core$Int64 $tmp4103 = $tmp4101(((frost$collections$CollectionView*) $tmp4099));
frost$core$Int64 $tmp4104 = (frost$core$Int64) {1};
frost$core$Bit $tmp4105 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4103, $tmp4104);
bool $tmp4106 = $tmp4105.value;
if ($tmp4106) goto block9; else goto block11;
block9:;
// line 1072
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4107 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4108 = (frost$core$Int64) {23};
frost$core$String* $tmp4109 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp4110 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4107, $tmp4108, param1, $tmp4109, $tmp4110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4107));
org$frostlang$frostc$ASTNode* $tmp4111 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4111));
*(&local4) = $tmp4107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4107));
goto block10;
block11:;
// line 1
// line 1075
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4112 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4113 = (frost$core$Int64) {22};
frost$collections$Array* $tmp4114 = *(&local3);
frost$core$Int64 $tmp4115 = (frost$core$Int64) {0};
frost$core$Object* $tmp4116 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4114, $tmp4115);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4112, $tmp4113, param1, ((frost$core$String*) $tmp4116));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4112));
org$frostlang$frostc$ASTNode* $tmp4117 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4117));
*(&local4) = $tmp4112;
frost$core$Frost$unref$frost$core$Object$Q($tmp4116);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4112));
// line 1076
frost$core$Int64 $tmp4118 = (frost$core$Int64) {1};
frost$collections$Array* $tmp4119 = *(&local3);
ITable* $tmp4120 = ((frost$collections$CollectionView*) $tmp4119)->$class->itable;
while ($tmp4120->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4120 = $tmp4120->next;
}
$fn4122 $tmp4121 = $tmp4120->methods[0];
frost$core$Int64 $tmp4123 = $tmp4121(((frost$collections$CollectionView*) $tmp4119));
frost$core$Int64 $tmp4124 = (frost$core$Int64) {1};
int64_t $tmp4125 = $tmp4123.value;
int64_t $tmp4126 = $tmp4124.value;
int64_t $tmp4127 = $tmp4125 - $tmp4126;
frost$core$Int64 $tmp4128 = (frost$core$Int64) {$tmp4127};
frost$core$Bit $tmp4129 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp4130 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp4118, $tmp4128, $tmp4129);
frost$core$Int64 $tmp4131 = $tmp4130.min;
*(&local5) = $tmp4131;
frost$core$Int64 $tmp4132 = $tmp4130.max;
frost$core$Bit $tmp4133 = $tmp4130.inclusive;
bool $tmp4134 = $tmp4133.value;
frost$core$Int64 $tmp4135 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp4136 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp4135);
if ($tmp4134) goto block15; else goto block16;
block15:;
int64_t $tmp4137 = $tmp4131.value;
int64_t $tmp4138 = $tmp4132.value;
bool $tmp4139 = $tmp4137 <= $tmp4138;
frost$core$Bit $tmp4140 = (frost$core$Bit) {$tmp4139};
bool $tmp4141 = $tmp4140.value;
if ($tmp4141) goto block12; else goto block13;
block16:;
int64_t $tmp4142 = $tmp4131.value;
int64_t $tmp4143 = $tmp4132.value;
bool $tmp4144 = $tmp4142 < $tmp4143;
frost$core$Bit $tmp4145 = (frost$core$Bit) {$tmp4144};
bool $tmp4146 = $tmp4145.value;
if ($tmp4146) goto block12; else goto block13;
block12:;
// line 1077
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4147 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4148 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp4149 = *(&local4);
frost$collections$Array* $tmp4150 = *(&local3);
frost$core$Int64 $tmp4151 = *(&local5);
frost$core$Object* $tmp4152 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4150, $tmp4151);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp4147, $tmp4148, param1, $tmp4149, ((frost$core$String*) $tmp4152));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4147));
org$frostlang$frostc$ASTNode* $tmp4153 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4153));
*(&local4) = $tmp4147;
frost$core$Frost$unref$frost$core$Object$Q($tmp4152);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4147));
goto block14;
block14:;
frost$core$Int64 $tmp4154 = *(&local5);
int64_t $tmp4155 = $tmp4132.value;
int64_t $tmp4156 = $tmp4154.value;
int64_t $tmp4157 = $tmp4155 - $tmp4156;
frost$core$Int64 $tmp4158 = (frost$core$Int64) {$tmp4157};
frost$core$UInt64 $tmp4159 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp4158);
if ($tmp4134) goto block18; else goto block19;
block18:;
uint64_t $tmp4160 = $tmp4159.value;
uint64_t $tmp4161 = $tmp4136.value;
bool $tmp4162 = $tmp4160 >= $tmp4161;
frost$core$Bit $tmp4163 = (frost$core$Bit) {$tmp4162};
bool $tmp4164 = $tmp4163.value;
if ($tmp4164) goto block17; else goto block13;
block19:;
uint64_t $tmp4165 = $tmp4159.value;
uint64_t $tmp4166 = $tmp4136.value;
bool $tmp4167 = $tmp4165 > $tmp4166;
frost$core$Bit $tmp4168 = (frost$core$Bit) {$tmp4167};
bool $tmp4169 = $tmp4168.value;
if ($tmp4169) goto block17; else goto block13;
block17:;
int64_t $tmp4170 = $tmp4154.value;
int64_t $tmp4171 = $tmp4135.value;
int64_t $tmp4172 = $tmp4170 + $tmp4171;
frost$core$Int64 $tmp4173 = (frost$core$Int64) {$tmp4172};
*(&local5) = $tmp4173;
goto block12;
block13:;
// line 1079
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp4174 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4175 = (frost$core$Int64) {17};
org$frostlang$frostc$ASTNode* $tmp4176 = *(&local4);
frost$collections$Array* $tmp4177 = *(&local3);
frost$collections$Array* $tmp4178 = *(&local3);
ITable* $tmp4179 = ((frost$collections$CollectionView*) $tmp4178)->$class->itable;
while ($tmp4179->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4179 = $tmp4179->next;
}
$fn4181 $tmp4180 = $tmp4179->methods[0];
frost$core$Int64 $tmp4182 = $tmp4180(((frost$collections$CollectionView*) $tmp4178));
frost$core$Int64 $tmp4183 = (frost$core$Int64) {1};
int64_t $tmp4184 = $tmp4182.value;
int64_t $tmp4185 = $tmp4183.value;
int64_t $tmp4186 = $tmp4184 - $tmp4185;
frost$core$Int64 $tmp4187 = (frost$core$Int64) {$tmp4186};
frost$core$Object* $tmp4188 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4177, $tmp4187);
org$frostlang$frostc$FixedArray* $tmp4189 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4174, $tmp4175, param1, $tmp4176, ((frost$core$String*) $tmp4188), $tmp4189);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4174));
org$frostlang$frostc$ASTNode* $tmp4190 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4190));
*(&local4) = $tmp4174;
frost$core$Frost$unref$frost$core$Object$Q($tmp4188);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4174));
goto block10;
block10:;
// line 1082
org$frostlang$frostc$ASTNode* $tmp4191 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp4192 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$frost$core$Bit$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4191, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4192));
org$frostlang$frostc$ASTNode* $tmp4193 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4193));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4194 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4194));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp4195 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4195));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp4196 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4196));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4197));
*(&local0) = ((frost$core$String*) NULL);
return $tmp4192;
block1:;
// line 1085
org$frostlang$frostc$Pair* $tmp4198 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, param2);
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4198));
org$frostlang$frostc$Pair* $tmp4199 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4199));
*(&local6) = $tmp4198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4198));
// line 1086
org$frostlang$frostc$Pair* $tmp4200 = *(&local6);
frost$core$Bit $tmp4201 = frost$core$Bit$init$builtin_bit($tmp4200 != NULL);
bool $tmp4202 = $tmp4201.value;
if ($tmp4202) goto block20; else goto block21;
block20:;
// line 1087
org$frostlang$frostc$Pair* $tmp4203 = *(&local6);
frost$core$Object** $tmp4204 = &$tmp4203->first;
frost$core$Object* $tmp4205 = *$tmp4204;
org$frostlang$frostc$Pair* $tmp4206 = *(&local6);
frost$core$Object** $tmp4207 = &$tmp4206->second;
frost$core$Object* $tmp4208 = *$tmp4207;
org$frostlang$frostc$IR$Value* $tmp4209 = org$frostlang$frostc$Compiler$compileChoiceCaseReference$org$frostlang$frostc$Position$org$frostlang$frostc$Type$org$frostlang$frostc$ChoiceCase$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$Type*) $tmp4205), ((org$frostlang$frostc$ChoiceCase*) $tmp4208), param3, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4209));
org$frostlang$frostc$Pair* $tmp4210 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4210));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp4209;
block21:;
// line 1089
frost$core$Int64* $tmp4211 = &param2->$rawValue;
frost$core$Int64 $tmp4212 = *$tmp4211;
frost$core$Int64 $tmp4213 = (frost$core$Int64) {16};
frost$core$Bit $tmp4214 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4212, $tmp4213);
bool $tmp4215 = $tmp4214.value;
if ($tmp4215) goto block23; else goto block22;
block23:;
org$frostlang$frostc$Position* $tmp4216 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp4217 = *$tmp4216;
*(&local7) = $tmp4217;
org$frostlang$frostc$ASTNode** $tmp4218 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp4219 = *$tmp4218;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4219));
org$frostlang$frostc$ASTNode* $tmp4220 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4220));
*(&local8) = $tmp4219;
frost$core$String** $tmp4221 = (frost$core$String**) (param2->$data + 24);
frost$core$String* $tmp4222 = *$tmp4221;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4222));
frost$core$String* $tmp4223 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4223));
*(&local9) = $tmp4222;
// line 1091
org$frostlang$frostc$ASTNode* $tmp4224 = *(&local8);
frost$core$Int64* $tmp4225 = &$tmp4224->$rawValue;
frost$core$Int64 $tmp4226 = *$tmp4225;
frost$core$Int64 $tmp4227 = (frost$core$Int64) {41};
frost$core$Bit $tmp4228 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4226, $tmp4227);
bool $tmp4229 = $tmp4228.value;
if ($tmp4229) goto block25; else goto block24;
block25:;
// line 1093
org$frostlang$frostc$SymbolTable** $tmp4230 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp4231 = *$tmp4230;
org$frostlang$frostc$Symbol* $tmp4232 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp4231, &$s4233);
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4232));
org$frostlang$frostc$Symbol* $tmp4234 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4234));
*(&local10) = $tmp4232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4232));
// line 1094
org$frostlang$frostc$Symbol* $tmp4235 = *(&local10);
frost$core$Bit $tmp4236 = frost$core$Bit$init$builtin_bit($tmp4235 == NULL);
bool $tmp4237 = $tmp4236.value;
if ($tmp4237) goto block26; else goto block27;
block26:;
// line 1095
org$frostlang$frostc$SymbolTable** $tmp4238 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp4239 = *$tmp4238;
org$frostlang$frostc$Symbol* $tmp4240 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp4239, &$s4241);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4240));
org$frostlang$frostc$Symbol* $tmp4242 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4242));
*(&local10) = $tmp4240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4240));
goto block27;
block27:;
// line 1097
org$frostlang$frostc$Symbol* $tmp4243 = *(&local10);
frost$core$Bit $tmp4244 = frost$core$Bit$init$builtin_bit($tmp4243 == NULL);
bool $tmp4245 = $tmp4244.value;
if ($tmp4245) goto block28; else goto block29;
block28:;
// line 1098
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Symbol* $tmp4246 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4246));
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp4247 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4247));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4248 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4248));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp4249 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4249));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block29:;
// line 1100
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4250 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4250);
*(&local11) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4250));
frost$collections$Array* $tmp4251 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4251));
*(&local11) = $tmp4250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4250));
// line 1101
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
// line 1102
org$frostlang$frostc$Symbol* $tmp4252 = *(&local10);
org$frostlang$frostc$Symbol$Kind* $tmp4253 = &$tmp4252->kind;
org$frostlang$frostc$Symbol$Kind $tmp4254 = *$tmp4253;
frost$core$Int64 $tmp4255 = $tmp4254.$rawValue;
frost$core$Int64 $tmp4256 = (frost$core$Int64) {9};
frost$core$Bit $tmp4257 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4255, $tmp4256);
bool $tmp4258 = $tmp4257.value;
if ($tmp4258) goto block31; else goto block32;
block31:;
// line 1104
org$frostlang$frostc$Symbol* $tmp4259 = *(&local10);
org$frostlang$frostc$Type** $tmp4260 = &((org$frostlang$frostc$Variable*) $tmp4259)->type;
org$frostlang$frostc$Type* $tmp4261 = *$tmp4260;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4261));
org$frostlang$frostc$Type* $tmp4262 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4262));
*(&local12) = $tmp4261;
goto block30;
block32:;
frost$core$Int64 $tmp4263 = (frost$core$Int64) {2};
frost$core$Bit $tmp4264 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4255, $tmp4263);
bool $tmp4265 = $tmp4264.value;
if ($tmp4265) goto block33; else goto block34;
block33:;
// line 1107
org$frostlang$frostc$Symbol* $tmp4266 = *(&local10);
org$frostlang$frostc$Type** $tmp4267 = &((org$frostlang$frostc$FieldDecl*) $tmp4266)->type;
org$frostlang$frostc$Type* $tmp4268 = *$tmp4267;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4268));
org$frostlang$frostc$Type* $tmp4269 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4269));
*(&local12) = $tmp4268;
goto block30;
block34:;
// line 1110
frost$core$Int64 $tmp4270 = (frost$core$Int64) {1110};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4271, $tmp4270);
abort(); // unreachable
block30:;
// line 1113
org$frostlang$frostc$Type* $tmp4272 = *(&local12);
org$frostlang$frostc$ClassDecl* $tmp4273 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp4272);
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4273));
org$frostlang$frostc$ClassDecl* $tmp4274 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4274));
*(&local13) = $tmp4273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4273));
// line 1114
org$frostlang$frostc$ClassDecl* $tmp4275 = *(&local13);
frost$core$Bit $tmp4276 = frost$core$Bit$init$builtin_bit($tmp4275 == NULL);
bool $tmp4277 = $tmp4276.value;
if ($tmp4277) goto block35; else goto block36;
block35:;
// line 1115
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp4278 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4278));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp4279 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4279));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp4280 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4280));
*(&local11) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp4281 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4281));
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp4282 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4282));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4283 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4283));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp4284 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4284));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block36:;
// line 1117
org$frostlang$frostc$Type* $tmp4285 = *(&local12);
org$frostlang$frostc$ClassDecl* $tmp4286 = *(&local13);
org$frostlang$frostc$Type** $tmp4287 = &$tmp4286->rawSuper;
org$frostlang$frostc$Type* $tmp4288 = *$tmp4287;
org$frostlang$frostc$Type* $tmp4289 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp4285, $tmp4288);
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4289));
org$frostlang$frostc$Type* $tmp4290 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4290));
*(&local14) = $tmp4289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4289));
// line 1118
org$frostlang$frostc$Position $tmp4291 = *(&local7);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp4292 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp4293 = (frost$core$Int64) {13};
org$frostlang$frostc$Type* $tmp4294 = *(&local14);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp4292, $tmp4293, $tmp4294);
frost$core$String* $tmp4295 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp4296 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp4291, $tmp4292, $tmp4295, ((frost$collections$ListView*) param3), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4292));
org$frostlang$frostc$Type* $tmp4297 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4297));
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4298 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4298));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp4299 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4299));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp4300 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
*(&local11) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp4301 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp4302 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4302));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4303 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4303));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp4304 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4304));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp4296;
block24:;
frost$core$String* $tmp4305 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4305));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4306 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block22;
block22:;
// line 1124
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp4307 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp4308 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp4307, $tmp4308);
org$frostlang$frostc$IR$Value* $tmp4309 = org$frostlang$frostc$Compiler$compileMethodExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp4307);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4309));
org$frostlang$frostc$IR$Value* $tmp4310 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4310));
*(&local15) = $tmp4309;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4307));
// line 1125
org$frostlang$frostc$IR$Value* $tmp4311 = *(&local15);
frost$core$Bit $tmp4312 = frost$core$Bit$init$builtin_bit($tmp4311 == NULL);
bool $tmp4313 = $tmp4312.value;
if ($tmp4313) goto block37; else goto block38;
block37:;
// line 1126
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp4314 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4314));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp4315 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4315));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block38:;
// line 1128
org$frostlang$frostc$IR$Value* $tmp4316 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp4317 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4316, ((frost$collections$ListView*) param3), param5);
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4317));
org$frostlang$frostc$IR$Value* $tmp4318 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4318));
*(&local16) = $tmp4317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4317));
// line 1129
bool $tmp4319 = param4.value;
if ($tmp4319) goto block41; else goto block40;
block41:;
org$frostlang$frostc$IR$Value* $tmp4320 = *(&local16);
frost$core$Bit $tmp4321 = frost$core$Bit$init$builtin_bit($tmp4320 != NULL);
bool $tmp4322 = $tmp4321.value;
if ($tmp4322) goto block39; else goto block40;
block39:;
// line 1130
org$frostlang$frostc$IR$Value* $tmp4323 = *(&local16);
$fn4325 $tmp4324 = ($fn4325) $tmp4323->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4326 = $tmp4324($tmp4323);
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4326));
org$frostlang$frostc$Type* $tmp4327 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4327));
*(&local17) = $tmp4326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4326));
// line 1131
org$frostlang$frostc$Type* $tmp4328 = *(&local17);
org$frostlang$frostc$Type* $tmp4329 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp4330 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp4329);
frost$core$Bit $tmp4331 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp4328, $tmp4330);
bool $tmp4332 = $tmp4331.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4330));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4329));
if ($tmp4332) goto block42; else goto block44;
block44:;
org$frostlang$frostc$Type* $tmp4333 = *(&local17);
org$frostlang$frostc$Type$Kind* $tmp4334 = &$tmp4333->typeKind;
org$frostlang$frostc$Type$Kind $tmp4335 = *$tmp4334;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4336;
$tmp4336 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4336->value = $tmp4335;
frost$core$Int64 $tmp4337 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp4338 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp4337);
org$frostlang$frostc$Type$Kind$wrapper* $tmp4339;
$tmp4339 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4339->value = $tmp4338;
ITable* $tmp4340 = ((frost$core$Equatable*) $tmp4336)->$class->itable;
while ($tmp4340->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4340 = $tmp4340->next;
}
$fn4342 $tmp4341 = $tmp4340->methods[0];
frost$core$Bit $tmp4343 = $tmp4341(((frost$core$Equatable*) $tmp4336), ((frost$core$Equatable*) $tmp4339));
bool $tmp4344 = $tmp4343.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4339)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4336)));
if ($tmp4344) goto block45; else goto block43;
block45:;
org$frostlang$frostc$Type* $tmp4345 = *(&local17);
org$frostlang$frostc$FixedArray* $tmp4346 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT($tmp4345);
frost$core$Int64 $tmp4347 = (frost$core$Int64) {0};
frost$core$Object* $tmp4348 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4346, $tmp4347);
frost$core$String** $tmp4349 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp4348))->name;
frost$core$String* $tmp4350 = *$tmp4349;
frost$core$Bit $tmp4351 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp4350, &$s4352);
bool $tmp4353 = $tmp4351.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp4348);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4346));
if ($tmp4353) goto block42; else goto block43;
block42:;
// line 1134
org$frostlang$frostc$Type* $tmp4354 = *(&local17);
frost$core$String** $tmp4355 = &((org$frostlang$frostc$Symbol*) $tmp4354)->name;
frost$core$String* $tmp4356 = *$tmp4355;
frost$core$String* $tmp4357 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4358, $tmp4356);
frost$core$String* $tmp4359 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4357, &$s4360);
frost$core$String* $tmp4361 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4362, $tmp4359);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp4361);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4359));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4357));
goto block43;
block43:;
org$frostlang$frostc$Type* $tmp4363 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4363));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
goto block40;
block40:;
// line 1138
org$frostlang$frostc$IR$Value* $tmp4364 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4364));
org$frostlang$frostc$IR$Value* $tmp4365 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4365));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp4366 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4366));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp4367 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4367));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp4364;

}
void org$frostlang$frostc$expression$Call$init(org$frostlang$frostc$expression$Call* param0) {

return;

}
void org$frostlang$frostc$expression$Call$cleanup(org$frostlang$frostc$expression$Call* param0) {

// line 20
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

