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
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"
#include "frost/io/Console.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "frost/collections/Stack.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Formattable.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "org/frostlang/frostc/Variable.h"
#include "org/frostlang/frostc/Variable/Storage.h"
#include "org/frostlang/frostc/expression/Dot.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "org/frostlang/frostc/Scanner.h"
#include "org/frostlang/frostc/Symbol/Kind.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Call$class_type org$frostlang$frostc$expression$Call$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Call$cleanup} };

typedef frost$core$Bit (*$fn47)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn62)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn86)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn110)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn127)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn147)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn173)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn198)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn219)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn233)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn256)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn279)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn301)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn312)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn338)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn350)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn369)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn388)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn402)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn424)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn447)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn472)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn484)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn531)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn540)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn562)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn587)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn804)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn813)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn836)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn861)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn924)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn956)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1008)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1012)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1017)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1057)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1061)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1066)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn1087)(org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn1091)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$Int64 (*$fn1101)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1135)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1139)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1144)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1150)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn1161)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn1196)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1212)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1267)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1277)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1281)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1286)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1294)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1298)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1314)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1326)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1355)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1388)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1411)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn1528)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1547)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1564)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn1583)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1608)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn1617)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1629)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1635)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1658)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn1703)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1710)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1726)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1767)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1778)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1804)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1814)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1831)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1835)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1840)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1845)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1858)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1863)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1880)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1895)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1902)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1907)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1988)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2003)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2010)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2015)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2024)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn2096)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2113)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2192)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2209)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2295)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2318)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn2330)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2334)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2339)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2390)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2396)(org$frostlang$frostc$Compiler$TypeContext*);
typedef frost$core$Int64 (*$fn2430)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2454)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn2467)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2471)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2476)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2528)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2534)(org$frostlang$frostc$Compiler$TypeContext*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2627)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn2670)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2692)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2696)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2701)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2714)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2719)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2740)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2751)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2756)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn2771)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2815)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2819)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2824)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2837)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2842)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2853)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2863)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2892)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2903)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2908)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2919)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2929)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn2972)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3016)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3038)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3087)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3101)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn3130)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn3139)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3257)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn3371)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn3380)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn3403)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn3427)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3439)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3510)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3532)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3540)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3552)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3564)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3575)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn3585)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3629)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3638)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3673)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3722)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn3808)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3828)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3887)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn4031)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4048)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c", 36, -3986479872985642702, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static frost$core$String $s215 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x72", 5, 20924392920, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63\x3a\x20", 31, 5572221770796053896, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static frost$core$String $s639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s796 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s974 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x65\x3a\x20\x63\x61\x6e\x27\x74\x20\x63\x6f\x65\x72\x63\x65\x20\x27", 20, -7237900421143798122, NULL };
static frost$core$String $s1166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x74\x6f\x20", 5, 14602620331, NULL };
static frost$core$String $s1170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1559 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x66\x69\x6e\x64\x42\x65\x73\x74\x4d\x65\x74\x68\x6f\x64\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x6d\x65\x74\x68\x6f\x64\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3e\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x41\x72\x67\x75\x6d\x65\x6e\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x2c\x20\x61\x72\x67\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f", 561, 3652659893303705938, NULL };
static frost$core$String $s1574 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static frost$core$String $s1576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static frost$core$String $s1592 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 16, 4303665098026904440, NULL };
static frost$core$String $s1594 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static frost$core$String $s1600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s1612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static frost$core$String $s1614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static frost$core$String $s1622 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72", 7, 227281454102470, NULL };
static frost$core$String $s1782 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x61\x72\x67\x65\x74", 6, 2290904182948, NULL };
static frost$core$String $s1837 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x20\x74\x61\x72\x67\x65\x74", 24, 8706842098394974193, NULL };
static frost$core$String $s1842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x74\x61\x72\x67\x65\x74", 27, -7788775699050637059, NULL };
static frost$core$String $s1847 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x6d\x65\x72\x67\x65", 18, 706487662591854902, NULL };
static frost$core$String $s2140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static frost$core$String $s2142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s2151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static frost$core$String $s2238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s2247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static frost$core$String $s2365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static frost$core$String $s2386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static frost$core$String $s2502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2522 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static frost$core$String $s2524 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2593 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x69\x74\x20\x66\x6f\x72\x20", 12, -9112629214783660015, NULL };
static frost$core$String $s2605 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2656 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20", 12, 8187822430156838052, NULL };
static frost$core$String $s2658 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2659 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3f\x20\x6e\x75\x6c\x6c", 11, 8052739787235849537, NULL };
static frost$core$String $s2703 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3f\x20\x65\x72\x72\x6f\x72", 12, 1669979266660959244, NULL };
static frost$core$String $s2743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2782 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s2791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s2801 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2821 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x79\x62\x65\x20\x73\x75\x63\x63\x65\x73\x73", 13, 1014790702408506444, NULL };
static frost$core$String $s2826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x79\x62\x65\x20\x65\x72\x72\x6f\x72", 11, 6235211091261808005, NULL };
static frost$core$String $s2895 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3090 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static frost$core$String $s3096 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static frost$core$String $s3116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x73\x20", 9, 1451156555704250829, NULL };
static frost$core$String $s3122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s3134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static frost$core$String $s3136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static frost$core$String $s3144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static frost$core$String $s3169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20", 7, 142360281799925, NULL };
static frost$core$String $s3171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x73\x74\x61\x6e\x63\x65", 8, 22203976303606054, NULL };
static frost$core$String $s3244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3276 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s3682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static frost$core$String $s3719 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x72\x61\x77\x4d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2c\x20\x61\x72\x67\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 375, 7210268903382943599, NULL };
static frost$core$String $s3741 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static frost$core$String $s3743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static frost$core$String $s3746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3780 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3803 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s3939 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s3947 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s3977 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s4065 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s4067 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x75\x6e\x75\x73\x65\x64\x20\x61\x6e\x64\x20\x69\x73\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x27\x74\x72\x79\x27\x20\x62\x6c\x6f\x63\x6b", 43, 4374382365862179306, NULL };
static frost$core$String $s4069 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 21, -4228310936216902871, NULL };

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
org$frostlang$frostc$FixedArray** $tmp11 = &$tmp10->subtypes;
org$frostlang$frostc$FixedArray* $tmp12 = *$tmp11;
frost$core$Int64 $tmp13 = (frost$core$Int64) {1};
frost$core$Object* $tmp14 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp12, $tmp13);
org$frostlang$frostc$Type* $tmp15 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, ((org$frostlang$frostc$Type*) $tmp14));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlang$frostc$Type* $tmp16 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local1) = $tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q($tmp14);
goto block2;
block3:;
// line 1
// line 30
org$frostlang$frostc$Type** $tmp17 = &param3->target;
org$frostlang$frostc$Type* $tmp18 = *$tmp17;
org$frostlang$frostc$FixedArray** $tmp19 = &$tmp18->subtypes;
org$frostlang$frostc$FixedArray* $tmp20 = *$tmp19;
frost$core$Int64 $tmp21 = (frost$core$Int64) {1};
frost$core$Object* $tmp22 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp20, $tmp21);
org$frostlang$frostc$FixedArray** $tmp23 = &((org$frostlang$frostc$Type*) $tmp22)->subtypes;
org$frostlang$frostc$FixedArray* $tmp24 = *$tmp23;
frost$core$Int64 $tmp25 = (frost$core$Int64) {1};
frost$core$Object* $tmp26 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp24, $tmp25);
org$frostlang$frostc$Type* $tmp27 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, ((org$frostlang$frostc$Type*) $tmp26));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
org$frostlang$frostc$Type* $tmp28 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local1) = $tmp27;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q($tmp26);
frost$core$Frost$unref$frost$core$Object$Q($tmp22);
goto block2;
block2:;
// line 32
org$frostlang$frostc$Type* $tmp29 = *(&local1);
frost$core$Bit $tmp30 = frost$core$Bit$init$builtin_bit($tmp29 == NULL);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block4; else goto block5;
block4:;
// line 33
org$frostlang$frostc$Pair* $tmp32 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp33 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp34;
$tmp34 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp34->value = $tmp33;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp32, ((frost$core$Object*) $tmp34), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
org$frostlang$frostc$Type* $tmp35 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp36 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp32;
block5:;
// line 35
org$frostlang$frostc$Type** $tmp37 = &param3->target;
org$frostlang$frostc$Type* $tmp38 = *$tmp37;
org$frostlang$frostc$Type$Kind* $tmp39 = &$tmp38->typeKind;
org$frostlang$frostc$Type$Kind $tmp40 = *$tmp39;
org$frostlang$frostc$Type$Kind$wrapper* $tmp41;
$tmp41 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp41->value = $tmp40;
frost$core$Int64 $tmp42 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp43 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp42);
org$frostlang$frostc$Type$Kind$wrapper* $tmp44;
$tmp44 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp44->value = $tmp43;
ITable* $tmp45 = ((frost$core$Equatable*) $tmp41)->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp45 = $tmp45->next;
}
$fn47 $tmp46 = $tmp45->methods[0];
frost$core$Bit $tmp48 = $tmp46(((frost$core$Equatable*) $tmp41), ((frost$core$Equatable*) $tmp44));
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s51, $tmp50);
abort(); // unreachable
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp44)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp41)));
// line 36
org$frostlang$frostc$MethodDecl** $tmp52 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp53 = *$tmp52;
frost$core$String** $tmp54 = &((org$frostlang$frostc$Symbol*) $tmp53)->name;
frost$core$String* $tmp55 = *$tmp54;
frost$core$Bit $tmp56 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp55, &$s57);
bool $tmp58 = $tmp56.value;
if ($tmp58) goto block9; else goto block10;
block9:;
// line 38
frost$core$Int64 $tmp59 = (frost$core$Int64) {0};
ITable* $tmp60 = param4->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[0];
frost$core$Object* $tmp63 = $tmp61(param4, $tmp59);
org$frostlang$frostc$Compiler$TypeContext* $tmp64 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp65 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp66 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp67 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp64, $tmp65, $tmp66, $tmp67);
org$frostlang$frostc$IR$Value* $tmp68 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp63), $tmp64);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
org$frostlang$frostc$IR$Value* $tmp69 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local2) = $tmp68;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$core$Frost$unref$frost$core$Object$Q($tmp63);
// line 40
org$frostlang$frostc$IR$Value* $tmp70 = *(&local2);
frost$core$Bit $tmp71 = frost$core$Bit$init$builtin_bit($tmp70 == NULL);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block11; else goto block12;
block11:;
// line 41
org$frostlang$frostc$Pair* $tmp73 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp74 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp75;
$tmp75 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp75->value = $tmp74;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp73, ((frost$core$Object*) $tmp75), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
org$frostlang$frostc$IR$Value* $tmp76 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp77 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp78 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp73;
block12:;
// line 43
org$frostlang$frostc$IR* $tmp79 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp80 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp81 = (frost$core$Int64) {17};
org$frostlang$frostc$IR$Value* $tmp82 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp83 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp82);
org$frostlang$frostc$Type* $tmp84 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp80, $tmp81, param1, $tmp83, $tmp84);
$fn86 $tmp85 = ($fn86) $tmp79->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp87 = $tmp85($tmp79, $tmp80);
*(&local3) = $tmp87;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// line 45
org$frostlang$frostc$Pair* $tmp88 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp89 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp90;
$tmp90 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp90->value = $tmp89;
org$frostlang$frostc$IR$Value* $tmp91 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp92 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp93 = *(&local3);
org$frostlang$frostc$Type* $tmp94 = *(&local1);
org$frostlang$frostc$Type* $tmp95 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp94);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp91, $tmp92, $tmp93, $tmp95);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp88, ((frost$core$Object*) $tmp90), ((frost$core$Object*) $tmp91));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
org$frostlang$frostc$IR$Value* $tmp96 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp97 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp98 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp88;
block10:;
frost$core$Bit $tmp99 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp55, &$s100);
bool $tmp101 = $tmp99.value;
if ($tmp101) goto block13; else goto block14;
block13:;
// line 49
frost$core$Bit $tmp102 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp104 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s105, $tmp104);
abort(); // unreachable
block15:;
// line 50
org$frostlang$frostc$IR* $tmp106 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp107 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp108 = (frost$core$Int64) {18};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp107, $tmp108, param1, param2);
$fn110 $tmp109 = ($fn110) $tmp106->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp111 = $tmp109($tmp106, $tmp107);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// line 51
org$frostlang$frostc$Pair* $tmp112 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp114;
$tmp114 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp114->value = $tmp113;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp112, ((frost$core$Object*) $tmp114), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
org$frostlang$frostc$Type* $tmp115 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp112;
block14:;
frost$core$Bit $tmp117 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp55, &$s118);
bool $tmp119 = $tmp117.value;
if ($tmp119) goto block17; else goto block18;
block17:;
// line 54
frost$core$Bit $tmp120 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp122 = (frost$core$Int64) {54};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s123, $tmp122);
abort(); // unreachable
block19:;
// line 55
frost$core$Int64 $tmp124 = (frost$core$Int64) {0};
ITable* $tmp125 = param4->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp125 = $tmp125->next;
}
$fn127 $tmp126 = $tmp125->methods[0];
frost$core$Object* $tmp128 = $tmp126(param4, $tmp124);
org$frostlang$frostc$Compiler$TypeContext* $tmp129 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp130 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp131 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp132 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp129, $tmp130, $tmp131, $tmp132);
org$frostlang$frostc$IR$Value* $tmp133 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp128), $tmp129);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
org$frostlang$frostc$IR$Value* $tmp134 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local4) = $tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q($tmp128);
// line 57
org$frostlang$frostc$IR$Value* $tmp135 = *(&local4);
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit($tmp135 == NULL);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block21; else goto block22;
block21:;
// line 58
org$frostlang$frostc$Pair* $tmp138 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp139 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp140;
$tmp140 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp140->value = $tmp139;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp138, ((frost$core$Object*) $tmp140), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
org$frostlang$frostc$IR$Value* $tmp141 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp142 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp143 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp138;
block22:;
// line 60
frost$core$Int64 $tmp144 = (frost$core$Int64) {1};
ITable* $tmp145 = param4->$class->itable;
while ($tmp145->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[0];
frost$core$Object* $tmp148 = $tmp146(param4, $tmp144);
org$frostlang$frostc$Compiler$TypeContext* $tmp149 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp150 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp151 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp152 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp149, $tmp150, $tmp151, $tmp152);
org$frostlang$frostc$IR$Value* $tmp153 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp148), $tmp149);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
org$frostlang$frostc$IR$Value* $tmp154 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
*(&local5) = $tmp153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q($tmp148);
// line 62
org$frostlang$frostc$IR$Value* $tmp155 = *(&local5);
frost$core$Bit $tmp156 = frost$core$Bit$init$builtin_bit($tmp155 == NULL);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block23; else goto block24;
block23:;
// line 63
org$frostlang$frostc$Pair* $tmp158 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp160;
$tmp160 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp160->value = $tmp159;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp158, ((frost$core$Object*) $tmp160), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
org$frostlang$frostc$IR$Value* $tmp161 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp162 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp163 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp164 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp158;
block24:;
// line 65
org$frostlang$frostc$IR* $tmp165 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp166 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp167 = (frost$core$Int64) {22};
org$frostlang$frostc$IR$Value* $tmp168 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp169 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp168);
org$frostlang$frostc$IR$Value* $tmp170 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp171 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp170);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp166, $tmp167, param1, param2, $tmp169, $tmp171);
$fn173 $tmp172 = ($fn173) $tmp165->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp174 = $tmp172($tmp165, $tmp166);
*(&local6) = $tmp174;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// line 68
org$frostlang$frostc$Pair* $tmp175 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp176 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp177;
$tmp177 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp177->value = $tmp176;
org$frostlang$frostc$IR$Value* $tmp178 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp179 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp180 = *(&local6);
org$frostlang$frostc$Type* $tmp181 = *(&local1);
org$frostlang$frostc$Type* $tmp182 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp181);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp178, $tmp179, $tmp180, $tmp182);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp175, ((frost$core$Object*) $tmp177), ((frost$core$Object*) $tmp178));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
org$frostlang$frostc$IR$Value* $tmp183 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp184 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp185 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp175;
block18:;
frost$core$Bit $tmp187 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp55, &$s188);
bool $tmp189 = $tmp187.value;
if ($tmp189) goto block25; else goto block26;
block25:;
// line 72
frost$core$Bit $tmp190 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp192 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s193, $tmp192);
abort(); // unreachable
block27:;
// line 73
org$frostlang$frostc$IR* $tmp194 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp195 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp196 = (frost$core$Int64) {19};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp195, $tmp196, param1, param2);
$fn198 $tmp197 = ($fn198) $tmp194->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp199 = $tmp197($tmp194, $tmp195);
*(&local7) = $tmp199;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// line 74
org$frostlang$frostc$Pair* $tmp200 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp201 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp202;
$tmp202 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp202->value = $tmp201;
org$frostlang$frostc$IR$Value* $tmp203 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp204 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp205 = *(&local7);
org$frostlang$frostc$Type* $tmp206 = *(&local1);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp203, $tmp204, $tmp205, $tmp206);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp200, ((frost$core$Object*) $tmp202), ((frost$core$Object*) $tmp203));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
org$frostlang$frostc$Type* $tmp207 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp208 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp200;
block26:;
frost$core$Bit $tmp209 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp55, &$s210);
bool $tmp211 = $tmp209.value;
if ($tmp211) goto block29; else goto block30;
block29:;
// line 77
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp214 = (frost$core$Int64) {77};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s215, $tmp214);
abort(); // unreachable
block31:;
// line 78
frost$core$Int64 $tmp216 = (frost$core$Int64) {0};
ITable* $tmp217 = param4->$class->itable;
while ($tmp217->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp217 = $tmp217->next;
}
$fn219 $tmp218 = $tmp217->methods[0];
frost$core$Object* $tmp220 = $tmp218(param4, $tmp216);
org$frostlang$frostc$Compiler$TypeContext* $tmp221 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp222 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp223 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp224 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp221, $tmp222, $tmp223, $tmp224);
org$frostlang$frostc$IR$Value* $tmp225 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp220), $tmp221);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
org$frostlang$frostc$IR$Value* $tmp226 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local8) = $tmp225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q($tmp220);
// line 80
org$frostlang$frostc$IR* $tmp227 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp228 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp229 = (frost$core$Int64) {21};
org$frostlang$frostc$IR$Value* $tmp230 = *(&local8);
org$frostlang$frostc$IR$Value* $tmp231 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp230);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp228, $tmp229, param1, param2, $tmp231);
$fn233 $tmp232 = ($fn233) $tmp227->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp234 = $tmp232($tmp227, $tmp228);
*(&local9) = $tmp234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// line 82
org$frostlang$frostc$Pair* $tmp235 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp236 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp237;
$tmp237 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp237->value = $tmp236;
org$frostlang$frostc$IR$Value* $tmp238 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp239 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp240 = *(&local9);
org$frostlang$frostc$Type* $tmp241 = *(&local1);
org$frostlang$frostc$Type* $tmp242 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp241);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp238, $tmp239, $tmp240, $tmp242);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp235, ((frost$core$Object*) $tmp237), ((frost$core$Object*) $tmp238));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
org$frostlang$frostc$IR$Value* $tmp243 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp244 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp245 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp235;
block30:;
frost$core$Bit $tmp246 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp55, &$s247);
bool $tmp248 = $tmp246.value;
if ($tmp248) goto block33; else goto block34;
block33:;
// line 86
frost$core$Bit $tmp249 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp251 = (frost$core$Int64) {86};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s252, $tmp251);
abort(); // unreachable
block35:;
// line 87
frost$core$Int64 $tmp253 = (frost$core$Int64) {0};
ITable* $tmp254 = param4->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[0];
frost$core$Object* $tmp257 = $tmp255(param4, $tmp253);
org$frostlang$frostc$Compiler$TypeContext* $tmp258 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp259 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp260 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp261 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp258, $tmp259, $tmp260, $tmp261);
org$frostlang$frostc$IR$Value* $tmp262 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp257), $tmp258);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
org$frostlang$frostc$IR$Value* $tmp263 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local10) = $tmp262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$Frost$unref$frost$core$Object$Q($tmp257);
// line 89
org$frostlang$frostc$IR$Value* $tmp264 = *(&local10);
frost$core$Bit $tmp265 = frost$core$Bit$init$builtin_bit($tmp264 == NULL);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block37; else goto block38;
block37:;
// line 90
org$frostlang$frostc$Pair* $tmp267 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp268 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp269;
$tmp269 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp269->value = $tmp268;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp267, ((frost$core$Object*) $tmp269), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
org$frostlang$frostc$IR$Value* $tmp270 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp271 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp272 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp267;
block38:;
// line 92
org$frostlang$frostc$IR* $tmp273 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp274 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp275 = (frost$core$Int64) {20};
org$frostlang$frostc$IR$Value* $tmp276 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp277 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp276);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp274, $tmp275, param1, param2, $tmp277);
$fn279 $tmp278 = ($fn279) $tmp273->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp280 = $tmp278($tmp273, $tmp274);
*(&local11) = $tmp280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// line 94
org$frostlang$frostc$Pair* $tmp281 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp282 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp283;
$tmp283 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp283->value = $tmp282;
org$frostlang$frostc$IR$Value* $tmp284 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp285 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp286 = *(&local11);
org$frostlang$frostc$Type* $tmp287 = *(&local1);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp284, $tmp285, $tmp286, $tmp287);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp281, ((frost$core$Object*) $tmp283), ((frost$core$Object*) $tmp284));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
org$frostlang$frostc$IR$Value* $tmp288 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp289 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp290 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp281;
block34:;
frost$core$Bit $tmp291 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp55, &$s292);
bool $tmp293 = $tmp291.value;
if ($tmp293) goto block39; else goto block40;
block39:;
// line 97
frost$core$Bit $tmp294 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp296 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s297, $tmp296);
abort(); // unreachable
block41:;
// line 98
frost$core$Int64 $tmp298 = (frost$core$Int64) {0};
ITable* $tmp299 = param4->$class->itable;
while ($tmp299->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp299 = $tmp299->next;
}
$fn301 $tmp300 = $tmp299->methods[0];
frost$core$Object* $tmp302 = $tmp300(param4, $tmp298);
org$frostlang$frostc$Compiler$TypeContext* $tmp303 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp304 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp305 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp306 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp303, $tmp304, $tmp305, $tmp306);
org$frostlang$frostc$IR$Value* $tmp307 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp302), $tmp303);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
org$frostlang$frostc$IR$Value* $tmp308 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local12) = $tmp307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q($tmp302);
// line 100
frost$core$Int64 $tmp309 = (frost$core$Int64) {1};
ITable* $tmp310 = param4->$class->itable;
while ($tmp310->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp310 = $tmp310->next;
}
$fn312 $tmp311 = $tmp310->methods[0];
frost$core$Object* $tmp313 = $tmp311(param4, $tmp309);
org$frostlang$frostc$Compiler$TypeContext* $tmp314 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp315 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp316 = *(&local1);
frost$core$Bit $tmp317 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp314, $tmp315, $tmp316, $tmp317);
org$frostlang$frostc$IR$Value* $tmp318 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp313), $tmp314);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
org$frostlang$frostc$IR$Value* $tmp319 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local13) = $tmp318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
frost$core$Frost$unref$frost$core$Object$Q($tmp313);
// line 102
org$frostlang$frostc$IR$Value* $tmp320 = *(&local12);
frost$core$Bit $tmp321 = frost$core$Bit$init$builtin_bit($tmp320 != NULL);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block45; else goto block44;
block45:;
org$frostlang$frostc$IR$Value* $tmp323 = *(&local13);
frost$core$Bit $tmp324 = frost$core$Bit$init$builtin_bit($tmp323 != NULL);
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block43; else goto block44;
block43:;
// line 103
org$frostlang$frostc$IR$Value* $tmp326 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp327 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp326);
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
org$frostlang$frostc$IR$Value* $tmp328 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local14) = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// line 104
org$frostlang$frostc$Type* $tmp329 = *(&local1);
frost$core$Bit $tmp330 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp329);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block46; else goto block47;
block46:;
// line 105
org$frostlang$frostc$IR$Value* $tmp332 = *(&local13);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp332);
// line 106
org$frostlang$frostc$IR* $tmp333 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp334 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp335 = (frost$core$Int64) {20};
org$frostlang$frostc$IR$Value* $tmp336 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp334, $tmp335, param1, param2, $tmp336);
$fn338 $tmp337 = ($fn338) $tmp333->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp339 = $tmp337($tmp333, $tmp334);
*(&local15) = $tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// line 107
org$frostlang$frostc$IR$Value* $tmp340 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp341 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp342 = *(&local15);
org$frostlang$frostc$Type* $tmp343 = *(&local1);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp340, $tmp341, $tmp342, $tmp343);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp340);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
goto block47;
block47:;
// line 109
org$frostlang$frostc$IR* $tmp344 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp345 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp346 = (frost$core$Int64) {24};
org$frostlang$frostc$IR$Value* $tmp347 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp348 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp345, $tmp346, param1, $tmp347, param2, $tmp348);
$fn350 $tmp349 = ($fn350) $tmp344->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp351 = $tmp349($tmp344, $tmp345);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
org$frostlang$frostc$IR$Value* $tmp352 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block44;
block44:;
// line 111
org$frostlang$frostc$Pair* $tmp353 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp354 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp355;
$tmp355 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp355->value = $tmp354;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp353, ((frost$core$Object*) $tmp355), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
org$frostlang$frostc$IR$Value* $tmp356 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp357 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp358 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp359 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp353;
block40:;
frost$core$Bit $tmp360 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp55, &$s361);
bool $tmp362 = $tmp360.value;
if ($tmp362) goto block48; else goto block49;
block48:;
// line 114
org$frostlang$frostc$Type* $tmp363 = *(&local1);
org$frostlang$frostc$Type* $tmp364 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp363);
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
org$frostlang$frostc$Type* $tmp365 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local16) = $tmp364;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
// line 115
frost$core$Int64 $tmp366 = (frost$core$Int64) {0};
ITable* $tmp367 = param4->$class->itable;
while ($tmp367->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp367 = $tmp367->next;
}
$fn369 $tmp368 = $tmp367->methods[0];
frost$core$Object* $tmp370 = $tmp368(param4, $tmp366);
org$frostlang$frostc$Compiler$TypeContext* $tmp371 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp372 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp373 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp374 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp371, $tmp372, $tmp373, $tmp374);
org$frostlang$frostc$IR$Value* $tmp375 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp370), $tmp371);
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
org$frostlang$frostc$IR$Value* $tmp376 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local17) = $tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
frost$core$Frost$unref$frost$core$Object$Q($tmp370);
// line 117
org$frostlang$frostc$Type* $tmp377 = *(&local16);
frost$core$Bit $tmp378 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp377);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block50; else goto block51;
block50:;
// line 118
org$frostlang$frostc$IR$Value* $tmp380 = *(&local17);
org$frostlang$frostc$IR$Value* $tmp381 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp380);
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
org$frostlang$frostc$IR$Value* $tmp382 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local18) = $tmp381;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// line 119
org$frostlang$frostc$IR* $tmp383 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp384 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp385 = (frost$core$Int64) {20};
org$frostlang$frostc$IR$Value* $tmp386 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp384, $tmp385, param1, param2, $tmp386);
$fn388 $tmp387 = ($fn388) $tmp383->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp389 = $tmp387($tmp383, $tmp384);
*(&local19) = $tmp389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
// line 120
org$frostlang$frostc$IR$Value* $tmp390 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp391 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp392 = *(&local19);
org$frostlang$frostc$Type* $tmp393 = *(&local16);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp390, $tmp391, $tmp392, $tmp393);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp390);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// line 121
org$frostlang$frostc$IR* $tmp394 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp395 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp396 = (frost$core$Int64) {24};
org$frostlang$frostc$IR$Value* $tmp397 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp398 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp399 = *(&local16);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp397, $tmp398, $tmp399);
org$frostlang$frostc$IR$Value* $tmp400 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp395, $tmp396, param1, $tmp397, param2, $tmp400);
$fn402 $tmp401 = ($fn402) $tmp394->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp403 = $tmp401($tmp394, $tmp395);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
org$frostlang$frostc$IR$Value* $tmp404 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block51;
block51:;
// line 124
org$frostlang$frostc$Pair* $tmp405 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp406 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp407;
$tmp407 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp407->value = $tmp406;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp405, ((frost$core$Object*) $tmp407), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
org$frostlang$frostc$IR$Value* $tmp408 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp409 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp410 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp411 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp405;
block49:;
// line 127
frost$core$Int64 $tmp412 = (frost$core$Int64) {127};
org$frostlang$frostc$MethodDecl** $tmp413 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp414 = *$tmp413;
frost$core$String** $tmp415 = &((org$frostlang$frostc$Symbol*) $tmp414)->name;
frost$core$String* $tmp416 = *$tmp415;
frost$core$String* $tmp417 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s418, $tmp416);
frost$core$String* $tmp419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp417, &$s420);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s421, $tmp412, $tmp419);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
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
ITable* $tmp422 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp422->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp422 = $tmp422->next;
}
$fn424 $tmp423 = $tmp422->methods[0];
frost$core$Int64 $tmp425 = $tmp423(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp426 = (frost$core$Int64) {1};
int64_t $tmp427 = $tmp425.value;
int64_t $tmp428 = $tmp426.value;
bool $tmp429 = $tmp427 != $tmp428;
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block1; else goto block2;
block1:;
// line 138
org$frostlang$frostc$Pair* $tmp432 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp433 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp434;
$tmp434 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp434->value = $tmp433;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp432, ((frost$core$Object*) $tmp434), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
return $tmp432;
block2:;
// line 140
org$frostlang$frostc$IR$Value* $tmp435 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param5);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
org$frostlang$frostc$IR$Value* $tmp436 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
*(&local0) = $tmp435;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
// line 141
org$frostlang$frostc$IR$Value* $tmp437 = *(&local0);
frost$core$Bit $tmp438 = frost$core$Bit$init$builtin_bit($tmp437 == NULL);
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block3; else goto block4;
block3:;
// line 142
org$frostlang$frostc$Pair* $tmp440 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp441 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp442;
$tmp442 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp442->value = $tmp441;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp440, ((frost$core$Object*) $tmp442), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
org$frostlang$frostc$IR$Value* $tmp443 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp440;
block4:;
// line 144
frost$core$Int64 $tmp444 = (frost$core$Int64) {0};
ITable* $tmp445 = param4->$class->itable;
while ($tmp445->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp445 = $tmp445->next;
}
$fn447 $tmp446 = $tmp445->methods[0];
frost$core$Object* $tmp448 = $tmp446(param4, $tmp444);
org$frostlang$frostc$Compiler$TypeContext* $tmp449 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp450 = (frost$core$Int64) {3};
frost$core$Bit $tmp451 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp449, $tmp450, param5, $tmp451);
org$frostlang$frostc$IR$Value* $tmp452 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp448), $tmp449);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
org$frostlang$frostc$IR$Value* $tmp453 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local1) = $tmp452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q($tmp448);
// line 145
org$frostlang$frostc$IR$Value* $tmp454 = *(&local1);
frost$core$Bit $tmp455 = frost$core$Bit$init$builtin_bit($tmp454 == NULL);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block5; else goto block6;
block5:;
// line 146
org$frostlang$frostc$Pair* $tmp457 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp458 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp459;
$tmp459 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp459->value = $tmp458;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp457, ((frost$core$Object*) $tmp459), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
org$frostlang$frostc$IR$Value* $tmp460 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp461 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp457;
block6:;
// line 148
org$frostlang$frostc$IR$Value* $tmp462 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp463 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp462);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
org$frostlang$frostc$IR$Value* $tmp464 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local2) = $tmp463;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// line 149
// line 150
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
// line 151
org$frostlang$frostc$Type* $tmp465 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp466 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param6, $tmp465);
bool $tmp467 = $tmp466.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
if ($tmp467) goto block7; else goto block9;
block7:;
// line 152
org$frostlang$frostc$Type* $tmp468 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
org$frostlang$frostc$Type* $tmp469 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local4) = $tmp468;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
goto block8;
block9:;
// line 1
// line 155
org$frostlang$frostc$IR$Value* $tmp470 = *(&local2);
$fn472 $tmp471 = ($fn472) $tmp470->$class->vtable[2];
org$frostlang$frostc$Type* $tmp473 = $tmp471($tmp470);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
org$frostlang$frostc$Type* $tmp474 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local4) = $tmp473;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
goto block8;
block8:;
// line 157
org$frostlang$frostc$IR** $tmp475 = &param0->ir;
org$frostlang$frostc$IR* $tmp476 = *$tmp475;
org$frostlang$frostc$IR$Statement* $tmp477 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp478 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp479 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp480 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp481 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp480);
org$frostlang$frostc$Type* $tmp482 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp477, $tmp478, param1, $tmp479, param3, $tmp481, $tmp482);
$fn484 $tmp483 = ($fn484) $tmp476->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp485 = $tmp483($tmp476, $tmp477);
*(&local3) = $tmp485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
// line 159
frost$collections$Array* $tmp486 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp486);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$collections$Array* $tmp487 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
*(&local5) = $tmp486;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// line 160
frost$collections$Array* $tmp488 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp489 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp490 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp491 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp492 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp493 = *(&local3);
org$frostlang$frostc$Type* $tmp494 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp491, $tmp492, $tmp493, $tmp494);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp489, $tmp490, param1, $tmp491);
frost$collections$Array$add$frost$collections$Array$T($tmp488, ((frost$core$Object*) $tmp489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
// line 161
org$frostlang$frostc$IR$Value* $tmp495 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp496 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp495, $tmp496, param6);
frost$collections$Array* $tmp497 = *(&local5);
org$frostlang$frostc$Compiler$TypeContext* $tmp498 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp499 = (frost$core$Int64) {3};
frost$core$Bit $tmp500 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp498, $tmp499, param6, $tmp500);
org$frostlang$frostc$IR$Value* $tmp501 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp495, ((frost$collections$ListView*) $tmp497), $tmp498);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
org$frostlang$frostc$IR$Value* $tmp502 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local6) = $tmp501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// line 163
org$frostlang$frostc$IR$Value* $tmp503 = *(&local6);
frost$core$Bit $tmp504 = frost$core$Bit$init$builtin_bit($tmp503 != NULL);
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp506 = (frost$core$Int64) {163};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s507, $tmp506);
abort(); // unreachable
block10:;
// line 164
org$frostlang$frostc$Pair* $tmp508 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp509 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp510;
$tmp510 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp510->value = $tmp509;
org$frostlang$frostc$IR$Value* $tmp511 = *(&local6);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp508, ((frost$core$Object*) $tmp510), ((frost$core$Object*) $tmp511));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
org$frostlang$frostc$IR$Value* $tmp512 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp513 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp514 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp515 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp516 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp517 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp508;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
// line 171
org$frostlang$frostc$MethodDecl** $tmp518 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp519 = *$tmp518;
frost$core$String** $tmp520 = &((org$frostlang$frostc$Symbol*) $tmp519)->name;
frost$core$String* $tmp521 = *$tmp520;
frost$core$Bit $tmp522 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp521, &$s523);
bool $tmp524 = $tmp522.value;
if ($tmp524) goto block2; else goto block3;
block2:;
// line 173
org$frostlang$frostc$MethodDecl** $tmp525 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp526 = *$tmp525;
frost$collections$Array** $tmp527 = &$tmp526->parameters;
frost$collections$Array* $tmp528 = *$tmp527;
ITable* $tmp529 = ((frost$collections$CollectionView*) $tmp528)->$class->itable;
while ($tmp529->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp529 = $tmp529->next;
}
$fn531 $tmp530 = $tmp529->methods[0];
frost$core$Int64 $tmp532 = $tmp530(((frost$collections$CollectionView*) $tmp528));
frost$core$Int64 $tmp533 = (frost$core$Int64) {1};
frost$core$Bit $tmp534 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp532, $tmp533);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp536 = (frost$core$Int64) {173};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s537, $tmp536);
abort(); // unreachable
block4:;
// line 174
ITable* $tmp538 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp538->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp538 = $tmp538->next;
}
$fn540 $tmp539 = $tmp538->methods[0];
frost$core$Int64 $tmp541 = $tmp539(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp542 = (frost$core$Int64) {1};
frost$core$Bit $tmp543 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp541, $tmp542);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp545 = (frost$core$Int64) {174};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s546, $tmp545);
abort(); // unreachable
block6:;
// line 175
org$frostlang$frostc$MethodDecl** $tmp547 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp548 = *$tmp547;
frost$collections$Array** $tmp549 = &$tmp548->parameters;
frost$collections$Array* $tmp550 = *$tmp549;
frost$core$Int64 $tmp551 = (frost$core$Int64) {0};
frost$core$Object* $tmp552 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp550, $tmp551);
org$frostlang$frostc$Type** $tmp553 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp552)->type;
org$frostlang$frostc$Type* $tmp554 = *$tmp553;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
org$frostlang$frostc$Type* $tmp555 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
*(&local0) = $tmp554;
frost$core$Frost$unref$frost$core$Object$Q($tmp552);
// line 176
org$frostlang$frostc$Type* $tmp556 = *(&local0);
frost$core$Bit $tmp557 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp556);
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block8; else goto block9;
block8:;
// line 177
frost$core$Int64 $tmp559 = (frost$core$Int64) {0};
ITable* $tmp560 = param4->$class->itable;
while ($tmp560->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp560 = $tmp560->next;
}
$fn562 $tmp561 = $tmp560->methods[0];
frost$core$Object* $tmp563 = $tmp561(param4, $tmp559);
org$frostlang$frostc$Compiler$TypeContext* $tmp564 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp565 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp566 = *(&local0);
frost$core$Bit $tmp567 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp564, $tmp565, $tmp566, $tmp567);
org$frostlang$frostc$IR$Value* $tmp568 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp563), $tmp564);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
org$frostlang$frostc$IR$Value* $tmp569 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local1) = $tmp568;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
frost$core$Frost$unref$frost$core$Object$Q($tmp563);
// line 179
org$frostlang$frostc$IR$Value* $tmp570 = *(&local1);
frost$core$Bit $tmp571 = frost$core$Bit$init$builtin_bit($tmp570 != NULL);
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block10; else goto block11;
block10:;
// line 180
org$frostlang$frostc$IR** $tmp573 = &param0->ir;
org$frostlang$frostc$IR* $tmp574 = *$tmp573;
org$frostlang$frostc$IR$Statement* $tmp575 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp576 = (frost$core$Int64) {7};
org$frostlang$frostc$MethodDecl** $tmp577 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp578 = *$tmp577;
frost$core$Weak** $tmp579 = &$tmp578->owner;
frost$core$Weak* $tmp580 = *$tmp579;
frost$core$Object* $tmp581 = frost$core$Weak$get$R$frost$core$Weak$T($tmp580);
frost$collections$Array* $tmp582 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp583 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp582, $tmp583);
org$frostlang$frostc$IR$Value* $tmp584 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp582, ((frost$core$Object*) $tmp584));
org$frostlang$frostc$FixedArray* $tmp585 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp582);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp575, $tmp576, param1, ((org$frostlang$frostc$ClassDecl*) $tmp581), $tmp585);
$fn587 $tmp586 = ($fn587) $tmp574->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp588 = $tmp586($tmp574, $tmp575);
*(&local2) = $tmp588;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$core$Frost$unref$frost$core$Object$Q($tmp581);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
// line 182
org$frostlang$frostc$Pair* $tmp589 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp590 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp591;
$tmp591 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp591->value = $tmp590;
org$frostlang$frostc$IR$Value* $tmp592 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp593 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp594 = *(&local2);
org$frostlang$frostc$MethodDecl** $tmp595 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp596 = *$tmp595;
frost$core$Weak** $tmp597 = &$tmp596->owner;
frost$core$Weak* $tmp598 = *$tmp597;
frost$core$Object* $tmp599 = frost$core$Weak$get$R$frost$core$Weak$T($tmp598);
org$frostlang$frostc$Type** $tmp600 = &((org$frostlang$frostc$ClassDecl*) $tmp599)->type;
org$frostlang$frostc$Type* $tmp601 = *$tmp600;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp592, $tmp593, $tmp594, $tmp601);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp589, ((frost$core$Object*) $tmp591), ((frost$core$Object*) $tmp592));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$core$Frost$unref$frost$core$Object$Q($tmp599);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
org$frostlang$frostc$IR$Value* $tmp602 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp603 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp589;
block11:;
org$frostlang$frostc$IR$Value* $tmp604 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block9;
block9:;
org$frostlang$frostc$Type* $tmp605 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Bit $tmp606 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp521, &$s607);
bool $tmp608 = $tmp606.value;
if ($tmp608) goto block12; else goto block13;
block12:;
// line 187
frost$core$Int64 $tmp609 = (frost$core$Int64) {0};
org$frostlang$frostc$expression$Binary$Operator $tmp610 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp609);
org$frostlang$frostc$Type* $tmp611 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp612 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp613 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp610, param4, $tmp611, $tmp612);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
return $tmp613;
block13:;
frost$core$Bit $tmp614 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp521, &$s615);
bool $tmp616 = $tmp614.value;
if ($tmp616) goto block14; else goto block15;
block14:;
// line 191
frost$core$Int64 $tmp617 = (frost$core$Int64) {1};
org$frostlang$frostc$expression$Binary$Operator $tmp618 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp617);
org$frostlang$frostc$Type* $tmp619 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp620 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp621 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp618, param4, $tmp619, $tmp620);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
return $tmp621;
block15:;
frost$core$Bit $tmp622 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp521, &$s623);
bool $tmp624 = $tmp622.value;
if ($tmp624) goto block16; else goto block17;
block16:;
// line 195
frost$core$Int64 $tmp625 = (frost$core$Int64) {2};
org$frostlang$frostc$expression$Binary$Operator $tmp626 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp625);
org$frostlang$frostc$Type* $tmp627 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp628 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp629 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp626, param4, $tmp627, $tmp628);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
return $tmp629;
block17:;
frost$core$Bit $tmp630 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp521, &$s631);
bool $tmp632 = $tmp630.value;
if ($tmp632) goto block18; else goto block19;
block18:;
// line 199
frost$core$Int64 $tmp633 = (frost$core$Int64) {4};
org$frostlang$frostc$expression$Binary$Operator $tmp634 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp633);
org$frostlang$frostc$Type* $tmp635 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp636 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp637 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp634, param4, $tmp635, $tmp636);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
return $tmp637;
block19:;
frost$core$Bit $tmp638 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp521, &$s639);
bool $tmp640 = $tmp638.value;
if ($tmp640) goto block20; else goto block21;
block20:;
// line 203
frost$core$Int64 $tmp641 = (frost$core$Int64) {8};
org$frostlang$frostc$expression$Binary$Operator $tmp642 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp641);
org$frostlang$frostc$MethodDecl** $tmp643 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp644 = *$tmp643;
frost$core$Weak** $tmp645 = &$tmp644->owner;
frost$core$Weak* $tmp646 = *$tmp645;
frost$core$Object* $tmp647 = frost$core$Weak$get$R$frost$core$Weak$T($tmp646);
org$frostlang$frostc$Type** $tmp648 = &((org$frostlang$frostc$ClassDecl*) $tmp647)->type;
org$frostlang$frostc$Type* $tmp649 = *$tmp648;
org$frostlang$frostc$MethodDecl** $tmp650 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp651 = *$tmp650;
frost$collections$Array** $tmp652 = &$tmp651->parameters;
frost$collections$Array* $tmp653 = *$tmp652;
frost$core$Int64 $tmp654 = (frost$core$Int64) {0};
frost$core$Object* $tmp655 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp653, $tmp654);
org$frostlang$frostc$Type** $tmp656 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp655)->type;
org$frostlang$frostc$Type* $tmp657 = *$tmp656;
frost$core$Bit $tmp658 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp659 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp660 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp649, $tmp657, $tmp658, $tmp659);
org$frostlang$frostc$Type* $tmp661 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp662 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp642, param4, $tmp660, $tmp661);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
frost$core$Frost$unref$frost$core$Object$Q($tmp655);
frost$core$Frost$unref$frost$core$Object$Q($tmp647);
return $tmp662;
block21:;
frost$core$Bit $tmp663 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp521, &$s664);
bool $tmp665 = $tmp663.value;
if ($tmp665) goto block22; else goto block23;
block22:;
// line 209
frost$core$Int64 $tmp666 = (frost$core$Int64) {10};
org$frostlang$frostc$expression$Binary$Operator $tmp667 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp666);
org$frostlang$frostc$MethodDecl** $tmp668 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp669 = *$tmp668;
frost$core$Weak** $tmp670 = &$tmp669->owner;
frost$core$Weak* $tmp671 = *$tmp670;
frost$core$Object* $tmp672 = frost$core$Weak$get$R$frost$core$Weak$T($tmp671);
org$frostlang$frostc$Type** $tmp673 = &((org$frostlang$frostc$ClassDecl*) $tmp672)->type;
org$frostlang$frostc$Type* $tmp674 = *$tmp673;
org$frostlang$frostc$MethodDecl** $tmp675 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp676 = *$tmp675;
frost$collections$Array** $tmp677 = &$tmp676->parameters;
frost$collections$Array* $tmp678 = *$tmp677;
frost$core$Int64 $tmp679 = (frost$core$Int64) {0};
frost$core$Object* $tmp680 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp678, $tmp679);
org$frostlang$frostc$Type** $tmp681 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp680)->type;
org$frostlang$frostc$Type* $tmp682 = *$tmp681;
frost$core$Bit $tmp683 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp684 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp685 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp674, $tmp682, $tmp683, $tmp684);
org$frostlang$frostc$Type* $tmp686 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp687 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp667, param4, $tmp685, $tmp686);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
frost$core$Frost$unref$frost$core$Object$Q($tmp680);
frost$core$Frost$unref$frost$core$Object$Q($tmp672);
return $tmp687;
block23:;
frost$core$Bit $tmp688 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp521, &$s689);
bool $tmp690 = $tmp688.value;
if ($tmp690) goto block24; else goto block25;
block24:;
// line 215
frost$core$Int64 $tmp691 = (frost$core$Int64) {9};
org$frostlang$frostc$expression$Binary$Operator $tmp692 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp691);
org$frostlang$frostc$MethodDecl** $tmp693 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp694 = *$tmp693;
frost$core$Weak** $tmp695 = &$tmp694->owner;
frost$core$Weak* $tmp696 = *$tmp695;
frost$core$Object* $tmp697 = frost$core$Weak$get$R$frost$core$Weak$T($tmp696);
org$frostlang$frostc$Type** $tmp698 = &((org$frostlang$frostc$ClassDecl*) $tmp697)->type;
org$frostlang$frostc$Type* $tmp699 = *$tmp698;
org$frostlang$frostc$MethodDecl** $tmp700 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp701 = *$tmp700;
frost$collections$Array** $tmp702 = &$tmp701->parameters;
frost$collections$Array* $tmp703 = *$tmp702;
frost$core$Int64 $tmp704 = (frost$core$Int64) {0};
frost$core$Object* $tmp705 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp703, $tmp704);
org$frostlang$frostc$Type** $tmp706 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp705)->type;
org$frostlang$frostc$Type* $tmp707 = *$tmp706;
frost$core$Bit $tmp708 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp709 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp710 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp699, $tmp707, $tmp708, $tmp709);
org$frostlang$frostc$Type* $tmp711 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp712 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp692, param4, $tmp710, $tmp711);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q($tmp705);
frost$core$Frost$unref$frost$core$Object$Q($tmp697);
return $tmp712;
block25:;
frost$core$Bit $tmp713 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp521, &$s714);
bool $tmp715 = $tmp713.value;
if ($tmp715) goto block26; else goto block27;
block26:;
// line 221
frost$core$Int64 $tmp716 = (frost$core$Int64) {11};
org$frostlang$frostc$expression$Binary$Operator $tmp717 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp716);
org$frostlang$frostc$MethodDecl** $tmp718 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp719 = *$tmp718;
frost$core$Weak** $tmp720 = &$tmp719->owner;
frost$core$Weak* $tmp721 = *$tmp720;
frost$core$Object* $tmp722 = frost$core$Weak$get$R$frost$core$Weak$T($tmp721);
org$frostlang$frostc$Type** $tmp723 = &((org$frostlang$frostc$ClassDecl*) $tmp722)->type;
org$frostlang$frostc$Type* $tmp724 = *$tmp723;
org$frostlang$frostc$MethodDecl** $tmp725 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp726 = *$tmp725;
frost$collections$Array** $tmp727 = &$tmp726->parameters;
frost$collections$Array* $tmp728 = *$tmp727;
frost$core$Int64 $tmp729 = (frost$core$Int64) {0};
frost$core$Object* $tmp730 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp728, $tmp729);
org$frostlang$frostc$Type** $tmp731 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp730)->type;
org$frostlang$frostc$Type* $tmp732 = *$tmp731;
frost$core$Bit $tmp733 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp734 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp735 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp724, $tmp732, $tmp733, $tmp734);
org$frostlang$frostc$Type* $tmp736 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp737 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp717, param4, $tmp735, $tmp736);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$Frost$unref$frost$core$Object$Q($tmp730);
frost$core$Frost$unref$frost$core$Object$Q($tmp722);
return $tmp737;
block27:;
frost$core$Bit $tmp738 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp521, &$s739);
bool $tmp740 = $tmp738.value;
if ($tmp740) goto block28; else goto block29;
block28:;
// line 227
frost$core$Int64 $tmp741 = (frost$core$Int64) {6};
org$frostlang$frostc$expression$Binary$Operator $tmp742 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp741);
org$frostlang$frostc$MethodDecl** $tmp743 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp744 = *$tmp743;
frost$core$Weak** $tmp745 = &$tmp744->owner;
frost$core$Weak* $tmp746 = *$tmp745;
frost$core$Object* $tmp747 = frost$core$Weak$get$R$frost$core$Weak$T($tmp746);
org$frostlang$frostc$Type** $tmp748 = &((org$frostlang$frostc$ClassDecl*) $tmp747)->type;
org$frostlang$frostc$Type* $tmp749 = *$tmp748;
org$frostlang$frostc$MethodDecl** $tmp750 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp751 = *$tmp750;
frost$collections$Array** $tmp752 = &$tmp751->parameters;
frost$collections$Array* $tmp753 = *$tmp752;
frost$core$Int64 $tmp754 = (frost$core$Int64) {0};
frost$core$Object* $tmp755 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp753, $tmp754);
org$frostlang$frostc$Type** $tmp756 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp755)->type;
org$frostlang$frostc$Type* $tmp757 = *$tmp756;
frost$core$Bit $tmp758 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp759 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp760 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp749, $tmp757, $tmp758, $tmp759);
org$frostlang$frostc$Type* $tmp761 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp762 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp742, param4, $tmp760, $tmp761);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$Frost$unref$frost$core$Object$Q($tmp755);
frost$core$Frost$unref$frost$core$Object$Q($tmp747);
return $tmp762;
block29:;
frost$core$Bit $tmp763 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp521, &$s764);
bool $tmp765 = $tmp763.value;
if ($tmp765) goto block30; else goto block1;
block30:;
// line 233
frost$core$Int64 $tmp766 = (frost$core$Int64) {7};
org$frostlang$frostc$expression$Binary$Operator $tmp767 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp766);
org$frostlang$frostc$MethodDecl** $tmp768 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp769 = *$tmp768;
frost$core$Weak** $tmp770 = &$tmp769->owner;
frost$core$Weak* $tmp771 = *$tmp770;
frost$core$Object* $tmp772 = frost$core$Weak$get$R$frost$core$Weak$T($tmp771);
org$frostlang$frostc$Type** $tmp773 = &((org$frostlang$frostc$ClassDecl*) $tmp772)->type;
org$frostlang$frostc$Type* $tmp774 = *$tmp773;
org$frostlang$frostc$MethodDecl** $tmp775 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp776 = *$tmp775;
frost$collections$Array** $tmp777 = &$tmp776->parameters;
frost$collections$Array* $tmp778 = *$tmp777;
frost$core$Int64 $tmp779 = (frost$core$Int64) {0};
frost$core$Object* $tmp780 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp778, $tmp779);
org$frostlang$frostc$Type** $tmp781 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp780)->type;
org$frostlang$frostc$Type* $tmp782 = *$tmp781;
frost$core$Bit $tmp783 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp784 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp785 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp774, $tmp782, $tmp783, $tmp784);
org$frostlang$frostc$Type* $tmp786 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp787 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp767, param4, $tmp785, $tmp786);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q($tmp780);
frost$core$Frost$unref$frost$core$Object$Q($tmp772);
return $tmp787;
block1:;
// line 239
org$frostlang$frostc$Pair* $tmp788 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp789 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp790;
$tmp790 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp790->value = $tmp789;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp788, ((frost$core$Object*) $tmp790), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
return $tmp788;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileBitIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
// line 246
org$frostlang$frostc$MethodDecl** $tmp791 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp792 = *$tmp791;
frost$core$String** $tmp793 = &((org$frostlang$frostc$Symbol*) $tmp792)->name;
frost$core$String* $tmp794 = *$tmp793;
frost$core$Bit $tmp795 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp794, &$s796);
bool $tmp797 = $tmp795.value;
if ($tmp797) goto block2; else goto block1;
block2:;
// line 248
org$frostlang$frostc$MethodDecl** $tmp798 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp799 = *$tmp798;
frost$collections$Array** $tmp800 = &$tmp799->parameters;
frost$collections$Array* $tmp801 = *$tmp800;
ITable* $tmp802 = ((frost$collections$CollectionView*) $tmp801)->$class->itable;
while ($tmp802->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp802 = $tmp802->next;
}
$fn804 $tmp803 = $tmp802->methods[0];
frost$core$Int64 $tmp805 = $tmp803(((frost$collections$CollectionView*) $tmp801));
frost$core$Int64 $tmp806 = (frost$core$Int64) {1};
frost$core$Bit $tmp807 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp805, $tmp806);
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp809 = (frost$core$Int64) {248};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s810, $tmp809);
abort(); // unreachable
block3:;
// line 249
ITable* $tmp811 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp811->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp811 = $tmp811->next;
}
$fn813 $tmp812 = $tmp811->methods[0];
frost$core$Int64 $tmp814 = $tmp812(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp815 = (frost$core$Int64) {1};
frost$core$Bit $tmp816 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp814, $tmp815);
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp818 = (frost$core$Int64) {249};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s819, $tmp818);
abort(); // unreachable
block5:;
// line 250
org$frostlang$frostc$MethodDecl** $tmp820 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp821 = *$tmp820;
frost$collections$Array** $tmp822 = &$tmp821->parameters;
frost$collections$Array* $tmp823 = *$tmp822;
frost$core$Int64 $tmp824 = (frost$core$Int64) {0};
frost$core$Object* $tmp825 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp823, $tmp824);
org$frostlang$frostc$Type** $tmp826 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp825)->type;
org$frostlang$frostc$Type* $tmp827 = *$tmp826;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
org$frostlang$frostc$Type* $tmp828 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
*(&local0) = $tmp827;
frost$core$Frost$unref$frost$core$Object$Q($tmp825);
// line 251
org$frostlang$frostc$Type* $tmp829 = *(&local0);
org$frostlang$frostc$Type* $tmp830 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp831 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp829, $tmp830);
bool $tmp832 = $tmp831.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
if ($tmp832) goto block7; else goto block8;
block7:;
// line 252
frost$core$Int64 $tmp833 = (frost$core$Int64) {0};
ITable* $tmp834 = param4->$class->itable;
while ($tmp834->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp834 = $tmp834->next;
}
$fn836 $tmp835 = $tmp834->methods[0];
frost$core$Object* $tmp837 = $tmp835(param4, $tmp833);
org$frostlang$frostc$Compiler$TypeContext* $tmp838 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp839 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp840 = *(&local0);
frost$core$Bit $tmp841 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp838, $tmp839, $tmp840, $tmp841);
org$frostlang$frostc$IR$Value* $tmp842 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp837), $tmp838);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
org$frostlang$frostc$IR$Value* $tmp843 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local1) = $tmp842;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
frost$core$Frost$unref$frost$core$Object$Q($tmp837);
// line 254
org$frostlang$frostc$IR$Value* $tmp844 = *(&local1);
frost$core$Bit $tmp845 = frost$core$Bit$init$builtin_bit($tmp844 != NULL);
bool $tmp846 = $tmp845.value;
if ($tmp846) goto block9; else goto block10;
block9:;
// line 255
org$frostlang$frostc$IR** $tmp847 = &param0->ir;
org$frostlang$frostc$IR* $tmp848 = *$tmp847;
org$frostlang$frostc$IR$Statement* $tmp849 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp850 = (frost$core$Int64) {7};
org$frostlang$frostc$MethodDecl** $tmp851 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp852 = *$tmp851;
frost$core$Weak** $tmp853 = &$tmp852->owner;
frost$core$Weak* $tmp854 = *$tmp853;
frost$core$Object* $tmp855 = frost$core$Weak$get$R$frost$core$Weak$T($tmp854);
frost$collections$Array* $tmp856 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp857 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp856, $tmp857);
org$frostlang$frostc$IR$Value* $tmp858 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp856, ((frost$core$Object*) $tmp858));
org$frostlang$frostc$FixedArray* $tmp859 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp856);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp849, $tmp850, param1, ((org$frostlang$frostc$ClassDecl*) $tmp855), $tmp859);
$fn861 $tmp860 = ($fn861) $tmp848->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp862 = $tmp860($tmp848, $tmp849);
*(&local2) = $tmp862;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
frost$core$Frost$unref$frost$core$Object$Q($tmp855);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
// line 257
org$frostlang$frostc$Pair* $tmp863 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp864 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp865;
$tmp865 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp865->value = $tmp864;
org$frostlang$frostc$IR$Value* $tmp866 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp867 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp868 = *(&local2);
org$frostlang$frostc$MethodDecl** $tmp869 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp870 = *$tmp869;
frost$core$Weak** $tmp871 = &$tmp870->owner;
frost$core$Weak* $tmp872 = *$tmp871;
frost$core$Object* $tmp873 = frost$core$Weak$get$R$frost$core$Weak$T($tmp872);
org$frostlang$frostc$Type** $tmp874 = &((org$frostlang$frostc$ClassDecl*) $tmp873)->type;
org$frostlang$frostc$Type* $tmp875 = *$tmp874;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp866, $tmp867, $tmp868, $tmp875);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp863, ((frost$core$Object*) $tmp865), ((frost$core$Object*) $tmp866));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q($tmp873);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
org$frostlang$frostc$IR$Value* $tmp876 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp877 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp863;
block10:;
org$frostlang$frostc$IR$Value* $tmp878 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block8;
block8:;
org$frostlang$frostc$Type* $tmp879 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 262
org$frostlang$frostc$Pair* $tmp880 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp881 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp882;
$tmp882 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp882->value = $tmp881;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp880, ((frost$core$Object*) $tmp882), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
return $tmp880;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

// line 268
org$frostlang$frostc$Type** $tmp883 = &param3->target;
org$frostlang$frostc$Type* $tmp884 = *$tmp883;
frost$core$Bit $tmp885 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp884);
bool $tmp886 = $tmp885.value;
if ($tmp886) goto block1; else goto block3;
block3:;
org$frostlang$frostc$Type** $tmp887 = &param3->target;
org$frostlang$frostc$Type* $tmp888 = *$tmp887;
frost$core$Bit $tmp889 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp888);
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block4; else goto block2;
block4:;
org$frostlang$frostc$Type** $tmp891 = &param3->target;
org$frostlang$frostc$Type* $tmp892 = *$tmp891;
org$frostlang$frostc$FixedArray** $tmp893 = &$tmp892->subtypes;
org$frostlang$frostc$FixedArray* $tmp894 = *$tmp893;
frost$core$Int64 $tmp895 = (frost$core$Int64) {1};
frost$core$Object* $tmp896 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp894, $tmp895);
frost$core$Bit $tmp897 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp896));
bool $tmp898 = $tmp897.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp896);
if ($tmp898) goto block1; else goto block2;
block1:;
// line 269
org$frostlang$frostc$Pair* $tmp899 = org$frostlang$frostc$expression$Call$compilePointerIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
return $tmp899;
block2:;
// line 271
org$frostlang$frostc$Type** $tmp900 = &param3->target;
org$frostlang$frostc$Type* $tmp901 = *$tmp900;
frost$core$Bit $tmp902 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp901);
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block5; else goto block6;
block5:;
// line 272
org$frostlang$frostc$Pair* $tmp904 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
return $tmp904;
block6:;
// line 274
org$frostlang$frostc$Type** $tmp905 = &param3->target;
org$frostlang$frostc$Type* $tmp906 = *$tmp905;
org$frostlang$frostc$Type* $tmp907 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp908 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp906, $tmp907);
bool $tmp909 = $tmp908.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
if ($tmp909) goto block7; else goto block8;
block7:;
// line 275
org$frostlang$frostc$Pair* $tmp910 = org$frostlang$frostc$expression$Call$compileBitIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
return $tmp910;
block8:;
// line 277
org$frostlang$frostc$Pair* $tmp911 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp912 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp913;
$tmp913 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp913->value = $tmp912;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp911, ((frost$core$Object*) $tmp913), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
return $tmp911;

}
frost$collections$ListView* org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
frost$collections$ListView* local2 = NULL;
frost$collections$ListView* local3 = NULL;
frost$collections$Array* local4 = NULL;
// line 291
org$frostlang$frostc$FixedArray** $tmp914 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp915 = *$tmp914;
frost$core$Bit $tmp916 = frost$core$Bit$init$builtin_bit($tmp915 == NULL);
bool $tmp917 = $tmp916.value;
if ($tmp917) goto block1; else goto block2;
block1:;
// line 292
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
return ((frost$collections$ListView*) NULL);
block2:;
// line 294
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp918 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
*(&local0) = ((frost$collections$Array*) NULL);
// line 295
frost$core$Int64 $tmp919 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp920 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp921 = *$tmp920;
ITable* $tmp922 = ((frost$collections$CollectionView*) $tmp921)->$class->itable;
while ($tmp922->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp922 = $tmp922->next;
}
$fn924 $tmp923 = $tmp922->methods[0];
frost$core$Int64 $tmp925 = $tmp923(((frost$collections$CollectionView*) $tmp921));
frost$core$Bit $tmp926 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp927 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp919, $tmp925, $tmp926);
frost$core$Int64 $tmp928 = $tmp927.min;
*(&local1) = $tmp928;
frost$core$Int64 $tmp929 = $tmp927.max;
frost$core$Bit $tmp930 = $tmp927.inclusive;
bool $tmp931 = $tmp930.value;
frost$core$Int64 $tmp932 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp933 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp932);
if ($tmp931) goto block6; else goto block7;
block6:;
int64_t $tmp934 = $tmp928.value;
int64_t $tmp935 = $tmp929.value;
bool $tmp936 = $tmp934 <= $tmp935;
frost$core$Bit $tmp937 = (frost$core$Bit) {$tmp936};
bool $tmp938 = $tmp937.value;
if ($tmp938) goto block3; else goto block4;
block7:;
int64_t $tmp939 = $tmp928.value;
int64_t $tmp940 = $tmp929.value;
bool $tmp941 = $tmp939 < $tmp940;
frost$core$Bit $tmp942 = (frost$core$Bit) {$tmp941};
bool $tmp943 = $tmp942.value;
if ($tmp943) goto block3; else goto block4;
block3:;
// line 296
org$frostlang$frostc$FixedArray** $tmp944 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp945 = *$tmp944;
frost$core$Int64 $tmp946 = *(&local1);
frost$core$Object* $tmp947 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp945, $tmp946);
org$frostlang$frostc$Type$Kind* $tmp948 = &((org$frostlang$frostc$Type*) $tmp947)->typeKind;
org$frostlang$frostc$Type$Kind $tmp949 = *$tmp948;
org$frostlang$frostc$Type$Kind$wrapper* $tmp950;
$tmp950 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp950->value = $tmp949;
frost$core$Int64 $tmp951 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp952 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp951);
org$frostlang$frostc$Type$Kind$wrapper* $tmp953;
$tmp953 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp953->value = $tmp952;
ITable* $tmp954 = ((frost$core$Equatable*) $tmp950)->$class->itable;
while ($tmp954->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp954 = $tmp954->next;
}
$fn956 $tmp955 = $tmp954->methods[0];
frost$core$Bit $tmp957 = $tmp955(((frost$core$Equatable*) $tmp950), ((frost$core$Equatable*) $tmp953));
bool $tmp958 = $tmp957.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp953)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp950)));
frost$core$Frost$unref$frost$core$Object$Q($tmp947);
if ($tmp958) goto block8; else goto block10;
block8:;
// line 297
org$frostlang$frostc$FixedArray** $tmp959 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp960 = *$tmp959;
frost$core$Int64 $tmp961 = *(&local1);
frost$core$Object* $tmp962 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp960, $tmp961);
frost$core$Weak** $tmp963 = &((org$frostlang$frostc$Type*) $tmp962)->genericMethodParameter;
frost$core$Weak* $tmp964 = *$tmp963;
frost$core$Object* $tmp965 = frost$core$Weak$get$R$frost$core$Weak$T($tmp964);
frost$core$String** $tmp966 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp965)->owner;
frost$core$String* $tmp967 = *$tmp966;
frost$core$Weak** $tmp968 = &param0->owner;
frost$core$Weak* $tmp969 = *$tmp968;
frost$core$Object* $tmp970 = frost$core$Weak$get$R$frost$core$Weak$T($tmp969);
frost$core$String** $tmp971 = &((org$frostlang$frostc$ClassDecl*) $tmp970)->name;
frost$core$String* $tmp972 = *$tmp971;
frost$core$String* $tmp973 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp972, &$s974);
frost$core$String** $tmp975 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp976 = *$tmp975;
frost$core$String* $tmp977 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp973, $tmp976);
frost$core$Bit $tmp978 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp967, $tmp977);
bool $tmp979 = $tmp978.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$core$Frost$unref$frost$core$Object$Q($tmp970);
frost$core$Frost$unref$frost$core$Object$Q($tmp965);
frost$core$Frost$unref$frost$core$Object$Q($tmp962);
if ($tmp979) goto block11; else goto block12;
block11:;
// line 298
frost$collections$Array* $tmp980 = *(&local0);
frost$core$Bit $tmp981 = frost$core$Bit$init$builtin_bit($tmp980 == NULL);
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block13; else goto block14;
block13:;
// line 299
frost$collections$Array* $tmp983 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp983);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
frost$collections$Array* $tmp984 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp984));
*(&local0) = $tmp983;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
goto block14;
block14:;
// line 301
frost$collections$Array* $tmp985 = *(&local0);
frost$collections$Array* $tmp986 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp987 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp986, $tmp987);
frost$core$Int64 $tmp988 = *(&local1);
frost$core$Int64$wrapper* $tmp989;
$tmp989 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp989->value = $tmp988;
frost$collections$Array$add$frost$collections$Array$T($tmp986, ((frost$core$Object*) $tmp989));
frost$collections$ImmutableArray* $tmp990 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT($tmp986);
frost$collections$Array$add$frost$collections$Array$T($tmp985, ((frost$core$Object*) ((frost$collections$ListView*) $tmp990)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
goto block12;
block12:;
goto block9;
block10:;
// line 1
// line 305
org$frostlang$frostc$FixedArray** $tmp991 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp992 = *$tmp991;
frost$core$Int64 $tmp993 = *(&local1);
frost$core$Object* $tmp994 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp992, $tmp993);
frost$collections$ListView* $tmp995 = org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q(param0, ((org$frostlang$frostc$Type*) $tmp994));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$collections$ListView* $tmp996 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local2) = $tmp995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$core$Frost$unref$frost$core$Object$Q($tmp994);
// line 306
frost$collections$ListView* $tmp997 = *(&local2);
frost$core$Bit $tmp998 = frost$core$Bit$init$builtin_bit($tmp997 != NULL);
bool $tmp999 = $tmp998.value;
if ($tmp999) goto block15; else goto block16;
block15:;
// line 307
frost$collections$Array* $tmp1000 = *(&local0);
frost$core$Bit $tmp1001 = frost$core$Bit$init$builtin_bit($tmp1000 == NULL);
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block17; else goto block18;
block17:;
// line 308
frost$collections$Array* $tmp1003 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1003);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
frost$collections$Array* $tmp1004 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
*(&local0) = $tmp1003;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
goto block18;
block18:;
// line 310
frost$collections$ListView* $tmp1005 = *(&local2);
ITable* $tmp1006 = ((frost$collections$Iterable*) $tmp1005)->$class->itable;
while ($tmp1006->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1006 = $tmp1006->next;
}
$fn1008 $tmp1007 = $tmp1006->methods[0];
frost$collections$Iterator* $tmp1009 = $tmp1007(((frost$collections$Iterable*) $tmp1005));
goto block19;
block19:;
ITable* $tmp1010 = $tmp1009->$class->itable;
while ($tmp1010->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1010 = $tmp1010->next;
}
$fn1012 $tmp1011 = $tmp1010->methods[0];
frost$core$Bit $tmp1013 = $tmp1011($tmp1009);
bool $tmp1014 = $tmp1013.value;
if ($tmp1014) goto block21; else goto block20;
block20:;
*(&local3) = ((frost$collections$ListView*) NULL);
ITable* $tmp1015 = $tmp1009->$class->itable;
while ($tmp1015->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1015 = $tmp1015->next;
}
$fn1017 $tmp1016 = $tmp1015->methods[1];
frost$core$Object* $tmp1018 = $tmp1016($tmp1009);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1018)));
frost$collections$ListView* $tmp1019 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
*(&local3) = ((frost$collections$ListView*) $tmp1018);
// line 311
frost$collections$Array* $tmp1020 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1021 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1020, $tmp1021);
frost$core$Int64 $tmp1022 = *(&local1);
frost$core$Int64$wrapper* $tmp1023;
$tmp1023 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1023->value = $tmp1022;
frost$collections$Array$add$frost$collections$Array$T($tmp1020, ((frost$core$Object*) $tmp1023));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$collections$Array* $tmp1024 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local4) = $tmp1020;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
// line 312
frost$collections$Array* $tmp1025 = *(&local4);
frost$collections$ListView* $tmp1026 = *(&local3);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp1025, ((frost$collections$CollectionView*) $tmp1026));
// line 313
frost$collections$Array* $tmp1027 = *(&local0);
frost$collections$Array* $tmp1028 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp1027, ((frost$core$Object*) ((frost$collections$ListView*) $tmp1028)));
frost$collections$Array* $tmp1029 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1018);
frost$collections$ListView* $tmp1030 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
*(&local3) = ((frost$collections$ListView*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
goto block16;
block16:;
frost$collections$ListView* $tmp1031 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
*(&local2) = ((frost$collections$ListView*) NULL);
goto block9;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp1032 = *(&local1);
int64_t $tmp1033 = $tmp929.value;
int64_t $tmp1034 = $tmp1032.value;
int64_t $tmp1035 = $tmp1033 - $tmp1034;
frost$core$Int64 $tmp1036 = (frost$core$Int64) {$tmp1035};
frost$core$UInt64 $tmp1037 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1036);
if ($tmp931) goto block23; else goto block24;
block23:;
uint64_t $tmp1038 = $tmp1037.value;
uint64_t $tmp1039 = $tmp933.value;
bool $tmp1040 = $tmp1038 >= $tmp1039;
frost$core$Bit $tmp1041 = (frost$core$Bit) {$tmp1040};
bool $tmp1042 = $tmp1041.value;
if ($tmp1042) goto block22; else goto block4;
block24:;
uint64_t $tmp1043 = $tmp1037.value;
uint64_t $tmp1044 = $tmp933.value;
bool $tmp1045 = $tmp1043 > $tmp1044;
frost$core$Bit $tmp1046 = (frost$core$Bit) {$tmp1045};
bool $tmp1047 = $tmp1046.value;
if ($tmp1047) goto block22; else goto block4;
block22:;
int64_t $tmp1048 = $tmp1032.value;
int64_t $tmp1049 = $tmp932.value;
int64_t $tmp1050 = $tmp1048 + $tmp1049;
frost$core$Int64 $tmp1051 = (frost$core$Int64) {$tmp1050};
*(&local1) = $tmp1051;
goto block3;
block4:;
// line 318
frost$collections$Array* $tmp1052 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1052)));
frost$collections$Array* $tmp1053 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp1052);

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$ListView* param1) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Int64 local1;
// line 323
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1054 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
*(&local0) = param0;
// line 324
ITable* $tmp1055 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp1055->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1055 = $tmp1055->next;
}
$fn1057 $tmp1056 = $tmp1055->methods[0];
frost$collections$Iterator* $tmp1058 = $tmp1056(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp1059 = $tmp1058->$class->itable;
while ($tmp1059->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1059 = $tmp1059->next;
}
$fn1061 $tmp1060 = $tmp1059->methods[0];
frost$core$Bit $tmp1062 = $tmp1060($tmp1058);
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block3; else goto block2;
block2:;
ITable* $tmp1064 = $tmp1058->$class->itable;
while ($tmp1064->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1064 = $tmp1064->next;
}
$fn1066 $tmp1065 = $tmp1064->methods[1];
frost$core$Object* $tmp1067 = $tmp1065($tmp1058);
*(&local1) = ((frost$core$Int64$wrapper*) $tmp1067)->value;
// line 325
org$frostlang$frostc$Type* $tmp1068 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp1069 = &$tmp1068->subtypes;
org$frostlang$frostc$FixedArray* $tmp1070 = *$tmp1069;
frost$core$Int64 $tmp1071 = *(&local1);
frost$core$Object* $tmp1072 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1070, $tmp1071);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1072)));
org$frostlang$frostc$Type* $tmp1073 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1072);
frost$core$Frost$unref$frost$core$Object$Q($tmp1072);
frost$core$Frost$unref$frost$core$Object$Q($tmp1067);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// line 327
org$frostlang$frostc$Type* $tmp1074 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
org$frostlang$frostc$Type* $tmp1075 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1075));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1074;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Call$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodDecl$GenericParameter* param0) {

// line 335
org$frostlang$frostc$Type** $tmp1076 = &param0->bound;
org$frostlang$frostc$Type* $tmp1077 = *$tmp1076;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
return $tmp1077;

}
org$frostlang$frostc$MethodRef* org$frostlang$frostc$expression$Call$performTypeInference$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$MethodRef$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$MethodRef* param1, frost$collections$ListView* param2) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
org$frostlang$frostc$Type* local2 = NULL;
frost$collections$ListView* local3 = NULL;
frost$collections$ListView* local4 = NULL;
org$frostlang$frostc$Pair* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
frost$core$Int64 local7;
// line 332
frost$core$Bit* $tmp1078 = &param1->requiresTypeInference;
frost$core$Bit $tmp1079 = *$tmp1078;
frost$core$Bit $tmp1080 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1079);
bool $tmp1081 = $tmp1080.value;
if ($tmp1081) goto block1; else goto block2;
block1:;
// line 333
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// line 335
frost$collections$Array* $tmp1082 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$MethodDecl** $tmp1083 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1084 = *$tmp1083;
frost$collections$Array** $tmp1085 = &$tmp1084->genericParameters;
frost$collections$Array* $tmp1086 = *$tmp1085;
frost$core$Method* $tmp1088 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp1088, ((frost$core$Int8*) org$frostlang$frostc$expression$Call$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type), ((frost$core$Immutable*) NULL));
ITable* $tmp1089 = ((frost$collections$CollectionView*) $tmp1086)->$class->itable;
while ($tmp1089->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1089 = $tmp1089->next;
}
$fn1091 $tmp1090 = $tmp1089->methods[8];
frost$collections$Array* $tmp1092 = $tmp1090(((frost$collections$CollectionView*) $tmp1086), ((frost$core$MutableMethod*) $tmp1088));
frost$collections$Array$init$frost$collections$ListView$LTfrost$collections$Array$T$GT($tmp1082, ((frost$collections$ListView*) $tmp1092));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
frost$collections$Array* $tmp1093 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
*(&local0) = $tmp1082;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
// line 336
frost$core$Int64 $tmp1094 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl** $tmp1095 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1096 = *$tmp1095;
frost$collections$Array** $tmp1097 = &$tmp1096->parameters;
frost$collections$Array* $tmp1098 = *$tmp1097;
ITable* $tmp1099 = ((frost$collections$CollectionView*) $tmp1098)->$class->itable;
while ($tmp1099->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1099 = $tmp1099->next;
}
$fn1101 $tmp1100 = $tmp1099->methods[0];
frost$core$Int64 $tmp1102 = $tmp1100(((frost$collections$CollectionView*) $tmp1098));
frost$core$Bit $tmp1103 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1104 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1094, $tmp1102, $tmp1103);
frost$core$Int64 $tmp1105 = $tmp1104.min;
*(&local1) = $tmp1105;
frost$core$Int64 $tmp1106 = $tmp1104.max;
frost$core$Bit $tmp1107 = $tmp1104.inclusive;
bool $tmp1108 = $tmp1107.value;
frost$core$Int64 $tmp1109 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1110 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1109);
if ($tmp1108) goto block6; else goto block7;
block6:;
int64_t $tmp1111 = $tmp1105.value;
int64_t $tmp1112 = $tmp1106.value;
bool $tmp1113 = $tmp1111 <= $tmp1112;
frost$core$Bit $tmp1114 = (frost$core$Bit) {$tmp1113};
bool $tmp1115 = $tmp1114.value;
if ($tmp1115) goto block3; else goto block4;
block7:;
int64_t $tmp1116 = $tmp1105.value;
int64_t $tmp1117 = $tmp1106.value;
bool $tmp1118 = $tmp1116 < $tmp1117;
frost$core$Bit $tmp1119 = (frost$core$Bit) {$tmp1118};
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block3; else goto block4;
block3:;
// line 337
frost$core$Int64 $tmp1121 = *(&local1);
org$frostlang$frostc$Type* $tmp1122 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp1121);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
org$frostlang$frostc$Type* $tmp1123 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1123));
*(&local2) = $tmp1122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
// line 338
org$frostlang$frostc$MethodDecl** $tmp1124 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1125 = *$tmp1124;
org$frostlang$frostc$Type* $tmp1126 = *(&local2);
frost$collections$ListView* $tmp1127 = org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q($tmp1125, $tmp1126);
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
frost$collections$ListView* $tmp1128 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
*(&local3) = $tmp1127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
// line 339
frost$collections$ListView* $tmp1129 = *(&local3);
frost$core$Bit $tmp1130 = frost$core$Bit$init$builtin_bit($tmp1129 != NULL);
bool $tmp1131 = $tmp1130.value;
if ($tmp1131) goto block8; else goto block9;
block8:;
// line 340
frost$collections$ListView* $tmp1132 = *(&local3);
ITable* $tmp1133 = ((frost$collections$Iterable*) $tmp1132)->$class->itable;
while ($tmp1133->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1133 = $tmp1133->next;
}
$fn1135 $tmp1134 = $tmp1133->methods[0];
frost$collections$Iterator* $tmp1136 = $tmp1134(((frost$collections$Iterable*) $tmp1132));
goto block10;
block10:;
ITable* $tmp1137 = $tmp1136->$class->itable;
while ($tmp1137->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1137 = $tmp1137->next;
}
$fn1139 $tmp1138 = $tmp1137->methods[0];
frost$core$Bit $tmp1140 = $tmp1138($tmp1136);
bool $tmp1141 = $tmp1140.value;
if ($tmp1141) goto block12; else goto block11;
block11:;
*(&local4) = ((frost$collections$ListView*) NULL);
ITable* $tmp1142 = $tmp1136->$class->itable;
while ($tmp1142->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1142 = $tmp1142->next;
}
$fn1144 $tmp1143 = $tmp1142->methods[1];
frost$core$Object* $tmp1145 = $tmp1143($tmp1136);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1145)));
frost$collections$ListView* $tmp1146 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local4) = ((frost$collections$ListView*) $tmp1145);
// line 341
frost$core$Int64 $tmp1147 = *(&local1);
ITable* $tmp1148 = param2->$class->itable;
while ($tmp1148->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1148 = $tmp1148->next;
}
$fn1150 $tmp1149 = $tmp1148->methods[0];
frost$core$Object* $tmp1151 = $tmp1149(param2, $tmp1147);
org$frostlang$frostc$Type* $tmp1152 = *(&local2);
org$frostlang$frostc$Pair* $tmp1153 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1151), $tmp1152);
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
org$frostlang$frostc$Pair* $tmp1154 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1154));
*(&local5) = $tmp1153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
frost$core$Frost$unref$frost$core$Object$Q($tmp1151);
// line 342
org$frostlang$frostc$Pair* $tmp1155 = *(&local5);
frost$core$Bit $tmp1156 = frost$core$Bit$init$builtin_bit($tmp1155 == NULL);
bool $tmp1157 = $tmp1156.value;
if ($tmp1157) goto block13; else goto block14;
block13:;
// line 343
frost$core$Int64 $tmp1158 = *(&local1);
ITable* $tmp1159 = param2->$class->itable;
while ($tmp1159->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1159 = $tmp1159->next;
}
$fn1161 $tmp1160 = $tmp1159->methods[0];
frost$core$Object* $tmp1162 = $tmp1160(param2, $tmp1158);
frost$core$String* $tmp1163 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1164, ((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1162)));
frost$core$String* $tmp1165 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1163, &$s1166);
org$frostlang$frostc$Type* $tmp1167 = *(&local2);
frost$core$String* $tmp1168 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1165, ((frost$core$Object*) $tmp1167));
frost$core$String* $tmp1169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1168, &$s1170);
frost$io$Console$printLine$frost$core$String($tmp1169);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$Frost$unref$frost$core$Object$Q($tmp1162);
// line 344
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Pair* $tmp1171 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1145);
frost$collections$ListView* $tmp1172 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
frost$collections$ListView* $tmp1173 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
*(&local3) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Type* $tmp1174 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1175 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
*(&local0) = ((frost$collections$Array*) NULL);
return param1;
block14:;
// line 346
org$frostlang$frostc$MethodDecl** $tmp1176 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1177 = *$tmp1176;
frost$collections$Array** $tmp1178 = &$tmp1177->parameters;
frost$collections$Array* $tmp1179 = *$tmp1178;
frost$core$Int64 $tmp1180 = *(&local1);
frost$core$Object* $tmp1181 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1179, $tmp1180);
org$frostlang$frostc$Type** $tmp1182 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1181)->type;
org$frostlang$frostc$Type* $tmp1183 = *$tmp1182;
frost$collections$ListView* $tmp1184 = *(&local4);
org$frostlang$frostc$Type* $tmp1185 = org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type($tmp1183, $tmp1184);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
org$frostlang$frostc$Type* $tmp1186 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
*(&local6) = $tmp1185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$core$Frost$unref$frost$core$Object$Q($tmp1181);
// line 347
org$frostlang$frostc$Type* $tmp1187 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp1188 = &$tmp1187->typeKind;
org$frostlang$frostc$Type$Kind $tmp1189 = *$tmp1188;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1190;
$tmp1190 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1190->value = $tmp1189;
frost$core$Int64 $tmp1191 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp1192 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1191);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1193;
$tmp1193 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1193->value = $tmp1192;
ITable* $tmp1194 = ((frost$core$Equatable*) $tmp1190)->$class->itable;
while ($tmp1194->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1194 = $tmp1194->next;
}
$fn1196 $tmp1195 = $tmp1194->methods[0];
frost$core$Bit $tmp1197 = $tmp1195(((frost$core$Equatable*) $tmp1190), ((frost$core$Equatable*) $tmp1193));
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1199 = (frost$core$Int64) {347};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1200, $tmp1199);
abort(); // unreachable
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1193)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1190)));
// line 348
frost$core$Int64 $tmp1201 = (frost$core$Int64) {0};
*(&local7) = $tmp1201;
// line 349
goto block17;
block17:;
org$frostlang$frostc$Type* $tmp1202 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
org$frostlang$frostc$MethodDecl** $tmp1203 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1204 = *$tmp1203;
frost$collections$Array** $tmp1205 = &$tmp1204->genericParameters;
frost$collections$Array* $tmp1206 = *$tmp1205;
frost$core$Int64 $tmp1207 = *(&local1);
frost$core$Object* $tmp1208 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1206, $tmp1207);
org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodDecl$GenericParameter($tmp1202, ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1208));
org$frostlang$frostc$Type* $tmp1209 = *(&local6);
ITable* $tmp1210 = ((frost$core$Equatable*) $tmp1202)->$class->itable;
while ($tmp1210->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1210 = $tmp1210->next;
}
$fn1212 $tmp1211 = $tmp1210->methods[1];
frost$core$Bit $tmp1213 = $tmp1211(((frost$core$Equatable*) $tmp1202), ((frost$core$Equatable*) $tmp1209));
bool $tmp1214 = $tmp1213.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1208);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
if ($tmp1214) goto block18; else goto block19;
block18:;
// line 350
frost$core$Int64 $tmp1215 = *(&local7);
frost$core$Int64 $tmp1216 = (frost$core$Int64) {1};
int64_t $tmp1217 = $tmp1215.value;
int64_t $tmp1218 = $tmp1216.value;
int64_t $tmp1219 = $tmp1217 + $tmp1218;
frost$core$Int64 $tmp1220 = (frost$core$Int64) {$tmp1219};
*(&local7) = $tmp1220;
goto block17;
block19:;
// line 352
frost$collections$Array* $tmp1221 = *(&local0);
frost$core$Int64 $tmp1222 = *(&local7);
frost$collections$Array* $tmp1223 = *(&local0);
frost$core$Int64 $tmp1224 = *(&local7);
frost$core$Object* $tmp1225 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1223, $tmp1224);
org$frostlang$frostc$Pair* $tmp1226 = *(&local5);
frost$core$Object** $tmp1227 = &$tmp1226->first;
frost$core$Object* $tmp1228 = *$tmp1227;
frost$collections$ListView* $tmp1229 = *(&local4);
org$frostlang$frostc$Type* $tmp1230 = org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1228), $tmp1229);
org$frostlang$frostc$Type* $tmp1231 = org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1225), param0, $tmp1230);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp1221, $tmp1222, ((frost$core$Object*) $tmp1231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
frost$core$Frost$unref$frost$core$Object$Q($tmp1225);
org$frostlang$frostc$Type* $tmp1232 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp1233 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1145);
frost$collections$ListView* $tmp1234 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
*(&local4) = ((frost$collections$ListView*) NULL);
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1136));
goto block9;
block9:;
frost$collections$ListView* $tmp1235 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local3) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Type* $tmp1236 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp1237 = *(&local1);
int64_t $tmp1238 = $tmp1106.value;
int64_t $tmp1239 = $tmp1237.value;
int64_t $tmp1240 = $tmp1238 - $tmp1239;
frost$core$Int64 $tmp1241 = (frost$core$Int64) {$tmp1240};
frost$core$UInt64 $tmp1242 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1241);
if ($tmp1108) goto block21; else goto block22;
block21:;
uint64_t $tmp1243 = $tmp1242.value;
uint64_t $tmp1244 = $tmp1110.value;
bool $tmp1245 = $tmp1243 >= $tmp1244;
frost$core$Bit $tmp1246 = (frost$core$Bit) {$tmp1245};
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block20; else goto block4;
block22:;
uint64_t $tmp1248 = $tmp1242.value;
uint64_t $tmp1249 = $tmp1110.value;
bool $tmp1250 = $tmp1248 > $tmp1249;
frost$core$Bit $tmp1251 = (frost$core$Bit) {$tmp1250};
bool $tmp1252 = $tmp1251.value;
if ($tmp1252) goto block20; else goto block4;
block20:;
int64_t $tmp1253 = $tmp1237.value;
int64_t $tmp1254 = $tmp1109.value;
int64_t $tmp1255 = $tmp1253 + $tmp1254;
frost$core$Int64 $tmp1256 = (frost$core$Int64) {$tmp1255};
*(&local1) = $tmp1256;
goto block3;
block4:;
// line 357
org$frostlang$frostc$MethodRef* $tmp1257 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type** $tmp1258 = &param1->target;
org$frostlang$frostc$Type* $tmp1259 = *$tmp1258;
org$frostlang$frostc$MethodDecl** $tmp1260 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1261 = *$tmp1260;
frost$collections$Array* $tmp1262 = *(&local0);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1257, param0, $tmp1259, $tmp1261, ((frost$collections$ListView*) $tmp1262));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$collections$Array* $tmp1263 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1257;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3, frost$collections$ListView* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

// line 364
org$frostlang$frostc$Pair* $tmp1264 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, param2, param3, ((frost$collections$ListView*) NULL), param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1264));
return $tmp1264;

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
// line 372
ITable* $tmp1265 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1265->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1265 = $tmp1265->next;
}
$fn1267 $tmp1266 = $tmp1265->methods[0];
frost$core$Int64 $tmp1268 = $tmp1266(((frost$collections$CollectionView*) param3));
frost$core$Int64 $tmp1269 = (frost$core$Int64) {0};
frost$core$Bit $tmp1270 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1268, $tmp1269);
bool $tmp1271 = $tmp1270.value;
if ($tmp1271) goto block7; else goto block8;
block7:;
// line 373
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block8:;
// line 375
frost$core$Int64 $tmp1272 = (frost$core$Int64) {9223372036854775807};
*(&local2) = $tmp1272;
// line 376
frost$collections$Array* $tmp1273 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1273);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
frost$collections$Array* $tmp1274 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local3) = $tmp1273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
// line 377
ITable* $tmp1275 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp1275->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1275 = $tmp1275->next;
}
$fn1277 $tmp1276 = $tmp1275->methods[0];
frost$collections$Iterator* $tmp1278 = $tmp1276(((frost$collections$Iterable*) param3));
goto block9;
block9:;
ITable* $tmp1279 = $tmp1278->$class->itable;
while ($tmp1279->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1279 = $tmp1279->next;
}
$fn1281 $tmp1280 = $tmp1279->methods[0];
frost$core$Bit $tmp1282 = $tmp1280($tmp1278);
bool $tmp1283 = $tmp1282.value;
if ($tmp1283) goto block11; else goto block10;
block10:;
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1284 = $tmp1278->$class->itable;
while ($tmp1284->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1284 = $tmp1284->next;
}
$fn1286 $tmp1285 = $tmp1284->methods[1];
frost$core$Object* $tmp1287 = $tmp1285($tmp1278);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1287)));
org$frostlang$frostc$MethodDecl* $tmp1288 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) $tmp1287);
// line 378
org$frostlang$frostc$MethodDecl* $tmp1289 = *(&local4);
frost$collections$Array** $tmp1290 = &$tmp1289->parameters;
frost$collections$Array* $tmp1291 = *$tmp1290;
ITable* $tmp1292 = ((frost$collections$CollectionView*) $tmp1291)->$class->itable;
while ($tmp1292->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1292 = $tmp1292->next;
}
$fn1294 $tmp1293 = $tmp1292->methods[0];
frost$core$Int64 $tmp1295 = $tmp1293(((frost$collections$CollectionView*) $tmp1291));
ITable* $tmp1296 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp1296->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1296 = $tmp1296->next;
}
$fn1298 $tmp1297 = $tmp1296->methods[0];
frost$core$Int64 $tmp1299 = $tmp1297(((frost$collections$CollectionView*) param5));
int64_t $tmp1300 = $tmp1295.value;
int64_t $tmp1301 = $tmp1299.value;
bool $tmp1302 = $tmp1300 != $tmp1301;
frost$core$Bit $tmp1303 = (frost$core$Bit) {$tmp1302};
bool $tmp1304 = $tmp1303.value;
if ($tmp1304) goto block12; else goto block13;
block12:;
// line 379
frost$core$Frost$unref$frost$core$Object$Q($tmp1287);
org$frostlang$frostc$MethodDecl* $tmp1305 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block13:;
// line 381
org$frostlang$frostc$MethodDecl* $tmp1306 = *(&local4);
frost$core$Bit $tmp1307 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp1306);
frost$core$Bit $tmp1308 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1307);
bool $tmp1309 = $tmp1308.value;
if ($tmp1309) goto block14; else goto block15;
block14:;
// line 382
frost$core$Frost$unref$frost$core$Object$Q($tmp1287);
org$frostlang$frostc$MethodDecl* $tmp1310 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block15:;
// line 384
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
// line 385
frost$core$Bit $tmp1311 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block16; else goto block18;
block16:;
// line 386
$fn1314 $tmp1313 = ($fn1314) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1315 = $tmp1313(param2);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
org$frostlang$frostc$Type* $tmp1316 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
*(&local6) = $tmp1315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
// line 387
org$frostlang$frostc$Type* $tmp1317 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp1318 = &$tmp1317->typeKind;
org$frostlang$frostc$Type$Kind $tmp1319 = *$tmp1318;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1320;
$tmp1320 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1320->value = $tmp1319;
frost$core$Int64 $tmp1321 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp1322 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1321);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1323;
$tmp1323 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1323->value = $tmp1322;
ITable* $tmp1324 = ((frost$core$Equatable*) $tmp1320)->$class->itable;
while ($tmp1324->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1324 = $tmp1324->next;
}
$fn1326 $tmp1325 = $tmp1324->methods[0];
frost$core$Bit $tmp1327 = $tmp1325(((frost$core$Equatable*) $tmp1320), ((frost$core$Equatable*) $tmp1323));
bool $tmp1328 = $tmp1327.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1323)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1320)));
if ($tmp1328) goto block19; else goto block20;
block19:;
// line 388
org$frostlang$frostc$Type* $tmp1329 = *(&local6);
frost$core$Weak** $tmp1330 = &$tmp1329->genericMethodParameter;
frost$core$Weak* $tmp1331 = *$tmp1330;
frost$core$Object* $tmp1332 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1331);
org$frostlang$frostc$Type** $tmp1333 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1332)->bound;
org$frostlang$frostc$Type* $tmp1334 = *$tmp1333;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
org$frostlang$frostc$Type* $tmp1335 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local6) = $tmp1334;
frost$core$Frost$unref$frost$core$Object$Q($tmp1332);
goto block20;
block20:;
// line 390
org$frostlang$frostc$MethodRef* $tmp1336 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp1337 = *(&local6);
org$frostlang$frostc$MethodDecl* $tmp1338 = *(&local4);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1336, param0, $tmp1337, $tmp1338, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
org$frostlang$frostc$MethodRef* $tmp1339 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
*(&local5) = $tmp1336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
org$frostlang$frostc$Type* $tmp1340 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
goto block17;
block18:;
// line 392
org$frostlang$frostc$MethodDecl* $tmp1341 = *(&local4);
org$frostlang$frostc$Annotations** $tmp1342 = &$tmp1341->annotations;
org$frostlang$frostc$Annotations* $tmp1343 = *$tmp1342;
frost$core$Bit $tmp1344 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1343);
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block21; else goto block24;
block24:;
org$frostlang$frostc$MethodDecl* $tmp1346 = *(&local4);
org$frostlang$frostc$MethodDecl$Kind* $tmp1347 = &$tmp1346->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1348 = *$tmp1347;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1349;
$tmp1349 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1349->value = $tmp1348;
frost$core$Int64 $tmp1350 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1351 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1350);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1352;
$tmp1352 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1352->value = $tmp1351;
ITable* $tmp1353 = ((frost$core$Equatable*) $tmp1349)->$class->itable;
while ($tmp1353->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1353 = $tmp1353->next;
}
$fn1355 $tmp1354 = $tmp1353->methods[0];
frost$core$Bit $tmp1356 = $tmp1354(((frost$core$Equatable*) $tmp1349), ((frost$core$Equatable*) $tmp1352));
bool $tmp1357 = $tmp1356.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1352)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1349)));
if ($tmp1357) goto block21; else goto block23;
block21:;
// line 393
org$frostlang$frostc$MethodRef* $tmp1358 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$MethodDecl* $tmp1359 = *(&local4);
frost$core$Weak** $tmp1360 = &$tmp1359->owner;
frost$core$Weak* $tmp1361 = *$tmp1360;
frost$core$Object* $tmp1362 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1361);
org$frostlang$frostc$Type** $tmp1363 = &((org$frostlang$frostc$ClassDecl*) $tmp1362)->type;
org$frostlang$frostc$Type* $tmp1364 = *$tmp1363;
org$frostlang$frostc$MethodDecl* $tmp1365 = *(&local4);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1358, param0, $tmp1364, $tmp1365, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
org$frostlang$frostc$MethodRef* $tmp1366 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
*(&local5) = $tmp1358;
frost$core$Frost$unref$frost$core$Object$Q($tmp1362);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1358));
goto block22;
block23:;
// line 1
// line 396
org$frostlang$frostc$MethodRef* $tmp1367 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
frost$collections$Stack** $tmp1368 = &param0->currentClass;
frost$collections$Stack* $tmp1369 = *$tmp1368;
frost$core$Int64 $tmp1370 = (frost$core$Int64) {0};
frost$core$Object* $tmp1371 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1369, $tmp1370);
org$frostlang$frostc$Type** $tmp1372 = &((org$frostlang$frostc$ClassDecl*) $tmp1371)->type;
org$frostlang$frostc$Type* $tmp1373 = *$tmp1372;
org$frostlang$frostc$MethodDecl* $tmp1374 = *(&local4);
frost$core$Weak** $tmp1375 = &$tmp1374->owner;
frost$core$Weak* $tmp1376 = *$tmp1375;
frost$core$Object* $tmp1377 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1376);
org$frostlang$frostc$Type* $tmp1378 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp1373, ((org$frostlang$frostc$ClassDecl*) $tmp1377));
org$frostlang$frostc$MethodDecl* $tmp1379 = *(&local4);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1367, param0, $tmp1378, $tmp1379, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
org$frostlang$frostc$MethodRef* $tmp1380 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
*(&local5) = $tmp1367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q($tmp1377);
frost$core$Frost$unref$frost$core$Object$Q($tmp1371);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
goto block22;
block22:;
goto block17;
block17:;
// line 399
org$frostlang$frostc$MethodRef* $tmp1381 = *(&local5);
org$frostlang$frostc$MethodRef* $tmp1382 = org$frostlang$frostc$expression$Call$performTypeInference$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$MethodRef$Q(param0, $tmp1381, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
org$frostlang$frostc$MethodRef* $tmp1383 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
*(&local5) = $tmp1382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1382));
// line 400
frost$core$Int64 $tmp1384 = (frost$core$Int64) {0};
*(&local7) = $tmp1384;
// line 401
frost$core$Int64 $tmp1385 = (frost$core$Int64) {0};
ITable* $tmp1386 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp1386->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1386 = $tmp1386->next;
}
$fn1388 $tmp1387 = $tmp1386->methods[0];
frost$core$Int64 $tmp1389 = $tmp1387(((frost$collections$CollectionView*) param5));
frost$core$Bit $tmp1390 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1391 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1385, $tmp1389, $tmp1390);
frost$core$Int64 $tmp1392 = $tmp1391.min;
*(&local8) = $tmp1392;
frost$core$Int64 $tmp1393 = $tmp1391.max;
frost$core$Bit $tmp1394 = $tmp1391.inclusive;
bool $tmp1395 = $tmp1394.value;
frost$core$Int64 $tmp1396 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1397 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1396);
if ($tmp1395) goto block28; else goto block29;
block28:;
int64_t $tmp1398 = $tmp1392.value;
int64_t $tmp1399 = $tmp1393.value;
bool $tmp1400 = $tmp1398 <= $tmp1399;
frost$core$Bit $tmp1401 = (frost$core$Bit) {$tmp1400};
bool $tmp1402 = $tmp1401.value;
if ($tmp1402) goto block25; else goto block26;
block29:;
int64_t $tmp1403 = $tmp1392.value;
int64_t $tmp1404 = $tmp1393.value;
bool $tmp1405 = $tmp1403 < $tmp1404;
frost$core$Bit $tmp1406 = (frost$core$Bit) {$tmp1405};
bool $tmp1407 = $tmp1406.value;
if ($tmp1407) goto block25; else goto block26;
block25:;
// line 402
frost$core$Int64 $tmp1408 = *(&local8);
ITable* $tmp1409 = param5->$class->itable;
while ($tmp1409->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1409 = $tmp1409->next;
}
$fn1411 $tmp1410 = $tmp1409->methods[0];
frost$core$Object* $tmp1412 = $tmp1410(param5, $tmp1408);
org$frostlang$frostc$MethodRef* $tmp1413 = *(&local5);
frost$core$Int64 $tmp1414 = *(&local8);
org$frostlang$frostc$Type* $tmp1415 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1413, $tmp1414);
org$frostlang$frostc$Pair* $tmp1416 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1412), $tmp1415);
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
org$frostlang$frostc$Pair* $tmp1417 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1417));
*(&local9) = $tmp1416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1415));
frost$core$Frost$unref$frost$core$Object$Q($tmp1412);
// line 403
org$frostlang$frostc$Pair* $tmp1418 = *(&local9);
frost$core$Bit $tmp1419 = frost$core$Bit$init$builtin_bit($tmp1418 == NULL);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block30; else goto block31;
block30:;
// line 404
org$frostlang$frostc$Pair* $tmp1421 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp1422 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1287);
org$frostlang$frostc$MethodDecl* $tmp1423 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block31:;
// line 406
frost$core$Int64 $tmp1424 = *(&local7);
org$frostlang$frostc$Pair* $tmp1425 = *(&local9);
frost$core$Object** $tmp1426 = &$tmp1425->second;
frost$core$Object* $tmp1427 = *$tmp1426;
int64_t $tmp1428 = $tmp1424.value;
int64_t $tmp1429 = ((frost$core$Int64$wrapper*) $tmp1427)->value.value;
int64_t $tmp1430 = $tmp1428 + $tmp1429;
frost$core$Int64 $tmp1431 = (frost$core$Int64) {$tmp1430};
*(&local7) = $tmp1431;
org$frostlang$frostc$Pair* $tmp1432 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
*(&local9) = ((org$frostlang$frostc$Pair*) NULL);
goto block27;
block27:;
frost$core$Int64 $tmp1433 = *(&local8);
int64_t $tmp1434 = $tmp1393.value;
int64_t $tmp1435 = $tmp1433.value;
int64_t $tmp1436 = $tmp1434 - $tmp1435;
frost$core$Int64 $tmp1437 = (frost$core$Int64) {$tmp1436};
frost$core$UInt64 $tmp1438 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1437);
if ($tmp1395) goto block33; else goto block34;
block33:;
uint64_t $tmp1439 = $tmp1438.value;
uint64_t $tmp1440 = $tmp1397.value;
bool $tmp1441 = $tmp1439 >= $tmp1440;
frost$core$Bit $tmp1442 = (frost$core$Bit) {$tmp1441};
bool $tmp1443 = $tmp1442.value;
if ($tmp1443) goto block32; else goto block26;
block34:;
uint64_t $tmp1444 = $tmp1438.value;
uint64_t $tmp1445 = $tmp1397.value;
bool $tmp1446 = $tmp1444 > $tmp1445;
frost$core$Bit $tmp1447 = (frost$core$Bit) {$tmp1446};
bool $tmp1448 = $tmp1447.value;
if ($tmp1448) goto block32; else goto block26;
block32:;
int64_t $tmp1449 = $tmp1433.value;
int64_t $tmp1450 = $tmp1396.value;
int64_t $tmp1451 = $tmp1449 + $tmp1450;
frost$core$Int64 $tmp1452 = (frost$core$Int64) {$tmp1451};
*(&local8) = $tmp1452;
goto block25;
block26:;
// line 408
frost$core$Int64* $tmp1453 = &param6->$rawValue;
frost$core$Int64 $tmp1454 = *$tmp1453;
frost$core$Int64 $tmp1455 = (frost$core$Int64) {2};
frost$core$Bit $tmp1456 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1454, $tmp1455);
bool $tmp1457 = $tmp1456.value;
if ($tmp1457) goto block36; else goto block37;
block36:;
// line 410
org$frostlang$frostc$MethodDecl* $tmp1458 = *(&local4);
org$frostlang$frostc$Type** $tmp1459 = &$tmp1458->returnType;
org$frostlang$frostc$Type* $tmp1460 = *$tmp1459;
org$frostlang$frostc$Type* $tmp1461 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1462 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1460, $tmp1461);
bool $tmp1463 = $tmp1462.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
if ($tmp1463) goto block38; else goto block40;
block40:;
org$frostlang$frostc$MethodRef* $tmp1464 = *(&local5);
org$frostlang$frostc$Type* $tmp1465 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type($tmp1464);
frost$core$Bit $tmp1466 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1465);
frost$core$Bit $tmp1467 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1466);
bool $tmp1468 = $tmp1467.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1465));
if ($tmp1468) goto block38; else goto block39;
block38:;
// line 411
org$frostlang$frostc$MethodRef* $tmp1469 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1287);
org$frostlang$frostc$MethodDecl* $tmp1470 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block39:;
goto block35;
block37:;
frost$core$Int64 $tmp1471 = (frost$core$Int64) {3};
frost$core$Bit $tmp1472 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1454, $tmp1471);
bool $tmp1473 = $tmp1472.value;
if ($tmp1473) goto block41; else goto block35;
block41:;
org$frostlang$frostc$Type** $tmp1474 = (org$frostlang$frostc$Type**) (param6->$data + 0);
org$frostlang$frostc$Type* $tmp1475 = *$tmp1474;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1475));
org$frostlang$frostc$Type* $tmp1476 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
*(&local10) = $tmp1475;
frost$core$Bit* $tmp1477 = (frost$core$Bit*) (param6->$data + 8);
frost$core$Bit $tmp1478 = *$tmp1477;
// line 415
org$frostlang$frostc$MethodRef* $tmp1479 = *(&local5);
org$frostlang$frostc$Type* $tmp1480 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type($tmp1479);
org$frostlang$frostc$Type* $tmp1481 = *(&local10);
org$frostlang$frostc$Pair* $tmp1482 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, $tmp1480, $tmp1481);
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
org$frostlang$frostc$Pair* $tmp1483 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
*(&local11) = $tmp1482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1480));
// line 416
org$frostlang$frostc$Pair* $tmp1484 = *(&local11);
frost$core$Bit $tmp1485 = frost$core$Bit$init$builtin_bit($tmp1484 == NULL);
bool $tmp1486 = $tmp1485.value;
if ($tmp1486) goto block42; else goto block43;
block42:;
// line 417
org$frostlang$frostc$Pair* $tmp1487 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1488 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1488));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp1489 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1287);
org$frostlang$frostc$MethodDecl* $tmp1490 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block43:;
// line 419
frost$core$Int64 $tmp1491 = *(&local7);
org$frostlang$frostc$Pair* $tmp1492 = *(&local11);
frost$core$Object** $tmp1493 = &$tmp1492->second;
frost$core$Object* $tmp1494 = *$tmp1493;
int64_t $tmp1495 = $tmp1491.value;
int64_t $tmp1496 = ((frost$core$Int64$wrapper*) $tmp1494)->value.value;
int64_t $tmp1497 = $tmp1495 + $tmp1496;
frost$core$Int64 $tmp1498 = (frost$core$Int64) {$tmp1497};
*(&local7) = $tmp1498;
org$frostlang$frostc$Pair* $tmp1499 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
*(&local11) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1500 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1500));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block35;
block35:;
// line 422
frost$core$Int64 $tmp1501 = *(&local7);
org$frostlang$frostc$MethodDecl* $tmp1502 = *(&local4);
frost$core$Int64 $tmp1503 = org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64($tmp1502);
int64_t $tmp1504 = $tmp1501.value;
int64_t $tmp1505 = $tmp1503.value;
int64_t $tmp1506 = $tmp1504 - $tmp1505;
frost$core$Int64 $tmp1507 = (frost$core$Int64) {$tmp1506};
*(&local7) = $tmp1507;
// line 423
frost$core$Int64 $tmp1508 = *(&local7);
frost$core$Int64 $tmp1509 = *(&local2);
int64_t $tmp1510 = $tmp1508.value;
int64_t $tmp1511 = $tmp1509.value;
bool $tmp1512 = $tmp1510 < $tmp1511;
frost$core$Bit $tmp1513 = (frost$core$Bit) {$tmp1512};
bool $tmp1514 = $tmp1513.value;
if ($tmp1514) goto block44; else goto block45;
block44:;
// line 424
frost$core$Int64 $tmp1515 = *(&local7);
*(&local2) = $tmp1515;
// line 425
frost$collections$Array* $tmp1516 = *(&local3);
frost$collections$Array$clear($tmp1516);
goto block45;
block45:;
// line 427
frost$core$Int64 $tmp1517 = *(&local7);
frost$core$Int64 $tmp1518 = *(&local2);
frost$core$Bit $tmp1519 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1517, $tmp1518);
bool $tmp1520 = $tmp1519.value;
if ($tmp1520) goto block46; else goto block47;
block46:;
// line 428
frost$collections$Array* $tmp1521 = *(&local3);
org$frostlang$frostc$MethodRef* $tmp1522 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp1521, ((frost$core$Object*) $tmp1522));
goto block47;
block47:;
org$frostlang$frostc$MethodRef* $tmp1523 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1287);
org$frostlang$frostc$MethodDecl* $tmp1524 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
// line 431
frost$collections$Array* $tmp1525 = *(&local3);
ITable* $tmp1526 = ((frost$collections$CollectionView*) $tmp1525)->$class->itable;
while ($tmp1526->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1526 = $tmp1526->next;
}
$fn1528 $tmp1527 = $tmp1526->methods[0];
frost$core$Int64 $tmp1529 = $tmp1527(((frost$collections$CollectionView*) $tmp1525));
frost$core$Int64 $tmp1530 = (frost$core$Int64) {0};
frost$core$Bit $tmp1531 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1529, $tmp1530);
bool $tmp1532 = $tmp1531.value;
if ($tmp1532) goto block48; else goto block49;
block48:;
// line 432
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp1533 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1533));
*(&local3) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block49:;
// line 434
org$frostlang$frostc$Pair* $tmp1534 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp1535 = *(&local3);
frost$core$Int64 $tmp1536 = *(&local2);
frost$core$Int64$wrapper* $tmp1537;
$tmp1537 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1537->value = $tmp1536;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1534, ((frost$core$Object*) ((frost$collections$ListView*) $tmp1535)), ((frost$core$Object*) $tmp1537));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1537));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1534));
frost$collections$Array* $tmp1538 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
*(&local3) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp1534;
goto block1;
block1:;
org$frostlang$frostc$Pair* $tmp1539 = *(&local0);
frost$core$Bit $tmp1540 = frost$core$Bit$init$builtin_bit($tmp1539 == NULL);
bool $tmp1541 = $tmp1540.value;
if ($tmp1541) goto block2; else goto block3;
block2:;
*(&local1) = $tmp1540;
goto block4;
block3:;
org$frostlang$frostc$Pair* $tmp1542 = *(&local0);
frost$core$Object** $tmp1543 = &$tmp1542->first;
frost$core$Object* $tmp1544 = *$tmp1543;
ITable* $tmp1545 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp1544))->$class->itable;
while ($tmp1545->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1545 = $tmp1545->next;
}
$fn1547 $tmp1546 = $tmp1545->methods[0];
frost$core$Int64 $tmp1548 = $tmp1546(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp1544)));
frost$core$Int64 $tmp1549 = (frost$core$Int64) {0};
int64_t $tmp1550 = $tmp1548.value;
int64_t $tmp1551 = $tmp1549.value;
bool $tmp1552 = $tmp1550 > $tmp1551;
frost$core$Bit $tmp1553 = (frost$core$Bit) {$tmp1552};
*(&local1) = $tmp1553;
goto block4;
block4:;
frost$core$Bit $tmp1554 = *(&local1);
bool $tmp1555 = $tmp1554.value;
if ($tmp1555) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Pair* $tmp1556 = *(&local0);
return $tmp1556;
block6:;
frost$core$Int64 $tmp1557 = (frost$core$Int64) {369};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1558, $tmp1557, &$s1559);
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
// line 440
org$frostlang$frostc$IR** $tmp1560 = &param0->ir;
org$frostlang$frostc$IR* $tmp1561 = *$tmp1560;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1561));
org$frostlang$frostc$IR* $tmp1562 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1562));
*(&local0) = $tmp1561;
// line 441
$fn1564 $tmp1563 = ($fn1564) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1565 = $tmp1563(param2);
org$frostlang$frostc$Type* $tmp1566 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp1565);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
org$frostlang$frostc$Type* $tmp1567 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
*(&local1) = $tmp1566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1565));
// line 442
org$frostlang$frostc$Type* $tmp1568 = *(&local1);
frost$core$Bit $tmp1569 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp1568);
frost$core$Bit $tmp1570 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1569);
bool $tmp1571 = $tmp1570.value;
if ($tmp1571) goto block1; else goto block2;
block1:;
// line 443
org$frostlang$frostc$Type* $tmp1572 = *(&local1);
frost$core$String* $tmp1573 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1574, ((frost$core$Object*) $tmp1572));
frost$core$String* $tmp1575 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1573, &$s1576);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1575);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
// line 444
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1577 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1577));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1578 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1578));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 446
org$frostlang$frostc$Type* $tmp1579 = *(&local1);
frost$core$Int64 $tmp1580 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1579);
ITable* $tmp1581 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1581->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1581 = $tmp1581->next;
}
$fn1583 $tmp1582 = $tmp1581->methods[0];
frost$core$Int64 $tmp1584 = $tmp1582(((frost$collections$CollectionView*) param3));
int64_t $tmp1585 = $tmp1580.value;
int64_t $tmp1586 = $tmp1584.value;
bool $tmp1587 = $tmp1585 != $tmp1586;
frost$core$Bit $tmp1588 = (frost$core$Bit) {$tmp1587};
bool $tmp1589 = $tmp1588.value;
if ($tmp1589) goto block3; else goto block4;
block3:;
// line 447
org$frostlang$frostc$Type* $tmp1590 = *(&local1);
frost$core$String* $tmp1591 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1592, ((frost$core$Object*) $tmp1590));
frost$core$String* $tmp1593 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1591, &$s1594);
org$frostlang$frostc$Type* $tmp1595 = *(&local1);
frost$core$Int64 $tmp1596 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1595);
frost$core$Int64$wrapper* $tmp1597;
$tmp1597 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1597->value = $tmp1596;
frost$core$String* $tmp1598 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1593, ((frost$core$Object*) $tmp1597));
frost$core$String* $tmp1599 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1598, &$s1600);
org$frostlang$frostc$Type* $tmp1601 = *(&local1);
frost$core$Int64 $tmp1602 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1601);
frost$core$Int64 $tmp1603 = (frost$core$Int64) {1};
frost$core$Bit $tmp1604 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1602, $tmp1603);
frost$core$Bit$wrapper* $tmp1605;
$tmp1605 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1605->value = $tmp1604;
ITable* $tmp1606 = ((frost$core$Formattable*) $tmp1605)->$class->itable;
while ($tmp1606->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp1606 = $tmp1606->next;
}
$fn1608 $tmp1607 = $tmp1606->methods[0];
frost$core$String* $tmp1609 = $tmp1607(((frost$core$Formattable*) $tmp1605), &$s1610);
frost$core$String* $tmp1611 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1612, $tmp1609);
frost$core$String* $tmp1613 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1611, &$s1614);
ITable* $tmp1615 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1615->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1615 = $tmp1615->next;
}
$fn1617 $tmp1616 = $tmp1615->methods[0];
frost$core$Int64 $tmp1618 = $tmp1616(((frost$collections$CollectionView*) param3));
frost$core$Int64$wrapper* $tmp1619;
$tmp1619 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1619->value = $tmp1618;
frost$core$String* $tmp1620 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1613, ((frost$core$Object*) $tmp1619));
frost$core$String* $tmp1621 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1620, &$s1622);
frost$core$String* $tmp1623 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1599, $tmp1621);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1623);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1609));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp1605)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1599));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1597));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1593));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1591));
// line 449
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1624 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1624));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1625 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1625));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// line 451
frost$collections$Array* $tmp1626 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp1627 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1627->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1627 = $tmp1627->next;
}
$fn1629 $tmp1628 = $tmp1627->methods[0];
frost$core$Int64 $tmp1630 = $tmp1628(((frost$collections$CollectionView*) param3));
frost$collections$Array$init$frost$core$Int64($tmp1626, $tmp1630);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
frost$collections$Array* $tmp1631 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
*(&local2) = $tmp1626;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
// line 452
frost$core$Int64 $tmp1632 = (frost$core$Int64) {0};
ITable* $tmp1633 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1633->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1633 = $tmp1633->next;
}
$fn1635 $tmp1634 = $tmp1633->methods[0];
frost$core$Int64 $tmp1636 = $tmp1634(((frost$collections$CollectionView*) param3));
frost$core$Bit $tmp1637 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1638 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1632, $tmp1636, $tmp1637);
frost$core$Int64 $tmp1639 = $tmp1638.min;
*(&local3) = $tmp1639;
frost$core$Int64 $tmp1640 = $tmp1638.max;
frost$core$Bit $tmp1641 = $tmp1638.inclusive;
bool $tmp1642 = $tmp1641.value;
frost$core$Int64 $tmp1643 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1644 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1643);
if ($tmp1642) goto block8; else goto block9;
block8:;
int64_t $tmp1645 = $tmp1639.value;
int64_t $tmp1646 = $tmp1640.value;
bool $tmp1647 = $tmp1645 <= $tmp1646;
frost$core$Bit $tmp1648 = (frost$core$Bit) {$tmp1647};
bool $tmp1649 = $tmp1648.value;
if ($tmp1649) goto block5; else goto block6;
block9:;
int64_t $tmp1650 = $tmp1639.value;
int64_t $tmp1651 = $tmp1640.value;
bool $tmp1652 = $tmp1650 < $tmp1651;
frost$core$Bit $tmp1653 = (frost$core$Bit) {$tmp1652};
bool $tmp1654 = $tmp1653.value;
if ($tmp1654) goto block5; else goto block6;
block5:;
// line 453
frost$core$Int64 $tmp1655 = *(&local3);
ITable* $tmp1656 = param3->$class->itable;
while ($tmp1656->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1656 = $tmp1656->next;
}
$fn1658 $tmp1657 = $tmp1656->methods[0];
frost$core$Object* $tmp1659 = $tmp1657(param3, $tmp1655);
org$frostlang$frostc$Compiler$TypeContext* $tmp1660 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1661 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1662 = *(&local1);
frost$core$Int64 $tmp1663 = *(&local3);
org$frostlang$frostc$Type* $tmp1664 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1662, $tmp1663);
frost$core$Bit $tmp1665 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1660, $tmp1661, $tmp1664, $tmp1665);
org$frostlang$frostc$IR$Value* $tmp1666 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1659), $tmp1660);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
org$frostlang$frostc$IR$Value* $tmp1667 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
*(&local4) = $tmp1666;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1664));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1660));
frost$core$Frost$unref$frost$core$Object$Q($tmp1659);
// line 455
org$frostlang$frostc$IR$Value* $tmp1668 = *(&local4);
frost$core$Bit $tmp1669 = frost$core$Bit$init$builtin_bit($tmp1668 == NULL);
bool $tmp1670 = $tmp1669.value;
if ($tmp1670) goto block10; else goto block11;
block10:;
// line 456
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1671 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1672 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1672));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1673 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1674 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block11:;
// line 458
frost$collections$Array* $tmp1675 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp1676 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp1675, ((frost$core$Object*) $tmp1676));
org$frostlang$frostc$IR$Value* $tmp1677 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1677));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block7;
block7:;
frost$core$Int64 $tmp1678 = *(&local3);
int64_t $tmp1679 = $tmp1640.value;
int64_t $tmp1680 = $tmp1678.value;
int64_t $tmp1681 = $tmp1679 - $tmp1680;
frost$core$Int64 $tmp1682 = (frost$core$Int64) {$tmp1681};
frost$core$UInt64 $tmp1683 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1682);
if ($tmp1642) goto block13; else goto block14;
block13:;
uint64_t $tmp1684 = $tmp1683.value;
uint64_t $tmp1685 = $tmp1644.value;
bool $tmp1686 = $tmp1684 >= $tmp1685;
frost$core$Bit $tmp1687 = (frost$core$Bit) {$tmp1686};
bool $tmp1688 = $tmp1687.value;
if ($tmp1688) goto block12; else goto block6;
block14:;
uint64_t $tmp1689 = $tmp1683.value;
uint64_t $tmp1690 = $tmp1644.value;
bool $tmp1691 = $tmp1689 > $tmp1690;
frost$core$Bit $tmp1692 = (frost$core$Bit) {$tmp1691};
bool $tmp1693 = $tmp1692.value;
if ($tmp1693) goto block12; else goto block6;
block12:;
int64_t $tmp1694 = $tmp1678.value;
int64_t $tmp1695 = $tmp1643.value;
int64_t $tmp1696 = $tmp1694 + $tmp1695;
frost$core$Int64 $tmp1697 = (frost$core$Int64) {$tmp1696};
*(&local3) = $tmp1697;
goto block5;
block6:;
// line 460
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 461
org$frostlang$frostc$IR* $tmp1698 = *(&local0);
frost$collections$Array** $tmp1699 = &$tmp1698->locals;
frost$collections$Array* $tmp1700 = *$tmp1699;
ITable* $tmp1701 = ((frost$collections$CollectionView*) $tmp1700)->$class->itable;
while ($tmp1701->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1701 = $tmp1701->next;
}
$fn1703 $tmp1702 = $tmp1701->methods[0];
frost$core$Int64 $tmp1704 = $tmp1702(((frost$collections$CollectionView*) $tmp1700));
*(&local6) = $tmp1704;
// line 462
org$frostlang$frostc$Type* $tmp1705 = *(&local1);
org$frostlang$frostc$Type* $tmp1706 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1705);
org$frostlang$frostc$Type* $tmp1707 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1708 = ((frost$core$Equatable*) $tmp1706)->$class->itable;
while ($tmp1708->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1708 = $tmp1708->next;
}
$fn1710 $tmp1709 = $tmp1708->methods[1];
frost$core$Bit $tmp1711 = $tmp1709(((frost$core$Equatable*) $tmp1706), ((frost$core$Equatable*) $tmp1707));
bool $tmp1712 = $tmp1711.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1706));
if ($tmp1712) goto block15; else goto block17;
block15:;
// line 463
org$frostlang$frostc$IR* $tmp1713 = *(&local0);
frost$collections$Array** $tmp1714 = &$tmp1713->locals;
frost$collections$Array* $tmp1715 = *$tmp1714;
org$frostlang$frostc$Type* $tmp1716 = *(&local1);
org$frostlang$frostc$Type* $tmp1717 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1716);
frost$collections$Array$add$frost$collections$Array$T($tmp1715, ((frost$core$Object*) $tmp1717));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1717));
// line 464
org$frostlang$frostc$IR$Value* $tmp1718 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1719 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1720 = *(&local6);
org$frostlang$frostc$Type* $tmp1721 = *(&local1);
org$frostlang$frostc$Type* $tmp1722 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1721);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1718, $tmp1719, $tmp1720, $tmp1722);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
org$frostlang$frostc$IR$Value* $tmp1723 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1723));
*(&local5) = $tmp1718;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1722));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1718));
goto block16;
block17:;
// line 1
// line 467
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1724 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block16;
block16:;
// line 469
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
// line 470
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 471
$fn1726 $tmp1725 = ($fn1726) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1727 = $tmp1725(param2);
frost$core$Bit $tmp1728 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1727);
bool $tmp1729 = $tmp1728.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1727));
if ($tmp1729) goto block18; else goto block20;
block18:;
// line 472
org$frostlang$frostc$Type* $tmp1730 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
org$frostlang$frostc$Type* $tmp1731 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local7) = $tmp1730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
// line 473
org$frostlang$frostc$Type* $tmp1732 = org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
org$frostlang$frostc$Type* $tmp1733 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1733));
*(&local8) = $tmp1732;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1732));
goto block19;
block20:;
// line 1
// line 476
org$frostlang$frostc$Type* $tmp1734 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
org$frostlang$frostc$Type* $tmp1735 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
*(&local7) = $tmp1734;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
// line 477
org$frostlang$frostc$Type* $tmp1736 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
org$frostlang$frostc$Type* $tmp1737 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
*(&local8) = $tmp1736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
goto block19;
block19:;
// line 479
org$frostlang$frostc$Type* $tmp1738 = *(&local7);
org$frostlang$frostc$ClassDecl* $tmp1739 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp1738);
org$frostlang$frostc$SymbolTable* $tmp1740 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp1739);
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
org$frostlang$frostc$SymbolTable* $tmp1741 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
*(&local9) = $tmp1740;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
// line 480
org$frostlang$frostc$SymbolTable* $tmp1742 = *(&local9);
org$frostlang$frostc$Symbol* $tmp1743 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp1742, &$s1744);
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp1743)));
org$frostlang$frostc$FieldDecl* $tmp1745 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1745));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) $tmp1743);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
// line 481
org$frostlang$frostc$FieldDecl* $tmp1746 = *(&local10);
frost$core$Bit $tmp1747 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp1746);
frost$core$Bit $tmp1748 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1747);
bool $tmp1749 = $tmp1748.value;
if ($tmp1749) goto block21; else goto block22;
block21:;
// line 482
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp1750 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp1751 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp1752 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1753 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1753));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1754 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1754));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1755 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1755));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1756 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1756));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1757 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1757));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block22:;
// line 484
org$frostlang$frostc$Type* $tmp1758 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1759 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp1758);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
org$frostlang$frostc$IR$Value* $tmp1760 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
*(&local11) = $tmp1759;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
// line 485
org$frostlang$frostc$IR* $tmp1761 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1762 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1763 = (frost$core$Int64) {11};
org$frostlang$frostc$IR$Value* $tmp1764 = *(&local11);
org$frostlang$frostc$FieldDecl* $tmp1765 = *(&local10);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1762, $tmp1763, param1, $tmp1764, $tmp1765);
$fn1767 $tmp1766 = ($fn1767) $tmp1761->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1768 = $tmp1766($tmp1761, $tmp1762);
*(&local12) = $tmp1768;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
// line 487
org$frostlang$frostc$IR* $tmp1769 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1770 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1771 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp1772 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1773 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1774 = *(&local12);
org$frostlang$frostc$Type* $tmp1775 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp1776 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1775);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1772, $tmp1773, $tmp1774, $tmp1776);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1770, $tmp1771, param1, $tmp1772);
$fn1778 $tmp1777 = ($fn1778) $tmp1769->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1779 = $tmp1777($tmp1769, $tmp1770);
*(&local13) = $tmp1779;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1775));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1772));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1770));
// line 489
org$frostlang$frostc$SymbolTable* $tmp1780 = *(&local9);
org$frostlang$frostc$Symbol* $tmp1781 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp1780, &$s1782);
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp1781)));
org$frostlang$frostc$FieldDecl* $tmp1783 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) $tmp1781);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1781));
// line 490
org$frostlang$frostc$FieldDecl* $tmp1784 = *(&local14);
frost$core$Bit $tmp1785 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp1784);
frost$core$Bit $tmp1786 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1785);
bool $tmp1787 = $tmp1786.value;
if ($tmp1787) goto block23; else goto block24;
block23:;
// line 491
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp1788 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp1789 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp1790 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp1791 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1791));
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp1792 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1792));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1793 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1793));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1794 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1794));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1795 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1796 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1797 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block24:;
// line 493
org$frostlang$frostc$IR* $tmp1798 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1799 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1800 = (frost$core$Int64) {11};
org$frostlang$frostc$IR$Value* $tmp1801 = *(&local11);
org$frostlang$frostc$FieldDecl* $tmp1802 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1799, $tmp1800, param1, $tmp1801, $tmp1802);
$fn1804 $tmp1803 = ($fn1804) $tmp1798->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1805 = $tmp1803($tmp1798, $tmp1799);
*(&local15) = $tmp1805;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
// line 494
org$frostlang$frostc$IR* $tmp1806 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1807 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1808 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp1809 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1810 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1811 = *(&local15);
org$frostlang$frostc$Type* $tmp1812 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1809, $tmp1810, $tmp1811, $tmp1812);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1807, $tmp1808, param1, $tmp1809);
$fn1814 $tmp1813 = ($fn1814) $tmp1806->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1815 = $tmp1813($tmp1806, $tmp1807);
*(&local16) = $tmp1815;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
// line 495
org$frostlang$frostc$IR* $tmp1816 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1817 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1818 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp1819 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1820 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1821 = *(&local16);
org$frostlang$frostc$Type* $tmp1822 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1819, $tmp1820, $tmp1821, $tmp1822);
frost$core$Int64 $tmp1823 = (frost$core$Int64) {22};
org$frostlang$frostc$expression$Binary$Operator $tmp1824 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp1823);
org$frostlang$frostc$IR$Value* $tmp1825 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1826 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp1827 = *(&local8);
org$frostlang$frostc$Type* $tmp1828 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1827);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1825, $tmp1826, $tmp1828);
org$frostlang$frostc$Type* $tmp1829 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp1817, $tmp1818, param1, $tmp1819, $tmp1824, $tmp1825, $tmp1829);
$fn1831 $tmp1830 = ($fn1831) $tmp1816->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1832 = $tmp1830($tmp1816, $tmp1817);
*(&local17) = $tmp1832;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1825));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1819));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1817));
// line 497
org$frostlang$frostc$IR* $tmp1833 = *(&local0);
$fn1835 $tmp1834 = ($fn1835) $tmp1833->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1836 = $tmp1834($tmp1833, &$s1837);
*(&local18) = $tmp1836;
// line 498
org$frostlang$frostc$IR* $tmp1838 = *(&local0);
$fn1840 $tmp1839 = ($fn1840) $tmp1838->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1841 = $tmp1839($tmp1838, &$s1842);
*(&local19) = $tmp1841;
// line 499
org$frostlang$frostc$IR* $tmp1843 = *(&local0);
$fn1845 $tmp1844 = ($fn1845) $tmp1843->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1846 = $tmp1844($tmp1843, &$s1847);
*(&local20) = $tmp1846;
// line 500
org$frostlang$frostc$IR* $tmp1848 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1849 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1850 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1851 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1852 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1853 = *(&local17);
org$frostlang$frostc$Type* $tmp1854 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1851, $tmp1852, $tmp1853, $tmp1854);
org$frostlang$frostc$IR$Block$ID $tmp1855 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp1856 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1849, $tmp1850, param1, $tmp1851, $tmp1855, $tmp1856);
$fn1858 $tmp1857 = ($fn1858) $tmp1848->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1859 = $tmp1857($tmp1848, $tmp1849);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1849));
// line 502
org$frostlang$frostc$IR* $tmp1860 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1861 = *(&local19);
$fn1863 $tmp1862 = ($fn1863) $tmp1860->$class->vtable[4];
$tmp1862($tmp1860, $tmp1861);
// line 503
org$frostlang$frostc$IR$Value* $tmp1864 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1865 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1866 = *(&local13);
org$frostlang$frostc$Type* $tmp1867 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp1868 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1867);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1864, $tmp1865, $tmp1866, $tmp1868);
org$frostlang$frostc$Type* $tmp1869 = *(&local1);
org$frostlang$frostc$Type* $tmp1870 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1869);
org$frostlang$frostc$IR$Value* $tmp1871 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1864, $tmp1870);
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
org$frostlang$frostc$IR$Value* $tmp1872 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1872));
*(&local21) = $tmp1871;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1864));
// line 505
org$frostlang$frostc$IR* $tmp1873 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1874 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1875 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp1876 = *(&local21);
org$frostlang$frostc$FixedArray* $tmp1877 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
frost$collections$Array* $tmp1878 = *(&local2);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1877, ((frost$collections$ListView*) $tmp1878));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp1874, $tmp1875, param1, $tmp1876, $tmp1877);
$fn1880 $tmp1879 = ($fn1880) $tmp1873->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1881 = $tmp1879($tmp1873, $tmp1874);
*(&local22) = $tmp1881;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
// line 507
org$frostlang$frostc$IR$Value* $tmp1882 = *(&local5);
frost$core$Bit $tmp1883 = frost$core$Bit$init$builtin_bit($tmp1882 != NULL);
bool $tmp1884 = $tmp1883.value;
if ($tmp1884) goto block25; else goto block26;
block25:;
// line 508
org$frostlang$frostc$IR* $tmp1885 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1886 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1887 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp1888 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1889 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1890 = *(&local22);
org$frostlang$frostc$Type* $tmp1891 = *(&local1);
org$frostlang$frostc$Type* $tmp1892 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1891);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1888, $tmp1889, $tmp1890, $tmp1892);
org$frostlang$frostc$IR$Value* $tmp1893 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1886, $tmp1887, param1, $tmp1888, $tmp1893);
$fn1895 $tmp1894 = ($fn1895) $tmp1885->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1896 = $tmp1894($tmp1885, $tmp1886);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1892));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1888));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1886));
goto block26;
block26:;
// line 511
org$frostlang$frostc$IR* $tmp1897 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1898 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1899 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1900 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1898, $tmp1899, param1, $tmp1900);
$fn1902 $tmp1901 = ($fn1902) $tmp1897->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1903 = $tmp1901($tmp1897, $tmp1898);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1898));
// line 512
org$frostlang$frostc$IR* $tmp1904 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1905 = *(&local18);
$fn1907 $tmp1906 = ($fn1907) $tmp1904->$class->vtable[4];
$tmp1906($tmp1904, $tmp1905);
// line 513
frost$collections$Array* $tmp1908 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1908);
*(&local23) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
frost$collections$Array* $tmp1909 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1909));
*(&local23) = $tmp1908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1908));
// line 514
frost$collections$Array* $tmp1910 = *(&local23);
org$frostlang$frostc$Type* $tmp1911 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp1910, ((frost$core$Object*) $tmp1911));
// line 515
frost$core$Int64 $tmp1912 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp1913 = *(&local1);
frost$core$Int64 $tmp1914 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1913);
frost$core$Bit $tmp1915 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1916 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1912, $tmp1914, $tmp1915);
frost$core$Int64 $tmp1917 = $tmp1916.min;
*(&local24) = $tmp1917;
frost$core$Int64 $tmp1918 = $tmp1916.max;
frost$core$Bit $tmp1919 = $tmp1916.inclusive;
bool $tmp1920 = $tmp1919.value;
frost$core$Int64 $tmp1921 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1922 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1921);
if ($tmp1920) goto block30; else goto block31;
block30:;
int64_t $tmp1923 = $tmp1917.value;
int64_t $tmp1924 = $tmp1918.value;
bool $tmp1925 = $tmp1923 <= $tmp1924;
frost$core$Bit $tmp1926 = (frost$core$Bit) {$tmp1925};
bool $tmp1927 = $tmp1926.value;
if ($tmp1927) goto block27; else goto block28;
block31:;
int64_t $tmp1928 = $tmp1917.value;
int64_t $tmp1929 = $tmp1918.value;
bool $tmp1930 = $tmp1928 < $tmp1929;
frost$core$Bit $tmp1931 = (frost$core$Bit) {$tmp1930};
bool $tmp1932 = $tmp1931.value;
if ($tmp1932) goto block27; else goto block28;
block27:;
// line 516
frost$collections$Array* $tmp1933 = *(&local23);
org$frostlang$frostc$Type* $tmp1934 = *(&local1);
frost$core$Int64 $tmp1935 = *(&local24);
org$frostlang$frostc$Type* $tmp1936 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1934, $tmp1935);
frost$collections$Array$add$frost$collections$Array$T($tmp1933, ((frost$core$Object*) $tmp1936));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1936));
goto block29;
block29:;
frost$core$Int64 $tmp1937 = *(&local24);
int64_t $tmp1938 = $tmp1918.value;
int64_t $tmp1939 = $tmp1937.value;
int64_t $tmp1940 = $tmp1938 - $tmp1939;
frost$core$Int64 $tmp1941 = (frost$core$Int64) {$tmp1940};
frost$core$UInt64 $tmp1942 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1941);
if ($tmp1920) goto block33; else goto block34;
block33:;
uint64_t $tmp1943 = $tmp1942.value;
uint64_t $tmp1944 = $tmp1922.value;
bool $tmp1945 = $tmp1943 >= $tmp1944;
frost$core$Bit $tmp1946 = (frost$core$Bit) {$tmp1945};
bool $tmp1947 = $tmp1946.value;
if ($tmp1947) goto block32; else goto block28;
block34:;
uint64_t $tmp1948 = $tmp1942.value;
uint64_t $tmp1949 = $tmp1922.value;
bool $tmp1950 = $tmp1948 > $tmp1949;
frost$core$Bit $tmp1951 = (frost$core$Bit) {$tmp1950};
bool $tmp1952 = $tmp1951.value;
if ($tmp1952) goto block32; else goto block28;
block32:;
int64_t $tmp1953 = $tmp1937.value;
int64_t $tmp1954 = $tmp1921.value;
int64_t $tmp1955 = $tmp1953 + $tmp1954;
frost$core$Int64 $tmp1956 = (frost$core$Int64) {$tmp1955};
*(&local24) = $tmp1956;
goto block27;
block28:;
// line 518
org$frostlang$frostc$Type* $tmp1957 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp1958 = &$tmp1957->typeKind;
org$frostlang$frostc$Type$Kind $tmp1959 = *$tmp1958;
frost$collections$Array* $tmp1960 = *(&local23);
org$frostlang$frostc$Type* $tmp1961 = *(&local1);
org$frostlang$frostc$Type* $tmp1962 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1961);
frost$core$Int64 $tmp1963 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp1964 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp1959, ((frost$collections$ListView*) $tmp1960), $tmp1962, $tmp1963);
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
org$frostlang$frostc$Type* $tmp1965 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1965));
*(&local25) = $tmp1964;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1964));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1962));
// line 520
org$frostlang$frostc$IR$Value* $tmp1966 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1967 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1968 = *(&local13);
org$frostlang$frostc$Type* $tmp1969 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp1970 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1969);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1966, $tmp1967, $tmp1968, $tmp1970);
org$frostlang$frostc$Type* $tmp1971 = *(&local25);
org$frostlang$frostc$Type* $tmp1972 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1971);
org$frostlang$frostc$IR$Value* $tmp1973 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1966, $tmp1972);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
org$frostlang$frostc$IR$Value* $tmp1974 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1974));
*(&local26) = $tmp1973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1970));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1966));
// line 522
frost$collections$Array* $tmp1975 = *(&local2);
frost$core$Int64 $tmp1976 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp1977 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1978 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1979 = *(&local16);
org$frostlang$frostc$Type* $tmp1980 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1977, $tmp1978, $tmp1979, $tmp1980);
frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T($tmp1975, $tmp1976, ((frost$core$Object*) $tmp1977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
// line 523
org$frostlang$frostc$IR* $tmp1981 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1982 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1983 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp1984 = *(&local26);
org$frostlang$frostc$FixedArray* $tmp1985 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
frost$collections$Array* $tmp1986 = *(&local2);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1985, ((frost$collections$ListView*) $tmp1986));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp1982, $tmp1983, param1, $tmp1984, $tmp1985);
$fn1988 $tmp1987 = ($fn1988) $tmp1981->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1989 = $tmp1987($tmp1981, $tmp1982);
*(&local27) = $tmp1989;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1985));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1982));
// line 525
org$frostlang$frostc$IR$Value* $tmp1990 = *(&local5);
frost$core$Bit $tmp1991 = frost$core$Bit$init$builtin_bit($tmp1990 != NULL);
bool $tmp1992 = $tmp1991.value;
if ($tmp1992) goto block35; else goto block36;
block35:;
// line 526
org$frostlang$frostc$IR* $tmp1993 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1994 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1995 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp1996 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1997 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1998 = *(&local27);
org$frostlang$frostc$Type* $tmp1999 = *(&local1);
org$frostlang$frostc$Type* $tmp2000 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1999);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1996, $tmp1997, $tmp1998, $tmp2000);
org$frostlang$frostc$IR$Value* $tmp2001 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1994, $tmp1995, param1, $tmp1996, $tmp2001);
$fn2003 $tmp2002 = ($fn2003) $tmp1993->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2004 = $tmp2002($tmp1993, $tmp1994);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1996));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
goto block36;
block36:;
// line 529
org$frostlang$frostc$IR* $tmp2005 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2006 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2007 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2008 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2006, $tmp2007, param1, $tmp2008);
$fn2010 $tmp2009 = ($fn2010) $tmp2005->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2011 = $tmp2009($tmp2005, $tmp2006);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2006));
// line 530
org$frostlang$frostc$IR* $tmp2012 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2013 = *(&local20);
$fn2015 $tmp2014 = ($fn2015) $tmp2012->$class->vtable[4];
$tmp2014($tmp2012, $tmp2013);
// line 531
org$frostlang$frostc$IR$Value* $tmp2016 = *(&local5);
frost$core$Bit $tmp2017 = frost$core$Bit$init$builtin_bit($tmp2016 != NULL);
bool $tmp2018 = $tmp2017.value;
if ($tmp2018) goto block37; else goto block38;
block37:;
// line 532
org$frostlang$frostc$IR* $tmp2019 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2020 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2021 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp2022 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2020, $tmp2021, param1, $tmp2022);
$fn2024 $tmp2023 = ($fn2024) $tmp2019->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2025 = $tmp2023($tmp2019, $tmp2020);
*(&local28) = $tmp2025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2020));
// line 533
org$frostlang$frostc$IR$Value* $tmp2026 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2027 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2028 = *(&local28);
org$frostlang$frostc$Type* $tmp2029 = *(&local1);
org$frostlang$frostc$Type* $tmp2030 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2029);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2026, $tmp2027, $tmp2028, $tmp2030);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
org$frostlang$frostc$IR$Value* $tmp2031 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2031));
*(&local29) = $tmp2026;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2030));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2026));
// line 534
org$frostlang$frostc$Type* $tmp2032 = *(&local1);
org$frostlang$frostc$Type* $tmp2033 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2032);
frost$core$Bit $tmp2034 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2033);
bool $tmp2035 = $tmp2034.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
if ($tmp2035) goto block39; else goto block40;
block39:;
// line 535
frost$collections$Stack** $tmp2036 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2037 = *$tmp2036;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2038 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp2039 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp2040 = *(&local29);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp2038, $tmp2039, $tmp2040);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2037, ((frost$core$Object*) $tmp2038));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
goto block40;
block40:;
// line 537
org$frostlang$frostc$IR$Value* $tmp2041 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp2042 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2041, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2042));
org$frostlang$frostc$IR$Value* $tmp2043 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2043));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2044 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2045 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2046 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2046));
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$IR$Value* $tmp2047 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2047));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2048 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2048));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2049 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2050 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2051 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2052 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2053 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2054 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2055 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2056 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2056));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2057 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp2042;
block38:;
// line 539
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp2058 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2059 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2060 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$IR$Value* $tmp2061 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2062 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2063 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2064 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2065 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2066 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2067 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2068 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2069 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2070 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2071 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
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
// line 545
frost$collections$Stack** $tmp2072 = &param0->currentClass;
frost$collections$Stack* $tmp2073 = *$tmp2072;
frost$core$Int64 $tmp2074 = (frost$core$Int64) {0};
frost$core$Object* $tmp2075 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2073, $tmp2074);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp2075)));
org$frostlang$frostc$ClassDecl* $tmp2076 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp2075);
frost$core$Frost$unref$frost$core$Object$Q($tmp2075);
// line 546
org$frostlang$frostc$IR** $tmp2077 = &param0->ir;
org$frostlang$frostc$IR* $tmp2078 = *$tmp2077;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
org$frostlang$frostc$IR* $tmp2079 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2079));
*(&local1) = $tmp2078;
// line 547
frost$core$Int64* $tmp2080 = &param2->$rawValue;
frost$core$Int64 $tmp2081 = *$tmp2080;
frost$core$Int64 $tmp2082 = (frost$core$Int64) {9};
frost$core$Bit $tmp2083 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2081, $tmp2082);
bool $tmp2084 = $tmp2083.value;
if ($tmp2084) goto block2; else goto block3;
block2:;
org$frostlang$frostc$IR$Value** $tmp2085 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2086 = *$tmp2085;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
org$frostlang$frostc$IR$Value* $tmp2087 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
*(&local2) = $tmp2086;
org$frostlang$frostc$MethodDecl** $tmp2088 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp2089 = *$tmp2088;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2089));
org$frostlang$frostc$MethodDecl* $tmp2090 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
*(&local3) = $tmp2089;
// line 549
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
// line 550
org$frostlang$frostc$IR$Value* $tmp2091 = *(&local2);
frost$core$Bit $tmp2092 = frost$core$Bit$init$builtin_bit($tmp2091 != NULL);
bool $tmp2093 = $tmp2092.value;
if ($tmp2093) goto block4; else goto block6;
block4:;
// line 551
org$frostlang$frostc$IR$Value* $tmp2094 = *(&local2);
$fn2096 $tmp2095 = ($fn2096) $tmp2094->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2097 = $tmp2095($tmp2094);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
org$frostlang$frostc$Type* $tmp2098 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2098));
*(&local4) = $tmp2097;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
goto block5;
block6:;
// line 553
org$frostlang$frostc$MethodDecl* $tmp2099 = *(&local3);
org$frostlang$frostc$Annotations** $tmp2100 = &$tmp2099->annotations;
org$frostlang$frostc$Annotations* $tmp2101 = *$tmp2100;
frost$core$Bit $tmp2102 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2101);
bool $tmp2103 = $tmp2102.value;
if ($tmp2103) goto block7; else goto block10;
block10:;
org$frostlang$frostc$MethodDecl* $tmp2104 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind* $tmp2105 = &$tmp2104->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2106 = *$tmp2105;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2107;
$tmp2107 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2107->value = $tmp2106;
frost$core$Int64 $tmp2108 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2109 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2108);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2110;
$tmp2110 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2110->value = $tmp2109;
ITable* $tmp2111 = ((frost$core$Equatable*) $tmp2107)->$class->itable;
while ($tmp2111->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2111 = $tmp2111->next;
}
$fn2113 $tmp2112 = $tmp2111->methods[0];
frost$core$Bit $tmp2114 = $tmp2112(((frost$core$Equatable*) $tmp2107), ((frost$core$Equatable*) $tmp2110));
bool $tmp2115 = $tmp2114.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2110)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2107)));
if ($tmp2115) goto block7; else goto block9;
block7:;
// line 554
org$frostlang$frostc$MethodDecl* $tmp2116 = *(&local3);
frost$core$Weak** $tmp2117 = &$tmp2116->owner;
frost$core$Weak* $tmp2118 = *$tmp2117;
frost$core$Object* $tmp2119 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2118);
org$frostlang$frostc$Type** $tmp2120 = &((org$frostlang$frostc$ClassDecl*) $tmp2119)->type;
org$frostlang$frostc$Type* $tmp2121 = *$tmp2120;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
org$frostlang$frostc$Type* $tmp2122 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
*(&local4) = $tmp2121;
frost$core$Frost$unref$frost$core$Object$Q($tmp2119);
goto block8;
block9:;
// line 1
// line 557
org$frostlang$frostc$ClassDecl* $tmp2123 = *(&local0);
org$frostlang$frostc$Type** $tmp2124 = &$tmp2123->type;
org$frostlang$frostc$Type* $tmp2125 = *$tmp2124;
org$frostlang$frostc$MethodDecl* $tmp2126 = *(&local3);
frost$core$Weak** $tmp2127 = &$tmp2126->owner;
frost$core$Weak* $tmp2128 = *$tmp2127;
frost$core$Object* $tmp2129 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2128);
org$frostlang$frostc$Type* $tmp2130 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp2125, ((org$frostlang$frostc$ClassDecl*) $tmp2129));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
org$frostlang$frostc$Type* $tmp2131 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
*(&local5) = $tmp2130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
frost$core$Frost$unref$frost$core$Object$Q($tmp2129);
// line 558
org$frostlang$frostc$Type* $tmp2132 = *(&local5);
frost$core$Bit $tmp2133 = frost$core$Bit$init$builtin_bit($tmp2132 != NULL);
bool $tmp2134 = $tmp2133.value;
if ($tmp2134) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp2135 = (frost$core$Int64) {558};
org$frostlang$frostc$ClassDecl* $tmp2136 = *(&local0);
org$frostlang$frostc$Type** $tmp2137 = &$tmp2136->type;
org$frostlang$frostc$Type* $tmp2138 = *$tmp2137;
frost$core$String* $tmp2139 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2140, ((frost$core$Object*) $tmp2138));
frost$core$String* $tmp2141 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2139, &$s2142);
org$frostlang$frostc$MethodDecl* $tmp2143 = *(&local3);
frost$core$Weak** $tmp2144 = &$tmp2143->owner;
frost$core$Weak* $tmp2145 = *$tmp2144;
frost$core$Object* $tmp2146 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2145);
frost$core$String** $tmp2147 = &((org$frostlang$frostc$ClassDecl*) $tmp2146)->name;
frost$core$String* $tmp2148 = *$tmp2147;
frost$core$String* $tmp2149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2141, $tmp2148);
frost$core$String* $tmp2150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2149, &$s2151);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2152, $tmp2135, $tmp2150);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$core$Frost$unref$frost$core$Object$Q($tmp2146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
abort(); // unreachable
block11:;
// line 560
org$frostlang$frostc$Type* $tmp2153 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
org$frostlang$frostc$Type* $tmp2154 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
*(&local4) = $tmp2153;
org$frostlang$frostc$Type* $tmp2155 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
goto block8;
block8:;
goto block5;
block5:;
// line 562
org$frostlang$frostc$MethodDecl* $tmp2156 = *(&local3);
frost$core$Bit $tmp2157 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp2156);
frost$core$Bit $tmp2158 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2157);
bool $tmp2159 = $tmp2158.value;
if ($tmp2159) goto block13; else goto block14;
block13:;
// line 563
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2160 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2160));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2161 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2162 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2163 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2164 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
// line 565
org$frostlang$frostc$IR$Value* $tmp2165 = *(&local2);
org$frostlang$frostc$MethodRef* $tmp2166 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp2167 = *(&local4);
org$frostlang$frostc$MethodDecl* $tmp2168 = *(&local3);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl($tmp2166, param0, $tmp2167, $tmp2168);
org$frostlang$frostc$IR$Value* $tmp2169 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2165, $tmp2166, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
org$frostlang$frostc$Type* $tmp2170 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2171 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2172 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2173 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2173));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2174 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2169;
block3:;
frost$core$Int64 $tmp2175 = (frost$core$Int64) {11};
frost$core$Bit $tmp2176 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2081, $tmp2175);
bool $tmp2177 = $tmp2176.value;
if ($tmp2177) goto block15; else goto block16;
block15:;
org$frostlang$frostc$IR$Value** $tmp2178 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2179 = *$tmp2178;
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
org$frostlang$frostc$IR$Value* $tmp2180 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
*(&local6) = $tmp2179;
org$frostlang$frostc$MethodDecl** $tmp2181 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp2182 = *$tmp2181;
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
org$frostlang$frostc$MethodDecl* $tmp2183 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2183));
*(&local7) = $tmp2182;
org$frostlang$frostc$FixedArray** $tmp2184 = (org$frostlang$frostc$FixedArray**) (param2->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2185 = *$tmp2184;
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2185));
org$frostlang$frostc$FixedArray* $tmp2186 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2186));
*(&local8) = $tmp2185;
// line 569
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
// line 570
org$frostlang$frostc$IR$Value* $tmp2187 = *(&local6);
frost$core$Bit $tmp2188 = frost$core$Bit$init$builtin_bit($tmp2187 != NULL);
bool $tmp2189 = $tmp2188.value;
if ($tmp2189) goto block17; else goto block19;
block17:;
// line 571
org$frostlang$frostc$IR$Value* $tmp2190 = *(&local6);
$fn2192 $tmp2191 = ($fn2192) $tmp2190->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2193 = $tmp2191($tmp2190);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
org$frostlang$frostc$Type* $tmp2194 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
*(&local9) = $tmp2193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
goto block18;
block19:;
// line 573
org$frostlang$frostc$MethodDecl* $tmp2195 = *(&local7);
org$frostlang$frostc$Annotations** $tmp2196 = &$tmp2195->annotations;
org$frostlang$frostc$Annotations* $tmp2197 = *$tmp2196;
frost$core$Bit $tmp2198 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2197);
bool $tmp2199 = $tmp2198.value;
if ($tmp2199) goto block20; else goto block23;
block23:;
org$frostlang$frostc$MethodDecl* $tmp2200 = *(&local7);
org$frostlang$frostc$MethodDecl$Kind* $tmp2201 = &$tmp2200->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2202 = *$tmp2201;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2203;
$tmp2203 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2203->value = $tmp2202;
frost$core$Int64 $tmp2204 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2205 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2204);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2206;
$tmp2206 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2206->value = $tmp2205;
ITable* $tmp2207 = ((frost$core$Equatable*) $tmp2203)->$class->itable;
while ($tmp2207->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2207 = $tmp2207->next;
}
$fn2209 $tmp2208 = $tmp2207->methods[0];
frost$core$Bit $tmp2210 = $tmp2208(((frost$core$Equatable*) $tmp2203), ((frost$core$Equatable*) $tmp2206));
bool $tmp2211 = $tmp2210.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2206)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2203)));
if ($tmp2211) goto block20; else goto block22;
block20:;
// line 574
org$frostlang$frostc$MethodDecl* $tmp2212 = *(&local7);
frost$core$Weak** $tmp2213 = &$tmp2212->owner;
frost$core$Weak* $tmp2214 = *$tmp2213;
frost$core$Object* $tmp2215 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2214);
org$frostlang$frostc$Type** $tmp2216 = &((org$frostlang$frostc$ClassDecl*) $tmp2215)->type;
org$frostlang$frostc$Type* $tmp2217 = *$tmp2216;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
org$frostlang$frostc$Type* $tmp2218 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
*(&local9) = $tmp2217;
frost$core$Frost$unref$frost$core$Object$Q($tmp2215);
goto block21;
block22:;
// line 1
// line 577
org$frostlang$frostc$ClassDecl* $tmp2219 = *(&local0);
org$frostlang$frostc$Type** $tmp2220 = &$tmp2219->type;
org$frostlang$frostc$Type* $tmp2221 = *$tmp2220;
org$frostlang$frostc$MethodDecl* $tmp2222 = *(&local7);
frost$core$Weak** $tmp2223 = &$tmp2222->owner;
frost$core$Weak* $tmp2224 = *$tmp2223;
frost$core$Object* $tmp2225 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2224);
org$frostlang$frostc$Type* $tmp2226 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp2221, ((org$frostlang$frostc$ClassDecl*) $tmp2225));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
org$frostlang$frostc$Type* $tmp2227 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
*(&local10) = $tmp2226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
frost$core$Frost$unref$frost$core$Object$Q($tmp2225);
// line 578
org$frostlang$frostc$Type* $tmp2228 = *(&local10);
frost$core$Bit $tmp2229 = frost$core$Bit$init$builtin_bit($tmp2228 != NULL);
bool $tmp2230 = $tmp2229.value;
if ($tmp2230) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp2231 = (frost$core$Int64) {578};
org$frostlang$frostc$ClassDecl* $tmp2232 = *(&local0);
org$frostlang$frostc$Type** $tmp2233 = &$tmp2232->type;
org$frostlang$frostc$Type* $tmp2234 = *$tmp2233;
frost$core$String* $tmp2235 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2236, ((frost$core$Object*) $tmp2234));
frost$core$String* $tmp2237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2235, &$s2238);
org$frostlang$frostc$MethodDecl* $tmp2239 = *(&local7);
frost$core$Weak** $tmp2240 = &$tmp2239->owner;
frost$core$Weak* $tmp2241 = *$tmp2240;
frost$core$Object* $tmp2242 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2241);
frost$core$String** $tmp2243 = &((org$frostlang$frostc$ClassDecl*) $tmp2242)->name;
frost$core$String* $tmp2244 = *$tmp2243;
frost$core$String* $tmp2245 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2237, $tmp2244);
frost$core$String* $tmp2246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2245, &$s2247);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2248, $tmp2231, $tmp2246);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2245));
frost$core$Frost$unref$frost$core$Object$Q($tmp2242);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
abort(); // unreachable
block24:;
// line 580
org$frostlang$frostc$Type* $tmp2249 = *(&local10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2249));
org$frostlang$frostc$Type* $tmp2250 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2250));
*(&local9) = $tmp2249;
org$frostlang$frostc$Type* $tmp2251 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2251));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block21;
block21:;
goto block18;
block18:;
// line 582
org$frostlang$frostc$MethodDecl* $tmp2252 = *(&local7);
frost$core$Bit $tmp2253 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp2252);
frost$core$Bit $tmp2254 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2253);
bool $tmp2255 = $tmp2254.value;
if ($tmp2255) goto block26; else goto block27;
block26:;
// line 583
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2256 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2256));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp2257 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2257));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2258 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2259 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2260 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2261 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2261));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block27:;
// line 585
org$frostlang$frostc$IR$Value* $tmp2262 = *(&local6);
org$frostlang$frostc$MethodRef* $tmp2263 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp2264 = *(&local9);
org$frostlang$frostc$MethodDecl* $tmp2265 = *(&local7);
org$frostlang$frostc$FixedArray* $tmp2266 = *(&local8);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp2263, param0, $tmp2264, $tmp2265, ((frost$collections$ListView*) $tmp2266));
org$frostlang$frostc$IR$Value* $tmp2267 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2262, $tmp2263, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2263));
org$frostlang$frostc$Type* $tmp2268 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
*(&local9) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp2269 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
*(&local8) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2270 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
*(&local7) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2271 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2271));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2272 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2273 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2273));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2267;
block16:;
frost$core$Int64 $tmp2274 = (frost$core$Int64) {10};
frost$core$Bit $tmp2275 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2081, $tmp2274);
bool $tmp2276 = $tmp2275.value;
if ($tmp2276) goto block28; else goto block29;
block28:;
org$frostlang$frostc$IR$Value** $tmp2277 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2278 = *$tmp2277;
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
org$frostlang$frostc$IR$Value* $tmp2279 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
*(&local11) = $tmp2278;
org$frostlang$frostc$FixedArray** $tmp2280 = (org$frostlang$frostc$FixedArray**) (param2->$data + 8);
org$frostlang$frostc$FixedArray* $tmp2281 = *$tmp2280;
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
org$frostlang$frostc$FixedArray* $tmp2282 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2282));
*(&local12) = $tmp2281;
// line 589
org$frostlang$frostc$IR$Value* $tmp2283 = *(&local11);
org$frostlang$frostc$FixedArray* $tmp2284 = *(&local12);
org$frostlang$frostc$Pair* $tmp2285 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, $tmp2283, ((frost$collections$ListView*) $tmp2284), param3, param4);
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
org$frostlang$frostc$Pair* $tmp2286 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2286));
*(&local13) = $tmp2285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2285));
// line 590
org$frostlang$frostc$Pair* $tmp2287 = *(&local13);
frost$core$Bit $tmp2288 = frost$core$Bit$init$builtin_bit($tmp2287 != NULL);
bool $tmp2289 = $tmp2288.value;
if ($tmp2289) goto block30; else goto block31;
block30:;
// line 591
org$frostlang$frostc$Pair* $tmp2290 = *(&local13);
frost$core$Object** $tmp2291 = &$tmp2290->first;
frost$core$Object* $tmp2292 = *$tmp2291;
ITable* $tmp2293 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2292))->$class->itable;
while ($tmp2293->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2293 = $tmp2293->next;
}
$fn2295 $tmp2294 = $tmp2293->methods[0];
frost$core$Int64 $tmp2296 = $tmp2294(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2292)));
frost$core$Int64 $tmp2297 = (frost$core$Int64) {1};
int64_t $tmp2298 = $tmp2296.value;
int64_t $tmp2299 = $tmp2297.value;
bool $tmp2300 = $tmp2298 > $tmp2299;
frost$core$Bit $tmp2301 = (frost$core$Bit) {$tmp2300};
bool $tmp2302 = $tmp2301.value;
if ($tmp2302) goto block32; else goto block33;
block32:;
// line 592
org$frostlang$frostc$Pair* $tmp2303 = *(&local13);
frost$core$Object** $tmp2304 = &$tmp2303->first;
frost$core$Object* $tmp2305 = *$tmp2304;
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp2305), param3, param4);
// line 593
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp2306 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2306));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2307 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2307));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2308 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2308));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2309 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2309));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2310 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2310));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block33:;
// line 595
org$frostlang$frostc$IR$Value* $tmp2311 = *(&local11);
org$frostlang$frostc$Pair* $tmp2312 = *(&local13);
frost$core$Object** $tmp2313 = &$tmp2312->first;
frost$core$Object* $tmp2314 = *$tmp2313;
frost$core$Int64 $tmp2315 = (frost$core$Int64) {0};
ITable* $tmp2316 = ((frost$collections$ListView*) $tmp2314)->$class->itable;
while ($tmp2316->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2316 = $tmp2316->next;
}
$fn2318 $tmp2317 = $tmp2316->methods[0];
frost$core$Object* $tmp2319 = $tmp2317(((frost$collections$ListView*) $tmp2314), $tmp2315);
org$frostlang$frostc$IR$Value* $tmp2320 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2311, ((org$frostlang$frostc$MethodRef*) $tmp2319), param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2320));
frost$core$Frost$unref$frost$core$Object$Q($tmp2319);
org$frostlang$frostc$Pair* $tmp2321 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2322 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2323 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2323));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2324 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2324));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2325 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2325));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2320;
block31:;
// line 598
frost$collections$Array* $tmp2326 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2326);
*(&local14) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
frost$collections$Array* $tmp2327 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
*(&local14) = $tmp2326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
// line 599
ITable* $tmp2328 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2328->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2328 = $tmp2328->next;
}
$fn2330 $tmp2329 = $tmp2328->methods[0];
frost$collections$Iterator* $tmp2331 = $tmp2329(((frost$collections$Iterable*) param3));
goto block34;
block34:;
ITable* $tmp2332 = $tmp2331->$class->itable;
while ($tmp2332->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2332 = $tmp2332->next;
}
$fn2334 $tmp2333 = $tmp2332->methods[0];
frost$core$Bit $tmp2335 = $tmp2333($tmp2331);
bool $tmp2336 = $tmp2335.value;
if ($tmp2336) goto block36; else goto block35;
block35:;
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2337 = $tmp2331->$class->itable;
while ($tmp2337->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2337 = $tmp2337->next;
}
$fn2339 $tmp2338 = $tmp2337->methods[1];
frost$core$Object* $tmp2340 = $tmp2338($tmp2331);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2340)));
org$frostlang$frostc$ASTNode* $tmp2341 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2341));
*(&local15) = ((org$frostlang$frostc$ASTNode*) $tmp2340);
// line 600
org$frostlang$frostc$ASTNode* $tmp2342 = *(&local15);
org$frostlang$frostc$Type* $tmp2343 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp2342);
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2343));
org$frostlang$frostc$Type* $tmp2344 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2344));
*(&local16) = $tmp2343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2343));
// line 601
org$frostlang$frostc$Type* $tmp2345 = *(&local16);
frost$core$Bit $tmp2346 = frost$core$Bit$init$builtin_bit($tmp2345 == NULL);
bool $tmp2347 = $tmp2346.value;
if ($tmp2347) goto block37; else goto block38;
block37:;
// line 603
frost$core$Int64* $tmp2348 = &param0->errorCount;
frost$core$Int64 $tmp2349 = *$tmp2348;
*(&local17) = $tmp2349;
// line 604
org$frostlang$frostc$ASTNode* $tmp2350 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp2351 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2350);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2351));
// line 605
frost$core$Int64* $tmp2352 = &param0->errorCount;
frost$core$Int64 $tmp2353 = *$tmp2352;
frost$core$Int64 $tmp2354 = *(&local17);
frost$core$Bit $tmp2355 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2353, $tmp2354);
bool $tmp2356 = $tmp2355.value;
if ($tmp2356) goto block39; else goto block40;
block39:;
// line 607
org$frostlang$frostc$FixedArray* $tmp2357 = *(&local12);
frost$core$Int64 $tmp2358 = (frost$core$Int64) {0};
frost$core$Object* $tmp2359 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2357, $tmp2358);
frost$core$String** $tmp2360 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2359))->name;
frost$core$String* $tmp2361 = *$tmp2360;
frost$core$String* $tmp2362 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2363, $tmp2361);
frost$core$String* $tmp2364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2362, &$s2365);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2364);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
frost$core$Frost$unref$frost$core$Object$Q($tmp2359);
goto block40;
block40:;
// line 609
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2366 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2366));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2340);
org$frostlang$frostc$ASTNode* $tmp2367 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2367));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
frost$collections$Array* $tmp2368 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2368));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2369 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2369));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2370 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2370));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2371 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2372 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2372));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2373 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block38:;
// line 611
frost$collections$Array* $tmp2374 = *(&local14);
org$frostlang$frostc$Type* $tmp2375 = *(&local16);
frost$collections$Array$add$frost$collections$Array$T($tmp2374, ((frost$core$Object*) $tmp2375));
org$frostlang$frostc$Type* $tmp2376 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2340);
org$frostlang$frostc$ASTNode* $tmp2377 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
*(&local15) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block34;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
// line 613
org$frostlang$frostc$FixedArray* $tmp2378 = *(&local12);
frost$core$Int64 $tmp2379 = (frost$core$Int64) {0};
frost$core$Object* $tmp2380 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2378, $tmp2379);
frost$core$String** $tmp2381 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2380))->name;
frost$core$String* $tmp2382 = *$tmp2381;
frost$core$String* $tmp2383 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2384, $tmp2382);
frost$core$String* $tmp2385 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2383, &$s2386);
frost$collections$Array* $tmp2387 = *(&local14);
ITable* $tmp2388 = ((frost$collections$CollectionView*) $tmp2387)->$class->itable;
while ($tmp2388->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2388 = $tmp2388->next;
}
$fn2390 $tmp2389 = $tmp2388->methods[1];
frost$core$String* $tmp2391 = $tmp2389(((frost$collections$CollectionView*) $tmp2387));
frost$core$String* $tmp2392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2385, $tmp2391);
frost$core$String* $tmp2393 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2392, &$s2394);
$fn2396 $tmp2395 = ($fn2396) param4->$class->vtable[2];
frost$core$String* $tmp2397 = $tmp2395(param4);
frost$core$String* $tmp2398 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2393, $tmp2397);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2398);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2383));
frost$core$Frost$unref$frost$core$Object$Q($tmp2380);
// line 615
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$Array* $tmp2399 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2399));
*(&local14) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2400 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2401 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2401));
*(&local12) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2402 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2403 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2404 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2404));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block29:;
frost$core$Int64 $tmp2405 = (frost$core$Int64) {12};
frost$core$Bit $tmp2406 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2081, $tmp2405);
bool $tmp2407 = $tmp2406.value;
if ($tmp2407) goto block41; else goto block42;
block41:;
org$frostlang$frostc$IR$Value** $tmp2408 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2409 = *$tmp2408;
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
org$frostlang$frostc$IR$Value* $tmp2410 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
*(&local18) = $tmp2409;
org$frostlang$frostc$FixedArray** $tmp2411 = (org$frostlang$frostc$FixedArray**) (param2->$data + 8);
org$frostlang$frostc$FixedArray* $tmp2412 = *$tmp2411;
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
org$frostlang$frostc$FixedArray* $tmp2413 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
*(&local19) = $tmp2412;
org$frostlang$frostc$FixedArray** $tmp2414 = (org$frostlang$frostc$FixedArray**) (param2->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2415 = *$tmp2414;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
org$frostlang$frostc$FixedArray* $tmp2416 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2416));
*(&local20) = $tmp2415;
// line 618
org$frostlang$frostc$IR$Value* $tmp2417 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp2418 = *(&local19);
org$frostlang$frostc$FixedArray* $tmp2419 = *(&local20);
org$frostlang$frostc$Pair* $tmp2420 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, $tmp2417, ((frost$collections$ListView*) $tmp2418), ((frost$collections$ListView*) $tmp2419), param3, param4);
*(&local21) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
org$frostlang$frostc$Pair* $tmp2421 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
*(&local21) = $tmp2420;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
// line 619
org$frostlang$frostc$Pair* $tmp2422 = *(&local21);
frost$core$Bit $tmp2423 = frost$core$Bit$init$builtin_bit($tmp2422 != NULL);
bool $tmp2424 = $tmp2423.value;
if ($tmp2424) goto block43; else goto block44;
block43:;
// line 620
org$frostlang$frostc$Pair* $tmp2425 = *(&local21);
frost$core$Object** $tmp2426 = &$tmp2425->first;
frost$core$Object* $tmp2427 = *$tmp2426;
ITable* $tmp2428 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2427))->$class->itable;
while ($tmp2428->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2428 = $tmp2428->next;
}
$fn2430 $tmp2429 = $tmp2428->methods[0];
frost$core$Int64 $tmp2431 = $tmp2429(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2427)));
frost$core$Int64 $tmp2432 = (frost$core$Int64) {1};
int64_t $tmp2433 = $tmp2431.value;
int64_t $tmp2434 = $tmp2432.value;
bool $tmp2435 = $tmp2433 > $tmp2434;
frost$core$Bit $tmp2436 = (frost$core$Bit) {$tmp2435};
bool $tmp2437 = $tmp2436.value;
if ($tmp2437) goto block45; else goto block46;
block45:;
// line 621
org$frostlang$frostc$Pair* $tmp2438 = *(&local21);
frost$core$Object** $tmp2439 = &$tmp2438->first;
frost$core$Object* $tmp2440 = *$tmp2439;
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp2440), param3, param4);
// line 622
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp2441 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
*(&local21) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2442 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2442));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2443 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2444 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2444));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2445 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2445));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2446 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2446));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block46:;
// line 624
org$frostlang$frostc$IR$Value* $tmp2447 = *(&local18);
org$frostlang$frostc$Pair* $tmp2448 = *(&local21);
frost$core$Object** $tmp2449 = &$tmp2448->first;
frost$core$Object* $tmp2450 = *$tmp2449;
frost$core$Int64 $tmp2451 = (frost$core$Int64) {0};
ITable* $tmp2452 = ((frost$collections$ListView*) $tmp2450)->$class->itable;
while ($tmp2452->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2452 = $tmp2452->next;
}
$fn2454 $tmp2453 = $tmp2452->methods[0];
frost$core$Object* $tmp2455 = $tmp2453(((frost$collections$ListView*) $tmp2450), $tmp2451);
org$frostlang$frostc$IR$Value* $tmp2456 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2447, ((org$frostlang$frostc$MethodRef*) $tmp2455), param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2456));
frost$core$Frost$unref$frost$core$Object$Q($tmp2455);
org$frostlang$frostc$Pair* $tmp2457 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2457));
*(&local21) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2458 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2459 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2460 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2460));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2461 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2462 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2456;
block44:;
// line 627
frost$collections$Array* $tmp2463 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2463);
*(&local22) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
frost$collections$Array* $tmp2464 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2464));
*(&local22) = $tmp2463;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2463));
// line 628
ITable* $tmp2465 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2465->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2465 = $tmp2465->next;
}
$fn2467 $tmp2466 = $tmp2465->methods[0];
frost$collections$Iterator* $tmp2468 = $tmp2466(((frost$collections$Iterable*) param3));
goto block47;
block47:;
ITable* $tmp2469 = $tmp2468->$class->itable;
while ($tmp2469->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2469 = $tmp2469->next;
}
$fn2471 $tmp2470 = $tmp2469->methods[0];
frost$core$Bit $tmp2472 = $tmp2470($tmp2468);
bool $tmp2473 = $tmp2472.value;
if ($tmp2473) goto block49; else goto block48;
block48:;
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2474 = $tmp2468->$class->itable;
while ($tmp2474->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2474 = $tmp2474->next;
}
$fn2476 $tmp2475 = $tmp2474->methods[1];
frost$core$Object* $tmp2477 = $tmp2475($tmp2468);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2477)));
org$frostlang$frostc$ASTNode* $tmp2478 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2478));
*(&local23) = ((org$frostlang$frostc$ASTNode*) $tmp2477);
// line 629
org$frostlang$frostc$ASTNode* $tmp2479 = *(&local23);
org$frostlang$frostc$Type* $tmp2480 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp2479);
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
org$frostlang$frostc$Type* $tmp2481 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2481));
*(&local24) = $tmp2480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2480));
// line 630
org$frostlang$frostc$Type* $tmp2482 = *(&local24);
frost$core$Bit $tmp2483 = frost$core$Bit$init$builtin_bit($tmp2482 == NULL);
bool $tmp2484 = $tmp2483.value;
if ($tmp2484) goto block50; else goto block51;
block50:;
// line 632
frost$core$Int64* $tmp2485 = &param0->errorCount;
frost$core$Int64 $tmp2486 = *$tmp2485;
*(&local25) = $tmp2486;
// line 633
org$frostlang$frostc$ASTNode* $tmp2487 = *(&local23);
org$frostlang$frostc$IR$Value* $tmp2488 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2487);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2488));
// line 634
frost$core$Int64* $tmp2489 = &param0->errorCount;
frost$core$Int64 $tmp2490 = *$tmp2489;
frost$core$Int64 $tmp2491 = *(&local25);
frost$core$Bit $tmp2492 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2490, $tmp2491);
bool $tmp2493 = $tmp2492.value;
if ($tmp2493) goto block52; else goto block53;
block52:;
// line 636
org$frostlang$frostc$FixedArray* $tmp2494 = *(&local19);
frost$core$Int64 $tmp2495 = (frost$core$Int64) {0};
frost$core$Object* $tmp2496 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2494, $tmp2495);
frost$core$String** $tmp2497 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2496))->name;
frost$core$String* $tmp2498 = *$tmp2497;
frost$core$String* $tmp2499 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2500, $tmp2498);
frost$core$String* $tmp2501 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2499, &$s2502);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2501);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
frost$core$Frost$unref$frost$core$Object$Q($tmp2496);
goto block53;
block53:;
// line 638
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2503 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2503));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2477);
org$frostlang$frostc$ASTNode* $tmp2504 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2504));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
frost$collections$Array* $tmp2505 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2505));
*(&local22) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2506 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2506));
*(&local21) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2507 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2507));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2508 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2509 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2510 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2511 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2511));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block51:;
// line 640
frost$collections$Array* $tmp2512 = *(&local22);
org$frostlang$frostc$Type* $tmp2513 = *(&local24);
frost$collections$Array$add$frost$collections$Array$T($tmp2512, ((frost$core$Object*) $tmp2513));
org$frostlang$frostc$Type* $tmp2514 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
*(&local24) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2477);
org$frostlang$frostc$ASTNode* $tmp2515 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
*(&local23) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
// line 642
org$frostlang$frostc$FixedArray* $tmp2516 = *(&local19);
frost$core$Int64 $tmp2517 = (frost$core$Int64) {0};
frost$core$Object* $tmp2518 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2516, $tmp2517);
frost$core$String** $tmp2519 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2518))->name;
frost$core$String* $tmp2520 = *$tmp2519;
frost$core$String* $tmp2521 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2522, $tmp2520);
frost$core$String* $tmp2523 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2521, &$s2524);
frost$collections$Array* $tmp2525 = *(&local22);
ITable* $tmp2526 = ((frost$collections$CollectionView*) $tmp2525)->$class->itable;
while ($tmp2526->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2526 = $tmp2526->next;
}
$fn2528 $tmp2527 = $tmp2526->methods[1];
frost$core$String* $tmp2529 = $tmp2527(((frost$collections$CollectionView*) $tmp2525));
frost$core$String* $tmp2530 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2523, $tmp2529);
frost$core$String* $tmp2531 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2530, &$s2532);
$fn2534 $tmp2533 = ($fn2534) param4->$class->vtable[2];
frost$core$String* $tmp2535 = $tmp2533(param4);
frost$core$String* $tmp2536 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2531, $tmp2535);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2536);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2536));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2521));
frost$core$Frost$unref$frost$core$Object$Q($tmp2518);
// line 644
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$Array* $tmp2537 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
*(&local22) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2538 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2538));
*(&local21) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2539 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2540 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2540));
*(&local19) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2541 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2541));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2542 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2542));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2543 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block42:;
frost$core$Int64 $tmp2544 = (frost$core$Int64) {5};
frost$core$Bit $tmp2545 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2081, $tmp2544);
bool $tmp2546 = $tmp2545.value;
if ($tmp2546) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp2547 = (frost$core$Int64) {7};
frost$core$Bit $tmp2548 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2081, $tmp2547);
bool $tmp2549 = $tmp2548.value;
if ($tmp2549) goto block54; else goto block56;
block54:;
// line 647
org$frostlang$frostc$IR$Value* $tmp2550 = org$frostlang$frostc$expression$Call$callMethodObject$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
org$frostlang$frostc$IR* $tmp2551 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2552 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2552));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2550;
block56:;
frost$core$Int64 $tmp2553 = (frost$core$Int64) {14};
frost$core$Bit $tmp2554 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2081, $tmp2553);
bool $tmp2555 = $tmp2554.value;
if ($tmp2555) goto block57; else goto block58;
block57:;
org$frostlang$frostc$Type** $tmp2556 = (org$frostlang$frostc$Type**) (param2->$data + 0);
org$frostlang$frostc$Type* $tmp2557 = *$tmp2556;
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
org$frostlang$frostc$Type* $tmp2558 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2558));
*(&local26) = $tmp2557;
// line 650
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
// line 651
org$frostlang$frostc$Type* $tmp2559 = *(&local26);
frost$core$Bit $tmp2560 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp2559);
bool $tmp2561 = $tmp2560.value;
if ($tmp2561) goto block59; else goto block61;
block59:;
// line 652
org$frostlang$frostc$Type* $tmp2562 = *(&local26);
org$frostlang$frostc$FixedArray** $tmp2563 = &$tmp2562->subtypes;
org$frostlang$frostc$FixedArray* $tmp2564 = *$tmp2563;
frost$core$Int64 $tmp2565 = (frost$core$Int64) {1};
frost$core$Object* $tmp2566 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2564, $tmp2565);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2566)));
org$frostlang$frostc$Type* $tmp2567 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
*(&local27) = ((org$frostlang$frostc$Type*) $tmp2566);
frost$core$Frost$unref$frost$core$Object$Q($tmp2566);
goto block60;
block61:;
// line 1
// line 655
org$frostlang$frostc$Type* $tmp2568 = *(&local26);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
org$frostlang$frostc$Type* $tmp2569 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
*(&local27) = $tmp2568;
goto block60;
block60:;
// line 657
org$frostlang$frostc$Type* $tmp2570 = *(&local27);
org$frostlang$frostc$ClassDecl* $tmp2571 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2570);
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
org$frostlang$frostc$ClassDecl* $tmp2572 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
*(&local28) = $tmp2571;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2571));
// line 658
org$frostlang$frostc$ClassDecl* $tmp2573 = *(&local28);
frost$core$Bit $tmp2574 = frost$core$Bit$init$builtin_bit($tmp2573 == NULL);
bool $tmp2575 = $tmp2574.value;
if ($tmp2575) goto block62; else goto block63;
block62:;
// line 659
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2576 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2577 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2578 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2579 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2579));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2580 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block63:;
// line 661
org$frostlang$frostc$ClassDecl* $tmp2581 = *(&local28);
frost$core$Bit $tmp2582 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, $tmp2581);
frost$core$Bit $tmp2583 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2582);
bool $tmp2584 = $tmp2583.value;
if ($tmp2584) goto block64; else goto block65;
block64:;
// line 662
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2585 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2586 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2587 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2588 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2589 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block65:;
// line 664
org$frostlang$frostc$ClassDecl* $tmp2590 = *(&local28);
org$frostlang$frostc$SymbolTable* $tmp2591 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp2590);
org$frostlang$frostc$Symbol* $tmp2592 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp2591, &$s2593);
*(&local29) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
org$frostlang$frostc$Symbol* $tmp2594 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
*(&local29) = $tmp2592;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2591));
// line 665
org$frostlang$frostc$Symbol* $tmp2595 = *(&local29);
frost$core$Bit $tmp2596 = frost$core$Bit$init$builtin_bit($tmp2595 != NULL);
bool $tmp2597 = $tmp2596.value;
if ($tmp2597) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp2598 = (frost$core$Int64) {665};
org$frostlang$frostc$ClassDecl* $tmp2599 = *(&local28);
frost$core$String** $tmp2600 = &$tmp2599->name;
frost$core$String* $tmp2601 = *$tmp2600;
frost$core$String* $tmp2602 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2603, $tmp2601);
frost$core$String* $tmp2604 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2602, &$s2605);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2606, $tmp2598, $tmp2604);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2602));
abort(); // unreachable
block66:;
// line 666
org$frostlang$frostc$ClassDecl* $tmp2607 = *(&local28);
frost$core$Bit $tmp2608 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, $tmp2607);
bool $tmp2609 = $tmp2608.value;
if ($tmp2609) goto block68; else goto block69;
block68:;
// line 667
org$frostlang$frostc$Symbol* $tmp2610 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp2611 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), $tmp2610);
org$frostlang$frostc$IR$Value* $tmp2612 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2611, param3, param4);
org$frostlang$frostc$Type* $tmp2613 = *(&local27);
org$frostlang$frostc$IR$Value* $tmp2614 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2612, $tmp2613);
org$frostlang$frostc$IR$Value* $tmp2615 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2614, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2612));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
org$frostlang$frostc$Symbol* $tmp2616 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
*(&local29) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2617 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2617));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2618 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2618));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2619 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2619));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2620 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2621 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2615;
block69:;
// line 671
org$frostlang$frostc$IR* $tmp2622 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2623 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2624 = (frost$core$Int64) {6};
org$frostlang$frostc$ClassDecl* $tmp2625 = *(&local28);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl($tmp2623, $tmp2624, param1, $tmp2625);
$fn2627 $tmp2626 = ($fn2627) $tmp2622->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2628 = $tmp2626($tmp2622, $tmp2623);
*(&local30) = $tmp2628;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
// line 672
org$frostlang$frostc$IR$Value* $tmp2629 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2630 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2631 = *(&local30);
org$frostlang$frostc$Type* $tmp2632 = *(&local27);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2629, $tmp2630, $tmp2631, $tmp2632);
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
org$frostlang$frostc$IR$Value* $tmp2633 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2633));
*(&local31) = $tmp2629;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
// line 673
frost$collections$Stack** $tmp2634 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2635 = *$tmp2634;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2636 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp2637 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp2638 = *(&local31);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp2636, $tmp2637, $tmp2638);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2635, ((frost$core$Object*) $tmp2636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
// line 674
org$frostlang$frostc$IR$Value* $tmp2639 = *(&local31);
org$frostlang$frostc$Symbol* $tmp2640 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp2641 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2639, $tmp2640);
org$frostlang$frostc$Compiler$TypeContext* $tmp2642 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2643 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2642, $tmp2643);
org$frostlang$frostc$IR$Value* $tmp2644 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2641, param3, $tmp2642);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2641));
// line 676
org$frostlang$frostc$IR$Value* $tmp2645 = *(&local31);
org$frostlang$frostc$IR$Value* $tmp2646 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2645, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2646));
org$frostlang$frostc$IR$Value* $tmp2647 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2647));
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Symbol* $tmp2648 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2648));
*(&local29) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2649 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2649));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2650 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
*(&local27) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2651 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2651));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2652 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2653 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2646;
block58:;
// line 679
frost$core$Int64 $tmp2654 = (frost$core$Int64) {679};
frost$core$String* $tmp2655 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2656, ((frost$core$Object*) param2));
frost$core$String* $tmp2657 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2655, &$s2658);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2659, $tmp2654, $tmp2657);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
abort(); // unreachable
block1:;
goto block70;
block70:;

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
// line 686
org$frostlang$frostc$Pair* $tmp2660 = org$frostlang$frostc$Compiler$getTryScope$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Block$ID$Q$Corg$frostlang$frostc$Variable$Q$GT$Q(param0);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
org$frostlang$frostc$Pair* $tmp2661 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
*(&local0) = $tmp2660;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
// line 687
org$frostlang$frostc$Pair* $tmp2662 = *(&local0);
frost$core$Bit $tmp2663 = frost$core$Bit$init$builtin_bit($tmp2662 == NULL);
bool $tmp2664 = $tmp2663.value;
if ($tmp2664) goto block1; else goto block2;
block1:;
// line 688
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Pair* $tmp2665 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return param2;
block2:;
// line 690
org$frostlang$frostc$IR** $tmp2666 = &param0->ir;
org$frostlang$frostc$IR* $tmp2667 = *$tmp2666;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
org$frostlang$frostc$IR* $tmp2668 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
*(&local1) = $tmp2667;
// line 691
$fn2670 $tmp2669 = ($fn2670) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2671 = $tmp2669(param2);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
org$frostlang$frostc$Type* $tmp2672 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
*(&local2) = $tmp2671;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
// line 692
org$frostlang$frostc$Type* $tmp2673 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2673));
org$frostlang$frostc$Type* $tmp2674 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2674));
*(&local3) = $tmp2673;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2673));
// line 693
org$frostlang$frostc$Type* $tmp2675 = *(&local3);
org$frostlang$frostc$Type* $tmp2676 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp2675);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
org$frostlang$frostc$Type* $tmp2677 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2677));
*(&local4) = $tmp2676;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
// line 694
org$frostlang$frostc$Type* $tmp2678 = *(&local2);
org$frostlang$frostc$Type* $tmp2679 = *(&local4);
frost$core$Bit $tmp2680 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp2678, $tmp2679);
bool $tmp2681 = $tmp2680.value;
if ($tmp2681) goto block3; else goto block5;
block3:;
// line 695
org$frostlang$frostc$IR* $tmp2682 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2683 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2684 = (frost$core$Int64) {0};
frost$core$Int64 $tmp2685 = (frost$core$Int64) {21};
org$frostlang$frostc$expression$Binary$Operator $tmp2686 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2685);
org$frostlang$frostc$IR$Value* $tmp2687 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2688 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp2689 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp2687, $tmp2688, $tmp2689);
org$frostlang$frostc$Type* $tmp2690 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp2683, $tmp2684, param1, param2, $tmp2686, $tmp2687, $tmp2690);
$fn2692 $tmp2691 = ($fn2692) $tmp2682->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2693 = $tmp2691($tmp2682, $tmp2683);
*(&local5) = $tmp2693;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
// line 697
org$frostlang$frostc$IR* $tmp2694 = *(&local1);
$fn2696 $tmp2695 = ($fn2696) $tmp2694->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2697 = $tmp2695($tmp2694, &$s2698);
*(&local6) = $tmp2697;
// line 698
org$frostlang$frostc$IR* $tmp2699 = *(&local1);
$fn2701 $tmp2700 = ($fn2701) $tmp2699->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2702 = $tmp2700($tmp2699, &$s2703);
*(&local7) = $tmp2702;
// line 699
org$frostlang$frostc$IR* $tmp2704 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2705 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2706 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2707 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2708 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2709 = *(&local5);
org$frostlang$frostc$Type* $tmp2710 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2707, $tmp2708, $tmp2709, $tmp2710);
org$frostlang$frostc$IR$Block$ID $tmp2711 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2712 = *(&local7);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2705, $tmp2706, param1, $tmp2707, $tmp2711, $tmp2712);
$fn2714 $tmp2713 = ($fn2714) $tmp2704->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2715 = $tmp2713($tmp2704, $tmp2705);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2705));
// line 701
org$frostlang$frostc$IR* $tmp2716 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp2717 = *(&local7);
$fn2719 $tmp2718 = ($fn2719) $tmp2716->$class->vtable[4];
$tmp2718($tmp2716, $tmp2717);
// line 702
org$frostlang$frostc$Pair* $tmp2720 = *(&local0);
frost$core$Object** $tmp2721 = &$tmp2720->second;
frost$core$Object* $tmp2722 = *$tmp2721;
org$frostlang$frostc$Variable$Storage** $tmp2723 = &((org$frostlang$frostc$Variable*) $tmp2722)->storage;
org$frostlang$frostc$Variable$Storage* $tmp2724 = *$tmp2723;
frost$core$Int64* $tmp2725 = &$tmp2724->$rawValue;
frost$core$Int64 $tmp2726 = *$tmp2725;
frost$core$Int64 $tmp2727 = (frost$core$Int64) {0};
frost$core$Bit $tmp2728 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2726, $tmp2727);
bool $tmp2729 = $tmp2728.value;
if ($tmp2729) goto block7; else goto block8;
block7:;
frost$core$Int64* $tmp2730 = (frost$core$Int64*) ($tmp2724->$data + 0);
frost$core$Int64 $tmp2731 = *$tmp2730;
*(&local8) = $tmp2731;
// line 704
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, param2);
// line 705
org$frostlang$frostc$IR* $tmp2732 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2733 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2734 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp2735 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2736 = (frost$core$Int64) {2};
frost$core$Int64 $tmp2737 = *(&local8);
org$frostlang$frostc$Type* $tmp2738 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp2735, $tmp2736, $tmp2737, $tmp2738);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2733, $tmp2734, param1, param2, $tmp2735);
$fn2740 $tmp2739 = ($fn2740) $tmp2732->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2741 = $tmp2739($tmp2732, $tmp2733);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
goto block6;
block8:;
// line 708
frost$core$Int64 $tmp2742 = (frost$core$Int64) {708};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2743, $tmp2742);
abort(); // unreachable
block6:;
// line 711
org$frostlang$frostc$Compiler$leaveTryScope(param0);
// line 712
org$frostlang$frostc$IR* $tmp2744 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2745 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2746 = (frost$core$Int64) {1};
org$frostlang$frostc$Pair* $tmp2747 = *(&local0);
frost$core$Object** $tmp2748 = &$tmp2747->first;
frost$core$Object* $tmp2749 = *$tmp2748;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2745, $tmp2746, param1, ((org$frostlang$frostc$IR$Block$ID) ($tmp2749 != NULL ? ((org$frostlang$frostc$IR$Block$ID$nullable) { ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp2749)->value, true }) : (org$frostlang$frostc$IR$Block$ID$nullable) { .nonnull = 0 }).value));
$fn2751 $tmp2750 = ($fn2751) $tmp2744->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2752 = $tmp2750($tmp2744, $tmp2745);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2745));
// line 713
org$frostlang$frostc$IR* $tmp2753 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp2754 = *(&local6);
$fn2756 $tmp2755 = ($fn2756) $tmp2753->$class->vtable[4];
$tmp2755($tmp2753, $tmp2754);
// line 714
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2757 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2757));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2758 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2759 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2759));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2760 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Pair* $tmp2761 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2761));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block5:;
// line 716
org$frostlang$frostc$Type* $tmp2762 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp2763 = &$tmp2762->typeKind;
org$frostlang$frostc$Type$Kind $tmp2764 = *$tmp2763;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2765;
$tmp2765 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2765->value = $tmp2764;
frost$core$Int64 $tmp2766 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp2767 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2766);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2768;
$tmp2768 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2768->value = $tmp2767;
ITable* $tmp2769 = ((frost$core$Equatable*) $tmp2765)->$class->itable;
while ($tmp2769->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2769 = $tmp2769->next;
}
$fn2771 $tmp2770 = $tmp2769->methods[0];
frost$core$Bit $tmp2772 = $tmp2770(((frost$core$Equatable*) $tmp2765), ((frost$core$Equatable*) $tmp2768));
bool $tmp2773 = $tmp2772.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2768)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2765)));
if ($tmp2773) goto block11; else goto block10;
block11:;
org$frostlang$frostc$Type* $tmp2774 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp2775 = &$tmp2774->subtypes;
org$frostlang$frostc$FixedArray* $tmp2776 = *$tmp2775;
frost$core$Int64 $tmp2777 = (frost$core$Int64) {0};
frost$core$Object* $tmp2778 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2776, $tmp2777);
frost$core$String** $tmp2779 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp2778))->name;
frost$core$String* $tmp2780 = *$tmp2779;
frost$core$Bit $tmp2781 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2780, &$s2782);
bool $tmp2783 = $tmp2781.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp2778);
if ($tmp2783) goto block9; else goto block10;
block9:;
// line 717
org$frostlang$frostc$Type* $tmp2784 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp2785 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2784);
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
org$frostlang$frostc$ClassDecl* $tmp2786 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2786));
*(&local9) = $tmp2785;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2785));
// line 718
org$frostlang$frostc$ClassDecl* $tmp2787 = *(&local9);
frost$core$Bit $tmp2788 = frost$core$Bit$init$builtin_bit($tmp2787 != NULL);
bool $tmp2789 = $tmp2788.value;
if ($tmp2789) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp2790 = (frost$core$Int64) {718};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2791, $tmp2790);
abort(); // unreachable
block12:;
// line 719
org$frostlang$frostc$ASTNode* $tmp2792 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2793 = (frost$core$Int64) {26};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2792, $tmp2793, param1, param2);
org$frostlang$frostc$IR$Value* $tmp2794 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2792, &$s2795);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
org$frostlang$frostc$IR$Value* $tmp2796 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2796));
*(&local10) = $tmp2794;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2794));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2792));
// line 721
org$frostlang$frostc$IR$Value* $tmp2797 = *(&local10);
frost$core$Bit $tmp2798 = frost$core$Bit$init$builtin_bit($tmp2797 != NULL);
bool $tmp2799 = $tmp2798.value;
if ($tmp2799) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp2800 = (frost$core$Int64) {721};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2801, $tmp2800);
abort(); // unreachable
block14:;
// line 722
org$frostlang$frostc$IR* $tmp2802 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2803 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2804 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp2805 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp2806 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2805);
frost$core$Int64 $tmp2807 = (frost$core$Int64) {6};
org$frostlang$frostc$expression$Binary$Operator $tmp2808 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2807);
org$frostlang$frostc$IR$Value* $tmp2809 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2810 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2811 = (frost$core$UInt64) {0};
org$frostlang$frostc$Type* $tmp2812 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp2809, $tmp2810, $tmp2811, $tmp2812);
org$frostlang$frostc$Type* $tmp2813 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp2803, $tmp2804, param1, $tmp2806, $tmp2808, $tmp2809, $tmp2813);
$fn2815 $tmp2814 = ($fn2815) $tmp2802->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2816 = $tmp2814($tmp2802, $tmp2803);
*(&local11) = $tmp2816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2809));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2803));
// line 725
org$frostlang$frostc$IR* $tmp2817 = *(&local1);
$fn2819 $tmp2818 = ($fn2819) $tmp2817->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2820 = $tmp2818($tmp2817, &$s2821);
*(&local12) = $tmp2820;
// line 726
org$frostlang$frostc$IR* $tmp2822 = *(&local1);
$fn2824 $tmp2823 = ($fn2824) $tmp2822->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2825 = $tmp2823($tmp2822, &$s2826);
*(&local13) = $tmp2825;
// line 727
org$frostlang$frostc$IR* $tmp2827 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2828 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2829 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2830 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2831 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2832 = *(&local11);
org$frostlang$frostc$Type* $tmp2833 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2830, $tmp2831, $tmp2832, $tmp2833);
org$frostlang$frostc$IR$Block$ID $tmp2834 = *(&local12);
org$frostlang$frostc$IR$Block$ID $tmp2835 = *(&local13);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2828, $tmp2829, param1, $tmp2830, $tmp2834, $tmp2835);
$fn2837 $tmp2836 = ($fn2837) $tmp2827->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2838 = $tmp2836($tmp2827, $tmp2828);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2828));
// line 729
org$frostlang$frostc$IR* $tmp2839 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp2840 = *(&local13);
$fn2842 $tmp2841 = ($fn2842) $tmp2839->$class->vtable[4];
$tmp2841($tmp2839, $tmp2840);
// line 730
org$frostlang$frostc$IR* $tmp2843 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2844 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2845 = (frost$core$Int64) {4};
org$frostlang$frostc$ClassDecl* $tmp2846 = *(&local9);
frost$collections$Array** $tmp2847 = &$tmp2846->choiceCases;
frost$collections$Array* $tmp2848 = *$tmp2847;
frost$core$Int64 $tmp2849 = (frost$core$Int64) {1};
frost$core$Object* $tmp2850 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp2848, $tmp2849);
frost$core$Int64 $tmp2851 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp2844, $tmp2845, param1, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp2850), $tmp2851);
$fn2853 $tmp2852 = ($fn2853) $tmp2843->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2854 = $tmp2852($tmp2843, $tmp2844);
*(&local14) = $tmp2854;
frost$core$Frost$unref$frost$core$Object$Q($tmp2850);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
// line 732
org$frostlang$frostc$IR* $tmp2855 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2856 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2857 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp2858 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2859 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2860 = *(&local14);
org$frostlang$frostc$Type* $tmp2861 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2858, $tmp2859, $tmp2860, $tmp2861);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2856, $tmp2857, param1, $tmp2858);
$fn2863 $tmp2862 = ($fn2863) $tmp2855->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2864 = $tmp2862($tmp2855, $tmp2856);
*(&local15) = $tmp2864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2856));
// line 734
org$frostlang$frostc$IR$Value* $tmp2865 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2866 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2867 = *(&local15);
org$frostlang$frostc$Type* $tmp2868 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2865, $tmp2866, $tmp2867, $tmp2868);
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
org$frostlang$frostc$IR$Value* $tmp2869 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
*(&local16) = $tmp2865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
// line 735
org$frostlang$frostc$IR$Value* $tmp2870 = *(&local16);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp2870);
// line 736
org$frostlang$frostc$Pair* $tmp2871 = *(&local0);
frost$core$Object** $tmp2872 = &$tmp2871->second;
frost$core$Object* $tmp2873 = *$tmp2872;
org$frostlang$frostc$Variable$Storage** $tmp2874 = &((org$frostlang$frostc$Variable*) $tmp2873)->storage;
org$frostlang$frostc$Variable$Storage* $tmp2875 = *$tmp2874;
frost$core$Int64* $tmp2876 = &$tmp2875->$rawValue;
frost$core$Int64 $tmp2877 = *$tmp2876;
frost$core$Int64 $tmp2878 = (frost$core$Int64) {0};
frost$core$Bit $tmp2879 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2877, $tmp2878);
bool $tmp2880 = $tmp2879.value;
if ($tmp2880) goto block17; else goto block18;
block17:;
frost$core$Int64* $tmp2881 = (frost$core$Int64*) ($tmp2875->$data + 0);
frost$core$Int64 $tmp2882 = *$tmp2881;
*(&local17) = $tmp2882;
// line 738
org$frostlang$frostc$IR* $tmp2883 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2884 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2885 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp2886 = *(&local16);
org$frostlang$frostc$IR$Value* $tmp2887 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2888 = (frost$core$Int64) {2};
frost$core$Int64 $tmp2889 = *(&local17);
org$frostlang$frostc$Type* $tmp2890 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp2887, $tmp2888, $tmp2889, $tmp2890);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2884, $tmp2885, param1, $tmp2886, $tmp2887);
$fn2892 $tmp2891 = ($fn2892) $tmp2883->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2893 = $tmp2891($tmp2883, $tmp2884);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2884));
goto block16;
block18:;
// line 741
frost$core$Int64 $tmp2894 = (frost$core$Int64) {741};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2895, $tmp2894);
abort(); // unreachable
block16:;
// line 744
org$frostlang$frostc$Compiler$leaveTryScope(param0);
// line 745
org$frostlang$frostc$IR* $tmp2896 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2897 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2898 = (frost$core$Int64) {1};
org$frostlang$frostc$Pair* $tmp2899 = *(&local0);
frost$core$Object** $tmp2900 = &$tmp2899->first;
frost$core$Object* $tmp2901 = *$tmp2900;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2897, $tmp2898, param1, ((org$frostlang$frostc$IR$Block$ID) ($tmp2901 != NULL ? ((org$frostlang$frostc$IR$Block$ID$nullable) { ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp2901)->value, true }) : (org$frostlang$frostc$IR$Block$ID$nullable) { .nonnull = 0 }).value));
$fn2903 $tmp2902 = ($fn2903) $tmp2896->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2904 = $tmp2902($tmp2896, $tmp2897);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
// line 746
org$frostlang$frostc$IR* $tmp2905 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp2906 = *(&local12);
$fn2908 $tmp2907 = ($fn2908) $tmp2905->$class->vtable[4];
$tmp2907($tmp2905, $tmp2906);
// line 747
org$frostlang$frostc$IR* $tmp2909 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2910 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2911 = (frost$core$Int64) {4};
org$frostlang$frostc$ClassDecl* $tmp2912 = *(&local9);
frost$collections$Array** $tmp2913 = &$tmp2912->choiceCases;
frost$collections$Array* $tmp2914 = *$tmp2913;
frost$core$Int64 $tmp2915 = (frost$core$Int64) {0};
frost$core$Object* $tmp2916 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp2914, $tmp2915);
frost$core$Int64 $tmp2917 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp2910, $tmp2911, param1, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp2916), $tmp2917);
$fn2919 $tmp2918 = ($fn2919) $tmp2909->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2920 = $tmp2918($tmp2909, $tmp2910);
*(&local18) = $tmp2920;
frost$core$Frost$unref$frost$core$Object$Q($tmp2916);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
// line 749
org$frostlang$frostc$IR* $tmp2921 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2922 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2923 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp2924 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2925 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2926 = *(&local18);
org$frostlang$frostc$Type* $tmp2927 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2924, $tmp2925, $tmp2926, $tmp2927);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2922, $tmp2923, param1, $tmp2924);
$fn2929 $tmp2928 = ($fn2929) $tmp2921->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2930 = $tmp2928($tmp2921, $tmp2922);
*(&local19) = $tmp2930;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2927));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2924));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2922));
// line 751
org$frostlang$frostc$IR$Value* $tmp2931 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2932 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2933 = *(&local19);
org$frostlang$frostc$Type* $tmp2934 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2931, $tmp2932, $tmp2933, $tmp2934);
org$frostlang$frostc$Type* $tmp2935 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp2936 = &$tmp2935->subtypes;
org$frostlang$frostc$FixedArray* $tmp2937 = *$tmp2936;
frost$core$Int64 $tmp2938 = (frost$core$Int64) {1};
frost$core$Object* $tmp2939 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2937, $tmp2938);
org$frostlang$frostc$IR$Value* $tmp2940 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2931, ((org$frostlang$frostc$Type*) $tmp2939));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
org$frostlang$frostc$IR$Value* $tmp2941 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2941));
*(&local20) = $tmp2940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
frost$core$Frost$unref$frost$core$Object$Q($tmp2939);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2934));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2931));
// line 753
org$frostlang$frostc$IR$Value* $tmp2942 = *(&local20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2942));
org$frostlang$frostc$IR$Value* $tmp2943 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2944 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2944));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2945 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2945));
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2946 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2946));
*(&local9) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2947 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2948 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2949 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2950 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Pair* $tmp2951 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2951));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp2942;
block10:;
goto block4;
block4:;
// line 755
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp2952 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2952));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2953 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2953));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2954 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2954));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2955 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Pair* $tmp2956 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
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
// line 763
org$frostlang$frostc$IR** $tmp2957 = &param0->ir;
org$frostlang$frostc$IR* $tmp2958 = *$tmp2957;
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
org$frostlang$frostc$IR* $tmp2959 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2959));
*(&local5) = $tmp2958;
// line 765
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodRef* $tmp2960 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
*(&local6) = param3;
// line 766
org$frostlang$frostc$MethodRef* $tmp2961 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp2962 = &$tmp2961->value;
org$frostlang$frostc$MethodDecl* $tmp2963 = *$tmp2962;
org$frostlang$frostc$MethodDecl$Kind* $tmp2964 = &$tmp2963->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2965 = *$tmp2964;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2966;
$tmp2966 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2966->value = $tmp2965;
frost$core$Int64 $tmp2967 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2968 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2967);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2969;
$tmp2969 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2969->value = $tmp2968;
ITable* $tmp2970 = ((frost$core$Equatable*) $tmp2966)->$class->itable;
while ($tmp2970->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2970 = $tmp2970->next;
}
$fn2972 $tmp2971 = $tmp2970->methods[0];
frost$core$Bit $tmp2973 = $tmp2971(((frost$core$Equatable*) $tmp2966), ((frost$core$Equatable*) $tmp2969));
bool $tmp2974 = $tmp2973.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2969)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2966)));
if ($tmp2974) goto block16; else goto block17;
block16:;
// line 767
frost$core$Bit $tmp2975 = frost$core$Bit$init$builtin_bit(false);
*(&local7) = $tmp2975;
// line 768
frost$core$Bit $tmp2976 = frost$core$Bit$init$builtin_bit(false);
*(&local8) = $tmp2976;
// line 769
frost$core$Bit $tmp2977 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp2978 = $tmp2977.value;
if ($tmp2978) goto block18; else goto block20;
block18:;
// line 770
frost$core$Int64* $tmp2979 = &param2->$rawValue;
frost$core$Int64 $tmp2980 = *$tmp2979;
frost$core$Int64 $tmp2981 = (frost$core$Int64) {5};
frost$core$Bit $tmp2982 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2980, $tmp2981);
bool $tmp2983 = $tmp2982.value;
if ($tmp2983) goto block22; else goto block23;
block22:;
frost$core$Int64* $tmp2984 = (frost$core$Int64*) (param2->$data + 0);
frost$core$Int64 $tmp2985 = *$tmp2984;
*(&local9) = $tmp2985;
org$frostlang$frostc$Type** $tmp2986 = (org$frostlang$frostc$Type**) (param2->$data + 8);
org$frostlang$frostc$Type* $tmp2987 = *$tmp2986;
// line 772
frost$core$Int64 $tmp2988 = *(&local9);
frost$core$Int64 $tmp2989 = (frost$core$Int64) {0};
frost$core$Bit $tmp2990 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2988, $tmp2989);
bool $tmp2991 = $tmp2990.value;
if ($tmp2991) goto block24; else goto block25;
block24:;
frost$core$Bit $tmp2992 = org$frostlang$frostc$Compiler$isClassContext$R$frost$core$Bit(param0);
frost$core$Bit $tmp2993 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2992);
*(&local10) = $tmp2993;
goto block26;
block25:;
*(&local10) = $tmp2990;
goto block26;
block26:;
frost$core$Bit $tmp2994 = *(&local10);
*(&local8) = $tmp2994;
// line 773
frost$core$Bit $tmp2995 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp2995;
goto block21;
block23:;
frost$core$Int64 $tmp2996 = (frost$core$Int64) {7};
frost$core$Bit $tmp2997 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2980, $tmp2996);
bool $tmp2998 = $tmp2997.value;
if ($tmp2998) goto block27; else goto block28;
block27:;
org$frostlang$frostc$IR$Statement$ID* $tmp2999 = (org$frostlang$frostc$IR$Statement$ID*) (param2->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp3000 = *$tmp2999;
*(&local11) = $tmp3000;
org$frostlang$frostc$Type** $tmp3001 = (org$frostlang$frostc$Type**) (param2->$data + 8);
org$frostlang$frostc$Type* $tmp3002 = *$tmp3001;
// line 776
org$frostlang$frostc$IR$Statement$ID $tmp3003 = *(&local11);
org$frostlang$frostc$IR* $tmp3004 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3005 = &$tmp3004->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3006 = *$tmp3005;
frost$collections$Array** $tmp3007 = &$tmp3006->ids;
frost$collections$Array* $tmp3008 = *$tmp3007;
org$frostlang$frostc$IR* $tmp3009 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3010 = &$tmp3009->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3011 = *$tmp3010;
frost$collections$Array** $tmp3012 = &$tmp3011->ids;
frost$collections$Array* $tmp3013 = *$tmp3012;
ITable* $tmp3014 = ((frost$collections$CollectionView*) $tmp3013)->$class->itable;
while ($tmp3014->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3014 = $tmp3014->next;
}
$fn3016 $tmp3015 = $tmp3014->methods[0];
frost$core$Int64 $tmp3017 = $tmp3015(((frost$collections$CollectionView*) $tmp3013));
frost$core$Int64 $tmp3018 = (frost$core$Int64) {1};
int64_t $tmp3019 = $tmp3017.value;
int64_t $tmp3020 = $tmp3018.value;
int64_t $tmp3021 = $tmp3019 - $tmp3020;
frost$core$Int64 $tmp3022 = (frost$core$Int64) {$tmp3021};
frost$core$Object* $tmp3023 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3008, $tmp3022);
frost$core$Bit $tmp3024 = org$frostlang$frostc$IR$Statement$ID$$EQ$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Bit($tmp3003, ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp3023)->value);
bool $tmp3025 = $tmp3024.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3023);
if ($tmp3025) goto block29; else goto block30;
block29:;
// line 777
org$frostlang$frostc$IR* $tmp3026 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3027 = &$tmp3026->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3028 = *$tmp3027;
frost$collections$Array** $tmp3029 = &$tmp3028->statements;
frost$collections$Array* $tmp3030 = *$tmp3029;
org$frostlang$frostc$IR* $tmp3031 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3032 = &$tmp3031->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3033 = *$tmp3032;
frost$collections$Array** $tmp3034 = &$tmp3033->statements;
frost$collections$Array* $tmp3035 = *$tmp3034;
ITable* $tmp3036 = ((frost$collections$CollectionView*) $tmp3035)->$class->itable;
while ($tmp3036->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3036 = $tmp3036->next;
}
$fn3038 $tmp3037 = $tmp3036->methods[0];
frost$core$Int64 $tmp3039 = $tmp3037(((frost$collections$CollectionView*) $tmp3035));
frost$core$Int64 $tmp3040 = (frost$core$Int64) {1};
int64_t $tmp3041 = $tmp3039.value;
int64_t $tmp3042 = $tmp3040.value;
int64_t $tmp3043 = $tmp3041 - $tmp3042;
frost$core$Int64 $tmp3044 = (frost$core$Int64) {$tmp3043};
frost$core$Object* $tmp3045 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3030, $tmp3044);
*(&local12) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp3045)));
org$frostlang$frostc$IR$Statement* $tmp3046 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3046));
*(&local12) = ((org$frostlang$frostc$IR$Statement*) $tmp3045);
frost$core$Frost$unref$frost$core$Object$Q($tmp3045);
// line 778
org$frostlang$frostc$IR$Statement* $tmp3047 = *(&local12);
frost$core$Int64* $tmp3048 = &$tmp3047->$rawValue;
frost$core$Int64 $tmp3049 = *$tmp3048;
frost$core$Int64 $tmp3050 = (frost$core$Int64) {6};
frost$core$Bit $tmp3051 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3049, $tmp3050);
bool $tmp3052 = $tmp3051.value;
if ($tmp3052) goto block32; else goto block31;
block32:;
// line 780
frost$core$Bit $tmp3053 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3053;
goto block31;
block31:;
org$frostlang$frostc$IR$Statement* $tmp3054 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3054));
*(&local12) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block30;
block30:;
goto block21;
block28:;
frost$core$Int64 $tmp3055 = (frost$core$Int64) {13};
frost$core$Bit $tmp3056 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2980, $tmp3055);
bool $tmp3057 = $tmp3056.value;
if ($tmp3057) goto block33; else goto block21;
block33:;
// line 786
frost$core$Bit $tmp3058 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp3058;
// line 787
frost$core$Bit $tmp3059 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3059;
goto block21;
block21:;
goto block19;
block20:;
// line 1
// line 792
org$frostlang$frostc$MethodRef* $tmp3060 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3061 = &$tmp3060->value;
org$frostlang$frostc$MethodDecl* $tmp3062 = *$tmp3061;
frost$core$Weak** $tmp3063 = &$tmp3062->owner;
frost$core$Weak* $tmp3064 = *$tmp3063;
frost$core$Object* $tmp3065 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3064);
frost$core$Bit $tmp3066 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp3065));
bool $tmp3067 = $tmp3066.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3065);
if ($tmp3067) goto block34; else goto block36;
block34:;
// line 793
frost$core$Bit $tmp3068 = frost$core$Bit$init$builtin_bit(false);
*(&local8) = $tmp3068;
// line 794
frost$core$Bit $tmp3069 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3069;
goto block35;
block36:;
// line 1
// line 797
frost$core$Bit $tmp3070 = org$frostlang$frostc$Compiler$isClassContext$R$frost$core$Bit(param0);
frost$core$Bit $tmp3071 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3070);
*(&local8) = $tmp3071;
// line 798
frost$core$Bit $tmp3072 = *(&local8);
*(&local7) = $tmp3072;
goto block35;
block35:;
goto block19;
block19:;
// line 801
frost$core$Bit $tmp3073 = *(&local8);
bool $tmp3074 = $tmp3073.value;
if ($tmp3074) goto block39; else goto block38;
block39:;
frost$collections$Stack** $tmp3075 = &param0->currentMethod;
frost$collections$Stack* $tmp3076 = *$tmp3075;
frost$core$Int64 $tmp3077 = (frost$core$Int64) {0};
frost$core$Object* $tmp3078 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3076, $tmp3077);
org$frostlang$frostc$MethodDecl$Kind* $tmp3079 = &((org$frostlang$frostc$MethodDecl*) $tmp3078)->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3080 = *$tmp3079;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3081;
$tmp3081 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3081->value = $tmp3080;
frost$core$Int64 $tmp3082 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3083 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3082);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3084;
$tmp3084 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3084->value = $tmp3083;
ITable* $tmp3085 = ((frost$core$Equatable*) $tmp3081)->$class->itable;
while ($tmp3085->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3085 = $tmp3085->next;
}
$fn3087 $tmp3086 = $tmp3085->methods[1];
frost$core$Bit $tmp3088 = $tmp3086(((frost$core$Equatable*) $tmp3081), ((frost$core$Equatable*) $tmp3084));
bool $tmp3089 = $tmp3088.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3084)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3081)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3078);
if ($tmp3089) goto block37; else goto block38;
block37:;
// line 802
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s3090);
// line 803
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3091 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3091));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3092 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3092));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block38:;
// line 805
frost$core$Bit $tmp3093 = *(&local7);
frost$core$Bit $tmp3094 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3093);
bool $tmp3095 = $tmp3094.value;
if ($tmp3095) goto block40; else goto block41;
block40:;
// line 806
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s3096);
// line 807
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3097 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3097));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3098 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block41:;
goto block17;
block17:;
// line 810
ITable* $tmp3099 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3099->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3099 = $tmp3099->next;
}
$fn3101 $tmp3100 = $tmp3099->methods[0];
frost$core$Int64 $tmp3102 = $tmp3100(((frost$collections$CollectionView*) param4));
org$frostlang$frostc$MethodRef* $tmp3103 = *(&local6);
frost$core$Int64 $tmp3104 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3103);
int64_t $tmp3105 = $tmp3102.value;
int64_t $tmp3106 = $tmp3104.value;
bool $tmp3107 = $tmp3105 != $tmp3106;
frost$core$Bit $tmp3108 = (frost$core$Bit) {$tmp3107};
bool $tmp3109 = $tmp3108.value;
if ($tmp3109) goto block42; else goto block43;
block42:;
// line 811
org$frostlang$frostc$MethodRef* $tmp3110 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3111 = &$tmp3110->value;
org$frostlang$frostc$MethodDecl* $tmp3112 = *$tmp3111;
frost$core$String* $tmp3113 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3112);
frost$core$String* $tmp3114 = frost$core$String$get_asString$R$frost$core$String($tmp3113);
frost$core$String* $tmp3115 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3114, &$s3116);
org$frostlang$frostc$MethodRef* $tmp3117 = *(&local6);
frost$core$Int64 $tmp3118 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3117);
frost$core$Int64$wrapper* $tmp3119;
$tmp3119 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3119->value = $tmp3118;
frost$core$String* $tmp3120 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3115, ((frost$core$Object*) $tmp3119));
frost$core$String* $tmp3121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3120, &$s3122);
org$frostlang$frostc$MethodRef* $tmp3123 = *(&local6);
frost$core$Int64 $tmp3124 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3123);
frost$core$Int64 $tmp3125 = (frost$core$Int64) {1};
frost$core$Bit $tmp3126 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3124, $tmp3125);
frost$core$Bit$wrapper* $tmp3127;
$tmp3127 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3127->value = $tmp3126;
ITable* $tmp3128 = ((frost$core$Formattable*) $tmp3127)->$class->itable;
while ($tmp3128->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp3128 = $tmp3128->next;
}
$fn3130 $tmp3129 = $tmp3128->methods[0];
frost$core$String* $tmp3131 = $tmp3129(((frost$core$Formattable*) $tmp3127), &$s3132);
frost$core$String* $tmp3133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3134, $tmp3131);
frost$core$String* $tmp3135 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3133, &$s3136);
ITable* $tmp3137 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3137->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3137 = $tmp3137->next;
}
$fn3139 $tmp3138 = $tmp3137->methods[0];
frost$core$Int64 $tmp3140 = $tmp3138(((frost$collections$CollectionView*) param4));
frost$core$Int64$wrapper* $tmp3141;
$tmp3141 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3141->value = $tmp3140;
frost$core$String* $tmp3142 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3135, ((frost$core$Object*) $tmp3141));
frost$core$String* $tmp3143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3142, &$s3144);
frost$core$String* $tmp3145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3121, $tmp3143);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3145);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3141));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3135));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3127)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3113));
// line 813
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3146 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3147 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block43:;
// line 815
frost$core$Bit $tmp3148 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3149 = $tmp3148.value;
if ($tmp3149) goto block46; else goto block45;
block46:;
org$frostlang$frostc$MethodRef* $tmp3150 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3151 = &$tmp3150->value;
org$frostlang$frostc$MethodDecl* $tmp3152 = *$tmp3151;
org$frostlang$frostc$Annotations** $tmp3153 = &$tmp3152->annotations;
org$frostlang$frostc$Annotations* $tmp3154 = *$tmp3153;
frost$core$Bit $tmp3155 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3154);
bool $tmp3156 = $tmp3155.value;
if ($tmp3156) goto block44; else goto block45;
block44:;
// line 816
frost$core$Int64* $tmp3157 = &param2->$rawValue;
frost$core$Int64 $tmp3158 = *$tmp3157;
frost$core$Int64 $tmp3159 = (frost$core$Int64) {14};
frost$core$Bit $tmp3160 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3158, $tmp3159);
bool $tmp3161 = $tmp3160.value;
if ($tmp3161) goto block48; else goto block49;
block48:;
goto block47;
block49:;
// line 821
org$frostlang$frostc$MethodRef* $tmp3162 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3163 = &$tmp3162->value;
org$frostlang$frostc$MethodDecl* $tmp3164 = *$tmp3163;
frost$core$String* $tmp3165 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3164);
frost$core$String* $tmp3166 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3167, $tmp3165);
frost$core$String* $tmp3168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3166, &$s3169);
frost$core$String* $tmp3170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3168, &$s3171);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3170);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3165));
goto block47;
block47:;
goto block45;
block45:;
// line 826
org$frostlang$frostc$MethodRef* $tmp3172 = *(&local6);
org$frostlang$frostc$Pair* $tmp3173 = org$frostlang$frostc$expression$Call$compileIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp3172, param4);
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3173));
org$frostlang$frostc$Pair* $tmp3174 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3174));
*(&local13) = $tmp3173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3173));
// line 827
org$frostlang$frostc$Pair* $tmp3175 = *(&local13);
frost$core$Object** $tmp3176 = &$tmp3175->first;
frost$core$Object* $tmp3177 = *$tmp3176;
bool $tmp3178 = ((frost$core$Bit$wrapper*) $tmp3177)->value.value;
if ($tmp3178) goto block50; else goto block51;
block50:;
// line 828
org$frostlang$frostc$Pair* $tmp3179 = *(&local13);
frost$core$Object** $tmp3180 = &$tmp3179->second;
frost$core$Object* $tmp3181 = *$tmp3180;
frost$core$Bit $tmp3182 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$IR$Value*) $tmp3181) != NULL);
bool $tmp3183 = $tmp3182.value;
if ($tmp3183) goto block52; else goto block53;
block52:;
// line 829
org$frostlang$frostc$Pair* $tmp3184 = *(&local13);
frost$core$Object** $tmp3185 = &$tmp3184->second;
frost$core$Object* $tmp3186 = *$tmp3185;
org$frostlang$frostc$IR$Value* $tmp3187 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) $tmp3186), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3187));
org$frostlang$frostc$Pair* $tmp3188 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3188));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3189 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3189));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3190 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3190));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = $tmp3187;
goto block1;
block53:;
// line 831
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp3191 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3192 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3193 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3193));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block51:;
// line 833
org$frostlang$frostc$MethodRef* $tmp3194 = *(&local6);
org$frostlang$frostc$MethodRef* $tmp3195 = org$frostlang$frostc$expression$Call$performTypeInference$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$MethodRef$Q(param0, $tmp3194, param4);
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
org$frostlang$frostc$MethodRef* $tmp3196 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3196));
*(&local14) = $tmp3195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3195));
// line 834
org$frostlang$frostc$MethodRef* $tmp3197 = *(&local14);
frost$core$Bit $tmp3198 = frost$core$Bit$init$builtin_bit($tmp3197 == NULL);
bool $tmp3199 = $tmp3198.value;
if ($tmp3199) goto block54; else goto block55;
block54:;
// line 835
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3200 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3201 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3201));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3202 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3202));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3203 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block55:;
// line 837
org$frostlang$frostc$MethodRef* $tmp3204 = *(&local14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3204));
org$frostlang$frostc$MethodRef* $tmp3205 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
*(&local6) = $tmp3204;
// line 838
// line 839
frost$core$Bit $tmp3206 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3207 = $tmp3206.value;
if ($tmp3207) goto block56; else goto block58;
block56:;
// line 840
frost$core$Int64* $tmp3208 = &param2->$rawValue;
frost$core$Int64 $tmp3209 = *$tmp3208;
frost$core$Int64 $tmp3210 = (frost$core$Int64) {13};
frost$core$Bit $tmp3211 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3209, $tmp3210);
bool $tmp3212 = $tmp3211.value;
if ($tmp3212) goto block60; else goto block61;
block60:;
// line 842
frost$core$Bit $tmp3213 = frost$core$Bit$init$builtin_bit(true);
*(&local15) = $tmp3213;
goto block59;
block61:;
// line 845
frost$core$Bit $tmp3214 = frost$core$Bit$init$builtin_bit(false);
*(&local15) = $tmp3214;
goto block59;
block59:;
goto block57;
block58:;
// line 1
// line 850
frost$core$Bit $tmp3215 = frost$core$Bit$init$builtin_bit(false);
*(&local15) = $tmp3215;
goto block57;
block57:;
// line 854
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
// line 855
org$frostlang$frostc$MethodRef* $tmp3216 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3217 = &$tmp3216->value;
org$frostlang$frostc$MethodDecl* $tmp3218 = *$tmp3217;
frost$core$Bit $tmp3219 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit($tmp3218);
bool $tmp3220 = $tmp3219.value;
if ($tmp3220) goto block62; else goto block64;
block62:;
// line 856
org$frostlang$frostc$MethodRef* $tmp3221 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3222 = &$tmp3221->value;
org$frostlang$frostc$MethodDecl* $tmp3223 = *$tmp3222;
org$frostlang$frostc$Type* $tmp3224 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(param0, $tmp3223);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
org$frostlang$frostc$Type* $tmp3225 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3225));
*(&local16) = $tmp3224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3224));
goto block63;
block64:;
// line 1
// line 859
org$frostlang$frostc$MethodRef* $tmp3226 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3227 = &$tmp3226->value;
org$frostlang$frostc$MethodDecl* $tmp3228 = *$tmp3227;
org$frostlang$frostc$MethodRef* $tmp3229 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3230 = &$tmp3229->value;
org$frostlang$frostc$MethodDecl* $tmp3231 = *$tmp3230;
frost$core$Weak** $tmp3232 = &$tmp3231->owner;
frost$core$Weak* $tmp3233 = *$tmp3232;
frost$core$Object* $tmp3234 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3233);
org$frostlang$frostc$Type** $tmp3235 = &((org$frostlang$frostc$ClassDecl*) $tmp3234)->type;
org$frostlang$frostc$Type* $tmp3236 = *$tmp3235;
frost$core$Bit $tmp3237 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp3238 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp3228, $tmp3236, $tmp3237);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3238));
org$frostlang$frostc$Type* $tmp3239 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3239));
*(&local16) = $tmp3238;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3238));
frost$core$Frost$unref$frost$core$Object$Q($tmp3234);
goto block63;
block63:;
// line 861
org$frostlang$frostc$Type* $tmp3240 = *(&local16);
frost$core$Bit $tmp3241 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp3240);
bool $tmp3242 = $tmp3241.value;
if ($tmp3242) goto block65; else goto block66;
block66:;
frost$core$Int64 $tmp3243 = (frost$core$Int64) {861};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3244, $tmp3243);
abort(); // unreachable
block65:;
// line 862
org$frostlang$frostc$MethodRef* $tmp3245 = *(&local6);
org$frostlang$frostc$Type** $tmp3246 = &$tmp3245->effectiveType;
org$frostlang$frostc$Type* $tmp3247 = *$tmp3246;
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3247));
org$frostlang$frostc$Type* $tmp3248 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3248));
*(&local17) = $tmp3247;
// line 863
org$frostlang$frostc$Type* $tmp3249 = *(&local17);
frost$core$Bit $tmp3250 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp3249);
bool $tmp3251 = $tmp3250.value;
if ($tmp3251) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp3252 = (frost$core$Int64) {863};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3253, $tmp3252);
abort(); // unreachable
block67:;
// line 864
frost$collections$Array* $tmp3254 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp3255 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3255->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3255 = $tmp3255->next;
}
$fn3257 $tmp3256 = $tmp3255->methods[0];
frost$core$Int64 $tmp3258 = $tmp3256(((frost$collections$CollectionView*) param4));
frost$collections$Array$init$frost$core$Int64($tmp3254, $tmp3258);
*(&local18) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3254));
frost$collections$Array* $tmp3259 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3259));
*(&local18) = $tmp3254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3254));
// line 865
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 866
frost$core$Bit $tmp3260 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3261 = $tmp3260.value;
if ($tmp3261) goto block69; else goto block71;
block69:;
// line 867
frost$core$Int64* $tmp3262 = &param2->$rawValue;
frost$core$Int64 $tmp3263 = *$tmp3262;
frost$core$Int64 $tmp3264 = (frost$core$Int64) {14};
frost$core$Bit $tmp3265 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3263, $tmp3264);
bool $tmp3266 = $tmp3265.value;
if ($tmp3266) goto block73; else goto block74;
block73:;
goto block72;
block74:;
// line 872
org$frostlang$frostc$MethodRef* $tmp3267 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3268 = &$tmp3267->value;
org$frostlang$frostc$MethodDecl* $tmp3269 = *$tmp3268;
frost$core$Weak** $tmp3270 = &$tmp3269->owner;
frost$core$Weak* $tmp3271 = *$tmp3270;
frost$core$Object* $tmp3272 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3271);
frost$core$String** $tmp3273 = &((org$frostlang$frostc$ClassDecl*) $tmp3272)->name;
frost$core$String* $tmp3274 = *$tmp3273;
frost$core$Bit $tmp3275 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3274, &$s3276);
bool $tmp3277 = $tmp3275.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3272);
if ($tmp3277) goto block75; else goto block77;
block75:;
// line 873
org$frostlang$frostc$Type* $tmp3278 = *(&local16);
frost$core$Int64 $tmp3279 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp3280 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3278, $tmp3279);
org$frostlang$frostc$IR$Value* $tmp3281 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp3280);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3281));
org$frostlang$frostc$IR$Value* $tmp3282 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3282));
*(&local19) = $tmp3281;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3280));
goto block76;
block77:;
// line 876
frost$core$Bit $tmp3283 = *(&local15);
bool $tmp3284 = $tmp3283.value;
if ($tmp3284) goto block78; else goto block80;
block78:;
// line 877
frost$core$Bit $tmp3285 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp3286 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3285);
org$frostlang$frostc$MethodRef* $tmp3287 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3288 = &$tmp3287->value;
org$frostlang$frostc$MethodDecl* $tmp3289 = *$tmp3288;
frost$core$Weak** $tmp3290 = &$tmp3289->owner;
frost$core$Weak* $tmp3291 = *$tmp3290;
frost$core$Object* $tmp3292 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3291);
org$frostlang$frostc$Type** $tmp3293 = &((org$frostlang$frostc$ClassDecl*) $tmp3292)->type;
org$frostlang$frostc$Type* $tmp3294 = *$tmp3293;
org$frostlang$frostc$IR$Value* $tmp3295 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3286, $tmp3294);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3295));
org$frostlang$frostc$IR$Value* $tmp3296 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3296));
*(&local19) = $tmp3295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3295));
frost$core$Frost$unref$frost$core$Object$Q($tmp3292);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3286));
goto block79;
block80:;
// line 1
// line 882
org$frostlang$frostc$MethodRef* $tmp3297 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3298 = &$tmp3297->value;
org$frostlang$frostc$MethodDecl* $tmp3299 = *$tmp3298;
frost$core$Weak** $tmp3300 = &$tmp3299->owner;
frost$core$Weak* $tmp3301 = *$tmp3300;
frost$core$Object* $tmp3302 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3301);
org$frostlang$frostc$Type** $tmp3303 = &((org$frostlang$frostc$ClassDecl*) $tmp3302)->type;
org$frostlang$frostc$Type* $tmp3304 = *$tmp3303;
org$frostlang$frostc$IR$Value* $tmp3305 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp3304);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3305));
org$frostlang$frostc$IR$Value* $tmp3306 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3306));
*(&local19) = $tmp3305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3305));
frost$core$Frost$unref$frost$core$Object$Q($tmp3302);
goto block79;
block79:;
goto block76;
block76:;
// line 884
org$frostlang$frostc$IR$Value* $tmp3307 = *(&local19);
frost$core$Bit $tmp3308 = frost$core$Bit$init$builtin_bit($tmp3307 == NULL);
bool $tmp3309 = $tmp3308.value;
if ($tmp3309) goto block81; else goto block82;
block81:;
// line 885
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3310 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3310));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3311 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3311));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3312 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3312));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3313 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3313));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3314 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3314));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3315 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3315));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3316 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3316));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3317 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3317));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block82:;
// line 887
frost$collections$Array* $tmp3318 = *(&local18);
org$frostlang$frostc$IR$Value* $tmp3319 = *(&local19);
frost$collections$Array$add$frost$collections$Array$T($tmp3318, ((frost$core$Object*) $tmp3319));
goto block72;
block72:;
goto block70;
block71:;
// line 891
org$frostlang$frostc$MethodRef* $tmp3320 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3321 = &$tmp3320->value;
org$frostlang$frostc$MethodDecl* $tmp3322 = *$tmp3321;
org$frostlang$frostc$Annotations** $tmp3323 = &$tmp3322->annotations;
org$frostlang$frostc$Annotations* $tmp3324 = *$tmp3323;
frost$core$Bit $tmp3325 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3324);
frost$core$Bit $tmp3326 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3325);
bool $tmp3327 = $tmp3326.value;
if ($tmp3327) goto block86; else goto block85;
block86:;
org$frostlang$frostc$MethodRef* $tmp3328 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3329 = &$tmp3328->value;
org$frostlang$frostc$MethodDecl* $tmp3330 = *$tmp3329;
frost$core$Bit $tmp3331 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp3330);
frost$core$Bit $tmp3332 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3331);
bool $tmp3333 = $tmp3332.value;
if ($tmp3333) goto block83; else goto block85;
block83:;
// line 892
frost$core$Bit $tmp3334 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp3335 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3334);
org$frostlang$frostc$MethodRef* $tmp3336 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3337 = &$tmp3336->value;
org$frostlang$frostc$MethodDecl* $tmp3338 = *$tmp3337;
frost$core$Weak** $tmp3339 = &$tmp3338->owner;
frost$core$Weak* $tmp3340 = *$tmp3339;
frost$core$Object* $tmp3341 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3340);
org$frostlang$frostc$Type** $tmp3342 = &((org$frostlang$frostc$ClassDecl*) $tmp3341)->type;
org$frostlang$frostc$Type* $tmp3343 = *$tmp3342;
org$frostlang$frostc$IR$Value* $tmp3344 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3335, $tmp3343);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
org$frostlang$frostc$IR$Value* $tmp3345 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3345));
*(&local19) = $tmp3344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3344));
frost$core$Frost$unref$frost$core$Object$Q($tmp3341);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
// line 894
org$frostlang$frostc$IR$Value* $tmp3346 = *(&local19);
frost$core$Bit $tmp3347 = frost$core$Bit$init$builtin_bit($tmp3346 == NULL);
bool $tmp3348 = $tmp3347.value;
if ($tmp3348) goto block87; else goto block88;
block87:;
// line 895
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3349 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3349));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3350 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3350));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3351 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3351));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3352 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3352));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3353 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3353));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3354 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3354));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3355 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3355));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3356 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3356));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block88:;
// line 897
frost$collections$Array* $tmp3357 = *(&local18);
org$frostlang$frostc$IR$Value* $tmp3358 = *(&local19);
frost$collections$Array$add$frost$collections$Array$T($tmp3357, ((frost$core$Object*) $tmp3358));
goto block84;
block85:;
// line 1
// line 900
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3359 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3359));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block84;
block84:;
goto block70;
block70:;
// line 902
// line 903
org$frostlang$frostc$MethodRef* $tmp3360 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3361 = &$tmp3360->value;
org$frostlang$frostc$MethodDecl* $tmp3362 = *$tmp3361;
org$frostlang$frostc$Annotations** $tmp3363 = &$tmp3362->annotations;
org$frostlang$frostc$Annotations* $tmp3364 = *$tmp3363;
frost$core$Bit $tmp3365 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3364);
frost$core$Bit $tmp3366 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3365);
bool $tmp3367 = $tmp3366.value;
if ($tmp3367) goto block93; else goto block91;
block93:;
frost$core$Bit $tmp3368 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3369 = $tmp3368.value;
if ($tmp3369) goto block92; else goto block91;
block92:;
$fn3371 $tmp3370 = ($fn3371) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3372 = $tmp3370(param2);
frost$core$Bit $tmp3373 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp3372);
bool $tmp3374 = $tmp3373.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3372));
if ($tmp3374) goto block89; else goto block91;
block89:;
// line 904
frost$core$Int64 $tmp3375 = (frost$core$Int64) {0};
*(&local20) = $tmp3375;
goto block90;
block91:;
// line 1
// line 907
frost$core$Int64 $tmp3376 = (frost$core$Int64) {1};
*(&local20) = $tmp3376;
goto block90;
block90:;
// line 909
frost$core$Int64 $tmp3377 = (frost$core$Int64) {0};
ITable* $tmp3378 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3378->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3378 = $tmp3378->next;
}
$fn3380 $tmp3379 = $tmp3378->methods[0];
frost$core$Int64 $tmp3381 = $tmp3379(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp3382 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3383 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3377, $tmp3381, $tmp3382);
frost$core$Int64 $tmp3384 = $tmp3383.min;
*(&local21) = $tmp3384;
frost$core$Int64 $tmp3385 = $tmp3383.max;
frost$core$Bit $tmp3386 = $tmp3383.inclusive;
bool $tmp3387 = $tmp3386.value;
frost$core$Int64 $tmp3388 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3389 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3388);
if ($tmp3387) goto block97; else goto block98;
block97:;
int64_t $tmp3390 = $tmp3384.value;
int64_t $tmp3391 = $tmp3385.value;
bool $tmp3392 = $tmp3390 <= $tmp3391;
frost$core$Bit $tmp3393 = (frost$core$Bit) {$tmp3392};
bool $tmp3394 = $tmp3393.value;
if ($tmp3394) goto block94; else goto block95;
block98:;
int64_t $tmp3395 = $tmp3384.value;
int64_t $tmp3396 = $tmp3385.value;
bool $tmp3397 = $tmp3395 < $tmp3396;
frost$core$Bit $tmp3398 = (frost$core$Bit) {$tmp3397};
bool $tmp3399 = $tmp3398.value;
if ($tmp3399) goto block94; else goto block95;
block94:;
// line 910
frost$core$Int64 $tmp3400 = *(&local21);
ITable* $tmp3401 = param4->$class->itable;
while ($tmp3401->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp3401 = $tmp3401->next;
}
$fn3403 $tmp3402 = $tmp3401->methods[0];
frost$core$Object* $tmp3404 = $tmp3402(param4, $tmp3400);
org$frostlang$frostc$Compiler$TypeContext* $tmp3405 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3406 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp3407 = *(&local17);
frost$core$Int64 $tmp3408 = *(&local21);
org$frostlang$frostc$Type* $tmp3409 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3407, $tmp3408);
frost$core$Bit $tmp3410 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp3405, $tmp3406, $tmp3409, $tmp3410);
org$frostlang$frostc$IR$Value* $tmp3411 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp3404), $tmp3405);
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3411));
org$frostlang$frostc$IR$Value* $tmp3412 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3412));
*(&local22) = $tmp3411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3405));
frost$core$Frost$unref$frost$core$Object$Q($tmp3404);
// line 912
org$frostlang$frostc$IR$Value* $tmp3413 = *(&local22);
frost$core$Bit $tmp3414 = frost$core$Bit$init$builtin_bit($tmp3413 == NULL);
bool $tmp3415 = $tmp3414.value;
if ($tmp3415) goto block99; else goto block100;
block99:;
// line 913
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3416 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3416));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3417 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3417));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3418 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3418));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3419 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3419));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3420 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3420));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3421 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3421));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3422 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3422));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3423 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3423));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3424 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3424));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block100:;
// line 915
org$frostlang$frostc$IR$Value* $tmp3425 = *(&local22);
$fn3427 $tmp3426 = ($fn3427) $tmp3425->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3428 = $tmp3426($tmp3425);
org$frostlang$frostc$Type* $tmp3429 = *(&local16);
frost$core$Int64 $tmp3430 = *(&local21);
frost$core$Int64 $tmp3431 = *(&local20);
int64_t $tmp3432 = $tmp3430.value;
int64_t $tmp3433 = $tmp3431.value;
int64_t $tmp3434 = $tmp3432 + $tmp3433;
frost$core$Int64 $tmp3435 = (frost$core$Int64) {$tmp3434};
org$frostlang$frostc$Type* $tmp3436 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3429, $tmp3435);
ITable* $tmp3437 = ((frost$core$Equatable*) $tmp3428)->$class->itable;
while ($tmp3437->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3437 = $tmp3437->next;
}
$fn3439 $tmp3438 = $tmp3437->methods[1];
frost$core$Bit $tmp3440 = $tmp3438(((frost$core$Equatable*) $tmp3428), ((frost$core$Equatable*) $tmp3436));
bool $tmp3441 = $tmp3440.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3428));
if ($tmp3441) goto block101; else goto block102;
block101:;
// line 916
org$frostlang$frostc$IR$Value* $tmp3442 = *(&local22);
org$frostlang$frostc$Type* $tmp3443 = *(&local16);
frost$core$Int64 $tmp3444 = *(&local21);
frost$core$Int64 $tmp3445 = *(&local20);
int64_t $tmp3446 = $tmp3444.value;
int64_t $tmp3447 = $tmp3445.value;
int64_t $tmp3448 = $tmp3446 + $tmp3447;
frost$core$Int64 $tmp3449 = (frost$core$Int64) {$tmp3448};
org$frostlang$frostc$Type* $tmp3450 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3443, $tmp3449);
org$frostlang$frostc$IR$Value* $tmp3451 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3442, $tmp3450);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3451));
org$frostlang$frostc$IR$Value* $tmp3452 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3452));
*(&local22) = $tmp3451;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3450));
goto block102;
block102:;
// line 918
org$frostlang$frostc$IR$Value* $tmp3453 = *(&local22);
frost$core$Bit $tmp3454 = frost$core$Bit$init$builtin_bit($tmp3453 == NULL);
bool $tmp3455 = $tmp3454.value;
if ($tmp3455) goto block103; else goto block104;
block103:;
// line 919
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3456 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3456));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3457 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3458 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3458));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3459 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3459));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3460 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3460));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3461 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3461));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3462 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3462));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3463 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3463));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3464 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3464));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block104:;
// line 921
frost$collections$Array* $tmp3465 = *(&local18);
org$frostlang$frostc$IR$Value* $tmp3466 = *(&local22);
frost$collections$Array$add$frost$collections$Array$T($tmp3465, ((frost$core$Object*) $tmp3466));
org$frostlang$frostc$IR$Value* $tmp3467 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3467));
*(&local22) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block96;
block96:;
frost$core$Int64 $tmp3468 = *(&local21);
int64_t $tmp3469 = $tmp3385.value;
int64_t $tmp3470 = $tmp3468.value;
int64_t $tmp3471 = $tmp3469 - $tmp3470;
frost$core$Int64 $tmp3472 = (frost$core$Int64) {$tmp3471};
frost$core$UInt64 $tmp3473 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3472);
if ($tmp3387) goto block106; else goto block107;
block106:;
uint64_t $tmp3474 = $tmp3473.value;
uint64_t $tmp3475 = $tmp3389.value;
bool $tmp3476 = $tmp3474 >= $tmp3475;
frost$core$Bit $tmp3477 = (frost$core$Bit) {$tmp3476};
bool $tmp3478 = $tmp3477.value;
if ($tmp3478) goto block105; else goto block95;
block107:;
uint64_t $tmp3479 = $tmp3473.value;
uint64_t $tmp3480 = $tmp3389.value;
bool $tmp3481 = $tmp3479 > $tmp3480;
frost$core$Bit $tmp3482 = (frost$core$Bit) {$tmp3481};
bool $tmp3483 = $tmp3482.value;
if ($tmp3483) goto block105; else goto block95;
block105:;
int64_t $tmp3484 = $tmp3468.value;
int64_t $tmp3485 = $tmp3388.value;
int64_t $tmp3486 = $tmp3484 + $tmp3485;
frost$core$Int64 $tmp3487 = (frost$core$Int64) {$tmp3486};
*(&local21) = $tmp3487;
goto block94;
block95:;
// line 923
// line 924
frost$core$Bit $tmp3488 = *(&local15);
frost$core$Bit $tmp3489 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3488);
bool $tmp3490 = $tmp3489.value;
if ($tmp3490) goto block111; else goto block110;
block111:;
org$frostlang$frostc$MethodRef* $tmp3491 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3492 = &$tmp3491->value;
org$frostlang$frostc$MethodDecl* $tmp3493 = *$tmp3492;
frost$core$Bit $tmp3494 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit($tmp3493);
bool $tmp3495 = $tmp3494.value;
if ($tmp3495) goto block108; else goto block110;
block108:;
// line 925
// line 926
org$frostlang$frostc$MethodRef* $tmp3496 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3497 = &$tmp3496->value;
org$frostlang$frostc$MethodDecl* $tmp3498 = *$tmp3497;
frost$core$Weak** $tmp3499 = &$tmp3498->owner;
frost$core$Weak* $tmp3500 = *$tmp3499;
frost$core$Object* $tmp3501 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3500);
org$frostlang$frostc$ClassDecl$Kind* $tmp3502 = &((org$frostlang$frostc$ClassDecl*) $tmp3501)->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp3503 = *$tmp3502;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3504;
$tmp3504 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3504->value = $tmp3503;
frost$core$Int64 $tmp3505 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp3506 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp3505);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3507;
$tmp3507 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3507->value = $tmp3506;
ITable* $tmp3508 = ((frost$core$Equatable*) $tmp3504)->$class->itable;
while ($tmp3508->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3508 = $tmp3508->next;
}
$fn3510 $tmp3509 = $tmp3508->methods[0];
frost$core$Bit $tmp3511 = $tmp3509(((frost$core$Equatable*) $tmp3504), ((frost$core$Equatable*) $tmp3507));
bool $tmp3512 = $tmp3511.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3507)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3504)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3501);
if ($tmp3512) goto block112; else goto block114;
block112:;
// line 927
org$frostlang$frostc$IR* $tmp3513 = *(&local5);
org$frostlang$frostc$IR$Statement* $tmp3514 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3515 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp3516 = *(&local19);
org$frostlang$frostc$MethodRef* $tmp3517 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3518 = &$tmp3517->value;
org$frostlang$frostc$MethodDecl* $tmp3519 = *$tmp3518;
frost$core$Weak** $tmp3520 = &$tmp3519->owner;
frost$core$Weak* $tmp3521 = *$tmp3520;
frost$core$Object* $tmp3522 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3521);
org$frostlang$frostc$MethodRef* $tmp3523 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3524 = &$tmp3523->value;
org$frostlang$frostc$MethodDecl* $tmp3525 = *$tmp3524;
frost$core$Int64 $tmp3526 = org$frostlang$frostc$Compiler$getVTableIndex$org$frostlang$frostc$MethodDecl$R$frost$core$Int64(param0, $tmp3525);
org$frostlang$frostc$Type* $tmp3527 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp3528 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp3527);
frost$collections$ListView* $tmp3529 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp3528);
ITable* $tmp3530 = ((frost$collections$CollectionView*) $tmp3529)->$class->itable;
while ($tmp3530->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3530 = $tmp3530->next;
}
$fn3532 $tmp3531 = $tmp3530->methods[0];
frost$core$Int64 $tmp3533 = $tmp3531(((frost$collections$CollectionView*) $tmp3529));
int64_t $tmp3534 = $tmp3526.value;
int64_t $tmp3535 = $tmp3533.value;
int64_t $tmp3536 = $tmp3534 - $tmp3535;
frost$core$Int64 $tmp3537 = (frost$core$Int64) {$tmp3536};
org$frostlang$frostc$Type* $tmp3538 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type($tmp3514, $tmp3515, param1, $tmp3516, ((org$frostlang$frostc$ClassDecl*) $tmp3522), $tmp3537, $tmp3538);
$fn3540 $tmp3539 = ($fn3540) $tmp3513->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3541 = $tmp3539($tmp3513, $tmp3514);
*(&local24) = $tmp3541;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3527));
frost$core$Frost$unref$frost$core$Object$Q($tmp3522);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3514));
goto block113;
block114:;
// line 1
// line 934
org$frostlang$frostc$IR* $tmp3542 = *(&local5);
org$frostlang$frostc$IR$Statement* $tmp3543 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3544 = (frost$core$Int64) {12};
org$frostlang$frostc$IR$Value* $tmp3545 = *(&local19);
org$frostlang$frostc$MethodRef* $tmp3546 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3547 = &$tmp3546->value;
org$frostlang$frostc$MethodDecl* $tmp3548 = *$tmp3547;
frost$core$Int64 $tmp3549 = org$frostlang$frostc$Compiler$getVTableIndex$org$frostlang$frostc$MethodDecl$R$frost$core$Int64(param0, $tmp3548);
org$frostlang$frostc$Type* $tmp3550 = *(&local16);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type($tmp3543, $tmp3544, param1, $tmp3545, $tmp3549, $tmp3550);
$fn3552 $tmp3551 = ($fn3552) $tmp3542->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3553 = $tmp3551($tmp3542, $tmp3543);
*(&local24) = $tmp3553;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3543));
goto block113;
block113:;
// line 937
org$frostlang$frostc$IR* $tmp3554 = *(&local5);
org$frostlang$frostc$IR$Statement* $tmp3555 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3556 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp3557 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3558 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3559 = *(&local24);
org$frostlang$frostc$Type* $tmp3560 = *(&local16);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3557, $tmp3558, $tmp3559, $tmp3560);
frost$collections$Array* $tmp3561 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp3562 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3561);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp3555, $tmp3556, param1, $tmp3557, $tmp3562);
$fn3564 $tmp3563 = ($fn3564) $tmp3554->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3565 = $tmp3563($tmp3554, $tmp3555);
*(&local23) = $tmp3565;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3562));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3555));
goto block109;
block110:;
// line 1
// line 941
org$frostlang$frostc$IR* $tmp3566 = *(&local5);
org$frostlang$frostc$IR$Statement* $tmp3567 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3568 = (frost$core$Int64) {26};
org$frostlang$frostc$MethodRef* $tmp3569 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3570 = &$tmp3569->value;
org$frostlang$frostc$MethodDecl* $tmp3571 = *$tmp3570;
frost$collections$Array* $tmp3572 = *(&local18);
org$frostlang$frostc$FixedArray* $tmp3573 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3572);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp3567, $tmp3568, param1, $tmp3571, $tmp3573);
$fn3575 $tmp3574 = ($fn3575) $tmp3566->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3576 = $tmp3574($tmp3566, $tmp3567);
*(&local23) = $tmp3576;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3573));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3567));
goto block109;
block109:;
// line 944
org$frostlang$frostc$MethodRef* $tmp3577 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3578 = &$tmp3577->value;
org$frostlang$frostc$MethodDecl* $tmp3579 = *$tmp3578;
org$frostlang$frostc$Type** $tmp3580 = &$tmp3579->returnType;
org$frostlang$frostc$Type* $tmp3581 = *$tmp3580;
org$frostlang$frostc$Type* $tmp3582 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp3583 = ((frost$core$Equatable*) $tmp3581)->$class->itable;
while ($tmp3583->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3583 = $tmp3583->next;
}
$fn3585 $tmp3584 = $tmp3583->methods[1];
frost$core$Bit $tmp3586 = $tmp3584(((frost$core$Equatable*) $tmp3581), ((frost$core$Equatable*) $tmp3582));
bool $tmp3587 = $tmp3586.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3582));
if ($tmp3587) goto block115; else goto block116;
block115:;
// line 945
org$frostlang$frostc$IR$Value* $tmp3588 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3589 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3590 = *(&local23);
org$frostlang$frostc$Type* $tmp3591 = *(&local16);
org$frostlang$frostc$Type* $tmp3592 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3591);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3588, $tmp3589, $tmp3590, $tmp3592);
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3588));
org$frostlang$frostc$IR$Value* $tmp3593 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3593));
*(&local25) = $tmp3588;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3592));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3588));
// line 946
org$frostlang$frostc$Type* $tmp3594 = *(&local16);
org$frostlang$frostc$Type* $tmp3595 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3594);
frost$core$Bit $tmp3596 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp3595);
bool $tmp3597 = $tmp3596.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
if ($tmp3597) goto block117; else goto block118;
block117:;
// line 947
frost$collections$Stack** $tmp3598 = &param0->enclosingContexts;
frost$collections$Stack* $tmp3599 = *$tmp3598;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp3600 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp3601 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp3602 = *(&local25);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp3600, $tmp3601, $tmp3602);
frost$collections$Stack$push$frost$collections$Stack$T($tmp3599, ((frost$core$Object*) $tmp3600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3600));
goto block118;
block118:;
// line 949
org$frostlang$frostc$IR$Value* $tmp3603 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp3604 = org$frostlang$frostc$expression$Call$handleErrors$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3603);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3604));
org$frostlang$frostc$IR$Value* $tmp3605 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3605));
*(&local25) = $tmp3604;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3604));
// line 950
org$frostlang$frostc$IR$Value* $tmp3606 = *(&local25);
frost$core$Bit $tmp3607 = frost$core$Bit$init$builtin_bit($tmp3606 == NULL);
bool $tmp3608 = $tmp3607.value;
if ($tmp3608) goto block119; else goto block120;
block119:;
// line 951
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3609 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3609));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3610 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3611 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3611));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3612 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3612));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3613 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3613));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3614 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3614));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3615 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3615));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3616 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3616));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3617 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3617));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block120:;
// line 953
org$frostlang$frostc$MethodRef* $tmp3618 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3619 = &$tmp3618->value;
org$frostlang$frostc$MethodDecl* $tmp3620 = *$tmp3619;
org$frostlang$frostc$MethodDecl$Kind* $tmp3621 = &$tmp3620->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3622 = *$tmp3621;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3623;
$tmp3623 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3623->value = $tmp3622;
frost$core$Int64 $tmp3624 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3625 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3624);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3626;
$tmp3626 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3626->value = $tmp3625;
ITable* $tmp3627 = ((frost$core$Equatable*) $tmp3623)->$class->itable;
while ($tmp3627->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3627 = $tmp3627->next;
}
$fn3629 $tmp3628 = $tmp3627->methods[1];
frost$core$Bit $tmp3630 = $tmp3628(((frost$core$Equatable*) $tmp3623), ((frost$core$Equatable*) $tmp3626));
bool $tmp3631 = $tmp3630.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3626)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3623)));
if ($tmp3631) goto block123; else goto block122;
block123:;
org$frostlang$frostc$Type* $tmp3632 = *(&local17);
org$frostlang$frostc$Type* $tmp3633 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3632);
org$frostlang$frostc$Type* $tmp3634 = *(&local16);
org$frostlang$frostc$Type* $tmp3635 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3634);
ITable* $tmp3636 = ((frost$core$Equatable*) $tmp3633)->$class->itable;
while ($tmp3636->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3636 = $tmp3636->next;
}
$fn3638 $tmp3637 = $tmp3636->methods[1];
frost$core$Bit $tmp3639 = $tmp3637(((frost$core$Equatable*) $tmp3633), ((frost$core$Equatable*) $tmp3635));
bool $tmp3640 = $tmp3639.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3633));
if ($tmp3640) goto block121; else goto block122;
block121:;
// line 955
org$frostlang$frostc$IR$Value* $tmp3641 = *(&local25);
org$frostlang$frostc$Type* $tmp3642 = *(&local17);
org$frostlang$frostc$Type* $tmp3643 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3642);
org$frostlang$frostc$IR$Value* $tmp3644 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3641, $tmp3643);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3644));
org$frostlang$frostc$IR$Value* $tmp3645 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3645));
*(&local25) = $tmp3644;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3644));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3643));
// line 956
org$frostlang$frostc$IR$Value* $tmp3646 = *(&local25);
frost$core$Bit $tmp3647 = frost$core$Bit$init$builtin_bit($tmp3646 == NULL);
bool $tmp3648 = $tmp3647.value;
if ($tmp3648) goto block124; else goto block125;
block124:;
// line 957
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3649 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3649));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3650 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3650));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3651 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3651));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3652 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3652));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3653 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3653));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3654 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3654));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3655 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3655));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3656 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3656));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3657 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3657));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block125:;
goto block122;
block122:;
// line 960
org$frostlang$frostc$IR$Value* $tmp3658 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp3659 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3658, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3659));
org$frostlang$frostc$IR$Value* $tmp3660 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3660));
*(&local25) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3661 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3661));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3662 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3662));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3663 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3663));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3664 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3664));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3665 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3665));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3666 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3666));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3667 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3668 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = $tmp3659;
goto block1;
block116:;
// line 962
org$frostlang$frostc$Compiler$TypeContext* $tmp3669 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3670 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3669, $tmp3670);
ITable* $tmp3671 = ((frost$core$Equatable*) param5)->$class->itable;
while ($tmp3671->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3671 = $tmp3671->next;
}
$fn3673 $tmp3672 = $tmp3671->methods[1];
frost$core$Bit $tmp3674 = $tmp3672(((frost$core$Equatable*) param5), ((frost$core$Equatable*) $tmp3669));
bool $tmp3675 = $tmp3674.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3669));
if ($tmp3675) goto block126; else goto block127;
block126:;
// line 963
org$frostlang$frostc$MethodRef* $tmp3676 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3677 = &$tmp3676->value;
org$frostlang$frostc$MethodDecl* $tmp3678 = *$tmp3677;
frost$core$String* $tmp3679 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3678);
frost$core$String* $tmp3680 = frost$core$String$get_asString$R$frost$core$String($tmp3679);
frost$core$String* $tmp3681 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3680, &$s3682);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3681);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3680));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3679));
goto block127;
block127:;
// line 965
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3683 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3683));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3684 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3684));
*(&local18) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3685 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3685));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3686 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3686));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3687 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3687));
*(&local14) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3688 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3688));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3689 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3689));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3690 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3690));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp3691 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp3692 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp3693 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp3691, $tmp3692);
bool $tmp3694 = $tmp3693.value;
if ($tmp3694) goto block2; else goto block3;
block2:;
org$frostlang$frostc$IR$Value* $tmp3695 = *(&local0);
frost$core$Bit $tmp3696 = frost$core$Bit$init$builtin_bit($tmp3695 == NULL);
*(&local4) = $tmp3696;
goto block4;
block3:;
*(&local4) = $tmp3693;
goto block4;
block4:;
frost$core$Bit $tmp3697 = *(&local4);
bool $tmp3698 = $tmp3697.value;
if ($tmp3698) goto block5; else goto block6;
block5:;
*(&local3) = $tmp3697;
goto block7;
block6:;
org$frostlang$frostc$IR$Value* $tmp3699 = *(&local0);
frost$core$Bit $tmp3700 = frost$core$Bit$init$builtin_bit($tmp3699 != NULL);
*(&local3) = $tmp3700;
goto block7;
block7:;
frost$core$Bit $tmp3701 = *(&local3);
bool $tmp3702 = $tmp3701.value;
if ($tmp3702) goto block8; else goto block9;
block8:;
*(&local2) = $tmp3701;
goto block10;
block9:;
frost$core$Int64* $tmp3703 = &param0->errorCount;
frost$core$Int64 $tmp3704 = *$tmp3703;
frost$core$Int64 $tmp3705 = (frost$core$Int64) {0};
int64_t $tmp3706 = $tmp3704.value;
int64_t $tmp3707 = $tmp3705.value;
bool $tmp3708 = $tmp3706 > $tmp3707;
frost$core$Bit $tmp3709 = (frost$core$Bit) {$tmp3708};
*(&local2) = $tmp3709;
goto block10;
block10:;
frost$core$Bit $tmp3710 = *(&local2);
bool $tmp3711 = $tmp3710.value;
if ($tmp3711) goto block11; else goto block12;
block11:;
*(&local1) = $tmp3710;
goto block13;
block12:;
frost$core$Bit* $tmp3712 = &param0->reportErrors;
frost$core$Bit $tmp3713 = *$tmp3712;
frost$core$Bit $tmp3714 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3713);
*(&local1) = $tmp3714;
goto block13;
block13:;
frost$core$Bit $tmp3715 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3692));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3691));
bool $tmp3716 = $tmp3715.value;
if ($tmp3716) goto block14; else goto block15;
block14:;
org$frostlang$frostc$IR$Value* $tmp3717 = *(&local0);
return $tmp3717;
block15:;
frost$core$Int64 $tmp3718 = (frost$core$Int64) {761};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3719, $tmp3718, &$s3720);
abort(); // unreachable

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$core$String* param3, frost$collections$ListView* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
// line 971
$fn3722 $tmp3721 = ($fn3722) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3723 = $tmp3721(param2);
org$frostlang$frostc$ClassDecl* $tmp3724 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp3723);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3724));
org$frostlang$frostc$ClassDecl* $tmp3725 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3725));
*(&local0) = $tmp3724;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3723));
// line 972
org$frostlang$frostc$ClassDecl* $tmp3726 = *(&local0);
frost$core$Bit $tmp3727 = frost$core$Bit$init$builtin_bit($tmp3726 == NULL);
bool $tmp3728 = $tmp3727.value;
if ($tmp3728) goto block1; else goto block2;
block1:;
// line 973
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp3729 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3729));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 975
org$frostlang$frostc$ClassDecl* $tmp3730 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp3731 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp3730);
org$frostlang$frostc$Symbol* $tmp3732 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp3731, param3);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3732));
org$frostlang$frostc$Symbol* $tmp3733 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3733));
*(&local1) = $tmp3732;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3731));
// line 976
org$frostlang$frostc$Symbol* $tmp3734 = *(&local1);
frost$core$Bit $tmp3735 = frost$core$Bit$init$builtin_bit($tmp3734 == NULL);
bool $tmp3736 = $tmp3735.value;
if ($tmp3736) goto block3; else goto block4;
block3:;
// line 977
org$frostlang$frostc$ClassDecl* $tmp3737 = *(&local0);
frost$core$String** $tmp3738 = &$tmp3737->name;
frost$core$String* $tmp3739 = *$tmp3738;
frost$core$String* $tmp3740 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3741, $tmp3739);
frost$core$String* $tmp3742 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3740, &$s3743);
frost$core$String* $tmp3744 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3742, param3);
frost$core$String* $tmp3745 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3744, &$s3746);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3745);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3745));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3744));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3740));
// line 978
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Symbol* $tmp3747 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3747));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3748 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3748));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// line 980
org$frostlang$frostc$Symbol* $tmp3749 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp3750 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp3749);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3750));
org$frostlang$frostc$IR$Value* $tmp3751 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3751));
*(&local2) = $tmp3750;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3750));
// line 981
org$frostlang$frostc$IR$Value* $tmp3752 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp3753 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3752, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3753));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3753));
org$frostlang$frostc$IR$Value* $tmp3754 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3754));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Symbol* $tmp3755 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3755));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3756 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3756));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3753;

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
// line 990
frost$core$Int64* $tmp3757 = &param2->$rawValue;
frost$core$Int64 $tmp3758 = *$tmp3757;
frost$core$Int64 $tmp3759 = (frost$core$Int64) {21};
frost$core$Bit $tmp3760 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3758, $tmp3759);
bool $tmp3761 = $tmp3760.value;
if ($tmp3761) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Position* $tmp3762 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp3763 = *$tmp3762;
frost$core$String** $tmp3764 = (frost$core$String**) (param2->$data + 16);
frost$core$String* $tmp3765 = *$tmp3764;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3765));
frost$core$String* $tmp3766 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3766));
*(&local0) = $tmp3765;
org$frostlang$frostc$FixedArray** $tmp3767 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3768 = *$tmp3767;
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3768));
org$frostlang$frostc$FixedArray* $tmp3769 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3769));
*(&local1) = $tmp3768;
// line 992
org$frostlang$frostc$Type* $tmp3770 = org$frostlang$frostc$Compiler$tryResolveType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3770));
org$frostlang$frostc$Type* $tmp3771 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3771));
*(&local2) = $tmp3770;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3770));
// line 993
org$frostlang$frostc$Type* $tmp3772 = *(&local2);
frost$core$Bit $tmp3773 = frost$core$Bit$init$builtin_bit($tmp3772 != NULL);
bool $tmp3774 = $tmp3773.value;
if ($tmp3774) goto block3; else goto block4;
block3:;
// line 994
org$frostlang$frostc$Type* $tmp3775 = *(&local2);
frost$core$Bit $tmp3776 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp3775);
frost$core$Bit $tmp3777 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3776);
bool $tmp3778 = $tmp3777.value;
if ($tmp3778) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp3779 = (frost$core$Int64) {994};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3780, $tmp3779);
abort(); // unreachable
block5:;
// line 995
org$frostlang$frostc$IR$Value* $tmp3781 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3782 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp3783 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp3781, $tmp3782, $tmp3783);
org$frostlang$frostc$IR$Value* $tmp3784 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3781, ((frost$collections$ListView*) param3), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3784));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3781));
org$frostlang$frostc$Type* $tmp3785 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3785));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp3786 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3786));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3787 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3787));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3784;
block4:;
// line 997
frost$core$Bit $tmp3788 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp3789 = org$frostlang$frostc$Compiler$tryResolveType$org$frostlang$frostc$ASTNode$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, param2, $tmp3788);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3789));
org$frostlang$frostc$Type* $tmp3790 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3790));
*(&local2) = $tmp3789;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3789));
// line 998
org$frostlang$frostc$Type* $tmp3791 = *(&local2);
frost$core$Bit $tmp3792 = frost$core$Bit$init$builtin_bit($tmp3791 != NULL);
bool $tmp3793 = $tmp3792.value;
if ($tmp3793) goto block7; else goto block8;
block7:;
// line 1000
org$frostlang$frostc$Scanner** $tmp3794 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp3795 = *$tmp3794;
org$frostlang$frostc$Type* $tmp3796 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp3795, param2);
org$frostlang$frostc$Type* $tmp3797 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp3796);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3797));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3796));
// line 1001
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp3798 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3798));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp3799 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3799));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3800 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3800));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// line 1004
frost$core$String* $tmp3801 = *(&local0);
frost$collections$Array* $tmp3802 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp3801, &$s3803);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3802));
frost$collections$Array* $tmp3804 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3804));
*(&local3) = $tmp3802;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3802));
// line 1005
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1006
frost$collections$Array* $tmp3805 = *(&local3);
ITable* $tmp3806 = ((frost$collections$CollectionView*) $tmp3805)->$class->itable;
while ($tmp3806->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3806 = $tmp3806->next;
}
$fn3808 $tmp3807 = $tmp3806->methods[0];
frost$core$Int64 $tmp3809 = $tmp3807(((frost$collections$CollectionView*) $tmp3805));
frost$core$Int64 $tmp3810 = (frost$core$Int64) {1};
frost$core$Bit $tmp3811 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3809, $tmp3810);
bool $tmp3812 = $tmp3811.value;
if ($tmp3812) goto block9; else goto block11;
block9:;
// line 1007
org$frostlang$frostc$ASTNode* $tmp3813 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3814 = (frost$core$Int64) {23};
frost$core$String* $tmp3815 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp3816 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3813, $tmp3814, param1, $tmp3815, $tmp3816);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3813));
org$frostlang$frostc$ASTNode* $tmp3817 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3817));
*(&local4) = $tmp3813;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3813));
goto block10;
block11:;
// line 1
// line 1010
org$frostlang$frostc$ASTNode* $tmp3818 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3819 = (frost$core$Int64) {22};
frost$collections$Array* $tmp3820 = *(&local3);
frost$core$Int64 $tmp3821 = (frost$core$Int64) {0};
frost$core$Object* $tmp3822 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3820, $tmp3821);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3818, $tmp3819, param1, ((frost$core$String*) $tmp3822));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3818));
org$frostlang$frostc$ASTNode* $tmp3823 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
*(&local4) = $tmp3818;
frost$core$Frost$unref$frost$core$Object$Q($tmp3822);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3818));
// line 1011
frost$core$Int64 $tmp3824 = (frost$core$Int64) {1};
frost$collections$Array* $tmp3825 = *(&local3);
ITable* $tmp3826 = ((frost$collections$CollectionView*) $tmp3825)->$class->itable;
while ($tmp3826->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3826 = $tmp3826->next;
}
$fn3828 $tmp3827 = $tmp3826->methods[0];
frost$core$Int64 $tmp3829 = $tmp3827(((frost$collections$CollectionView*) $tmp3825));
frost$core$Int64 $tmp3830 = (frost$core$Int64) {1};
int64_t $tmp3831 = $tmp3829.value;
int64_t $tmp3832 = $tmp3830.value;
int64_t $tmp3833 = $tmp3831 - $tmp3832;
frost$core$Int64 $tmp3834 = (frost$core$Int64) {$tmp3833};
frost$core$Bit $tmp3835 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3836 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3824, $tmp3834, $tmp3835);
frost$core$Int64 $tmp3837 = $tmp3836.min;
*(&local5) = $tmp3837;
frost$core$Int64 $tmp3838 = $tmp3836.max;
frost$core$Bit $tmp3839 = $tmp3836.inclusive;
bool $tmp3840 = $tmp3839.value;
frost$core$Int64 $tmp3841 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3842 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3841);
if ($tmp3840) goto block15; else goto block16;
block15:;
int64_t $tmp3843 = $tmp3837.value;
int64_t $tmp3844 = $tmp3838.value;
bool $tmp3845 = $tmp3843 <= $tmp3844;
frost$core$Bit $tmp3846 = (frost$core$Bit) {$tmp3845};
bool $tmp3847 = $tmp3846.value;
if ($tmp3847) goto block12; else goto block13;
block16:;
int64_t $tmp3848 = $tmp3837.value;
int64_t $tmp3849 = $tmp3838.value;
bool $tmp3850 = $tmp3848 < $tmp3849;
frost$core$Bit $tmp3851 = (frost$core$Bit) {$tmp3850};
bool $tmp3852 = $tmp3851.value;
if ($tmp3852) goto block12; else goto block13;
block12:;
// line 1012
org$frostlang$frostc$ASTNode* $tmp3853 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3854 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp3855 = *(&local4);
frost$collections$Array* $tmp3856 = *(&local3);
frost$core$Int64 $tmp3857 = *(&local5);
frost$core$Object* $tmp3858 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3856, $tmp3857);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp3853, $tmp3854, param1, $tmp3855, ((frost$core$String*) $tmp3858));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
org$frostlang$frostc$ASTNode* $tmp3859 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3859));
*(&local4) = $tmp3853;
frost$core$Frost$unref$frost$core$Object$Q($tmp3858);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3853));
goto block14;
block14:;
frost$core$Int64 $tmp3860 = *(&local5);
int64_t $tmp3861 = $tmp3838.value;
int64_t $tmp3862 = $tmp3860.value;
int64_t $tmp3863 = $tmp3861 - $tmp3862;
frost$core$Int64 $tmp3864 = (frost$core$Int64) {$tmp3863};
frost$core$UInt64 $tmp3865 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3864);
if ($tmp3840) goto block18; else goto block19;
block18:;
uint64_t $tmp3866 = $tmp3865.value;
uint64_t $tmp3867 = $tmp3842.value;
bool $tmp3868 = $tmp3866 >= $tmp3867;
frost$core$Bit $tmp3869 = (frost$core$Bit) {$tmp3868};
bool $tmp3870 = $tmp3869.value;
if ($tmp3870) goto block17; else goto block13;
block19:;
uint64_t $tmp3871 = $tmp3865.value;
uint64_t $tmp3872 = $tmp3842.value;
bool $tmp3873 = $tmp3871 > $tmp3872;
frost$core$Bit $tmp3874 = (frost$core$Bit) {$tmp3873};
bool $tmp3875 = $tmp3874.value;
if ($tmp3875) goto block17; else goto block13;
block17:;
int64_t $tmp3876 = $tmp3860.value;
int64_t $tmp3877 = $tmp3841.value;
int64_t $tmp3878 = $tmp3876 + $tmp3877;
frost$core$Int64 $tmp3879 = (frost$core$Int64) {$tmp3878};
*(&local5) = $tmp3879;
goto block12;
block13:;
// line 1014
org$frostlang$frostc$ASTNode* $tmp3880 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3881 = (frost$core$Int64) {17};
org$frostlang$frostc$ASTNode* $tmp3882 = *(&local4);
frost$collections$Array* $tmp3883 = *(&local3);
frost$collections$Array* $tmp3884 = *(&local3);
ITable* $tmp3885 = ((frost$collections$CollectionView*) $tmp3884)->$class->itable;
while ($tmp3885->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3885 = $tmp3885->next;
}
$fn3887 $tmp3886 = $tmp3885->methods[0];
frost$core$Int64 $tmp3888 = $tmp3886(((frost$collections$CollectionView*) $tmp3884));
frost$core$Int64 $tmp3889 = (frost$core$Int64) {1};
int64_t $tmp3890 = $tmp3888.value;
int64_t $tmp3891 = $tmp3889.value;
int64_t $tmp3892 = $tmp3890 - $tmp3891;
frost$core$Int64 $tmp3893 = (frost$core$Int64) {$tmp3892};
frost$core$Object* $tmp3894 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3883, $tmp3893);
org$frostlang$frostc$FixedArray* $tmp3895 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3880, $tmp3881, param1, $tmp3882, ((frost$core$String*) $tmp3894), $tmp3895);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3880));
org$frostlang$frostc$ASTNode* $tmp3896 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3896));
*(&local4) = $tmp3880;
frost$core$Frost$unref$frost$core$Object$Q($tmp3894);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3880));
goto block10;
block10:;
// line 1017
org$frostlang$frostc$ASTNode* $tmp3897 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp3898 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$frost$core$Bit$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3897, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3898));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3898));
org$frostlang$frostc$ASTNode* $tmp3899 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3899));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3900 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3900));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3901 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3901));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp3902 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3902));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3903 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3903));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3898;
block1:;
// line 1020
org$frostlang$frostc$Pair* $tmp3904 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, param2);
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3904));
org$frostlang$frostc$Pair* $tmp3905 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3905));
*(&local6) = $tmp3904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3904));
// line 1021
org$frostlang$frostc$Pair* $tmp3906 = *(&local6);
frost$core$Bit $tmp3907 = frost$core$Bit$init$builtin_bit($tmp3906 != NULL);
bool $tmp3908 = $tmp3907.value;
if ($tmp3908) goto block20; else goto block21;
block20:;
// line 1022
org$frostlang$frostc$Pair* $tmp3909 = *(&local6);
frost$core$Object** $tmp3910 = &$tmp3909->first;
frost$core$Object* $tmp3911 = *$tmp3910;
org$frostlang$frostc$Pair* $tmp3912 = *(&local6);
frost$core$Object** $tmp3913 = &$tmp3912->second;
frost$core$Object* $tmp3914 = *$tmp3913;
org$frostlang$frostc$IR$Value* $tmp3915 = org$frostlang$frostc$Compiler$compileChoiceCaseReference$org$frostlang$frostc$Position$org$frostlang$frostc$Type$org$frostlang$frostc$ChoiceCase$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$Type*) $tmp3911), ((org$frostlang$frostc$ChoiceCase*) $tmp3914), param3, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3915));
org$frostlang$frostc$Pair* $tmp3916 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3916));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp3915;
block21:;
// line 1024
frost$core$Int64* $tmp3917 = &param2->$rawValue;
frost$core$Int64 $tmp3918 = *$tmp3917;
frost$core$Int64 $tmp3919 = (frost$core$Int64) {16};
frost$core$Bit $tmp3920 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3918, $tmp3919);
bool $tmp3921 = $tmp3920.value;
if ($tmp3921) goto block23; else goto block22;
block23:;
org$frostlang$frostc$Position* $tmp3922 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp3923 = *$tmp3922;
*(&local7) = $tmp3923;
org$frostlang$frostc$ASTNode** $tmp3924 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3925 = *$tmp3924;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3925));
org$frostlang$frostc$ASTNode* $tmp3926 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3926));
*(&local8) = $tmp3925;
frost$core$String** $tmp3927 = (frost$core$String**) (param2->$data + 24);
frost$core$String* $tmp3928 = *$tmp3927;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3928));
frost$core$String* $tmp3929 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3929));
*(&local9) = $tmp3928;
// line 1026
org$frostlang$frostc$ASTNode* $tmp3930 = *(&local8);
frost$core$Int64* $tmp3931 = &$tmp3930->$rawValue;
frost$core$Int64 $tmp3932 = *$tmp3931;
frost$core$Int64 $tmp3933 = (frost$core$Int64) {41};
frost$core$Bit $tmp3934 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3932, $tmp3933);
bool $tmp3935 = $tmp3934.value;
if ($tmp3935) goto block25; else goto block24;
block25:;
// line 1028
org$frostlang$frostc$SymbolTable** $tmp3936 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3937 = *$tmp3936;
org$frostlang$frostc$Symbol* $tmp3938 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp3937, &$s3939);
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3938));
org$frostlang$frostc$Symbol* $tmp3940 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3940));
*(&local10) = $tmp3938;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3938));
// line 1029
org$frostlang$frostc$Symbol* $tmp3941 = *(&local10);
frost$core$Bit $tmp3942 = frost$core$Bit$init$builtin_bit($tmp3941 == NULL);
bool $tmp3943 = $tmp3942.value;
if ($tmp3943) goto block26; else goto block27;
block26:;
// line 1030
org$frostlang$frostc$SymbolTable** $tmp3944 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3945 = *$tmp3944;
org$frostlang$frostc$Symbol* $tmp3946 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp3945, &$s3947);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3946));
org$frostlang$frostc$Symbol* $tmp3948 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3948));
*(&local10) = $tmp3946;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3946));
goto block27;
block27:;
// line 1032
org$frostlang$frostc$Symbol* $tmp3949 = *(&local10);
frost$core$Bit $tmp3950 = frost$core$Bit$init$builtin_bit($tmp3949 == NULL);
bool $tmp3951 = $tmp3950.value;
if ($tmp3951) goto block28; else goto block29;
block28:;
// line 1033
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Symbol* $tmp3952 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3952));
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp3953 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3953));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp3954 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3954));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp3955 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3955));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block29:;
// line 1035
frost$collections$Array* $tmp3956 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3956);
*(&local11) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3956));
frost$collections$Array* $tmp3957 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3957));
*(&local11) = $tmp3956;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3956));
// line 1036
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
// line 1037
org$frostlang$frostc$Symbol* $tmp3958 = *(&local10);
org$frostlang$frostc$Symbol$Kind* $tmp3959 = &$tmp3958->kind;
org$frostlang$frostc$Symbol$Kind $tmp3960 = *$tmp3959;
frost$core$Int64 $tmp3961 = $tmp3960.$rawValue;
frost$core$Int64 $tmp3962 = (frost$core$Int64) {9};
frost$core$Bit $tmp3963 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3961, $tmp3962);
bool $tmp3964 = $tmp3963.value;
if ($tmp3964) goto block31; else goto block32;
block31:;
// line 1039
org$frostlang$frostc$Symbol* $tmp3965 = *(&local10);
org$frostlang$frostc$Type** $tmp3966 = &((org$frostlang$frostc$Variable*) $tmp3965)->type;
org$frostlang$frostc$Type* $tmp3967 = *$tmp3966;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3967));
org$frostlang$frostc$Type* $tmp3968 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3968));
*(&local12) = $tmp3967;
goto block30;
block32:;
frost$core$Int64 $tmp3969 = (frost$core$Int64) {2};
frost$core$Bit $tmp3970 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3961, $tmp3969);
bool $tmp3971 = $tmp3970.value;
if ($tmp3971) goto block33; else goto block34;
block33:;
// line 1042
org$frostlang$frostc$Symbol* $tmp3972 = *(&local10);
org$frostlang$frostc$Type** $tmp3973 = &((org$frostlang$frostc$FieldDecl*) $tmp3972)->type;
org$frostlang$frostc$Type* $tmp3974 = *$tmp3973;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3974));
org$frostlang$frostc$Type* $tmp3975 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3975));
*(&local12) = $tmp3974;
goto block30;
block34:;
// line 1045
frost$core$Int64 $tmp3976 = (frost$core$Int64) {1045};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3977, $tmp3976);
abort(); // unreachable
block30:;
// line 1048
org$frostlang$frostc$Type* $tmp3978 = *(&local12);
org$frostlang$frostc$ClassDecl* $tmp3979 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp3978);
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
org$frostlang$frostc$ClassDecl* $tmp3980 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
*(&local13) = $tmp3979;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
// line 1049
org$frostlang$frostc$ClassDecl* $tmp3981 = *(&local13);
frost$core$Bit $tmp3982 = frost$core$Bit$init$builtin_bit($tmp3981 == NULL);
bool $tmp3983 = $tmp3982.value;
if ($tmp3983) goto block35; else goto block36;
block35:;
// line 1050
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp3984 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3984));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp3985 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3985));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp3986 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3986));
*(&local11) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp3987 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3987));
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp3988 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3988));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp3989 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3989));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp3990 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3990));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block36:;
// line 1052
org$frostlang$frostc$Type* $tmp3991 = *(&local12);
org$frostlang$frostc$ClassDecl* $tmp3992 = *(&local13);
org$frostlang$frostc$Type** $tmp3993 = &$tmp3992->rawSuper;
org$frostlang$frostc$Type* $tmp3994 = *$tmp3993;
org$frostlang$frostc$Type* $tmp3995 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp3991, $tmp3994);
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3995));
org$frostlang$frostc$Type* $tmp3996 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3996));
*(&local14) = $tmp3995;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3995));
// line 1053
org$frostlang$frostc$Position $tmp3997 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp3998 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3999 = (frost$core$Int64) {13};
org$frostlang$frostc$Type* $tmp4000 = *(&local14);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp3998, $tmp3999, $tmp4000);
frost$core$String* $tmp4001 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp4002 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp3997, $tmp3998, $tmp4001, ((frost$collections$ListView*) param3), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4002));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3998));
org$frostlang$frostc$Type* $tmp4003 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4003));
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4004 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp4005 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4005));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp4006 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4006));
*(&local11) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp4007 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4007));
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp4008 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4008));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4009 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4009));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp4010 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4010));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp4002;
block24:;
frost$core$String* $tmp4011 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4011));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4012 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4012));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block22;
block22:;
// line 1059
org$frostlang$frostc$Compiler$TypeContext* $tmp4013 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp4014 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp4013, $tmp4014);
org$frostlang$frostc$IR$Value* $tmp4015 = org$frostlang$frostc$Compiler$compileMethodExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp4013);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4015));
org$frostlang$frostc$IR$Value* $tmp4016 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4016));
*(&local15) = $tmp4015;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4013));
// line 1060
org$frostlang$frostc$IR$Value* $tmp4017 = *(&local15);
frost$core$Bit $tmp4018 = frost$core$Bit$init$builtin_bit($tmp4017 == NULL);
bool $tmp4019 = $tmp4018.value;
if ($tmp4019) goto block37; else goto block38;
block37:;
// line 1061
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp4020 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4020));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp4021 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4021));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block38:;
// line 1063
org$frostlang$frostc$IR$Value* $tmp4022 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp4023 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4022, ((frost$collections$ListView*) param3), param5);
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4023));
org$frostlang$frostc$IR$Value* $tmp4024 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
*(&local16) = $tmp4023;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4023));
// line 1064
bool $tmp4025 = param4.value;
if ($tmp4025) goto block41; else goto block40;
block41:;
org$frostlang$frostc$IR$Value* $tmp4026 = *(&local16);
frost$core$Bit $tmp4027 = frost$core$Bit$init$builtin_bit($tmp4026 != NULL);
bool $tmp4028 = $tmp4027.value;
if ($tmp4028) goto block39; else goto block40;
block39:;
// line 1065
org$frostlang$frostc$IR$Value* $tmp4029 = *(&local16);
$fn4031 $tmp4030 = ($fn4031) $tmp4029->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4032 = $tmp4030($tmp4029);
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
org$frostlang$frostc$Type* $tmp4033 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4033));
*(&local17) = $tmp4032;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
// line 1066
org$frostlang$frostc$Type* $tmp4034 = *(&local17);
org$frostlang$frostc$Type* $tmp4035 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp4036 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp4035);
frost$core$Bit $tmp4037 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp4034, $tmp4036);
bool $tmp4038 = $tmp4037.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4036));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4035));
if ($tmp4038) goto block42; else goto block44;
block44:;
org$frostlang$frostc$Type* $tmp4039 = *(&local17);
org$frostlang$frostc$Type$Kind* $tmp4040 = &$tmp4039->typeKind;
org$frostlang$frostc$Type$Kind $tmp4041 = *$tmp4040;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4042;
$tmp4042 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4042->value = $tmp4041;
frost$core$Int64 $tmp4043 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp4044 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp4043);
org$frostlang$frostc$Type$Kind$wrapper* $tmp4045;
$tmp4045 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4045->value = $tmp4044;
ITable* $tmp4046 = ((frost$core$Equatable*) $tmp4042)->$class->itable;
while ($tmp4046->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4046 = $tmp4046->next;
}
$fn4048 $tmp4047 = $tmp4046->methods[0];
frost$core$Bit $tmp4049 = $tmp4047(((frost$core$Equatable*) $tmp4042), ((frost$core$Equatable*) $tmp4045));
bool $tmp4050 = $tmp4049.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4045)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4042)));
if ($tmp4050) goto block45; else goto block43;
block45:;
org$frostlang$frostc$Type* $tmp4051 = *(&local17);
org$frostlang$frostc$FixedArray** $tmp4052 = &$tmp4051->subtypes;
org$frostlang$frostc$FixedArray* $tmp4053 = *$tmp4052;
frost$core$Int64 $tmp4054 = (frost$core$Int64) {0};
frost$core$Object* $tmp4055 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4053, $tmp4054);
frost$core$String** $tmp4056 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp4055))->name;
frost$core$String* $tmp4057 = *$tmp4056;
frost$core$Bit $tmp4058 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp4057, &$s4059);
bool $tmp4060 = $tmp4058.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp4055);
if ($tmp4060) goto block42; else goto block43;
block42:;
// line 1069
org$frostlang$frostc$Type* $tmp4061 = *(&local17);
frost$core$String** $tmp4062 = &((org$frostlang$frostc$Symbol*) $tmp4061)->name;
frost$core$String* $tmp4063 = *$tmp4062;
frost$core$String* $tmp4064 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4065, $tmp4063);
frost$core$String* $tmp4066 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4064, &$s4067);
frost$core$String* $tmp4068 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4069, $tmp4066);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp4068);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4068));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4066));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4064));
goto block43;
block43:;
org$frostlang$frostc$Type* $tmp4070 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4070));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
goto block40;
block40:;
// line 1073
org$frostlang$frostc$IR$Value* $tmp4071 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4071));
org$frostlang$frostc$IR$Value* $tmp4072 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4072));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp4073 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4073));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp4074 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4074));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp4071;

}
void org$frostlang$frostc$expression$Call$init(org$frostlang$frostc$expression$Call* param0) {

return;

}
void org$frostlang$frostc$expression$Call$cleanup(org$frostlang$frostc$expression$Call* param0) {

// line 20
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

