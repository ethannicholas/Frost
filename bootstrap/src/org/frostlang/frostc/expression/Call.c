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
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
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
typedef org$frostlang$frostc$IR$Statement$ID (*$fn339)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn351)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn370)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn389)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn403)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn427)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn450)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn475)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn487)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn534)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn543)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn565)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn590)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn807)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn816)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn839)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn864)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn929)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn961)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1013)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1017)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1022)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1062)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1066)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1071)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn1092)(org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn1096)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$Int64 (*$fn1106)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1140)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1144)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1149)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1155)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn1166)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn1201)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1217)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1272)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1282)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1286)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1291)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1299)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1303)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1319)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1331)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1360)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1394)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1417)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn1535)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1554)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1571)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn1590)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1615)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn1624)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1636)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1642)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1665)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn1710)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1717)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn1733)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1774)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1785)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1811)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1821)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1838)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1842)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1847)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn1852)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1865)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1870)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1887)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1902)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1909)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn1914)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1995)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2010)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2017)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2022)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2031)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn2103)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2120)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2200)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2217)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2304)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2327)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn2339)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2343)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2348)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2399)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2405)(org$frostlang$frostc$Compiler$TypeContext*);
typedef frost$core$Int64 (*$fn2439)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2463)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn2476)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2480)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2485)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2537)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2543)(org$frostlang$frostc$Compiler$TypeContext*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2636)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn2681)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2703)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2707)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2712)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2725)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2730)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2751)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2764)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2769)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn2784)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2829)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2833)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2838)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2851)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2856)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2867)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2877)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2906)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2919)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2924)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2935)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2945)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn2988)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3032)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3054)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3103)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3118)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn3147)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn3156)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3275)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn3391)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn3401)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn3424)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn3448)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn3460)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3532)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3554)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3562)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3574)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3586)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3597)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn3607)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3651)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3660)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3696)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn3745)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn3831)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3851)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3910)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn4057)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4074)(frost$core$Equatable*, frost$core$Equatable*);

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
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x72", 5, 20924392920, NULL };
static frost$core$String $s421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63\x3a\x20", 31, 5572221770796053896, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s510 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s526 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s767 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s813 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s822 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s979 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x65\x3a\x20\x63\x61\x6e\x27\x74\x20\x63\x6f\x65\x72\x63\x65\x20\x27", 20, -7237900421143798122, NULL };
static frost$core$String $s1171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x74\x6f\x20", 5, 14602620331, NULL };
static frost$core$String $s1175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1565 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x66\x69\x6e\x64\x42\x65\x73\x74\x4d\x65\x74\x68\x6f\x64\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x6d\x65\x74\x68\x6f\x64\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3e\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x41\x72\x67\x75\x6d\x65\x6e\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x2c\x20\x61\x72\x67\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f", 561, 3652659893303705938, NULL };
static frost$core$String $s1581 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static frost$core$String $s1583 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static frost$core$String $s1599 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 16, 4303665098026904440, NULL };
static frost$core$String $s1601 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static frost$core$String $s1607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1617 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s1619 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static frost$core$String $s1621 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static frost$core$String $s1629 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72", 7, 227281454102470, NULL };
static frost$core$String $s1789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x61\x72\x67\x65\x74", 6, 2290904182948, NULL };
static frost$core$String $s1844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x20\x74\x61\x72\x67\x65\x74", 24, 8706842098394974193, NULL };
static frost$core$String $s1849 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x74\x61\x72\x67\x65\x74", 27, -7788775699050637059, NULL };
static frost$core$String $s1854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x6d\x65\x72\x67\x65", 18, 706487662591854902, NULL };
static frost$core$String $s2148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static frost$core$String $s2150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s2159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static frost$core$String $s2247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s2256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static frost$core$String $s2374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static frost$core$String $s2395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static frost$core$String $s2511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static frost$core$String $s2533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2541 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s2612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x69\x74\x20\x66\x6f\x72\x20", 12, -9112629214783660015, NULL };
static frost$core$String $s2614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20", 12, 8187822430156838052, NULL };
static frost$core$String $s2669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3f\x20\x6e\x75\x6c\x6c", 11, 8052739787235849537, NULL };
static frost$core$String $s2714 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3f\x20\x65\x72\x72\x6f\x72", 12, 1669979266660959244, NULL };
static frost$core$String $s2756 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s2805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2809 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s2815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x79\x62\x65\x20\x73\x75\x63\x63\x65\x73\x73", 13, 1014790702408506444, NULL };
static frost$core$String $s2840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x79\x62\x65\x20\x65\x72\x72\x6f\x72", 11, 6235211091261808005, NULL };
static frost$core$String $s2911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static frost$core$String $s3113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static frost$core$String $s3133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x73\x20", 9, 1451156555704250829, NULL };
static frost$core$String $s3139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s3151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static frost$core$String $s3153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static frost$core$String $s3161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static frost$core$String $s3187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20", 7, 142360281799925, NULL };
static frost$core$String $s3189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x73\x74\x61\x6e\x63\x65", 8, 22203976303606054, NULL };
static frost$core$String $s3262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s3705 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static frost$core$String $s3742 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x72\x61\x77\x4d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2c\x20\x61\x72\x67\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 375, 7210268903382943599, NULL };
static frost$core$String $s3764 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static frost$core$String $s3766 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static frost$core$String $s3769 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s3803 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s3962 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s3970 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s4002 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4085 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s4093 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s4095 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x75\x6e\x75\x73\x65\x64\x20\x61\x6e\x64\x20\x69\x73\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x27\x74\x72\x79\x27\x20\x62\x6c\x6f\x63\x6b", 43, 4374382365862179306, NULL };
static frost$core$String $s4097 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 21, -4228310936216902871, NULL };

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
frost$core$Bit local14;
org$frostlang$frostc$IR$Value* local15 = NULL;
org$frostlang$frostc$IR$Statement$ID local16;
org$frostlang$frostc$Type* local17 = NULL;
org$frostlang$frostc$IR$Value* local18 = NULL;
org$frostlang$frostc$IR$Value* local19 = NULL;
org$frostlang$frostc$IR$Statement$ID local20;
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
if ($tmp322) goto block45; else goto block46;
block45:;
org$frostlang$frostc$IR$Value* $tmp323 = *(&local13);
frost$core$Bit $tmp324 = frost$core$Bit$init$builtin_bit($tmp323 != NULL);
*(&local14) = $tmp324;
goto block47;
block46:;
*(&local14) = $tmp321;
goto block47;
block47:;
frost$core$Bit $tmp325 = *(&local14);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block43; else goto block44;
block43:;
// line 103
org$frostlang$frostc$IR$Value* $tmp327 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp328 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp327);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
org$frostlang$frostc$IR$Value* $tmp329 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
*(&local15) = $tmp328;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
// line 104
org$frostlang$frostc$Type* $tmp330 = *(&local1);
frost$core$Bit $tmp331 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp330);
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block48; else goto block49;
block48:;
// line 105
org$frostlang$frostc$IR$Value* $tmp333 = *(&local13);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp333);
// line 106
org$frostlang$frostc$IR* $tmp334 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp335 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp336 = (frost$core$Int64) {20};
org$frostlang$frostc$IR$Value* $tmp337 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp335, $tmp336, param1, param2, $tmp337);
$fn339 $tmp338 = ($fn339) $tmp334->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp340 = $tmp338($tmp334, $tmp335);
*(&local16) = $tmp340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// line 107
org$frostlang$frostc$IR$Value* $tmp341 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp342 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp343 = *(&local16);
org$frostlang$frostc$Type* $tmp344 = *(&local1);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp341, $tmp342, $tmp343, $tmp344);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp341);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
goto block49;
block49:;
// line 109
org$frostlang$frostc$IR* $tmp345 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp346 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp347 = (frost$core$Int64) {24};
org$frostlang$frostc$IR$Value* $tmp348 = *(&local13);
org$frostlang$frostc$IR$Value* $tmp349 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp346, $tmp347, param1, $tmp348, param2, $tmp349);
$fn351 $tmp350 = ($fn351) $tmp345->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp352 = $tmp350($tmp345, $tmp346);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
org$frostlang$frostc$IR$Value* $tmp353 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block44;
block44:;
// line 111
org$frostlang$frostc$Pair* $tmp354 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp355 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp356;
$tmp356 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp356->value = $tmp355;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp354, ((frost$core$Object*) $tmp356), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
org$frostlang$frostc$IR$Value* $tmp357 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp358 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp359 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp360 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp354;
block40:;
frost$core$Bit $tmp361 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp55, &$s362);
bool $tmp363 = $tmp361.value;
if ($tmp363) goto block50; else goto block51;
block50:;
// line 114
org$frostlang$frostc$Type* $tmp364 = *(&local1);
org$frostlang$frostc$Type* $tmp365 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp364);
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
org$frostlang$frostc$Type* $tmp366 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local17) = $tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// line 115
frost$core$Int64 $tmp367 = (frost$core$Int64) {0};
ITable* $tmp368 = param4->$class->itable;
while ($tmp368->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp368 = $tmp368->next;
}
$fn370 $tmp369 = $tmp368->methods[0];
frost$core$Object* $tmp371 = $tmp369(param4, $tmp367);
org$frostlang$frostc$Compiler$TypeContext* $tmp372 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp373 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp374 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp375 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp372, $tmp373, $tmp374, $tmp375);
org$frostlang$frostc$IR$Value* $tmp376 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp371), $tmp372);
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
org$frostlang$frostc$IR$Value* $tmp377 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local18) = $tmp376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
frost$core$Frost$unref$frost$core$Object$Q($tmp371);
// line 117
org$frostlang$frostc$Type* $tmp378 = *(&local17);
frost$core$Bit $tmp379 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp378);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block52; else goto block53;
block52:;
// line 118
org$frostlang$frostc$IR$Value* $tmp381 = *(&local18);
org$frostlang$frostc$IR$Value* $tmp382 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp381);
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
org$frostlang$frostc$IR$Value* $tmp383 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local19) = $tmp382;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
// line 119
org$frostlang$frostc$IR* $tmp384 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp385 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp386 = (frost$core$Int64) {20};
org$frostlang$frostc$IR$Value* $tmp387 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp385, $tmp386, param1, param2, $tmp387);
$fn389 $tmp388 = ($fn389) $tmp384->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp390 = $tmp388($tmp384, $tmp385);
*(&local20) = $tmp390;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
// line 120
org$frostlang$frostc$IR$Value* $tmp391 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp392 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp393 = *(&local20);
org$frostlang$frostc$Type* $tmp394 = *(&local17);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp391, $tmp392, $tmp393, $tmp394);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp391);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
// line 121
org$frostlang$frostc$IR* $tmp395 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp396 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp397 = (frost$core$Int64) {24};
org$frostlang$frostc$IR$Value* $tmp398 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp399 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp400 = *(&local17);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp398, $tmp399, $tmp400);
org$frostlang$frostc$IR$Value* $tmp401 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp396, $tmp397, param1, $tmp398, param2, $tmp401);
$fn403 $tmp402 = ($fn403) $tmp395->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp404 = $tmp402($tmp395, $tmp396);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
org$frostlang$frostc$IR$Value* $tmp405 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block53;
block53:;
// line 124
org$frostlang$frostc$Pair* $tmp406 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp407 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp408;
$tmp408 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp408->value = $tmp407;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp406, ((frost$core$Object*) $tmp408), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
org$frostlang$frostc$IR$Value* $tmp409 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp410 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp411 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp412 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp406;
block51:;
// line 127
frost$core$Bit $tmp413 = frost$core$Bit$init$builtin_bit(false);
bool $tmp414 = $tmp413.value;
if ($tmp414) goto block54; else goto block55;
block55:;
frost$core$Int64 $tmp415 = (frost$core$Int64) {127};
org$frostlang$frostc$MethodDecl** $tmp416 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp417 = *$tmp416;
frost$core$String** $tmp418 = &((org$frostlang$frostc$Symbol*) $tmp417)->name;
frost$core$String* $tmp419 = *$tmp418;
frost$core$String* $tmp420 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s421, $tmp419);
frost$core$String* $tmp422 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp420, &$s423);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s424, $tmp415, $tmp422);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
abort(); // unreachable
block54:;
// line 128
goto block56;
block56:;
goto block56;
block57:;
goto block8;
block8:;
goto block58;
block58:;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$expression$Binary$Operator param3, frost$collections$ListView* param4, org$frostlang$frostc$Type* param5, org$frostlang$frostc$Type* param6) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$Type* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
// line 138
ITable* $tmp425 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp425->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp425 = $tmp425->next;
}
$fn427 $tmp426 = $tmp425->methods[0];
frost$core$Int64 $tmp428 = $tmp426(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp429 = (frost$core$Int64) {1};
int64_t $tmp430 = $tmp428.value;
int64_t $tmp431 = $tmp429.value;
bool $tmp432 = $tmp430 != $tmp431;
frost$core$Bit $tmp433 = (frost$core$Bit) {$tmp432};
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block1; else goto block2;
block1:;
// line 139
org$frostlang$frostc$Pair* $tmp435 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp436 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp437;
$tmp437 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp437->value = $tmp436;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp435, ((frost$core$Object*) $tmp437), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
return $tmp435;
block2:;
// line 141
org$frostlang$frostc$IR$Value* $tmp438 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param5);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
org$frostlang$frostc$IR$Value* $tmp439 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local0) = $tmp438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
// line 142
org$frostlang$frostc$IR$Value* $tmp440 = *(&local0);
frost$core$Bit $tmp441 = frost$core$Bit$init$builtin_bit($tmp440 == NULL);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block3; else goto block4;
block3:;
// line 143
org$frostlang$frostc$Pair* $tmp443 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp444 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp445;
$tmp445 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp445->value = $tmp444;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp443, ((frost$core$Object*) $tmp445), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
org$frostlang$frostc$IR$Value* $tmp446 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp443;
block4:;
// line 145
frost$core$Int64 $tmp447 = (frost$core$Int64) {0};
ITable* $tmp448 = param4->$class->itable;
while ($tmp448->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp448 = $tmp448->next;
}
$fn450 $tmp449 = $tmp448->methods[0];
frost$core$Object* $tmp451 = $tmp449(param4, $tmp447);
org$frostlang$frostc$Compiler$TypeContext* $tmp452 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp453 = (frost$core$Int64) {3};
frost$core$Bit $tmp454 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp452, $tmp453, param5, $tmp454);
org$frostlang$frostc$IR$Value* $tmp455 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp451), $tmp452);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
org$frostlang$frostc$IR$Value* $tmp456 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local1) = $tmp455;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q($tmp451);
// line 146
org$frostlang$frostc$IR$Value* $tmp457 = *(&local1);
frost$core$Bit $tmp458 = frost$core$Bit$init$builtin_bit($tmp457 == NULL);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block5; else goto block6;
block5:;
// line 147
org$frostlang$frostc$Pair* $tmp460 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp461 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp462;
$tmp462 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp462->value = $tmp461;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp460, ((frost$core$Object*) $tmp462), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
org$frostlang$frostc$IR$Value* $tmp463 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp464 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp460;
block6:;
// line 149
org$frostlang$frostc$IR$Value* $tmp465 = *(&local0);
org$frostlang$frostc$IR$Value* $tmp466 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp465);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
org$frostlang$frostc$IR$Value* $tmp467 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local2) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// line 150
// line 151
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
// line 152
org$frostlang$frostc$Type* $tmp468 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp469 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param6, $tmp468);
bool $tmp470 = $tmp469.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
if ($tmp470) goto block7; else goto block9;
block7:;
// line 153
org$frostlang$frostc$Type* $tmp471 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
org$frostlang$frostc$Type* $tmp472 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local4) = $tmp471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
goto block8;
block9:;
// line 1
// line 156
org$frostlang$frostc$IR$Value* $tmp473 = *(&local2);
$fn475 $tmp474 = ($fn475) $tmp473->$class->vtable[2];
org$frostlang$frostc$Type* $tmp476 = $tmp474($tmp473);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
org$frostlang$frostc$Type* $tmp477 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local4) = $tmp476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
goto block8;
block8:;
// line 158
org$frostlang$frostc$IR** $tmp478 = &param0->ir;
org$frostlang$frostc$IR* $tmp479 = *$tmp478;
org$frostlang$frostc$IR$Statement* $tmp480 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp481 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp482 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp483 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp484 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp483);
org$frostlang$frostc$Type* $tmp485 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp480, $tmp481, param1, $tmp482, param3, $tmp484, $tmp485);
$fn487 $tmp486 = ($fn487) $tmp479->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp488 = $tmp486($tmp479, $tmp480);
*(&local3) = $tmp488;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// line 160
frost$collections$Array* $tmp489 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp489);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
frost$collections$Array* $tmp490 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local5) = $tmp489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
// line 161
frost$collections$Array* $tmp491 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp492 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp493 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp494 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp495 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp496 = *(&local3);
org$frostlang$frostc$Type* $tmp497 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp494, $tmp495, $tmp496, $tmp497);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp492, $tmp493, param1, $tmp494);
frost$collections$Array$add$frost$collections$Array$T($tmp491, ((frost$core$Object*) $tmp492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
// line 162
org$frostlang$frostc$IR$Value* $tmp498 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp499 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp498, $tmp499, param6);
frost$collections$Array* $tmp500 = *(&local5);
org$frostlang$frostc$Compiler$TypeContext* $tmp501 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp502 = (frost$core$Int64) {3};
frost$core$Bit $tmp503 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp501, $tmp502, param6, $tmp503);
org$frostlang$frostc$IR$Value* $tmp504 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp498, ((frost$collections$ListView*) $tmp500), $tmp501);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
org$frostlang$frostc$IR$Value* $tmp505 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local6) = $tmp504;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// line 164
org$frostlang$frostc$IR$Value* $tmp506 = *(&local6);
frost$core$Bit $tmp507 = frost$core$Bit$init$builtin_bit($tmp506 != NULL);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp509 = (frost$core$Int64) {164};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s510, $tmp509);
abort(); // unreachable
block10:;
// line 165
org$frostlang$frostc$Pair* $tmp511 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp512 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp513;
$tmp513 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp513->value = $tmp512;
org$frostlang$frostc$IR$Value* $tmp514 = *(&local6);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp511, ((frost$core$Object*) $tmp513), ((frost$core$Object*) $tmp514));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
org$frostlang$frostc$IR$Value* $tmp515 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp516 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp517 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp518 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp519 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp520 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp511;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
// line 172
org$frostlang$frostc$MethodDecl** $tmp521 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp522 = *$tmp521;
frost$core$String** $tmp523 = &((org$frostlang$frostc$Symbol*) $tmp522)->name;
frost$core$String* $tmp524 = *$tmp523;
frost$core$Bit $tmp525 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp524, &$s526);
bool $tmp527 = $tmp525.value;
if ($tmp527) goto block2; else goto block3;
block2:;
// line 174
org$frostlang$frostc$MethodDecl** $tmp528 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp529 = *$tmp528;
frost$collections$Array** $tmp530 = &$tmp529->parameters;
frost$collections$Array* $tmp531 = *$tmp530;
ITable* $tmp532 = ((frost$collections$CollectionView*) $tmp531)->$class->itable;
while ($tmp532->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp532 = $tmp532->next;
}
$fn534 $tmp533 = $tmp532->methods[0];
frost$core$Int64 $tmp535 = $tmp533(((frost$collections$CollectionView*) $tmp531));
frost$core$Int64 $tmp536 = (frost$core$Int64) {1};
frost$core$Bit $tmp537 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp535, $tmp536);
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp539 = (frost$core$Int64) {174};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s540, $tmp539);
abort(); // unreachable
block4:;
// line 175
ITable* $tmp541 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp541->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp541 = $tmp541->next;
}
$fn543 $tmp542 = $tmp541->methods[0];
frost$core$Int64 $tmp544 = $tmp542(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp545 = (frost$core$Int64) {1};
frost$core$Bit $tmp546 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp544, $tmp545);
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp548 = (frost$core$Int64) {175};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s549, $tmp548);
abort(); // unreachable
block6:;
// line 176
org$frostlang$frostc$MethodDecl** $tmp550 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp551 = *$tmp550;
frost$collections$Array** $tmp552 = &$tmp551->parameters;
frost$collections$Array* $tmp553 = *$tmp552;
frost$core$Int64 $tmp554 = (frost$core$Int64) {0};
frost$core$Object* $tmp555 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp553, $tmp554);
org$frostlang$frostc$Type** $tmp556 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp555)->type;
org$frostlang$frostc$Type* $tmp557 = *$tmp556;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
org$frostlang$frostc$Type* $tmp558 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local0) = $tmp557;
frost$core$Frost$unref$frost$core$Object$Q($tmp555);
// line 177
org$frostlang$frostc$Type* $tmp559 = *(&local0);
frost$core$Bit $tmp560 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp559);
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block8; else goto block9;
block8:;
// line 178
frost$core$Int64 $tmp562 = (frost$core$Int64) {0};
ITable* $tmp563 = param4->$class->itable;
while ($tmp563->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp563 = $tmp563->next;
}
$fn565 $tmp564 = $tmp563->methods[0];
frost$core$Object* $tmp566 = $tmp564(param4, $tmp562);
org$frostlang$frostc$Compiler$TypeContext* $tmp567 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp568 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp569 = *(&local0);
frost$core$Bit $tmp570 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp567, $tmp568, $tmp569, $tmp570);
org$frostlang$frostc$IR$Value* $tmp571 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp566), $tmp567);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
org$frostlang$frostc$IR$Value* $tmp572 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local1) = $tmp571;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
frost$core$Frost$unref$frost$core$Object$Q($tmp566);
// line 180
org$frostlang$frostc$IR$Value* $tmp573 = *(&local1);
frost$core$Bit $tmp574 = frost$core$Bit$init$builtin_bit($tmp573 != NULL);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block10; else goto block11;
block10:;
// line 181
org$frostlang$frostc$IR** $tmp576 = &param0->ir;
org$frostlang$frostc$IR* $tmp577 = *$tmp576;
org$frostlang$frostc$IR$Statement* $tmp578 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp579 = (frost$core$Int64) {7};
org$frostlang$frostc$MethodDecl** $tmp580 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp581 = *$tmp580;
frost$core$Weak** $tmp582 = &$tmp581->owner;
frost$core$Weak* $tmp583 = *$tmp582;
frost$core$Object* $tmp584 = frost$core$Weak$get$R$frost$core$Weak$T($tmp583);
frost$collections$Array* $tmp585 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp586 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp585, $tmp586);
org$frostlang$frostc$IR$Value* $tmp587 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp585, ((frost$core$Object*) $tmp587));
org$frostlang$frostc$FixedArray* $tmp588 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp585);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp578, $tmp579, param1, ((org$frostlang$frostc$ClassDecl*) $tmp584), $tmp588);
$fn590 $tmp589 = ($fn590) $tmp577->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp591 = $tmp589($tmp577, $tmp578);
*(&local2) = $tmp591;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q($tmp584);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// line 183
org$frostlang$frostc$Pair* $tmp592 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp593 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp594;
$tmp594 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp594->value = $tmp593;
org$frostlang$frostc$IR$Value* $tmp595 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp596 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp597 = *(&local2);
org$frostlang$frostc$MethodDecl** $tmp598 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp599 = *$tmp598;
frost$core$Weak** $tmp600 = &$tmp599->owner;
frost$core$Weak* $tmp601 = *$tmp600;
frost$core$Object* $tmp602 = frost$core$Weak$get$R$frost$core$Weak$T($tmp601);
org$frostlang$frostc$Type** $tmp603 = &((org$frostlang$frostc$ClassDecl*) $tmp602)->type;
org$frostlang$frostc$Type* $tmp604 = *$tmp603;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp595, $tmp596, $tmp597, $tmp604);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp592, ((frost$core$Object*) $tmp594), ((frost$core$Object*) $tmp595));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
frost$core$Frost$unref$frost$core$Object$Q($tmp602);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
org$frostlang$frostc$IR$Value* $tmp605 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp606 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp592;
block11:;
org$frostlang$frostc$IR$Value* $tmp607 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block9;
block9:;
org$frostlang$frostc$Type* $tmp608 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Bit $tmp609 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp524, &$s610);
bool $tmp611 = $tmp609.value;
if ($tmp611) goto block12; else goto block13;
block12:;
// line 188
frost$core$Int64 $tmp612 = (frost$core$Int64) {0};
org$frostlang$frostc$expression$Binary$Operator $tmp613 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp612);
org$frostlang$frostc$Type* $tmp614 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp615 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp616 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp613, param4, $tmp614, $tmp615);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
return $tmp616;
block13:;
frost$core$Bit $tmp617 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp524, &$s618);
bool $tmp619 = $tmp617.value;
if ($tmp619) goto block14; else goto block15;
block14:;
// line 192
frost$core$Int64 $tmp620 = (frost$core$Int64) {1};
org$frostlang$frostc$expression$Binary$Operator $tmp621 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp620);
org$frostlang$frostc$Type* $tmp622 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp623 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp624 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp621, param4, $tmp622, $tmp623);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
return $tmp624;
block15:;
frost$core$Bit $tmp625 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp524, &$s626);
bool $tmp627 = $tmp625.value;
if ($tmp627) goto block16; else goto block17;
block16:;
// line 196
frost$core$Int64 $tmp628 = (frost$core$Int64) {2};
org$frostlang$frostc$expression$Binary$Operator $tmp629 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp628);
org$frostlang$frostc$Type* $tmp630 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp631 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp632 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp629, param4, $tmp630, $tmp631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
return $tmp632;
block17:;
frost$core$Bit $tmp633 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp524, &$s634);
bool $tmp635 = $tmp633.value;
if ($tmp635) goto block18; else goto block19;
block18:;
// line 200
frost$core$Int64 $tmp636 = (frost$core$Int64) {4};
org$frostlang$frostc$expression$Binary$Operator $tmp637 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp636);
org$frostlang$frostc$Type* $tmp638 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp639 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp640 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp637, param4, $tmp638, $tmp639);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
return $tmp640;
block19:;
frost$core$Bit $tmp641 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp524, &$s642);
bool $tmp643 = $tmp641.value;
if ($tmp643) goto block20; else goto block21;
block20:;
// line 204
frost$core$Int64 $tmp644 = (frost$core$Int64) {8};
org$frostlang$frostc$expression$Binary$Operator $tmp645 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp644);
org$frostlang$frostc$MethodDecl** $tmp646 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp647 = *$tmp646;
frost$core$Weak** $tmp648 = &$tmp647->owner;
frost$core$Weak* $tmp649 = *$tmp648;
frost$core$Object* $tmp650 = frost$core$Weak$get$R$frost$core$Weak$T($tmp649);
org$frostlang$frostc$Type** $tmp651 = &((org$frostlang$frostc$ClassDecl*) $tmp650)->type;
org$frostlang$frostc$Type* $tmp652 = *$tmp651;
org$frostlang$frostc$MethodDecl** $tmp653 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp654 = *$tmp653;
frost$collections$Array** $tmp655 = &$tmp654->parameters;
frost$collections$Array* $tmp656 = *$tmp655;
frost$core$Int64 $tmp657 = (frost$core$Int64) {0};
frost$core$Object* $tmp658 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp656, $tmp657);
org$frostlang$frostc$Type** $tmp659 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp658)->type;
org$frostlang$frostc$Type* $tmp660 = *$tmp659;
frost$core$Bit $tmp661 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp662 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp663 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp652, $tmp660, $tmp661, $tmp662);
org$frostlang$frostc$Type* $tmp664 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp665 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp645, param4, $tmp663, $tmp664);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Frost$unref$frost$core$Object$Q($tmp658);
frost$core$Frost$unref$frost$core$Object$Q($tmp650);
return $tmp665;
block21:;
frost$core$Bit $tmp666 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp524, &$s667);
bool $tmp668 = $tmp666.value;
if ($tmp668) goto block22; else goto block23;
block22:;
// line 210
frost$core$Int64 $tmp669 = (frost$core$Int64) {10};
org$frostlang$frostc$expression$Binary$Operator $tmp670 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp669);
org$frostlang$frostc$MethodDecl** $tmp671 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp672 = *$tmp671;
frost$core$Weak** $tmp673 = &$tmp672->owner;
frost$core$Weak* $tmp674 = *$tmp673;
frost$core$Object* $tmp675 = frost$core$Weak$get$R$frost$core$Weak$T($tmp674);
org$frostlang$frostc$Type** $tmp676 = &((org$frostlang$frostc$ClassDecl*) $tmp675)->type;
org$frostlang$frostc$Type* $tmp677 = *$tmp676;
org$frostlang$frostc$MethodDecl** $tmp678 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp679 = *$tmp678;
frost$collections$Array** $tmp680 = &$tmp679->parameters;
frost$collections$Array* $tmp681 = *$tmp680;
frost$core$Int64 $tmp682 = (frost$core$Int64) {0};
frost$core$Object* $tmp683 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp681, $tmp682);
org$frostlang$frostc$Type** $tmp684 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp683)->type;
org$frostlang$frostc$Type* $tmp685 = *$tmp684;
frost$core$Bit $tmp686 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp687 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp688 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp677, $tmp685, $tmp686, $tmp687);
org$frostlang$frostc$Type* $tmp689 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp690 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp670, param4, $tmp688, $tmp689);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
frost$core$Frost$unref$frost$core$Object$Q($tmp683);
frost$core$Frost$unref$frost$core$Object$Q($tmp675);
return $tmp690;
block23:;
frost$core$Bit $tmp691 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp524, &$s692);
bool $tmp693 = $tmp691.value;
if ($tmp693) goto block24; else goto block25;
block24:;
// line 216
frost$core$Int64 $tmp694 = (frost$core$Int64) {9};
org$frostlang$frostc$expression$Binary$Operator $tmp695 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp694);
org$frostlang$frostc$MethodDecl** $tmp696 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp697 = *$tmp696;
frost$core$Weak** $tmp698 = &$tmp697->owner;
frost$core$Weak* $tmp699 = *$tmp698;
frost$core$Object* $tmp700 = frost$core$Weak$get$R$frost$core$Weak$T($tmp699);
org$frostlang$frostc$Type** $tmp701 = &((org$frostlang$frostc$ClassDecl*) $tmp700)->type;
org$frostlang$frostc$Type* $tmp702 = *$tmp701;
org$frostlang$frostc$MethodDecl** $tmp703 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp704 = *$tmp703;
frost$collections$Array** $tmp705 = &$tmp704->parameters;
frost$collections$Array* $tmp706 = *$tmp705;
frost$core$Int64 $tmp707 = (frost$core$Int64) {0};
frost$core$Object* $tmp708 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp706, $tmp707);
org$frostlang$frostc$Type** $tmp709 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp708)->type;
org$frostlang$frostc$Type* $tmp710 = *$tmp709;
frost$core$Bit $tmp711 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp712 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp713 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp702, $tmp710, $tmp711, $tmp712);
org$frostlang$frostc$Type* $tmp714 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp715 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp695, param4, $tmp713, $tmp714);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
frost$core$Frost$unref$frost$core$Object$Q($tmp708);
frost$core$Frost$unref$frost$core$Object$Q($tmp700);
return $tmp715;
block25:;
frost$core$Bit $tmp716 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp524, &$s717);
bool $tmp718 = $tmp716.value;
if ($tmp718) goto block26; else goto block27;
block26:;
// line 222
frost$core$Int64 $tmp719 = (frost$core$Int64) {11};
org$frostlang$frostc$expression$Binary$Operator $tmp720 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp719);
org$frostlang$frostc$MethodDecl** $tmp721 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp722 = *$tmp721;
frost$core$Weak** $tmp723 = &$tmp722->owner;
frost$core$Weak* $tmp724 = *$tmp723;
frost$core$Object* $tmp725 = frost$core$Weak$get$R$frost$core$Weak$T($tmp724);
org$frostlang$frostc$Type** $tmp726 = &((org$frostlang$frostc$ClassDecl*) $tmp725)->type;
org$frostlang$frostc$Type* $tmp727 = *$tmp726;
org$frostlang$frostc$MethodDecl** $tmp728 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp729 = *$tmp728;
frost$collections$Array** $tmp730 = &$tmp729->parameters;
frost$collections$Array* $tmp731 = *$tmp730;
frost$core$Int64 $tmp732 = (frost$core$Int64) {0};
frost$core$Object* $tmp733 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp731, $tmp732);
org$frostlang$frostc$Type** $tmp734 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp733)->type;
org$frostlang$frostc$Type* $tmp735 = *$tmp734;
frost$core$Bit $tmp736 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp737 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp738 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp727, $tmp735, $tmp736, $tmp737);
org$frostlang$frostc$Type* $tmp739 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp740 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp720, param4, $tmp738, $tmp739);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Frost$unref$frost$core$Object$Q($tmp733);
frost$core$Frost$unref$frost$core$Object$Q($tmp725);
return $tmp740;
block27:;
frost$core$Bit $tmp741 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp524, &$s742);
bool $tmp743 = $tmp741.value;
if ($tmp743) goto block28; else goto block29;
block28:;
// line 228
frost$core$Int64 $tmp744 = (frost$core$Int64) {6};
org$frostlang$frostc$expression$Binary$Operator $tmp745 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp744);
org$frostlang$frostc$MethodDecl** $tmp746 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp747 = *$tmp746;
frost$core$Weak** $tmp748 = &$tmp747->owner;
frost$core$Weak* $tmp749 = *$tmp748;
frost$core$Object* $tmp750 = frost$core$Weak$get$R$frost$core$Weak$T($tmp749);
org$frostlang$frostc$Type** $tmp751 = &((org$frostlang$frostc$ClassDecl*) $tmp750)->type;
org$frostlang$frostc$Type* $tmp752 = *$tmp751;
org$frostlang$frostc$MethodDecl** $tmp753 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp754 = *$tmp753;
frost$collections$Array** $tmp755 = &$tmp754->parameters;
frost$collections$Array* $tmp756 = *$tmp755;
frost$core$Int64 $tmp757 = (frost$core$Int64) {0};
frost$core$Object* $tmp758 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp756, $tmp757);
org$frostlang$frostc$Type** $tmp759 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp758)->type;
org$frostlang$frostc$Type* $tmp760 = *$tmp759;
frost$core$Bit $tmp761 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp762 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp763 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp752, $tmp760, $tmp761, $tmp762);
org$frostlang$frostc$Type* $tmp764 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp765 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp745, param4, $tmp763, $tmp764);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q($tmp758);
frost$core$Frost$unref$frost$core$Object$Q($tmp750);
return $tmp765;
block29:;
frost$core$Bit $tmp766 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp524, &$s767);
bool $tmp768 = $tmp766.value;
if ($tmp768) goto block30; else goto block1;
block30:;
// line 234
frost$core$Int64 $tmp769 = (frost$core$Int64) {7};
org$frostlang$frostc$expression$Binary$Operator $tmp770 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp769);
org$frostlang$frostc$MethodDecl** $tmp771 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp772 = *$tmp771;
frost$core$Weak** $tmp773 = &$tmp772->owner;
frost$core$Weak* $tmp774 = *$tmp773;
frost$core$Object* $tmp775 = frost$core$Weak$get$R$frost$core$Weak$T($tmp774);
org$frostlang$frostc$Type** $tmp776 = &((org$frostlang$frostc$ClassDecl*) $tmp775)->type;
org$frostlang$frostc$Type* $tmp777 = *$tmp776;
org$frostlang$frostc$MethodDecl** $tmp778 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp779 = *$tmp778;
frost$collections$Array** $tmp780 = &$tmp779->parameters;
frost$collections$Array* $tmp781 = *$tmp780;
frost$core$Int64 $tmp782 = (frost$core$Int64) {0};
frost$core$Object* $tmp783 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp781, $tmp782);
org$frostlang$frostc$Type** $tmp784 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp783)->type;
org$frostlang$frostc$Type* $tmp785 = *$tmp784;
frost$core$Bit $tmp786 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp787 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp788 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp777, $tmp785, $tmp786, $tmp787);
org$frostlang$frostc$Type* $tmp789 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp790 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp770, param4, $tmp788, $tmp789);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
frost$core$Frost$unref$frost$core$Object$Q($tmp783);
frost$core$Frost$unref$frost$core$Object$Q($tmp775);
return $tmp790;
block1:;
// line 240
org$frostlang$frostc$Pair* $tmp791 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp792 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp793;
$tmp793 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp793->value = $tmp792;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp791, ((frost$core$Object*) $tmp793), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
return $tmp791;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileBitIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
// line 247
org$frostlang$frostc$MethodDecl** $tmp794 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp795 = *$tmp794;
frost$core$String** $tmp796 = &((org$frostlang$frostc$Symbol*) $tmp795)->name;
frost$core$String* $tmp797 = *$tmp796;
frost$core$Bit $tmp798 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp797, &$s799);
bool $tmp800 = $tmp798.value;
if ($tmp800) goto block2; else goto block1;
block2:;
// line 249
org$frostlang$frostc$MethodDecl** $tmp801 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp802 = *$tmp801;
frost$collections$Array** $tmp803 = &$tmp802->parameters;
frost$collections$Array* $tmp804 = *$tmp803;
ITable* $tmp805 = ((frost$collections$CollectionView*) $tmp804)->$class->itable;
while ($tmp805->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp805 = $tmp805->next;
}
$fn807 $tmp806 = $tmp805->methods[0];
frost$core$Int64 $tmp808 = $tmp806(((frost$collections$CollectionView*) $tmp804));
frost$core$Int64 $tmp809 = (frost$core$Int64) {1};
frost$core$Bit $tmp810 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp808, $tmp809);
bool $tmp811 = $tmp810.value;
if ($tmp811) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp812 = (frost$core$Int64) {249};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s813, $tmp812);
abort(); // unreachable
block3:;
// line 250
ITable* $tmp814 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp814->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp814 = $tmp814->next;
}
$fn816 $tmp815 = $tmp814->methods[0];
frost$core$Int64 $tmp817 = $tmp815(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp818 = (frost$core$Int64) {1};
frost$core$Bit $tmp819 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp817, $tmp818);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp821 = (frost$core$Int64) {250};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s822, $tmp821);
abort(); // unreachable
block5:;
// line 251
org$frostlang$frostc$MethodDecl** $tmp823 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp824 = *$tmp823;
frost$collections$Array** $tmp825 = &$tmp824->parameters;
frost$collections$Array* $tmp826 = *$tmp825;
frost$core$Int64 $tmp827 = (frost$core$Int64) {0};
frost$core$Object* $tmp828 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp826, $tmp827);
org$frostlang$frostc$Type** $tmp829 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp828)->type;
org$frostlang$frostc$Type* $tmp830 = *$tmp829;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
org$frostlang$frostc$Type* $tmp831 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
*(&local0) = $tmp830;
frost$core$Frost$unref$frost$core$Object$Q($tmp828);
// line 252
org$frostlang$frostc$Type* $tmp832 = *(&local0);
org$frostlang$frostc$Type* $tmp833 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp834 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp832, $tmp833);
bool $tmp835 = $tmp834.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
if ($tmp835) goto block7; else goto block8;
block7:;
// line 253
frost$core$Int64 $tmp836 = (frost$core$Int64) {0};
ITable* $tmp837 = param4->$class->itable;
while ($tmp837->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp837 = $tmp837->next;
}
$fn839 $tmp838 = $tmp837->methods[0];
frost$core$Object* $tmp840 = $tmp838(param4, $tmp836);
org$frostlang$frostc$Compiler$TypeContext* $tmp841 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp842 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp843 = *(&local0);
frost$core$Bit $tmp844 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp841, $tmp842, $tmp843, $tmp844);
org$frostlang$frostc$IR$Value* $tmp845 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp840), $tmp841);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
org$frostlang$frostc$IR$Value* $tmp846 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local1) = $tmp845;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
frost$core$Frost$unref$frost$core$Object$Q($tmp840);
// line 255
org$frostlang$frostc$IR$Value* $tmp847 = *(&local1);
frost$core$Bit $tmp848 = frost$core$Bit$init$builtin_bit($tmp847 != NULL);
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block9; else goto block10;
block9:;
// line 256
org$frostlang$frostc$IR** $tmp850 = &param0->ir;
org$frostlang$frostc$IR* $tmp851 = *$tmp850;
org$frostlang$frostc$IR$Statement* $tmp852 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp853 = (frost$core$Int64) {7};
org$frostlang$frostc$MethodDecl** $tmp854 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp855 = *$tmp854;
frost$core$Weak** $tmp856 = &$tmp855->owner;
frost$core$Weak* $tmp857 = *$tmp856;
frost$core$Object* $tmp858 = frost$core$Weak$get$R$frost$core$Weak$T($tmp857);
frost$collections$Array* $tmp859 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp860 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp859, $tmp860);
org$frostlang$frostc$IR$Value* $tmp861 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp859, ((frost$core$Object*) $tmp861));
org$frostlang$frostc$FixedArray* $tmp862 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp859);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp852, $tmp853, param1, ((org$frostlang$frostc$ClassDecl*) $tmp858), $tmp862);
$fn864 $tmp863 = ($fn864) $tmp851->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp865 = $tmp863($tmp851, $tmp852);
*(&local2) = $tmp865;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$Frost$unref$frost$core$Object$Q($tmp858);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// line 258
org$frostlang$frostc$Pair* $tmp866 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp867 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp868;
$tmp868 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp868->value = $tmp867;
org$frostlang$frostc$IR$Value* $tmp869 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp870 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp871 = *(&local2);
org$frostlang$frostc$MethodDecl** $tmp872 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp873 = *$tmp872;
frost$core$Weak** $tmp874 = &$tmp873->owner;
frost$core$Weak* $tmp875 = *$tmp874;
frost$core$Object* $tmp876 = frost$core$Weak$get$R$frost$core$Weak$T($tmp875);
org$frostlang$frostc$Type** $tmp877 = &((org$frostlang$frostc$ClassDecl*) $tmp876)->type;
org$frostlang$frostc$Type* $tmp878 = *$tmp877;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp869, $tmp870, $tmp871, $tmp878);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp866, ((frost$core$Object*) $tmp868), ((frost$core$Object*) $tmp869));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$Frost$unref$frost$core$Object$Q($tmp876);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
org$frostlang$frostc$IR$Value* $tmp879 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp880 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp866;
block10:;
org$frostlang$frostc$IR$Value* $tmp881 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block8;
block8:;
org$frostlang$frostc$Type* $tmp882 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 263
org$frostlang$frostc$Pair* $tmp883 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp884 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp885;
$tmp885 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp885->value = $tmp884;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp883, ((frost$core$Object*) $tmp885), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
return $tmp883;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 269
org$frostlang$frostc$Type** $tmp886 = &param3->target;
org$frostlang$frostc$Type* $tmp887 = *$tmp886;
frost$core$Bit $tmp888 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp887);
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block3; else goto block4;
block3:;
*(&local0) = $tmp888;
goto block5;
block4:;
org$frostlang$frostc$Type** $tmp890 = &param3->target;
org$frostlang$frostc$Type* $tmp891 = *$tmp890;
frost$core$Bit $tmp892 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp891);
bool $tmp893 = $tmp892.value;
if ($tmp893) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type** $tmp894 = &param3->target;
org$frostlang$frostc$Type* $tmp895 = *$tmp894;
org$frostlang$frostc$FixedArray** $tmp896 = &$tmp895->subtypes;
org$frostlang$frostc$FixedArray* $tmp897 = *$tmp896;
frost$core$Int64 $tmp898 = (frost$core$Int64) {1};
frost$core$Object* $tmp899 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp897, $tmp898);
frost$core$Bit $tmp900 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp899));
frost$core$Frost$unref$frost$core$Object$Q($tmp899);
*(&local1) = $tmp900;
goto block8;
block7:;
*(&local1) = $tmp892;
goto block8;
block8:;
frost$core$Bit $tmp901 = *(&local1);
*(&local0) = $tmp901;
goto block5;
block5:;
frost$core$Bit $tmp902 = *(&local0);
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block1; else goto block2;
block1:;
// line 270
org$frostlang$frostc$Pair* $tmp904 = org$frostlang$frostc$expression$Call$compilePointerIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
return $tmp904;
block2:;
// line 272
org$frostlang$frostc$Type** $tmp905 = &param3->target;
org$frostlang$frostc$Type* $tmp906 = *$tmp905;
frost$core$Bit $tmp907 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp906);
bool $tmp908 = $tmp907.value;
if ($tmp908) goto block9; else goto block10;
block9:;
// line 273
org$frostlang$frostc$Pair* $tmp909 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
return $tmp909;
block10:;
// line 275
org$frostlang$frostc$Type** $tmp910 = &param3->target;
org$frostlang$frostc$Type* $tmp911 = *$tmp910;
org$frostlang$frostc$Type* $tmp912 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp913 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp911, $tmp912);
bool $tmp914 = $tmp913.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
if ($tmp914) goto block11; else goto block12;
block11:;
// line 276
org$frostlang$frostc$Pair* $tmp915 = org$frostlang$frostc$expression$Call$compileBitIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
return $tmp915;
block12:;
// line 278
org$frostlang$frostc$Pair* $tmp916 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp917 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp918;
$tmp918 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp918->value = $tmp917;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp916, ((frost$core$Object*) $tmp918), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
return $tmp916;

}
frost$collections$ListView* org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
frost$collections$ListView* local2 = NULL;
frost$collections$ListView* local3 = NULL;
frost$collections$Array* local4 = NULL;
// line 292
org$frostlang$frostc$FixedArray** $tmp919 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp920 = *$tmp919;
frost$core$Bit $tmp921 = frost$core$Bit$init$builtin_bit($tmp920 == NULL);
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block1; else goto block2;
block1:;
// line 293
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
return ((frost$collections$ListView*) NULL);
block2:;
// line 295
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp923 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
*(&local0) = ((frost$collections$Array*) NULL);
// line 296
frost$core$Int64 $tmp924 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp925 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp926 = *$tmp925;
ITable* $tmp927 = ((frost$collections$CollectionView*) $tmp926)->$class->itable;
while ($tmp927->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp927 = $tmp927->next;
}
$fn929 $tmp928 = $tmp927->methods[0];
frost$core$Int64 $tmp930 = $tmp928(((frost$collections$CollectionView*) $tmp926));
frost$core$Bit $tmp931 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp932 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp924, $tmp930, $tmp931);
frost$core$Int64 $tmp933 = $tmp932.min;
*(&local1) = $tmp933;
frost$core$Int64 $tmp934 = $tmp932.max;
frost$core$Bit $tmp935 = $tmp932.inclusive;
bool $tmp936 = $tmp935.value;
frost$core$Int64 $tmp937 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp938 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp937);
if ($tmp936) goto block6; else goto block7;
block6:;
int64_t $tmp939 = $tmp933.value;
int64_t $tmp940 = $tmp934.value;
bool $tmp941 = $tmp939 <= $tmp940;
frost$core$Bit $tmp942 = (frost$core$Bit) {$tmp941};
bool $tmp943 = $tmp942.value;
if ($tmp943) goto block3; else goto block4;
block7:;
int64_t $tmp944 = $tmp933.value;
int64_t $tmp945 = $tmp934.value;
bool $tmp946 = $tmp944 < $tmp945;
frost$core$Bit $tmp947 = (frost$core$Bit) {$tmp946};
bool $tmp948 = $tmp947.value;
if ($tmp948) goto block3; else goto block4;
block3:;
// line 297
org$frostlang$frostc$FixedArray** $tmp949 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp950 = *$tmp949;
frost$core$Int64 $tmp951 = *(&local1);
frost$core$Object* $tmp952 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp950, $tmp951);
org$frostlang$frostc$Type$Kind* $tmp953 = &((org$frostlang$frostc$Type*) $tmp952)->typeKind;
org$frostlang$frostc$Type$Kind $tmp954 = *$tmp953;
org$frostlang$frostc$Type$Kind$wrapper* $tmp955;
$tmp955 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp955->value = $tmp954;
frost$core$Int64 $tmp956 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp957 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp956);
org$frostlang$frostc$Type$Kind$wrapper* $tmp958;
$tmp958 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp958->value = $tmp957;
ITable* $tmp959 = ((frost$core$Equatable*) $tmp955)->$class->itable;
while ($tmp959->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp959 = $tmp959->next;
}
$fn961 $tmp960 = $tmp959->methods[0];
frost$core$Bit $tmp962 = $tmp960(((frost$core$Equatable*) $tmp955), ((frost$core$Equatable*) $tmp958));
bool $tmp963 = $tmp962.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp958)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp955)));
frost$core$Frost$unref$frost$core$Object$Q($tmp952);
if ($tmp963) goto block8; else goto block10;
block8:;
// line 298
org$frostlang$frostc$FixedArray** $tmp964 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp965 = *$tmp964;
frost$core$Int64 $tmp966 = *(&local1);
frost$core$Object* $tmp967 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp965, $tmp966);
frost$core$Weak** $tmp968 = &((org$frostlang$frostc$Type*) $tmp967)->genericMethodParameter;
frost$core$Weak* $tmp969 = *$tmp968;
frost$core$Object* $tmp970 = frost$core$Weak$get$R$frost$core$Weak$T($tmp969);
frost$core$String** $tmp971 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp970)->owner;
frost$core$String* $tmp972 = *$tmp971;
frost$core$Weak** $tmp973 = &param0->owner;
frost$core$Weak* $tmp974 = *$tmp973;
frost$core$Object* $tmp975 = frost$core$Weak$get$R$frost$core$Weak$T($tmp974);
frost$core$String** $tmp976 = &((org$frostlang$frostc$ClassDecl*) $tmp975)->name;
frost$core$String* $tmp977 = *$tmp976;
frost$core$String* $tmp978 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp977, &$s979);
frost$core$String** $tmp980 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp981 = *$tmp980;
frost$core$String* $tmp982 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp978, $tmp981);
frost$core$Bit $tmp983 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp972, $tmp982);
bool $tmp984 = $tmp983.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
frost$core$Frost$unref$frost$core$Object$Q($tmp975);
frost$core$Frost$unref$frost$core$Object$Q($tmp970);
frost$core$Frost$unref$frost$core$Object$Q($tmp967);
if ($tmp984) goto block11; else goto block12;
block11:;
// line 299
frost$collections$Array* $tmp985 = *(&local0);
frost$core$Bit $tmp986 = frost$core$Bit$init$builtin_bit($tmp985 == NULL);
bool $tmp987 = $tmp986.value;
if ($tmp987) goto block13; else goto block14;
block13:;
// line 300
frost$collections$Array* $tmp988 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp988);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
frost$collections$Array* $tmp989 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
*(&local0) = $tmp988;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
goto block14;
block14:;
// line 302
frost$collections$Array* $tmp990 = *(&local0);
frost$collections$Array* $tmp991 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp992 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp991, $tmp992);
frost$core$Int64 $tmp993 = *(&local1);
frost$core$Int64$wrapper* $tmp994;
$tmp994 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp994->value = $tmp993;
frost$collections$Array$add$frost$collections$Array$T($tmp991, ((frost$core$Object*) $tmp994));
frost$collections$ImmutableArray* $tmp995 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT($tmp991);
frost$collections$Array$add$frost$collections$Array$T($tmp990, ((frost$core$Object*) ((frost$collections$ListView*) $tmp995)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
goto block12;
block12:;
goto block9;
block10:;
// line 1
// line 306
org$frostlang$frostc$FixedArray** $tmp996 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp997 = *$tmp996;
frost$core$Int64 $tmp998 = *(&local1);
frost$core$Object* $tmp999 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp997, $tmp998);
frost$collections$ListView* $tmp1000 = org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q(param0, ((org$frostlang$frostc$Type*) $tmp999));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
frost$collections$ListView* $tmp1001 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1001));
*(&local2) = $tmp1000;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
frost$core$Frost$unref$frost$core$Object$Q($tmp999);
// line 307
frost$collections$ListView* $tmp1002 = *(&local2);
frost$core$Bit $tmp1003 = frost$core$Bit$init$builtin_bit($tmp1002 != NULL);
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block15; else goto block16;
block15:;
// line 308
frost$collections$Array* $tmp1005 = *(&local0);
frost$core$Bit $tmp1006 = frost$core$Bit$init$builtin_bit($tmp1005 == NULL);
bool $tmp1007 = $tmp1006.value;
if ($tmp1007) goto block17; else goto block18;
block17:;
// line 309
frost$collections$Array* $tmp1008 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1008);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
frost$collections$Array* $tmp1009 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
*(&local0) = $tmp1008;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
goto block18;
block18:;
// line 311
frost$collections$ListView* $tmp1010 = *(&local2);
ITable* $tmp1011 = ((frost$collections$Iterable*) $tmp1010)->$class->itable;
while ($tmp1011->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1011 = $tmp1011->next;
}
$fn1013 $tmp1012 = $tmp1011->methods[0];
frost$collections$Iterator* $tmp1014 = $tmp1012(((frost$collections$Iterable*) $tmp1010));
goto block19;
block19:;
ITable* $tmp1015 = $tmp1014->$class->itable;
while ($tmp1015->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1015 = $tmp1015->next;
}
$fn1017 $tmp1016 = $tmp1015->methods[0];
frost$core$Bit $tmp1018 = $tmp1016($tmp1014);
bool $tmp1019 = $tmp1018.value;
if ($tmp1019) goto block21; else goto block20;
block20:;
*(&local3) = ((frost$collections$ListView*) NULL);
ITable* $tmp1020 = $tmp1014->$class->itable;
while ($tmp1020->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1020 = $tmp1020->next;
}
$fn1022 $tmp1021 = $tmp1020->methods[1];
frost$core$Object* $tmp1023 = $tmp1021($tmp1014);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1023)));
frost$collections$ListView* $tmp1024 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
*(&local3) = ((frost$collections$ListView*) $tmp1023);
// line 312
frost$collections$Array* $tmp1025 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1026 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1025, $tmp1026);
frost$core$Int64 $tmp1027 = *(&local1);
frost$core$Int64$wrapper* $tmp1028;
$tmp1028 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1028->value = $tmp1027;
frost$collections$Array$add$frost$collections$Array$T($tmp1025, ((frost$core$Object*) $tmp1028));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$collections$Array* $tmp1029 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
*(&local4) = $tmp1025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
// line 313
frost$collections$Array* $tmp1030 = *(&local4);
frost$collections$ListView* $tmp1031 = *(&local3);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp1030, ((frost$collections$CollectionView*) $tmp1031));
// line 314
frost$collections$Array* $tmp1032 = *(&local0);
frost$collections$Array* $tmp1033 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp1032, ((frost$core$Object*) ((frost$collections$ListView*) $tmp1033)));
frost$collections$Array* $tmp1034 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1034));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1023);
frost$collections$ListView* $tmp1035 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
*(&local3) = ((frost$collections$ListView*) NULL);
goto block19;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
goto block16;
block16:;
frost$collections$ListView* $tmp1036 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1036));
*(&local2) = ((frost$collections$ListView*) NULL);
goto block9;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp1037 = *(&local1);
int64_t $tmp1038 = $tmp934.value;
int64_t $tmp1039 = $tmp1037.value;
int64_t $tmp1040 = $tmp1038 - $tmp1039;
frost$core$Int64 $tmp1041 = (frost$core$Int64) {$tmp1040};
frost$core$UInt64 $tmp1042 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1041);
if ($tmp936) goto block23; else goto block24;
block23:;
uint64_t $tmp1043 = $tmp1042.value;
uint64_t $tmp1044 = $tmp938.value;
bool $tmp1045 = $tmp1043 >= $tmp1044;
frost$core$Bit $tmp1046 = (frost$core$Bit) {$tmp1045};
bool $tmp1047 = $tmp1046.value;
if ($tmp1047) goto block22; else goto block4;
block24:;
uint64_t $tmp1048 = $tmp1042.value;
uint64_t $tmp1049 = $tmp938.value;
bool $tmp1050 = $tmp1048 > $tmp1049;
frost$core$Bit $tmp1051 = (frost$core$Bit) {$tmp1050};
bool $tmp1052 = $tmp1051.value;
if ($tmp1052) goto block22; else goto block4;
block22:;
int64_t $tmp1053 = $tmp1037.value;
int64_t $tmp1054 = $tmp937.value;
int64_t $tmp1055 = $tmp1053 + $tmp1054;
frost$core$Int64 $tmp1056 = (frost$core$Int64) {$tmp1055};
*(&local1) = $tmp1056;
goto block3;
block4:;
// line 319
frost$collections$Array* $tmp1057 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1057)));
frost$collections$Array* $tmp1058 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp1057);

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$ListView* param1) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Int64 local1;
// line 324
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1059 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local0) = param0;
// line 325
ITable* $tmp1060 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp1060->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1060 = $tmp1060->next;
}
$fn1062 $tmp1061 = $tmp1060->methods[0];
frost$collections$Iterator* $tmp1063 = $tmp1061(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp1064 = $tmp1063->$class->itable;
while ($tmp1064->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1064 = $tmp1064->next;
}
$fn1066 $tmp1065 = $tmp1064->methods[0];
frost$core$Bit $tmp1067 = $tmp1065($tmp1063);
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block3; else goto block2;
block2:;
ITable* $tmp1069 = $tmp1063->$class->itable;
while ($tmp1069->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1069 = $tmp1069->next;
}
$fn1071 $tmp1070 = $tmp1069->methods[1];
frost$core$Object* $tmp1072 = $tmp1070($tmp1063);
*(&local1) = ((frost$core$Int64$wrapper*) $tmp1072)->value;
// line 326
org$frostlang$frostc$Type* $tmp1073 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp1074 = &$tmp1073->subtypes;
org$frostlang$frostc$FixedArray* $tmp1075 = *$tmp1074;
frost$core$Int64 $tmp1076 = *(&local1);
frost$core$Object* $tmp1077 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1075, $tmp1076);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1077)));
org$frostlang$frostc$Type* $tmp1078 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1077);
frost$core$Frost$unref$frost$core$Object$Q($tmp1077);
frost$core$Frost$unref$frost$core$Object$Q($tmp1072);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
// line 328
org$frostlang$frostc$Type* $tmp1079 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
org$frostlang$frostc$Type* $tmp1080 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1079;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Call$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodDecl$GenericParameter* param0) {

// line 336
org$frostlang$frostc$Type** $tmp1081 = &param0->bound;
org$frostlang$frostc$Type* $tmp1082 = *$tmp1081;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
return $tmp1082;

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
// line 333
frost$core$Bit* $tmp1083 = &param1->requiresTypeInference;
frost$core$Bit $tmp1084 = *$tmp1083;
frost$core$Bit $tmp1085 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1084);
bool $tmp1086 = $tmp1085.value;
if ($tmp1086) goto block1; else goto block2;
block1:;
// line 334
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// line 336
frost$collections$Array* $tmp1087 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$MethodDecl** $tmp1088 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1089 = *$tmp1088;
frost$collections$Array** $tmp1090 = &$tmp1089->genericParameters;
frost$collections$Array* $tmp1091 = *$tmp1090;
frost$core$Method* $tmp1093 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp1093, ((frost$core$Int8*) org$frostlang$frostc$expression$Call$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type), ((frost$core$Immutable*) NULL));
ITable* $tmp1094 = ((frost$collections$CollectionView*) $tmp1091)->$class->itable;
while ($tmp1094->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1094 = $tmp1094->next;
}
$fn1096 $tmp1095 = $tmp1094->methods[8];
frost$collections$Array* $tmp1097 = $tmp1095(((frost$collections$CollectionView*) $tmp1091), ((frost$core$MutableMethod*) $tmp1093));
frost$collections$Array$init$frost$collections$ListView$LTfrost$collections$Array$T$GT($tmp1087, ((frost$collections$ListView*) $tmp1097));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
frost$collections$Array* $tmp1098 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
*(&local0) = $tmp1087;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
// line 337
frost$core$Int64 $tmp1099 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl** $tmp1100 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1101 = *$tmp1100;
frost$collections$Array** $tmp1102 = &$tmp1101->parameters;
frost$collections$Array* $tmp1103 = *$tmp1102;
ITable* $tmp1104 = ((frost$collections$CollectionView*) $tmp1103)->$class->itable;
while ($tmp1104->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1104 = $tmp1104->next;
}
$fn1106 $tmp1105 = $tmp1104->methods[0];
frost$core$Int64 $tmp1107 = $tmp1105(((frost$collections$CollectionView*) $tmp1103));
frost$core$Bit $tmp1108 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1109 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1099, $tmp1107, $tmp1108);
frost$core$Int64 $tmp1110 = $tmp1109.min;
*(&local1) = $tmp1110;
frost$core$Int64 $tmp1111 = $tmp1109.max;
frost$core$Bit $tmp1112 = $tmp1109.inclusive;
bool $tmp1113 = $tmp1112.value;
frost$core$Int64 $tmp1114 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1115 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1114);
if ($tmp1113) goto block6; else goto block7;
block6:;
int64_t $tmp1116 = $tmp1110.value;
int64_t $tmp1117 = $tmp1111.value;
bool $tmp1118 = $tmp1116 <= $tmp1117;
frost$core$Bit $tmp1119 = (frost$core$Bit) {$tmp1118};
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block3; else goto block4;
block7:;
int64_t $tmp1121 = $tmp1110.value;
int64_t $tmp1122 = $tmp1111.value;
bool $tmp1123 = $tmp1121 < $tmp1122;
frost$core$Bit $tmp1124 = (frost$core$Bit) {$tmp1123};
bool $tmp1125 = $tmp1124.value;
if ($tmp1125) goto block3; else goto block4;
block3:;
// line 338
frost$core$Int64 $tmp1126 = *(&local1);
org$frostlang$frostc$Type* $tmp1127 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp1126);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
org$frostlang$frostc$Type* $tmp1128 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
*(&local2) = $tmp1127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
// line 339
org$frostlang$frostc$MethodDecl** $tmp1129 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1130 = *$tmp1129;
org$frostlang$frostc$Type* $tmp1131 = *(&local2);
frost$collections$ListView* $tmp1132 = org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q($tmp1130, $tmp1131);
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
frost$collections$ListView* $tmp1133 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
*(&local3) = $tmp1132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// line 340
frost$collections$ListView* $tmp1134 = *(&local3);
frost$core$Bit $tmp1135 = frost$core$Bit$init$builtin_bit($tmp1134 != NULL);
bool $tmp1136 = $tmp1135.value;
if ($tmp1136) goto block8; else goto block9;
block8:;
// line 341
frost$collections$ListView* $tmp1137 = *(&local3);
ITable* $tmp1138 = ((frost$collections$Iterable*) $tmp1137)->$class->itable;
while ($tmp1138->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1138 = $tmp1138->next;
}
$fn1140 $tmp1139 = $tmp1138->methods[0];
frost$collections$Iterator* $tmp1141 = $tmp1139(((frost$collections$Iterable*) $tmp1137));
goto block10;
block10:;
ITable* $tmp1142 = $tmp1141->$class->itable;
while ($tmp1142->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1142 = $tmp1142->next;
}
$fn1144 $tmp1143 = $tmp1142->methods[0];
frost$core$Bit $tmp1145 = $tmp1143($tmp1141);
bool $tmp1146 = $tmp1145.value;
if ($tmp1146) goto block12; else goto block11;
block11:;
*(&local4) = ((frost$collections$ListView*) NULL);
ITable* $tmp1147 = $tmp1141->$class->itable;
while ($tmp1147->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1147 = $tmp1147->next;
}
$fn1149 $tmp1148 = $tmp1147->methods[1];
frost$core$Object* $tmp1150 = $tmp1148($tmp1141);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1150)));
frost$collections$ListView* $tmp1151 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
*(&local4) = ((frost$collections$ListView*) $tmp1150);
// line 342
frost$core$Int64 $tmp1152 = *(&local1);
ITable* $tmp1153 = param2->$class->itable;
while ($tmp1153->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1153 = $tmp1153->next;
}
$fn1155 $tmp1154 = $tmp1153->methods[0];
frost$core$Object* $tmp1156 = $tmp1154(param2, $tmp1152);
org$frostlang$frostc$Type* $tmp1157 = *(&local2);
org$frostlang$frostc$Pair* $tmp1158 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1156), $tmp1157);
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
org$frostlang$frostc$Pair* $tmp1159 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
*(&local5) = $tmp1158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
frost$core$Frost$unref$frost$core$Object$Q($tmp1156);
// line 343
org$frostlang$frostc$Pair* $tmp1160 = *(&local5);
frost$core$Bit $tmp1161 = frost$core$Bit$init$builtin_bit($tmp1160 == NULL);
bool $tmp1162 = $tmp1161.value;
if ($tmp1162) goto block13; else goto block14;
block13:;
// line 344
frost$core$Int64 $tmp1163 = *(&local1);
ITable* $tmp1164 = param2->$class->itable;
while ($tmp1164->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1164 = $tmp1164->next;
}
$fn1166 $tmp1165 = $tmp1164->methods[0];
frost$core$Object* $tmp1167 = $tmp1165(param2, $tmp1163);
frost$core$String* $tmp1168 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1169, ((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1167)));
frost$core$String* $tmp1170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1168, &$s1171);
org$frostlang$frostc$Type* $tmp1172 = *(&local2);
frost$core$String* $tmp1173 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1170, ((frost$core$Object*) $tmp1172));
frost$core$String* $tmp1174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1173, &$s1175);
frost$io$Console$printLine$frost$core$String($tmp1174);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$core$Frost$unref$frost$core$Object$Q($tmp1167);
// line 345
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Pair* $tmp1176 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1150);
frost$collections$ListView* $tmp1177 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
frost$collections$ListView* $tmp1178 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local3) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Type* $tmp1179 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1180 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
*(&local0) = ((frost$collections$Array*) NULL);
return param1;
block14:;
// line 347
org$frostlang$frostc$MethodDecl** $tmp1181 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1182 = *$tmp1181;
frost$collections$Array** $tmp1183 = &$tmp1182->parameters;
frost$collections$Array* $tmp1184 = *$tmp1183;
frost$core$Int64 $tmp1185 = *(&local1);
frost$core$Object* $tmp1186 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1184, $tmp1185);
org$frostlang$frostc$Type** $tmp1187 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1186)->type;
org$frostlang$frostc$Type* $tmp1188 = *$tmp1187;
frost$collections$ListView* $tmp1189 = *(&local4);
org$frostlang$frostc$Type* $tmp1190 = org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type($tmp1188, $tmp1189);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
org$frostlang$frostc$Type* $tmp1191 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
*(&local6) = $tmp1190;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$Frost$unref$frost$core$Object$Q($tmp1186);
// line 348
org$frostlang$frostc$Type* $tmp1192 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp1193 = &$tmp1192->typeKind;
org$frostlang$frostc$Type$Kind $tmp1194 = *$tmp1193;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1195;
$tmp1195 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1195->value = $tmp1194;
frost$core$Int64 $tmp1196 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp1197 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1196);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1198;
$tmp1198 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1198->value = $tmp1197;
ITable* $tmp1199 = ((frost$core$Equatable*) $tmp1195)->$class->itable;
while ($tmp1199->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1199 = $tmp1199->next;
}
$fn1201 $tmp1200 = $tmp1199->methods[0];
frost$core$Bit $tmp1202 = $tmp1200(((frost$core$Equatable*) $tmp1195), ((frost$core$Equatable*) $tmp1198));
bool $tmp1203 = $tmp1202.value;
if ($tmp1203) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp1204 = (frost$core$Int64) {348};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1205, $tmp1204);
abort(); // unreachable
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1198)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1195)));
// line 349
frost$core$Int64 $tmp1206 = (frost$core$Int64) {0};
*(&local7) = $tmp1206;
// line 350
goto block17;
block17:;
org$frostlang$frostc$Type* $tmp1207 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
org$frostlang$frostc$MethodDecl** $tmp1208 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1209 = *$tmp1208;
frost$collections$Array** $tmp1210 = &$tmp1209->genericParameters;
frost$collections$Array* $tmp1211 = *$tmp1210;
frost$core$Int64 $tmp1212 = *(&local1);
frost$core$Object* $tmp1213 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1211, $tmp1212);
org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodDecl$GenericParameter($tmp1207, ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1213));
org$frostlang$frostc$Type* $tmp1214 = *(&local6);
ITable* $tmp1215 = ((frost$core$Equatable*) $tmp1207)->$class->itable;
while ($tmp1215->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1215 = $tmp1215->next;
}
$fn1217 $tmp1216 = $tmp1215->methods[1];
frost$core$Bit $tmp1218 = $tmp1216(((frost$core$Equatable*) $tmp1207), ((frost$core$Equatable*) $tmp1214));
bool $tmp1219 = $tmp1218.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1213);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
if ($tmp1219) goto block18; else goto block19;
block18:;
// line 351
frost$core$Int64 $tmp1220 = *(&local7);
frost$core$Int64 $tmp1221 = (frost$core$Int64) {1};
int64_t $tmp1222 = $tmp1220.value;
int64_t $tmp1223 = $tmp1221.value;
int64_t $tmp1224 = $tmp1222 + $tmp1223;
frost$core$Int64 $tmp1225 = (frost$core$Int64) {$tmp1224};
*(&local7) = $tmp1225;
goto block17;
block19:;
// line 353
frost$collections$Array* $tmp1226 = *(&local0);
frost$core$Int64 $tmp1227 = *(&local7);
frost$collections$Array* $tmp1228 = *(&local0);
frost$core$Int64 $tmp1229 = *(&local7);
frost$core$Object* $tmp1230 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1228, $tmp1229);
org$frostlang$frostc$Pair* $tmp1231 = *(&local5);
frost$core$Object** $tmp1232 = &$tmp1231->first;
frost$core$Object* $tmp1233 = *$tmp1232;
frost$collections$ListView* $tmp1234 = *(&local4);
org$frostlang$frostc$Type* $tmp1235 = org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1233), $tmp1234);
org$frostlang$frostc$Type* $tmp1236 = org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1230), param0, $tmp1235);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp1226, $tmp1227, ((frost$core$Object*) $tmp1236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
frost$core$Frost$unref$frost$core$Object$Q($tmp1230);
org$frostlang$frostc$Type* $tmp1237 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp1238 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1150);
frost$collections$ListView* $tmp1239 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
*(&local4) = ((frost$collections$ListView*) NULL);
goto block10;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
goto block9;
block9:;
frost$collections$ListView* $tmp1240 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1240));
*(&local3) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Type* $tmp1241 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block5;
block5:;
frost$core$Int64 $tmp1242 = *(&local1);
int64_t $tmp1243 = $tmp1111.value;
int64_t $tmp1244 = $tmp1242.value;
int64_t $tmp1245 = $tmp1243 - $tmp1244;
frost$core$Int64 $tmp1246 = (frost$core$Int64) {$tmp1245};
frost$core$UInt64 $tmp1247 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1246);
if ($tmp1113) goto block21; else goto block22;
block21:;
uint64_t $tmp1248 = $tmp1247.value;
uint64_t $tmp1249 = $tmp1115.value;
bool $tmp1250 = $tmp1248 >= $tmp1249;
frost$core$Bit $tmp1251 = (frost$core$Bit) {$tmp1250};
bool $tmp1252 = $tmp1251.value;
if ($tmp1252) goto block20; else goto block4;
block22:;
uint64_t $tmp1253 = $tmp1247.value;
uint64_t $tmp1254 = $tmp1115.value;
bool $tmp1255 = $tmp1253 > $tmp1254;
frost$core$Bit $tmp1256 = (frost$core$Bit) {$tmp1255};
bool $tmp1257 = $tmp1256.value;
if ($tmp1257) goto block20; else goto block4;
block20:;
int64_t $tmp1258 = $tmp1242.value;
int64_t $tmp1259 = $tmp1114.value;
int64_t $tmp1260 = $tmp1258 + $tmp1259;
frost$core$Int64 $tmp1261 = (frost$core$Int64) {$tmp1260};
*(&local1) = $tmp1261;
goto block3;
block4:;
// line 358
org$frostlang$frostc$MethodRef* $tmp1262 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type** $tmp1263 = &param1->target;
org$frostlang$frostc$Type* $tmp1264 = *$tmp1263;
org$frostlang$frostc$MethodDecl** $tmp1265 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1266 = *$tmp1265;
frost$collections$Array* $tmp1267 = *(&local0);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1262, param0, $tmp1264, $tmp1266, ((frost$collections$ListView*) $tmp1267));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$collections$Array* $tmp1268 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1268));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1262;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3, frost$collections$ListView* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

// line 365
org$frostlang$frostc$Pair* $tmp1269 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, param2, param3, ((frost$collections$ListView*) NULL), param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
return $tmp1269;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3, frost$collections$ListView* param4, frost$collections$ListView* param5, org$frostlang$frostc$Compiler$TypeContext* param6) {

org$frostlang$frostc$Pair* local0 = NULL;
frost$core$Bit local1;
frost$core$Int64 local2;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$MethodDecl* local4 = NULL;
org$frostlang$frostc$MethodRef* local5 = NULL;
org$frostlang$frostc$Type* local6 = NULL;
frost$core$Bit local7;
frost$core$Int64 local8;
frost$core$Int64 local9;
org$frostlang$frostc$Pair* local10 = NULL;
frost$core$Bit local11;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$Pair* local13 = NULL;
// line 373
ITable* $tmp1270 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1270->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1270 = $tmp1270->next;
}
$fn1272 $tmp1271 = $tmp1270->methods[0];
frost$core$Int64 $tmp1273 = $tmp1271(((frost$collections$CollectionView*) param3));
frost$core$Int64 $tmp1274 = (frost$core$Int64) {0};
frost$core$Bit $tmp1275 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1273, $tmp1274);
bool $tmp1276 = $tmp1275.value;
if ($tmp1276) goto block7; else goto block8;
block7:;
// line 374
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block8:;
// line 376
frost$core$Int64 $tmp1277 = (frost$core$Int64) {9223372036854775807};
*(&local2) = $tmp1277;
// line 377
frost$collections$Array* $tmp1278 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1278);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
frost$collections$Array* $tmp1279 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1279));
*(&local3) = $tmp1278;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
// line 378
ITable* $tmp1280 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp1280->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1280 = $tmp1280->next;
}
$fn1282 $tmp1281 = $tmp1280->methods[0];
frost$collections$Iterator* $tmp1283 = $tmp1281(((frost$collections$Iterable*) param3));
goto block9;
block9:;
ITable* $tmp1284 = $tmp1283->$class->itable;
while ($tmp1284->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1284 = $tmp1284->next;
}
$fn1286 $tmp1285 = $tmp1284->methods[0];
frost$core$Bit $tmp1287 = $tmp1285($tmp1283);
bool $tmp1288 = $tmp1287.value;
if ($tmp1288) goto block11; else goto block10;
block10:;
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1289 = $tmp1283->$class->itable;
while ($tmp1289->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1289 = $tmp1289->next;
}
$fn1291 $tmp1290 = $tmp1289->methods[1];
frost$core$Object* $tmp1292 = $tmp1290($tmp1283);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1292)));
org$frostlang$frostc$MethodDecl* $tmp1293 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1293));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) $tmp1292);
// line 379
org$frostlang$frostc$MethodDecl* $tmp1294 = *(&local4);
frost$collections$Array** $tmp1295 = &$tmp1294->parameters;
frost$collections$Array* $tmp1296 = *$tmp1295;
ITable* $tmp1297 = ((frost$collections$CollectionView*) $tmp1296)->$class->itable;
while ($tmp1297->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1297 = $tmp1297->next;
}
$fn1299 $tmp1298 = $tmp1297->methods[0];
frost$core$Int64 $tmp1300 = $tmp1298(((frost$collections$CollectionView*) $tmp1296));
ITable* $tmp1301 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp1301->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1301 = $tmp1301->next;
}
$fn1303 $tmp1302 = $tmp1301->methods[0];
frost$core$Int64 $tmp1304 = $tmp1302(((frost$collections$CollectionView*) param5));
int64_t $tmp1305 = $tmp1300.value;
int64_t $tmp1306 = $tmp1304.value;
bool $tmp1307 = $tmp1305 != $tmp1306;
frost$core$Bit $tmp1308 = (frost$core$Bit) {$tmp1307};
bool $tmp1309 = $tmp1308.value;
if ($tmp1309) goto block12; else goto block13;
block12:;
// line 380
frost$core$Frost$unref$frost$core$Object$Q($tmp1292);
org$frostlang$frostc$MethodDecl* $tmp1310 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block13:;
// line 382
org$frostlang$frostc$MethodDecl* $tmp1311 = *(&local4);
frost$core$Bit $tmp1312 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp1311);
frost$core$Bit $tmp1313 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1312);
bool $tmp1314 = $tmp1313.value;
if ($tmp1314) goto block14; else goto block15;
block14:;
// line 383
frost$core$Frost$unref$frost$core$Object$Q($tmp1292);
org$frostlang$frostc$MethodDecl* $tmp1315 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block15:;
// line 385
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
// line 386
frost$core$Bit $tmp1316 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp1317 = $tmp1316.value;
if ($tmp1317) goto block16; else goto block18;
block16:;
// line 387
$fn1319 $tmp1318 = ($fn1319) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1320 = $tmp1318(param2);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
org$frostlang$frostc$Type* $tmp1321 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
*(&local6) = $tmp1320;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
// line 388
org$frostlang$frostc$Type* $tmp1322 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp1323 = &$tmp1322->typeKind;
org$frostlang$frostc$Type$Kind $tmp1324 = *$tmp1323;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1325;
$tmp1325 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1325->value = $tmp1324;
frost$core$Int64 $tmp1326 = (frost$core$Int64) {12};
org$frostlang$frostc$Type$Kind $tmp1327 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1326);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1328;
$tmp1328 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1328->value = $tmp1327;
ITable* $tmp1329 = ((frost$core$Equatable*) $tmp1325)->$class->itable;
while ($tmp1329->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1329 = $tmp1329->next;
}
$fn1331 $tmp1330 = $tmp1329->methods[0];
frost$core$Bit $tmp1332 = $tmp1330(((frost$core$Equatable*) $tmp1325), ((frost$core$Equatable*) $tmp1328));
bool $tmp1333 = $tmp1332.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1328)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1325)));
if ($tmp1333) goto block19; else goto block20;
block19:;
// line 389
org$frostlang$frostc$Type* $tmp1334 = *(&local6);
frost$core$Weak** $tmp1335 = &$tmp1334->genericMethodParameter;
frost$core$Weak* $tmp1336 = *$tmp1335;
frost$core$Object* $tmp1337 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1336);
org$frostlang$frostc$Type** $tmp1338 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1337)->bound;
org$frostlang$frostc$Type* $tmp1339 = *$tmp1338;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1339));
org$frostlang$frostc$Type* $tmp1340 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
*(&local6) = $tmp1339;
frost$core$Frost$unref$frost$core$Object$Q($tmp1337);
goto block20;
block20:;
// line 391
org$frostlang$frostc$MethodRef* $tmp1341 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp1342 = *(&local6);
org$frostlang$frostc$MethodDecl* $tmp1343 = *(&local4);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1341, param0, $tmp1342, $tmp1343, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
org$frostlang$frostc$MethodRef* $tmp1344 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local5) = $tmp1341;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
org$frostlang$frostc$Type* $tmp1345 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
goto block17;
block18:;
// line 393
org$frostlang$frostc$MethodDecl* $tmp1346 = *(&local4);
org$frostlang$frostc$Annotations** $tmp1347 = &$tmp1346->annotations;
org$frostlang$frostc$Annotations* $tmp1348 = *$tmp1347;
frost$core$Bit $tmp1349 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1348);
bool $tmp1350 = $tmp1349.value;
if ($tmp1350) goto block23; else goto block24;
block23:;
*(&local7) = $tmp1349;
goto block25;
block24:;
org$frostlang$frostc$MethodDecl* $tmp1351 = *(&local4);
org$frostlang$frostc$MethodDecl$Kind* $tmp1352 = &$tmp1351->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1353 = *$tmp1352;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1354;
$tmp1354 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1354->value = $tmp1353;
frost$core$Int64 $tmp1355 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1356 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1355);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1357;
$tmp1357 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1357->value = $tmp1356;
ITable* $tmp1358 = ((frost$core$Equatable*) $tmp1354)->$class->itable;
while ($tmp1358->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1358 = $tmp1358->next;
}
$fn1360 $tmp1359 = $tmp1358->methods[0];
frost$core$Bit $tmp1361 = $tmp1359(((frost$core$Equatable*) $tmp1354), ((frost$core$Equatable*) $tmp1357));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1357)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1354)));
*(&local7) = $tmp1361;
goto block25;
block25:;
frost$core$Bit $tmp1362 = *(&local7);
bool $tmp1363 = $tmp1362.value;
if ($tmp1363) goto block21; else goto block26;
block21:;
// line 394
org$frostlang$frostc$MethodRef* $tmp1364 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$MethodDecl* $tmp1365 = *(&local4);
frost$core$Weak** $tmp1366 = &$tmp1365->owner;
frost$core$Weak* $tmp1367 = *$tmp1366;
frost$core$Object* $tmp1368 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1367);
org$frostlang$frostc$Type** $tmp1369 = &((org$frostlang$frostc$ClassDecl*) $tmp1368)->type;
org$frostlang$frostc$Type* $tmp1370 = *$tmp1369;
org$frostlang$frostc$MethodDecl* $tmp1371 = *(&local4);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1364, param0, $tmp1370, $tmp1371, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
org$frostlang$frostc$MethodRef* $tmp1372 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
*(&local5) = $tmp1364;
frost$core$Frost$unref$frost$core$Object$Q($tmp1368);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
goto block22;
block26:;
// line 1
// line 397
org$frostlang$frostc$MethodRef* $tmp1373 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
frost$collections$Stack** $tmp1374 = &param0->currentClass;
frost$collections$Stack* $tmp1375 = *$tmp1374;
frost$core$Int64 $tmp1376 = (frost$core$Int64) {0};
frost$core$Object* $tmp1377 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1375, $tmp1376);
org$frostlang$frostc$Type** $tmp1378 = &((org$frostlang$frostc$ClassDecl*) $tmp1377)->type;
org$frostlang$frostc$Type* $tmp1379 = *$tmp1378;
org$frostlang$frostc$MethodDecl* $tmp1380 = *(&local4);
frost$core$Weak** $tmp1381 = &$tmp1380->owner;
frost$core$Weak* $tmp1382 = *$tmp1381;
frost$core$Object* $tmp1383 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1382);
org$frostlang$frostc$Type* $tmp1384 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp1379, ((org$frostlang$frostc$ClassDecl*) $tmp1383));
org$frostlang$frostc$MethodDecl* $tmp1385 = *(&local4);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1373, param0, $tmp1384, $tmp1385, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
org$frostlang$frostc$MethodRef* $tmp1386 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
*(&local5) = $tmp1373;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
frost$core$Frost$unref$frost$core$Object$Q($tmp1383);
frost$core$Frost$unref$frost$core$Object$Q($tmp1377);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
goto block22;
block22:;
goto block17;
block17:;
// line 400
org$frostlang$frostc$MethodRef* $tmp1387 = *(&local5);
org$frostlang$frostc$MethodRef* $tmp1388 = org$frostlang$frostc$expression$Call$performTypeInference$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$MethodRef$Q(param0, $tmp1387, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
org$frostlang$frostc$MethodRef* $tmp1389 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local5) = $tmp1388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
// line 401
frost$core$Int64 $tmp1390 = (frost$core$Int64) {0};
*(&local8) = $tmp1390;
// line 402
frost$core$Int64 $tmp1391 = (frost$core$Int64) {0};
ITable* $tmp1392 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp1392->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1392 = $tmp1392->next;
}
$fn1394 $tmp1393 = $tmp1392->methods[0];
frost$core$Int64 $tmp1395 = $tmp1393(((frost$collections$CollectionView*) param5));
frost$core$Bit $tmp1396 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1397 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1391, $tmp1395, $tmp1396);
frost$core$Int64 $tmp1398 = $tmp1397.min;
*(&local9) = $tmp1398;
frost$core$Int64 $tmp1399 = $tmp1397.max;
frost$core$Bit $tmp1400 = $tmp1397.inclusive;
bool $tmp1401 = $tmp1400.value;
frost$core$Int64 $tmp1402 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1403 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1402);
if ($tmp1401) goto block30; else goto block31;
block30:;
int64_t $tmp1404 = $tmp1398.value;
int64_t $tmp1405 = $tmp1399.value;
bool $tmp1406 = $tmp1404 <= $tmp1405;
frost$core$Bit $tmp1407 = (frost$core$Bit) {$tmp1406};
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block27; else goto block28;
block31:;
int64_t $tmp1409 = $tmp1398.value;
int64_t $tmp1410 = $tmp1399.value;
bool $tmp1411 = $tmp1409 < $tmp1410;
frost$core$Bit $tmp1412 = (frost$core$Bit) {$tmp1411};
bool $tmp1413 = $tmp1412.value;
if ($tmp1413) goto block27; else goto block28;
block27:;
// line 403
frost$core$Int64 $tmp1414 = *(&local9);
ITable* $tmp1415 = param5->$class->itable;
while ($tmp1415->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1415 = $tmp1415->next;
}
$fn1417 $tmp1416 = $tmp1415->methods[0];
frost$core$Object* $tmp1418 = $tmp1416(param5, $tmp1414);
org$frostlang$frostc$MethodRef* $tmp1419 = *(&local5);
frost$core$Int64 $tmp1420 = *(&local9);
org$frostlang$frostc$Type* $tmp1421 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1419, $tmp1420);
org$frostlang$frostc$Pair* $tmp1422 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1418), $tmp1421);
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
org$frostlang$frostc$Pair* $tmp1423 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local10) = $tmp1422;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
frost$core$Frost$unref$frost$core$Object$Q($tmp1418);
// line 404
org$frostlang$frostc$Pair* $tmp1424 = *(&local10);
frost$core$Bit $tmp1425 = frost$core$Bit$init$builtin_bit($tmp1424 == NULL);
bool $tmp1426 = $tmp1425.value;
if ($tmp1426) goto block32; else goto block33;
block32:;
// line 405
org$frostlang$frostc$Pair* $tmp1427 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp1428 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1292);
org$frostlang$frostc$MethodDecl* $tmp1429 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block33:;
// line 407
frost$core$Int64 $tmp1430 = *(&local8);
org$frostlang$frostc$Pair* $tmp1431 = *(&local10);
frost$core$Object** $tmp1432 = &$tmp1431->second;
frost$core$Object* $tmp1433 = *$tmp1432;
int64_t $tmp1434 = $tmp1430.value;
int64_t $tmp1435 = ((frost$core$Int64$wrapper*) $tmp1433)->value.value;
int64_t $tmp1436 = $tmp1434 + $tmp1435;
frost$core$Int64 $tmp1437 = (frost$core$Int64) {$tmp1436};
*(&local8) = $tmp1437;
org$frostlang$frostc$Pair* $tmp1438 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1438));
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
goto block29;
block29:;
frost$core$Int64 $tmp1439 = *(&local9);
int64_t $tmp1440 = $tmp1399.value;
int64_t $tmp1441 = $tmp1439.value;
int64_t $tmp1442 = $tmp1440 - $tmp1441;
frost$core$Int64 $tmp1443 = (frost$core$Int64) {$tmp1442};
frost$core$UInt64 $tmp1444 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1443);
if ($tmp1401) goto block35; else goto block36;
block35:;
uint64_t $tmp1445 = $tmp1444.value;
uint64_t $tmp1446 = $tmp1403.value;
bool $tmp1447 = $tmp1445 >= $tmp1446;
frost$core$Bit $tmp1448 = (frost$core$Bit) {$tmp1447};
bool $tmp1449 = $tmp1448.value;
if ($tmp1449) goto block34; else goto block28;
block36:;
uint64_t $tmp1450 = $tmp1444.value;
uint64_t $tmp1451 = $tmp1403.value;
bool $tmp1452 = $tmp1450 > $tmp1451;
frost$core$Bit $tmp1453 = (frost$core$Bit) {$tmp1452};
bool $tmp1454 = $tmp1453.value;
if ($tmp1454) goto block34; else goto block28;
block34:;
int64_t $tmp1455 = $tmp1439.value;
int64_t $tmp1456 = $tmp1402.value;
int64_t $tmp1457 = $tmp1455 + $tmp1456;
frost$core$Int64 $tmp1458 = (frost$core$Int64) {$tmp1457};
*(&local9) = $tmp1458;
goto block27;
block28:;
// line 409
frost$core$Int64* $tmp1459 = &param6->$rawValue;
frost$core$Int64 $tmp1460 = *$tmp1459;
frost$core$Int64 $tmp1461 = (frost$core$Int64) {2};
frost$core$Bit $tmp1462 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1460, $tmp1461);
bool $tmp1463 = $tmp1462.value;
if ($tmp1463) goto block38; else goto block39;
block38:;
// line 411
org$frostlang$frostc$MethodDecl* $tmp1464 = *(&local4);
org$frostlang$frostc$Type** $tmp1465 = &$tmp1464->returnType;
org$frostlang$frostc$Type* $tmp1466 = *$tmp1465;
org$frostlang$frostc$Type* $tmp1467 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1468 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1466, $tmp1467);
bool $tmp1469 = $tmp1468.value;
if ($tmp1469) goto block42; else goto block43;
block42:;
*(&local11) = $tmp1468;
goto block44;
block43:;
org$frostlang$frostc$MethodRef* $tmp1470 = *(&local5);
org$frostlang$frostc$Type* $tmp1471 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type($tmp1470);
frost$core$Bit $tmp1472 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1471);
frost$core$Bit $tmp1473 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1472);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1471));
*(&local11) = $tmp1473;
goto block44;
block44:;
frost$core$Bit $tmp1474 = *(&local11);
bool $tmp1475 = $tmp1474.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
if ($tmp1475) goto block40; else goto block41;
block40:;
// line 412
org$frostlang$frostc$MethodRef* $tmp1476 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1292);
org$frostlang$frostc$MethodDecl* $tmp1477 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block41:;
goto block37;
block39:;
frost$core$Int64 $tmp1478 = (frost$core$Int64) {3};
frost$core$Bit $tmp1479 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1460, $tmp1478);
bool $tmp1480 = $tmp1479.value;
if ($tmp1480) goto block45; else goto block37;
block45:;
org$frostlang$frostc$Type** $tmp1481 = (org$frostlang$frostc$Type**) (param6->$data + 0);
org$frostlang$frostc$Type* $tmp1482 = *$tmp1481;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1482));
org$frostlang$frostc$Type* $tmp1483 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
*(&local12) = $tmp1482;
frost$core$Bit* $tmp1484 = (frost$core$Bit*) (param6->$data + 8);
frost$core$Bit $tmp1485 = *$tmp1484;
// line 416
org$frostlang$frostc$MethodRef* $tmp1486 = *(&local5);
org$frostlang$frostc$Type* $tmp1487 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type($tmp1486);
org$frostlang$frostc$Type* $tmp1488 = *(&local12);
org$frostlang$frostc$Pair* $tmp1489 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, $tmp1487, $tmp1488);
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
org$frostlang$frostc$Pair* $tmp1490 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1490));
*(&local13) = $tmp1489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1489));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1487));
// line 417
org$frostlang$frostc$Pair* $tmp1491 = *(&local13);
frost$core$Bit $tmp1492 = frost$core$Bit$init$builtin_bit($tmp1491 == NULL);
bool $tmp1493 = $tmp1492.value;
if ($tmp1493) goto block46; else goto block47;
block46:;
// line 418
org$frostlang$frostc$Pair* $tmp1494 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1495 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp1496 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1292);
org$frostlang$frostc$MethodDecl* $tmp1497 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block47:;
// line 420
frost$core$Int64 $tmp1498 = *(&local8);
org$frostlang$frostc$Pair* $tmp1499 = *(&local13);
frost$core$Object** $tmp1500 = &$tmp1499->second;
frost$core$Object* $tmp1501 = *$tmp1500;
int64_t $tmp1502 = $tmp1498.value;
int64_t $tmp1503 = ((frost$core$Int64$wrapper*) $tmp1501)->value.value;
int64_t $tmp1504 = $tmp1502 + $tmp1503;
frost$core$Int64 $tmp1505 = (frost$core$Int64) {$tmp1504};
*(&local8) = $tmp1505;
org$frostlang$frostc$Pair* $tmp1506 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1506));
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1507 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block37;
block37:;
// line 423
frost$core$Int64 $tmp1508 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp1509 = *(&local4);
frost$core$Int64 $tmp1510 = org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64($tmp1509);
int64_t $tmp1511 = $tmp1508.value;
int64_t $tmp1512 = $tmp1510.value;
int64_t $tmp1513 = $tmp1511 - $tmp1512;
frost$core$Int64 $tmp1514 = (frost$core$Int64) {$tmp1513};
*(&local8) = $tmp1514;
// line 424
frost$core$Int64 $tmp1515 = *(&local8);
frost$core$Int64 $tmp1516 = *(&local2);
int64_t $tmp1517 = $tmp1515.value;
int64_t $tmp1518 = $tmp1516.value;
bool $tmp1519 = $tmp1517 < $tmp1518;
frost$core$Bit $tmp1520 = (frost$core$Bit) {$tmp1519};
bool $tmp1521 = $tmp1520.value;
if ($tmp1521) goto block48; else goto block49;
block48:;
// line 425
frost$core$Int64 $tmp1522 = *(&local8);
*(&local2) = $tmp1522;
// line 426
frost$collections$Array* $tmp1523 = *(&local3);
frost$collections$Array$clear($tmp1523);
goto block49;
block49:;
// line 428
frost$core$Int64 $tmp1524 = *(&local8);
frost$core$Int64 $tmp1525 = *(&local2);
frost$core$Bit $tmp1526 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1524, $tmp1525);
bool $tmp1527 = $tmp1526.value;
if ($tmp1527) goto block50; else goto block51;
block50:;
// line 429
frost$collections$Array* $tmp1528 = *(&local3);
org$frostlang$frostc$MethodRef* $tmp1529 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp1528, ((frost$core$Object*) $tmp1529));
goto block51;
block51:;
org$frostlang$frostc$MethodRef* $tmp1530 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1530));
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1292);
org$frostlang$frostc$MethodDecl* $tmp1531 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1531));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
// line 432
frost$collections$Array* $tmp1532 = *(&local3);
ITable* $tmp1533 = ((frost$collections$CollectionView*) $tmp1532)->$class->itable;
while ($tmp1533->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1533 = $tmp1533->next;
}
$fn1535 $tmp1534 = $tmp1533->methods[0];
frost$core$Int64 $tmp1536 = $tmp1534(((frost$collections$CollectionView*) $tmp1532));
frost$core$Int64 $tmp1537 = (frost$core$Int64) {0};
frost$core$Bit $tmp1538 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1536, $tmp1537);
bool $tmp1539 = $tmp1538.value;
if ($tmp1539) goto block52; else goto block53;
block52:;
// line 433
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp1540 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
*(&local3) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block53:;
// line 435
org$frostlang$frostc$Pair* $tmp1541 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp1542 = *(&local3);
frost$core$Int64 $tmp1543 = *(&local2);
frost$core$Int64$wrapper* $tmp1544;
$tmp1544 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1544->value = $tmp1543;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1541, ((frost$core$Object*) ((frost$collections$ListView*) $tmp1542)), ((frost$core$Object*) $tmp1544));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1541));
frost$collections$Array* $tmp1545 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1545));
*(&local3) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp1541;
goto block1;
block1:;
org$frostlang$frostc$Pair* $tmp1546 = *(&local0);
frost$core$Bit $tmp1547 = frost$core$Bit$init$builtin_bit($tmp1546 == NULL);
bool $tmp1548 = $tmp1547.value;
if ($tmp1548) goto block2; else goto block3;
block2:;
*(&local1) = $tmp1547;
goto block4;
block3:;
org$frostlang$frostc$Pair* $tmp1549 = *(&local0);
frost$core$Object** $tmp1550 = &$tmp1549->first;
frost$core$Object* $tmp1551 = *$tmp1550;
ITable* $tmp1552 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp1551))->$class->itable;
while ($tmp1552->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1552 = $tmp1552->next;
}
$fn1554 $tmp1553 = $tmp1552->methods[0];
frost$core$Int64 $tmp1555 = $tmp1553(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp1551)));
frost$core$Int64 $tmp1556 = (frost$core$Int64) {0};
int64_t $tmp1557 = $tmp1555.value;
int64_t $tmp1558 = $tmp1556.value;
bool $tmp1559 = $tmp1557 > $tmp1558;
frost$core$Bit $tmp1560 = (frost$core$Bit) {$tmp1559};
*(&local1) = $tmp1560;
goto block4;
block4:;
frost$core$Bit $tmp1561 = *(&local1);
bool $tmp1562 = $tmp1561.value;
if ($tmp1562) goto block5; else goto block6;
block5:;
org$frostlang$frostc$Pair* $tmp1563 = *(&local0);
return $tmp1563;
block6:;
frost$core$Int64 $tmp1564 = (frost$core$Int64) {370};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1565, $tmp1564, &$s1566);
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
// line 441
org$frostlang$frostc$IR** $tmp1567 = &param0->ir;
org$frostlang$frostc$IR* $tmp1568 = *$tmp1567;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1568));
org$frostlang$frostc$IR* $tmp1569 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1569));
*(&local0) = $tmp1568;
// line 442
$fn1571 $tmp1570 = ($fn1571) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1572 = $tmp1570(param2);
org$frostlang$frostc$Type* $tmp1573 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp1572);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
org$frostlang$frostc$Type* $tmp1574 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1574));
*(&local1) = $tmp1573;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1573));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1572));
// line 443
org$frostlang$frostc$Type* $tmp1575 = *(&local1);
frost$core$Bit $tmp1576 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp1575);
frost$core$Bit $tmp1577 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1576);
bool $tmp1578 = $tmp1577.value;
if ($tmp1578) goto block1; else goto block2;
block1:;
// line 444
org$frostlang$frostc$Type* $tmp1579 = *(&local1);
frost$core$String* $tmp1580 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1581, ((frost$core$Object*) $tmp1579));
frost$core$String* $tmp1582 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1580, &$s1583);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1582);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1582));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1580));
// line 445
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1584 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1584));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1585 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1585));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 447
org$frostlang$frostc$Type* $tmp1586 = *(&local1);
frost$core$Int64 $tmp1587 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1586);
ITable* $tmp1588 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1588->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1588 = $tmp1588->next;
}
$fn1590 $tmp1589 = $tmp1588->methods[0];
frost$core$Int64 $tmp1591 = $tmp1589(((frost$collections$CollectionView*) param3));
int64_t $tmp1592 = $tmp1587.value;
int64_t $tmp1593 = $tmp1591.value;
bool $tmp1594 = $tmp1592 != $tmp1593;
frost$core$Bit $tmp1595 = (frost$core$Bit) {$tmp1594};
bool $tmp1596 = $tmp1595.value;
if ($tmp1596) goto block3; else goto block4;
block3:;
// line 448
org$frostlang$frostc$Type* $tmp1597 = *(&local1);
frost$core$String* $tmp1598 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1599, ((frost$core$Object*) $tmp1597));
frost$core$String* $tmp1600 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1598, &$s1601);
org$frostlang$frostc$Type* $tmp1602 = *(&local1);
frost$core$Int64 $tmp1603 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1602);
frost$core$Int64$wrapper* $tmp1604;
$tmp1604 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1604->value = $tmp1603;
frost$core$String* $tmp1605 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1600, ((frost$core$Object*) $tmp1604));
frost$core$String* $tmp1606 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1605, &$s1607);
org$frostlang$frostc$Type* $tmp1608 = *(&local1);
frost$core$Int64 $tmp1609 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1608);
frost$core$Int64 $tmp1610 = (frost$core$Int64) {1};
frost$core$Bit $tmp1611 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1609, $tmp1610);
frost$core$Bit$wrapper* $tmp1612;
$tmp1612 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1612->value = $tmp1611;
ITable* $tmp1613 = ((frost$core$Formattable*) $tmp1612)->$class->itable;
while ($tmp1613->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp1613 = $tmp1613->next;
}
$fn1615 $tmp1614 = $tmp1613->methods[0];
frost$core$String* $tmp1616 = $tmp1614(((frost$core$Formattable*) $tmp1612), &$s1617);
frost$core$String* $tmp1618 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1619, $tmp1616);
frost$core$String* $tmp1620 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1618, &$s1621);
ITable* $tmp1622 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1622->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1622 = $tmp1622->next;
}
$fn1624 $tmp1623 = $tmp1622->methods[0];
frost$core$Int64 $tmp1625 = $tmp1623(((frost$collections$CollectionView*) param3));
frost$core$Int64$wrapper* $tmp1626;
$tmp1626 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1626->value = $tmp1625;
frost$core$String* $tmp1627 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1620, ((frost$core$Object*) $tmp1626));
frost$core$String* $tmp1628 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1627, &$s1629);
frost$core$String* $tmp1630 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1606, $tmp1628);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1630);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1627));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1626));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp1612)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1605));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1604));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1600));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
// line 450
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1631 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1631));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1632 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1632));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// line 452
frost$collections$Array* $tmp1633 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp1634 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1634->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1634 = $tmp1634->next;
}
$fn1636 $tmp1635 = $tmp1634->methods[0];
frost$core$Int64 $tmp1637 = $tmp1635(((frost$collections$CollectionView*) param3));
frost$collections$Array$init$frost$core$Int64($tmp1633, $tmp1637);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
frost$collections$Array* $tmp1638 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
*(&local2) = $tmp1633;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1633));
// line 453
frost$core$Int64 $tmp1639 = (frost$core$Int64) {0};
ITable* $tmp1640 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1640->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1640 = $tmp1640->next;
}
$fn1642 $tmp1641 = $tmp1640->methods[0];
frost$core$Int64 $tmp1643 = $tmp1641(((frost$collections$CollectionView*) param3));
frost$core$Bit $tmp1644 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1645 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1639, $tmp1643, $tmp1644);
frost$core$Int64 $tmp1646 = $tmp1645.min;
*(&local3) = $tmp1646;
frost$core$Int64 $tmp1647 = $tmp1645.max;
frost$core$Bit $tmp1648 = $tmp1645.inclusive;
bool $tmp1649 = $tmp1648.value;
frost$core$Int64 $tmp1650 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1651 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1650);
if ($tmp1649) goto block8; else goto block9;
block8:;
int64_t $tmp1652 = $tmp1646.value;
int64_t $tmp1653 = $tmp1647.value;
bool $tmp1654 = $tmp1652 <= $tmp1653;
frost$core$Bit $tmp1655 = (frost$core$Bit) {$tmp1654};
bool $tmp1656 = $tmp1655.value;
if ($tmp1656) goto block5; else goto block6;
block9:;
int64_t $tmp1657 = $tmp1646.value;
int64_t $tmp1658 = $tmp1647.value;
bool $tmp1659 = $tmp1657 < $tmp1658;
frost$core$Bit $tmp1660 = (frost$core$Bit) {$tmp1659};
bool $tmp1661 = $tmp1660.value;
if ($tmp1661) goto block5; else goto block6;
block5:;
// line 454
frost$core$Int64 $tmp1662 = *(&local3);
ITable* $tmp1663 = param3->$class->itable;
while ($tmp1663->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1663 = $tmp1663->next;
}
$fn1665 $tmp1664 = $tmp1663->methods[0];
frost$core$Object* $tmp1666 = $tmp1664(param3, $tmp1662);
org$frostlang$frostc$Compiler$TypeContext* $tmp1667 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1668 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1669 = *(&local1);
frost$core$Int64 $tmp1670 = *(&local3);
org$frostlang$frostc$Type* $tmp1671 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1669, $tmp1670);
frost$core$Bit $tmp1672 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp1667, $tmp1668, $tmp1671, $tmp1672);
org$frostlang$frostc$IR$Value* $tmp1673 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1666), $tmp1667);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
org$frostlang$frostc$IR$Value* $tmp1674 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1674));
*(&local4) = $tmp1673;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1667));
frost$core$Frost$unref$frost$core$Object$Q($tmp1666);
// line 456
org$frostlang$frostc$IR$Value* $tmp1675 = *(&local4);
frost$core$Bit $tmp1676 = frost$core$Bit$init$builtin_bit($tmp1675 == NULL);
bool $tmp1677 = $tmp1676.value;
if ($tmp1677) goto block10; else goto block11;
block10:;
// line 457
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1678 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1678));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1679 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1679));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1680 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1680));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1681 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1681));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block11:;
// line 459
frost$collections$Array* $tmp1682 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp1683 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp1682, ((frost$core$Object*) $tmp1683));
org$frostlang$frostc$IR$Value* $tmp1684 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1684));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block7;
block7:;
frost$core$Int64 $tmp1685 = *(&local3);
int64_t $tmp1686 = $tmp1647.value;
int64_t $tmp1687 = $tmp1685.value;
int64_t $tmp1688 = $tmp1686 - $tmp1687;
frost$core$Int64 $tmp1689 = (frost$core$Int64) {$tmp1688};
frost$core$UInt64 $tmp1690 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1689);
if ($tmp1649) goto block13; else goto block14;
block13:;
uint64_t $tmp1691 = $tmp1690.value;
uint64_t $tmp1692 = $tmp1651.value;
bool $tmp1693 = $tmp1691 >= $tmp1692;
frost$core$Bit $tmp1694 = (frost$core$Bit) {$tmp1693};
bool $tmp1695 = $tmp1694.value;
if ($tmp1695) goto block12; else goto block6;
block14:;
uint64_t $tmp1696 = $tmp1690.value;
uint64_t $tmp1697 = $tmp1651.value;
bool $tmp1698 = $tmp1696 > $tmp1697;
frost$core$Bit $tmp1699 = (frost$core$Bit) {$tmp1698};
bool $tmp1700 = $tmp1699.value;
if ($tmp1700) goto block12; else goto block6;
block12:;
int64_t $tmp1701 = $tmp1685.value;
int64_t $tmp1702 = $tmp1650.value;
int64_t $tmp1703 = $tmp1701 + $tmp1702;
frost$core$Int64 $tmp1704 = (frost$core$Int64) {$tmp1703};
*(&local3) = $tmp1704;
goto block5;
block6:;
// line 461
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 462
org$frostlang$frostc$IR* $tmp1705 = *(&local0);
frost$collections$Array** $tmp1706 = &$tmp1705->locals;
frost$collections$Array* $tmp1707 = *$tmp1706;
ITable* $tmp1708 = ((frost$collections$CollectionView*) $tmp1707)->$class->itable;
while ($tmp1708->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1708 = $tmp1708->next;
}
$fn1710 $tmp1709 = $tmp1708->methods[0];
frost$core$Int64 $tmp1711 = $tmp1709(((frost$collections$CollectionView*) $tmp1707));
*(&local6) = $tmp1711;
// line 463
org$frostlang$frostc$Type* $tmp1712 = *(&local1);
org$frostlang$frostc$Type* $tmp1713 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1712);
org$frostlang$frostc$Type* $tmp1714 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp1715 = ((frost$core$Equatable*) $tmp1713)->$class->itable;
while ($tmp1715->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1715 = $tmp1715->next;
}
$fn1717 $tmp1716 = $tmp1715->methods[1];
frost$core$Bit $tmp1718 = $tmp1716(((frost$core$Equatable*) $tmp1713), ((frost$core$Equatable*) $tmp1714));
bool $tmp1719 = $tmp1718.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1713));
if ($tmp1719) goto block15; else goto block17;
block15:;
// line 464
org$frostlang$frostc$IR* $tmp1720 = *(&local0);
frost$collections$Array** $tmp1721 = &$tmp1720->locals;
frost$collections$Array* $tmp1722 = *$tmp1721;
org$frostlang$frostc$Type* $tmp1723 = *(&local1);
org$frostlang$frostc$Type* $tmp1724 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1723);
frost$collections$Array$add$frost$collections$Array$T($tmp1722, ((frost$core$Object*) $tmp1724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1724));
// line 465
org$frostlang$frostc$IR$Value* $tmp1725 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1726 = (frost$core$Int64) {2};
frost$core$Int64 $tmp1727 = *(&local6);
org$frostlang$frostc$Type* $tmp1728 = *(&local1);
org$frostlang$frostc$Type* $tmp1729 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1728);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp1725, $tmp1726, $tmp1727, $tmp1729);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
org$frostlang$frostc$IR$Value* $tmp1730 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
*(&local5) = $tmp1725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1725));
goto block16;
block17:;
// line 1
// line 468
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1731 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block16;
block16:;
// line 470
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
// line 471
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 472
$fn1733 $tmp1732 = ($fn1733) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1734 = $tmp1732(param2);
frost$core$Bit $tmp1735 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1734);
bool $tmp1736 = $tmp1735.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1734));
if ($tmp1736) goto block18; else goto block20;
block18:;
// line 473
org$frostlang$frostc$Type* $tmp1737 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
org$frostlang$frostc$Type* $tmp1738 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1738));
*(&local7) = $tmp1737;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
// line 474
org$frostlang$frostc$Type* $tmp1739 = org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
org$frostlang$frostc$Type* $tmp1740 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1740));
*(&local8) = $tmp1739;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1739));
goto block19;
block20:;
// line 1
// line 477
org$frostlang$frostc$Type* $tmp1741 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
org$frostlang$frostc$Type* $tmp1742 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1742));
*(&local7) = $tmp1741;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1741));
// line 478
org$frostlang$frostc$Type* $tmp1743 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
org$frostlang$frostc$Type* $tmp1744 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1744));
*(&local8) = $tmp1743;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1743));
goto block19;
block19:;
// line 480
org$frostlang$frostc$Type* $tmp1745 = *(&local7);
org$frostlang$frostc$ClassDecl* $tmp1746 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp1745);
org$frostlang$frostc$SymbolTable* $tmp1747 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp1746);
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
org$frostlang$frostc$SymbolTable* $tmp1748 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1748));
*(&local9) = $tmp1747;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1746));
// line 481
org$frostlang$frostc$SymbolTable* $tmp1749 = *(&local9);
org$frostlang$frostc$Symbol* $tmp1750 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp1749, &$s1751);
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp1750)));
org$frostlang$frostc$FieldDecl* $tmp1752 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1752));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) $tmp1750);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1750));
// line 482
org$frostlang$frostc$FieldDecl* $tmp1753 = *(&local10);
frost$core$Bit $tmp1754 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp1753);
frost$core$Bit $tmp1755 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1754);
bool $tmp1756 = $tmp1755.value;
if ($tmp1756) goto block21; else goto block22;
block21:;
// line 483
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp1757 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1757));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp1758 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1758));
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp1759 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1759));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1760 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1760));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1761 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1761));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1762 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1762));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1763 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1763));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1764 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1764));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block22:;
// line 485
org$frostlang$frostc$Type* $tmp1765 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp1766 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp1765);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
org$frostlang$frostc$IR$Value* $tmp1767 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1767));
*(&local11) = $tmp1766;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1766));
// line 486
org$frostlang$frostc$IR* $tmp1768 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1769 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1770 = (frost$core$Int64) {11};
org$frostlang$frostc$IR$Value* $tmp1771 = *(&local11);
org$frostlang$frostc$FieldDecl* $tmp1772 = *(&local10);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1769, $tmp1770, param1, $tmp1771, $tmp1772);
$fn1774 $tmp1773 = ($fn1774) $tmp1768->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1775 = $tmp1773($tmp1768, $tmp1769);
*(&local12) = $tmp1775;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1769));
// line 488
org$frostlang$frostc$IR* $tmp1776 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1777 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1778 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp1779 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1780 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1781 = *(&local12);
org$frostlang$frostc$Type* $tmp1782 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp1783 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1782);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1779, $tmp1780, $tmp1781, $tmp1783);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1777, $tmp1778, param1, $tmp1779);
$fn1785 $tmp1784 = ($fn1785) $tmp1776->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1786 = $tmp1784($tmp1776, $tmp1777);
*(&local13) = $tmp1786;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1783));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1779));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1777));
// line 490
org$frostlang$frostc$SymbolTable* $tmp1787 = *(&local9);
org$frostlang$frostc$Symbol* $tmp1788 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp1787, &$s1789);
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp1788)));
org$frostlang$frostc$FieldDecl* $tmp1790 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) $tmp1788);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1788));
// line 491
org$frostlang$frostc$FieldDecl* $tmp1791 = *(&local14);
frost$core$Bit $tmp1792 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp1791);
frost$core$Bit $tmp1793 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1792);
bool $tmp1794 = $tmp1793.value;
if ($tmp1794) goto block23; else goto block24;
block23:;
// line 492
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp1795 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp1796 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp1797 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1797));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp1798 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp1799 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1799));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp1800 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp1801 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1802 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1802));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp1803 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1803));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1804 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1804));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block24:;
// line 494
org$frostlang$frostc$IR* $tmp1805 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1806 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1807 = (frost$core$Int64) {11};
org$frostlang$frostc$IR$Value* $tmp1808 = *(&local11);
org$frostlang$frostc$FieldDecl* $tmp1809 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp1806, $tmp1807, param1, $tmp1808, $tmp1809);
$fn1811 $tmp1810 = ($fn1811) $tmp1805->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1812 = $tmp1810($tmp1805, $tmp1806);
*(&local15) = $tmp1812;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
// line 495
org$frostlang$frostc$IR* $tmp1813 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1814 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1815 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp1816 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1817 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1818 = *(&local15);
org$frostlang$frostc$Type* $tmp1819 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1816, $tmp1817, $tmp1818, $tmp1819);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp1814, $tmp1815, param1, $tmp1816);
$fn1821 $tmp1820 = ($fn1821) $tmp1813->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1822 = $tmp1820($tmp1813, $tmp1814);
*(&local16) = $tmp1822;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1814));
// line 496
org$frostlang$frostc$IR* $tmp1823 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1824 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1825 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp1826 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1827 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1828 = *(&local16);
org$frostlang$frostc$Type* $tmp1829 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1826, $tmp1827, $tmp1828, $tmp1829);
frost$core$Int64 $tmp1830 = (frost$core$Int64) {22};
org$frostlang$frostc$expression$Binary$Operator $tmp1831 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp1830);
org$frostlang$frostc$IR$Value* $tmp1832 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1833 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp1834 = *(&local8);
org$frostlang$frostc$Type* $tmp1835 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp1834);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1832, $tmp1833, $tmp1835);
org$frostlang$frostc$Type* $tmp1836 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp1824, $tmp1825, param1, $tmp1826, $tmp1831, $tmp1832, $tmp1836);
$fn1838 $tmp1837 = ($fn1838) $tmp1823->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1839 = $tmp1837($tmp1823, $tmp1824);
*(&local17) = $tmp1839;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1836));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1832));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1824));
// line 498
org$frostlang$frostc$IR* $tmp1840 = *(&local0);
$fn1842 $tmp1841 = ($fn1842) $tmp1840->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1843 = $tmp1841($tmp1840, &$s1844);
*(&local18) = $tmp1843;
// line 499
org$frostlang$frostc$IR* $tmp1845 = *(&local0);
$fn1847 $tmp1846 = ($fn1847) $tmp1845->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1848 = $tmp1846($tmp1845, &$s1849);
*(&local19) = $tmp1848;
// line 500
org$frostlang$frostc$IR* $tmp1850 = *(&local0);
$fn1852 $tmp1851 = ($fn1852) $tmp1850->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp1853 = $tmp1851($tmp1850, &$s1854);
*(&local20) = $tmp1853;
// line 501
org$frostlang$frostc$IR* $tmp1855 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1856 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1857 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp1858 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1859 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1860 = *(&local17);
org$frostlang$frostc$Type* $tmp1861 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1858, $tmp1859, $tmp1860, $tmp1861);
org$frostlang$frostc$IR$Block$ID $tmp1862 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp1863 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp1856, $tmp1857, param1, $tmp1858, $tmp1862, $tmp1863);
$fn1865 $tmp1864 = ($fn1865) $tmp1855->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1866 = $tmp1864($tmp1855, $tmp1856);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
// line 503
org$frostlang$frostc$IR* $tmp1867 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1868 = *(&local19);
$fn1870 $tmp1869 = ($fn1870) $tmp1867->$class->vtable[4];
$tmp1869($tmp1867, $tmp1868);
// line 504
org$frostlang$frostc$IR$Value* $tmp1871 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1872 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1873 = *(&local13);
org$frostlang$frostc$Type* $tmp1874 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp1875 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1874);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1871, $tmp1872, $tmp1873, $tmp1875);
org$frostlang$frostc$Type* $tmp1876 = *(&local1);
org$frostlang$frostc$Type* $tmp1877 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1876);
org$frostlang$frostc$IR$Value* $tmp1878 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1871, $tmp1877);
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
org$frostlang$frostc$IR$Value* $tmp1879 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1879));
*(&local21) = $tmp1878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1877));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1875));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1874));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1871));
// line 506
org$frostlang$frostc$IR* $tmp1880 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1881 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1882 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp1883 = *(&local21);
org$frostlang$frostc$FixedArray* $tmp1884 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
frost$collections$Array* $tmp1885 = *(&local2);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1884, ((frost$collections$ListView*) $tmp1885));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp1881, $tmp1882, param1, $tmp1883, $tmp1884);
$fn1887 $tmp1886 = ($fn1887) $tmp1880->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1888 = $tmp1886($tmp1880, $tmp1881);
*(&local22) = $tmp1888;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1881));
// line 508
org$frostlang$frostc$IR$Value* $tmp1889 = *(&local5);
frost$core$Bit $tmp1890 = frost$core$Bit$init$builtin_bit($tmp1889 != NULL);
bool $tmp1891 = $tmp1890.value;
if ($tmp1891) goto block25; else goto block26;
block25:;
// line 509
org$frostlang$frostc$IR* $tmp1892 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1893 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1894 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp1895 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1896 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1897 = *(&local22);
org$frostlang$frostc$Type* $tmp1898 = *(&local1);
org$frostlang$frostc$Type* $tmp1899 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1898);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1895, $tmp1896, $tmp1897, $tmp1899);
org$frostlang$frostc$IR$Value* $tmp1900 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp1893, $tmp1894, param1, $tmp1895, $tmp1900);
$fn1902 $tmp1901 = ($fn1902) $tmp1892->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1903 = $tmp1901($tmp1892, $tmp1893);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1899));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
goto block26;
block26:;
// line 512
org$frostlang$frostc$IR* $tmp1904 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1905 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1906 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp1907 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp1905, $tmp1906, param1, $tmp1907);
$fn1909 $tmp1908 = ($fn1909) $tmp1904->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1910 = $tmp1908($tmp1904, $tmp1905);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
// line 513
org$frostlang$frostc$IR* $tmp1911 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp1912 = *(&local18);
$fn1914 $tmp1913 = ($fn1914) $tmp1911->$class->vtable[4];
$tmp1913($tmp1911, $tmp1912);
// line 514
frost$collections$Array* $tmp1915 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1915);
*(&local23) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
frost$collections$Array* $tmp1916 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1916));
*(&local23) = $tmp1915;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1915));
// line 515
frost$collections$Array* $tmp1917 = *(&local23);
org$frostlang$frostc$Type* $tmp1918 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp1917, ((frost$core$Object*) $tmp1918));
// line 516
frost$core$Int64 $tmp1919 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp1920 = *(&local1);
frost$core$Int64 $tmp1921 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1920);
frost$core$Bit $tmp1922 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1923 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1919, $tmp1921, $tmp1922);
frost$core$Int64 $tmp1924 = $tmp1923.min;
*(&local24) = $tmp1924;
frost$core$Int64 $tmp1925 = $tmp1923.max;
frost$core$Bit $tmp1926 = $tmp1923.inclusive;
bool $tmp1927 = $tmp1926.value;
frost$core$Int64 $tmp1928 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1929 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1928);
if ($tmp1927) goto block30; else goto block31;
block30:;
int64_t $tmp1930 = $tmp1924.value;
int64_t $tmp1931 = $tmp1925.value;
bool $tmp1932 = $tmp1930 <= $tmp1931;
frost$core$Bit $tmp1933 = (frost$core$Bit) {$tmp1932};
bool $tmp1934 = $tmp1933.value;
if ($tmp1934) goto block27; else goto block28;
block31:;
int64_t $tmp1935 = $tmp1924.value;
int64_t $tmp1936 = $tmp1925.value;
bool $tmp1937 = $tmp1935 < $tmp1936;
frost$core$Bit $tmp1938 = (frost$core$Bit) {$tmp1937};
bool $tmp1939 = $tmp1938.value;
if ($tmp1939) goto block27; else goto block28;
block27:;
// line 517
frost$collections$Array* $tmp1940 = *(&local23);
org$frostlang$frostc$Type* $tmp1941 = *(&local1);
frost$core$Int64 $tmp1942 = *(&local24);
org$frostlang$frostc$Type* $tmp1943 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1941, $tmp1942);
frost$collections$Array$add$frost$collections$Array$T($tmp1940, ((frost$core$Object*) $tmp1943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1943));
goto block29;
block29:;
frost$core$Int64 $tmp1944 = *(&local24);
int64_t $tmp1945 = $tmp1925.value;
int64_t $tmp1946 = $tmp1944.value;
int64_t $tmp1947 = $tmp1945 - $tmp1946;
frost$core$Int64 $tmp1948 = (frost$core$Int64) {$tmp1947};
frost$core$UInt64 $tmp1949 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1948);
if ($tmp1927) goto block33; else goto block34;
block33:;
uint64_t $tmp1950 = $tmp1949.value;
uint64_t $tmp1951 = $tmp1929.value;
bool $tmp1952 = $tmp1950 >= $tmp1951;
frost$core$Bit $tmp1953 = (frost$core$Bit) {$tmp1952};
bool $tmp1954 = $tmp1953.value;
if ($tmp1954) goto block32; else goto block28;
block34:;
uint64_t $tmp1955 = $tmp1949.value;
uint64_t $tmp1956 = $tmp1929.value;
bool $tmp1957 = $tmp1955 > $tmp1956;
frost$core$Bit $tmp1958 = (frost$core$Bit) {$tmp1957};
bool $tmp1959 = $tmp1958.value;
if ($tmp1959) goto block32; else goto block28;
block32:;
int64_t $tmp1960 = $tmp1944.value;
int64_t $tmp1961 = $tmp1928.value;
int64_t $tmp1962 = $tmp1960 + $tmp1961;
frost$core$Int64 $tmp1963 = (frost$core$Int64) {$tmp1962};
*(&local24) = $tmp1963;
goto block27;
block28:;
// line 519
org$frostlang$frostc$Type* $tmp1964 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp1965 = &$tmp1964->typeKind;
org$frostlang$frostc$Type$Kind $tmp1966 = *$tmp1965;
frost$collections$Array* $tmp1967 = *(&local23);
org$frostlang$frostc$Type* $tmp1968 = *(&local1);
org$frostlang$frostc$Type* $tmp1969 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp1968);
frost$core$Int64 $tmp1970 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp1971 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp1966, ((frost$collections$ListView*) $tmp1967), $tmp1969, $tmp1970);
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
org$frostlang$frostc$Type* $tmp1972 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1972));
*(&local25) = $tmp1971;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1971));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1969));
// line 521
org$frostlang$frostc$IR$Value* $tmp1973 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1974 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1975 = *(&local13);
org$frostlang$frostc$Type* $tmp1976 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp1977 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1976);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1973, $tmp1974, $tmp1975, $tmp1977);
org$frostlang$frostc$Type* $tmp1978 = *(&local25);
org$frostlang$frostc$Type* $tmp1979 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp1978);
org$frostlang$frostc$IR$Value* $tmp1980 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp1973, $tmp1979);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
org$frostlang$frostc$IR$Value* $tmp1981 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1981));
*(&local26) = $tmp1980;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1980));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1979));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1977));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1973));
// line 523
frost$collections$Array* $tmp1982 = *(&local2);
frost$core$Int64 $tmp1983 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp1984 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1985 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1986 = *(&local16);
org$frostlang$frostc$Type* $tmp1987 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1984, $tmp1985, $tmp1986, $tmp1987);
frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T($tmp1982, $tmp1983, ((frost$core$Object*) $tmp1984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1984));
// line 524
org$frostlang$frostc$IR* $tmp1988 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp1989 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1990 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp1991 = *(&local26);
org$frostlang$frostc$FixedArray* $tmp1992 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
frost$collections$Array* $tmp1993 = *(&local2);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1992, ((frost$collections$ListView*) $tmp1993));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp1989, $tmp1990, param1, $tmp1991, $tmp1992);
$fn1995 $tmp1994 = ($fn1995) $tmp1988->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1996 = $tmp1994($tmp1988, $tmp1989);
*(&local27) = $tmp1996;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1989));
// line 526
org$frostlang$frostc$IR$Value* $tmp1997 = *(&local5);
frost$core$Bit $tmp1998 = frost$core$Bit$init$builtin_bit($tmp1997 != NULL);
bool $tmp1999 = $tmp1998.value;
if ($tmp1999) goto block35; else goto block36;
block35:;
// line 527
org$frostlang$frostc$IR* $tmp2000 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2001 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2002 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp2003 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2004 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2005 = *(&local27);
org$frostlang$frostc$Type* $tmp2006 = *(&local1);
org$frostlang$frostc$Type* $tmp2007 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2006);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2003, $tmp2004, $tmp2005, $tmp2007);
org$frostlang$frostc$IR$Value* $tmp2008 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2001, $tmp2002, param1, $tmp2003, $tmp2008);
$fn2010 $tmp2009 = ($fn2010) $tmp2000->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2011 = $tmp2009($tmp2000, $tmp2001);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2007));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2003));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
goto block36;
block36:;
// line 530
org$frostlang$frostc$IR* $tmp2012 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2013 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2014 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2015 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2013, $tmp2014, param1, $tmp2015);
$fn2017 $tmp2016 = ($fn2017) $tmp2012->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2018 = $tmp2016($tmp2012, $tmp2013);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
// line 531
org$frostlang$frostc$IR* $tmp2019 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2020 = *(&local20);
$fn2022 $tmp2021 = ($fn2022) $tmp2019->$class->vtable[4];
$tmp2021($tmp2019, $tmp2020);
// line 532
org$frostlang$frostc$IR$Value* $tmp2023 = *(&local5);
frost$core$Bit $tmp2024 = frost$core$Bit$init$builtin_bit($tmp2023 != NULL);
bool $tmp2025 = $tmp2024.value;
if ($tmp2025) goto block37; else goto block38;
block37:;
// line 533
org$frostlang$frostc$IR* $tmp2026 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2027 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2028 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp2029 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2027, $tmp2028, param1, $tmp2029);
$fn2031 $tmp2030 = ($fn2031) $tmp2026->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2032 = $tmp2030($tmp2026, $tmp2027);
*(&local28) = $tmp2032;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2027));
// line 534
org$frostlang$frostc$IR$Value* $tmp2033 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2034 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2035 = *(&local28);
org$frostlang$frostc$Type* $tmp2036 = *(&local1);
org$frostlang$frostc$Type* $tmp2037 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2036);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2033, $tmp2034, $tmp2035, $tmp2037);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
org$frostlang$frostc$IR$Value* $tmp2038 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
*(&local29) = $tmp2033;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2033));
// line 535
org$frostlang$frostc$Type* $tmp2039 = *(&local1);
org$frostlang$frostc$Type* $tmp2040 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2039);
frost$core$Bit $tmp2041 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2040);
bool $tmp2042 = $tmp2041.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2040));
if ($tmp2042) goto block39; else goto block40;
block39:;
// line 536
frost$collections$Stack** $tmp2043 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2044 = *$tmp2043;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2045 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp2046 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp2047 = *(&local29);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp2045, $tmp2046, $tmp2047);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2044, ((frost$core$Object*) $tmp2045));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2045));
goto block40;
block40:;
// line 538
org$frostlang$frostc$IR$Value* $tmp2048 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp2049 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2048, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
org$frostlang$frostc$IR$Value* $tmp2050 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2051 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2051));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2052 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2052));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2053 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2053));
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$IR$Value* $tmp2054 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2055 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2056 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2056));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2057 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2057));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2058 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2058));
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2059 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2060 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2060));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2061 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2061));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2062 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2063 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2064 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp2049;
block38:;
// line 540
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp2065 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2066 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2067 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$IR$Value* $tmp2068 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2069 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2070 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2070));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2071 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2072 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2073 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2074 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2074));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2075 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2075));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2076 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2076));
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2077 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2078 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$IR* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$MethodDecl* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
frost$core$Bit local5;
org$frostlang$frostc$Type* local6 = NULL;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$MethodDecl* local8 = NULL;
org$frostlang$frostc$FixedArray* local9 = NULL;
org$frostlang$frostc$Type* local10 = NULL;
frost$core$Bit local11;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$IR$Value* local13 = NULL;
org$frostlang$frostc$FixedArray* local14 = NULL;
org$frostlang$frostc$Pair* local15 = NULL;
frost$collections$Array* local16 = NULL;
org$frostlang$frostc$ASTNode* local17 = NULL;
org$frostlang$frostc$Type* local18 = NULL;
frost$core$Int64 local19;
org$frostlang$frostc$IR$Value* local20 = NULL;
org$frostlang$frostc$FixedArray* local21 = NULL;
org$frostlang$frostc$FixedArray* local22 = NULL;
org$frostlang$frostc$Pair* local23 = NULL;
frost$collections$Array* local24 = NULL;
org$frostlang$frostc$ASTNode* local25 = NULL;
org$frostlang$frostc$Type* local26 = NULL;
frost$core$Int64 local27;
org$frostlang$frostc$Type* local28 = NULL;
org$frostlang$frostc$Type* local29 = NULL;
org$frostlang$frostc$ClassDecl* local30 = NULL;
org$frostlang$frostc$Symbol* local31 = NULL;
org$frostlang$frostc$IR$Statement$ID local32;
org$frostlang$frostc$IR$Value* local33 = NULL;
// line 546
frost$collections$Stack** $tmp2079 = &param0->currentClass;
frost$collections$Stack* $tmp2080 = *$tmp2079;
frost$core$Int64 $tmp2081 = (frost$core$Int64) {0};
frost$core$Object* $tmp2082 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2080, $tmp2081);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp2082)));
org$frostlang$frostc$ClassDecl* $tmp2083 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2083));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp2082);
frost$core$Frost$unref$frost$core$Object$Q($tmp2082);
// line 547
org$frostlang$frostc$IR** $tmp2084 = &param0->ir;
org$frostlang$frostc$IR* $tmp2085 = *$tmp2084;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2085));
org$frostlang$frostc$IR* $tmp2086 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2086));
*(&local1) = $tmp2085;
// line 548
frost$core$Int64* $tmp2087 = &param2->$rawValue;
frost$core$Int64 $tmp2088 = *$tmp2087;
frost$core$Int64 $tmp2089 = (frost$core$Int64) {9};
frost$core$Bit $tmp2090 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2088, $tmp2089);
bool $tmp2091 = $tmp2090.value;
if ($tmp2091) goto block2; else goto block3;
block2:;
org$frostlang$frostc$IR$Value** $tmp2092 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2093 = *$tmp2092;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
org$frostlang$frostc$IR$Value* $tmp2094 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
*(&local2) = $tmp2093;
org$frostlang$frostc$MethodDecl** $tmp2095 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp2096 = *$tmp2095;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
org$frostlang$frostc$MethodDecl* $tmp2097 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
*(&local3) = $tmp2096;
// line 550
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
// line 551
org$frostlang$frostc$IR$Value* $tmp2098 = *(&local2);
frost$core$Bit $tmp2099 = frost$core$Bit$init$builtin_bit($tmp2098 != NULL);
bool $tmp2100 = $tmp2099.value;
if ($tmp2100) goto block4; else goto block6;
block4:;
// line 552
org$frostlang$frostc$IR$Value* $tmp2101 = *(&local2);
$fn2103 $tmp2102 = ($fn2103) $tmp2101->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2104 = $tmp2102($tmp2101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
org$frostlang$frostc$Type* $tmp2105 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
*(&local4) = $tmp2104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2104));
goto block5;
block6:;
// line 554
org$frostlang$frostc$MethodDecl* $tmp2106 = *(&local3);
org$frostlang$frostc$Annotations** $tmp2107 = &$tmp2106->annotations;
org$frostlang$frostc$Annotations* $tmp2108 = *$tmp2107;
frost$core$Bit $tmp2109 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2108);
bool $tmp2110 = $tmp2109.value;
if ($tmp2110) goto block9; else goto block10;
block9:;
*(&local5) = $tmp2109;
goto block11;
block10:;
org$frostlang$frostc$MethodDecl* $tmp2111 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind* $tmp2112 = &$tmp2111->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2113 = *$tmp2112;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2114;
$tmp2114 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2114->value = $tmp2113;
frost$core$Int64 $tmp2115 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2116 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2115);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2117;
$tmp2117 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2117->value = $tmp2116;
ITable* $tmp2118 = ((frost$core$Equatable*) $tmp2114)->$class->itable;
while ($tmp2118->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2118 = $tmp2118->next;
}
$fn2120 $tmp2119 = $tmp2118->methods[0];
frost$core$Bit $tmp2121 = $tmp2119(((frost$core$Equatable*) $tmp2114), ((frost$core$Equatable*) $tmp2117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2117)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2114)));
*(&local5) = $tmp2121;
goto block11;
block11:;
frost$core$Bit $tmp2122 = *(&local5);
bool $tmp2123 = $tmp2122.value;
if ($tmp2123) goto block7; else goto block12;
block7:;
// line 555
org$frostlang$frostc$MethodDecl* $tmp2124 = *(&local3);
frost$core$Weak** $tmp2125 = &$tmp2124->owner;
frost$core$Weak* $tmp2126 = *$tmp2125;
frost$core$Object* $tmp2127 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2126);
org$frostlang$frostc$Type** $tmp2128 = &((org$frostlang$frostc$ClassDecl*) $tmp2127)->type;
org$frostlang$frostc$Type* $tmp2129 = *$tmp2128;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2129));
org$frostlang$frostc$Type* $tmp2130 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
*(&local4) = $tmp2129;
frost$core$Frost$unref$frost$core$Object$Q($tmp2127);
goto block8;
block12:;
// line 1
// line 558
org$frostlang$frostc$ClassDecl* $tmp2131 = *(&local0);
org$frostlang$frostc$Type** $tmp2132 = &$tmp2131->type;
org$frostlang$frostc$Type* $tmp2133 = *$tmp2132;
org$frostlang$frostc$MethodDecl* $tmp2134 = *(&local3);
frost$core$Weak** $tmp2135 = &$tmp2134->owner;
frost$core$Weak* $tmp2136 = *$tmp2135;
frost$core$Object* $tmp2137 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2136);
org$frostlang$frostc$Type* $tmp2138 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp2133, ((org$frostlang$frostc$ClassDecl*) $tmp2137));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
org$frostlang$frostc$Type* $tmp2139 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
*(&local6) = $tmp2138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
frost$core$Frost$unref$frost$core$Object$Q($tmp2137);
// line 559
org$frostlang$frostc$Type* $tmp2140 = *(&local6);
frost$core$Bit $tmp2141 = frost$core$Bit$init$builtin_bit($tmp2140 != NULL);
bool $tmp2142 = $tmp2141.value;
if ($tmp2142) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp2143 = (frost$core$Int64) {559};
org$frostlang$frostc$ClassDecl* $tmp2144 = *(&local0);
org$frostlang$frostc$Type** $tmp2145 = &$tmp2144->type;
org$frostlang$frostc$Type* $tmp2146 = *$tmp2145;
frost$core$String* $tmp2147 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2148, ((frost$core$Object*) $tmp2146));
frost$core$String* $tmp2149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2147, &$s2150);
org$frostlang$frostc$MethodDecl* $tmp2151 = *(&local3);
frost$core$Weak** $tmp2152 = &$tmp2151->owner;
frost$core$Weak* $tmp2153 = *$tmp2152;
frost$core$Object* $tmp2154 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2153);
frost$core$String** $tmp2155 = &((org$frostlang$frostc$ClassDecl*) $tmp2154)->name;
frost$core$String* $tmp2156 = *$tmp2155;
frost$core$String* $tmp2157 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2149, $tmp2156);
frost$core$String* $tmp2158 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2157, &$s2159);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2160, $tmp2143, $tmp2158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
frost$core$Frost$unref$frost$core$Object$Q($tmp2154);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2147));
abort(); // unreachable
block13:;
// line 561
org$frostlang$frostc$Type* $tmp2161 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2161));
org$frostlang$frostc$Type* $tmp2162 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
*(&local4) = $tmp2161;
org$frostlang$frostc$Type* $tmp2163 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
goto block8;
block8:;
goto block5;
block5:;
// line 563
org$frostlang$frostc$MethodDecl* $tmp2164 = *(&local3);
frost$core$Bit $tmp2165 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp2164);
frost$core$Bit $tmp2166 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2165);
bool $tmp2167 = $tmp2166.value;
if ($tmp2167) goto block15; else goto block16;
block15:;
// line 564
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2168 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2168));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2169 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2169));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2170 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2170));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2171 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2171));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2172 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block16:;
// line 566
org$frostlang$frostc$IR$Value* $tmp2173 = *(&local2);
org$frostlang$frostc$MethodRef* $tmp2174 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp2175 = *(&local4);
org$frostlang$frostc$MethodDecl* $tmp2176 = *(&local3);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl($tmp2174, param0, $tmp2175, $tmp2176);
org$frostlang$frostc$IR$Value* $tmp2177 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2173, $tmp2174, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2174));
org$frostlang$frostc$Type* $tmp2178 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2178));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2179 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2179));
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2180 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2180));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2181 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2181));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2182 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2182));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2177;
block3:;
frost$core$Int64 $tmp2183 = (frost$core$Int64) {11};
frost$core$Bit $tmp2184 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2088, $tmp2183);
bool $tmp2185 = $tmp2184.value;
if ($tmp2185) goto block17; else goto block18;
block17:;
org$frostlang$frostc$IR$Value** $tmp2186 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2187 = *$tmp2186;
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2187));
org$frostlang$frostc$IR$Value* $tmp2188 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
*(&local7) = $tmp2187;
org$frostlang$frostc$MethodDecl** $tmp2189 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp2190 = *$tmp2189;
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2190));
org$frostlang$frostc$MethodDecl* $tmp2191 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2191));
*(&local8) = $tmp2190;
org$frostlang$frostc$FixedArray** $tmp2192 = (org$frostlang$frostc$FixedArray**) (param2->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2193 = *$tmp2192;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2193));
org$frostlang$frostc$FixedArray* $tmp2194 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2194));
*(&local9) = $tmp2193;
// line 570
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// line 571
org$frostlang$frostc$IR$Value* $tmp2195 = *(&local7);
frost$core$Bit $tmp2196 = frost$core$Bit$init$builtin_bit($tmp2195 != NULL);
bool $tmp2197 = $tmp2196.value;
if ($tmp2197) goto block19; else goto block21;
block19:;
// line 572
org$frostlang$frostc$IR$Value* $tmp2198 = *(&local7);
$fn2200 $tmp2199 = ($fn2200) $tmp2198->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2201 = $tmp2199($tmp2198);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
org$frostlang$frostc$Type* $tmp2202 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2202));
*(&local10) = $tmp2201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
goto block20;
block21:;
// line 574
org$frostlang$frostc$MethodDecl* $tmp2203 = *(&local8);
org$frostlang$frostc$Annotations** $tmp2204 = &$tmp2203->annotations;
org$frostlang$frostc$Annotations* $tmp2205 = *$tmp2204;
frost$core$Bit $tmp2206 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2205);
bool $tmp2207 = $tmp2206.value;
if ($tmp2207) goto block24; else goto block25;
block24:;
*(&local11) = $tmp2206;
goto block26;
block25:;
org$frostlang$frostc$MethodDecl* $tmp2208 = *(&local8);
org$frostlang$frostc$MethodDecl$Kind* $tmp2209 = &$tmp2208->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2210 = *$tmp2209;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2211;
$tmp2211 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2211->value = $tmp2210;
frost$core$Int64 $tmp2212 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2213 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2212);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2214;
$tmp2214 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2214->value = $tmp2213;
ITable* $tmp2215 = ((frost$core$Equatable*) $tmp2211)->$class->itable;
while ($tmp2215->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2215 = $tmp2215->next;
}
$fn2217 $tmp2216 = $tmp2215->methods[0];
frost$core$Bit $tmp2218 = $tmp2216(((frost$core$Equatable*) $tmp2211), ((frost$core$Equatable*) $tmp2214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2214)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2211)));
*(&local11) = $tmp2218;
goto block26;
block26:;
frost$core$Bit $tmp2219 = *(&local11);
bool $tmp2220 = $tmp2219.value;
if ($tmp2220) goto block22; else goto block27;
block22:;
// line 575
org$frostlang$frostc$MethodDecl* $tmp2221 = *(&local8);
frost$core$Weak** $tmp2222 = &$tmp2221->owner;
frost$core$Weak* $tmp2223 = *$tmp2222;
frost$core$Object* $tmp2224 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2223);
org$frostlang$frostc$Type** $tmp2225 = &((org$frostlang$frostc$ClassDecl*) $tmp2224)->type;
org$frostlang$frostc$Type* $tmp2226 = *$tmp2225;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
org$frostlang$frostc$Type* $tmp2227 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2227));
*(&local10) = $tmp2226;
frost$core$Frost$unref$frost$core$Object$Q($tmp2224);
goto block23;
block27:;
// line 1
// line 578
org$frostlang$frostc$ClassDecl* $tmp2228 = *(&local0);
org$frostlang$frostc$Type** $tmp2229 = &$tmp2228->type;
org$frostlang$frostc$Type* $tmp2230 = *$tmp2229;
org$frostlang$frostc$MethodDecl* $tmp2231 = *(&local8);
frost$core$Weak** $tmp2232 = &$tmp2231->owner;
frost$core$Weak* $tmp2233 = *$tmp2232;
frost$core$Object* $tmp2234 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2233);
org$frostlang$frostc$Type* $tmp2235 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp2230, ((org$frostlang$frostc$ClassDecl*) $tmp2234));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
org$frostlang$frostc$Type* $tmp2236 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
*(&local12) = $tmp2235;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2235));
frost$core$Frost$unref$frost$core$Object$Q($tmp2234);
// line 579
org$frostlang$frostc$Type* $tmp2237 = *(&local12);
frost$core$Bit $tmp2238 = frost$core$Bit$init$builtin_bit($tmp2237 != NULL);
bool $tmp2239 = $tmp2238.value;
if ($tmp2239) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp2240 = (frost$core$Int64) {579};
org$frostlang$frostc$ClassDecl* $tmp2241 = *(&local0);
org$frostlang$frostc$Type** $tmp2242 = &$tmp2241->type;
org$frostlang$frostc$Type* $tmp2243 = *$tmp2242;
frost$core$String* $tmp2244 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2245, ((frost$core$Object*) $tmp2243));
frost$core$String* $tmp2246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2244, &$s2247);
org$frostlang$frostc$MethodDecl* $tmp2248 = *(&local8);
frost$core$Weak** $tmp2249 = &$tmp2248->owner;
frost$core$Weak* $tmp2250 = *$tmp2249;
frost$core$Object* $tmp2251 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2250);
frost$core$String** $tmp2252 = &((org$frostlang$frostc$ClassDecl*) $tmp2251)->name;
frost$core$String* $tmp2253 = *$tmp2252;
frost$core$String* $tmp2254 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2246, $tmp2253);
frost$core$String* $tmp2255 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2254, &$s2256);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2257, $tmp2240, $tmp2255);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2254));
frost$core$Frost$unref$frost$core$Object$Q($tmp2251);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
abort(); // unreachable
block28:;
// line 581
org$frostlang$frostc$Type* $tmp2258 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2258));
org$frostlang$frostc$Type* $tmp2259 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2259));
*(&local10) = $tmp2258;
org$frostlang$frostc$Type* $tmp2260 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2260));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block23;
block23:;
goto block20;
block20:;
// line 583
org$frostlang$frostc$MethodDecl* $tmp2261 = *(&local8);
frost$core$Bit $tmp2262 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp2261);
frost$core$Bit $tmp2263 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2262);
bool $tmp2264 = $tmp2263.value;
if ($tmp2264) goto block30; else goto block31;
block30:;
// line 584
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2265 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp2266 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2267 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2267));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2268 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2268));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2269 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2269));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2270 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2270));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block31:;
// line 586
org$frostlang$frostc$IR$Value* $tmp2271 = *(&local7);
org$frostlang$frostc$MethodRef* $tmp2272 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp2273 = *(&local10);
org$frostlang$frostc$MethodDecl* $tmp2274 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp2275 = *(&local9);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp2272, param0, $tmp2273, $tmp2274, ((frost$collections$ListView*) $tmp2275));
org$frostlang$frostc$IR$Value* $tmp2276 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2271, $tmp2272, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2272));
org$frostlang$frostc$Type* $tmp2277 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2277));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp2278 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2278));
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2279 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2279));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2280 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2280));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2281 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2281));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2282));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2276;
block18:;
frost$core$Int64 $tmp2283 = (frost$core$Int64) {10};
frost$core$Bit $tmp2284 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2088, $tmp2283);
bool $tmp2285 = $tmp2284.value;
if ($tmp2285) goto block32; else goto block33;
block32:;
org$frostlang$frostc$IR$Value** $tmp2286 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2287 = *$tmp2286;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2287));
org$frostlang$frostc$IR$Value* $tmp2288 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2288));
*(&local13) = $tmp2287;
org$frostlang$frostc$FixedArray** $tmp2289 = (org$frostlang$frostc$FixedArray**) (param2->$data + 8);
org$frostlang$frostc$FixedArray* $tmp2290 = *$tmp2289;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2290));
org$frostlang$frostc$FixedArray* $tmp2291 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2291));
*(&local14) = $tmp2290;
// line 590
org$frostlang$frostc$IR$Value* $tmp2292 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp2293 = *(&local14);
org$frostlang$frostc$Pair* $tmp2294 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, $tmp2292, ((frost$collections$ListView*) $tmp2293), param3, param4);
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
org$frostlang$frostc$Pair* $tmp2295 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2295));
*(&local15) = $tmp2294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2294));
// line 591
org$frostlang$frostc$Pair* $tmp2296 = *(&local15);
frost$core$Bit $tmp2297 = frost$core$Bit$init$builtin_bit($tmp2296 != NULL);
bool $tmp2298 = $tmp2297.value;
if ($tmp2298) goto block34; else goto block35;
block34:;
// line 592
org$frostlang$frostc$Pair* $tmp2299 = *(&local15);
frost$core$Object** $tmp2300 = &$tmp2299->first;
frost$core$Object* $tmp2301 = *$tmp2300;
ITable* $tmp2302 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2301))->$class->itable;
while ($tmp2302->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2302 = $tmp2302->next;
}
$fn2304 $tmp2303 = $tmp2302->methods[0];
frost$core$Int64 $tmp2305 = $tmp2303(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2301)));
frost$core$Int64 $tmp2306 = (frost$core$Int64) {1};
int64_t $tmp2307 = $tmp2305.value;
int64_t $tmp2308 = $tmp2306.value;
bool $tmp2309 = $tmp2307 > $tmp2308;
frost$core$Bit $tmp2310 = (frost$core$Bit) {$tmp2309};
bool $tmp2311 = $tmp2310.value;
if ($tmp2311) goto block36; else goto block37;
block36:;
// line 593
org$frostlang$frostc$Pair* $tmp2312 = *(&local15);
frost$core$Object** $tmp2313 = &$tmp2312->first;
frost$core$Object* $tmp2314 = *$tmp2313;
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp2314), param3, param4);
// line 594
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp2315 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2315));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2316 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2316));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2317 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2317));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2318 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2318));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2319 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block37:;
// line 596
org$frostlang$frostc$IR$Value* $tmp2320 = *(&local13);
org$frostlang$frostc$Pair* $tmp2321 = *(&local15);
frost$core$Object** $tmp2322 = &$tmp2321->first;
frost$core$Object* $tmp2323 = *$tmp2322;
frost$core$Int64 $tmp2324 = (frost$core$Int64) {0};
ITable* $tmp2325 = ((frost$collections$ListView*) $tmp2323)->$class->itable;
while ($tmp2325->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2325 = $tmp2325->next;
}
$fn2327 $tmp2326 = $tmp2325->methods[0];
frost$core$Object* $tmp2328 = $tmp2326(((frost$collections$ListView*) $tmp2323), $tmp2324);
org$frostlang$frostc$IR$Value* $tmp2329 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2320, ((org$frostlang$frostc$MethodRef*) $tmp2328), param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
frost$core$Frost$unref$frost$core$Object$Q($tmp2328);
org$frostlang$frostc$Pair* $tmp2330 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2331 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2332 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2332));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2333 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2333));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2334 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2329;
block35:;
// line 599
frost$collections$Array* $tmp2335 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2335);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2335));
frost$collections$Array* $tmp2336 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2336));
*(&local16) = $tmp2335;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2335));
// line 600
ITable* $tmp2337 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2337->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2337 = $tmp2337->next;
}
$fn2339 $tmp2338 = $tmp2337->methods[0];
frost$collections$Iterator* $tmp2340 = $tmp2338(((frost$collections$Iterable*) param3));
goto block38;
block38:;
ITable* $tmp2341 = $tmp2340->$class->itable;
while ($tmp2341->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2341 = $tmp2341->next;
}
$fn2343 $tmp2342 = $tmp2341->methods[0];
frost$core$Bit $tmp2344 = $tmp2342($tmp2340);
bool $tmp2345 = $tmp2344.value;
if ($tmp2345) goto block40; else goto block39;
block39:;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2346 = $tmp2340->$class->itable;
while ($tmp2346->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2346 = $tmp2346->next;
}
$fn2348 $tmp2347 = $tmp2346->methods[1];
frost$core$Object* $tmp2349 = $tmp2347($tmp2340);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2349)));
org$frostlang$frostc$ASTNode* $tmp2350 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2350));
*(&local17) = ((org$frostlang$frostc$ASTNode*) $tmp2349);
// line 601
org$frostlang$frostc$ASTNode* $tmp2351 = *(&local17);
org$frostlang$frostc$Type* $tmp2352 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp2351);
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
org$frostlang$frostc$Type* $tmp2353 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2353));
*(&local18) = $tmp2352;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2352));
// line 602
org$frostlang$frostc$Type* $tmp2354 = *(&local18);
frost$core$Bit $tmp2355 = frost$core$Bit$init$builtin_bit($tmp2354 == NULL);
bool $tmp2356 = $tmp2355.value;
if ($tmp2356) goto block41; else goto block42;
block41:;
// line 604
frost$core$Int64* $tmp2357 = &param0->errorCount;
frost$core$Int64 $tmp2358 = *$tmp2357;
*(&local19) = $tmp2358;
// line 605
org$frostlang$frostc$ASTNode* $tmp2359 = *(&local17);
org$frostlang$frostc$IR$Value* $tmp2360 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2359);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2360));
// line 606
frost$core$Int64* $tmp2361 = &param0->errorCount;
frost$core$Int64 $tmp2362 = *$tmp2361;
frost$core$Int64 $tmp2363 = *(&local19);
frost$core$Bit $tmp2364 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2362, $tmp2363);
bool $tmp2365 = $tmp2364.value;
if ($tmp2365) goto block43; else goto block44;
block43:;
// line 608
org$frostlang$frostc$FixedArray* $tmp2366 = *(&local14);
frost$core$Int64 $tmp2367 = (frost$core$Int64) {0};
frost$core$Object* $tmp2368 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2366, $tmp2367);
frost$core$String** $tmp2369 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2368))->name;
frost$core$String* $tmp2370 = *$tmp2369;
frost$core$String* $tmp2371 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2372, $tmp2370);
frost$core$String* $tmp2373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2371, &$s2374);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2373);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2371));
frost$core$Frost$unref$frost$core$Object$Q($tmp2368);
goto block44;
block44:;
// line 610
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2375 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2375));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2349);
org$frostlang$frostc$ASTNode* $tmp2376 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2376));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
frost$collections$Array* $tmp2377 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2377));
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2378 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2378));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2379 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2379));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2380 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2380));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2381 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2381));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2382 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2382));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block42:;
// line 612
frost$collections$Array* $tmp2383 = *(&local16);
org$frostlang$frostc$Type* $tmp2384 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp2383, ((frost$core$Object*) $tmp2384));
org$frostlang$frostc$Type* $tmp2385 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2385));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2349);
org$frostlang$frostc$ASTNode* $tmp2386 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2386));
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block38;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2340));
// line 614
org$frostlang$frostc$FixedArray* $tmp2387 = *(&local14);
frost$core$Int64 $tmp2388 = (frost$core$Int64) {0};
frost$core$Object* $tmp2389 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2387, $tmp2388);
frost$core$String** $tmp2390 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2389))->name;
frost$core$String* $tmp2391 = *$tmp2390;
frost$core$String* $tmp2392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2393, $tmp2391);
frost$core$String* $tmp2394 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2392, &$s2395);
frost$collections$Array* $tmp2396 = *(&local16);
ITable* $tmp2397 = ((frost$collections$CollectionView*) $tmp2396)->$class->itable;
while ($tmp2397->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2397 = $tmp2397->next;
}
$fn2399 $tmp2398 = $tmp2397->methods[1];
frost$core$String* $tmp2400 = $tmp2398(((frost$collections$CollectionView*) $tmp2396));
frost$core$String* $tmp2401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2394, $tmp2400);
frost$core$String* $tmp2402 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2401, &$s2403);
$fn2405 $tmp2404 = ($fn2405) param4->$class->vtable[2];
frost$core$String* $tmp2406 = $tmp2404(param4);
frost$core$String* $tmp2407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2402, $tmp2406);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2407);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2406));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2394));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2392));
frost$core$Frost$unref$frost$core$Object$Q($tmp2389);
// line 616
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$Array* $tmp2408 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2408));
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2409 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2409));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2410 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2411 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2411));
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2412 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2412));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2413 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2413));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block33:;
frost$core$Int64 $tmp2414 = (frost$core$Int64) {12};
frost$core$Bit $tmp2415 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2088, $tmp2414);
bool $tmp2416 = $tmp2415.value;
if ($tmp2416) goto block45; else goto block46;
block45:;
org$frostlang$frostc$IR$Value** $tmp2417 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2418 = *$tmp2417;
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
org$frostlang$frostc$IR$Value* $tmp2419 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2419));
*(&local20) = $tmp2418;
org$frostlang$frostc$FixedArray** $tmp2420 = (org$frostlang$frostc$FixedArray**) (param2->$data + 8);
org$frostlang$frostc$FixedArray* $tmp2421 = *$tmp2420;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
org$frostlang$frostc$FixedArray* $tmp2422 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
*(&local21) = $tmp2421;
org$frostlang$frostc$FixedArray** $tmp2423 = (org$frostlang$frostc$FixedArray**) (param2->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2424 = *$tmp2423;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
org$frostlang$frostc$FixedArray* $tmp2425 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
*(&local22) = $tmp2424;
// line 619
org$frostlang$frostc$IR$Value* $tmp2426 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp2427 = *(&local21);
org$frostlang$frostc$FixedArray* $tmp2428 = *(&local22);
org$frostlang$frostc$Pair* $tmp2429 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, $tmp2426, ((frost$collections$ListView*) $tmp2427), ((frost$collections$ListView*) $tmp2428), param3, param4);
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
org$frostlang$frostc$Pair* $tmp2430 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
*(&local23) = $tmp2429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
// line 620
org$frostlang$frostc$Pair* $tmp2431 = *(&local23);
frost$core$Bit $tmp2432 = frost$core$Bit$init$builtin_bit($tmp2431 != NULL);
bool $tmp2433 = $tmp2432.value;
if ($tmp2433) goto block47; else goto block48;
block47:;
// line 621
org$frostlang$frostc$Pair* $tmp2434 = *(&local23);
frost$core$Object** $tmp2435 = &$tmp2434->first;
frost$core$Object* $tmp2436 = *$tmp2435;
ITable* $tmp2437 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2436))->$class->itable;
while ($tmp2437->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2437 = $tmp2437->next;
}
$fn2439 $tmp2438 = $tmp2437->methods[0];
frost$core$Int64 $tmp2440 = $tmp2438(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2436)));
frost$core$Int64 $tmp2441 = (frost$core$Int64) {1};
int64_t $tmp2442 = $tmp2440.value;
int64_t $tmp2443 = $tmp2441.value;
bool $tmp2444 = $tmp2442 > $tmp2443;
frost$core$Bit $tmp2445 = (frost$core$Bit) {$tmp2444};
bool $tmp2446 = $tmp2445.value;
if ($tmp2446) goto block49; else goto block50;
block49:;
// line 622
org$frostlang$frostc$Pair* $tmp2447 = *(&local23);
frost$core$Object** $tmp2448 = &$tmp2447->first;
frost$core$Object* $tmp2449 = *$tmp2448;
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp2449), param3, param4);
// line 623
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp2450 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2451 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2452 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2452));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2453 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2453));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2454 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2454));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2455 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2455));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block50:;
// line 625
org$frostlang$frostc$IR$Value* $tmp2456 = *(&local20);
org$frostlang$frostc$Pair* $tmp2457 = *(&local23);
frost$core$Object** $tmp2458 = &$tmp2457->first;
frost$core$Object* $tmp2459 = *$tmp2458;
frost$core$Int64 $tmp2460 = (frost$core$Int64) {0};
ITable* $tmp2461 = ((frost$collections$ListView*) $tmp2459)->$class->itable;
while ($tmp2461->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2461 = $tmp2461->next;
}
$fn2463 $tmp2462 = $tmp2461->methods[0];
frost$core$Object* $tmp2464 = $tmp2462(((frost$collections$ListView*) $tmp2459), $tmp2460);
org$frostlang$frostc$IR$Value* $tmp2465 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2456, ((org$frostlang$frostc$MethodRef*) $tmp2464), param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2465));
frost$core$Frost$unref$frost$core$Object$Q($tmp2464);
org$frostlang$frostc$Pair* $tmp2466 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2466));
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2467 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2467));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2468 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2468));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2469 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2469));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2470 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2471 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2471));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2465;
block48:;
// line 628
frost$collections$Array* $tmp2472 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2472);
*(&local24) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
frost$collections$Array* $tmp2473 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2473));
*(&local24) = $tmp2472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2472));
// line 629
ITable* $tmp2474 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2474->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2474 = $tmp2474->next;
}
$fn2476 $tmp2475 = $tmp2474->methods[0];
frost$collections$Iterator* $tmp2477 = $tmp2475(((frost$collections$Iterable*) param3));
goto block51;
block51:;
ITable* $tmp2478 = $tmp2477->$class->itable;
while ($tmp2478->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2478 = $tmp2478->next;
}
$fn2480 $tmp2479 = $tmp2478->methods[0];
frost$core$Bit $tmp2481 = $tmp2479($tmp2477);
bool $tmp2482 = $tmp2481.value;
if ($tmp2482) goto block53; else goto block52;
block52:;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2483 = $tmp2477->$class->itable;
while ($tmp2483->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2483 = $tmp2483->next;
}
$fn2485 $tmp2484 = $tmp2483->methods[1];
frost$core$Object* $tmp2486 = $tmp2484($tmp2477);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2486)));
org$frostlang$frostc$ASTNode* $tmp2487 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2487));
*(&local25) = ((org$frostlang$frostc$ASTNode*) $tmp2486);
// line 630
org$frostlang$frostc$ASTNode* $tmp2488 = *(&local25);
org$frostlang$frostc$Type* $tmp2489 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp2488);
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
org$frostlang$frostc$Type* $tmp2490 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2490));
*(&local26) = $tmp2489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2489));
// line 631
org$frostlang$frostc$Type* $tmp2491 = *(&local26);
frost$core$Bit $tmp2492 = frost$core$Bit$init$builtin_bit($tmp2491 == NULL);
bool $tmp2493 = $tmp2492.value;
if ($tmp2493) goto block54; else goto block55;
block54:;
// line 633
frost$core$Int64* $tmp2494 = &param0->errorCount;
frost$core$Int64 $tmp2495 = *$tmp2494;
*(&local27) = $tmp2495;
// line 634
org$frostlang$frostc$ASTNode* $tmp2496 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp2497 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2496);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2497));
// line 635
frost$core$Int64* $tmp2498 = &param0->errorCount;
frost$core$Int64 $tmp2499 = *$tmp2498;
frost$core$Int64 $tmp2500 = *(&local27);
frost$core$Bit $tmp2501 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2499, $tmp2500);
bool $tmp2502 = $tmp2501.value;
if ($tmp2502) goto block56; else goto block57;
block56:;
// line 637
org$frostlang$frostc$FixedArray* $tmp2503 = *(&local21);
frost$core$Int64 $tmp2504 = (frost$core$Int64) {0};
frost$core$Object* $tmp2505 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2503, $tmp2504);
frost$core$String** $tmp2506 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2505))->name;
frost$core$String* $tmp2507 = *$tmp2506;
frost$core$String* $tmp2508 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2509, $tmp2507);
frost$core$String* $tmp2510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2508, &$s2511);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2510);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
frost$core$Frost$unref$frost$core$Object$Q($tmp2505);
goto block57;
block57:;
// line 639
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2512 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2512));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2486);
org$frostlang$frostc$ASTNode* $tmp2513 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2513));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
frost$collections$Array* $tmp2514 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2514));
*(&local24) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2515 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2515));
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2516 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2516));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2517 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2518 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2518));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2519 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2520 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2520));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block55:;
// line 641
frost$collections$Array* $tmp2521 = *(&local24);
org$frostlang$frostc$Type* $tmp2522 = *(&local26);
frost$collections$Array$add$frost$collections$Array$T($tmp2521, ((frost$core$Object*) $tmp2522));
org$frostlang$frostc$Type* $tmp2523 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2523));
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2486);
org$frostlang$frostc$ASTNode* $tmp2524 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2524));
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block51;
block53:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2477));
// line 643
org$frostlang$frostc$FixedArray* $tmp2525 = *(&local21);
frost$core$Int64 $tmp2526 = (frost$core$Int64) {0};
frost$core$Object* $tmp2527 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2525, $tmp2526);
frost$core$String** $tmp2528 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2527))->name;
frost$core$String* $tmp2529 = *$tmp2528;
frost$core$String* $tmp2530 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2531, $tmp2529);
frost$core$String* $tmp2532 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2530, &$s2533);
frost$collections$Array* $tmp2534 = *(&local24);
ITable* $tmp2535 = ((frost$collections$CollectionView*) $tmp2534)->$class->itable;
while ($tmp2535->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2535 = $tmp2535->next;
}
$fn2537 $tmp2536 = $tmp2535->methods[1];
frost$core$String* $tmp2538 = $tmp2536(((frost$collections$CollectionView*) $tmp2534));
frost$core$String* $tmp2539 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2532, $tmp2538);
frost$core$String* $tmp2540 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2539, &$s2541);
$fn2543 $tmp2542 = ($fn2543) param4->$class->vtable[2];
frost$core$String* $tmp2544 = $tmp2542(param4);
frost$core$String* $tmp2545 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2540, $tmp2544);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2545);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2540));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2538));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
frost$core$Frost$unref$frost$core$Object$Q($tmp2527);
// line 645
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$Array* $tmp2546 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
*(&local24) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2547 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2548 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2548));
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2549 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2550 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2550));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2551 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2551));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2552 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2552));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block46:;
frost$core$Int64 $tmp2553 = (frost$core$Int64) {5};
frost$core$Bit $tmp2554 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2088, $tmp2553);
bool $tmp2555 = $tmp2554.value;
if ($tmp2555) goto block58; else goto block59;
block59:;
frost$core$Int64 $tmp2556 = (frost$core$Int64) {7};
frost$core$Bit $tmp2557 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2088, $tmp2556);
bool $tmp2558 = $tmp2557.value;
if ($tmp2558) goto block58; else goto block60;
block58:;
// line 648
org$frostlang$frostc$IR$Value* $tmp2559 = org$frostlang$frostc$expression$Call$callMethodObject$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2559));
org$frostlang$frostc$IR* $tmp2560 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2560));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2561 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2561));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2559;
block60:;
frost$core$Int64 $tmp2562 = (frost$core$Int64) {14};
frost$core$Bit $tmp2563 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2088, $tmp2562);
bool $tmp2564 = $tmp2563.value;
if ($tmp2564) goto block61; else goto block62;
block61:;
org$frostlang$frostc$Type** $tmp2565 = (org$frostlang$frostc$Type**) (param2->$data + 0);
org$frostlang$frostc$Type* $tmp2566 = *$tmp2565;
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
org$frostlang$frostc$Type* $tmp2567 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2567));
*(&local28) = $tmp2566;
// line 651
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
// line 652
org$frostlang$frostc$Type* $tmp2568 = *(&local28);
frost$core$Bit $tmp2569 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp2568);
bool $tmp2570 = $tmp2569.value;
if ($tmp2570) goto block63; else goto block65;
block63:;
// line 653
org$frostlang$frostc$Type* $tmp2571 = *(&local28);
org$frostlang$frostc$FixedArray** $tmp2572 = &$tmp2571->subtypes;
org$frostlang$frostc$FixedArray* $tmp2573 = *$tmp2572;
frost$core$Int64 $tmp2574 = (frost$core$Int64) {1};
frost$core$Object* $tmp2575 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2573, $tmp2574);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp2575)));
org$frostlang$frostc$Type* $tmp2576 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2576));
*(&local29) = ((org$frostlang$frostc$Type*) $tmp2575);
frost$core$Frost$unref$frost$core$Object$Q($tmp2575);
goto block64;
block65:;
// line 1
// line 656
org$frostlang$frostc$Type* $tmp2577 = *(&local28);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2577));
org$frostlang$frostc$Type* $tmp2578 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2578));
*(&local29) = $tmp2577;
goto block64;
block64:;
// line 658
org$frostlang$frostc$Type* $tmp2579 = *(&local29);
org$frostlang$frostc$ClassDecl* $tmp2580 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2579);
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
org$frostlang$frostc$ClassDecl* $tmp2581 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
*(&local30) = $tmp2580;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2580));
// line 659
org$frostlang$frostc$ClassDecl* $tmp2582 = *(&local30);
frost$core$Bit $tmp2583 = frost$core$Bit$init$builtin_bit($tmp2582 == NULL);
bool $tmp2584 = $tmp2583.value;
if ($tmp2584) goto block66; else goto block67;
block66:;
// line 660
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2585 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2585));
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2586 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2586));
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2587 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2587));
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2588 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2588));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2589 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2589));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block67:;
// line 662
org$frostlang$frostc$ClassDecl* $tmp2590 = *(&local30);
frost$core$Bit $tmp2591 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, $tmp2590);
frost$core$Bit $tmp2592 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2591);
bool $tmp2593 = $tmp2592.value;
if ($tmp2593) goto block68; else goto block69;
block68:;
// line 663
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp2594 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2595 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2596 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2597 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2597));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2598 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2598));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block69:;
// line 665
org$frostlang$frostc$ClassDecl* $tmp2599 = *(&local30);
org$frostlang$frostc$SymbolTable* $tmp2600 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp2599);
org$frostlang$frostc$Symbol* $tmp2601 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp2600, &$s2602);
*(&local31) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2601));
org$frostlang$frostc$Symbol* $tmp2603 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2603));
*(&local31) = $tmp2601;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2601));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2600));
// line 666
org$frostlang$frostc$Symbol* $tmp2604 = *(&local31);
frost$core$Bit $tmp2605 = frost$core$Bit$init$builtin_bit($tmp2604 != NULL);
bool $tmp2606 = $tmp2605.value;
if ($tmp2606) goto block70; else goto block71;
block71:;
frost$core$Int64 $tmp2607 = (frost$core$Int64) {666};
org$frostlang$frostc$ClassDecl* $tmp2608 = *(&local30);
frost$core$String** $tmp2609 = &$tmp2608->name;
frost$core$String* $tmp2610 = *$tmp2609;
frost$core$String* $tmp2611 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2612, $tmp2610);
frost$core$String* $tmp2613 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2611, &$s2614);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2615, $tmp2607, $tmp2613);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2611));
abort(); // unreachable
block70:;
// line 667
org$frostlang$frostc$ClassDecl* $tmp2616 = *(&local30);
frost$core$Bit $tmp2617 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, $tmp2616);
bool $tmp2618 = $tmp2617.value;
if ($tmp2618) goto block72; else goto block73;
block72:;
// line 668
org$frostlang$frostc$Symbol* $tmp2619 = *(&local31);
org$frostlang$frostc$IR$Value* $tmp2620 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), $tmp2619);
org$frostlang$frostc$IR$Value* $tmp2621 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2620, param3, param4);
org$frostlang$frostc$Type* $tmp2622 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp2623 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2621, $tmp2622);
org$frostlang$frostc$IR$Value* $tmp2624 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2623, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2623));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2621));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
org$frostlang$frostc$Symbol* $tmp2625 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2625));
*(&local31) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2626 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2627 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2627));
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2628 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2629 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2629));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2630 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2630));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2624;
block73:;
// line 672
org$frostlang$frostc$IR* $tmp2631 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2632 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2633 = (frost$core$Int64) {6};
org$frostlang$frostc$ClassDecl* $tmp2634 = *(&local30);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl($tmp2632, $tmp2633, param1, $tmp2634);
$fn2636 $tmp2635 = ($fn2636) $tmp2631->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2637 = $tmp2635($tmp2631, $tmp2632);
*(&local32) = $tmp2637;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2632));
// line 673
org$frostlang$frostc$IR$Value* $tmp2638 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2639 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2640 = *(&local32);
org$frostlang$frostc$Type* $tmp2641 = *(&local29);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2638, $tmp2639, $tmp2640, $tmp2641);
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
org$frostlang$frostc$IR$Value* $tmp2642 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2642));
*(&local33) = $tmp2638;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
// line 674
frost$collections$Stack** $tmp2643 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2644 = *$tmp2643;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2645 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp2646 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp2647 = *(&local33);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp2645, $tmp2646, $tmp2647);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2644, ((frost$core$Object*) $tmp2645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
// line 675
org$frostlang$frostc$IR$Value* $tmp2648 = *(&local33);
org$frostlang$frostc$Symbol* $tmp2649 = *(&local31);
org$frostlang$frostc$IR$Value* $tmp2650 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2648, $tmp2649);
org$frostlang$frostc$Compiler$TypeContext* $tmp2651 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp2652 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp2651, $tmp2652);
org$frostlang$frostc$IR$Value* $tmp2653 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2650, param3, $tmp2651);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
// line 677
org$frostlang$frostc$IR$Value* $tmp2654 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp2655 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2654, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
org$frostlang$frostc$IR$Value* $tmp2656 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2656));
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Symbol* $tmp2657 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
*(&local31) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2658 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2658));
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2659 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2659));
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2660 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2660));
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2661 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2662 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2655;
block62:;
// line 680
frost$core$Bit $tmp2663 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2664 = $tmp2663.value;
if ($tmp2664) goto block74; else goto block75;
block75:;
frost$core$Int64 $tmp2665 = (frost$core$Int64) {680};
frost$core$String* $tmp2666 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2667, ((frost$core$Object*) param2));
frost$core$String* $tmp2668 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2666, &$s2669);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2670, $tmp2665, $tmp2668);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
abort(); // unreachable
block74:;
// line 681
goto block76;
block76:;
goto block76;
block77:;
goto block1;
block1:;
goto block78;
block78:;

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
frost$core$Bit local9;
org$frostlang$frostc$ClassDecl* local10 = NULL;
org$frostlang$frostc$IR$Value* local11 = NULL;
org$frostlang$frostc$IR$Statement$ID local12;
org$frostlang$frostc$IR$Block$ID local13;
org$frostlang$frostc$IR$Block$ID local14;
org$frostlang$frostc$IR$Statement$ID local15;
org$frostlang$frostc$IR$Statement$ID local16;
org$frostlang$frostc$IR$Value* local17 = NULL;
frost$core$Int64 local18;
org$frostlang$frostc$IR$Statement$ID local19;
org$frostlang$frostc$IR$Statement$ID local20;
org$frostlang$frostc$IR$Value* local21 = NULL;
// line 688
org$frostlang$frostc$Pair* $tmp2671 = org$frostlang$frostc$Compiler$getTryScope$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Block$ID$Q$Corg$frostlang$frostc$Variable$Q$GT$Q(param0);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
org$frostlang$frostc$Pair* $tmp2672 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
*(&local0) = $tmp2671;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2671));
// line 689
org$frostlang$frostc$Pair* $tmp2673 = *(&local0);
frost$core$Bit $tmp2674 = frost$core$Bit$init$builtin_bit($tmp2673 == NULL);
bool $tmp2675 = $tmp2674.value;
if ($tmp2675) goto block1; else goto block2;
block1:;
// line 690
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Pair* $tmp2676 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return param2;
block2:;
// line 692
org$frostlang$frostc$IR** $tmp2677 = &param0->ir;
org$frostlang$frostc$IR* $tmp2678 = *$tmp2677;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2678));
org$frostlang$frostc$IR* $tmp2679 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
*(&local1) = $tmp2678;
// line 693
$fn2681 $tmp2680 = ($fn2681) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2682 = $tmp2680(param2);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
org$frostlang$frostc$Type* $tmp2683 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2683));
*(&local2) = $tmp2682;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2682));
// line 694
org$frostlang$frostc$Type* $tmp2684 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
org$frostlang$frostc$Type* $tmp2685 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2685));
*(&local3) = $tmp2684;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2684));
// line 695
org$frostlang$frostc$Type* $tmp2686 = *(&local3);
org$frostlang$frostc$Type* $tmp2687 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp2686);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
org$frostlang$frostc$Type* $tmp2688 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2688));
*(&local4) = $tmp2687;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2687));
// line 696
org$frostlang$frostc$Type* $tmp2689 = *(&local2);
org$frostlang$frostc$Type* $tmp2690 = *(&local4);
frost$core$Bit $tmp2691 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp2689, $tmp2690);
bool $tmp2692 = $tmp2691.value;
if ($tmp2692) goto block3; else goto block5;
block3:;
// line 697
org$frostlang$frostc$IR* $tmp2693 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2694 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2695 = (frost$core$Int64) {0};
frost$core$Int64 $tmp2696 = (frost$core$Int64) {21};
org$frostlang$frostc$expression$Binary$Operator $tmp2697 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2696);
org$frostlang$frostc$IR$Value* $tmp2698 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2699 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp2700 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp2698, $tmp2699, $tmp2700);
org$frostlang$frostc$Type* $tmp2701 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp2694, $tmp2695, param1, param2, $tmp2697, $tmp2698, $tmp2701);
$fn2703 $tmp2702 = ($fn2703) $tmp2693->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2704 = $tmp2702($tmp2693, $tmp2694);
*(&local5) = $tmp2704;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2698));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2694));
// line 699
org$frostlang$frostc$IR* $tmp2705 = *(&local1);
$fn2707 $tmp2706 = ($fn2707) $tmp2705->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2708 = $tmp2706($tmp2705, &$s2709);
*(&local6) = $tmp2708;
// line 700
org$frostlang$frostc$IR* $tmp2710 = *(&local1);
$fn2712 $tmp2711 = ($fn2712) $tmp2710->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2713 = $tmp2711($tmp2710, &$s2714);
*(&local7) = $tmp2713;
// line 701
org$frostlang$frostc$IR* $tmp2715 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2716 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2717 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2718 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2719 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2720 = *(&local5);
org$frostlang$frostc$Type* $tmp2721 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2718, $tmp2719, $tmp2720, $tmp2721);
org$frostlang$frostc$IR$Block$ID $tmp2722 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp2723 = *(&local7);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2716, $tmp2717, param1, $tmp2718, $tmp2722, $tmp2723);
$fn2725 $tmp2724 = ($fn2725) $tmp2715->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2726 = $tmp2724($tmp2715, $tmp2716);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2721));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2718));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2716));
// line 703
org$frostlang$frostc$IR* $tmp2727 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp2728 = *(&local7);
$fn2730 $tmp2729 = ($fn2730) $tmp2727->$class->vtable[4];
$tmp2729($tmp2727, $tmp2728);
// line 704
org$frostlang$frostc$Pair* $tmp2731 = *(&local0);
frost$core$Object** $tmp2732 = &$tmp2731->second;
frost$core$Object* $tmp2733 = *$tmp2732;
org$frostlang$frostc$Variable$Storage** $tmp2734 = &((org$frostlang$frostc$Variable*) $tmp2733)->storage;
org$frostlang$frostc$Variable$Storage* $tmp2735 = *$tmp2734;
frost$core$Int64* $tmp2736 = &$tmp2735->$rawValue;
frost$core$Int64 $tmp2737 = *$tmp2736;
frost$core$Int64 $tmp2738 = (frost$core$Int64) {0};
frost$core$Bit $tmp2739 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2737, $tmp2738);
bool $tmp2740 = $tmp2739.value;
if ($tmp2740) goto block7; else goto block8;
block7:;
frost$core$Int64* $tmp2741 = (frost$core$Int64*) ($tmp2735->$data + 0);
frost$core$Int64 $tmp2742 = *$tmp2741;
*(&local8) = $tmp2742;
// line 706
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, param2);
// line 707
org$frostlang$frostc$IR* $tmp2743 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2744 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2745 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp2746 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2747 = (frost$core$Int64) {2};
frost$core$Int64 $tmp2748 = *(&local8);
org$frostlang$frostc$Type* $tmp2749 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp2746, $tmp2747, $tmp2748, $tmp2749);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2744, $tmp2745, param1, param2, $tmp2746);
$fn2751 $tmp2750 = ($fn2751) $tmp2743->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2752 = $tmp2750($tmp2743, $tmp2744);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2744));
goto block6;
block8:;
// line 710
frost$core$Bit $tmp2753 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2754 = $tmp2753.value;
if ($tmp2754) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp2755 = (frost$core$Int64) {710};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2756, $tmp2755);
abort(); // unreachable
block9:;
goto block6;
block6:;
// line 713
org$frostlang$frostc$Compiler$leaveTryScope(param0);
// line 714
org$frostlang$frostc$IR* $tmp2757 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2758 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2759 = (frost$core$Int64) {1};
org$frostlang$frostc$Pair* $tmp2760 = *(&local0);
frost$core$Object** $tmp2761 = &$tmp2760->first;
frost$core$Object* $tmp2762 = *$tmp2761;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2758, $tmp2759, param1, ((org$frostlang$frostc$IR$Block$ID) ($tmp2762 != NULL ? ((org$frostlang$frostc$IR$Block$ID$nullable) { ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp2762)->value, true }) : (org$frostlang$frostc$IR$Block$ID$nullable) { .nonnull = 0 }).value));
$fn2764 $tmp2763 = ($fn2764) $tmp2757->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2765 = $tmp2763($tmp2757, $tmp2758);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2758));
// line 715
org$frostlang$frostc$IR* $tmp2766 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp2767 = *(&local6);
$fn2769 $tmp2768 = ($fn2769) $tmp2766->$class->vtable[4];
$tmp2768($tmp2766, $tmp2767);
// line 716
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2770 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2770));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2771 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2772 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2772));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2773 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2773));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Pair* $tmp2774 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2774));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block5:;
// line 718
org$frostlang$frostc$Type* $tmp2775 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp2776 = &$tmp2775->typeKind;
org$frostlang$frostc$Type$Kind $tmp2777 = *$tmp2776;
org$frostlang$frostc$Type$Kind$wrapper* $tmp2778;
$tmp2778 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2778->value = $tmp2777;
frost$core$Int64 $tmp2779 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp2780 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp2779);
org$frostlang$frostc$Type$Kind$wrapper* $tmp2781;
$tmp2781 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp2781->value = $tmp2780;
ITable* $tmp2782 = ((frost$core$Equatable*) $tmp2778)->$class->itable;
while ($tmp2782->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2782 = $tmp2782->next;
}
$fn2784 $tmp2783 = $tmp2782->methods[0];
frost$core$Bit $tmp2785 = $tmp2783(((frost$core$Equatable*) $tmp2778), ((frost$core$Equatable*) $tmp2781));
bool $tmp2786 = $tmp2785.value;
if ($tmp2786) goto block13; else goto block14;
block13:;
org$frostlang$frostc$Type* $tmp2787 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp2788 = &$tmp2787->subtypes;
org$frostlang$frostc$FixedArray* $tmp2789 = *$tmp2788;
frost$core$Int64 $tmp2790 = (frost$core$Int64) {0};
frost$core$Object* $tmp2791 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2789, $tmp2790);
frost$core$String** $tmp2792 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp2791))->name;
frost$core$String* $tmp2793 = *$tmp2792;
frost$core$Bit $tmp2794 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp2793, &$s2795);
frost$core$Frost$unref$frost$core$Object$Q($tmp2791);
*(&local9) = $tmp2794;
goto block15;
block14:;
*(&local9) = $tmp2785;
goto block15;
block15:;
frost$core$Bit $tmp2796 = *(&local9);
bool $tmp2797 = $tmp2796.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2781)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2778)));
if ($tmp2797) goto block11; else goto block12;
block11:;
// line 719
org$frostlang$frostc$Type* $tmp2798 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp2799 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2798);
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
org$frostlang$frostc$ClassDecl* $tmp2800 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2800));
*(&local10) = $tmp2799;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
// line 720
org$frostlang$frostc$ClassDecl* $tmp2801 = *(&local10);
frost$core$Bit $tmp2802 = frost$core$Bit$init$builtin_bit($tmp2801 != NULL);
bool $tmp2803 = $tmp2802.value;
if ($tmp2803) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp2804 = (frost$core$Int64) {720};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2805, $tmp2804);
abort(); // unreachable
block16:;
// line 721
org$frostlang$frostc$ASTNode* $tmp2806 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp2807 = (frost$core$Int64) {26};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2806, $tmp2807, param1, param2);
org$frostlang$frostc$IR$Value* $tmp2808 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2806, &$s2809);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
org$frostlang$frostc$IR$Value* $tmp2810 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2810));
*(&local11) = $tmp2808;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
// line 723
org$frostlang$frostc$IR$Value* $tmp2811 = *(&local11);
frost$core$Bit $tmp2812 = frost$core$Bit$init$builtin_bit($tmp2811 != NULL);
bool $tmp2813 = $tmp2812.value;
if ($tmp2813) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp2814 = (frost$core$Int64) {723};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2815, $tmp2814);
abort(); // unreachable
block18:;
// line 724
org$frostlang$frostc$IR* $tmp2816 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2817 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2818 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp2819 = *(&local11);
org$frostlang$frostc$IR$Value* $tmp2820 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp2819);
frost$core$Int64 $tmp2821 = (frost$core$Int64) {6};
org$frostlang$frostc$expression$Binary$Operator $tmp2822 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2821);
org$frostlang$frostc$IR$Value* $tmp2823 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2824 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2825 = (frost$core$UInt64) {0};
org$frostlang$frostc$Type* $tmp2826 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp2823, $tmp2824, $tmp2825, $tmp2826);
org$frostlang$frostc$Type* $tmp2827 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp2817, $tmp2818, param1, $tmp2820, $tmp2822, $tmp2823, $tmp2827);
$fn2829 $tmp2828 = ($fn2829) $tmp2816->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2830 = $tmp2828($tmp2816, $tmp2817);
*(&local12) = $tmp2830;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
// line 727
org$frostlang$frostc$IR* $tmp2831 = *(&local1);
$fn2833 $tmp2832 = ($fn2833) $tmp2831->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2834 = $tmp2832($tmp2831, &$s2835);
*(&local13) = $tmp2834;
// line 728
org$frostlang$frostc$IR* $tmp2836 = *(&local1);
$fn2838 $tmp2837 = ($fn2838) $tmp2836->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2839 = $tmp2837($tmp2836, &$s2840);
*(&local14) = $tmp2839;
// line 729
org$frostlang$frostc$IR* $tmp2841 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2842 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2843 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2844 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2845 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2846 = *(&local12);
org$frostlang$frostc$Type* $tmp2847 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2844, $tmp2845, $tmp2846, $tmp2847);
org$frostlang$frostc$IR$Block$ID $tmp2848 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp2849 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2842, $tmp2843, param1, $tmp2844, $tmp2848, $tmp2849);
$fn2851 $tmp2850 = ($fn2851) $tmp2841->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2852 = $tmp2850($tmp2841, $tmp2842);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2847));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2844));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2842));
// line 731
org$frostlang$frostc$IR* $tmp2853 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp2854 = *(&local14);
$fn2856 $tmp2855 = ($fn2856) $tmp2853->$class->vtable[4];
$tmp2855($tmp2853, $tmp2854);
// line 732
org$frostlang$frostc$IR* $tmp2857 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2858 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2859 = (frost$core$Int64) {4};
org$frostlang$frostc$ClassDecl* $tmp2860 = *(&local10);
frost$collections$Array** $tmp2861 = &$tmp2860->choiceCases;
frost$collections$Array* $tmp2862 = *$tmp2861;
frost$core$Int64 $tmp2863 = (frost$core$Int64) {1};
frost$core$Object* $tmp2864 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp2862, $tmp2863);
frost$core$Int64 $tmp2865 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp2858, $tmp2859, param1, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp2864), $tmp2865);
$fn2867 $tmp2866 = ($fn2867) $tmp2857->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2868 = $tmp2866($tmp2857, $tmp2858);
*(&local15) = $tmp2868;
frost$core$Frost$unref$frost$core$Object$Q($tmp2864);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2858));
// line 734
org$frostlang$frostc$IR* $tmp2869 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2870 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2871 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp2872 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2873 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2874 = *(&local15);
org$frostlang$frostc$Type* $tmp2875 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2872, $tmp2873, $tmp2874, $tmp2875);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2870, $tmp2871, param1, $tmp2872);
$fn2877 $tmp2876 = ($fn2877) $tmp2869->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2878 = $tmp2876($tmp2869, $tmp2870);
*(&local16) = $tmp2878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2872));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
// line 736
org$frostlang$frostc$IR$Value* $tmp2879 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2880 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2881 = *(&local16);
org$frostlang$frostc$Type* $tmp2882 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2879, $tmp2880, $tmp2881, $tmp2882);
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
org$frostlang$frostc$IR$Value* $tmp2883 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2883));
*(&local17) = $tmp2879;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2879));
// line 737
org$frostlang$frostc$IR$Value* $tmp2884 = *(&local17);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp2884);
// line 738
org$frostlang$frostc$Pair* $tmp2885 = *(&local0);
frost$core$Object** $tmp2886 = &$tmp2885->second;
frost$core$Object* $tmp2887 = *$tmp2886;
org$frostlang$frostc$Variable$Storage** $tmp2888 = &((org$frostlang$frostc$Variable*) $tmp2887)->storage;
org$frostlang$frostc$Variable$Storage* $tmp2889 = *$tmp2888;
frost$core$Int64* $tmp2890 = &$tmp2889->$rawValue;
frost$core$Int64 $tmp2891 = *$tmp2890;
frost$core$Int64 $tmp2892 = (frost$core$Int64) {0};
frost$core$Bit $tmp2893 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2891, $tmp2892);
bool $tmp2894 = $tmp2893.value;
if ($tmp2894) goto block21; else goto block22;
block21:;
frost$core$Int64* $tmp2895 = (frost$core$Int64*) ($tmp2889->$data + 0);
frost$core$Int64 $tmp2896 = *$tmp2895;
*(&local18) = $tmp2896;
// line 740
org$frostlang$frostc$IR* $tmp2897 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2898 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2899 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp2900 = *(&local17);
org$frostlang$frostc$IR$Value* $tmp2901 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2902 = (frost$core$Int64) {2};
frost$core$Int64 $tmp2903 = *(&local18);
org$frostlang$frostc$Type* $tmp2904 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp2901, $tmp2902, $tmp2903, $tmp2904);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2898, $tmp2899, param1, $tmp2900, $tmp2901);
$fn2906 $tmp2905 = ($fn2906) $tmp2897->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2907 = $tmp2905($tmp2897, $tmp2898);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2901));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2898));
goto block20;
block22:;
// line 743
frost$core$Bit $tmp2908 = frost$core$Bit$init$builtin_bit(false);
bool $tmp2909 = $tmp2908.value;
if ($tmp2909) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp2910 = (frost$core$Int64) {743};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2911, $tmp2910);
abort(); // unreachable
block23:;
goto block20;
block20:;
// line 746
org$frostlang$frostc$Compiler$leaveTryScope(param0);
// line 747
org$frostlang$frostc$IR* $tmp2912 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2913 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2914 = (frost$core$Int64) {1};
org$frostlang$frostc$Pair* $tmp2915 = *(&local0);
frost$core$Object** $tmp2916 = &$tmp2915->first;
frost$core$Object* $tmp2917 = *$tmp2916;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2913, $tmp2914, param1, ((org$frostlang$frostc$IR$Block$ID) ($tmp2917 != NULL ? ((org$frostlang$frostc$IR$Block$ID$nullable) { ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp2917)->value, true }) : (org$frostlang$frostc$IR$Block$ID$nullable) { .nonnull = 0 }).value));
$fn2919 $tmp2918 = ($fn2919) $tmp2912->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2920 = $tmp2918($tmp2912, $tmp2913);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2913));
// line 748
org$frostlang$frostc$IR* $tmp2921 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp2922 = *(&local13);
$fn2924 $tmp2923 = ($fn2924) $tmp2921->$class->vtable[4];
$tmp2923($tmp2921, $tmp2922);
// line 749
org$frostlang$frostc$IR* $tmp2925 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2926 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2927 = (frost$core$Int64) {4};
org$frostlang$frostc$ClassDecl* $tmp2928 = *(&local10);
frost$collections$Array** $tmp2929 = &$tmp2928->choiceCases;
frost$collections$Array* $tmp2930 = *$tmp2929;
frost$core$Int64 $tmp2931 = (frost$core$Int64) {0};
frost$core$Object* $tmp2932 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp2930, $tmp2931);
frost$core$Int64 $tmp2933 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp2926, $tmp2927, param1, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp2932), $tmp2933);
$fn2935 $tmp2934 = ($fn2935) $tmp2925->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2936 = $tmp2934($tmp2925, $tmp2926);
*(&local19) = $tmp2936;
frost$core$Frost$unref$frost$core$Object$Q($tmp2932);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2926));
// line 751
org$frostlang$frostc$IR* $tmp2937 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp2938 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2939 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp2940 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2941 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2942 = *(&local19);
org$frostlang$frostc$Type* $tmp2943 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2940, $tmp2941, $tmp2942, $tmp2943);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2938, $tmp2939, param1, $tmp2940);
$fn2945 $tmp2944 = ($fn2945) $tmp2937->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2946 = $tmp2944($tmp2937, $tmp2938);
*(&local20) = $tmp2946;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2943));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
// line 753
org$frostlang$frostc$IR$Value* $tmp2947 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2948 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2949 = *(&local20);
org$frostlang$frostc$Type* $tmp2950 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2947, $tmp2948, $tmp2949, $tmp2950);
org$frostlang$frostc$Type* $tmp2951 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp2952 = &$tmp2951->subtypes;
org$frostlang$frostc$FixedArray* $tmp2953 = *$tmp2952;
frost$core$Int64 $tmp2954 = (frost$core$Int64) {1};
frost$core$Object* $tmp2955 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2953, $tmp2954);
org$frostlang$frostc$IR$Value* $tmp2956 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2947, ((org$frostlang$frostc$Type*) $tmp2955));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
org$frostlang$frostc$IR$Value* $tmp2957 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
*(&local21) = $tmp2956;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2956));
frost$core$Frost$unref$frost$core$Object$Q($tmp2955);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2950));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2947));
// line 755
org$frostlang$frostc$IR$Value* $tmp2958 = *(&local21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2958));
org$frostlang$frostc$IR$Value* $tmp2959 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2959));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2960 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2960));
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2961 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2961));
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2962 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2962));
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp2963 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2964 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2965 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2966 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2966));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Pair* $tmp2967 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2967));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp2958;
block12:;
goto block4;
block4:;
// line 757
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp2968 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2968));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2969 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2970 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2971 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Pair* $tmp2972 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
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
frost$core$Bit local13;
frost$core$Bit local14;
org$frostlang$frostc$Pair* local15 = NULL;
org$frostlang$frostc$MethodRef* local16 = NULL;
frost$core$Bit local17;
org$frostlang$frostc$Type* local18 = NULL;
org$frostlang$frostc$Type* local19 = NULL;
frost$collections$Array* local20 = NULL;
org$frostlang$frostc$IR$Value* local21 = NULL;
frost$core$Bit local22;
frost$core$Int64 local23;
frost$core$Bit local24;
frost$core$Bit local25;
frost$core$Int64 local26;
org$frostlang$frostc$IR$Value* local27 = NULL;
org$frostlang$frostc$IR$Statement$ID local28;
frost$core$Bit local29;
org$frostlang$frostc$IR$Statement$ID local30;
org$frostlang$frostc$IR$Value* local31 = NULL;
frost$core$Bit local32;
// line 765
org$frostlang$frostc$IR** $tmp2973 = &param0->ir;
org$frostlang$frostc$IR* $tmp2974 = *$tmp2973;
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2974));
org$frostlang$frostc$IR* $tmp2975 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
*(&local5) = $tmp2974;
// line 767
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodRef* $tmp2976 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
*(&local6) = param3;
// line 768
org$frostlang$frostc$MethodRef* $tmp2977 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp2978 = &$tmp2977->value;
org$frostlang$frostc$MethodDecl* $tmp2979 = *$tmp2978;
org$frostlang$frostc$MethodDecl$Kind* $tmp2980 = &$tmp2979->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2981 = *$tmp2980;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2982;
$tmp2982 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2982->value = $tmp2981;
frost$core$Int64 $tmp2983 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2984 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2983);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2985;
$tmp2985 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2985->value = $tmp2984;
ITable* $tmp2986 = ((frost$core$Equatable*) $tmp2982)->$class->itable;
while ($tmp2986->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2986 = $tmp2986->next;
}
$fn2988 $tmp2987 = $tmp2986->methods[0];
frost$core$Bit $tmp2989 = $tmp2987(((frost$core$Equatable*) $tmp2982), ((frost$core$Equatable*) $tmp2985));
bool $tmp2990 = $tmp2989.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2985)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2982)));
if ($tmp2990) goto block16; else goto block17;
block16:;
// line 769
frost$core$Bit $tmp2991 = frost$core$Bit$init$builtin_bit(false);
*(&local7) = $tmp2991;
// line 770
frost$core$Bit $tmp2992 = frost$core$Bit$init$builtin_bit(false);
*(&local8) = $tmp2992;
// line 771
frost$core$Bit $tmp2993 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp2994 = $tmp2993.value;
if ($tmp2994) goto block18; else goto block20;
block18:;
// line 772
frost$core$Int64* $tmp2995 = &param2->$rawValue;
frost$core$Int64 $tmp2996 = *$tmp2995;
frost$core$Int64 $tmp2997 = (frost$core$Int64) {5};
frost$core$Bit $tmp2998 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2996, $tmp2997);
bool $tmp2999 = $tmp2998.value;
if ($tmp2999) goto block22; else goto block23;
block22:;
frost$core$Int64* $tmp3000 = (frost$core$Int64*) (param2->$data + 0);
frost$core$Int64 $tmp3001 = *$tmp3000;
*(&local9) = $tmp3001;
org$frostlang$frostc$Type** $tmp3002 = (org$frostlang$frostc$Type**) (param2->$data + 8);
org$frostlang$frostc$Type* $tmp3003 = *$tmp3002;
// line 774
frost$core$Int64 $tmp3004 = *(&local9);
frost$core$Int64 $tmp3005 = (frost$core$Int64) {0};
frost$core$Bit $tmp3006 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3004, $tmp3005);
bool $tmp3007 = $tmp3006.value;
if ($tmp3007) goto block24; else goto block25;
block24:;
frost$core$Bit $tmp3008 = org$frostlang$frostc$Compiler$isClassContext$R$frost$core$Bit(param0);
frost$core$Bit $tmp3009 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3008);
*(&local10) = $tmp3009;
goto block26;
block25:;
*(&local10) = $tmp3006;
goto block26;
block26:;
frost$core$Bit $tmp3010 = *(&local10);
*(&local8) = $tmp3010;
// line 775
frost$core$Bit $tmp3011 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3011;
goto block21;
block23:;
frost$core$Int64 $tmp3012 = (frost$core$Int64) {7};
frost$core$Bit $tmp3013 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2996, $tmp3012);
bool $tmp3014 = $tmp3013.value;
if ($tmp3014) goto block27; else goto block28;
block27:;
org$frostlang$frostc$IR$Statement$ID* $tmp3015 = (org$frostlang$frostc$IR$Statement$ID*) (param2->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp3016 = *$tmp3015;
*(&local11) = $tmp3016;
org$frostlang$frostc$Type** $tmp3017 = (org$frostlang$frostc$Type**) (param2->$data + 8);
org$frostlang$frostc$Type* $tmp3018 = *$tmp3017;
// line 778
org$frostlang$frostc$IR$Statement$ID $tmp3019 = *(&local11);
org$frostlang$frostc$IR* $tmp3020 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3021 = &$tmp3020->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3022 = *$tmp3021;
frost$collections$Array** $tmp3023 = &$tmp3022->ids;
frost$collections$Array* $tmp3024 = *$tmp3023;
org$frostlang$frostc$IR* $tmp3025 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3026 = &$tmp3025->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3027 = *$tmp3026;
frost$collections$Array** $tmp3028 = &$tmp3027->ids;
frost$collections$Array* $tmp3029 = *$tmp3028;
ITable* $tmp3030 = ((frost$collections$CollectionView*) $tmp3029)->$class->itable;
while ($tmp3030->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3030 = $tmp3030->next;
}
$fn3032 $tmp3031 = $tmp3030->methods[0];
frost$core$Int64 $tmp3033 = $tmp3031(((frost$collections$CollectionView*) $tmp3029));
frost$core$Int64 $tmp3034 = (frost$core$Int64) {1};
int64_t $tmp3035 = $tmp3033.value;
int64_t $tmp3036 = $tmp3034.value;
int64_t $tmp3037 = $tmp3035 - $tmp3036;
frost$core$Int64 $tmp3038 = (frost$core$Int64) {$tmp3037};
frost$core$Object* $tmp3039 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3024, $tmp3038);
frost$core$Bit $tmp3040 = org$frostlang$frostc$IR$Statement$ID$$EQ$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Bit($tmp3019, ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp3039)->value);
bool $tmp3041 = $tmp3040.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3039);
if ($tmp3041) goto block29; else goto block30;
block29:;
// line 779
org$frostlang$frostc$IR* $tmp3042 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3043 = &$tmp3042->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3044 = *$tmp3043;
frost$collections$Array** $tmp3045 = &$tmp3044->statements;
frost$collections$Array* $tmp3046 = *$tmp3045;
org$frostlang$frostc$IR* $tmp3047 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3048 = &$tmp3047->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3049 = *$tmp3048;
frost$collections$Array** $tmp3050 = &$tmp3049->statements;
frost$collections$Array* $tmp3051 = *$tmp3050;
ITable* $tmp3052 = ((frost$collections$CollectionView*) $tmp3051)->$class->itable;
while ($tmp3052->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3052 = $tmp3052->next;
}
$fn3054 $tmp3053 = $tmp3052->methods[0];
frost$core$Int64 $tmp3055 = $tmp3053(((frost$collections$CollectionView*) $tmp3051));
frost$core$Int64 $tmp3056 = (frost$core$Int64) {1};
int64_t $tmp3057 = $tmp3055.value;
int64_t $tmp3058 = $tmp3056.value;
int64_t $tmp3059 = $tmp3057 - $tmp3058;
frost$core$Int64 $tmp3060 = (frost$core$Int64) {$tmp3059};
frost$core$Object* $tmp3061 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3046, $tmp3060);
*(&local12) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp3061)));
org$frostlang$frostc$IR$Statement* $tmp3062 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3062));
*(&local12) = ((org$frostlang$frostc$IR$Statement*) $tmp3061);
frost$core$Frost$unref$frost$core$Object$Q($tmp3061);
// line 780
org$frostlang$frostc$IR$Statement* $tmp3063 = *(&local12);
frost$core$Int64* $tmp3064 = &$tmp3063->$rawValue;
frost$core$Int64 $tmp3065 = *$tmp3064;
frost$core$Int64 $tmp3066 = (frost$core$Int64) {6};
frost$core$Bit $tmp3067 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3065, $tmp3066);
bool $tmp3068 = $tmp3067.value;
if ($tmp3068) goto block32; else goto block31;
block32:;
// line 782
frost$core$Bit $tmp3069 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3069;
goto block31;
block31:;
org$frostlang$frostc$IR$Statement* $tmp3070 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3070));
*(&local12) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block30;
block30:;
goto block21;
block28:;
frost$core$Int64 $tmp3071 = (frost$core$Int64) {13};
frost$core$Bit $tmp3072 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2996, $tmp3071);
bool $tmp3073 = $tmp3072.value;
if ($tmp3073) goto block33; else goto block21;
block33:;
// line 788
frost$core$Bit $tmp3074 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp3074;
// line 789
frost$core$Bit $tmp3075 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3075;
goto block21;
block21:;
goto block19;
block20:;
// line 1
// line 794
org$frostlang$frostc$MethodRef* $tmp3076 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3077 = &$tmp3076->value;
org$frostlang$frostc$MethodDecl* $tmp3078 = *$tmp3077;
frost$core$Weak** $tmp3079 = &$tmp3078->owner;
frost$core$Weak* $tmp3080 = *$tmp3079;
frost$core$Object* $tmp3081 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3080);
frost$core$Bit $tmp3082 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp3081));
bool $tmp3083 = $tmp3082.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3081);
if ($tmp3083) goto block34; else goto block36;
block34:;
// line 795
frost$core$Bit $tmp3084 = frost$core$Bit$init$builtin_bit(false);
*(&local8) = $tmp3084;
// line 796
frost$core$Bit $tmp3085 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3085;
goto block35;
block36:;
// line 1
// line 799
frost$core$Bit $tmp3086 = org$frostlang$frostc$Compiler$isClassContext$R$frost$core$Bit(param0);
frost$core$Bit $tmp3087 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3086);
*(&local8) = $tmp3087;
// line 800
frost$core$Bit $tmp3088 = *(&local8);
*(&local7) = $tmp3088;
goto block35;
block35:;
goto block19;
block19:;
// line 803
frost$core$Bit $tmp3089 = *(&local8);
bool $tmp3090 = $tmp3089.value;
if ($tmp3090) goto block39; else goto block40;
block39:;
frost$collections$Stack** $tmp3091 = &param0->currentMethod;
frost$collections$Stack* $tmp3092 = *$tmp3091;
frost$core$Int64 $tmp3093 = (frost$core$Int64) {0};
frost$core$Object* $tmp3094 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3092, $tmp3093);
org$frostlang$frostc$MethodDecl$Kind* $tmp3095 = &((org$frostlang$frostc$MethodDecl*) $tmp3094)->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3096 = *$tmp3095;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3097;
$tmp3097 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3097->value = $tmp3096;
frost$core$Int64 $tmp3098 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3099 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3098);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3100;
$tmp3100 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3100->value = $tmp3099;
ITable* $tmp3101 = ((frost$core$Equatable*) $tmp3097)->$class->itable;
while ($tmp3101->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3101 = $tmp3101->next;
}
$fn3103 $tmp3102 = $tmp3101->methods[1];
frost$core$Bit $tmp3104 = $tmp3102(((frost$core$Equatable*) $tmp3097), ((frost$core$Equatable*) $tmp3100));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3100)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3097)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3094);
*(&local13) = $tmp3104;
goto block41;
block40:;
*(&local13) = $tmp3089;
goto block41;
block41:;
frost$core$Bit $tmp3105 = *(&local13);
bool $tmp3106 = $tmp3105.value;
if ($tmp3106) goto block37; else goto block38;
block37:;
// line 804
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s3107);
// line 805
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3108 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3108));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3109 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3109));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block38:;
// line 807
frost$core$Bit $tmp3110 = *(&local7);
frost$core$Bit $tmp3111 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3110);
bool $tmp3112 = $tmp3111.value;
if ($tmp3112) goto block42; else goto block43;
block42:;
// line 808
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s3113);
// line 809
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3114 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3114));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3115 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block43:;
goto block17;
block17:;
// line 812
ITable* $tmp3116 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3116->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3116 = $tmp3116->next;
}
$fn3118 $tmp3117 = $tmp3116->methods[0];
frost$core$Int64 $tmp3119 = $tmp3117(((frost$collections$CollectionView*) param4));
org$frostlang$frostc$MethodRef* $tmp3120 = *(&local6);
frost$core$Int64 $tmp3121 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3120);
int64_t $tmp3122 = $tmp3119.value;
int64_t $tmp3123 = $tmp3121.value;
bool $tmp3124 = $tmp3122 != $tmp3123;
frost$core$Bit $tmp3125 = (frost$core$Bit) {$tmp3124};
bool $tmp3126 = $tmp3125.value;
if ($tmp3126) goto block44; else goto block45;
block44:;
// line 813
org$frostlang$frostc$MethodRef* $tmp3127 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3128 = &$tmp3127->value;
org$frostlang$frostc$MethodDecl* $tmp3129 = *$tmp3128;
frost$core$String* $tmp3130 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3129);
frost$core$String* $tmp3131 = frost$core$String$get_asString$R$frost$core$String($tmp3130);
frost$core$String* $tmp3132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3131, &$s3133);
org$frostlang$frostc$MethodRef* $tmp3134 = *(&local6);
frost$core$Int64 $tmp3135 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3134);
frost$core$Int64$wrapper* $tmp3136;
$tmp3136 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3136->value = $tmp3135;
frost$core$String* $tmp3137 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3132, ((frost$core$Object*) $tmp3136));
frost$core$String* $tmp3138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3137, &$s3139);
org$frostlang$frostc$MethodRef* $tmp3140 = *(&local6);
frost$core$Int64 $tmp3141 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3140);
frost$core$Int64 $tmp3142 = (frost$core$Int64) {1};
frost$core$Bit $tmp3143 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3141, $tmp3142);
frost$core$Bit$wrapper* $tmp3144;
$tmp3144 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3144->value = $tmp3143;
ITable* $tmp3145 = ((frost$core$Formattable*) $tmp3144)->$class->itable;
while ($tmp3145->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp3145 = $tmp3145->next;
}
$fn3147 $tmp3146 = $tmp3145->methods[0];
frost$core$String* $tmp3148 = $tmp3146(((frost$core$Formattable*) $tmp3144), &$s3149);
frost$core$String* $tmp3150 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3151, $tmp3148);
frost$core$String* $tmp3152 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3150, &$s3153);
ITable* $tmp3154 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3154->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3154 = $tmp3154->next;
}
$fn3156 $tmp3155 = $tmp3154->methods[0];
frost$core$Int64 $tmp3157 = $tmp3155(((frost$collections$CollectionView*) param4));
frost$core$Int64$wrapper* $tmp3158;
$tmp3158 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3158->value = $tmp3157;
frost$core$String* $tmp3159 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3152, ((frost$core$Object*) $tmp3158));
frost$core$String* $tmp3160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3159, &$s3161);
frost$core$String* $tmp3162 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3138, $tmp3160);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3162);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3144)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3130));
// line 815
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3163 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3164 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3164));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block45:;
// line 817
frost$core$Bit $tmp3165 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3166 = $tmp3165.value;
if ($tmp3166) goto block48; else goto block49;
block48:;
org$frostlang$frostc$MethodRef* $tmp3167 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3168 = &$tmp3167->value;
org$frostlang$frostc$MethodDecl* $tmp3169 = *$tmp3168;
org$frostlang$frostc$Annotations** $tmp3170 = &$tmp3169->annotations;
org$frostlang$frostc$Annotations* $tmp3171 = *$tmp3170;
frost$core$Bit $tmp3172 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3171);
*(&local14) = $tmp3172;
goto block50;
block49:;
*(&local14) = $tmp3165;
goto block50;
block50:;
frost$core$Bit $tmp3173 = *(&local14);
bool $tmp3174 = $tmp3173.value;
if ($tmp3174) goto block46; else goto block47;
block46:;
// line 818
frost$core$Int64* $tmp3175 = &param2->$rawValue;
frost$core$Int64 $tmp3176 = *$tmp3175;
frost$core$Int64 $tmp3177 = (frost$core$Int64) {14};
frost$core$Bit $tmp3178 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3176, $tmp3177);
bool $tmp3179 = $tmp3178.value;
if ($tmp3179) goto block52; else goto block53;
block52:;
goto block51;
block53:;
// line 823
org$frostlang$frostc$MethodRef* $tmp3180 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3181 = &$tmp3180->value;
org$frostlang$frostc$MethodDecl* $tmp3182 = *$tmp3181;
frost$core$String* $tmp3183 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3182);
frost$core$String* $tmp3184 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3185, $tmp3183);
frost$core$String* $tmp3186 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3184, &$s3187);
frost$core$String* $tmp3188 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3186, &$s3189);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3188);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
goto block51;
block51:;
goto block47;
block47:;
// line 828
org$frostlang$frostc$MethodRef* $tmp3190 = *(&local6);
org$frostlang$frostc$Pair* $tmp3191 = org$frostlang$frostc$expression$Call$compileIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp3190, param4);
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
org$frostlang$frostc$Pair* $tmp3192 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3192));
*(&local15) = $tmp3191;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3191));
// line 829
org$frostlang$frostc$Pair* $tmp3193 = *(&local15);
frost$core$Object** $tmp3194 = &$tmp3193->first;
frost$core$Object* $tmp3195 = *$tmp3194;
bool $tmp3196 = ((frost$core$Bit$wrapper*) $tmp3195)->value.value;
if ($tmp3196) goto block54; else goto block55;
block54:;
// line 830
org$frostlang$frostc$Pair* $tmp3197 = *(&local15);
frost$core$Object** $tmp3198 = &$tmp3197->second;
frost$core$Object* $tmp3199 = *$tmp3198;
frost$core$Bit $tmp3200 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$IR$Value*) $tmp3199) != NULL);
bool $tmp3201 = $tmp3200.value;
if ($tmp3201) goto block56; else goto block57;
block56:;
// line 831
org$frostlang$frostc$Pair* $tmp3202 = *(&local15);
frost$core$Object** $tmp3203 = &$tmp3202->second;
frost$core$Object* $tmp3204 = *$tmp3203;
org$frostlang$frostc$IR$Value* $tmp3205 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) $tmp3204), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3205));
org$frostlang$frostc$Pair* $tmp3206 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3206));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3207 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3207));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3208 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3208));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = $tmp3205;
goto block1;
block57:;
// line 833
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp3209 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3209));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3210 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3210));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3211 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3211));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block55:;
// line 835
org$frostlang$frostc$MethodRef* $tmp3212 = *(&local6);
org$frostlang$frostc$MethodRef* $tmp3213 = org$frostlang$frostc$expression$Call$performTypeInference$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$MethodRef$Q(param0, $tmp3212, param4);
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
org$frostlang$frostc$MethodRef* $tmp3214 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3214));
*(&local16) = $tmp3213;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3213));
// line 836
org$frostlang$frostc$MethodRef* $tmp3215 = *(&local16);
frost$core$Bit $tmp3216 = frost$core$Bit$init$builtin_bit($tmp3215 == NULL);
bool $tmp3217 = $tmp3216.value;
if ($tmp3217) goto block58; else goto block59;
block58:;
// line 837
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3218 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3218));
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3219 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3219));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3220 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3220));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3221 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3221));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block59:;
// line 839
org$frostlang$frostc$MethodRef* $tmp3222 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3222));
org$frostlang$frostc$MethodRef* $tmp3223 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3223));
*(&local6) = $tmp3222;
// line 840
// line 841
frost$core$Bit $tmp3224 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3225 = $tmp3224.value;
if ($tmp3225) goto block60; else goto block62;
block60:;
// line 842
frost$core$Int64* $tmp3226 = &param2->$rawValue;
frost$core$Int64 $tmp3227 = *$tmp3226;
frost$core$Int64 $tmp3228 = (frost$core$Int64) {13};
frost$core$Bit $tmp3229 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3227, $tmp3228);
bool $tmp3230 = $tmp3229.value;
if ($tmp3230) goto block64; else goto block65;
block64:;
// line 844
frost$core$Bit $tmp3231 = frost$core$Bit$init$builtin_bit(true);
*(&local17) = $tmp3231;
goto block63;
block65:;
// line 847
frost$core$Bit $tmp3232 = frost$core$Bit$init$builtin_bit(false);
*(&local17) = $tmp3232;
goto block63;
block63:;
goto block61;
block62:;
// line 1
// line 852
frost$core$Bit $tmp3233 = frost$core$Bit$init$builtin_bit(false);
*(&local17) = $tmp3233;
goto block61;
block61:;
// line 856
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
// line 857
org$frostlang$frostc$MethodRef* $tmp3234 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3235 = &$tmp3234->value;
org$frostlang$frostc$MethodDecl* $tmp3236 = *$tmp3235;
frost$core$Bit $tmp3237 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit($tmp3236);
bool $tmp3238 = $tmp3237.value;
if ($tmp3238) goto block66; else goto block68;
block66:;
// line 858
org$frostlang$frostc$MethodRef* $tmp3239 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3240 = &$tmp3239->value;
org$frostlang$frostc$MethodDecl* $tmp3241 = *$tmp3240;
org$frostlang$frostc$Type* $tmp3242 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(param0, $tmp3241);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3242));
org$frostlang$frostc$Type* $tmp3243 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3243));
*(&local18) = $tmp3242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3242));
goto block67;
block68:;
// line 1
// line 861
org$frostlang$frostc$MethodRef* $tmp3244 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3245 = &$tmp3244->value;
org$frostlang$frostc$MethodDecl* $tmp3246 = *$tmp3245;
org$frostlang$frostc$MethodRef* $tmp3247 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3248 = &$tmp3247->value;
org$frostlang$frostc$MethodDecl* $tmp3249 = *$tmp3248;
frost$core$Weak** $tmp3250 = &$tmp3249->owner;
frost$core$Weak* $tmp3251 = *$tmp3250;
frost$core$Object* $tmp3252 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3251);
org$frostlang$frostc$Type** $tmp3253 = &((org$frostlang$frostc$ClassDecl*) $tmp3252)->type;
org$frostlang$frostc$Type* $tmp3254 = *$tmp3253;
frost$core$Bit $tmp3255 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp3256 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp3246, $tmp3254, $tmp3255);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
org$frostlang$frostc$Type* $tmp3257 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3257));
*(&local18) = $tmp3256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3256));
frost$core$Frost$unref$frost$core$Object$Q($tmp3252);
goto block67;
block67:;
// line 863
org$frostlang$frostc$Type* $tmp3258 = *(&local18);
frost$core$Bit $tmp3259 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp3258);
bool $tmp3260 = $tmp3259.value;
if ($tmp3260) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp3261 = (frost$core$Int64) {863};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3262, $tmp3261);
abort(); // unreachable
block69:;
// line 864
org$frostlang$frostc$MethodRef* $tmp3263 = *(&local6);
org$frostlang$frostc$Type** $tmp3264 = &$tmp3263->effectiveType;
org$frostlang$frostc$Type* $tmp3265 = *$tmp3264;
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3265));
org$frostlang$frostc$Type* $tmp3266 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3266));
*(&local19) = $tmp3265;
// line 865
org$frostlang$frostc$Type* $tmp3267 = *(&local19);
frost$core$Bit $tmp3268 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp3267);
bool $tmp3269 = $tmp3268.value;
if ($tmp3269) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp3270 = (frost$core$Int64) {865};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3271, $tmp3270);
abort(); // unreachable
block71:;
// line 866
frost$collections$Array* $tmp3272 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp3273 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3273->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3273 = $tmp3273->next;
}
$fn3275 $tmp3274 = $tmp3273->methods[0];
frost$core$Int64 $tmp3276 = $tmp3274(((frost$collections$CollectionView*) param4));
frost$collections$Array$init$frost$core$Int64($tmp3272, $tmp3276);
*(&local20) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
frost$collections$Array* $tmp3277 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3277));
*(&local20) = $tmp3272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
// line 867
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 868
frost$core$Bit $tmp3278 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3279 = $tmp3278.value;
if ($tmp3279) goto block73; else goto block75;
block73:;
// line 869
frost$core$Int64* $tmp3280 = &param2->$rawValue;
frost$core$Int64 $tmp3281 = *$tmp3280;
frost$core$Int64 $tmp3282 = (frost$core$Int64) {14};
frost$core$Bit $tmp3283 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3281, $tmp3282);
bool $tmp3284 = $tmp3283.value;
if ($tmp3284) goto block77; else goto block78;
block77:;
goto block76;
block78:;
// line 874
org$frostlang$frostc$MethodRef* $tmp3285 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3286 = &$tmp3285->value;
org$frostlang$frostc$MethodDecl* $tmp3287 = *$tmp3286;
frost$core$Weak** $tmp3288 = &$tmp3287->owner;
frost$core$Weak* $tmp3289 = *$tmp3288;
frost$core$Object* $tmp3290 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3289);
frost$core$String** $tmp3291 = &((org$frostlang$frostc$ClassDecl*) $tmp3290)->name;
frost$core$String* $tmp3292 = *$tmp3291;
frost$core$Bit $tmp3293 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3292, &$s3294);
bool $tmp3295 = $tmp3293.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3290);
if ($tmp3295) goto block79; else goto block81;
block79:;
// line 875
org$frostlang$frostc$Type* $tmp3296 = *(&local18);
frost$core$Int64 $tmp3297 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp3298 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3296, $tmp3297);
org$frostlang$frostc$IR$Value* $tmp3299 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp3298);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3299));
org$frostlang$frostc$IR$Value* $tmp3300 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3300));
*(&local21) = $tmp3299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3298));
goto block80;
block81:;
// line 878
frost$core$Bit $tmp3301 = *(&local17);
bool $tmp3302 = $tmp3301.value;
if ($tmp3302) goto block82; else goto block84;
block82:;
// line 879
frost$core$Bit $tmp3303 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp3304 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3303);
org$frostlang$frostc$MethodRef* $tmp3305 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3306 = &$tmp3305->value;
org$frostlang$frostc$MethodDecl* $tmp3307 = *$tmp3306;
frost$core$Weak** $tmp3308 = &$tmp3307->owner;
frost$core$Weak* $tmp3309 = *$tmp3308;
frost$core$Object* $tmp3310 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3309);
org$frostlang$frostc$Type** $tmp3311 = &((org$frostlang$frostc$ClassDecl*) $tmp3310)->type;
org$frostlang$frostc$Type* $tmp3312 = *$tmp3311;
org$frostlang$frostc$IR$Value* $tmp3313 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3304, $tmp3312);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3313));
org$frostlang$frostc$IR$Value* $tmp3314 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3314));
*(&local21) = $tmp3313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3313));
frost$core$Frost$unref$frost$core$Object$Q($tmp3310);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3304));
goto block83;
block84:;
// line 1
// line 884
org$frostlang$frostc$MethodRef* $tmp3315 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3316 = &$tmp3315->value;
org$frostlang$frostc$MethodDecl* $tmp3317 = *$tmp3316;
frost$core$Weak** $tmp3318 = &$tmp3317->owner;
frost$core$Weak* $tmp3319 = *$tmp3318;
frost$core$Object* $tmp3320 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3319);
org$frostlang$frostc$Type** $tmp3321 = &((org$frostlang$frostc$ClassDecl*) $tmp3320)->type;
org$frostlang$frostc$Type* $tmp3322 = *$tmp3321;
org$frostlang$frostc$IR$Value* $tmp3323 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp3322);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3323));
org$frostlang$frostc$IR$Value* $tmp3324 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3324));
*(&local21) = $tmp3323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3323));
frost$core$Frost$unref$frost$core$Object$Q($tmp3320);
goto block83;
block83:;
goto block80;
block80:;
// line 886
org$frostlang$frostc$IR$Value* $tmp3325 = *(&local21);
frost$core$Bit $tmp3326 = frost$core$Bit$init$builtin_bit($tmp3325 == NULL);
bool $tmp3327 = $tmp3326.value;
if ($tmp3327) goto block85; else goto block86;
block85:;
// line 887
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3328 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3328));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3329 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3329));
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3330 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3330));
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3331 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3331));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3332 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3332));
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3333 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3333));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3334 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3334));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3335 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3335));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block86:;
// line 889
frost$collections$Array* $tmp3336 = *(&local20);
org$frostlang$frostc$IR$Value* $tmp3337 = *(&local21);
frost$collections$Array$add$frost$collections$Array$T($tmp3336, ((frost$core$Object*) $tmp3337));
goto block76;
block76:;
goto block74;
block75:;
// line 893
org$frostlang$frostc$MethodRef* $tmp3338 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3339 = &$tmp3338->value;
org$frostlang$frostc$MethodDecl* $tmp3340 = *$tmp3339;
org$frostlang$frostc$Annotations** $tmp3341 = &$tmp3340->annotations;
org$frostlang$frostc$Annotations* $tmp3342 = *$tmp3341;
frost$core$Bit $tmp3343 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3342);
frost$core$Bit $tmp3344 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3343);
bool $tmp3345 = $tmp3344.value;
if ($tmp3345) goto block89; else goto block90;
block89:;
org$frostlang$frostc$MethodRef* $tmp3346 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3347 = &$tmp3346->value;
org$frostlang$frostc$MethodDecl* $tmp3348 = *$tmp3347;
frost$core$Bit $tmp3349 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp3348);
frost$core$Bit $tmp3350 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3349);
*(&local22) = $tmp3350;
goto block91;
block90:;
*(&local22) = $tmp3344;
goto block91;
block91:;
frost$core$Bit $tmp3351 = *(&local22);
bool $tmp3352 = $tmp3351.value;
if ($tmp3352) goto block87; else goto block92;
block87:;
// line 894
frost$core$Bit $tmp3353 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp3354 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3353);
org$frostlang$frostc$MethodRef* $tmp3355 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3356 = &$tmp3355->value;
org$frostlang$frostc$MethodDecl* $tmp3357 = *$tmp3356;
frost$core$Weak** $tmp3358 = &$tmp3357->owner;
frost$core$Weak* $tmp3359 = *$tmp3358;
frost$core$Object* $tmp3360 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3359);
org$frostlang$frostc$Type** $tmp3361 = &((org$frostlang$frostc$ClassDecl*) $tmp3360)->type;
org$frostlang$frostc$Type* $tmp3362 = *$tmp3361;
org$frostlang$frostc$IR$Value* $tmp3363 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3354, $tmp3362);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3363));
org$frostlang$frostc$IR$Value* $tmp3364 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3364));
*(&local21) = $tmp3363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3363));
frost$core$Frost$unref$frost$core$Object$Q($tmp3360);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3354));
// line 896
org$frostlang$frostc$IR$Value* $tmp3365 = *(&local21);
frost$core$Bit $tmp3366 = frost$core$Bit$init$builtin_bit($tmp3365 == NULL);
bool $tmp3367 = $tmp3366.value;
if ($tmp3367) goto block93; else goto block94;
block93:;
// line 897
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3368 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3368));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3369 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3369));
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3370 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3370));
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3371 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3371));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3372 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3372));
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3373 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3373));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3374 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3374));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3375 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3375));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block94:;
// line 899
frost$collections$Array* $tmp3376 = *(&local20);
org$frostlang$frostc$IR$Value* $tmp3377 = *(&local21);
frost$collections$Array$add$frost$collections$Array$T($tmp3376, ((frost$core$Object*) $tmp3377));
goto block88;
block92:;
// line 1
// line 902
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3378 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3378));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block88;
block88:;
goto block74;
block74:;
// line 904
// line 905
org$frostlang$frostc$MethodRef* $tmp3379 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3380 = &$tmp3379->value;
org$frostlang$frostc$MethodDecl* $tmp3381 = *$tmp3380;
org$frostlang$frostc$Annotations** $tmp3382 = &$tmp3381->annotations;
org$frostlang$frostc$Annotations* $tmp3383 = *$tmp3382;
frost$core$Bit $tmp3384 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3383);
frost$core$Bit $tmp3385 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3384);
bool $tmp3386 = $tmp3385.value;
if ($tmp3386) goto block97; else goto block98;
block97:;
frost$core$Bit $tmp3387 = frost$core$Bit$init$builtin_bit(param2 != NULL);
*(&local25) = $tmp3387;
goto block99;
block98:;
*(&local25) = $tmp3385;
goto block99;
block99:;
frost$core$Bit $tmp3388 = *(&local25);
bool $tmp3389 = $tmp3388.value;
if ($tmp3389) goto block100; else goto block101;
block100:;
$fn3391 $tmp3390 = ($fn3391) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3392 = $tmp3390(param2);
frost$core$Bit $tmp3393 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp3392);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3392));
*(&local24) = $tmp3393;
goto block102;
block101:;
*(&local24) = $tmp3388;
goto block102;
block102:;
frost$core$Bit $tmp3394 = *(&local24);
bool $tmp3395 = $tmp3394.value;
if ($tmp3395) goto block95; else goto block103;
block95:;
// line 906
frost$core$Int64 $tmp3396 = (frost$core$Int64) {0};
*(&local23) = $tmp3396;
goto block96;
block103:;
// line 1
// line 909
frost$core$Int64 $tmp3397 = (frost$core$Int64) {1};
*(&local23) = $tmp3397;
goto block96;
block96:;
// line 911
frost$core$Int64 $tmp3398 = (frost$core$Int64) {0};
ITable* $tmp3399 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3399->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3399 = $tmp3399->next;
}
$fn3401 $tmp3400 = $tmp3399->methods[0];
frost$core$Int64 $tmp3402 = $tmp3400(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp3403 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3404 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3398, $tmp3402, $tmp3403);
frost$core$Int64 $tmp3405 = $tmp3404.min;
*(&local26) = $tmp3405;
frost$core$Int64 $tmp3406 = $tmp3404.max;
frost$core$Bit $tmp3407 = $tmp3404.inclusive;
bool $tmp3408 = $tmp3407.value;
frost$core$Int64 $tmp3409 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3410 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3409);
if ($tmp3408) goto block107; else goto block108;
block107:;
int64_t $tmp3411 = $tmp3405.value;
int64_t $tmp3412 = $tmp3406.value;
bool $tmp3413 = $tmp3411 <= $tmp3412;
frost$core$Bit $tmp3414 = (frost$core$Bit) {$tmp3413};
bool $tmp3415 = $tmp3414.value;
if ($tmp3415) goto block104; else goto block105;
block108:;
int64_t $tmp3416 = $tmp3405.value;
int64_t $tmp3417 = $tmp3406.value;
bool $tmp3418 = $tmp3416 < $tmp3417;
frost$core$Bit $tmp3419 = (frost$core$Bit) {$tmp3418};
bool $tmp3420 = $tmp3419.value;
if ($tmp3420) goto block104; else goto block105;
block104:;
// line 912
frost$core$Int64 $tmp3421 = *(&local26);
ITable* $tmp3422 = param4->$class->itable;
while ($tmp3422->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp3422 = $tmp3422->next;
}
$fn3424 $tmp3423 = $tmp3422->methods[0];
frost$core$Object* $tmp3425 = $tmp3423(param4, $tmp3421);
org$frostlang$frostc$Compiler$TypeContext* $tmp3426 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3427 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp3428 = *(&local19);
frost$core$Int64 $tmp3429 = *(&local26);
org$frostlang$frostc$Type* $tmp3430 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3428, $tmp3429);
frost$core$Bit $tmp3431 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp3426, $tmp3427, $tmp3430, $tmp3431);
org$frostlang$frostc$IR$Value* $tmp3432 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp3425), $tmp3426);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3432));
org$frostlang$frostc$IR$Value* $tmp3433 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3433));
*(&local27) = $tmp3432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3426));
frost$core$Frost$unref$frost$core$Object$Q($tmp3425);
// line 914
org$frostlang$frostc$IR$Value* $tmp3434 = *(&local27);
frost$core$Bit $tmp3435 = frost$core$Bit$init$builtin_bit($tmp3434 == NULL);
bool $tmp3436 = $tmp3435.value;
if ($tmp3436) goto block109; else goto block110;
block109:;
// line 915
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3437 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3437));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3438 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3438));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3439 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3439));
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3440 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3440));
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3441 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3441));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3442 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3442));
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3443 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3443));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3444 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3444));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3445 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3445));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block110:;
// line 917
org$frostlang$frostc$IR$Value* $tmp3446 = *(&local27);
$fn3448 $tmp3447 = ($fn3448) $tmp3446->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3449 = $tmp3447($tmp3446);
org$frostlang$frostc$Type* $tmp3450 = *(&local18);
frost$core$Int64 $tmp3451 = *(&local26);
frost$core$Int64 $tmp3452 = *(&local23);
int64_t $tmp3453 = $tmp3451.value;
int64_t $tmp3454 = $tmp3452.value;
int64_t $tmp3455 = $tmp3453 + $tmp3454;
frost$core$Int64 $tmp3456 = (frost$core$Int64) {$tmp3455};
org$frostlang$frostc$Type* $tmp3457 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3450, $tmp3456);
ITable* $tmp3458 = ((frost$core$Equatable*) $tmp3449)->$class->itable;
while ($tmp3458->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3458 = $tmp3458->next;
}
$fn3460 $tmp3459 = $tmp3458->methods[1];
frost$core$Bit $tmp3461 = $tmp3459(((frost$core$Equatable*) $tmp3449), ((frost$core$Equatable*) $tmp3457));
bool $tmp3462 = $tmp3461.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3449));
if ($tmp3462) goto block111; else goto block112;
block111:;
// line 918
org$frostlang$frostc$IR$Value* $tmp3463 = *(&local27);
org$frostlang$frostc$Type* $tmp3464 = *(&local18);
frost$core$Int64 $tmp3465 = *(&local26);
frost$core$Int64 $tmp3466 = *(&local23);
int64_t $tmp3467 = $tmp3465.value;
int64_t $tmp3468 = $tmp3466.value;
int64_t $tmp3469 = $tmp3467 + $tmp3468;
frost$core$Int64 $tmp3470 = (frost$core$Int64) {$tmp3469};
org$frostlang$frostc$Type* $tmp3471 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3464, $tmp3470);
org$frostlang$frostc$IR$Value* $tmp3472 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3463, $tmp3471);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3472));
org$frostlang$frostc$IR$Value* $tmp3473 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3473));
*(&local27) = $tmp3472;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3472));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3471));
goto block112;
block112:;
// line 920
org$frostlang$frostc$IR$Value* $tmp3474 = *(&local27);
frost$core$Bit $tmp3475 = frost$core$Bit$init$builtin_bit($tmp3474 == NULL);
bool $tmp3476 = $tmp3475.value;
if ($tmp3476) goto block113; else goto block114;
block113:;
// line 921
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3477 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3477));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3478 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3478));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3479 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3479));
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3480 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3480));
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3481 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3481));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3482 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3482));
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3483 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3483));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3484 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3484));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3485 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3485));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block114:;
// line 923
frost$collections$Array* $tmp3486 = *(&local20);
org$frostlang$frostc$IR$Value* $tmp3487 = *(&local27);
frost$collections$Array$add$frost$collections$Array$T($tmp3486, ((frost$core$Object*) $tmp3487));
org$frostlang$frostc$IR$Value* $tmp3488 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3488));
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block106;
block106:;
frost$core$Int64 $tmp3489 = *(&local26);
int64_t $tmp3490 = $tmp3406.value;
int64_t $tmp3491 = $tmp3489.value;
int64_t $tmp3492 = $tmp3490 - $tmp3491;
frost$core$Int64 $tmp3493 = (frost$core$Int64) {$tmp3492};
frost$core$UInt64 $tmp3494 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3493);
if ($tmp3408) goto block116; else goto block117;
block116:;
uint64_t $tmp3495 = $tmp3494.value;
uint64_t $tmp3496 = $tmp3410.value;
bool $tmp3497 = $tmp3495 >= $tmp3496;
frost$core$Bit $tmp3498 = (frost$core$Bit) {$tmp3497};
bool $tmp3499 = $tmp3498.value;
if ($tmp3499) goto block115; else goto block105;
block117:;
uint64_t $tmp3500 = $tmp3494.value;
uint64_t $tmp3501 = $tmp3410.value;
bool $tmp3502 = $tmp3500 > $tmp3501;
frost$core$Bit $tmp3503 = (frost$core$Bit) {$tmp3502};
bool $tmp3504 = $tmp3503.value;
if ($tmp3504) goto block115; else goto block105;
block115:;
int64_t $tmp3505 = $tmp3489.value;
int64_t $tmp3506 = $tmp3409.value;
int64_t $tmp3507 = $tmp3505 + $tmp3506;
frost$core$Int64 $tmp3508 = (frost$core$Int64) {$tmp3507};
*(&local26) = $tmp3508;
goto block104;
block105:;
// line 925
// line 926
frost$core$Bit $tmp3509 = *(&local17);
frost$core$Bit $tmp3510 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3509);
bool $tmp3511 = $tmp3510.value;
if ($tmp3511) goto block120; else goto block121;
block120:;
org$frostlang$frostc$MethodRef* $tmp3512 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3513 = &$tmp3512->value;
org$frostlang$frostc$MethodDecl* $tmp3514 = *$tmp3513;
frost$core$Bit $tmp3515 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit($tmp3514);
*(&local29) = $tmp3515;
goto block122;
block121:;
*(&local29) = $tmp3510;
goto block122;
block122:;
frost$core$Bit $tmp3516 = *(&local29);
bool $tmp3517 = $tmp3516.value;
if ($tmp3517) goto block118; else goto block123;
block118:;
// line 927
// line 928
org$frostlang$frostc$MethodRef* $tmp3518 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3519 = &$tmp3518->value;
org$frostlang$frostc$MethodDecl* $tmp3520 = *$tmp3519;
frost$core$Weak** $tmp3521 = &$tmp3520->owner;
frost$core$Weak* $tmp3522 = *$tmp3521;
frost$core$Object* $tmp3523 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3522);
org$frostlang$frostc$ClassDecl$Kind* $tmp3524 = &((org$frostlang$frostc$ClassDecl*) $tmp3523)->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp3525 = *$tmp3524;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3526;
$tmp3526 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3526->value = $tmp3525;
frost$core$Int64 $tmp3527 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp3528 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp3527);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp3529;
$tmp3529 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp3529->value = $tmp3528;
ITable* $tmp3530 = ((frost$core$Equatable*) $tmp3526)->$class->itable;
while ($tmp3530->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3530 = $tmp3530->next;
}
$fn3532 $tmp3531 = $tmp3530->methods[0];
frost$core$Bit $tmp3533 = $tmp3531(((frost$core$Equatable*) $tmp3526), ((frost$core$Equatable*) $tmp3529));
bool $tmp3534 = $tmp3533.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3529)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3526)));
frost$core$Frost$unref$frost$core$Object$Q($tmp3523);
if ($tmp3534) goto block124; else goto block126;
block124:;
// line 929
org$frostlang$frostc$IR* $tmp3535 = *(&local5);
org$frostlang$frostc$IR$Statement* $tmp3536 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3537 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp3538 = *(&local21);
org$frostlang$frostc$MethodRef* $tmp3539 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3540 = &$tmp3539->value;
org$frostlang$frostc$MethodDecl* $tmp3541 = *$tmp3540;
frost$core$Weak** $tmp3542 = &$tmp3541->owner;
frost$core$Weak* $tmp3543 = *$tmp3542;
frost$core$Object* $tmp3544 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3543);
org$frostlang$frostc$MethodRef* $tmp3545 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3546 = &$tmp3545->value;
org$frostlang$frostc$MethodDecl* $tmp3547 = *$tmp3546;
frost$core$Int64 $tmp3548 = org$frostlang$frostc$Compiler$getVTableIndex$org$frostlang$frostc$MethodDecl$R$frost$core$Int64(param0, $tmp3547);
org$frostlang$frostc$Type* $tmp3549 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp3550 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp3549);
frost$collections$ListView* $tmp3551 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp3550);
ITable* $tmp3552 = ((frost$collections$CollectionView*) $tmp3551)->$class->itable;
while ($tmp3552->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3552 = $tmp3552->next;
}
$fn3554 $tmp3553 = $tmp3552->methods[0];
frost$core$Int64 $tmp3555 = $tmp3553(((frost$collections$CollectionView*) $tmp3551));
int64_t $tmp3556 = $tmp3548.value;
int64_t $tmp3557 = $tmp3555.value;
int64_t $tmp3558 = $tmp3556 - $tmp3557;
frost$core$Int64 $tmp3559 = (frost$core$Int64) {$tmp3558};
org$frostlang$frostc$Type* $tmp3560 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type($tmp3536, $tmp3537, param1, $tmp3538, ((org$frostlang$frostc$ClassDecl*) $tmp3544), $tmp3559, $tmp3560);
$fn3562 $tmp3561 = ($fn3562) $tmp3535->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3563 = $tmp3561($tmp3535, $tmp3536);
*(&local30) = $tmp3563;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3549));
frost$core$Frost$unref$frost$core$Object$Q($tmp3544);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3536));
goto block125;
block126:;
// line 1
// line 936
org$frostlang$frostc$IR* $tmp3564 = *(&local5);
org$frostlang$frostc$IR$Statement* $tmp3565 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3566 = (frost$core$Int64) {12};
org$frostlang$frostc$IR$Value* $tmp3567 = *(&local21);
org$frostlang$frostc$MethodRef* $tmp3568 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3569 = &$tmp3568->value;
org$frostlang$frostc$MethodDecl* $tmp3570 = *$tmp3569;
frost$core$Int64 $tmp3571 = org$frostlang$frostc$Compiler$getVTableIndex$org$frostlang$frostc$MethodDecl$R$frost$core$Int64(param0, $tmp3570);
org$frostlang$frostc$Type* $tmp3572 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type($tmp3565, $tmp3566, param1, $tmp3567, $tmp3571, $tmp3572);
$fn3574 $tmp3573 = ($fn3574) $tmp3564->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3575 = $tmp3573($tmp3564, $tmp3565);
*(&local30) = $tmp3575;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3565));
goto block125;
block125:;
// line 939
org$frostlang$frostc$IR* $tmp3576 = *(&local5);
org$frostlang$frostc$IR$Statement* $tmp3577 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3578 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp3579 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3580 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3581 = *(&local30);
org$frostlang$frostc$Type* $tmp3582 = *(&local18);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3579, $tmp3580, $tmp3581, $tmp3582);
frost$collections$Array* $tmp3583 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp3584 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3583);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp3577, $tmp3578, param1, $tmp3579, $tmp3584);
$fn3586 $tmp3585 = ($fn3586) $tmp3576->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3587 = $tmp3585($tmp3576, $tmp3577);
*(&local28) = $tmp3587;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3584));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3577));
goto block119;
block123:;
// line 1
// line 943
org$frostlang$frostc$IR* $tmp3588 = *(&local5);
org$frostlang$frostc$IR$Statement* $tmp3589 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3590 = (frost$core$Int64) {26};
org$frostlang$frostc$MethodRef* $tmp3591 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3592 = &$tmp3591->value;
org$frostlang$frostc$MethodDecl* $tmp3593 = *$tmp3592;
frost$collections$Array* $tmp3594 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp3595 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp3594);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp3589, $tmp3590, param1, $tmp3593, $tmp3595);
$fn3597 $tmp3596 = ($fn3597) $tmp3588->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3598 = $tmp3596($tmp3588, $tmp3589);
*(&local28) = $tmp3598;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3589));
goto block119;
block119:;
// line 946
org$frostlang$frostc$MethodRef* $tmp3599 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3600 = &$tmp3599->value;
org$frostlang$frostc$MethodDecl* $tmp3601 = *$tmp3600;
org$frostlang$frostc$Type** $tmp3602 = &$tmp3601->returnType;
org$frostlang$frostc$Type* $tmp3603 = *$tmp3602;
org$frostlang$frostc$Type* $tmp3604 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp3605 = ((frost$core$Equatable*) $tmp3603)->$class->itable;
while ($tmp3605->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3605 = $tmp3605->next;
}
$fn3607 $tmp3606 = $tmp3605->methods[1];
frost$core$Bit $tmp3608 = $tmp3606(((frost$core$Equatable*) $tmp3603), ((frost$core$Equatable*) $tmp3604));
bool $tmp3609 = $tmp3608.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3604));
if ($tmp3609) goto block127; else goto block128;
block127:;
// line 947
org$frostlang$frostc$IR$Value* $tmp3610 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3611 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3612 = *(&local28);
org$frostlang$frostc$Type* $tmp3613 = *(&local18);
org$frostlang$frostc$Type* $tmp3614 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3613);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3610, $tmp3611, $tmp3612, $tmp3614);
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
org$frostlang$frostc$IR$Value* $tmp3615 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3615));
*(&local31) = $tmp3610;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3610));
// line 948
org$frostlang$frostc$Type* $tmp3616 = *(&local18);
org$frostlang$frostc$Type* $tmp3617 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3616);
frost$core$Bit $tmp3618 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp3617);
bool $tmp3619 = $tmp3618.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3617));
if ($tmp3619) goto block129; else goto block130;
block129:;
// line 949
frost$collections$Stack** $tmp3620 = &param0->enclosingContexts;
frost$collections$Stack* $tmp3621 = *$tmp3620;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp3622 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp3623 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp3624 = *(&local31);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp3622, $tmp3623, $tmp3624);
frost$collections$Stack$push$frost$collections$Stack$T($tmp3621, ((frost$core$Object*) $tmp3622));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3622));
goto block130;
block130:;
// line 951
org$frostlang$frostc$IR$Value* $tmp3625 = *(&local31);
org$frostlang$frostc$IR$Value* $tmp3626 = org$frostlang$frostc$expression$Call$handleErrors$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3625);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
org$frostlang$frostc$IR$Value* $tmp3627 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3627));
*(&local31) = $tmp3626;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3626));
// line 952
org$frostlang$frostc$IR$Value* $tmp3628 = *(&local31);
frost$core$Bit $tmp3629 = frost$core$Bit$init$builtin_bit($tmp3628 == NULL);
bool $tmp3630 = $tmp3629.value;
if ($tmp3630) goto block131; else goto block132;
block131:;
// line 953
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3631 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3631));
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3632 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3632));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3633 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3633));
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3634 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3634));
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3635 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3635));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3636 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3636));
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3637 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3637));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3638 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3638));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3639 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3639));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block132:;
// line 955
org$frostlang$frostc$MethodRef* $tmp3640 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3641 = &$tmp3640->value;
org$frostlang$frostc$MethodDecl* $tmp3642 = *$tmp3641;
org$frostlang$frostc$MethodDecl$Kind* $tmp3643 = &$tmp3642->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3644 = *$tmp3643;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3645;
$tmp3645 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3645->value = $tmp3644;
frost$core$Int64 $tmp3646 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3647 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3646);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3648;
$tmp3648 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3648->value = $tmp3647;
ITable* $tmp3649 = ((frost$core$Equatable*) $tmp3645)->$class->itable;
while ($tmp3649->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3649 = $tmp3649->next;
}
$fn3651 $tmp3650 = $tmp3649->methods[1];
frost$core$Bit $tmp3652 = $tmp3650(((frost$core$Equatable*) $tmp3645), ((frost$core$Equatable*) $tmp3648));
bool $tmp3653 = $tmp3652.value;
if ($tmp3653) goto block135; else goto block136;
block135:;
org$frostlang$frostc$Type* $tmp3654 = *(&local19);
org$frostlang$frostc$Type* $tmp3655 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3654);
org$frostlang$frostc$Type* $tmp3656 = *(&local18);
org$frostlang$frostc$Type* $tmp3657 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3656);
ITable* $tmp3658 = ((frost$core$Equatable*) $tmp3655)->$class->itable;
while ($tmp3658->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3658 = $tmp3658->next;
}
$fn3660 $tmp3659 = $tmp3658->methods[1];
frost$core$Bit $tmp3661 = $tmp3659(((frost$core$Equatable*) $tmp3655), ((frost$core$Equatable*) $tmp3657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3655));
*(&local32) = $tmp3661;
goto block137;
block136:;
*(&local32) = $tmp3652;
goto block137;
block137:;
frost$core$Bit $tmp3662 = *(&local32);
bool $tmp3663 = $tmp3662.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3648)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3645)));
if ($tmp3663) goto block133; else goto block134;
block133:;
// line 957
org$frostlang$frostc$IR$Value* $tmp3664 = *(&local31);
org$frostlang$frostc$Type* $tmp3665 = *(&local19);
org$frostlang$frostc$Type* $tmp3666 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp3665);
org$frostlang$frostc$IR$Value* $tmp3667 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3664, $tmp3666);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
org$frostlang$frostc$IR$Value* $tmp3668 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
*(&local31) = $tmp3667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3666));
// line 958
org$frostlang$frostc$IR$Value* $tmp3669 = *(&local31);
frost$core$Bit $tmp3670 = frost$core$Bit$init$builtin_bit($tmp3669 == NULL);
bool $tmp3671 = $tmp3670.value;
if ($tmp3671) goto block138; else goto block139;
block138:;
// line 959
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3672 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3672));
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3673 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3674 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3675 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3675));
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3676 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3676));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3677 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3677));
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3678 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3678));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3679 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3679));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3680 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3680));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block139:;
goto block134;
block134:;
// line 962
org$frostlang$frostc$IR$Value* $tmp3681 = *(&local31);
org$frostlang$frostc$IR$Value* $tmp3682 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3681, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3682));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3682));
org$frostlang$frostc$IR$Value* $tmp3683 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3683));
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3684 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3684));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3685 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3685));
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3686 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3686));
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3687 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3687));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3688 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3688));
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3689 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3689));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3690 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3690));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3691 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3691));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = $tmp3682;
goto block1;
block128:;
// line 964
org$frostlang$frostc$Compiler$TypeContext* $tmp3692 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3693 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3692, $tmp3693);
ITable* $tmp3694 = ((frost$core$Equatable*) param5)->$class->itable;
while ($tmp3694->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3694 = $tmp3694->next;
}
$fn3696 $tmp3695 = $tmp3694->methods[1];
frost$core$Bit $tmp3697 = $tmp3695(((frost$core$Equatable*) param5), ((frost$core$Equatable*) $tmp3692));
bool $tmp3698 = $tmp3697.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3692));
if ($tmp3698) goto block140; else goto block141;
block140:;
// line 965
org$frostlang$frostc$MethodRef* $tmp3699 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3700 = &$tmp3699->value;
org$frostlang$frostc$MethodDecl* $tmp3701 = *$tmp3700;
frost$core$String* $tmp3702 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3701);
frost$core$String* $tmp3703 = frost$core$String$get_asString$R$frost$core$String($tmp3702);
frost$core$String* $tmp3704 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3703, &$s3705);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3704);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3702));
goto block141;
block141:;
// line 967
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3706 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3706));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3707 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3707));
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3708 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3708));
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3709 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3709));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3710 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3710));
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3711 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3711));
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3712 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3712));
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3713 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3713));
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp3714 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp3715 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp3716 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp3714, $tmp3715);
bool $tmp3717 = $tmp3716.value;
if ($tmp3717) goto block2; else goto block3;
block2:;
org$frostlang$frostc$IR$Value* $tmp3718 = *(&local0);
frost$core$Bit $tmp3719 = frost$core$Bit$init$builtin_bit($tmp3718 == NULL);
*(&local4) = $tmp3719;
goto block4;
block3:;
*(&local4) = $tmp3716;
goto block4;
block4:;
frost$core$Bit $tmp3720 = *(&local4);
bool $tmp3721 = $tmp3720.value;
if ($tmp3721) goto block5; else goto block6;
block5:;
*(&local3) = $tmp3720;
goto block7;
block6:;
org$frostlang$frostc$IR$Value* $tmp3722 = *(&local0);
frost$core$Bit $tmp3723 = frost$core$Bit$init$builtin_bit($tmp3722 != NULL);
*(&local3) = $tmp3723;
goto block7;
block7:;
frost$core$Bit $tmp3724 = *(&local3);
bool $tmp3725 = $tmp3724.value;
if ($tmp3725) goto block8; else goto block9;
block8:;
*(&local2) = $tmp3724;
goto block10;
block9:;
frost$core$Int64* $tmp3726 = &param0->errorCount;
frost$core$Int64 $tmp3727 = *$tmp3726;
frost$core$Int64 $tmp3728 = (frost$core$Int64) {0};
int64_t $tmp3729 = $tmp3727.value;
int64_t $tmp3730 = $tmp3728.value;
bool $tmp3731 = $tmp3729 > $tmp3730;
frost$core$Bit $tmp3732 = (frost$core$Bit) {$tmp3731};
*(&local2) = $tmp3732;
goto block10;
block10:;
frost$core$Bit $tmp3733 = *(&local2);
bool $tmp3734 = $tmp3733.value;
if ($tmp3734) goto block11; else goto block12;
block11:;
*(&local1) = $tmp3733;
goto block13;
block12:;
frost$core$Bit* $tmp3735 = &param0->reportErrors;
frost$core$Bit $tmp3736 = *$tmp3735;
frost$core$Bit $tmp3737 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3736);
*(&local1) = $tmp3737;
goto block13;
block13:;
frost$core$Bit $tmp3738 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3714));
bool $tmp3739 = $tmp3738.value;
if ($tmp3739) goto block14; else goto block15;
block14:;
org$frostlang$frostc$IR$Value* $tmp3740 = *(&local0);
return $tmp3740;
block15:;
frost$core$Int64 $tmp3741 = (frost$core$Int64) {763};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3742, $tmp3741, &$s3743);
abort(); // unreachable

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$core$String* param3, frost$collections$ListView* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
// line 973
$fn3745 $tmp3744 = ($fn3745) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3746 = $tmp3744(param2);
org$frostlang$frostc$ClassDecl* $tmp3747 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp3746);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3747));
org$frostlang$frostc$ClassDecl* $tmp3748 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3748));
*(&local0) = $tmp3747;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3746));
// line 974
org$frostlang$frostc$ClassDecl* $tmp3749 = *(&local0);
frost$core$Bit $tmp3750 = frost$core$Bit$init$builtin_bit($tmp3749 == NULL);
bool $tmp3751 = $tmp3750.value;
if ($tmp3751) goto block1; else goto block2;
block1:;
// line 975
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp3752 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3752));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 977
org$frostlang$frostc$ClassDecl* $tmp3753 = *(&local0);
org$frostlang$frostc$SymbolTable* $tmp3754 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp3753);
org$frostlang$frostc$Symbol* $tmp3755 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp3754, param3);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3755));
org$frostlang$frostc$Symbol* $tmp3756 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3756));
*(&local1) = $tmp3755;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3754));
// line 978
org$frostlang$frostc$Symbol* $tmp3757 = *(&local1);
frost$core$Bit $tmp3758 = frost$core$Bit$init$builtin_bit($tmp3757 == NULL);
bool $tmp3759 = $tmp3758.value;
if ($tmp3759) goto block3; else goto block4;
block3:;
// line 979
org$frostlang$frostc$ClassDecl* $tmp3760 = *(&local0);
frost$core$String** $tmp3761 = &$tmp3760->name;
frost$core$String* $tmp3762 = *$tmp3761;
frost$core$String* $tmp3763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3764, $tmp3762);
frost$core$String* $tmp3765 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3763, &$s3766);
frost$core$String* $tmp3767 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3765, param3);
frost$core$String* $tmp3768 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3767, &$s3769);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3768);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3768));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3765));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3763));
// line 980
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Symbol* $tmp3770 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3770));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3771 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3771));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// line 982
org$frostlang$frostc$Symbol* $tmp3772 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp3773 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp3772);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3773));
org$frostlang$frostc$IR$Value* $tmp3774 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3774));
*(&local2) = $tmp3773;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3773));
// line 983
org$frostlang$frostc$IR$Value* $tmp3775 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp3776 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3775, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3776));
org$frostlang$frostc$IR$Value* $tmp3777 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Symbol* $tmp3778 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3778));
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3779 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3779));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3776;

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
frost$core$Bit local17;
org$frostlang$frostc$Type* local18 = NULL;
frost$core$Bit local19;
frost$core$Bit local20;
// line 992
frost$core$Int64* $tmp3780 = &param2->$rawValue;
frost$core$Int64 $tmp3781 = *$tmp3780;
frost$core$Int64 $tmp3782 = (frost$core$Int64) {21};
frost$core$Bit $tmp3783 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3781, $tmp3782);
bool $tmp3784 = $tmp3783.value;
if ($tmp3784) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Position* $tmp3785 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp3786 = *$tmp3785;
frost$core$String** $tmp3787 = (frost$core$String**) (param2->$data + 16);
frost$core$String* $tmp3788 = *$tmp3787;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3788));
frost$core$String* $tmp3789 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3789));
*(&local0) = $tmp3788;
org$frostlang$frostc$FixedArray** $tmp3790 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp3791 = *$tmp3790;
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3791));
org$frostlang$frostc$FixedArray* $tmp3792 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3792));
*(&local1) = $tmp3791;
// line 994
org$frostlang$frostc$Type* $tmp3793 = org$frostlang$frostc$Compiler$tryResolveType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3793));
org$frostlang$frostc$Type* $tmp3794 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3794));
*(&local2) = $tmp3793;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3793));
// line 995
org$frostlang$frostc$Type* $tmp3795 = *(&local2);
frost$core$Bit $tmp3796 = frost$core$Bit$init$builtin_bit($tmp3795 != NULL);
bool $tmp3797 = $tmp3796.value;
if ($tmp3797) goto block3; else goto block4;
block3:;
// line 996
org$frostlang$frostc$Type* $tmp3798 = *(&local2);
frost$core$Bit $tmp3799 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp3798);
frost$core$Bit $tmp3800 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3799);
bool $tmp3801 = $tmp3800.value;
if ($tmp3801) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp3802 = (frost$core$Int64) {996};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3803, $tmp3802);
abort(); // unreachable
block5:;
// line 997
org$frostlang$frostc$IR$Value* $tmp3804 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3805 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp3806 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp3804, $tmp3805, $tmp3806);
org$frostlang$frostc$IR$Value* $tmp3807 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3804, ((frost$collections$ListView*) param3), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3807));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3804));
org$frostlang$frostc$Type* $tmp3808 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3808));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp3809 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3809));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3810 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3810));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3807;
block4:;
// line 999
frost$core$Bit $tmp3811 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp3812 = org$frostlang$frostc$Compiler$tryResolveType$org$frostlang$frostc$ASTNode$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, param2, $tmp3811);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
org$frostlang$frostc$Type* $tmp3813 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3813));
*(&local2) = $tmp3812;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3812));
// line 1000
org$frostlang$frostc$Type* $tmp3814 = *(&local2);
frost$core$Bit $tmp3815 = frost$core$Bit$init$builtin_bit($tmp3814 != NULL);
bool $tmp3816 = $tmp3815.value;
if ($tmp3816) goto block7; else goto block8;
block7:;
// line 1002
org$frostlang$frostc$Scanner** $tmp3817 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp3818 = *$tmp3817;
org$frostlang$frostc$Type* $tmp3819 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp3818, param2);
org$frostlang$frostc$Type* $tmp3820 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp3819);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3819));
// line 1003
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp3821 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3821));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp3822 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3822));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3823 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3823));
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// line 1006
frost$core$String* $tmp3824 = *(&local0);
frost$collections$Array* $tmp3825 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp3824, &$s3826);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3825));
frost$collections$Array* $tmp3827 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3827));
*(&local3) = $tmp3825;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3825));
// line 1007
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 1008
frost$collections$Array* $tmp3828 = *(&local3);
ITable* $tmp3829 = ((frost$collections$CollectionView*) $tmp3828)->$class->itable;
while ($tmp3829->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3829 = $tmp3829->next;
}
$fn3831 $tmp3830 = $tmp3829->methods[0];
frost$core$Int64 $tmp3832 = $tmp3830(((frost$collections$CollectionView*) $tmp3828));
frost$core$Int64 $tmp3833 = (frost$core$Int64) {1};
frost$core$Bit $tmp3834 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3832, $tmp3833);
bool $tmp3835 = $tmp3834.value;
if ($tmp3835) goto block9; else goto block11;
block9:;
// line 1009
org$frostlang$frostc$ASTNode* $tmp3836 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3837 = (frost$core$Int64) {23};
frost$core$String* $tmp3838 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp3839 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3836, $tmp3837, param1, $tmp3838, $tmp3839);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3836));
org$frostlang$frostc$ASTNode* $tmp3840 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3840));
*(&local4) = $tmp3836;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3836));
goto block10;
block11:;
// line 1
// line 1012
org$frostlang$frostc$ASTNode* $tmp3841 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3842 = (frost$core$Int64) {22};
frost$collections$Array* $tmp3843 = *(&local3);
frost$core$Int64 $tmp3844 = (frost$core$Int64) {0};
frost$core$Object* $tmp3845 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3843, $tmp3844);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp3841, $tmp3842, param1, ((frost$core$String*) $tmp3845));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3841));
org$frostlang$frostc$ASTNode* $tmp3846 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3846));
*(&local4) = $tmp3841;
frost$core$Frost$unref$frost$core$Object$Q($tmp3845);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3841));
// line 1013
frost$core$Int64 $tmp3847 = (frost$core$Int64) {1};
frost$collections$Array* $tmp3848 = *(&local3);
ITable* $tmp3849 = ((frost$collections$CollectionView*) $tmp3848)->$class->itable;
while ($tmp3849->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3849 = $tmp3849->next;
}
$fn3851 $tmp3850 = $tmp3849->methods[0];
frost$core$Int64 $tmp3852 = $tmp3850(((frost$collections$CollectionView*) $tmp3848));
frost$core$Int64 $tmp3853 = (frost$core$Int64) {1};
int64_t $tmp3854 = $tmp3852.value;
int64_t $tmp3855 = $tmp3853.value;
int64_t $tmp3856 = $tmp3854 - $tmp3855;
frost$core$Int64 $tmp3857 = (frost$core$Int64) {$tmp3856};
frost$core$Bit $tmp3858 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3859 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3847, $tmp3857, $tmp3858);
frost$core$Int64 $tmp3860 = $tmp3859.min;
*(&local5) = $tmp3860;
frost$core$Int64 $tmp3861 = $tmp3859.max;
frost$core$Bit $tmp3862 = $tmp3859.inclusive;
bool $tmp3863 = $tmp3862.value;
frost$core$Int64 $tmp3864 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3865 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3864);
if ($tmp3863) goto block15; else goto block16;
block15:;
int64_t $tmp3866 = $tmp3860.value;
int64_t $tmp3867 = $tmp3861.value;
bool $tmp3868 = $tmp3866 <= $tmp3867;
frost$core$Bit $tmp3869 = (frost$core$Bit) {$tmp3868};
bool $tmp3870 = $tmp3869.value;
if ($tmp3870) goto block12; else goto block13;
block16:;
int64_t $tmp3871 = $tmp3860.value;
int64_t $tmp3872 = $tmp3861.value;
bool $tmp3873 = $tmp3871 < $tmp3872;
frost$core$Bit $tmp3874 = (frost$core$Bit) {$tmp3873};
bool $tmp3875 = $tmp3874.value;
if ($tmp3875) goto block12; else goto block13;
block12:;
// line 1014
org$frostlang$frostc$ASTNode* $tmp3876 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3877 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp3878 = *(&local4);
frost$collections$Array* $tmp3879 = *(&local3);
frost$core$Int64 $tmp3880 = *(&local5);
frost$core$Object* $tmp3881 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3879, $tmp3880);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp3876, $tmp3877, param1, $tmp3878, ((frost$core$String*) $tmp3881));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
org$frostlang$frostc$ASTNode* $tmp3882 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3882));
*(&local4) = $tmp3876;
frost$core$Frost$unref$frost$core$Object$Q($tmp3881);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3876));
goto block14;
block14:;
frost$core$Int64 $tmp3883 = *(&local5);
int64_t $tmp3884 = $tmp3861.value;
int64_t $tmp3885 = $tmp3883.value;
int64_t $tmp3886 = $tmp3884 - $tmp3885;
frost$core$Int64 $tmp3887 = (frost$core$Int64) {$tmp3886};
frost$core$UInt64 $tmp3888 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp3887);
if ($tmp3863) goto block18; else goto block19;
block18:;
uint64_t $tmp3889 = $tmp3888.value;
uint64_t $tmp3890 = $tmp3865.value;
bool $tmp3891 = $tmp3889 >= $tmp3890;
frost$core$Bit $tmp3892 = (frost$core$Bit) {$tmp3891};
bool $tmp3893 = $tmp3892.value;
if ($tmp3893) goto block17; else goto block13;
block19:;
uint64_t $tmp3894 = $tmp3888.value;
uint64_t $tmp3895 = $tmp3865.value;
bool $tmp3896 = $tmp3894 > $tmp3895;
frost$core$Bit $tmp3897 = (frost$core$Bit) {$tmp3896};
bool $tmp3898 = $tmp3897.value;
if ($tmp3898) goto block17; else goto block13;
block17:;
int64_t $tmp3899 = $tmp3883.value;
int64_t $tmp3900 = $tmp3864.value;
int64_t $tmp3901 = $tmp3899 + $tmp3900;
frost$core$Int64 $tmp3902 = (frost$core$Int64) {$tmp3901};
*(&local5) = $tmp3902;
goto block12;
block13:;
// line 1016
org$frostlang$frostc$ASTNode* $tmp3903 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3904 = (frost$core$Int64) {17};
org$frostlang$frostc$ASTNode* $tmp3905 = *(&local4);
frost$collections$Array* $tmp3906 = *(&local3);
frost$collections$Array* $tmp3907 = *(&local3);
ITable* $tmp3908 = ((frost$collections$CollectionView*) $tmp3907)->$class->itable;
while ($tmp3908->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3908 = $tmp3908->next;
}
$fn3910 $tmp3909 = $tmp3908->methods[0];
frost$core$Int64 $tmp3911 = $tmp3909(((frost$collections$CollectionView*) $tmp3907));
frost$core$Int64 $tmp3912 = (frost$core$Int64) {1};
int64_t $tmp3913 = $tmp3911.value;
int64_t $tmp3914 = $tmp3912.value;
int64_t $tmp3915 = $tmp3913 - $tmp3914;
frost$core$Int64 $tmp3916 = (frost$core$Int64) {$tmp3915};
frost$core$Object* $tmp3917 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3906, $tmp3916);
org$frostlang$frostc$FixedArray* $tmp3918 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp3903, $tmp3904, param1, $tmp3905, ((frost$core$String*) $tmp3917), $tmp3918);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3903));
org$frostlang$frostc$ASTNode* $tmp3919 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3919));
*(&local4) = $tmp3903;
frost$core$Frost$unref$frost$core$Object$Q($tmp3917);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3903));
goto block10;
block10:;
// line 1019
org$frostlang$frostc$ASTNode* $tmp3920 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp3921 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$frost$core$Bit$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3920, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3921));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3921));
org$frostlang$frostc$ASTNode* $tmp3922 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3922));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp3923 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3923));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3924 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3924));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp3925 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3925));
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp3926 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3926));
*(&local0) = ((frost$core$String*) NULL);
return $tmp3921;
block1:;
// line 1022
org$frostlang$frostc$Pair* $tmp3927 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, param2);
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3927));
org$frostlang$frostc$Pair* $tmp3928 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3928));
*(&local6) = $tmp3927;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3927));
// line 1023
org$frostlang$frostc$Pair* $tmp3929 = *(&local6);
frost$core$Bit $tmp3930 = frost$core$Bit$init$builtin_bit($tmp3929 != NULL);
bool $tmp3931 = $tmp3930.value;
if ($tmp3931) goto block20; else goto block21;
block20:;
// line 1024
org$frostlang$frostc$Pair* $tmp3932 = *(&local6);
frost$core$Object** $tmp3933 = &$tmp3932->first;
frost$core$Object* $tmp3934 = *$tmp3933;
org$frostlang$frostc$Pair* $tmp3935 = *(&local6);
frost$core$Object** $tmp3936 = &$tmp3935->second;
frost$core$Object* $tmp3937 = *$tmp3936;
org$frostlang$frostc$IR$Value* $tmp3938 = org$frostlang$frostc$Compiler$compileChoiceCaseReference$org$frostlang$frostc$Position$org$frostlang$frostc$Type$org$frostlang$frostc$ChoiceCase$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$Type*) $tmp3934), ((org$frostlang$frostc$ChoiceCase*) $tmp3937), param3, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3938));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3938));
org$frostlang$frostc$Pair* $tmp3939 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3939));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp3938;
block21:;
// line 1026
frost$core$Int64* $tmp3940 = &param2->$rawValue;
frost$core$Int64 $tmp3941 = *$tmp3940;
frost$core$Int64 $tmp3942 = (frost$core$Int64) {16};
frost$core$Bit $tmp3943 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3941, $tmp3942);
bool $tmp3944 = $tmp3943.value;
if ($tmp3944) goto block23; else goto block22;
block23:;
org$frostlang$frostc$Position* $tmp3945 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp3946 = *$tmp3945;
*(&local7) = $tmp3946;
org$frostlang$frostc$ASTNode** $tmp3947 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp3948 = *$tmp3947;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3948));
org$frostlang$frostc$ASTNode* $tmp3949 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3949));
*(&local8) = $tmp3948;
frost$core$String** $tmp3950 = (frost$core$String**) (param2->$data + 24);
frost$core$String* $tmp3951 = *$tmp3950;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3951));
frost$core$String* $tmp3952 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3952));
*(&local9) = $tmp3951;
// line 1028
org$frostlang$frostc$ASTNode* $tmp3953 = *(&local8);
frost$core$Int64* $tmp3954 = &$tmp3953->$rawValue;
frost$core$Int64 $tmp3955 = *$tmp3954;
frost$core$Int64 $tmp3956 = (frost$core$Int64) {41};
frost$core$Bit $tmp3957 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3955, $tmp3956);
bool $tmp3958 = $tmp3957.value;
if ($tmp3958) goto block25; else goto block24;
block25:;
// line 1030
org$frostlang$frostc$SymbolTable** $tmp3959 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3960 = *$tmp3959;
org$frostlang$frostc$Symbol* $tmp3961 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp3960, &$s3962);
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3961));
org$frostlang$frostc$Symbol* $tmp3963 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3963));
*(&local10) = $tmp3961;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3961));
// line 1031
org$frostlang$frostc$Symbol* $tmp3964 = *(&local10);
frost$core$Bit $tmp3965 = frost$core$Bit$init$builtin_bit($tmp3964 == NULL);
bool $tmp3966 = $tmp3965.value;
if ($tmp3966) goto block26; else goto block27;
block26:;
// line 1032
org$frostlang$frostc$SymbolTable** $tmp3967 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp3968 = *$tmp3967;
org$frostlang$frostc$Symbol* $tmp3969 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp3968, &$s3970);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3969));
org$frostlang$frostc$Symbol* $tmp3971 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3971));
*(&local10) = $tmp3969;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3969));
goto block27;
block27:;
// line 1034
org$frostlang$frostc$Symbol* $tmp3972 = *(&local10);
frost$core$Bit $tmp3973 = frost$core$Bit$init$builtin_bit($tmp3972 == NULL);
bool $tmp3974 = $tmp3973.value;
if ($tmp3974) goto block28; else goto block29;
block28:;
// line 1035
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Symbol* $tmp3975 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3975));
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp3976 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3976));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp3977 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3977));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp3978 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3978));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block29:;
// line 1037
frost$collections$Array* $tmp3979 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp3979);
*(&local11) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
frost$collections$Array* $tmp3980 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3980));
*(&local11) = $tmp3979;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3979));
// line 1038
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
// line 1039
org$frostlang$frostc$Symbol* $tmp3981 = *(&local10);
org$frostlang$frostc$Symbol$Kind* $tmp3982 = &$tmp3981->kind;
org$frostlang$frostc$Symbol$Kind $tmp3983 = *$tmp3982;
frost$core$Int64 $tmp3984 = $tmp3983.$rawValue;
frost$core$Int64 $tmp3985 = (frost$core$Int64) {9};
frost$core$Bit $tmp3986 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3984, $tmp3985);
bool $tmp3987 = $tmp3986.value;
if ($tmp3987) goto block31; else goto block32;
block31:;
// line 1041
org$frostlang$frostc$Symbol* $tmp3988 = *(&local10);
org$frostlang$frostc$Type** $tmp3989 = &((org$frostlang$frostc$Variable*) $tmp3988)->type;
org$frostlang$frostc$Type* $tmp3990 = *$tmp3989;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3990));
org$frostlang$frostc$Type* $tmp3991 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3991));
*(&local12) = $tmp3990;
goto block30;
block32:;
frost$core$Int64 $tmp3992 = (frost$core$Int64) {2};
frost$core$Bit $tmp3993 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3984, $tmp3992);
bool $tmp3994 = $tmp3993.value;
if ($tmp3994) goto block33; else goto block34;
block33:;
// line 1044
org$frostlang$frostc$Symbol* $tmp3995 = *(&local10);
org$frostlang$frostc$Type** $tmp3996 = &((org$frostlang$frostc$FieldDecl*) $tmp3995)->type;
org$frostlang$frostc$Type* $tmp3997 = *$tmp3996;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3997));
org$frostlang$frostc$Type* $tmp3998 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3998));
*(&local12) = $tmp3997;
goto block30;
block34:;
// line 1047
frost$core$Bit $tmp3999 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4000 = $tmp3999.value;
if ($tmp4000) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp4001 = (frost$core$Int64) {1047};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4002, $tmp4001);
abort(); // unreachable
block35:;
goto block30;
block30:;
// line 1050
org$frostlang$frostc$Type* $tmp4003 = *(&local12);
org$frostlang$frostc$ClassDecl* $tmp4004 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp4003);
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
org$frostlang$frostc$ClassDecl* $tmp4005 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4005));
*(&local13) = $tmp4004;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4004));
// line 1051
org$frostlang$frostc$ClassDecl* $tmp4006 = *(&local13);
frost$core$Bit $tmp4007 = frost$core$Bit$init$builtin_bit($tmp4006 == NULL);
bool $tmp4008 = $tmp4007.value;
if ($tmp4008) goto block37; else goto block38;
block37:;
// line 1052
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp4009 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4009));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp4010 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4010));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp4011 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4011));
*(&local11) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp4012 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4012));
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp4013 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4013));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4014 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4014));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp4015 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4015));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block38:;
// line 1054
org$frostlang$frostc$Type* $tmp4016 = *(&local12);
org$frostlang$frostc$ClassDecl* $tmp4017 = *(&local13);
org$frostlang$frostc$Type** $tmp4018 = &$tmp4017->rawSuper;
org$frostlang$frostc$Type* $tmp4019 = *$tmp4018;
org$frostlang$frostc$Type* $tmp4020 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp4016, $tmp4019);
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4020));
org$frostlang$frostc$Type* $tmp4021 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4021));
*(&local14) = $tmp4020;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4020));
// line 1055
org$frostlang$frostc$Position $tmp4022 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp4023 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp4024 = (frost$core$Int64) {13};
org$frostlang$frostc$Type* $tmp4025 = *(&local14);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp4023, $tmp4024, $tmp4025);
frost$core$String* $tmp4026 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp4027 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp4022, $tmp4023, $tmp4026, ((frost$collections$ListView*) param3), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4023));
org$frostlang$frostc$Type* $tmp4028 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4028));
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4029 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4029));
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp4030 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp4031 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4031));
*(&local11) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp4032 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp4033 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4033));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4034 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4034));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp4035 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4035));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp4027;
block24:;
frost$core$String* $tmp4036 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4036));
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4037 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4037));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block22;
block22:;
// line 1061
org$frostlang$frostc$Compiler$TypeContext* $tmp4038 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp4039 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp4038, $tmp4039);
org$frostlang$frostc$IR$Value* $tmp4040 = org$frostlang$frostc$Compiler$compileMethodExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp4038);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
org$frostlang$frostc$IR$Value* $tmp4041 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4041));
*(&local15) = $tmp4040;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4040));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4038));
// line 1062
org$frostlang$frostc$IR$Value* $tmp4042 = *(&local15);
frost$core$Bit $tmp4043 = frost$core$Bit$init$builtin_bit($tmp4042 == NULL);
bool $tmp4044 = $tmp4043.value;
if ($tmp4044) goto block39; else goto block40;
block39:;
// line 1063
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp4045 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4045));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp4046 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4046));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block40:;
// line 1065
org$frostlang$frostc$IR$Value* $tmp4047 = *(&local15);
org$frostlang$frostc$IR$Value* $tmp4048 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4047, ((frost$collections$ListView*) param3), param5);
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
org$frostlang$frostc$IR$Value* $tmp4049 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4049));
*(&local16) = $tmp4048;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4048));
// line 1066
bool $tmp4050 = param4.value;
if ($tmp4050) goto block43; else goto block44;
block43:;
org$frostlang$frostc$IR$Value* $tmp4051 = *(&local16);
frost$core$Bit $tmp4052 = frost$core$Bit$init$builtin_bit($tmp4051 != NULL);
*(&local17) = $tmp4052;
goto block45;
block44:;
*(&local17) = param4;
goto block45;
block45:;
frost$core$Bit $tmp4053 = *(&local17);
bool $tmp4054 = $tmp4053.value;
if ($tmp4054) goto block41; else goto block42;
block41:;
// line 1067
org$frostlang$frostc$IR$Value* $tmp4055 = *(&local16);
$fn4057 $tmp4056 = ($fn4057) $tmp4055->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4058 = $tmp4056($tmp4055);
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4058));
org$frostlang$frostc$Type* $tmp4059 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4059));
*(&local18) = $tmp4058;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4058));
// line 1068
org$frostlang$frostc$Type* $tmp4060 = *(&local18);
org$frostlang$frostc$Type* $tmp4061 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp4062 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp4061);
frost$core$Bit $tmp4063 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp4060, $tmp4062);
bool $tmp4064 = $tmp4063.value;
if ($tmp4064) goto block48; else goto block49;
block48:;
*(&local19) = $tmp4063;
goto block50;
block49:;
org$frostlang$frostc$Type* $tmp4065 = *(&local18);
org$frostlang$frostc$Type$Kind* $tmp4066 = &$tmp4065->typeKind;
org$frostlang$frostc$Type$Kind $tmp4067 = *$tmp4066;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4068;
$tmp4068 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4068->value = $tmp4067;
frost$core$Int64 $tmp4069 = (frost$core$Int64) {10};
org$frostlang$frostc$Type$Kind $tmp4070 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp4069);
org$frostlang$frostc$Type$Kind$wrapper* $tmp4071;
$tmp4071 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4071->value = $tmp4070;
ITable* $tmp4072 = ((frost$core$Equatable*) $tmp4068)->$class->itable;
while ($tmp4072->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4072 = $tmp4072->next;
}
$fn4074 $tmp4073 = $tmp4072->methods[0];
frost$core$Bit $tmp4075 = $tmp4073(((frost$core$Equatable*) $tmp4068), ((frost$core$Equatable*) $tmp4071));
bool $tmp4076 = $tmp4075.value;
if ($tmp4076) goto block51; else goto block52;
block51:;
org$frostlang$frostc$Type* $tmp4077 = *(&local18);
org$frostlang$frostc$FixedArray** $tmp4078 = &$tmp4077->subtypes;
org$frostlang$frostc$FixedArray* $tmp4079 = *$tmp4078;
frost$core$Int64 $tmp4080 = (frost$core$Int64) {0};
frost$core$Object* $tmp4081 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4079, $tmp4080);
frost$core$String** $tmp4082 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp4081))->name;
frost$core$String* $tmp4083 = *$tmp4082;
frost$core$Bit $tmp4084 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp4083, &$s4085);
frost$core$Frost$unref$frost$core$Object$Q($tmp4081);
*(&local20) = $tmp4084;
goto block53;
block52:;
*(&local20) = $tmp4075;
goto block53;
block53:;
frost$core$Bit $tmp4086 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4071)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4068)));
*(&local19) = $tmp4086;
goto block50;
block50:;
frost$core$Bit $tmp4087 = *(&local19);
bool $tmp4088 = $tmp4087.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4062));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4061));
if ($tmp4088) goto block46; else goto block47;
block46:;
// line 1071
org$frostlang$frostc$Type* $tmp4089 = *(&local18);
frost$core$String** $tmp4090 = &((org$frostlang$frostc$Symbol*) $tmp4089)->name;
frost$core$String* $tmp4091 = *$tmp4090;
frost$core$String* $tmp4092 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4093, $tmp4091);
frost$core$String* $tmp4094 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4092, &$s4095);
frost$core$String* $tmp4096 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4097, $tmp4094);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp4096);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4096));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4094));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4092));
goto block47;
block47:;
org$frostlang$frostc$Type* $tmp4098 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4098));
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
goto block42;
block42:;
// line 1075
org$frostlang$frostc$IR$Value* $tmp4099 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4099));
org$frostlang$frostc$IR$Value* $tmp4100 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4100));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp4101 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4101));
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp4102 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4102));
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp4099;

}
void org$frostlang$frostc$expression$Call$init(org$frostlang$frostc$expression$Call* param0) {

return;

}
void org$frostlang$frostc$expression$Call$cleanup(org$frostlang$frostc$expression$Call* param0) {

// line 20
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

