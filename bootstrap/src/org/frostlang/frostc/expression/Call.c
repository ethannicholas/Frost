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

typedef frost$core$Bit (*$fn62)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Object* (*$fn77)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn110)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn144)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn161)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn180)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn220)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn255)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn281)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn304)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn332)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn364)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn391)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn401)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn452)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn479)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Object* (*$fn503)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn531)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn550)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn579)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn602)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn631)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn648)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn694)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn703)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn725)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn754)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn1021)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1030)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1053)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn1082)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Int64 (*$fn1157)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn1194)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$Iterator* (*$fn1271)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1275)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1280)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1325)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1329)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1334)(frost$collections$Iterator*);
typedef org$frostlang$frostc$Type* (*$fn1365)(org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn1369)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$Int64 (*$fn1379)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1418)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1422)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1427)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1433)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Object* (*$fn1444)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn1479)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1500)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1560)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn1570)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1574)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1579)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn1587)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1591)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1612)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn1624)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1658)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn1702)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1725)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn1851)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1875)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn1892)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn1911)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1936)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn1945)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1957)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn1963)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1986)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn2035)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn2042)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2058)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2109)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2120)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2151)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2161)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2178)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2182)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2187)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn2192)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2205)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2210)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2232)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2252)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2259)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2264)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2350)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2370)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2377)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn2382)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn2396)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn2473)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2490)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn2580)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn2597)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn2694)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2727)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn2739)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2743)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2748)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2804)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2810)(org$frostlang$frostc$Compiler$TypeContext*);
typedef frost$core$Int64 (*$fn2849)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn2883)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn2896)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn2900)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn2905)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn2962)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn2968)(org$frostlang$frostc$Compiler$TypeContext*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3096)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn3156)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3173)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3185)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3189)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3194)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3207)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3212)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3243)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3266)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3271)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn3286)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3310)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3348)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3352)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn3357)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3370)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3375)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3391)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3401)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3440)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3463)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn3468)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3484)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn3494)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn3542)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3591)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3613)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn3662)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn3677)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn3706)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$Int64 (*$fn3715)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn3849)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn3985)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn3995)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn4018)(frost$collections$ListView*, frost$core$Int64);
typedef org$frostlang$frostc$Type* (*$fn4046)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4058)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4135)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn4167)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn4175)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn4192)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn4204)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn4215)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef frost$core$Bit (*$fn4225)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4279)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4288)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn4324)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn4373)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Int64 (*$fn4489)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4509)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn4568)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$Type* (*$fn4750)(org$frostlang$frostc$IR$Value*);
typedef frost$core$Bit (*$fn4767)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c", 36, -3986479872985642702, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x65\x61\x72", 5, 20924392920, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x69\x6e\x74\x72\x69\x6e\x73\x69\x63\x3a\x20", 31, 5572221770796053896, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x50\x6f\x69\x6e\x74\x65\x72\x49\x6e\x74\x72\x69\x6e\x73\x69\x63\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x6d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2c\x20\x61\x72\x67\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x3e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 382, -4884818683857402, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s621 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s670 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s700 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2b", 1, 144, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s780 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s792 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2a", 1, 143, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s806 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s813 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static frost$core$String $s818 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s856 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s886 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s891 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s916 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static frost$core$String $s951 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s952 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s982 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1013 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s1027 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1036 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1078 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1079 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 129, -7565876279272390604, NULL };
static frost$core$String $s1182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1212 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 135, 8768873314443410019, NULL };
static frost$core$String $s1222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s1237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 131, -1251988423769408069, NULL };
static frost$core$String $s1249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e", 183, -1606613617903784312, NULL };
static frost$core$String $s1294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 131, -1251988423769408069, NULL };
static frost$core$String $s1342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s1363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1364 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 144, -3407239944236024271, NULL };
static frost$core$String $s1414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3e", 183, -1606613617903784312, NULL };
static frost$core$String $s1447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x74\x65\x3a\x20\x63\x61\x6e\x27\x74\x20\x63\x6f\x65\x72\x63\x65\x20\x27", 20, -7237900421143798122, NULL };
static frost$core$String $s1449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x74\x6f\x20", 5, 14602620331, NULL };
static frost$core$String $s1453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1494 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e", 185, -6962729775976817809, NULL };
static frost$core$String $s1518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1519 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 134, -8894870968915517948, NULL };
static frost$core$String $s1609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s1634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 135, 8768873314443410019, NULL };
static frost$core$String $s1686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s1695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 99, 8145804827713163921, NULL };
static frost$core$String $s1743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 134, -8894870968915517948, NULL };
static frost$core$String $s1814 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1815 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 134, -8894870968915517948, NULL };
static frost$core$String $s1869 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1870 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s1886 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s1887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x66\x69\x6e\x64\x42\x65\x73\x74\x4d\x65\x74\x68\x6f\x64\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x6d\x65\x74\x68\x6f\x64\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x3e\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x41\x72\x67\x75\x6d\x65\x6e\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x2c\x20\x61\x72\x67\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f", 561, 3652659893303705938, NULL };
static frost$core$String $s1902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static frost$core$String $s1904 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static frost$core$String $s1920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 16, 4303665098026904440, NULL };
static frost$core$String $s1922 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static frost$core$String $s1928 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s1938 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s1940 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static frost$core$String $s1942 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static frost$core$String $s1950 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2007 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2008 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2075 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2076 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s2081 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x69\x6e\x74\x65\x72", 7, 227281454102470, NULL };
static frost$core$String $s2105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x61\x72\x67\x65\x74", 6, 2290904182948, NULL };
static frost$core$String $s2147 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x20\x74\x61\x72\x67\x65\x74", 24, 8706842098394974193, NULL };
static frost$core$String $s2189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x74\x61\x72\x67\x65\x74", 27, -7788775699050637059, NULL };
static frost$core$String $s2194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x79\x6e\x61\x6d\x69\x63\x20\x63\x61\x6c\x6c\x20\x6d\x65\x72\x67\x65", 18, 706487662591854902, NULL };
static frost$core$String $s2227 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static frost$core$String $s2520 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s2529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2535 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s2577 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2578 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s2625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x75\x6c\x64\x20\x6e\x6f\x74\x20\x66\x69\x6e\x64\x20", 15, 8570243288273150570, NULL };
static frost$core$String $s2627 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static frost$core$String $s2636 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2637 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2642 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2643 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s2688 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s2706 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s2720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2721 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s2772 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static frost$core$String $s2774 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2788 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2789 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s2798 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static frost$core$String $s2800 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2808 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s2843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2844 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s2861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2862 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s2876 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2877 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 167, 3089123149098061878, NULL };
static frost$core$String $s2929 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static frost$core$String $s2931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s2946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s2947 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s2956 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20", 13, 6196784763812182974, NULL };
static frost$core$String $s2958 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s2966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s3002 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3003 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s3024 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3025 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3038 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3039 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static frost$core$String $s3052 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3053 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3057 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x69\x74\x20\x66\x6f\x72\x20", 12, -9112629214783660015, NULL };
static frost$core$String $s3059 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3060 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3068 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3069 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s3074 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3075 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3093 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3094 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s3119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20", 12, 8187822430156838052, NULL };
static frost$core$String $s3139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x2c\x20\x61\x72\x67\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 331, 5189620526265609373, NULL };
static frost$core$String $s3171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x20\x65\x72\x72\x6f\x72\x20\x63\x68\x65\x63\x6b", 15, -4763323025848394940, NULL };
static frost$core$String $s3191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3f\x20\x6e\x75\x6c\x6c", 11, 8052739787235849537, NULL };
static frost$core$String $s3196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72\x3f\x20\x65\x72\x72\x6f\x72", 12, 1669979266660959244, NULL };
static frost$core$String $s3217 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 156, -4467267130538951156, NULL };
static frost$core$String $s3224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 8047758300052272989, NULL };
static frost$core$String $s3248 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3256 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 156, -4467267130538951156, NULL };
static frost$core$String $s3263 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, 1859744053345217943, NULL };
static frost$core$String $s3295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s3302 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s3308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x72\x79\x20\x6d\x61\x79\x62\x65\x20\x63\x68\x65\x63\x6b", 15, -6580851403193579520, NULL };
static frost$core$String $s3319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static frost$core$String $s3329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x79\x62\x65\x20\x73\x75\x63\x63\x65\x73\x73", 13, 1014790702408506444, NULL };
static frost$core$String $s3359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x61\x79\x62\x65\x20\x65\x72\x72\x6f\x72", 11, 6235211091261808005, NULL };
static frost$core$String $s3383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 156, -4467267130538951156, NULL };
static frost$core$String $s3420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3421 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 97, 8047758300052272989, NULL };
static frost$core$String $s3445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x3f\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 156, -4467267130538951156, NULL };
static frost$core$String $s3460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, 1859744053345217943, NULL };
static frost$core$String $s3476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s3506 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3507 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s3552 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static frost$core$String $s3672 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static frost$core$String $s3692 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x73\x20", 9, 1451156555704250829, NULL };
static frost$core$String $s3698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20", 1, 133, NULL };
static frost$core$String $s3708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static frost$core$String $s3710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static frost$core$String $s3712 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static frost$core$String $s3720 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s3737 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3749 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static frost$core$String $s3751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20", 7, 142360281799925, NULL };
static frost$core$String $s3753 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x73\x74\x61\x6e\x63\x65", 8, 22203976303606054, NULL };
static frost$core$String $s3790 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 99, 8145804827713163921, NULL };
static frost$core$String $s3798 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3799 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3857 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -7295426976756958118, NULL };
static frost$core$String $s3920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3965 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3966 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s3982 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s3983 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s4043 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4044 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s4089 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4090 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s4145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s4162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4163 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s4184 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s4246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s4252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s4333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static frost$core$String $s4370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x43\x61\x6c\x6c\x2e\x63\x6f\x6d\x70\x69\x6c\x65\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x74\x61\x72\x67\x65\x74\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x2c\x20\x72\x61\x77\x4d\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2c\x20\x61\x72\x67\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x54\x79\x70\x65\x43\x6f\x6e\x74\x65\x78\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f", 375, 7210268903382943599, NULL };
static frost$core$String $s4385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s4397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s4402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static frost$core$String $s4404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static frost$core$String $s4407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s4414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s4422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s4450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s4456 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4463 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s4484 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s4594 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4595 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s4602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4603 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2c\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x50\x61\x69\x72", 149, 634663051022967754, NULL };
static frost$core$String $s4630 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x24\x73\x65\x6c\x66", 5, 14375800863, NULL };
static frost$core$String $s4638 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static frost$core$String $s4653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 93, -2121024503315609195, NULL };
static frost$core$String $s4675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4694 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c", 99, 4978120054155391489, NULL };
static frost$core$String $s4701 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4702 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 2803708916022239501, NULL };
static frost$core$String $s4734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4735 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s4747 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s4776 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x61\x6c\x6c\x2e\x66\x72\x6f\x73\x74", 10, 333750278512755825, NULL };
static frost$core$String $s4777 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 3774402104032250369, NULL };
static frost$core$String $s4783 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x79\x62\x65", 16, -3824106975633991258, NULL };
static frost$core$String $s4791 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s4793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x20\x69\x73\x20\x75\x6e\x75\x73\x65\x64\x20\x61\x6e\x64\x20\x69\x73\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x27\x74\x72\x79\x27\x20\x62\x6c\x6f\x63\x6b", 43, 4374382365862179306, NULL };
static frost$core$String $s4795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20", 21, -4228310936216902871, NULL };

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
frost$core$Bit $tmp13 = frost$core$Bit$init$builtin_bit($tmp12 != NULL);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp15 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s16, $tmp15, &$s17);
abort(); // unreachable
block4:;
frost$core$Int64 $tmp18 = (frost$core$Int64) {1};
frost$core$Object* $tmp19 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp12, $tmp18);
org$frostlang$frostc$Type* $tmp20 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, ((org$frostlang$frostc$Type*) $tmp19));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
org$frostlang$frostc$Type* $tmp21 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local1) = $tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($35:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp19);
// unreffing REF($33:org.frostlang.frostc.FixedArray.T)
goto block2;
block3:;
// line 1
// line 30
org$frostlang$frostc$Type** $tmp22 = &param3->target;
org$frostlang$frostc$Type* $tmp23 = *$tmp22;
org$frostlang$frostc$FixedArray** $tmp24 = &$tmp23->subtypes;
org$frostlang$frostc$FixedArray* $tmp25 = *$tmp24;
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25 != NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s29, $tmp28, &$s30);
abort(); // unreachable
block6:;
frost$core$Int64 $tmp31 = (frost$core$Int64) {1};
frost$core$Object* $tmp32 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp25, $tmp31);
org$frostlang$frostc$FixedArray** $tmp33 = &((org$frostlang$frostc$Type*) $tmp32)->subtypes;
org$frostlang$frostc$FixedArray* $tmp34 = *$tmp33;
frost$core$Bit $tmp35 = frost$core$Bit$init$builtin_bit($tmp34 != NULL);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp37 = (frost$core$Int64) {30};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s38, $tmp37, &$s39);
abort(); // unreachable
block8:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {1};
frost$core$Object* $tmp41 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp34, $tmp40);
org$frostlang$frostc$Type* $tmp42 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, ((org$frostlang$frostc$Type*) $tmp41));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$Type* $tmp43 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local1) = $tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing REF($81:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp41);
// unreffing REF($79:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp32);
// unreffing REF($65:org.frostlang.frostc.FixedArray.T)
goto block2;
block2:;
// line 32
org$frostlang$frostc$Type* $tmp44 = *(&local1);
frost$core$Bit $tmp45 = frost$core$Bit$init$builtin_bit($tmp44 == NULL);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block10; else goto block11;
block10:;
// line 33
org$frostlang$frostc$Pair* $tmp47 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp49;
$tmp49 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp49->value = $tmp48;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp47, ((frost$core$Object*) $tmp49), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing REF($108:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing REF($105:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$Type* $tmp50 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp51 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp47;
block11:;
// line 35
org$frostlang$frostc$Type** $tmp52 = &param3->target;
org$frostlang$frostc$Type* $tmp53 = *$tmp52;
org$frostlang$frostc$Type$Kind* $tmp54 = &$tmp53->typeKind;
org$frostlang$frostc$Type$Kind $tmp55 = *$tmp54;
org$frostlang$frostc$Type$Kind$wrapper* $tmp56;
$tmp56 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp56->value = $tmp55;
frost$core$Int64 $tmp57 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp58 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp57);
org$frostlang$frostc$Type$Kind$wrapper* $tmp59;
$tmp59 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp59->value = $tmp58;
ITable* $tmp60 = ((frost$core$Equatable*) $tmp56)->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[0];
frost$core$Bit $tmp63 = $tmp61(((frost$core$Equatable*) $tmp56), ((frost$core$Equatable*) $tmp59));
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp65 = (frost$core$Int64) {35};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s66, $tmp65);
abort(); // unreachable
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp59)));
// unreffing REF($139:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp56)));
// unreffing REF($135:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
// line 36
org$frostlang$frostc$MethodDecl** $tmp67 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp68 = *$tmp67;
frost$core$String** $tmp69 = &((org$frostlang$frostc$Symbol*) $tmp68)->name;
frost$core$String* $tmp70 = *$tmp69;
frost$core$Bit $tmp71 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s72);
bool $tmp73 = $tmp71.value;
if ($tmp73) goto block15; else goto block16;
block15:;
// line 38
frost$core$Int64 $tmp74 = (frost$core$Int64) {0};
ITable* $tmp75 = param4->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
frost$core$Object* $tmp78 = $tmp76(param4, $tmp74);
org$frostlang$frostc$Compiler$TypeContext* $tmp79 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp80 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp81 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp79, $tmp80, $tmp81);
org$frostlang$frostc$IR$Value* $tmp82 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp78), $tmp79);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
org$frostlang$frostc$IR$Value* $tmp83 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local2) = $tmp82;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($172:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing REF($170:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing REF($168:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp78);
// unreffing REF($166:frost.collections.ListView.T)
// line 39
org$frostlang$frostc$IR$Value* $tmp84 = *(&local2);
frost$core$Bit $tmp85 = frost$core$Bit$init$builtin_bit($tmp84 == NULL);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block17; else goto block18;
block17:;
// line 40
org$frostlang$frostc$Pair* $tmp87 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp88 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp89;
$tmp89 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp89->value = $tmp88;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp87, ((frost$core$Object*) $tmp89), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing REF($202:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// unreffing REF($199:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp90 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing count
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp91 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp87;
block18:;
// line 42
org$frostlang$frostc$IR* $tmp93 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp94 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp95 = (frost$core$Int64) {16};
org$frostlang$frostc$IR$Value* $tmp96 = *(&local2);
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit($tmp96 != NULL);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp99 = (frost$core$Int64) {43};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s100, $tmp99, &$s101);
abort(); // unreachable
block19:;
org$frostlang$frostc$IR$Value* $tmp102 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp96);
org$frostlang$frostc$Type* $tmp103 = *(&local1);
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit($tmp103 != NULL);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp106 = (frost$core$Int64) {43};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s107, $tmp106, &$s108);
abort(); // unreachable
block21:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp94, $tmp95, param1, $tmp102, $tmp103);
$fn110 $tmp109 = ($fn110) $tmp93->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp111 = $tmp109($tmp93, $tmp94);
*(&local3) = $tmp111;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($242:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($231:org.frostlang.frostc.IR.Statement)
// line 44
org$frostlang$frostc$Pair* $tmp112 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp114;
$tmp114 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp114->value = $tmp113;
org$frostlang$frostc$IR$Value* $tmp115 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp116 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp117 = *(&local3);
org$frostlang$frostc$Type* $tmp118 = *(&local1);
frost$core$Bit $tmp119 = frost$core$Bit$init$builtin_bit($tmp118 != NULL);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp121 = (frost$core$Int64) {45};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s122, $tmp121, &$s123);
abort(); // unreachable
block23:;
org$frostlang$frostc$Type* $tmp124 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp118);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp115, $tmp116, $tmp117, $tmp124);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp112, ((frost$core$Object*) $tmp114), ((frost$core$Object*) $tmp115));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing REF($279:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing REF($267:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// unreffing REF($266:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($263:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp125 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing count
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp126 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp127 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp112;
block16:;
frost$core$Bit $tmp128 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s129);
bool $tmp130 = $tmp128.value;
if ($tmp130) goto block25; else goto block26;
block25:;
// line 48
frost$core$Bit $tmp131 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp133 = (frost$core$Int64) {48};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s134, $tmp133);
abort(); // unreachable
block27:;
// line 49
org$frostlang$frostc$IR* $tmp135 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp136 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp137 = (frost$core$Int64) {17};
frost$core$Bit $tmp138 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp140 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s141, $tmp140, &$s142);
abort(); // unreachable
block29:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp136, $tmp137, param1, param2);
$fn144 $tmp143 = ($fn144) $tmp135->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp145 = $tmp143($tmp135, $tmp136);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing REF($327:org.frostlang.frostc.IR.Statement)
// line 50
org$frostlang$frostc$Pair* $tmp146 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp147 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp148;
$tmp148 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp148->value = $tmp147;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp146, ((frost$core$Object*) $tmp148), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
// unreffing REF($347:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing REF($344:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$Type* $tmp149 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp146;
block26:;
frost$core$Bit $tmp151 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s152);
bool $tmp153 = $tmp151.value;
if ($tmp153) goto block31; else goto block32;
block31:;
// line 53
frost$core$Bit $tmp154 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp156 = (frost$core$Int64) {53};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s157, $tmp156);
abort(); // unreachable
block33:;
// line 54
frost$core$Int64 $tmp158 = (frost$core$Int64) {0};
ITable* $tmp159 = param4->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
frost$core$Object* $tmp162 = $tmp160(param4, $tmp158);
org$frostlang$frostc$Compiler$TypeContext* $tmp163 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp164 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp165 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp163, $tmp164, $tmp165);
org$frostlang$frostc$IR$Value* $tmp166 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp162), $tmp163);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
org$frostlang$frostc$IR$Value* $tmp167 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local4) = $tmp166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// unreffing REF($390:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
// unreffing REF($388:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// unreffing REF($386:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp162);
// unreffing REF($384:frost.collections.ListView.T)
// line 55
org$frostlang$frostc$IR$Value* $tmp168 = *(&local4);
frost$core$Bit $tmp169 = frost$core$Bit$init$builtin_bit($tmp168 == NULL);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block35; else goto block36;
block35:;
// line 56
org$frostlang$frostc$Pair* $tmp171 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp172 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp173;
$tmp173 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp173->value = $tmp172;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp171, ((frost$core$Object*) $tmp173), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// unreffing REF($420:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing REF($417:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp174 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
// unreffing oldCount
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp175 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp176 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp171;
block36:;
// line 58
frost$core$Int64 $tmp177 = (frost$core$Int64) {1};
ITable* $tmp178 = param4->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
frost$core$Object* $tmp181 = $tmp179(param4, $tmp177);
org$frostlang$frostc$Compiler$TypeContext* $tmp182 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp183 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp184 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp182, $tmp183, $tmp184);
org$frostlang$frostc$IR$Value* $tmp185 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp181), $tmp182);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
org$frostlang$frostc$IR$Value* $tmp186 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local5) = $tmp185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing REF($457:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing REF($455:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing REF($453:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
// unreffing REF($451:frost.collections.ListView.T)
// line 59
org$frostlang$frostc$IR$Value* $tmp187 = *(&local5);
frost$core$Bit $tmp188 = frost$core$Bit$init$builtin_bit($tmp187 == NULL);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block37; else goto block38;
block37:;
// line 60
org$frostlang$frostc$Pair* $tmp190 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp191 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp192;
$tmp192 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp192->value = $tmp191;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp190, ((frost$core$Object*) $tmp192), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
// unreffing REF($487:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
// unreffing REF($484:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp193 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing newCount
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp194 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// unreffing oldCount
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp195 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp196 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp190;
block38:;
// line 62
org$frostlang$frostc$IR* $tmp197 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp198 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp199 = (frost$core$Int64) {21};
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {62};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s203, $tmp202, &$s204);
abort(); // unreachable
block39:;
org$frostlang$frostc$IR$Value* $tmp205 = *(&local4);
frost$core$Bit $tmp206 = frost$core$Bit$init$builtin_bit($tmp205 != NULL);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp208 = (frost$core$Int64) {63};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s209, $tmp208, &$s210);
abort(); // unreachable
block41:;
org$frostlang$frostc$IR$Value* $tmp211 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp205);
org$frostlang$frostc$IR$Value* $tmp212 = *(&local5);
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit($tmp212 != NULL);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp215 = (frost$core$Int64) {64};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s216, $tmp215, &$s217);
abort(); // unreachable
block43:;
org$frostlang$frostc$IR$Value* $tmp218 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp212);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp198, $tmp199, param1, param2, $tmp211, $tmp218);
$fn220 $tmp219 = ($fn220) $tmp197->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp221 = $tmp219($tmp197, $tmp198);
*(&local6) = $tmp221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing REF($550:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing REF($540:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing REF($521:org.frostlang.frostc.IR.Statement)
// line 65
org$frostlang$frostc$Pair* $tmp222 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp223 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp224;
$tmp224 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp224->value = $tmp223;
org$frostlang$frostc$IR$Value* $tmp225 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp226 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp227 = *(&local6);
org$frostlang$frostc$Type* $tmp228 = *(&local1);
frost$core$Bit $tmp229 = frost$core$Bit$init$builtin_bit($tmp228 != NULL);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp231 = (frost$core$Int64) {66};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s232, $tmp231, &$s233);
abort(); // unreachable
block45:;
org$frostlang$frostc$Type* $tmp234 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp228);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp225, $tmp226, $tmp227, $tmp234);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp222, ((frost$core$Object*) $tmp224), ((frost$core$Object*) $tmp225));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($581:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing REF($569:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing REF($568:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($565:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp235 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing newCount
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp236 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing oldCount
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp237 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp238 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp222;
block32:;
frost$core$Bit $tmp239 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s240);
bool $tmp241 = $tmp239.value;
if ($tmp241) goto block47; else goto block48;
block47:;
// line 69
frost$core$Bit $tmp242 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp244 = (frost$core$Int64) {69};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s245, $tmp244);
abort(); // unreachable
block49:;
// line 70
org$frostlang$frostc$IR* $tmp246 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp247 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp248 = (frost$core$Int64) {18};
frost$core$Bit $tmp249 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp251 = (frost$core$Int64) {70};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s252, $tmp251, &$s253);
abort(); // unreachable
block51:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp247, $tmp248, param1, param2);
$fn255 $tmp254 = ($fn255) $tmp246->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp256 = $tmp254($tmp246, $tmp247);
*(&local7) = $tmp256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing REF($634:org.frostlang.frostc.IR.Statement)
// line 71
org$frostlang$frostc$Pair* $tmp257 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp258 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp259;
$tmp259 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp259->value = $tmp258;
org$frostlang$frostc$IR$Value* $tmp260 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp261 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp262 = *(&local7);
org$frostlang$frostc$Type* $tmp263 = *(&local1);
frost$core$Bit $tmp264 = frost$core$Bit$init$builtin_bit($tmp263 != NULL);
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp266 = (frost$core$Int64) {71};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s267, $tmp266, &$s268);
abort(); // unreachable
block53:;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp260, $tmp261, $tmp262, $tmp263);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp257, ((frost$core$Object*) $tmp259), ((frost$core$Object*) $tmp260));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing REF($656:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing REF($655:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($652:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$Type* $tmp269 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp270 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp257;
block48:;
frost$core$Bit $tmp271 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s272);
bool $tmp273 = $tmp271.value;
if ($tmp273) goto block55; else goto block56;
block55:;
// line 74
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block57; else goto block58;
block58:;
frost$core$Int64 $tmp276 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s277, $tmp276);
abort(); // unreachable
block57:;
// line 75
frost$core$Int64 $tmp278 = (frost$core$Int64) {0};
ITable* $tmp279 = param4->$class->itable;
while ($tmp279->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp279 = $tmp279->next;
}
$fn281 $tmp280 = $tmp279->methods[0];
frost$core$Object* $tmp282 = $tmp280(param4, $tmp278);
org$frostlang$frostc$Compiler$TypeContext* $tmp283 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp284 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp285 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp283, $tmp284, $tmp285);
org$frostlang$frostc$IR$Value* $tmp286 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp282), $tmp283);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
org$frostlang$frostc$IR$Value* $tmp287 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local8) = $tmp286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// unreffing REF($715:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing REF($713:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// unreffing REF($711:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp282);
// unreffing REF($709:frost.collections.ListView.T)
// line 76
org$frostlang$frostc$IR* $tmp288 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp289 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp290 = (frost$core$Int64) {20};
frost$core$Bit $tmp291 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp293 = (frost$core$Int64) {76};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s294, $tmp293, &$s295);
abort(); // unreachable
block59:;
org$frostlang$frostc$IR$Value* $tmp296 = *(&local8);
frost$core$Bit $tmp297 = frost$core$Bit$init$builtin_bit($tmp296 != NULL);
bool $tmp298 = $tmp297.value;
if ($tmp298) goto block61; else goto block62;
block62:;
frost$core$Int64 $tmp299 = (frost$core$Int64) {77};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s300, $tmp299, &$s301);
abort(); // unreachable
block61:;
org$frostlang$frostc$IR$Value* $tmp302 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp296);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp289, $tmp290, param1, param2, $tmp302);
$fn304 $tmp303 = ($fn304) $tmp288->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp305 = $tmp303($tmp288, $tmp289);
*(&local9) = $tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing REF($756:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// unreffing REF($737:org.frostlang.frostc.IR.Statement)
// line 78
org$frostlang$frostc$Pair* $tmp306 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp307 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp308;
$tmp308 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp308->value = $tmp307;
org$frostlang$frostc$IR$Value* $tmp309 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp310 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp311 = *(&local9);
org$frostlang$frostc$Type* $tmp312 = *(&local1);
frost$core$Bit $tmp313 = frost$core$Bit$init$builtin_bit($tmp312 != NULL);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block63; else goto block64;
block64:;
frost$core$Int64 $tmp315 = (frost$core$Int64) {79};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s316, $tmp315, &$s317);
abort(); // unreachable
block63:;
org$frostlang$frostc$Type* $tmp318 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp312);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp309, $tmp310, $tmp311, $tmp318);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp306, ((frost$core$Object*) $tmp308), ((frost$core$Object*) $tmp309));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing REF($784:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing REF($772:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing REF($771:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing REF($768:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp319 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
// unreffing value
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp320 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp321 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp306;
block56:;
frost$core$Bit $tmp322 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s323);
bool $tmp324 = $tmp322.value;
if ($tmp324) goto block65; else goto block66;
block65:;
// line 82
frost$core$Bit $tmp325 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp327 = (frost$core$Int64) {82};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s328, $tmp327);
abort(); // unreachable
block67:;
// line 83
frost$core$Int64 $tmp329 = (frost$core$Int64) {0};
ITable* $tmp330 = param4->$class->itable;
while ($tmp330->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp330 = $tmp330->next;
}
$fn332 $tmp331 = $tmp330->methods[0];
frost$core$Object* $tmp333 = $tmp331(param4, $tmp329);
org$frostlang$frostc$Compiler$TypeContext* $tmp334 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp335 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp336 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp334, $tmp335, $tmp336);
org$frostlang$frostc$IR$Value* $tmp337 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp333), $tmp334);
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
org$frostlang$frostc$IR$Value* $tmp338 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
*(&local10) = $tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($840:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
// unreffing REF($838:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// unreffing REF($836:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp333);
// unreffing REF($834:frost.collections.ListView.T)
// line 84
org$frostlang$frostc$IR$Value* $tmp339 = *(&local10);
frost$core$Bit $tmp340 = frost$core$Bit$init$builtin_bit($tmp339 == NULL);
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block69; else goto block70;
block69:;
// line 85
org$frostlang$frostc$Pair* $tmp342 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp344;
$tmp344 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp344->value = $tmp343;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp342, ((frost$core$Object*) $tmp344), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing REF($870:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing REF($867:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp345 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing index
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp346 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp347 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp342;
block70:;
// line 87
org$frostlang$frostc$IR* $tmp348 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp349 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp350 = (frost$core$Int64) {19};
frost$core$Bit $tmp351 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp353 = (frost$core$Int64) {87};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s354, $tmp353, &$s355);
abort(); // unreachable
block71:;
org$frostlang$frostc$IR$Value* $tmp356 = *(&local10);
frost$core$Bit $tmp357 = frost$core$Bit$init$builtin_bit($tmp356 != NULL);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block73; else goto block74;
block74:;
frost$core$Int64 $tmp359 = (frost$core$Int64) {88};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s360, $tmp359, &$s361);
abort(); // unreachable
block73:;
org$frostlang$frostc$IR$Value* $tmp362 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp356);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp349, $tmp350, param1, param2, $tmp362);
$fn364 $tmp363 = ($fn364) $tmp348->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp365 = $tmp363($tmp348, $tmp349);
*(&local11) = $tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// unreffing REF($918:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// unreffing REF($899:org.frostlang.frostc.IR.Statement)
// line 89
org$frostlang$frostc$Pair* $tmp366 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp367 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp368;
$tmp368 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp368->value = $tmp367;
org$frostlang$frostc$IR$Value* $tmp369 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp370 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp371 = *(&local11);
org$frostlang$frostc$Type* $tmp372 = *(&local1);
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit($tmp372 != NULL);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block75; else goto block76;
block76:;
frost$core$Int64 $tmp375 = (frost$core$Int64) {89};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s376, $tmp375, &$s377);
abort(); // unreachable
block75:;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp369, $tmp370, $tmp371, $tmp372);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp366, ((frost$core$Object*) $tmp368), ((frost$core$Object*) $tmp369));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// unreffing REF($934:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing REF($933:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing REF($930:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp378 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// unreffing index
*(&local10) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp379 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp380 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp366;
block66:;
frost$core$Bit $tmp381 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s382);
bool $tmp383 = $tmp381.value;
if ($tmp383) goto block77; else goto block78;
block77:;
// line 92
frost$core$Bit $tmp384 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp386 = (frost$core$Int64) {92};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s387, $tmp386);
abort(); // unreachable
block79:;
// line 93
frost$core$Int64 $tmp388 = (frost$core$Int64) {0};
ITable* $tmp389 = param4->$class->itable;
while ($tmp389->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp389 = $tmp389->next;
}
$fn391 $tmp390 = $tmp389->methods[0];
frost$core$Object* $tmp392 = $tmp390(param4, $tmp388);
org$frostlang$frostc$Compiler$TypeContext* $tmp393 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp394 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp395 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp393, $tmp394, $tmp395);
org$frostlang$frostc$IR$Value* $tmp396 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp392), $tmp393);
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
org$frostlang$frostc$IR$Value* $tmp397 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local12) = $tmp396;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// unreffing REF($998:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
// unreffing REF($996:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
// unreffing REF($994:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp392);
// unreffing REF($992:frost.collections.ListView.T)
// line 94
frost$core$Int64 $tmp398 = (frost$core$Int64) {1};
ITable* $tmp399 = param4->$class->itable;
while ($tmp399->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp399 = $tmp399->next;
}
$fn401 $tmp400 = $tmp399->methods[0];
frost$core$Object* $tmp402 = $tmp400(param4, $tmp398);
org$frostlang$frostc$Compiler$TypeContext* $tmp403 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp404 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp405 = *(&local1);
frost$core$Bit $tmp406 = frost$core$Bit$init$builtin_bit($tmp405 != NULL);
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block81; else goto block82;
block82:;
frost$core$Int64 $tmp408 = (frost$core$Int64) {94};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s409, $tmp408, &$s410);
abort(); // unreachable
block81:;
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp403, $tmp404, $tmp405);
org$frostlang$frostc$IR$Value* $tmp411 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp402), $tmp403);
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
org$frostlang$frostc$IR$Value* $tmp412 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local13) = $tmp411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// unreffing REF($1036:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing REF($1024:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp402);
// unreffing REF($1022:frost.collections.ListView.T)
// line 95
org$frostlang$frostc$IR$Value* $tmp413 = *(&local12);
frost$core$Bit $tmp414 = frost$core$Bit$init$builtin_bit($tmp413 != NULL);
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block85; else goto block86;
block85:;
org$frostlang$frostc$IR$Value* $tmp416 = *(&local13);
frost$core$Bit $tmp417 = frost$core$Bit$init$builtin_bit($tmp416 != NULL);
*(&local14) = $tmp417;
goto block87;
block86:;
*(&local14) = $tmp414;
goto block87;
block87:;
frost$core$Bit $tmp418 = *(&local14);
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block83; else goto block84;
block83:;
// line 96
org$frostlang$frostc$IR$Value* $tmp420 = *(&local12);
frost$core$Bit $tmp421 = frost$core$Bit$init$builtin_bit($tmp420 != NULL);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block88; else goto block89;
block89:;
frost$core$Int64 $tmp423 = (frost$core$Int64) {96};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s424, $tmp423, &$s425);
abort(); // unreachable
block88:;
org$frostlang$frostc$IR$Value* $tmp426 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp420);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
org$frostlang$frostc$IR$Value* $tmp427 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local15) = $tmp426;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
// unreffing REF($1079:org.frostlang.frostc.IR.Value)
// line 97
org$frostlang$frostc$Type* $tmp428 = *(&local1);
frost$core$Bit $tmp429 = frost$core$Bit$init$builtin_bit($tmp428 != NULL);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp431 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s432, $tmp431, &$s433);
abort(); // unreachable
block92:;
frost$core$Bit $tmp434 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp428);
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block90; else goto block91;
block90:;
// line 98
org$frostlang$frostc$IR$Value* $tmp436 = *(&local13);
frost$core$Bit $tmp437 = frost$core$Bit$init$builtin_bit($tmp436 != NULL);
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp439 = (frost$core$Int64) {98};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s440, $tmp439, &$s441);
abort(); // unreachable
block94:;
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp436);
// line 99
org$frostlang$frostc$IR* $tmp442 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp443 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp444 = (frost$core$Int64) {19};
frost$core$Bit $tmp445 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block96; else goto block97;
block97:;
frost$core$Int64 $tmp447 = (frost$core$Int64) {99};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s448, $tmp447, &$s449);
abort(); // unreachable
block96:;
org$frostlang$frostc$IR$Value* $tmp450 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp443, $tmp444, param1, param2, $tmp450);
$fn452 $tmp451 = ($fn452) $tmp442->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp453 = $tmp451($tmp442, $tmp443);
*(&local16) = $tmp453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
// unreffing REF($1116:org.frostlang.frostc.IR.Statement)
// line 100
org$frostlang$frostc$IR$Value* $tmp454 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp455 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp456 = *(&local16);
org$frostlang$frostc$Type* $tmp457 = *(&local1);
frost$core$Bit $tmp458 = frost$core$Bit$init$builtin_bit($tmp457 != NULL);
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block98; else goto block99;
block99:;
frost$core$Int64 $tmp460 = (frost$core$Int64) {100};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s461, $tmp460, &$s462);
abort(); // unreachable
block98:;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp454, $tmp455, $tmp456, $tmp457);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp454);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// unreffing REF($1135:org.frostlang.frostc.IR.Value)
goto block91;
block91:;
// line 102
org$frostlang$frostc$IR* $tmp463 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp464 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp465 = (frost$core$Int64) {23};
org$frostlang$frostc$IR$Value* $tmp466 = *(&local13);
frost$core$Bit $tmp467 = frost$core$Bit$init$builtin_bit($tmp466 != NULL);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block100; else goto block101;
block101:;
frost$core$Int64 $tmp469 = (frost$core$Int64) {102};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s470, $tmp469, &$s471);
abort(); // unreachable
block100:;
frost$core$Bit $tmp472 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block102; else goto block103;
block103:;
frost$core$Int64 $tmp474 = (frost$core$Int64) {102};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s475, $tmp474, &$s476);
abort(); // unreachable
block102:;
org$frostlang$frostc$IR$Value* $tmp477 = *(&local15);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp464, $tmp465, param1, $tmp466, param2, $tmp477);
$fn479 $tmp478 = ($fn479) $tmp463->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp480 = $tmp478($tmp463, $tmp464);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// unreffing REF($1155:org.frostlang.frostc.IR.Statement)
org$frostlang$frostc$IR$Value* $tmp481 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
// unreffing indexValue
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block84;
block84:;
// line 104
org$frostlang$frostc$Pair* $tmp482 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp483 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp484;
$tmp484 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp484->value = $tmp483;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp482, ((frost$core$Object*) $tmp484), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// unreffing REF($1191:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// unreffing REF($1188:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp485 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// unreffing value
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp486 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// unreffing index
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp487 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp488 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp482;
block78:;
frost$core$Bit $tmp489 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp70, &$s490);
bool $tmp491 = $tmp489.value;
if ($tmp491) goto block104; else goto block105;
block104:;
// line 107
org$frostlang$frostc$Type* $tmp492 = *(&local1);
frost$core$Bit $tmp493 = frost$core$Bit$init$builtin_bit($tmp492 != NULL);
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block106; else goto block107;
block107:;
frost$core$Int64 $tmp495 = (frost$core$Int64) {107};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s496, $tmp495, &$s497);
abort(); // unreachable
block106:;
org$frostlang$frostc$Type* $tmp498 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp492);
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
org$frostlang$frostc$Type* $tmp499 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
*(&local17) = $tmp498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// unreffing REF($1236:org.frostlang.frostc.Type)
// line 108
frost$core$Int64 $tmp500 = (frost$core$Int64) {0};
ITable* $tmp501 = param4->$class->itable;
while ($tmp501->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp501 = $tmp501->next;
}
$fn503 $tmp502 = $tmp501->methods[0];
frost$core$Object* $tmp504 = $tmp502(param4, $tmp500);
org$frostlang$frostc$Compiler$TypeContext* $tmp505 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp506 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp507 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp505, $tmp506, $tmp507);
org$frostlang$frostc$IR$Value* $tmp508 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp504), $tmp505);
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
org$frostlang$frostc$IR$Value* $tmp509 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local18) = $tmp508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// unreffing REF($1257:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// unreffing REF($1255:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
// unreffing REF($1253:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp504);
// unreffing REF($1251:frost.collections.ListView.T)
// line 109
org$frostlang$frostc$Type* $tmp510 = *(&local17);
frost$core$Bit $tmp511 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp510);
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block108; else goto block109;
block108:;
// line 110
org$frostlang$frostc$IR$Value* $tmp513 = *(&local18);
frost$core$Bit $tmp514 = frost$core$Bit$init$builtin_bit($tmp513 != NULL);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block110; else goto block111;
block111:;
frost$core$Int64 $tmp516 = (frost$core$Int64) {110};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s517, $tmp516, &$s518);
abort(); // unreachable
block110:;
org$frostlang$frostc$IR$Value* $tmp519 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp513);
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
org$frostlang$frostc$IR$Value* $tmp520 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local19) = $tmp519;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// unreffing REF($1292:org.frostlang.frostc.IR.Value)
// line 111
org$frostlang$frostc$IR* $tmp521 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp522 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp523 = (frost$core$Int64) {19};
frost$core$Bit $tmp524 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block112; else goto block113;
block113:;
frost$core$Int64 $tmp526 = (frost$core$Int64) {111};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s527, $tmp526, &$s528);
abort(); // unreachable
block112:;
org$frostlang$frostc$IR$Value* $tmp529 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp522, $tmp523, param1, param2, $tmp529);
$fn531 $tmp530 = ($fn531) $tmp521->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp532 = $tmp530($tmp521, $tmp522);
*(&local20) = $tmp532;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// unreffing REF($1305:org.frostlang.frostc.IR.Statement)
// line 112
org$frostlang$frostc$IR$Value* $tmp533 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp534 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp535 = *(&local20);
org$frostlang$frostc$Type* $tmp536 = *(&local17);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp533, $tmp534, $tmp535, $tmp536);
org$frostlang$frostc$Compiler$compileUnref$org$frostlang$frostc$IR$Value(param0, $tmp533);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
// unreffing REF($1324:org.frostlang.frostc.IR.Value)
// line 113
org$frostlang$frostc$IR* $tmp537 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp538 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp539 = (frost$core$Int64) {23};
org$frostlang$frostc$IR$Value* $tmp540 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp541 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp542 = *(&local17);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp540, $tmp541, $tmp542);
frost$core$Bit $tmp543 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block114; else goto block115;
block115:;
frost$core$Int64 $tmp545 = (frost$core$Int64) {114};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s546, $tmp545, &$s547);
abort(); // unreachable
block114:;
org$frostlang$frostc$IR$Value* $tmp548 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp538, $tmp539, param1, $tmp540, param2, $tmp548);
$fn550 $tmp549 = ($fn550) $tmp537->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp551 = $tmp549($tmp537, $tmp538);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
// unreffing REF($1337:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
// unreffing REF($1335:org.frostlang.frostc.IR.Statement)
org$frostlang$frostc$IR$Value* $tmp552 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
// unreffing indexValue
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block109;
block109:;
// line 116
org$frostlang$frostc$Pair* $tmp553 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp554 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp555;
$tmp555 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp555->value = $tmp554;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp553, ((frost$core$Object*) $tmp555), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
// unreffing REF($1369:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
// unreffing REF($1366:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp556 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// unreffing index
*(&local18) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp557 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
// unreffing nullableType
*(&local17) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp558 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
// unreffing pointerType
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp559 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp553;
block105:;
// line 119
frost$core$Bit $tmp560 = frost$core$Bit$init$builtin_bit(false);
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block116; else goto block117;
block117:;
frost$core$Int64 $tmp562 = (frost$core$Int64) {119};
org$frostlang$frostc$MethodDecl** $tmp563 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp564 = *$tmp563;
frost$core$String** $tmp565 = &((org$frostlang$frostc$Symbol*) $tmp564)->name;
frost$core$String* $tmp566 = *$tmp565;
frost$core$String* $tmp567 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s568, $tmp566);
frost$core$String* $tmp569 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp567, &$s570);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s571, $tmp562, $tmp569);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
// unreffing REF($1412:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
// unreffing REF($1411:frost.core.String)
abort(); // unreachable
block116:;
goto block14;
block14:;
frost$core$Bit $tmp572 = frost$core$Bit$init$builtin_bit(false);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block118; else goto block119;
block119:;
frost$core$Int64 $tmp574 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s575, $tmp574, &$s576);
abort(); // unreachable
block118:;
abort(); // unreachable

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$expression$Binary$Operator param3, frost$collections$ListView* param4, org$frostlang$frostc$Type* param5, org$frostlang$frostc$Type* param6) {

org$frostlang$frostc$IR$Value* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$Type* local4 = NULL;
frost$collections$Array* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
// line 129
ITable* $tmp577 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp577->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp577 = $tmp577->next;
}
$fn579 $tmp578 = $tmp577->methods[0];
frost$core$Int64 $tmp580 = $tmp578(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp581 = (frost$core$Int64) {1};
int64_t $tmp582 = $tmp580.value;
int64_t $tmp583 = $tmp581.value;
bool $tmp584 = $tmp582 != $tmp583;
frost$core$Bit $tmp585 = (frost$core$Bit) {$tmp584};
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block1; else goto block2;
block1:;
// line 130
org$frostlang$frostc$Pair* $tmp587 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp588 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp589;
$tmp589 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp589->value = $tmp588;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp587, ((frost$core$Object*) $tmp589), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
// unreffing REF($15:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
// unreffing REF($12:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp587;
block2:;
// line 132
org$frostlang$frostc$IR$Value* $tmp590 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param5);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
org$frostlang$frostc$IR$Value* $tmp591 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local0) = $tmp590;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
// unreffing REF($29:org.frostlang.frostc.IR.Value?)
// line 133
org$frostlang$frostc$IR$Value* $tmp592 = *(&local0);
frost$core$Bit $tmp593 = frost$core$Bit$init$builtin_bit($tmp592 == NULL);
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block3; else goto block4;
block3:;
// line 134
org$frostlang$frostc$Pair* $tmp595 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp596 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp597;
$tmp597 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp597->value = $tmp596;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp595, ((frost$core$Object*) $tmp597), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
// unreffing REF($50:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// unreffing REF($47:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp598 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
// unreffing left
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp595;
block4:;
// line 136
frost$core$Int64 $tmp599 = (frost$core$Int64) {0};
ITable* $tmp600 = param4->$class->itable;
while ($tmp600->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp600 = $tmp600->next;
}
$fn602 $tmp601 = $tmp600->methods[0];
frost$core$Object* $tmp603 = $tmp601(param4, $tmp599);
org$frostlang$frostc$Compiler$TypeContext* $tmp604 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp605 = (frost$core$Int64) {3};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp604, $tmp605, param5);
org$frostlang$frostc$IR$Value* $tmp606 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp603), $tmp604);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
org$frostlang$frostc$IR$Value* $tmp607 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local1) = $tmp606;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
// unreffing REF($76:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
// unreffing REF($73:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp603);
// unreffing REF($71:frost.collections.ListView.T)
// line 137
org$frostlang$frostc$IR$Value* $tmp608 = *(&local1);
frost$core$Bit $tmp609 = frost$core$Bit$init$builtin_bit($tmp608 == NULL);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block5; else goto block6;
block5:;
// line 138
org$frostlang$frostc$Pair* $tmp611 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp612 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp613;
$tmp613 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp613->value = $tmp612;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp611, ((frost$core$Object*) $tmp613), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// unreffing REF($103:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
// unreffing REF($100:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp614 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
// unreffing right
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp615 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing left
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp611;
block6:;
// line 140
org$frostlang$frostc$IR$Value* $tmp616 = *(&local0);
frost$core$Bit $tmp617 = frost$core$Bit$init$builtin_bit($tmp616 != NULL);
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp619 = (frost$core$Int64) {140};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s620, $tmp619, &$s621);
abort(); // unreachable
block7:;
org$frostlang$frostc$IR$Value* $tmp622 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp616);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
org$frostlang$frostc$IR$Value* $tmp623 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
*(&local2) = $tmp622;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
// unreffing REF($135:org.frostlang.frostc.IR.Value)
// line 141
// line 142
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
// line 143
org$frostlang$frostc$Type* $tmp624 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp625 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit(param6, $tmp624);
bool $tmp626 = $tmp625.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// unreffing REF($150:org.frostlang.frostc.Type)
if ($tmp626) goto block9; else goto block11;
block9:;
// line 144
org$frostlang$frostc$Type* $tmp627 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
org$frostlang$frostc$Type* $tmp628 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local4) = $tmp627;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing REF($158:org.frostlang.frostc.Type)
goto block10;
block11:;
// line 1
// line 147
org$frostlang$frostc$IR$Value* $tmp629 = *(&local2);
$fn631 $tmp630 = ($fn631) $tmp629->$class->vtable[2];
org$frostlang$frostc$Type* $tmp632 = $tmp630($tmp629);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
org$frostlang$frostc$Type* $tmp633 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local4) = $tmp632;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// unreffing REF($173:org.frostlang.frostc.Type)
goto block10;
block10:;
// line 149
org$frostlang$frostc$IR** $tmp634 = &param0->ir;
org$frostlang$frostc$IR* $tmp635 = *$tmp634;
org$frostlang$frostc$IR$Statement* $tmp636 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp637 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp638 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp639 = *(&local1);
frost$core$Bit $tmp640 = frost$core$Bit$init$builtin_bit($tmp639 != NULL);
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp642 = (frost$core$Int64) {150};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s643, $tmp642, &$s644);
abort(); // unreachable
block12:;
org$frostlang$frostc$IR$Value* $tmp645 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp639);
org$frostlang$frostc$Type* $tmp646 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp636, $tmp637, param1, $tmp638, param3, $tmp645, $tmp646);
$fn648 $tmp647 = ($fn648) $tmp635->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp649 = $tmp647($tmp635, $tmp636);
*(&local3) = $tmp649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// unreffing REF($199:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
// unreffing REF($187:org.frostlang.frostc.IR.Statement)
// line 151
frost$collections$Array* $tmp650 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp650);
*(&local5) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
frost$collections$Array* $tmp651 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local5) = $tmp650;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
// unreffing REF($212:frost.collections.Array<org.frostlang.frostc.ASTNode>)
// line 152
frost$collections$Array* $tmp652 = *(&local5);
org$frostlang$frostc$ASTNode* $tmp653 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp654 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp655 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp656 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp657 = *(&local3);
org$frostlang$frostc$Type* $tmp658 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp655, $tmp656, $tmp657, $tmp658);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp653, $tmp654, param1, $tmp655);
frost$collections$Array$add$frost$collections$Array$T($tmp652, ((frost$core$Object*) $tmp653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing REF($230:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
// unreffing REF($228:org.frostlang.frostc.ASTNode)
// line 153
org$frostlang$frostc$IR$Value* $tmp659 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp660 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp659, $tmp660, param6);
frost$collections$Array* $tmp661 = *(&local5);
org$frostlang$frostc$Compiler$TypeContext* $tmp662 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp663 = (frost$core$Int64) {3};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp662, $tmp663, param6);
org$frostlang$frostc$IR$Value* $tmp664 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp659, ((frost$collections$ListView*) $tmp661), $tmp662);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
org$frostlang$frostc$IR$Value* $tmp665 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local6) = $tmp664;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
// unreffing REF($253:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing REF($250:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
// unreffing REF($245:org.frostlang.frostc.IR.Value)
// line 155
org$frostlang$frostc$IR$Value* $tmp666 = *(&local6);
frost$core$Bit $tmp667 = frost$core$Bit$init$builtin_bit($tmp666 != NULL);
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp669 = (frost$core$Int64) {155};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s670, $tmp669);
abort(); // unreachable
block14:;
// line 156
org$frostlang$frostc$Pair* $tmp671 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp672 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp673;
$tmp673 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp673->value = $tmp672;
org$frostlang$frostc$IR$Value* $tmp674 = *(&local6);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp671, ((frost$core$Object*) $tmp673), ((frost$core$Object*) $tmp674));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
// unreffing REF($283:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
// unreffing REF($280:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp675 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing construct
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp676 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// unreffing constructArgs
*(&local5) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp677 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// unreffing builtinResultType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp678 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
// unreffing builtinLeft
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp679 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
// unreffing right
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp680 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
// unreffing left
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp671;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
// line 163
org$frostlang$frostc$MethodDecl** $tmp681 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp682 = *$tmp681;
frost$core$String** $tmp683 = &((org$frostlang$frostc$Symbol*) $tmp682)->name;
frost$core$String* $tmp684 = *$tmp683;
frost$core$Bit $tmp685 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s686);
bool $tmp687 = $tmp685.value;
if ($tmp687) goto block2; else goto block3;
block2:;
// line 165
org$frostlang$frostc$MethodDecl** $tmp688 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp689 = *$tmp688;
frost$collections$Array** $tmp690 = &$tmp689->parameters;
frost$collections$Array* $tmp691 = *$tmp690;
ITable* $tmp692 = ((frost$collections$CollectionView*) $tmp691)->$class->itable;
while ($tmp692->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp692 = $tmp692->next;
}
$fn694 $tmp693 = $tmp692->methods[0];
frost$core$Int64 $tmp695 = $tmp693(((frost$collections$CollectionView*) $tmp691));
frost$core$Int64 $tmp696 = (frost$core$Int64) {1};
frost$core$Bit $tmp697 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp695, $tmp696);
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp699 = (frost$core$Int64) {165};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s700, $tmp699);
abort(); // unreachable
block4:;
// line 166
ITable* $tmp701 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp701->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[0];
frost$core$Int64 $tmp704 = $tmp702(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp705 = (frost$core$Int64) {1};
frost$core$Bit $tmp706 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp704, $tmp705);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp708 = (frost$core$Int64) {166};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s709, $tmp708);
abort(); // unreachable
block6:;
// line 167
org$frostlang$frostc$MethodDecl** $tmp710 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp711 = *$tmp710;
frost$collections$Array** $tmp712 = &$tmp711->parameters;
frost$collections$Array* $tmp713 = *$tmp712;
frost$core$Int64 $tmp714 = (frost$core$Int64) {0};
frost$core$Object* $tmp715 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp713, $tmp714);
org$frostlang$frostc$Type** $tmp716 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp715)->type;
org$frostlang$frostc$Type* $tmp717 = *$tmp716;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
org$frostlang$frostc$Type* $tmp718 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local0) = $tmp717;
frost$core$Frost$unref$frost$core$Object$Q($tmp715);
// unreffing REF($42:frost.collections.Array.T)
// line 168
org$frostlang$frostc$Type* $tmp719 = *(&local0);
frost$core$Bit $tmp720 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp719);
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block8; else goto block9;
block8:;
// line 169
frost$core$Int64 $tmp722 = (frost$core$Int64) {0};
ITable* $tmp723 = param4->$class->itable;
while ($tmp723->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp723 = $tmp723->next;
}
$fn725 $tmp724 = $tmp723->methods[0];
frost$core$Object* $tmp726 = $tmp724(param4, $tmp722);
org$frostlang$frostc$Compiler$TypeContext* $tmp727 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp728 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp729 = *(&local0);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp727, $tmp728, $tmp729);
org$frostlang$frostc$IR$Value* $tmp730 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp726), $tmp727);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
org$frostlang$frostc$IR$Value* $tmp731 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local1) = $tmp730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
// unreffing REF($71:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
// unreffing REF($67:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp726);
// unreffing REF($65:frost.collections.ListView.T)
// line 170
org$frostlang$frostc$IR$Value* $tmp732 = *(&local1);
frost$core$Bit $tmp733 = frost$core$Bit$init$builtin_bit($tmp732 != NULL);
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block10; else goto block11;
block10:;
// line 171
org$frostlang$frostc$IR** $tmp735 = &param0->ir;
org$frostlang$frostc$IR* $tmp736 = *$tmp735;
org$frostlang$frostc$IR$Statement* $tmp737 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp738 = (frost$core$Int64) {7};
org$frostlang$frostc$MethodDecl** $tmp739 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp740 = *$tmp739;
frost$core$Weak** $tmp741 = &$tmp740->owner;
frost$core$Weak* $tmp742 = *$tmp741;
frost$core$Object* $tmp743 = frost$core$Weak$get$R$frost$core$Weak$T($tmp742);
frost$collections$Array* $tmp744 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp745 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp744, $tmp745);
org$frostlang$frostc$IR$Value* $tmp746 = *(&local1);
frost$core$Bit $tmp747 = frost$core$Bit$init$builtin_bit($tmp746 != NULL);
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp749 = (frost$core$Int64) {172};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s750, $tmp749, &$s751);
abort(); // unreachable
block12:;
frost$collections$Array$add$frost$collections$Array$T($tmp744, ((frost$core$Object*) $tmp746));
org$frostlang$frostc$FixedArray* $tmp752 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp744);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp737, $tmp738, param1, ((org$frostlang$frostc$ClassDecl*) $tmp743), $tmp752);
$fn754 $tmp753 = ($fn754) $tmp736->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp755 = $tmp753($tmp736, $tmp737);
*(&local2) = $tmp755;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// unreffing REF($123:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// unreffing REF($106:frost.collections.Array<org.frostlang.frostc.IR.Value>)
frost$core$Frost$unref$frost$core$Object$Q($tmp743);
// unreffing REF($104:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
// unreffing REF($97:org.frostlang.frostc.IR.Statement)
// line 173
org$frostlang$frostc$Pair* $tmp756 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp757 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp758;
$tmp758 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp758->value = $tmp757;
org$frostlang$frostc$IR$Value* $tmp759 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp760 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp761 = *(&local2);
org$frostlang$frostc$MethodDecl** $tmp762 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp763 = *$tmp762;
frost$core$Weak** $tmp764 = &$tmp763->owner;
frost$core$Weak* $tmp765 = *$tmp764;
frost$core$Object* $tmp766 = frost$core$Weak$get$R$frost$core$Weak$T($tmp765);
org$frostlang$frostc$Type** $tmp767 = &((org$frostlang$frostc$ClassDecl*) $tmp766)->type;
org$frostlang$frostc$Type* $tmp768 = *$tmp767;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp759, $tmp760, $tmp761, $tmp768);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp756, ((frost$core$Object*) $tmp758), ((frost$core$Object*) $tmp759));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q($tmp766);
// unreffing REF($154:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// unreffing REF($146:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
// unreffing REF($145:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
// unreffing REF($142:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp769 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// unreffing value
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp770 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
// unreffing paramType
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp756;
block11:;
org$frostlang$frostc$IR$Value* $tmp771 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
// unreffing value
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block9;
block9:;
org$frostlang$frostc$Type* $tmp772 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
// unreffing paramType
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Bit $tmp773 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s774);
bool $tmp775 = $tmp773.value;
if ($tmp775) goto block14; else goto block15;
block14:;
// line 178
frost$core$Bit $tmp776 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp778 = (frost$core$Int64) {178};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s779, $tmp778, &$s780);
abort(); // unreachable
block16:;
frost$core$Int64 $tmp781 = (frost$core$Int64) {0};
org$frostlang$frostc$expression$Binary$Operator $tmp782 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp781);
org$frostlang$frostc$Type* $tmp783 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp784 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp785 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp782, param4, $tmp783, $tmp784);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// unreffing REF($215:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// unreffing REF($214:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
// unreffing REF($213:org.frostlang.frostc.Type)
return $tmp785;
block15:;
frost$core$Bit $tmp786 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s787);
bool $tmp788 = $tmp786.value;
if ($tmp788) goto block18; else goto block19;
block18:;
// line 182
frost$core$Bit $tmp789 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp791 = (frost$core$Int64) {182};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s792, $tmp791, &$s793);
abort(); // unreachable
block20:;
frost$core$Int64 $tmp794 = (frost$core$Int64) {1};
org$frostlang$frostc$expression$Binary$Operator $tmp795 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp794);
org$frostlang$frostc$Type* $tmp796 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp797 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp798 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp795, param4, $tmp796, $tmp797);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp798));
// unreffing REF($244:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// unreffing REF($243:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// unreffing REF($242:org.frostlang.frostc.Type)
return $tmp798;
block19:;
frost$core$Bit $tmp799 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s800);
bool $tmp801 = $tmp799.value;
if ($tmp801) goto block22; else goto block23;
block22:;
// line 186
frost$core$Bit $tmp802 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp804 = (frost$core$Int64) {186};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s805, $tmp804, &$s806);
abort(); // unreachable
block24:;
frost$core$Int64 $tmp807 = (frost$core$Int64) {2};
org$frostlang$frostc$expression$Binary$Operator $tmp808 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp807);
org$frostlang$frostc$Type* $tmp809 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp810 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp811 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp808, param4, $tmp809, $tmp810);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// unreffing REF($273:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
// unreffing REF($272:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// unreffing REF($271:org.frostlang.frostc.Type)
return $tmp811;
block23:;
frost$core$Bit $tmp812 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s813);
bool $tmp814 = $tmp812.value;
if ($tmp814) goto block26; else goto block27;
block26:;
// line 190
frost$core$Bit $tmp815 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp817 = (frost$core$Int64) {190};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s818, $tmp817, &$s819);
abort(); // unreachable
block28:;
frost$core$Int64 $tmp820 = (frost$core$Int64) {4};
org$frostlang$frostc$expression$Binary$Operator $tmp821 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp820);
org$frostlang$frostc$Type* $tmp822 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp823 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp824 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp821, param4, $tmp822, $tmp823);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
// unreffing REF($302:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// unreffing REF($301:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing REF($300:org.frostlang.frostc.Type)
return $tmp824;
block27:;
frost$core$Bit $tmp825 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s826);
bool $tmp827 = $tmp825.value;
if ($tmp827) goto block30; else goto block31;
block30:;
// line 194
frost$core$Bit $tmp828 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp830 = (frost$core$Int64) {194};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s831, $tmp830, &$s832);
abort(); // unreachable
block32:;
frost$core$Int64 $tmp833 = (frost$core$Int64) {8};
org$frostlang$frostc$expression$Binary$Operator $tmp834 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp833);
org$frostlang$frostc$MethodDecl** $tmp835 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp836 = *$tmp835;
frost$core$Weak** $tmp837 = &$tmp836->owner;
frost$core$Weak* $tmp838 = *$tmp837;
frost$core$Object* $tmp839 = frost$core$Weak$get$R$frost$core$Weak$T($tmp838);
org$frostlang$frostc$Type** $tmp840 = &((org$frostlang$frostc$ClassDecl*) $tmp839)->type;
org$frostlang$frostc$Type* $tmp841 = *$tmp840;
org$frostlang$frostc$MethodDecl** $tmp842 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp843 = *$tmp842;
frost$collections$Array** $tmp844 = &$tmp843->parameters;
frost$collections$Array* $tmp845 = *$tmp844;
frost$core$Int64 $tmp846 = (frost$core$Int64) {0};
frost$core$Object* $tmp847 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp845, $tmp846);
org$frostlang$frostc$Type** $tmp848 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp847)->type;
org$frostlang$frostc$Type* $tmp849 = *$tmp848;
frost$core$Bit $tmp850 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp851 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp852 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp841, $tmp849, $tmp850, $tmp851);
org$frostlang$frostc$Type* $tmp853 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp854 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp834, param4, $tmp852, $tmp853);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// unreffing REF($352:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
// unreffing REF($351:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// unreffing REF($350:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp847);
// unreffing REF($344:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp839);
// unreffing REF($334:frost.core.Weak.T)
return $tmp854;
block31:;
frost$core$Bit $tmp855 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s856);
bool $tmp857 = $tmp855.value;
if ($tmp857) goto block34; else goto block35;
block34:;
// line 200
frost$core$Bit $tmp858 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp860 = (frost$core$Int64) {200};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s861, $tmp860, &$s862);
abort(); // unreachable
block36:;
frost$core$Int64 $tmp863 = (frost$core$Int64) {10};
org$frostlang$frostc$expression$Binary$Operator $tmp864 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp863);
org$frostlang$frostc$MethodDecl** $tmp865 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp866 = *$tmp865;
frost$core$Weak** $tmp867 = &$tmp866->owner;
frost$core$Weak* $tmp868 = *$tmp867;
frost$core$Object* $tmp869 = frost$core$Weak$get$R$frost$core$Weak$T($tmp868);
org$frostlang$frostc$Type** $tmp870 = &((org$frostlang$frostc$ClassDecl*) $tmp869)->type;
org$frostlang$frostc$Type* $tmp871 = *$tmp870;
org$frostlang$frostc$MethodDecl** $tmp872 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp873 = *$tmp872;
frost$collections$Array** $tmp874 = &$tmp873->parameters;
frost$collections$Array* $tmp875 = *$tmp874;
frost$core$Int64 $tmp876 = (frost$core$Int64) {0};
frost$core$Object* $tmp877 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp875, $tmp876);
org$frostlang$frostc$Type** $tmp878 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp877)->type;
org$frostlang$frostc$Type* $tmp879 = *$tmp878;
frost$core$Bit $tmp880 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp881 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp882 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp871, $tmp879, $tmp880, $tmp881);
org$frostlang$frostc$Type* $tmp883 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp884 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp864, param4, $tmp882, $tmp883);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// unreffing REF($408:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
// unreffing REF($407:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
// unreffing REF($406:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp877);
// unreffing REF($400:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp869);
// unreffing REF($390:frost.core.Weak.T)
return $tmp884;
block35:;
frost$core$Bit $tmp885 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s886);
bool $tmp887 = $tmp885.value;
if ($tmp887) goto block38; else goto block39;
block38:;
// line 206
frost$core$Bit $tmp888 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block40; else goto block41;
block41:;
frost$core$Int64 $tmp890 = (frost$core$Int64) {206};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s891, $tmp890, &$s892);
abort(); // unreachable
block40:;
frost$core$Int64 $tmp893 = (frost$core$Int64) {9};
org$frostlang$frostc$expression$Binary$Operator $tmp894 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp893);
org$frostlang$frostc$MethodDecl** $tmp895 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp896 = *$tmp895;
frost$core$Weak** $tmp897 = &$tmp896->owner;
frost$core$Weak* $tmp898 = *$tmp897;
frost$core$Object* $tmp899 = frost$core$Weak$get$R$frost$core$Weak$T($tmp898);
org$frostlang$frostc$Type** $tmp900 = &((org$frostlang$frostc$ClassDecl*) $tmp899)->type;
org$frostlang$frostc$Type* $tmp901 = *$tmp900;
org$frostlang$frostc$MethodDecl** $tmp902 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp903 = *$tmp902;
frost$collections$Array** $tmp904 = &$tmp903->parameters;
frost$collections$Array* $tmp905 = *$tmp904;
frost$core$Int64 $tmp906 = (frost$core$Int64) {0};
frost$core$Object* $tmp907 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp905, $tmp906);
org$frostlang$frostc$Type** $tmp908 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp907)->type;
org$frostlang$frostc$Type* $tmp909 = *$tmp908;
frost$core$Bit $tmp910 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp911 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp912 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp901, $tmp909, $tmp910, $tmp911);
org$frostlang$frostc$Type* $tmp913 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp914 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp894, param4, $tmp912, $tmp913);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// unreffing REF($464:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// unreffing REF($463:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// unreffing REF($462:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp907);
// unreffing REF($456:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp899);
// unreffing REF($446:frost.core.Weak.T)
return $tmp914;
block39:;
frost$core$Bit $tmp915 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s916);
bool $tmp917 = $tmp915.value;
if ($tmp917) goto block42; else goto block43;
block42:;
// line 212
frost$core$Bit $tmp918 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp920 = (frost$core$Int64) {212};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s921, $tmp920, &$s922);
abort(); // unreachable
block44:;
frost$core$Int64 $tmp923 = (frost$core$Int64) {11};
org$frostlang$frostc$expression$Binary$Operator $tmp924 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp923);
org$frostlang$frostc$MethodDecl** $tmp925 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp926 = *$tmp925;
frost$core$Weak** $tmp927 = &$tmp926->owner;
frost$core$Weak* $tmp928 = *$tmp927;
frost$core$Object* $tmp929 = frost$core$Weak$get$R$frost$core$Weak$T($tmp928);
org$frostlang$frostc$Type** $tmp930 = &((org$frostlang$frostc$ClassDecl*) $tmp929)->type;
org$frostlang$frostc$Type* $tmp931 = *$tmp930;
org$frostlang$frostc$MethodDecl** $tmp932 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp933 = *$tmp932;
frost$collections$Array** $tmp934 = &$tmp933->parameters;
frost$collections$Array* $tmp935 = *$tmp934;
frost$core$Int64 $tmp936 = (frost$core$Int64) {0};
frost$core$Object* $tmp937 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp935, $tmp936);
org$frostlang$frostc$Type** $tmp938 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp937)->type;
org$frostlang$frostc$Type* $tmp939 = *$tmp938;
frost$core$Bit $tmp940 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp941 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp942 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp931, $tmp939, $tmp940, $tmp941);
org$frostlang$frostc$Type* $tmp943 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp944 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp924, param4, $tmp942, $tmp943);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
// unreffing REF($520:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
// unreffing REF($519:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// unreffing REF($518:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp937);
// unreffing REF($512:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp929);
// unreffing REF($502:frost.core.Weak.T)
return $tmp944;
block43:;
frost$core$Bit $tmp945 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s946);
bool $tmp947 = $tmp945.value;
if ($tmp947) goto block46; else goto block47;
block46:;
// line 218
frost$core$Bit $tmp948 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp949 = $tmp948.value;
if ($tmp949) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp950 = (frost$core$Int64) {218};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s951, $tmp950, &$s952);
abort(); // unreachable
block48:;
frost$core$Int64 $tmp953 = (frost$core$Int64) {6};
org$frostlang$frostc$expression$Binary$Operator $tmp954 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp953);
org$frostlang$frostc$MethodDecl** $tmp955 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp956 = *$tmp955;
frost$core$Weak** $tmp957 = &$tmp956->owner;
frost$core$Weak* $tmp958 = *$tmp957;
frost$core$Object* $tmp959 = frost$core$Weak$get$R$frost$core$Weak$T($tmp958);
org$frostlang$frostc$Type** $tmp960 = &((org$frostlang$frostc$ClassDecl*) $tmp959)->type;
org$frostlang$frostc$Type* $tmp961 = *$tmp960;
org$frostlang$frostc$MethodDecl** $tmp962 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp963 = *$tmp962;
frost$collections$Array** $tmp964 = &$tmp963->parameters;
frost$collections$Array* $tmp965 = *$tmp964;
frost$core$Int64 $tmp966 = (frost$core$Int64) {0};
frost$core$Object* $tmp967 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp965, $tmp966);
org$frostlang$frostc$Type** $tmp968 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp967)->type;
org$frostlang$frostc$Type* $tmp969 = *$tmp968;
frost$core$Bit $tmp970 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp971 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp972 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp961, $tmp969, $tmp970, $tmp971);
org$frostlang$frostc$Type* $tmp973 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp974 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp954, param4, $tmp972, $tmp973);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
// unreffing REF($576:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
// unreffing REF($575:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
// unreffing REF($574:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp967);
// unreffing REF($568:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp959);
// unreffing REF($558:frost.core.Weak.T)
return $tmp974;
block47:;
frost$core$Bit $tmp975 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp684, &$s976);
bool $tmp977 = $tmp975.value;
if ($tmp977) goto block50; else goto block1;
block50:;
// line 224
frost$core$Bit $tmp978 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp979 = $tmp978.value;
if ($tmp979) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp980 = (frost$core$Int64) {224};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s981, $tmp980, &$s982);
abort(); // unreachable
block51:;
frost$core$Int64 $tmp983 = (frost$core$Int64) {7};
org$frostlang$frostc$expression$Binary$Operator $tmp984 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp983);
org$frostlang$frostc$MethodDecl** $tmp985 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp986 = *$tmp985;
frost$core$Weak** $tmp987 = &$tmp986->owner;
frost$core$Weak* $tmp988 = *$tmp987;
frost$core$Object* $tmp989 = frost$core$Weak$get$R$frost$core$Weak$T($tmp988);
org$frostlang$frostc$Type** $tmp990 = &((org$frostlang$frostc$ClassDecl*) $tmp989)->type;
org$frostlang$frostc$Type* $tmp991 = *$tmp990;
org$frostlang$frostc$MethodDecl** $tmp992 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp993 = *$tmp992;
frost$collections$Array** $tmp994 = &$tmp993->parameters;
frost$collections$Array* $tmp995 = *$tmp994;
frost$core$Int64 $tmp996 = (frost$core$Int64) {0};
frost$core$Object* $tmp997 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp995, $tmp996);
org$frostlang$frostc$Type** $tmp998 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp997)->type;
org$frostlang$frostc$Type* $tmp999 = *$tmp998;
frost$core$Bit $tmp1000 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit $tmp1001 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp1002 = org$frostlang$frostc$Compiler$binaryType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$frost$core$Bit$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp991, $tmp999, $tmp1000, $tmp1001);
org$frostlang$frostc$Type* $tmp1003 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Pair* $tmp1004 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp984, param4, $tmp1002, $tmp1003);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1004));
// unreffing REF($632:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
// unreffing REF($631:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1002));
// unreffing REF($630:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp997);
// unreffing REF($624:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp989);
// unreffing REF($614:frost.core.Weak.T)
return $tmp1004;
block1:;
// line 230
org$frostlang$frostc$Pair* $tmp1005 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1006 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp1007;
$tmp1007 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1007->value = $tmp1006;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1005, ((frost$core$Object*) $tmp1007), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
// unreffing REF($655:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
// unreffing REF($652:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp1005;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileBitIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

org$frostlang$frostc$Type* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Statement$ID local2;
// line 237
org$frostlang$frostc$MethodDecl** $tmp1008 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp1009 = *$tmp1008;
frost$core$String** $tmp1010 = &((org$frostlang$frostc$Symbol*) $tmp1009)->name;
frost$core$String* $tmp1011 = *$tmp1010;
frost$core$Bit $tmp1012 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1011, &$s1013);
bool $tmp1014 = $tmp1012.value;
if ($tmp1014) goto block2; else goto block1;
block2:;
// line 239
org$frostlang$frostc$MethodDecl** $tmp1015 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp1016 = *$tmp1015;
frost$collections$Array** $tmp1017 = &$tmp1016->parameters;
frost$collections$Array* $tmp1018 = *$tmp1017;
ITable* $tmp1019 = ((frost$collections$CollectionView*) $tmp1018)->$class->itable;
while ($tmp1019->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1019 = $tmp1019->next;
}
$fn1021 $tmp1020 = $tmp1019->methods[0];
frost$core$Int64 $tmp1022 = $tmp1020(((frost$collections$CollectionView*) $tmp1018));
frost$core$Int64 $tmp1023 = (frost$core$Int64) {1};
frost$core$Bit $tmp1024 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1022, $tmp1023);
bool $tmp1025 = $tmp1024.value;
if ($tmp1025) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp1026 = (frost$core$Int64) {239};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1027, $tmp1026);
abort(); // unreachable
block3:;
// line 240
ITable* $tmp1028 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp1028->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1028 = $tmp1028->next;
}
$fn1030 $tmp1029 = $tmp1028->methods[0];
frost$core$Int64 $tmp1031 = $tmp1029(((frost$collections$CollectionView*) param4));
frost$core$Int64 $tmp1032 = (frost$core$Int64) {1};
frost$core$Bit $tmp1033 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1031, $tmp1032);
bool $tmp1034 = $tmp1033.value;
if ($tmp1034) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp1035 = (frost$core$Int64) {240};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1036, $tmp1035);
abort(); // unreachable
block5:;
// line 241
org$frostlang$frostc$MethodDecl** $tmp1037 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp1038 = *$tmp1037;
frost$collections$Array** $tmp1039 = &$tmp1038->parameters;
frost$collections$Array* $tmp1040 = *$tmp1039;
frost$core$Int64 $tmp1041 = (frost$core$Int64) {0};
frost$core$Object* $tmp1042 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1040, $tmp1041);
org$frostlang$frostc$Type** $tmp1043 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1042)->type;
org$frostlang$frostc$Type* $tmp1044 = *$tmp1043;
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
org$frostlang$frostc$Type* $tmp1045 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
*(&local0) = $tmp1044;
frost$core$Frost$unref$frost$core$Object$Q($tmp1042);
// unreffing REF($42:frost.collections.Array.T)
// line 242
org$frostlang$frostc$Type* $tmp1046 = *(&local0);
org$frostlang$frostc$Type* $tmp1047 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1048 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1046, $tmp1047);
bool $tmp1049 = $tmp1048.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
// unreffing REF($58:org.frostlang.frostc.Type)
if ($tmp1049) goto block7; else goto block8;
block7:;
// line 243
frost$core$Int64 $tmp1050 = (frost$core$Int64) {0};
ITable* $tmp1051 = param4->$class->itable;
while ($tmp1051->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1051 = $tmp1051->next;
}
$fn1053 $tmp1052 = $tmp1051->methods[0];
frost$core$Object* $tmp1054 = $tmp1052(param4, $tmp1050);
org$frostlang$frostc$Compiler$TypeContext* $tmp1055 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1056 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1057 = *(&local0);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1055, $tmp1056, $tmp1057);
org$frostlang$frostc$IR$Value* $tmp1058 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1054), $tmp1055);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
org$frostlang$frostc$IR$Value* $tmp1059 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local1) = $tmp1058;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// unreffing REF($75:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
// unreffing REF($71:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp1054);
// unreffing REF($69:frost.collections.ListView.T)
// line 244
org$frostlang$frostc$IR$Value* $tmp1060 = *(&local1);
frost$core$Bit $tmp1061 = frost$core$Bit$init$builtin_bit($tmp1060 != NULL);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block9; else goto block10;
block9:;
// line 245
org$frostlang$frostc$IR** $tmp1063 = &param0->ir;
org$frostlang$frostc$IR* $tmp1064 = *$tmp1063;
org$frostlang$frostc$IR$Statement* $tmp1065 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp1066 = (frost$core$Int64) {7};
org$frostlang$frostc$MethodDecl** $tmp1067 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp1068 = *$tmp1067;
frost$core$Weak** $tmp1069 = &$tmp1068->owner;
frost$core$Weak* $tmp1070 = *$tmp1069;
frost$core$Object* $tmp1071 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1070);
frost$collections$Array* $tmp1072 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1073 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1072, $tmp1073);
org$frostlang$frostc$IR$Value* $tmp1074 = *(&local1);
frost$core$Bit $tmp1075 = frost$core$Bit$init$builtin_bit($tmp1074 != NULL);
bool $tmp1076 = $tmp1075.value;
if ($tmp1076) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp1077 = (frost$core$Int64) {246};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1078, $tmp1077, &$s1079);
abort(); // unreachable
block11:;
frost$collections$Array$add$frost$collections$Array$T($tmp1072, ((frost$core$Object*) $tmp1074));
org$frostlang$frostc$FixedArray* $tmp1080 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp1072);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp1065, $tmp1066, param1, ((org$frostlang$frostc$ClassDecl*) $tmp1071), $tmp1080);
$fn1082 $tmp1081 = ($fn1082) $tmp1064->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp1083 = $tmp1081($tmp1064, $tmp1065);
*(&local2) = $tmp1083;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
// unreffing REF($127:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
// unreffing REF($110:frost.collections.Array<org.frostlang.frostc.IR.Value>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1071);
// unreffing REF($108:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
// unreffing REF($101:org.frostlang.frostc.IR.Statement)
// line 247
org$frostlang$frostc$Pair* $tmp1084 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1085 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit$wrapper* $tmp1086;
$tmp1086 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1086->value = $tmp1085;
org$frostlang$frostc$IR$Value* $tmp1087 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp1088 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp1089 = *(&local2);
org$frostlang$frostc$MethodDecl** $tmp1090 = &param3->value;
org$frostlang$frostc$MethodDecl* $tmp1091 = *$tmp1090;
frost$core$Weak** $tmp1092 = &$tmp1091->owner;
frost$core$Weak* $tmp1093 = *$tmp1092;
frost$core$Object* $tmp1094 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1093);
org$frostlang$frostc$Type** $tmp1095 = &((org$frostlang$frostc$ClassDecl*) $tmp1094)->type;
org$frostlang$frostc$Type* $tmp1096 = *$tmp1095;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp1087, $tmp1088, $tmp1089, $tmp1096);
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1084, ((frost$core$Object*) $tmp1086), ((frost$core$Object*) $tmp1087));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$core$Frost$unref$frost$core$Object$Q($tmp1094);
// unreffing REF($158:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
// unreffing REF($150:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1086));
// unreffing REF($149:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
// unreffing REF($146:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
org$frostlang$frostc$IR$Value* $tmp1097 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
// unreffing value
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp1098 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1098));
// unreffing paramType
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1084;
block10:;
org$frostlang$frostc$IR$Value* $tmp1099 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
// unreffing value
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block8;
block8:;
org$frostlang$frostc$Type* $tmp1100 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
// unreffing paramType
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// line 252
org$frostlang$frostc$Pair* $tmp1101 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1102 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp1103;
$tmp1103 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1103->value = $tmp1102;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1101, ((frost$core$Object*) $tmp1103), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
// unreffing REF($207:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
// unreffing REF($204:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp1101;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$compileIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodRef* param3, frost$collections$ListView* param4) {

frost$core$Bit local0;
frost$core$Bit local1;
// line 258
org$frostlang$frostc$Type** $tmp1104 = &param3->target;
org$frostlang$frostc$Type* $tmp1105 = *$tmp1104;
frost$core$Bit $tmp1106 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit($tmp1105);
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block3; else goto block4;
block3:;
*(&local0) = $tmp1106;
goto block5;
block4:;
org$frostlang$frostc$Type** $tmp1108 = &param3->target;
org$frostlang$frostc$Type* $tmp1109 = *$tmp1108;
frost$core$Bit $tmp1110 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp1109);
bool $tmp1111 = $tmp1110.value;
if ($tmp1111) goto block6; else goto block7;
block6:;
org$frostlang$frostc$Type** $tmp1112 = &param3->target;
org$frostlang$frostc$Type* $tmp1113 = *$tmp1112;
org$frostlang$frostc$FixedArray** $tmp1114 = &$tmp1113->subtypes;
org$frostlang$frostc$FixedArray* $tmp1115 = *$tmp1114;
frost$core$Bit $tmp1116 = frost$core$Bit$init$builtin_bit($tmp1115 != NULL);
bool $tmp1117 = $tmp1116.value;
if ($tmp1117) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp1118 = (frost$core$Int64) {258};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1119, $tmp1118, &$s1120);
abort(); // unreachable
block9:;
frost$core$Int64 $tmp1121 = (frost$core$Int64) {1};
frost$core$Object* $tmp1122 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1115, $tmp1121);
frost$core$Bit $tmp1123 = org$frostlang$frostc$Type$get_isPointer$R$frost$core$Bit(((org$frostlang$frostc$Type*) $tmp1122));
frost$core$Frost$unref$frost$core$Object$Q($tmp1122);
// unreffing REF($27:org.frostlang.frostc.FixedArray.T)
*(&local1) = $tmp1123;
goto block8;
block7:;
*(&local1) = $tmp1110;
goto block8;
block8:;
frost$core$Bit $tmp1124 = *(&local1);
*(&local0) = $tmp1124;
goto block5;
block5:;
frost$core$Bit $tmp1125 = *(&local0);
bool $tmp1126 = $tmp1125.value;
if ($tmp1126) goto block1; else goto block2;
block1:;
// line 259
org$frostlang$frostc$Pair* $tmp1127 = org$frostlang$frostc$expression$Call$compilePointerIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
// unreffing REF($44:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp1127;
block2:;
// line 261
org$frostlang$frostc$Type** $tmp1128 = &param3->target;
org$frostlang$frostc$Type* $tmp1129 = *$tmp1128;
frost$core$Bit $tmp1130 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp1129);
bool $tmp1131 = $tmp1130.value;
if ($tmp1131) goto block11; else goto block12;
block11:;
// line 262
org$frostlang$frostc$Pair* $tmp1132 = org$frostlang$frostc$expression$Call$compileNumberIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
// unreffing REF($58:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp1132;
block12:;
// line 264
org$frostlang$frostc$Type** $tmp1133 = &param3->target;
org$frostlang$frostc$Type* $tmp1134 = *$tmp1133;
org$frostlang$frostc$Type* $tmp1135 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1136 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1134, $tmp1135);
bool $tmp1137 = $tmp1136.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1135));
// unreffing REF($68:org.frostlang.frostc.Type)
if ($tmp1137) goto block13; else goto block14;
block13:;
// line 265
org$frostlang$frostc$Pair* $tmp1138 = org$frostlang$frostc$expression$Call$compileBitIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
// unreffing REF($76:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp1138;
block14:;
// line 267
org$frostlang$frostc$Pair* $tmp1139 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$core$Bit $tmp1140 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit$wrapper* $tmp1141;
$tmp1141 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1141->value = $tmp1140;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1139, ((frost$core$Object*) $tmp1141), ((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
// unreffing REF($87:org.frostlang.frostc.Pair.A)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
// unreffing REF($84:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
return $tmp1139;

}
frost$collections$ListView* org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q(org$frostlang$frostc$MethodDecl* param0, org$frostlang$frostc$Type* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Int64 local1;
frost$collections$ListView* local2 = NULL;
frost$collections$ListView* local3 = NULL;
frost$collections$Array* local4 = NULL;
// line 281
org$frostlang$frostc$FixedArray** $tmp1142 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp1143 = *$tmp1142;
frost$core$Bit $tmp1144 = frost$core$Bit$init$builtin_bit($tmp1143 == NULL);
bool $tmp1145 = $tmp1144.value;
if ($tmp1145) goto block1; else goto block2;
block1:;
// line 282
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
return ((frost$collections$ListView*) NULL);
block2:;
// line 284
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Array*) NULL)));
frost$collections$Array* $tmp1146 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local0) = ((frost$collections$Array*) NULL);
// line 285
frost$core$Int64 $tmp1147 = (frost$core$Int64) {0};
org$frostlang$frostc$FixedArray** $tmp1148 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp1149 = *$tmp1148;
frost$core$Bit $tmp1150 = frost$core$Bit$init$builtin_bit($tmp1149 != NULL);
bool $tmp1151 = $tmp1150.value;
if ($tmp1151) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp1152 = (frost$core$Int64) {285};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1153, $tmp1152, &$s1154);
abort(); // unreachable
block3:;
ITable* $tmp1155 = ((frost$collections$CollectionView*) $tmp1149)->$class->itable;
while ($tmp1155->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1155 = $tmp1155->next;
}
$fn1157 $tmp1156 = $tmp1155->methods[0];
frost$core$Int64 $tmp1158 = $tmp1156(((frost$collections$CollectionView*) $tmp1149));
frost$core$Bit $tmp1159 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1160 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1147, $tmp1158, $tmp1159);
frost$core$Int64 $tmp1161 = $tmp1160.min;
*(&local1) = $tmp1161;
frost$core$Int64 $tmp1162 = $tmp1160.max;
frost$core$Bit $tmp1163 = $tmp1160.inclusive;
bool $tmp1164 = $tmp1163.value;
frost$core$Int64 $tmp1165 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1166 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1165);
if ($tmp1164) goto block8; else goto block9;
block8:;
int64_t $tmp1167 = $tmp1161.value;
int64_t $tmp1168 = $tmp1162.value;
bool $tmp1169 = $tmp1167 <= $tmp1168;
frost$core$Bit $tmp1170 = (frost$core$Bit) {$tmp1169};
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block5; else goto block6;
block9:;
int64_t $tmp1172 = $tmp1161.value;
int64_t $tmp1173 = $tmp1162.value;
bool $tmp1174 = $tmp1172 < $tmp1173;
frost$core$Bit $tmp1175 = (frost$core$Bit) {$tmp1174};
bool $tmp1176 = $tmp1175.value;
if ($tmp1176) goto block5; else goto block6;
block5:;
// line 286
org$frostlang$frostc$FixedArray** $tmp1177 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp1178 = *$tmp1177;
frost$core$Bit $tmp1179 = frost$core$Bit$init$builtin_bit($tmp1178 != NULL);
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1181 = (frost$core$Int64) {286};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1182, $tmp1181, &$s1183);
abort(); // unreachable
block12:;
frost$core$Int64 $tmp1184 = *(&local1);
frost$core$Object* $tmp1185 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1178, $tmp1184);
org$frostlang$frostc$Type$Kind* $tmp1186 = &((org$frostlang$frostc$Type*) $tmp1185)->typeKind;
org$frostlang$frostc$Type$Kind $tmp1187 = *$tmp1186;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1188;
$tmp1188 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1188->value = $tmp1187;
frost$core$Int64 $tmp1189 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp1190 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1189);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1191;
$tmp1191 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1191->value = $tmp1190;
ITable* $tmp1192 = ((frost$core$Equatable*) $tmp1188)->$class->itable;
while ($tmp1192->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1192 = $tmp1192->next;
}
$fn1194 $tmp1193 = $tmp1192->methods[0];
frost$core$Bit $tmp1195 = $tmp1193(((frost$core$Equatable*) $tmp1188), ((frost$core$Equatable*) $tmp1191));
bool $tmp1196 = $tmp1195.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1191)));
// unreffing REF($76:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1188)));
// unreffing REF($72:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
frost$core$Frost$unref$frost$core$Object$Q($tmp1185);
// unreffing REF($68:org.frostlang.frostc.FixedArray.T)
if ($tmp1196) goto block10; else goto block14;
block10:;
// line 287
org$frostlang$frostc$FixedArray** $tmp1197 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp1198 = *$tmp1197;
frost$core$Bit $tmp1199 = frost$core$Bit$init$builtin_bit($tmp1198 != NULL);
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp1201 = (frost$core$Int64) {287};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1202, $tmp1201, &$s1203);
abort(); // unreachable
block17:;
frost$core$Int64 $tmp1204 = *(&local1);
frost$core$Object* $tmp1205 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1198, $tmp1204);
frost$core$Weak** $tmp1206 = &((org$frostlang$frostc$Type*) $tmp1205)->genericMethodParameter;
frost$core$Weak* $tmp1207 = *$tmp1206;
frost$core$Object* $tmp1208 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1207);
frost$core$Bit $tmp1209 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1208) != NULL);
bool $tmp1210 = $tmp1209.value;
if ($tmp1210) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp1211 = (frost$core$Int64) {287};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1212, $tmp1211, &$s1213);
abort(); // unreachable
block19:;
frost$core$String** $tmp1214 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1208)->owner;
frost$core$String* $tmp1215 = *$tmp1214;
frost$core$Weak** $tmp1216 = &param0->owner;
frost$core$Weak* $tmp1217 = *$tmp1216;
frost$core$Object* $tmp1218 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1217);
frost$core$String** $tmp1219 = &((org$frostlang$frostc$ClassDecl*) $tmp1218)->name;
frost$core$String* $tmp1220 = *$tmp1219;
frost$core$String* $tmp1221 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1220, &$s1222);
frost$core$String** $tmp1223 = &((org$frostlang$frostc$Symbol*) param0)->name;
frost$core$String* $tmp1224 = *$tmp1223;
frost$core$String* $tmp1225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1221, $tmp1224);
frost$core$Bit $tmp1226 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp1215, $tmp1225);
bool $tmp1227 = $tmp1226.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
// unreffing REF($131:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
// unreffing REF($127:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1218);
// unreffing REF($123:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1208);
// unreffing REF($108:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1205);
// unreffing REF($103:org.frostlang.frostc.FixedArray.T)
if ($tmp1227) goto block15; else goto block16;
block15:;
// line 288
frost$collections$Array* $tmp1228 = *(&local0);
frost$core$Bit $tmp1229 = frost$core$Bit$init$builtin_bit($tmp1228 == NULL);
bool $tmp1230 = $tmp1229.value;
if ($tmp1230) goto block21; else goto block22;
block21:;
// line 289
frost$collections$Array* $tmp1231 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1231);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
frost$collections$Array* $tmp1232 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local0) = $tmp1231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
// unreffing REF($157:frost.collections.Array<frost.collections.ListView<frost.core.Int64>>)
goto block22;
block22:;
// line 291
frost$collections$Array* $tmp1233 = *(&local0);
frost$core$Bit $tmp1234 = frost$core$Bit$init$builtin_bit($tmp1233 != NULL);
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp1236 = (frost$core$Int64) {291};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1237, $tmp1236, &$s1238);
abort(); // unreachable
block23:;
frost$collections$Array* $tmp1239 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1240 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1239, $tmp1240);
frost$core$Int64 $tmp1241 = *(&local1);
frost$core$Int64$wrapper* $tmp1242;
$tmp1242 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1242->value = $tmp1241;
frost$collections$Array$add$frost$collections$Array$T($tmp1239, ((frost$core$Object*) $tmp1242));
frost$collections$ImmutableArray* $tmp1243 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT($tmp1239);
frost$collections$Array$add$frost$collections$Array$T($tmp1233, ((frost$core$Object*) ((frost$collections$ListView*) $tmp1243)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
// unreffing REF($190:frost.collections.ImmutableArray<frost.collections.ImmutableArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
// unreffing REF($187:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
// unreffing REF($181:frost.collections.Array<frost.core.Int64>)
goto block16;
block16:;
goto block11;
block14:;
// line 1
// line 295
org$frostlang$frostc$FixedArray** $tmp1244 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp1245 = *$tmp1244;
frost$core$Bit $tmp1246 = frost$core$Bit$init$builtin_bit($tmp1245 != NULL);
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp1248 = (frost$core$Int64) {295};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1249, $tmp1248, &$s1250);
abort(); // unreachable
block25:;
frost$core$Int64 $tmp1251 = *(&local1);
frost$core$Object* $tmp1252 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1245, $tmp1251);
frost$collections$ListView* $tmp1253 = org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q(param0, ((org$frostlang$frostc$Type*) $tmp1252));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$collections$ListView* $tmp1254 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local2) = $tmp1253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
// unreffing REF($222:frost.collections.ListView<frost.collections.ListView<frost.core.Int64>>?)
frost$core$Frost$unref$frost$core$Object$Q($tmp1252);
// unreffing REF($220:org.frostlang.frostc.FixedArray.T)
// line 296
frost$collections$ListView* $tmp1255 = *(&local2);
frost$core$Bit $tmp1256 = frost$core$Bit$init$builtin_bit($tmp1255 != NULL);
bool $tmp1257 = $tmp1256.value;
if ($tmp1257) goto block27; else goto block28;
block27:;
// line 297
frost$collections$Array* $tmp1258 = *(&local0);
frost$core$Bit $tmp1259 = frost$core$Bit$init$builtin_bit($tmp1258 == NULL);
bool $tmp1260 = $tmp1259.value;
if ($tmp1260) goto block29; else goto block30;
block29:;
// line 298
frost$collections$Array* $tmp1261 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1261);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
frost$collections$Array* $tmp1262 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
*(&local0) = $tmp1261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
// unreffing REF($249:frost.collections.Array<frost.collections.ListView<frost.core.Int64>>)
goto block30;
block30:;
// line 300
frost$collections$ListView* $tmp1263 = *(&local2);
frost$core$Bit $tmp1264 = frost$core$Bit$init$builtin_bit($tmp1263 != NULL);
bool $tmp1265 = $tmp1264.value;
if ($tmp1265) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp1266 = (frost$core$Int64) {300};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1267, $tmp1266, &$s1268);
abort(); // unreachable
block31:;
ITable* $tmp1269 = ((frost$collections$Iterable*) $tmp1263)->$class->itable;
while ($tmp1269->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1269 = $tmp1269->next;
}
$fn1271 $tmp1270 = $tmp1269->methods[0];
frost$collections$Iterator* $tmp1272 = $tmp1270(((frost$collections$Iterable*) $tmp1263));
goto block33;
block33:;
ITable* $tmp1273 = $tmp1272->$class->itable;
while ($tmp1273->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1273 = $tmp1273->next;
}
$fn1275 $tmp1274 = $tmp1273->methods[0];
frost$core$Bit $tmp1276 = $tmp1274($tmp1272);
bool $tmp1277 = $tmp1276.value;
if ($tmp1277) goto block35; else goto block34;
block34:;
*(&local3) = ((frost$collections$ListView*) NULL);
ITable* $tmp1278 = $tmp1272->$class->itable;
while ($tmp1278->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1278 = $tmp1278->next;
}
$fn1280 $tmp1279 = $tmp1278->methods[1];
frost$core$Object* $tmp1281 = $tmp1279($tmp1272);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1281)));
frost$collections$ListView* $tmp1282 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1282));
*(&local3) = ((frost$collections$ListView*) $tmp1281);
// line 301
frost$collections$Array* $tmp1283 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp1284 = (frost$core$Int64) {1};
frost$collections$Array$init$frost$core$Int64($tmp1283, $tmp1284);
frost$core$Int64 $tmp1285 = *(&local1);
frost$core$Int64$wrapper* $tmp1286;
$tmp1286 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1286->value = $tmp1285;
frost$collections$Array$add$frost$collections$Array$T($tmp1283, ((frost$core$Object*) $tmp1286));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
frost$collections$Array* $tmp1287 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
*(&local4) = $tmp1283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
// unreffing REF($301:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
// unreffing REF($295:frost.collections.Array<frost.core.Int64>)
// line 302
frost$collections$Array* $tmp1288 = *(&local4);
frost$collections$ListView* $tmp1289 = *(&local3);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT($tmp1288, ((frost$collections$CollectionView*) $tmp1289));
// line 303
frost$collections$Array* $tmp1290 = *(&local0);
frost$core$Bit $tmp1291 = frost$core$Bit$init$builtin_bit($tmp1290 != NULL);
bool $tmp1292 = $tmp1291.value;
if ($tmp1292) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp1293 = (frost$core$Int64) {303};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1294, $tmp1293, &$s1295);
abort(); // unreachable
block36:;
frost$collections$Array* $tmp1296 = *(&local4);
frost$collections$Array$add$frost$collections$Array$T($tmp1290, ((frost$core$Object*) ((frost$collections$ListView*) $tmp1296)));
frost$collections$Array* $tmp1297 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1297));
// unreffing finalPath
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1281);
// unreffing REF($286:frost.collections.Iterator.T)
frost$collections$ListView* $tmp1298 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
// unreffing path
*(&local3) = ((frost$collections$ListView*) NULL);
goto block33;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
// unreffing REF($275:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block28;
block28:;
frost$collections$ListView* $tmp1299 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
// unreffing paths
*(&local2) = ((frost$collections$ListView*) NULL);
goto block11;
block11:;
goto block7;
block7:;
frost$core$Int64 $tmp1300 = *(&local1);
int64_t $tmp1301 = $tmp1162.value;
int64_t $tmp1302 = $tmp1300.value;
int64_t $tmp1303 = $tmp1301 - $tmp1302;
frost$core$Int64 $tmp1304 = (frost$core$Int64) {$tmp1303};
frost$core$UInt64 $tmp1305 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1304);
if ($tmp1164) goto block39; else goto block40;
block39:;
uint64_t $tmp1306 = $tmp1305.value;
uint64_t $tmp1307 = $tmp1166.value;
bool $tmp1308 = $tmp1306 >= $tmp1307;
frost$core$Bit $tmp1309 = (frost$core$Bit) {$tmp1308};
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block38; else goto block6;
block40:;
uint64_t $tmp1311 = $tmp1305.value;
uint64_t $tmp1312 = $tmp1166.value;
bool $tmp1313 = $tmp1311 > $tmp1312;
frost$core$Bit $tmp1314 = (frost$core$Bit) {$tmp1313};
bool $tmp1315 = $tmp1314.value;
if ($tmp1315) goto block38; else goto block6;
block38:;
int64_t $tmp1316 = $tmp1300.value;
int64_t $tmp1317 = $tmp1165.value;
int64_t $tmp1318 = $tmp1316 + $tmp1317;
frost$core$Int64 $tmp1319 = (frost$core$Int64) {$tmp1318};
*(&local1) = $tmp1319;
goto block5;
block6:;
// line 308
frost$collections$Array* $tmp1320 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1320)));
frost$collections$Array* $tmp1321 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return ((frost$collections$ListView*) $tmp1320);

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* param0, frost$collections$ListView* param1) {

org$frostlang$frostc$Type* local0 = NULL;
frost$core$Int64 local1;
// line 313
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
org$frostlang$frostc$Type* $tmp1322 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local0) = param0;
// line 314
ITable* $tmp1323 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp1323->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1323 = $tmp1323->next;
}
$fn1325 $tmp1324 = $tmp1323->methods[0];
frost$collections$Iterator* $tmp1326 = $tmp1324(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp1327 = $tmp1326->$class->itable;
while ($tmp1327->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1327 = $tmp1327->next;
}
$fn1329 $tmp1328 = $tmp1327->methods[0];
frost$core$Bit $tmp1330 = $tmp1328($tmp1326);
bool $tmp1331 = $tmp1330.value;
if ($tmp1331) goto block3; else goto block2;
block2:;
ITable* $tmp1332 = $tmp1326->$class->itable;
while ($tmp1332->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1332 = $tmp1332->next;
}
$fn1334 $tmp1333 = $tmp1332->methods[1];
frost$core$Object* $tmp1335 = $tmp1333($tmp1326);
*(&local1) = ((frost$core$Int64$wrapper*) $tmp1335)->value;
// line 315
org$frostlang$frostc$Type* $tmp1336 = *(&local0);
org$frostlang$frostc$FixedArray** $tmp1337 = &$tmp1336->subtypes;
org$frostlang$frostc$FixedArray* $tmp1338 = *$tmp1337;
frost$core$Bit $tmp1339 = frost$core$Bit$init$builtin_bit($tmp1338 != NULL);
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp1341 = (frost$core$Int64) {315};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1342, $tmp1341, &$s1343);
abort(); // unreachable
block4:;
frost$core$Int64 $tmp1344 = *(&local1);
frost$core$Object* $tmp1345 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp1338, $tmp1344);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1345)));
org$frostlang$frostc$Type* $tmp1346 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local0) = ((org$frostlang$frostc$Type*) $tmp1345);
frost$core$Frost$unref$frost$core$Object$Q($tmp1345);
// unreffing REF($39:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1335);
// unreffing REF($22:frost.collections.Iterator.T)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
// unreffing REF($12:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 317
org$frostlang$frostc$Type* $tmp1347 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
org$frostlang$frostc$Type* $tmp1348 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
// unreffing result
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp1347;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Call$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type(org$frostlang$frostc$MethodDecl$GenericParameter* param0) {

// line 325
org$frostlang$frostc$Type** $tmp1349 = &param0->bound;
org$frostlang$frostc$Type* $tmp1350 = *$tmp1349;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
return $tmp1350;

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
// line 322
frost$core$Bit* $tmp1351 = &param1->requiresTypeInference;
frost$core$Bit $tmp1352 = *$tmp1351;
frost$core$Bit $tmp1353 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1352);
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block1; else goto block2;
block1:;
// line 323
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
return param1;
block2:;
// line 325
frost$collections$Array* $tmp1355 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
org$frostlang$frostc$MethodDecl** $tmp1356 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1357 = *$tmp1356;
frost$collections$Array** $tmp1358 = &$tmp1357->genericParameters;
frost$collections$Array* $tmp1359 = *$tmp1358;
frost$core$Bit $tmp1360 = frost$core$Bit$init$builtin_bit($tmp1359 != NULL);
bool $tmp1361 = $tmp1360.value;
if ($tmp1361) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp1362 = (frost$core$Int64) {325};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1363, $tmp1362, &$s1364);
abort(); // unreachable
block3:;
frost$core$Method* $tmp1366 = (frost$core$Method*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Method$class);
frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q($tmp1366, ((frost$core$Int8*) org$frostlang$frostc$expression$Call$$anonymous1$org$frostlang$frostc$MethodDecl$GenericParameter$R$org$frostlang$frostc$Type), ((frost$core$Immutable*) NULL));
ITable* $tmp1367 = ((frost$collections$CollectionView*) $tmp1359)->$class->itable;
while ($tmp1367->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1367 = $tmp1367->next;
}
$fn1369 $tmp1368 = $tmp1367->methods[8];
frost$collections$Array* $tmp1370 = $tmp1368(((frost$collections$CollectionView*) $tmp1359), ((frost$core$MutableMethod*) $tmp1366));
frost$collections$Array$init$frost$collections$ListView$LTfrost$collections$Array$T$GT($tmp1355, ((frost$collections$ListView*) $tmp1370));
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$collections$Array* $tmp1371 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local0) = $tmp1355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
// unreffing REF($33:frost.collections.Array<frost.collections.CollectionView.map.U>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
// unreffing REF($27:frost.core.Method)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
// unreffing REF($12:frost.collections.Array<org.frostlang.frostc.Type>)
// line 326
frost$core$Int64 $tmp1372 = (frost$core$Int64) {0};
org$frostlang$frostc$MethodDecl** $tmp1373 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1374 = *$tmp1373;
frost$collections$Array** $tmp1375 = &$tmp1374->parameters;
frost$collections$Array* $tmp1376 = *$tmp1375;
ITable* $tmp1377 = ((frost$collections$CollectionView*) $tmp1376)->$class->itable;
while ($tmp1377->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1377 = $tmp1377->next;
}
$fn1379 $tmp1378 = $tmp1377->methods[0];
frost$core$Int64 $tmp1380 = $tmp1378(((frost$collections$CollectionView*) $tmp1376));
frost$core$Bit $tmp1381 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1382 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1372, $tmp1380, $tmp1381);
frost$core$Int64 $tmp1383 = $tmp1382.min;
*(&local1) = $tmp1383;
frost$core$Int64 $tmp1384 = $tmp1382.max;
frost$core$Bit $tmp1385 = $tmp1382.inclusive;
bool $tmp1386 = $tmp1385.value;
frost$core$Int64 $tmp1387 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1388 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1387);
if ($tmp1386) goto block8; else goto block9;
block8:;
int64_t $tmp1389 = $tmp1383.value;
int64_t $tmp1390 = $tmp1384.value;
bool $tmp1391 = $tmp1389 <= $tmp1390;
frost$core$Bit $tmp1392 = (frost$core$Bit) {$tmp1391};
bool $tmp1393 = $tmp1392.value;
if ($tmp1393) goto block5; else goto block6;
block9:;
int64_t $tmp1394 = $tmp1383.value;
int64_t $tmp1395 = $tmp1384.value;
bool $tmp1396 = $tmp1394 < $tmp1395;
frost$core$Bit $tmp1397 = (frost$core$Bit) {$tmp1396};
bool $tmp1398 = $tmp1397.value;
if ($tmp1398) goto block5; else goto block6;
block5:;
// line 327
frost$core$Int64 $tmp1399 = *(&local1);
org$frostlang$frostc$Type* $tmp1400 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp1399);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
org$frostlang$frostc$Type* $tmp1401 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1401));
*(&local2) = $tmp1400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
// unreffing REF($87:org.frostlang.frostc.Type)
// line 328
org$frostlang$frostc$MethodDecl** $tmp1402 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1403 = *$tmp1402;
org$frostlang$frostc$Type* $tmp1404 = *(&local2);
frost$collections$ListView* $tmp1405 = org$frostlang$frostc$expression$Call$findGenericParameters$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$R$frost$collections$ListView$LTfrost$collections$ListView$LTfrost$core$Int64$GT$GT$Q($tmp1403, $tmp1404);
*(&local3) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
frost$collections$ListView* $tmp1406 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
*(&local3) = $tmp1405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
// unreffing REF($102:frost.collections.ListView<frost.collections.ListView<frost.core.Int64>>?)
// line 329
frost$collections$ListView* $tmp1407 = *(&local3);
frost$core$Bit $tmp1408 = frost$core$Bit$init$builtin_bit($tmp1407 != NULL);
bool $tmp1409 = $tmp1408.value;
if ($tmp1409) goto block10; else goto block11;
block10:;
// line 330
frost$collections$ListView* $tmp1410 = *(&local3);
frost$core$Bit $tmp1411 = frost$core$Bit$init$builtin_bit($tmp1410 != NULL);
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp1413 = (frost$core$Int64) {330};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1414, $tmp1413, &$s1415);
abort(); // unreachable
block12:;
ITable* $tmp1416 = ((frost$collections$Iterable*) $tmp1410)->$class->itable;
while ($tmp1416->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1416 = $tmp1416->next;
}
$fn1418 $tmp1417 = $tmp1416->methods[0];
frost$collections$Iterator* $tmp1419 = $tmp1417(((frost$collections$Iterable*) $tmp1410));
goto block14;
block14:;
ITable* $tmp1420 = $tmp1419->$class->itable;
while ($tmp1420->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1420 = $tmp1420->next;
}
$fn1422 $tmp1421 = $tmp1420->methods[0];
frost$core$Bit $tmp1423 = $tmp1421($tmp1419);
bool $tmp1424 = $tmp1423.value;
if ($tmp1424) goto block16; else goto block15;
block15:;
*(&local4) = ((frost$collections$ListView*) NULL);
ITable* $tmp1425 = $tmp1419->$class->itable;
while ($tmp1425->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1425 = $tmp1425->next;
}
$fn1427 $tmp1426 = $tmp1425->methods[1];
frost$core$Object* $tmp1428 = $tmp1426($tmp1419);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1428)));
frost$collections$ListView* $tmp1429 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
*(&local4) = ((frost$collections$ListView*) $tmp1428);
// line 331
frost$core$Int64 $tmp1430 = *(&local1);
ITable* $tmp1431 = param2->$class->itable;
while ($tmp1431->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1431 = $tmp1431->next;
}
$fn1433 $tmp1432 = $tmp1431->methods[0];
frost$core$Object* $tmp1434 = $tmp1432(param2, $tmp1430);
org$frostlang$frostc$Type* $tmp1435 = *(&local2);
org$frostlang$frostc$Pair* $tmp1436 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1434), $tmp1435);
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
org$frostlang$frostc$Pair* $tmp1437 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1437));
*(&local5) = $tmp1436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
// unreffing REF($157:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q($tmp1434);
// unreffing REF($154:frost.collections.ListView.T)
// line 332
org$frostlang$frostc$Pair* $tmp1438 = *(&local5);
frost$core$Bit $tmp1439 = frost$core$Bit$init$builtin_bit($tmp1438 == NULL);
bool $tmp1440 = $tmp1439.value;
if ($tmp1440) goto block17; else goto block18;
block17:;
// line 333
frost$core$Int64 $tmp1441 = *(&local1);
ITable* $tmp1442 = param2->$class->itable;
while ($tmp1442->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1442 = $tmp1442->next;
}
$fn1444 $tmp1443 = $tmp1442->methods[0];
frost$core$Object* $tmp1445 = $tmp1443(param2, $tmp1441);
frost$core$String* $tmp1446 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1447, ((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp1445)));
frost$core$String* $tmp1448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1446, &$s1449);
org$frostlang$frostc$Type* $tmp1450 = *(&local2);
frost$core$String* $tmp1451 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1448, ((frost$core$Object*) $tmp1450));
frost$core$String* $tmp1452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1451, &$s1453);
frost$io$Console$printLine$frost$core$String($tmp1452);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
// unreffing REF($189:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
// unreffing REF($188:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
// unreffing REF($185:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1446));
// unreffing REF($184:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp1445);
// unreffing REF($181:frost.collections.ListView.T)
// line 334
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Pair* $tmp1454 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
// unreffing argType
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1428);
// unreffing REF($142:frost.collections.Iterator.T)
frost$collections$ListView* $tmp1455 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
// unreffing g
*(&local4) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
// unreffing REF($131:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$ListView* $tmp1456 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
// unreffing generics
*(&local3) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Type* $tmp1457 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
// unreffing paramType
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp1458 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1458));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return param1;
block18:;
// line 336
org$frostlang$frostc$MethodDecl** $tmp1459 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1460 = *$tmp1459;
frost$collections$Array** $tmp1461 = &$tmp1460->parameters;
frost$collections$Array* $tmp1462 = *$tmp1461;
frost$core$Int64 $tmp1463 = *(&local1);
frost$core$Object* $tmp1464 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1462, $tmp1463);
org$frostlang$frostc$Type** $tmp1465 = &((org$frostlang$frostc$MethodDecl$Parameter*) $tmp1464)->type;
org$frostlang$frostc$Type* $tmp1466 = *$tmp1465;
frost$collections$ListView* $tmp1467 = *(&local4);
org$frostlang$frostc$Type* $tmp1468 = org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type($tmp1466, $tmp1467);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
org$frostlang$frostc$Type* $tmp1469 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1469));
*(&local6) = $tmp1468;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
// unreffing REF($254:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1464);
// unreffing REF($249:frost.collections.Array.T)
// line 337
org$frostlang$frostc$Type* $tmp1470 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp1471 = &$tmp1470->typeKind;
org$frostlang$frostc$Type$Kind $tmp1472 = *$tmp1471;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1473;
$tmp1473 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1473->value = $tmp1472;
frost$core$Int64 $tmp1474 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp1475 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1474);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1476;
$tmp1476 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1476->value = $tmp1475;
ITable* $tmp1477 = ((frost$core$Equatable*) $tmp1473)->$class->itable;
while ($tmp1477->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1477 = $tmp1477->next;
}
$fn1479 $tmp1478 = $tmp1477->methods[0];
frost$core$Bit $tmp1480 = $tmp1478(((frost$core$Equatable*) $tmp1473), ((frost$core$Equatable*) $tmp1476));
bool $tmp1481 = $tmp1480.value;
if ($tmp1481) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp1482 = (frost$core$Int64) {337};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1483, $tmp1482);
abort(); // unreachable
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1476)));
// unreffing REF($276:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1473)));
// unreffing REF($272:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
// line 338
frost$core$Int64 $tmp1484 = (frost$core$Int64) {0};
*(&local7) = $tmp1484;
// line 339
goto block21;
block21:;
org$frostlang$frostc$Type* $tmp1485 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
org$frostlang$frostc$MethodDecl** $tmp1486 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1487 = *$tmp1486;
frost$collections$Array** $tmp1488 = &$tmp1487->genericParameters;
frost$collections$Array* $tmp1489 = *$tmp1488;
frost$core$Bit $tmp1490 = frost$core$Bit$init$builtin_bit($tmp1489 != NULL);
bool $tmp1491 = $tmp1490.value;
if ($tmp1491) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp1492 = (frost$core$Int64) {339};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1493, $tmp1492, &$s1494);
abort(); // unreachable
block24:;
frost$core$Int64 $tmp1495 = *(&local1);
frost$core$Object* $tmp1496 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1489, $tmp1495);
org$frostlang$frostc$Type$init$org$frostlang$frostc$MethodDecl$GenericParameter($tmp1485, ((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1496));
org$frostlang$frostc$Type* $tmp1497 = *(&local6);
ITable* $tmp1498 = ((frost$core$Equatable*) $tmp1485)->$class->itable;
while ($tmp1498->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1498 = $tmp1498->next;
}
$fn1500 $tmp1499 = $tmp1498->methods[1];
frost$core$Bit $tmp1501 = $tmp1499(((frost$core$Equatable*) $tmp1485), ((frost$core$Equatable*) $tmp1497));
bool $tmp1502 = $tmp1501.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1496);
// unreffing REF($310:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1485));
// unreffing REF($295:org.frostlang.frostc.Type)
if ($tmp1502) goto block22; else goto block23;
block22:;
// line 340
frost$core$Int64 $tmp1503 = *(&local7);
frost$core$Int64 $tmp1504 = (frost$core$Int64) {1};
int64_t $tmp1505 = $tmp1503.value;
int64_t $tmp1506 = $tmp1504.value;
int64_t $tmp1507 = $tmp1505 + $tmp1506;
frost$core$Int64 $tmp1508 = (frost$core$Int64) {$tmp1507};
*(&local7) = $tmp1508;
goto block21;
block23:;
// line 342
frost$collections$Array* $tmp1509 = *(&local0);
frost$core$Int64 $tmp1510 = *(&local7);
frost$collections$Array* $tmp1511 = *(&local0);
frost$core$Int64 $tmp1512 = *(&local7);
frost$core$Object* $tmp1513 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp1511, $tmp1512);
org$frostlang$frostc$Pair* $tmp1514 = *(&local5);
frost$core$Bit $tmp1515 = frost$core$Bit$init$builtin_bit($tmp1514 != NULL);
bool $tmp1516 = $tmp1515.value;
if ($tmp1516) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp1517 = (frost$core$Int64) {343};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1518, $tmp1517, &$s1519);
abort(); // unreachable
block26:;
frost$core$Object** $tmp1520 = &$tmp1514->first;
frost$core$Object* $tmp1521 = *$tmp1520;
frost$collections$ListView* $tmp1522 = *(&local4);
org$frostlang$frostc$Type* $tmp1523 = org$frostlang$frostc$expression$Call$getSubtype$org$frostlang$frostc$Type$frost$collections$ListView$LTfrost$core$Int64$GT$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1521), $tmp1522);
org$frostlang$frostc$Type* $tmp1524 = org$frostlang$frostc$Type$intersection$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(((org$frostlang$frostc$Type*) $tmp1513), param0, $tmp1523);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T($tmp1509, $tmp1510, ((frost$core$Object*) $tmp1524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
// unreffing REF($359:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1523));
// unreffing REF($358:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1513);
// unreffing REF($343:frost.collections.Array.T)
org$frostlang$frostc$Type* $tmp1525 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
// unreffing parameter
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Pair* $tmp1526 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1526));
// unreffing argType
*(&local5) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1428);
// unreffing REF($142:frost.collections.Iterator.T)
frost$collections$ListView* $tmp1527 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1527));
// unreffing g
*(&local4) = ((frost$collections$ListView*) NULL);
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1419));
// unreffing REF($131:frost.collections.Iterator<frost.collections.Iterable.T>)
goto block11;
block11:;
frost$collections$ListView* $tmp1528 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1528));
// unreffing generics
*(&local3) = ((frost$collections$ListView*) NULL);
org$frostlang$frostc$Type* $tmp1529 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1529));
// unreffing paramType
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block7;
block7:;
frost$core$Int64 $tmp1530 = *(&local1);
int64_t $tmp1531 = $tmp1384.value;
int64_t $tmp1532 = $tmp1530.value;
int64_t $tmp1533 = $tmp1531 - $tmp1532;
frost$core$Int64 $tmp1534 = (frost$core$Int64) {$tmp1533};
frost$core$UInt64 $tmp1535 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1534);
if ($tmp1386) goto block29; else goto block30;
block29:;
uint64_t $tmp1536 = $tmp1535.value;
uint64_t $tmp1537 = $tmp1388.value;
bool $tmp1538 = $tmp1536 >= $tmp1537;
frost$core$Bit $tmp1539 = (frost$core$Bit) {$tmp1538};
bool $tmp1540 = $tmp1539.value;
if ($tmp1540) goto block28; else goto block6;
block30:;
uint64_t $tmp1541 = $tmp1535.value;
uint64_t $tmp1542 = $tmp1388.value;
bool $tmp1543 = $tmp1541 > $tmp1542;
frost$core$Bit $tmp1544 = (frost$core$Bit) {$tmp1543};
bool $tmp1545 = $tmp1544.value;
if ($tmp1545) goto block28; else goto block6;
block28:;
int64_t $tmp1546 = $tmp1530.value;
int64_t $tmp1547 = $tmp1387.value;
int64_t $tmp1548 = $tmp1546 + $tmp1547;
frost$core$Int64 $tmp1549 = (frost$core$Int64) {$tmp1548};
*(&local1) = $tmp1549;
goto block5;
block6:;
// line 347
org$frostlang$frostc$MethodRef* $tmp1550 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type** $tmp1551 = &param1->target;
org$frostlang$frostc$Type* $tmp1552 = *$tmp1551;
org$frostlang$frostc$MethodDecl** $tmp1553 = &param1->value;
org$frostlang$frostc$MethodDecl* $tmp1554 = *$tmp1553;
frost$collections$Array* $tmp1555 = *(&local0);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1550, param0, $tmp1552, $tmp1554, ((frost$collections$ListView*) $tmp1555));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1550));
// unreffing REF($431:org.frostlang.frostc.MethodRef)
frost$collections$Array* $tmp1556 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1556));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp1550;

}
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$collections$ListView* param3, frost$collections$ListView* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

// line 354
org$frostlang$frostc$Pair* $tmp1557 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, param2, param3, ((frost$collections$ListView*) NULL), param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1557));
// unreffing REF($1:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
return $tmp1557;

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
// line 362
ITable* $tmp1558 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1558->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1558 = $tmp1558->next;
}
$fn1560 $tmp1559 = $tmp1558->methods[0];
frost$core$Int64 $tmp1561 = $tmp1559(((frost$collections$CollectionView*) param3));
frost$core$Int64 $tmp1562 = (frost$core$Int64) {0};
frost$core$Bit $tmp1563 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1561, $tmp1562);
bool $tmp1564 = $tmp1563.value;
if ($tmp1564) goto block9; else goto block10;
block9:;
// line 363
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block10:;
// line 365
frost$core$Int64 $tmp1565 = (frost$core$Int64) {9223372036854775807};
*(&local2) = $tmp1565;
// line 366
frost$collections$Array* $tmp1566 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1566);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
frost$collections$Array* $tmp1567 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1567));
*(&local3) = $tmp1566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1566));
// unreffing REF($54:frost.collections.Array<org.frostlang.frostc.MethodRef>)
// line 367
ITable* $tmp1568 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp1568->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1568 = $tmp1568->next;
}
$fn1570 $tmp1569 = $tmp1568->methods[0];
frost$collections$Iterator* $tmp1571 = $tmp1569(((frost$collections$Iterable*) param3));
goto block11;
block11:;
ITable* $tmp1572 = $tmp1571->$class->itable;
while ($tmp1572->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1572 = $tmp1572->next;
}
$fn1574 $tmp1573 = $tmp1572->methods[0];
frost$core$Bit $tmp1575 = $tmp1573($tmp1571);
bool $tmp1576 = $tmp1575.value;
if ($tmp1576) goto block13; else goto block12;
block12:;
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1577 = $tmp1571->$class->itable;
while ($tmp1577->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1577 = $tmp1577->next;
}
$fn1579 $tmp1578 = $tmp1577->methods[1];
frost$core$Object* $tmp1580 = $tmp1578($tmp1571);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1580)));
org$frostlang$frostc$MethodDecl* $tmp1581 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1581));
*(&local4) = ((org$frostlang$frostc$MethodDecl*) $tmp1580);
// line 368
org$frostlang$frostc$MethodDecl* $tmp1582 = *(&local4);
frost$collections$Array** $tmp1583 = &$tmp1582->parameters;
frost$collections$Array* $tmp1584 = *$tmp1583;
ITable* $tmp1585 = ((frost$collections$CollectionView*) $tmp1584)->$class->itable;
while ($tmp1585->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1585 = $tmp1585->next;
}
$fn1587 $tmp1586 = $tmp1585->methods[0];
frost$core$Int64 $tmp1588 = $tmp1586(((frost$collections$CollectionView*) $tmp1584));
ITable* $tmp1589 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp1589->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1589 = $tmp1589->next;
}
$fn1591 $tmp1590 = $tmp1589->methods[0];
frost$core$Int64 $tmp1592 = $tmp1590(((frost$collections$CollectionView*) param5));
int64_t $tmp1593 = $tmp1588.value;
int64_t $tmp1594 = $tmp1592.value;
bool $tmp1595 = $tmp1593 != $tmp1594;
frost$core$Bit $tmp1596 = (frost$core$Bit) {$tmp1595};
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block14; else goto block15;
block14:;
// line 369
frost$core$Frost$unref$frost$core$Object$Q($tmp1580);
// unreffing REF($82:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp1598 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1598));
// unreffing m
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block11;
block15:;
// line 371
org$frostlang$frostc$MethodDecl* $tmp1599 = *(&local4);
frost$core$Bit $tmp1600 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp1599);
frost$core$Bit $tmp1601 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1600);
bool $tmp1602 = $tmp1601.value;
if ($tmp1602) goto block16; else goto block17;
block16:;
// line 372
frost$core$Frost$unref$frost$core$Object$Q($tmp1580);
// unreffing REF($82:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp1603 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1603));
// unreffing m
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block11;
block17:;
// line 374
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
// line 375
frost$core$Bit $tmp1604 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp1605 = $tmp1604.value;
if ($tmp1605) goto block18; else goto block20;
block18:;
// line 376
frost$core$Bit $tmp1606 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp1607 = $tmp1606.value;
if ($tmp1607) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp1608 = (frost$core$Int64) {376};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1609, $tmp1608, &$s1610);
abort(); // unreachable
block21:;
$fn1612 $tmp1611 = ($fn1612) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1613 = $tmp1611(param2);
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
org$frostlang$frostc$Type* $tmp1614 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1614));
*(&local6) = $tmp1613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1613));
// unreffing REF($149:org.frostlang.frostc.Type)
// line 377
org$frostlang$frostc$Type* $tmp1615 = *(&local6);
org$frostlang$frostc$Type$Kind* $tmp1616 = &$tmp1615->typeKind;
org$frostlang$frostc$Type$Kind $tmp1617 = *$tmp1616;
org$frostlang$frostc$Type$Kind$wrapper* $tmp1618;
$tmp1618 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1618->value = $tmp1617;
frost$core$Int64 $tmp1619 = (frost$core$Int64) {13};
org$frostlang$frostc$Type$Kind $tmp1620 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp1619);
org$frostlang$frostc$Type$Kind$wrapper* $tmp1621;
$tmp1621 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp1621->value = $tmp1620;
ITable* $tmp1622 = ((frost$core$Equatable*) $tmp1618)->$class->itable;
while ($tmp1622->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1622 = $tmp1622->next;
}
$fn1624 $tmp1623 = $tmp1622->methods[0];
frost$core$Bit $tmp1625 = $tmp1623(((frost$core$Equatable*) $tmp1618), ((frost$core$Equatable*) $tmp1621));
bool $tmp1626 = $tmp1625.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1621)));
// unreffing REF($168:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1618)));
// unreffing REF($164:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp1626) goto block23; else goto block24;
block23:;
// line 378
org$frostlang$frostc$Type* $tmp1627 = *(&local6);
frost$core$Weak** $tmp1628 = &$tmp1627->genericMethodParameter;
frost$core$Weak* $tmp1629 = *$tmp1628;
frost$core$Object* $tmp1630 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1629);
frost$core$Bit $tmp1631 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1630) != NULL);
bool $tmp1632 = $tmp1631.value;
if ($tmp1632) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp1633 = (frost$core$Int64) {378};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1634, $tmp1633, &$s1635);
abort(); // unreachable
block25:;
org$frostlang$frostc$Type** $tmp1636 = &((org$frostlang$frostc$MethodDecl$GenericParameter*) $tmp1630)->bound;
org$frostlang$frostc$Type* $tmp1637 = *$tmp1636;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1637));
org$frostlang$frostc$Type* $tmp1638 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1638));
*(&local6) = $tmp1637;
frost$core$Frost$unref$frost$core$Object$Q($tmp1630);
// unreffing REF($184:frost.core.Weak.T)
goto block24;
block24:;
// line 380
org$frostlang$frostc$MethodRef* $tmp1639 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp1640 = *(&local6);
org$frostlang$frostc$MethodDecl* $tmp1641 = *(&local4);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1639, param0, $tmp1640, $tmp1641, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
org$frostlang$frostc$MethodRef* $tmp1642 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1642));
*(&local5) = $tmp1639;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1639));
// unreffing REF($207:org.frostlang.frostc.MethodRef)
org$frostlang$frostc$Type* $tmp1643 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1643));
// unreffing owner
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
goto block19;
block20:;
// line 382
org$frostlang$frostc$MethodDecl* $tmp1644 = *(&local4);
org$frostlang$frostc$Annotations** $tmp1645 = &$tmp1644->annotations;
org$frostlang$frostc$Annotations* $tmp1646 = *$tmp1645;
frost$core$Bit $tmp1647 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp1646);
bool $tmp1648 = $tmp1647.value;
if ($tmp1648) goto block29; else goto block30;
block29:;
*(&local7) = $tmp1647;
goto block31;
block30:;
org$frostlang$frostc$MethodDecl* $tmp1649 = *(&local4);
org$frostlang$frostc$MethodDecl$Kind* $tmp1650 = &$tmp1649->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp1651 = *$tmp1650;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1652;
$tmp1652 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1652->value = $tmp1651;
frost$core$Int64 $tmp1653 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp1654 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp1653);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp1655;
$tmp1655 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp1655->value = $tmp1654;
ITable* $tmp1656 = ((frost$core$Equatable*) $tmp1652)->$class->itable;
while ($tmp1656->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1656 = $tmp1656->next;
}
$fn1658 $tmp1657 = $tmp1656->methods[0];
frost$core$Bit $tmp1659 = $tmp1657(((frost$core$Equatable*) $tmp1652), ((frost$core$Equatable*) $tmp1655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1655)));
// unreffing REF($242:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1652)));
// unreffing REF($238:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
*(&local7) = $tmp1659;
goto block31;
block31:;
frost$core$Bit $tmp1660 = *(&local7);
bool $tmp1661 = $tmp1660.value;
if ($tmp1661) goto block27; else goto block32;
block27:;
// line 383
org$frostlang$frostc$MethodRef* $tmp1662 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$MethodDecl* $tmp1663 = *(&local4);
frost$core$Weak** $tmp1664 = &$tmp1663->owner;
frost$core$Weak* $tmp1665 = *$tmp1664;
frost$core$Object* $tmp1666 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1665);
org$frostlang$frostc$Type** $tmp1667 = &((org$frostlang$frostc$ClassDecl*) $tmp1666)->type;
org$frostlang$frostc$Type* $tmp1668 = *$tmp1667;
org$frostlang$frostc$MethodDecl* $tmp1669 = *(&local4);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1662, param0, $tmp1668, $tmp1669, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
org$frostlang$frostc$MethodRef* $tmp1670 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1670));
*(&local5) = $tmp1662;
frost$core$Frost$unref$frost$core$Object$Q($tmp1666);
// unreffing REF($262:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1662));
// unreffing REF($257:org.frostlang.frostc.MethodRef)
goto block28;
block32:;
// line 1
// line 386
org$frostlang$frostc$MethodRef* $tmp1671 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
frost$collections$Stack** $tmp1672 = &param0->currentClass;
frost$collections$Stack* $tmp1673 = *$tmp1672;
frost$core$Int64 $tmp1674 = (frost$core$Int64) {0};
frost$core$Object* $tmp1675 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp1673, $tmp1674);
org$frostlang$frostc$Type** $tmp1676 = &((org$frostlang$frostc$ClassDecl*) $tmp1675)->type;
org$frostlang$frostc$Type* $tmp1677 = *$tmp1676;
org$frostlang$frostc$MethodDecl* $tmp1678 = *(&local4);
frost$core$Weak** $tmp1679 = &$tmp1678->owner;
frost$core$Weak* $tmp1680 = *$tmp1679;
frost$core$Object* $tmp1681 = frost$core$Weak$get$R$frost$core$Weak$T($tmp1680);
org$frostlang$frostc$Type* $tmp1682 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp1677, ((org$frostlang$frostc$ClassDecl*) $tmp1681));
frost$core$Bit $tmp1683 = frost$core$Bit$init$builtin_bit($tmp1682 != NULL);
bool $tmp1684 = $tmp1683.value;
if ($tmp1684) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp1685 = (frost$core$Int64) {386};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1686, $tmp1685, &$s1687);
abort(); // unreachable
block33:;
org$frostlang$frostc$MethodDecl* $tmp1688 = *(&local4);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp1671, param0, $tmp1682, $tmp1688, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
org$frostlang$frostc$MethodRef* $tmp1689 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1689));
*(&local5) = $tmp1671;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1682));
// unreffing REF($298:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp1681);
// unreffing REF($296:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp1675);
// unreffing REF($288:frost.collections.Stack.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1671));
// unreffing REF($283:org.frostlang.frostc.MethodRef)
goto block28;
block28:;
goto block19;
block19:;
// line 389
org$frostlang$frostc$MethodRef* $tmp1690 = *(&local5);
org$frostlang$frostc$MethodRef* $tmp1691 = org$frostlang$frostc$expression$Call$performTypeInference$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$MethodRef$Q(param0, $tmp1690, param5);
frost$core$Bit $tmp1692 = frost$core$Bit$init$builtin_bit($tmp1691 != NULL);
bool $tmp1693 = $tmp1692.value;
if ($tmp1693) goto block35; else goto block36;
block36:;
frost$core$Int64 $tmp1694 = (frost$core$Int64) {389};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1695, $tmp1694, &$s1696);
abort(); // unreachable
block35:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
org$frostlang$frostc$MethodRef* $tmp1697 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1697));
*(&local5) = $tmp1691;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1691));
// unreffing REF($331:org.frostlang.frostc.MethodRef?)
// line 390
frost$core$Int64 $tmp1698 = (frost$core$Int64) {0};
*(&local8) = $tmp1698;
// line 391
frost$core$Int64 $tmp1699 = (frost$core$Int64) {0};
ITable* $tmp1700 = ((frost$collections$CollectionView*) param5)->$class->itable;
while ($tmp1700->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1700 = $tmp1700->next;
}
$fn1702 $tmp1701 = $tmp1700->methods[0];
frost$core$Int64 $tmp1703 = $tmp1701(((frost$collections$CollectionView*) param5));
frost$core$Bit $tmp1704 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1705 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1699, $tmp1703, $tmp1704);
frost$core$Int64 $tmp1706 = $tmp1705.min;
*(&local9) = $tmp1706;
frost$core$Int64 $tmp1707 = $tmp1705.max;
frost$core$Bit $tmp1708 = $tmp1705.inclusive;
bool $tmp1709 = $tmp1708.value;
frost$core$Int64 $tmp1710 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1711 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1710);
if ($tmp1709) goto block40; else goto block41;
block40:;
int64_t $tmp1712 = $tmp1706.value;
int64_t $tmp1713 = $tmp1707.value;
bool $tmp1714 = $tmp1712 <= $tmp1713;
frost$core$Bit $tmp1715 = (frost$core$Bit) {$tmp1714};
bool $tmp1716 = $tmp1715.value;
if ($tmp1716) goto block37; else goto block38;
block41:;
int64_t $tmp1717 = $tmp1706.value;
int64_t $tmp1718 = $tmp1707.value;
bool $tmp1719 = $tmp1717 < $tmp1718;
frost$core$Bit $tmp1720 = (frost$core$Bit) {$tmp1719};
bool $tmp1721 = $tmp1720.value;
if ($tmp1721) goto block37; else goto block38;
block37:;
// line 392
frost$core$Int64 $tmp1722 = *(&local9);
ITable* $tmp1723 = param5->$class->itable;
while ($tmp1723->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1723 = $tmp1723->next;
}
$fn1725 $tmp1724 = $tmp1723->methods[0];
frost$core$Object* $tmp1726 = $tmp1724(param5, $tmp1722);
org$frostlang$frostc$MethodRef* $tmp1727 = *(&local5);
frost$core$Int64 $tmp1728 = *(&local9);
org$frostlang$frostc$Type* $tmp1729 = org$frostlang$frostc$MethodRef$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1727, $tmp1728);
org$frostlang$frostc$Pair* $tmp1730 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1726), $tmp1729);
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
org$frostlang$frostc$Pair* $tmp1731 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1731));
*(&local10) = $tmp1730;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1730));
// unreffing REF($388:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1729));
// unreffing REF($387:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp1726);
// unreffing REF($383:frost.collections.ListView.T)
// line 393
org$frostlang$frostc$Pair* $tmp1732 = *(&local10);
frost$core$Bit $tmp1733 = frost$core$Bit$init$builtin_bit($tmp1732 == NULL);
bool $tmp1734 = $tmp1733.value;
if ($tmp1734) goto block42; else goto block43;
block42:;
// line 394
org$frostlang$frostc$Pair* $tmp1735 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1735));
// unreffing argCost
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp1736 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1736));
// unreffing ref
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1580);
// unreffing REF($82:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp1737 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1737));
// unreffing m
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block11;
block43:;
// line 396
frost$core$Int64 $tmp1738 = *(&local8);
org$frostlang$frostc$Pair* $tmp1739 = *(&local10);
frost$core$Bit $tmp1740 = frost$core$Bit$init$builtin_bit($tmp1739 != NULL);
bool $tmp1741 = $tmp1740.value;
if ($tmp1741) goto block44; else goto block45;
block45:;
frost$core$Int64 $tmp1742 = (frost$core$Int64) {396};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1743, $tmp1742, &$s1744);
abort(); // unreachable
block44:;
frost$core$Object** $tmp1745 = &$tmp1739->second;
frost$core$Object* $tmp1746 = *$tmp1745;
int64_t $tmp1747 = $tmp1738.value;
int64_t $tmp1748 = ((frost$core$Int64$wrapper*) $tmp1746)->value.value;
int64_t $tmp1749 = $tmp1747 + $tmp1748;
frost$core$Int64 $tmp1750 = (frost$core$Int64) {$tmp1749};
*(&local8) = $tmp1750;
org$frostlang$frostc$Pair* $tmp1751 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1751));
// unreffing argCost
*(&local10) = ((org$frostlang$frostc$Pair*) NULL);
goto block39;
block39:;
frost$core$Int64 $tmp1752 = *(&local9);
int64_t $tmp1753 = $tmp1707.value;
int64_t $tmp1754 = $tmp1752.value;
int64_t $tmp1755 = $tmp1753 - $tmp1754;
frost$core$Int64 $tmp1756 = (frost$core$Int64) {$tmp1755};
frost$core$UInt64 $tmp1757 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1756);
if ($tmp1709) goto block47; else goto block48;
block47:;
uint64_t $tmp1758 = $tmp1757.value;
uint64_t $tmp1759 = $tmp1711.value;
bool $tmp1760 = $tmp1758 >= $tmp1759;
frost$core$Bit $tmp1761 = (frost$core$Bit) {$tmp1760};
bool $tmp1762 = $tmp1761.value;
if ($tmp1762) goto block46; else goto block38;
block48:;
uint64_t $tmp1763 = $tmp1757.value;
uint64_t $tmp1764 = $tmp1711.value;
bool $tmp1765 = $tmp1763 > $tmp1764;
frost$core$Bit $tmp1766 = (frost$core$Bit) {$tmp1765};
bool $tmp1767 = $tmp1766.value;
if ($tmp1767) goto block46; else goto block38;
block46:;
int64_t $tmp1768 = $tmp1752.value;
int64_t $tmp1769 = $tmp1710.value;
int64_t $tmp1770 = $tmp1768 + $tmp1769;
frost$core$Int64 $tmp1771 = (frost$core$Int64) {$tmp1770};
*(&local9) = $tmp1771;
goto block37;
block38:;
// line 398
frost$core$Int64* $tmp1772 = &param6->$rawValue;
frost$core$Int64 $tmp1773 = *$tmp1772;
frost$core$Int64 $tmp1774 = (frost$core$Int64) {2};
frost$core$Bit $tmp1775 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1773, $tmp1774);
bool $tmp1776 = $tmp1775.value;
if ($tmp1776) goto block50; else goto block51;
block50:;
// line 400
org$frostlang$frostc$MethodDecl* $tmp1777 = *(&local4);
org$frostlang$frostc$Type** $tmp1778 = &$tmp1777->returnType;
org$frostlang$frostc$Type* $tmp1779 = *$tmp1778;
org$frostlang$frostc$Type* $tmp1780 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp1781 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp1779, $tmp1780);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block54; else goto block55;
block54:;
*(&local11) = $tmp1781;
goto block56;
block55:;
org$frostlang$frostc$MethodRef* $tmp1783 = *(&local5);
org$frostlang$frostc$Type* $tmp1784 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type($tmp1783);
frost$core$Bit $tmp1785 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp1784);
frost$core$Bit $tmp1786 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1785);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1784));
// unreffing REF($499:org.frostlang.frostc.Type)
*(&local11) = $tmp1786;
goto block56;
block56:;
frost$core$Bit $tmp1787 = *(&local11);
bool $tmp1788 = $tmp1787.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1780));
// unreffing REF($492:org.frostlang.frostc.Type)
if ($tmp1788) goto block52; else goto block53;
block52:;
// line 401
org$frostlang$frostc$MethodRef* $tmp1789 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1789));
// unreffing ref
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1580);
// unreffing REF($82:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp1790 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1790));
// unreffing m
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block11;
block53:;
goto block49;
block51:;
frost$core$Int64 $tmp1791 = (frost$core$Int64) {3};
frost$core$Bit $tmp1792 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1773, $tmp1791);
bool $tmp1793 = $tmp1792.value;
if ($tmp1793) goto block57; else goto block49;
block57:;
org$frostlang$frostc$Type** $tmp1794 = (org$frostlang$frostc$Type**) (param6->$data + 0);
org$frostlang$frostc$Type* $tmp1795 = *$tmp1794;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1795));
org$frostlang$frostc$Type* $tmp1796 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1796));
*(&local12) = $tmp1795;
// line 405
org$frostlang$frostc$MethodRef* $tmp1797 = *(&local5);
org$frostlang$frostc$Type* $tmp1798 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type($tmp1797);
org$frostlang$frostc$Type* $tmp1799 = *(&local12);
org$frostlang$frostc$Pair* $tmp1800 = org$frostlang$frostc$Compiler$coercionCost$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int64$GT$Q(param0, $tmp1798, $tmp1799);
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
org$frostlang$frostc$Pair* $tmp1801 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1801));
*(&local13) = $tmp1800;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1800));
// unreffing REF($546:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, frost.core.Int64>?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1798));
// unreffing REF($544:org.frostlang.frostc.Type)
// line 406
org$frostlang$frostc$Pair* $tmp1802 = *(&local13);
frost$core$Bit $tmp1803 = frost$core$Bit$init$builtin_bit($tmp1802 == NULL);
bool $tmp1804 = $tmp1803.value;
if ($tmp1804) goto block58; else goto block59;
block58:;
// line 407
org$frostlang$frostc$Pair* $tmp1805 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1805));
// unreffing returnCost
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1806 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1806));
// unreffing t
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp1807 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1807));
// unreffing ref
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1580);
// unreffing REF($82:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp1808 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1808));
// unreffing m
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block11;
block59:;
// line 409
frost$core$Int64 $tmp1809 = *(&local8);
org$frostlang$frostc$Pair* $tmp1810 = *(&local13);
frost$core$Bit $tmp1811 = frost$core$Bit$init$builtin_bit($tmp1810 != NULL);
bool $tmp1812 = $tmp1811.value;
if ($tmp1812) goto block60; else goto block61;
block61:;
frost$core$Int64 $tmp1813 = (frost$core$Int64) {409};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1814, $tmp1813, &$s1815);
abort(); // unreachable
block60:;
frost$core$Object** $tmp1816 = &$tmp1810->second;
frost$core$Object* $tmp1817 = *$tmp1816;
int64_t $tmp1818 = $tmp1809.value;
int64_t $tmp1819 = ((frost$core$Int64$wrapper*) $tmp1817)->value.value;
int64_t $tmp1820 = $tmp1818 + $tmp1819;
frost$core$Int64 $tmp1821 = (frost$core$Int64) {$tmp1820};
*(&local8) = $tmp1821;
org$frostlang$frostc$Pair* $tmp1822 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1822));
// unreffing returnCost
*(&local13) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$Type* $tmp1823 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1823));
// unreffing t
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block49;
block49:;
// line 412
frost$core$Int64 $tmp1824 = *(&local8);
org$frostlang$frostc$MethodDecl* $tmp1825 = *(&local4);
frost$core$Int64 $tmp1826 = org$frostlang$frostc$MethodDecl$get_priority$R$frost$core$Int64($tmp1825);
int64_t $tmp1827 = $tmp1824.value;
int64_t $tmp1828 = $tmp1826.value;
int64_t $tmp1829 = $tmp1827 - $tmp1828;
frost$core$Int64 $tmp1830 = (frost$core$Int64) {$tmp1829};
*(&local8) = $tmp1830;
// line 413
frost$core$Int64 $tmp1831 = *(&local8);
frost$core$Int64 $tmp1832 = *(&local2);
int64_t $tmp1833 = $tmp1831.value;
int64_t $tmp1834 = $tmp1832.value;
bool $tmp1835 = $tmp1833 < $tmp1834;
frost$core$Bit $tmp1836 = (frost$core$Bit) {$tmp1835};
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block62; else goto block63;
block62:;
// line 414
frost$core$Int64 $tmp1838 = *(&local8);
*(&local2) = $tmp1838;
// line 415
frost$collections$Array* $tmp1839 = *(&local3);
frost$collections$Array$clear($tmp1839);
goto block63;
block63:;
// line 417
frost$core$Int64 $tmp1840 = *(&local8);
frost$core$Int64 $tmp1841 = *(&local2);
frost$core$Bit $tmp1842 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1840, $tmp1841);
bool $tmp1843 = $tmp1842.value;
if ($tmp1843) goto block64; else goto block65;
block64:;
// line 418
frost$collections$Array* $tmp1844 = *(&local3);
org$frostlang$frostc$MethodRef* $tmp1845 = *(&local5);
frost$collections$Array$add$frost$collections$Array$T($tmp1844, ((frost$core$Object*) $tmp1845));
goto block65;
block65:;
org$frostlang$frostc$MethodRef* $tmp1846 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1846));
// unreffing ref
*(&local5) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp1580);
// unreffing REF($82:frost.collections.Iterator.T)
org$frostlang$frostc$MethodDecl* $tmp1847 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1847));
// unreffing m
*(&local4) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block11;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1571));
// unreffing REF($71:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 421
frost$collections$Array* $tmp1848 = *(&local3);
ITable* $tmp1849 = ((frost$collections$CollectionView*) $tmp1848)->$class->itable;
while ($tmp1849->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1849 = $tmp1849->next;
}
$fn1851 $tmp1850 = $tmp1849->methods[0];
frost$core$Int64 $tmp1852 = $tmp1850(((frost$collections$CollectionView*) $tmp1848));
frost$core$Int64 $tmp1853 = (frost$core$Int64) {0};
frost$core$Bit $tmp1854 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1852, $tmp1853);
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block66; else goto block67;
block66:;
// line 422
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) NULL)));
frost$collections$Array* $tmp1856 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1856));
// unreffing best
*(&local3) = ((frost$collections$Array*) NULL);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block67:;
// line 424
org$frostlang$frostc$Pair* $tmp1857 = (org$frostlang$frostc$Pair*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Pair$class);
frost$collections$Array* $tmp1858 = *(&local3);
frost$core$Int64 $tmp1859 = *(&local2);
frost$core$Int64$wrapper* $tmp1860;
$tmp1860 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1860->value = $tmp1859;
org$frostlang$frostc$Pair$init$org$frostlang$frostc$Pair$A$org$frostlang$frostc$Pair$B($tmp1857, ((frost$core$Object*) ((frost$collections$ListView*) $tmp1858)), ((frost$core$Object*) $tmp1860));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1860));
// unreffing REF($703:org.frostlang.frostc.Pair.B)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1857));
// unreffing REF($697:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>)
frost$collections$Array* $tmp1861 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1861));
// unreffing best
*(&local3) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp1857;
goto block1;
block1:;
org$frostlang$frostc$Pair* $tmp1862 = *(&local0);
frost$core$Bit $tmp1863 = frost$core$Bit$init$builtin_bit($tmp1862 == NULL);
bool $tmp1864 = $tmp1863.value;
if ($tmp1864) goto block2; else goto block3;
block2:;
*(&local1) = $tmp1863;
goto block4;
block3:;
org$frostlang$frostc$Pair* $tmp1865 = *(&local0);
frost$core$Bit $tmp1866 = frost$core$Bit$init$builtin_bit($tmp1865 != NULL);
bool $tmp1867 = $tmp1866.value;
if ($tmp1867) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp1868 = (frost$core$Int64) {358};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1869, $tmp1868, &$s1870);
abort(); // unreachable
block5:;
frost$core$Object** $tmp1871 = &$tmp1865->first;
frost$core$Object* $tmp1872 = *$tmp1871;
ITable* $tmp1873 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp1872))->$class->itable;
while ($tmp1873->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1873 = $tmp1873->next;
}
$fn1875 $tmp1874 = $tmp1873->methods[0];
frost$core$Int64 $tmp1876 = $tmp1874(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp1872)));
frost$core$Int64 $tmp1877 = (frost$core$Int64) {0};
int64_t $tmp1878 = $tmp1876.value;
int64_t $tmp1879 = $tmp1877.value;
bool $tmp1880 = $tmp1878 > $tmp1879;
frost$core$Bit $tmp1881 = (frost$core$Bit) {$tmp1880};
*(&local1) = $tmp1881;
goto block4;
block4:;
frost$core$Bit $tmp1882 = *(&local1);
bool $tmp1883 = $tmp1882.value;
if ($tmp1883) goto block7; else goto block8;
block7:;
org$frostlang$frostc$Pair* $tmp1884 = *(&local0);
return $tmp1884;
block8:;
frost$core$Int64 $tmp1885 = (frost$core$Int64) {359};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1886, $tmp1885, &$s1887);
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
// line 430
org$frostlang$frostc$IR** $tmp1888 = &param0->ir;
org$frostlang$frostc$IR* $tmp1889 = *$tmp1888;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1889));
org$frostlang$frostc$IR* $tmp1890 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1890));
*(&local0) = $tmp1889;
// line 431
$fn1892 $tmp1891 = ($fn1892) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp1893 = $tmp1891(param2);
org$frostlang$frostc$Type* $tmp1894 = org$frostlang$frostc$Type$nonnullable$R$org$frostlang$frostc$Type($tmp1893);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
org$frostlang$frostc$Type* $tmp1895 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1895));
*(&local1) = $tmp1894;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1894));
// unreffing REF($13:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1893));
// unreffing REF($12:org.frostlang.frostc.Type)
// line 432
org$frostlang$frostc$Type* $tmp1896 = *(&local1);
frost$core$Bit $tmp1897 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp1896);
frost$core$Bit $tmp1898 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp1897);
bool $tmp1899 = $tmp1898.value;
if ($tmp1899) goto block1; else goto block2;
block1:;
// line 433
org$frostlang$frostc$Type* $tmp1900 = *(&local1);
frost$core$String* $tmp1901 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1902, ((frost$core$Object*) $tmp1900));
frost$core$String* $tmp1903 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1901, &$s1904);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1903);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1903));
// unreffing REF($37:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1901));
// unreffing REF($36:frost.core.String)
// line 434
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1905 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1905));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1906 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1906));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 436
org$frostlang$frostc$Type* $tmp1907 = *(&local1);
frost$core$Int64 $tmp1908 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1907);
ITable* $tmp1909 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1909->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1909 = $tmp1909->next;
}
$fn1911 $tmp1910 = $tmp1909->methods[0];
frost$core$Int64 $tmp1912 = $tmp1910(((frost$collections$CollectionView*) param3));
int64_t $tmp1913 = $tmp1908.value;
int64_t $tmp1914 = $tmp1912.value;
bool $tmp1915 = $tmp1913 != $tmp1914;
frost$core$Bit $tmp1916 = (frost$core$Bit) {$tmp1915};
bool $tmp1917 = $tmp1916.value;
if ($tmp1917) goto block3; else goto block4;
block3:;
// line 437
org$frostlang$frostc$Type* $tmp1918 = *(&local1);
frost$core$String* $tmp1919 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s1920, ((frost$core$Object*) $tmp1918));
frost$core$String* $tmp1921 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1919, &$s1922);
org$frostlang$frostc$Type* $tmp1923 = *(&local1);
frost$core$Int64 $tmp1924 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1923);
frost$core$Int64$wrapper* $tmp1925;
$tmp1925 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1925->value = $tmp1924;
frost$core$String* $tmp1926 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1921, ((frost$core$Object*) $tmp1925));
frost$core$String* $tmp1927 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1926, &$s1928);
org$frostlang$frostc$Type* $tmp1929 = *(&local1);
frost$core$Int64 $tmp1930 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp1929);
frost$core$Int64 $tmp1931 = (frost$core$Int64) {1};
frost$core$Bit $tmp1932 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1930, $tmp1931);
frost$core$Bit$wrapper* $tmp1933;
$tmp1933 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp1933->value = $tmp1932;
ITable* $tmp1934 = ((frost$core$Formattable*) $tmp1933)->$class->itable;
while ($tmp1934->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp1934 = $tmp1934->next;
}
$fn1936 $tmp1935 = $tmp1934->methods[0];
frost$core$String* $tmp1937 = $tmp1935(((frost$core$Formattable*) $tmp1933), &$s1938);
frost$core$String* $tmp1939 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1940, $tmp1937);
frost$core$String* $tmp1941 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1939, &$s1942);
ITable* $tmp1943 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1943->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1943 = $tmp1943->next;
}
$fn1945 $tmp1944 = $tmp1943->methods[0];
frost$core$Int64 $tmp1946 = $tmp1944(((frost$collections$CollectionView*) param3));
frost$core$Int64$wrapper* $tmp1947;
$tmp1947 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp1947->value = $tmp1946;
frost$core$String* $tmp1948 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp1941, ((frost$core$Object*) $tmp1947));
frost$core$String* $tmp1949 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1948, &$s1950);
frost$core$String* $tmp1951 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1927, $tmp1949);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp1951);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1951));
// unreffing REF($96:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1949));
// unreffing REF($95:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1948));
// unreffing REF($94:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1947));
// unreffing REF($93:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1941));
// unreffing REF($89:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1939));
// unreffing REF($88:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1937));
// unreffing REF($87:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp1933)));
// unreffing REF($85:frost.core.Formattable)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1927));
// unreffing REF($80:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1926));
// unreffing REF($79:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1925));
// unreffing REF($78:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1921));
// unreffing REF($75:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1919));
// unreffing REF($74:frost.core.String)
// line 439
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp1952 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1952));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp1953 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1953));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// line 441
frost$collections$Array* $tmp1954 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp1955 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1955->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1955 = $tmp1955->next;
}
$fn1957 $tmp1956 = $tmp1955->methods[0];
frost$core$Int64 $tmp1958 = $tmp1956(((frost$collections$CollectionView*) param3));
frost$collections$Array$init$frost$core$Int64($tmp1954, $tmp1958);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
frost$collections$Array* $tmp1959 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1959));
*(&local2) = $tmp1954;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1954));
// unreffing REF($152:frost.collections.Array<org.frostlang.frostc.IR.Value>)
// line 442
frost$core$Int64 $tmp1960 = (frost$core$Int64) {0};
ITable* $tmp1961 = ((frost$collections$CollectionView*) param3)->$class->itable;
while ($tmp1961->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1961 = $tmp1961->next;
}
$fn1963 $tmp1962 = $tmp1961->methods[0];
frost$core$Int64 $tmp1964 = $tmp1962(((frost$collections$CollectionView*) param3));
frost$core$Bit $tmp1965 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1966 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1960, $tmp1964, $tmp1965);
frost$core$Int64 $tmp1967 = $tmp1966.min;
*(&local3) = $tmp1967;
frost$core$Int64 $tmp1968 = $tmp1966.max;
frost$core$Bit $tmp1969 = $tmp1966.inclusive;
bool $tmp1970 = $tmp1969.value;
frost$core$Int64 $tmp1971 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1972 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1971);
if ($tmp1970) goto block8; else goto block9;
block8:;
int64_t $tmp1973 = $tmp1967.value;
int64_t $tmp1974 = $tmp1968.value;
bool $tmp1975 = $tmp1973 <= $tmp1974;
frost$core$Bit $tmp1976 = (frost$core$Bit) {$tmp1975};
bool $tmp1977 = $tmp1976.value;
if ($tmp1977) goto block5; else goto block6;
block9:;
int64_t $tmp1978 = $tmp1967.value;
int64_t $tmp1979 = $tmp1968.value;
bool $tmp1980 = $tmp1978 < $tmp1979;
frost$core$Bit $tmp1981 = (frost$core$Bit) {$tmp1980};
bool $tmp1982 = $tmp1981.value;
if ($tmp1982) goto block5; else goto block6;
block5:;
// line 443
frost$core$Int64 $tmp1983 = *(&local3);
ITable* $tmp1984 = param3->$class->itable;
while ($tmp1984->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1984 = $tmp1984->next;
}
$fn1986 $tmp1985 = $tmp1984->methods[0];
frost$core$Object* $tmp1987 = $tmp1985(param3, $tmp1983);
org$frostlang$frostc$Compiler$TypeContext* $tmp1988 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp1989 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp1990 = *(&local1);
frost$core$Int64 $tmp1991 = *(&local3);
org$frostlang$frostc$Type* $tmp1992 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp1990, $tmp1991);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp1988, $tmp1989, $tmp1992);
org$frostlang$frostc$IR$Value* $tmp1993 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp1987), $tmp1988);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
org$frostlang$frostc$IR$Value* $tmp1994 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1994));
*(&local4) = $tmp1993;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1993));
// unreffing REF($207:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1992));
// unreffing REF($205:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1988));
// unreffing REF($201:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp1987);
// unreffing REF($199:frost.collections.ListView.T)
// line 445
org$frostlang$frostc$IR$Value* $tmp1995 = *(&local4);
frost$core$Bit $tmp1996 = frost$core$Bit$init$builtin_bit($tmp1995 == NULL);
bool $tmp1997 = $tmp1996.value;
if ($tmp1997) goto block10; else goto block11;
block10:;
// line 446
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp1998 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1998));
// unreffing compiled
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp1999 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1999));
// unreffing finalArgs
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2000 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2000));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2001 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2001));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block11:;
// line 448
frost$collections$Array* $tmp2002 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp2003 = *(&local4);
frost$core$Bit $tmp2004 = frost$core$Bit$init$builtin_bit($tmp2003 != NULL);
bool $tmp2005 = $tmp2004.value;
if ($tmp2005) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp2006 = (frost$core$Int64) {448};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2007, $tmp2006, &$s2008);
abort(); // unreachable
block12:;
frost$collections$Array$add$frost$collections$Array$T($tmp2002, ((frost$core$Object*) $tmp2003));
org$frostlang$frostc$IR$Value* $tmp2009 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
// unreffing compiled
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block7;
block7:;
frost$core$Int64 $tmp2010 = *(&local3);
int64_t $tmp2011 = $tmp1968.value;
int64_t $tmp2012 = $tmp2010.value;
int64_t $tmp2013 = $tmp2011 - $tmp2012;
frost$core$Int64 $tmp2014 = (frost$core$Int64) {$tmp2013};
frost$core$UInt64 $tmp2015 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2014);
if ($tmp1970) goto block15; else goto block16;
block15:;
uint64_t $tmp2016 = $tmp2015.value;
uint64_t $tmp2017 = $tmp1972.value;
bool $tmp2018 = $tmp2016 >= $tmp2017;
frost$core$Bit $tmp2019 = (frost$core$Bit) {$tmp2018};
bool $tmp2020 = $tmp2019.value;
if ($tmp2020) goto block14; else goto block6;
block16:;
uint64_t $tmp2021 = $tmp2015.value;
uint64_t $tmp2022 = $tmp1972.value;
bool $tmp2023 = $tmp2021 > $tmp2022;
frost$core$Bit $tmp2024 = (frost$core$Bit) {$tmp2023};
bool $tmp2025 = $tmp2024.value;
if ($tmp2025) goto block14; else goto block6;
block14:;
int64_t $tmp2026 = $tmp2010.value;
int64_t $tmp2027 = $tmp1971.value;
int64_t $tmp2028 = $tmp2026 + $tmp2027;
frost$core$Int64 $tmp2029 = (frost$core$Int64) {$tmp2028};
*(&local3) = $tmp2029;
goto block5;
block6:;
// line 450
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 451
org$frostlang$frostc$IR* $tmp2030 = *(&local0);
frost$collections$Array** $tmp2031 = &$tmp2030->locals;
frost$collections$Array* $tmp2032 = *$tmp2031;
ITable* $tmp2033 = ((frost$collections$CollectionView*) $tmp2032)->$class->itable;
while ($tmp2033->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2033 = $tmp2033->next;
}
$fn2035 $tmp2034 = $tmp2033->methods[0];
frost$core$Int64 $tmp2036 = $tmp2034(((frost$collections$CollectionView*) $tmp2032));
*(&local6) = $tmp2036;
// line 452
org$frostlang$frostc$Type* $tmp2037 = *(&local1);
org$frostlang$frostc$Type* $tmp2038 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2037);
org$frostlang$frostc$Type* $tmp2039 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp2040 = ((frost$core$Equatable*) $tmp2038)->$class->itable;
while ($tmp2040->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2040 = $tmp2040->next;
}
$fn2042 $tmp2041 = $tmp2040->methods[1];
frost$core$Bit $tmp2043 = $tmp2041(((frost$core$Equatable*) $tmp2038), ((frost$core$Equatable*) $tmp2039));
bool $tmp2044 = $tmp2043.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2039));
// unreffing REF($317:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2038));
// unreffing REF($314:org.frostlang.frostc.Type)
if ($tmp2044) goto block17; else goto block19;
block17:;
// line 453
org$frostlang$frostc$IR* $tmp2045 = *(&local0);
frost$collections$Array** $tmp2046 = &$tmp2045->locals;
frost$collections$Array* $tmp2047 = *$tmp2046;
org$frostlang$frostc$Type* $tmp2048 = *(&local1);
org$frostlang$frostc$Type* $tmp2049 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2048);
frost$collections$Array$add$frost$collections$Array$T($tmp2047, ((frost$core$Object*) $tmp2049));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2049));
// unreffing REF($335:org.frostlang.frostc.Type)
// line 454
org$frostlang$frostc$IR$Value* $tmp2050 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2051 = (frost$core$Int64) {2};
frost$core$Int64 $tmp2052 = *(&local6);
org$frostlang$frostc$Type* $tmp2053 = *(&local1);
org$frostlang$frostc$Type* $tmp2054 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2053);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp2050, $tmp2051, $tmp2052, $tmp2054);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
org$frostlang$frostc$IR$Value* $tmp2055 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2055));
*(&local5) = $tmp2050;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2054));
// unreffing REF($346:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2050));
// unreffing REF($342:org.frostlang.frostc.IR.Value)
goto block18;
block19:;
// line 1
// line 457
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp2056 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2056));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block18;
block18:;
// line 459
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
// line 460
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
// line 461
$fn2058 $tmp2057 = ($fn2058) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2059 = $tmp2057(param2);
frost$core$Bit $tmp2060 = org$frostlang$frostc$Compiler$isImmutable$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2059);
bool $tmp2061 = $tmp2060.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2059));
// unreffing REF($377:org.frostlang.frostc.Type)
if ($tmp2061) goto block20; else goto block22;
block20:;
// line 462
org$frostlang$frostc$Type* $tmp2062 = org$frostlang$frostc$Type$Method$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
org$frostlang$frostc$Type* $tmp2063 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2063));
*(&local7) = $tmp2062;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2062));
// unreffing REF($385:org.frostlang.frostc.Type)
// line 463
org$frostlang$frostc$Type* $tmp2064 = org$frostlang$frostc$Type$Immutable$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
org$frostlang$frostc$Type* $tmp2065 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2065));
*(&local8) = $tmp2064;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2064));
// unreffing REF($396:org.frostlang.frostc.Type)
goto block21;
block22:;
// line 1
// line 466
org$frostlang$frostc$Type* $tmp2066 = org$frostlang$frostc$Type$MutableMethod$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
org$frostlang$frostc$Type* $tmp2067 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
*(&local7) = $tmp2066;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
// unreffing REF($409:org.frostlang.frostc.Type)
// line 467
org$frostlang$frostc$Type* $tmp2068 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
org$frostlang$frostc$Type* $tmp2069 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2069));
*(&local8) = $tmp2068;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
// unreffing REF($420:org.frostlang.frostc.Type)
goto block21;
block21:;
// line 469
org$frostlang$frostc$Type* $tmp2070 = *(&local7);
org$frostlang$frostc$ClassDecl* $tmp2071 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp2070);
frost$core$Bit $tmp2072 = frost$core$Bit$init$builtin_bit($tmp2071 != NULL);
bool $tmp2073 = $tmp2072.value;
if ($tmp2073) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp2074 = (frost$core$Int64) {469};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2075, $tmp2074, &$s2076);
abort(); // unreachable
block23:;
org$frostlang$frostc$SymbolTable* $tmp2077 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp2071);
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
org$frostlang$frostc$SymbolTable* $tmp2078 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2078));
*(&local9) = $tmp2077;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2077));
// unreffing REF($442:org.frostlang.frostc.SymbolTable)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2071));
// unreffing REF($433:org.frostlang.frostc.ClassDecl?)
// line 470
org$frostlang$frostc$SymbolTable* $tmp2079 = *(&local9);
org$frostlang$frostc$Symbol* $tmp2080 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp2079, &$s2081);
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp2080)));
org$frostlang$frostc$FieldDecl* $tmp2082 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2082));
*(&local10) = ((org$frostlang$frostc$FieldDecl*) $tmp2080);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2080));
// unreffing REF($458:org.frostlang.frostc.Symbol?)
// line 471
org$frostlang$frostc$FieldDecl* $tmp2083 = *(&local10);
frost$core$Bit $tmp2084 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp2083);
frost$core$Bit $tmp2085 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2084);
bool $tmp2086 = $tmp2085.value;
if ($tmp2086) goto block25; else goto block26;
block25:;
// line 472
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp2087 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2087));
// unreffing pointerField
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2088 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2088));
// unreffing st
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2089 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2089));
// unreffing targetType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2090 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
// unreffing methodType
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2091 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2091));
// unreffing result
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2092 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2092));
// unreffing finalArgs
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2093 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2093));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2094 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2094));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block26:;
// line 474
org$frostlang$frostc$Type* $tmp2095 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp2096 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp2095);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
org$frostlang$frostc$IR$Value* $tmp2097 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2097));
*(&local11) = $tmp2096;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2096));
// unreffing REF($523:org.frostlang.frostc.IR.Value?)
// line 475
org$frostlang$frostc$IR* $tmp2098 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2099 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2100 = (frost$core$Int64) {10};
org$frostlang$frostc$IR$Value* $tmp2101 = *(&local11);
frost$core$Bit $tmp2102 = frost$core$Bit$init$builtin_bit($tmp2101 != NULL);
bool $tmp2103 = $tmp2102.value;
if ($tmp2103) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp2104 = (frost$core$Int64) {475};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2105, $tmp2104, &$s2106);
abort(); // unreachable
block27:;
org$frostlang$frostc$FieldDecl* $tmp2107 = *(&local10);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp2099, $tmp2100, param1, $tmp2101, $tmp2107);
$fn2109 $tmp2108 = ($fn2109) $tmp2098->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2110 = $tmp2108($tmp2098, $tmp2099);
*(&local12) = $tmp2110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2099));
// unreffing REF($536:org.frostlang.frostc.IR.Statement)
// line 477
org$frostlang$frostc$IR* $tmp2111 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2112 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2113 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp2114 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2115 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2116 = *(&local12);
org$frostlang$frostc$Type* $tmp2117 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp2118 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2117);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2114, $tmp2115, $tmp2116, $tmp2118);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2112, $tmp2113, param1, $tmp2114);
$fn2120 $tmp2119 = ($fn2120) $tmp2111->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2121 = $tmp2119($tmp2111, $tmp2112);
*(&local13) = $tmp2121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
// unreffing REF($563:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2117));
// unreffing REF($562:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2114));
// unreffing REF($559:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2112));
// unreffing REF($557:org.frostlang.frostc.IR.Statement)
// line 479
org$frostlang$frostc$SymbolTable* $tmp2122 = *(&local9);
org$frostlang$frostc$Symbol* $tmp2123 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp2122, &$s2124);
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp2123)));
org$frostlang$frostc$FieldDecl* $tmp2125 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2125));
*(&local14) = ((org$frostlang$frostc$FieldDecl*) $tmp2123);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
// unreffing REF($583:org.frostlang.frostc.Symbol?)
// line 480
org$frostlang$frostc$FieldDecl* $tmp2126 = *(&local14);
frost$core$Bit $tmp2127 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(param0, $tmp2126);
frost$core$Bit $tmp2128 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2127);
bool $tmp2129 = $tmp2128.value;
if ($tmp2129) goto block29; else goto block30;
block29:;
// line 481
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$FieldDecl* $tmp2130 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2130));
// unreffing targetField
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2131 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2131));
// unreffing methodObj
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2132 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
// unreffing pointerField
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2133 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2133));
// unreffing st
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2134 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2134));
// unreffing targetType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2135 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2135));
// unreffing methodType
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2136 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2136));
// unreffing result
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2137 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2137));
// unreffing finalArgs
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2138 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2138));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2139 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2139));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block30:;
// line 483
org$frostlang$frostc$IR* $tmp2140 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2141 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2142 = (frost$core$Int64) {10};
org$frostlang$frostc$IR$Value* $tmp2143 = *(&local11);
frost$core$Bit $tmp2144 = frost$core$Bit$init$builtin_bit($tmp2143 != NULL);
bool $tmp2145 = $tmp2144.value;
if ($tmp2145) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp2146 = (frost$core$Int64) {483};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2147, $tmp2146, &$s2148);
abort(); // unreachable
block31:;
org$frostlang$frostc$FieldDecl* $tmp2149 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl($tmp2141, $tmp2142, param1, $tmp2143, $tmp2149);
$fn2151 $tmp2150 = ($fn2151) $tmp2140->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2152 = $tmp2150($tmp2140, $tmp2141);
*(&local15) = $tmp2152;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2141));
// unreffing REF($657:org.frostlang.frostc.IR.Statement)
// line 484
org$frostlang$frostc$IR* $tmp2153 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2154 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2155 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp2156 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2157 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2158 = *(&local15);
org$frostlang$frostc$Type* $tmp2159 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2156, $tmp2157, $tmp2158, $tmp2159);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2154, $tmp2155, param1, $tmp2156);
$fn2161 $tmp2160 = ($fn2161) $tmp2153->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2162 = $tmp2160($tmp2153, $tmp2154);
*(&local16) = $tmp2162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
// unreffing REF($680:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
// unreffing REF($678:org.frostlang.frostc.IR.Statement)
// line 485
org$frostlang$frostc$IR* $tmp2163 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2164 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2165 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp2166 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2167 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2168 = *(&local16);
org$frostlang$frostc$Type* $tmp2169 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2166, $tmp2167, $tmp2168, $tmp2169);
frost$core$Int64 $tmp2170 = (frost$core$Int64) {22};
org$frostlang$frostc$expression$Binary$Operator $tmp2171 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp2170);
org$frostlang$frostc$IR$Value* $tmp2172 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2173 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp2174 = *(&local8);
org$frostlang$frostc$Type* $tmp2175 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp2174);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp2172, $tmp2173, $tmp2175);
org$frostlang$frostc$Type* $tmp2176 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp2164, $tmp2165, param1, $tmp2166, $tmp2171, $tmp2172, $tmp2176);
$fn2178 $tmp2177 = ($fn2178) $tmp2163->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2179 = $tmp2177($tmp2163, $tmp2164);
*(&local17) = $tmp2179;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2176));
// unreffing REF($711:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2175));
// unreffing REF($709:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2172));
// unreffing REF($706:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2166));
// unreffing REF($699:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2164));
// unreffing REF($697:org.frostlang.frostc.IR.Statement)
// line 487
org$frostlang$frostc$IR* $tmp2180 = *(&local0);
$fn2182 $tmp2181 = ($fn2182) $tmp2180->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2183 = $tmp2181($tmp2180, &$s2184);
*(&local18) = $tmp2183;
// line 488
org$frostlang$frostc$IR* $tmp2185 = *(&local0);
$fn2187 $tmp2186 = ($fn2187) $tmp2185->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2188 = $tmp2186($tmp2185, &$s2189);
*(&local19) = $tmp2188;
// line 489
org$frostlang$frostc$IR* $tmp2190 = *(&local0);
$fn2192 $tmp2191 = ($fn2192) $tmp2190->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp2193 = $tmp2191($tmp2190, &$s2194);
*(&local20) = $tmp2193;
// line 490
org$frostlang$frostc$IR* $tmp2195 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2196 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2197 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp2198 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2199 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2200 = *(&local17);
org$frostlang$frostc$Type* $tmp2201 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2198, $tmp2199, $tmp2200, $tmp2201);
org$frostlang$frostc$IR$Block$ID $tmp2202 = *(&local18);
org$frostlang$frostc$IR$Block$ID $tmp2203 = *(&local19);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp2196, $tmp2197, param1, $tmp2198, $tmp2202, $tmp2203);
$fn2205 $tmp2204 = ($fn2205) $tmp2195->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2206 = $tmp2204($tmp2195, $tmp2196);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2201));
// unreffing REF($753:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2198));
// unreffing REF($750:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2196));
// unreffing REF($748:org.frostlang.frostc.IR.Statement)
// line 492
org$frostlang$frostc$IR* $tmp2207 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2208 = *(&local19);
$fn2210 $tmp2209 = ($fn2210) $tmp2207->$class->vtable[4];
$tmp2209($tmp2207, $tmp2208);
// line 493
org$frostlang$frostc$IR$Value* $tmp2211 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2212 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2213 = *(&local13);
org$frostlang$frostc$Type* $tmp2214 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp2215 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2214);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2211, $tmp2212, $tmp2213, $tmp2215);
org$frostlang$frostc$Type* $tmp2216 = *(&local1);
org$frostlang$frostc$Type* $tmp2217 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2216);
org$frostlang$frostc$IR$Value* $tmp2218 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2211, $tmp2217);
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
org$frostlang$frostc$IR$Value* $tmp2219 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2219));
*(&local21) = $tmp2218;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2218));
// unreffing REF($784:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2217));
// unreffing REF($783:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2215));
// unreffing REF($779:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2214));
// unreffing REF($778:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2211));
// unreffing REF($775:org.frostlang.frostc.IR.Value)
// line 495
org$frostlang$frostc$IR* $tmp2220 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2221 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2222 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp2223 = *(&local21);
frost$core$Bit $tmp2224 = frost$core$Bit$init$builtin_bit($tmp2223 != NULL);
bool $tmp2225 = $tmp2224.value;
if ($tmp2225) goto block33; else goto block34;
block34:;
frost$core$Int64 $tmp2226 = (frost$core$Int64) {495};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2227, $tmp2226, &$s2228);
abort(); // unreachable
block33:;
org$frostlang$frostc$FixedArray* $tmp2229 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
frost$collections$Array* $tmp2230 = *(&local2);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2229, ((frost$collections$ListView*) $tmp2230));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp2221, $tmp2222, param1, $tmp2223, $tmp2229);
$fn2232 $tmp2231 = ($fn2232) $tmp2220->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2233 = $tmp2231($tmp2220, $tmp2221);
*(&local22) = $tmp2233;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2229));
// unreffing REF($820:org.frostlang.frostc.FixedArray<org.frostlang.frostc.IR.Value>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2221));
// unreffing REF($809:org.frostlang.frostc.IR.Statement)
// line 497
org$frostlang$frostc$IR$Value* $tmp2234 = *(&local5);
frost$core$Bit $tmp2235 = frost$core$Bit$init$builtin_bit($tmp2234 != NULL);
bool $tmp2236 = $tmp2235.value;
if ($tmp2236) goto block35; else goto block36;
block35:;
// line 498
org$frostlang$frostc$IR* $tmp2237 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2238 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2239 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp2240 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2241 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2242 = *(&local22);
org$frostlang$frostc$Type* $tmp2243 = *(&local1);
org$frostlang$frostc$Type* $tmp2244 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2243);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2240, $tmp2241, $tmp2242, $tmp2244);
org$frostlang$frostc$IR$Value* $tmp2245 = *(&local5);
frost$core$Bit $tmp2246 = frost$core$Bit$init$builtin_bit($tmp2245 != NULL);
bool $tmp2247 = $tmp2246.value;
if ($tmp2247) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp2248 = (frost$core$Int64) {499};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2249, $tmp2248, &$s2250);
abort(); // unreachable
block37:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2238, $tmp2239, param1, $tmp2240, $tmp2245);
$fn2252 $tmp2251 = ($fn2252) $tmp2237->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2253 = $tmp2251($tmp2237, $tmp2238);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2244));
// unreffing REF($850:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
// unreffing REF($846:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2238));
// unreffing REF($844:org.frostlang.frostc.IR.Statement)
goto block36;
block36:;
// line 501
org$frostlang$frostc$IR* $tmp2254 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2255 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2256 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2257 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2255, $tmp2256, param1, $tmp2257);
$fn2259 $tmp2258 = ($fn2259) $tmp2254->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2260 = $tmp2258($tmp2254, $tmp2255);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2255));
// unreffing REF($876:org.frostlang.frostc.IR.Statement)
// line 502
org$frostlang$frostc$IR* $tmp2261 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2262 = *(&local18);
$fn2264 $tmp2263 = ($fn2264) $tmp2261->$class->vtable[4];
$tmp2263($tmp2261, $tmp2262);
// line 503
frost$collections$Array* $tmp2265 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2265);
*(&local23) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
frost$collections$Array* $tmp2266 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2266));
*(&local23) = $tmp2265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2265));
// unreffing REF($891:frost.collections.Array<org.frostlang.frostc.Type>)
// line 504
frost$collections$Array* $tmp2267 = *(&local23);
org$frostlang$frostc$Type* $tmp2268 = *(&local8);
frost$collections$Array$add$frost$collections$Array$T($tmp2267, ((frost$core$Object*) $tmp2268));
// line 505
frost$core$Int64 $tmp2269 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp2270 = *(&local1);
frost$core$Int64 $tmp2271 = org$frostlang$frostc$Type$get_parameterCount$R$frost$core$Int64($tmp2270);
frost$core$Bit $tmp2272 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2273 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2269, $tmp2271, $tmp2272);
frost$core$Int64 $tmp2274 = $tmp2273.min;
*(&local24) = $tmp2274;
frost$core$Int64 $tmp2275 = $tmp2273.max;
frost$core$Bit $tmp2276 = $tmp2273.inclusive;
bool $tmp2277 = $tmp2276.value;
frost$core$Int64 $tmp2278 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2279 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2278);
if ($tmp2277) goto block42; else goto block43;
block42:;
int64_t $tmp2280 = $tmp2274.value;
int64_t $tmp2281 = $tmp2275.value;
bool $tmp2282 = $tmp2280 <= $tmp2281;
frost$core$Bit $tmp2283 = (frost$core$Bit) {$tmp2282};
bool $tmp2284 = $tmp2283.value;
if ($tmp2284) goto block39; else goto block40;
block43:;
int64_t $tmp2285 = $tmp2274.value;
int64_t $tmp2286 = $tmp2275.value;
bool $tmp2287 = $tmp2285 < $tmp2286;
frost$core$Bit $tmp2288 = (frost$core$Bit) {$tmp2287};
bool $tmp2289 = $tmp2288.value;
if ($tmp2289) goto block39; else goto block40;
block39:;
// line 506
frost$collections$Array* $tmp2290 = *(&local23);
org$frostlang$frostc$Type* $tmp2291 = *(&local1);
frost$core$Int64 $tmp2292 = *(&local24);
org$frostlang$frostc$Type* $tmp2293 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp2291, $tmp2292);
frost$collections$Array$add$frost$collections$Array$T($tmp2290, ((frost$core$Object*) $tmp2293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2293));
// unreffing REF($941:org.frostlang.frostc.Type)
goto block41;
block41:;
frost$core$Int64 $tmp2294 = *(&local24);
int64_t $tmp2295 = $tmp2275.value;
int64_t $tmp2296 = $tmp2294.value;
int64_t $tmp2297 = $tmp2295 - $tmp2296;
frost$core$Int64 $tmp2298 = (frost$core$Int64) {$tmp2297};
frost$core$UInt64 $tmp2299 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2298);
if ($tmp2277) goto block45; else goto block46;
block45:;
uint64_t $tmp2300 = $tmp2299.value;
uint64_t $tmp2301 = $tmp2279.value;
bool $tmp2302 = $tmp2300 >= $tmp2301;
frost$core$Bit $tmp2303 = (frost$core$Bit) {$tmp2302};
bool $tmp2304 = $tmp2303.value;
if ($tmp2304) goto block44; else goto block40;
block46:;
uint64_t $tmp2305 = $tmp2299.value;
uint64_t $tmp2306 = $tmp2279.value;
bool $tmp2307 = $tmp2305 > $tmp2306;
frost$core$Bit $tmp2308 = (frost$core$Bit) {$tmp2307};
bool $tmp2309 = $tmp2308.value;
if ($tmp2309) goto block44; else goto block40;
block44:;
int64_t $tmp2310 = $tmp2294.value;
int64_t $tmp2311 = $tmp2278.value;
int64_t $tmp2312 = $tmp2310 + $tmp2311;
frost$core$Int64 $tmp2313 = (frost$core$Int64) {$tmp2312};
*(&local24) = $tmp2313;
goto block39;
block40:;
// line 508
org$frostlang$frostc$Type* $tmp2314 = *(&local1);
org$frostlang$frostc$Type$Kind* $tmp2315 = &$tmp2314->typeKind;
org$frostlang$frostc$Type$Kind $tmp2316 = *$tmp2315;
frost$collections$Array* $tmp2317 = *(&local23);
org$frostlang$frostc$Type* $tmp2318 = *(&local1);
org$frostlang$frostc$Type* $tmp2319 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2318);
frost$core$Int64 $tmp2320 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp2321 = org$frostlang$frostc$Type$methodType$org$frostlang$frostc$Position$org$frostlang$frostc$Type$Kind$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$org$frostlang$frostc$Type$frost$core$Int64$R$org$frostlang$frostc$Type(param1, $tmp2316, ((frost$collections$ListView*) $tmp2317), $tmp2319, $tmp2320);
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
org$frostlang$frostc$Type* $tmp2322 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2322));
*(&local25) = $tmp2321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2321));
// unreffing REF($982:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2319));
// unreffing REF($980:org.frostlang.frostc.Type)
// line 510
org$frostlang$frostc$IR$Value* $tmp2323 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2324 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2325 = *(&local13);
org$frostlang$frostc$Type* $tmp2326 = org$frostlang$frostc$Type$Int8$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp2327 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2326);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2323, $tmp2324, $tmp2325, $tmp2327);
org$frostlang$frostc$Type* $tmp2328 = *(&local25);
org$frostlang$frostc$Type* $tmp2329 = org$frostlang$frostc$Type$pointerTo$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type($tmp2328);
org$frostlang$frostc$IR$Value* $tmp2330 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2323, $tmp2329);
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
org$frostlang$frostc$IR$Value* $tmp2331 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2331));
*(&local26) = $tmp2330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2330));
// unreffing REF($1006:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2329));
// unreffing REF($1005:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2327));
// unreffing REF($1001:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2326));
// unreffing REF($1000:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2323));
// unreffing REF($997:org.frostlang.frostc.IR.Value)
// line 512
frost$collections$Array* $tmp2332 = *(&local2);
frost$core$Int64 $tmp2333 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp2334 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2335 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2336 = *(&local16);
org$frostlang$frostc$Type* $tmp2337 = *(&local8);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2334, $tmp2335, $tmp2336, $tmp2337);
frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T($tmp2332, $tmp2333, ((frost$core$Object*) $tmp2334));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2334));
// unreffing REF($1033:org.frostlang.frostc.IR.Value)
// line 513
org$frostlang$frostc$IR* $tmp2338 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2339 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2340 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp2341 = *(&local26);
frost$core$Bit $tmp2342 = frost$core$Bit$init$builtin_bit($tmp2341 != NULL);
bool $tmp2343 = $tmp2342.value;
if ($tmp2343) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp2344 = (frost$core$Int64) {513};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2345, $tmp2344, &$s2346);
abort(); // unreachable
block47:;
org$frostlang$frostc$FixedArray* $tmp2347 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
frost$collections$Array* $tmp2348 = *(&local2);
org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT($tmp2347, ((frost$collections$ListView*) $tmp2348));
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp2339, $tmp2340, param1, $tmp2341, $tmp2347);
$fn2350 $tmp2349 = ($fn2350) $tmp2338->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2351 = $tmp2349($tmp2338, $tmp2339);
*(&local27) = $tmp2351;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2347));
// unreffing REF($1056:org.frostlang.frostc.FixedArray<org.frostlang.frostc.IR.Value>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2339));
// unreffing REF($1045:org.frostlang.frostc.IR.Statement)
// line 515
org$frostlang$frostc$IR$Value* $tmp2352 = *(&local5);
frost$core$Bit $tmp2353 = frost$core$Bit$init$builtin_bit($tmp2352 != NULL);
bool $tmp2354 = $tmp2353.value;
if ($tmp2354) goto block49; else goto block50;
block49:;
// line 516
org$frostlang$frostc$IR* $tmp2355 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2356 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2357 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp2358 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2359 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2360 = *(&local27);
org$frostlang$frostc$Type* $tmp2361 = *(&local1);
org$frostlang$frostc$Type* $tmp2362 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2361);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2358, $tmp2359, $tmp2360, $tmp2362);
org$frostlang$frostc$IR$Value* $tmp2363 = *(&local5);
frost$core$Bit $tmp2364 = frost$core$Bit$init$builtin_bit($tmp2363 != NULL);
bool $tmp2365 = $tmp2364.value;
if ($tmp2365) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp2366 = (frost$core$Int64) {517};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2367, $tmp2366, &$s2368);
abort(); // unreachable
block51:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp2356, $tmp2357, param1, $tmp2358, $tmp2363);
$fn2370 $tmp2369 = ($fn2370) $tmp2355->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2371 = $tmp2369($tmp2355, $tmp2356);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2362));
// unreffing REF($1086:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2358));
// unreffing REF($1082:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2356));
// unreffing REF($1080:org.frostlang.frostc.IR.Statement)
goto block50;
block50:;
// line 519
org$frostlang$frostc$IR* $tmp2372 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2373 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2374 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp2375 = *(&local20);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp2373, $tmp2374, param1, $tmp2375);
$fn2377 $tmp2376 = ($fn2377) $tmp2372->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2378 = $tmp2376($tmp2372, $tmp2373);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2373));
// unreffing REF($1112:org.frostlang.frostc.IR.Statement)
// line 520
org$frostlang$frostc$IR* $tmp2379 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp2380 = *(&local20);
$fn2382 $tmp2381 = ($fn2382) $tmp2379->$class->vtable[4];
$tmp2381($tmp2379, $tmp2380);
// line 521
org$frostlang$frostc$IR$Value* $tmp2383 = *(&local5);
frost$core$Bit $tmp2384 = frost$core$Bit$init$builtin_bit($tmp2383 != NULL);
bool $tmp2385 = $tmp2384.value;
if ($tmp2385) goto block53; else goto block54;
block53:;
// line 522
org$frostlang$frostc$IR* $tmp2386 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp2387 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp2388 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp2389 = *(&local5);
frost$core$Bit $tmp2390 = frost$core$Bit$init$builtin_bit($tmp2389 != NULL);
bool $tmp2391 = $tmp2390.value;
if ($tmp2391) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp2392 = (frost$core$Int64) {522};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2393, $tmp2392, &$s2394);
abort(); // unreachable
block55:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp2387, $tmp2388, param1, $tmp2389);
$fn2396 $tmp2395 = ($fn2396) $tmp2386->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp2397 = $tmp2395($tmp2386, $tmp2387);
*(&local28) = $tmp2397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2387));
// unreffing REF($1134:org.frostlang.frostc.IR.Statement)
// line 523
org$frostlang$frostc$IR$Value* $tmp2398 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp2399 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp2400 = *(&local28);
org$frostlang$frostc$Type* $tmp2401 = *(&local1);
org$frostlang$frostc$Type* $tmp2402 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2401);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp2398, $tmp2399, $tmp2400, $tmp2402);
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
org$frostlang$frostc$IR$Value* $tmp2403 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2403));
*(&local29) = $tmp2398;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2402));
// unreffing REF($1157:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2398));
// unreffing REF($1153:org.frostlang.frostc.IR.Value)
// line 524
org$frostlang$frostc$Type* $tmp2404 = *(&local1);
org$frostlang$frostc$Type* $tmp2405 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp2404);
frost$core$Bit $tmp2406 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp2405);
bool $tmp2407 = $tmp2406.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2405));
// unreffing REF($1174:org.frostlang.frostc.Type)
if ($tmp2407) goto block57; else goto block58;
block57:;
// line 525
frost$collections$Stack** $tmp2408 = &param0->enclosingContexts;
frost$collections$Stack* $tmp2409 = *$tmp2408;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp2410 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp2411 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp2412 = *(&local29);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp2410, $tmp2411, $tmp2412);
frost$collections$Stack$push$frost$collections$Stack$T($tmp2409, ((frost$core$Object*) $tmp2410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2410));
// unreffing REF($1185:org.frostlang.frostc.Compiler.EnclosingContext)
goto block58;
block58:;
// line 527
org$frostlang$frostc$IR$Value* $tmp2413 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp2414 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2413, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2414));
// unreffing REF($1198:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR$Value* $tmp2415 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2415));
// unreffing loadRef
*(&local29) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp2416 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2416));
// unreffing haveTargetCast
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2417 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2417));
// unreffing haveTargetType
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2418 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2418));
// unreffing targetParams
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$IR$Value* $tmp2419 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2419));
// unreffing noTargetCast
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2420 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2420));
// unreffing targetField
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2421 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2421));
// unreffing methodObj
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2422 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2422));
// unreffing pointerField
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2423 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2423));
// unreffing st
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2424 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2424));
// unreffing targetType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2425 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2425));
// unreffing methodType
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2426 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2426));
// unreffing result
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2427 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2427));
// unreffing finalArgs
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2428));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2429 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2429));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp2414;
block54:;
// line 529
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp2430 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2430));
// unreffing haveTargetCast
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Type* $tmp2431 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2431));
// unreffing haveTargetType
*(&local25) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp2432 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2432));
// unreffing targetParams
*(&local23) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$IR$Value* $tmp2433 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2433));
// unreffing noTargetCast
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2434 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2434));
// unreffing targetField
*(&local14) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2435 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2435));
// unreffing methodObj
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$FieldDecl* $tmp2436 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2436));
// unreffing pointerField
*(&local10) = ((org$frostlang$frostc$FieldDecl*) NULL);
org$frostlang$frostc$SymbolTable* $tmp2437 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2437));
// unreffing st
*(&local9) = ((org$frostlang$frostc$SymbolTable*) NULL);
org$frostlang$frostc$Type* $tmp2438 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2438));
// unreffing targetType
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp2439 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2439));
// unreffing methodType
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR$Value* $tmp2440 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2440));
// unreffing result
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp2441 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2441));
// unreffing finalArgs
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp2442 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2442));
// unreffing t
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp2443 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2443));
// unreffing ir
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
// line 535
frost$collections$Stack** $tmp2444 = &param0->currentClass;
frost$collections$Stack* $tmp2445 = *$tmp2444;
frost$core$Int64 $tmp2446 = (frost$core$Int64) {0};
frost$core$Object* $tmp2447 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp2445, $tmp2446);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp2447)));
org$frostlang$frostc$ClassDecl* $tmp2448 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2448));
*(&local0) = ((org$frostlang$frostc$ClassDecl*) $tmp2447);
frost$core$Frost$unref$frost$core$Object$Q($tmp2447);
// unreffing REF($5:frost.collections.Stack.T)
// line 536
org$frostlang$frostc$IR** $tmp2449 = &param0->ir;
org$frostlang$frostc$IR* $tmp2450 = *$tmp2449;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2450));
org$frostlang$frostc$IR* $tmp2451 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2451));
*(&local1) = $tmp2450;
// line 537
frost$core$Int64* $tmp2452 = &param2->$rawValue;
frost$core$Int64 $tmp2453 = *$tmp2452;
frost$core$Int64 $tmp2454 = (frost$core$Int64) {9};
frost$core$Bit $tmp2455 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2453, $tmp2454);
bool $tmp2456 = $tmp2455.value;
if ($tmp2456) goto block2; else goto block3;
block2:;
org$frostlang$frostc$IR$Value** $tmp2457 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2458 = *$tmp2457;
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2458));
org$frostlang$frostc$IR$Value* $tmp2459 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2459));
*(&local2) = $tmp2458;
org$frostlang$frostc$MethodDecl** $tmp2460 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp2461 = *$tmp2460;
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2461));
org$frostlang$frostc$MethodDecl* $tmp2462 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2462));
*(&local3) = $tmp2461;
// line 539
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
// line 540
org$frostlang$frostc$IR$Value* $tmp2463 = *(&local2);
frost$core$Bit $tmp2464 = frost$core$Bit$init$builtin_bit($tmp2463 != NULL);
bool $tmp2465 = $tmp2464.value;
if ($tmp2465) goto block4; else goto block6;
block4:;
// line 541
org$frostlang$frostc$IR$Value* $tmp2466 = *(&local2);
frost$core$Bit $tmp2467 = frost$core$Bit$init$builtin_bit($tmp2466 != NULL);
bool $tmp2468 = $tmp2467.value;
if ($tmp2468) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp2469 = (frost$core$Int64) {541};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2470, $tmp2469, &$s2471);
abort(); // unreachable
block7:;
$fn2473 $tmp2472 = ($fn2473) $tmp2466->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2474 = $tmp2472($tmp2466);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
org$frostlang$frostc$Type* $tmp2475 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2475));
*(&local4) = $tmp2474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2474));
// unreffing REF($71:org.frostlang.frostc.Type)
goto block5;
block6:;
// line 543
org$frostlang$frostc$MethodDecl* $tmp2476 = *(&local3);
org$frostlang$frostc$Annotations** $tmp2477 = &$tmp2476->annotations;
org$frostlang$frostc$Annotations* $tmp2478 = *$tmp2477;
frost$core$Bit $tmp2479 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2478);
bool $tmp2480 = $tmp2479.value;
if ($tmp2480) goto block11; else goto block12;
block11:;
*(&local5) = $tmp2479;
goto block13;
block12:;
org$frostlang$frostc$MethodDecl* $tmp2481 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind* $tmp2482 = &$tmp2481->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2483 = *$tmp2482;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2484;
$tmp2484 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2484->value = $tmp2483;
frost$core$Int64 $tmp2485 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2486 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2485);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2487;
$tmp2487 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2487->value = $tmp2486;
ITable* $tmp2488 = ((frost$core$Equatable*) $tmp2484)->$class->itable;
while ($tmp2488->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2488 = $tmp2488->next;
}
$fn2490 $tmp2489 = $tmp2488->methods[0];
frost$core$Bit $tmp2491 = $tmp2489(((frost$core$Equatable*) $tmp2484), ((frost$core$Equatable*) $tmp2487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2487)));
// unreffing REF($98:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2484)));
// unreffing REF($94:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
*(&local5) = $tmp2491;
goto block13;
block13:;
frost$core$Bit $tmp2492 = *(&local5);
bool $tmp2493 = $tmp2492.value;
if ($tmp2493) goto block9; else goto block14;
block9:;
// line 544
org$frostlang$frostc$MethodDecl* $tmp2494 = *(&local3);
frost$core$Weak** $tmp2495 = &$tmp2494->owner;
frost$core$Weak* $tmp2496 = *$tmp2495;
frost$core$Object* $tmp2497 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2496);
org$frostlang$frostc$Type** $tmp2498 = &((org$frostlang$frostc$ClassDecl*) $tmp2497)->type;
org$frostlang$frostc$Type* $tmp2499 = *$tmp2498;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
org$frostlang$frostc$Type* $tmp2500 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2500));
*(&local4) = $tmp2499;
frost$core$Frost$unref$frost$core$Object$Q($tmp2497);
// unreffing REF($117:frost.core.Weak.T)
goto block10;
block14:;
// line 1
// line 547
org$frostlang$frostc$ClassDecl* $tmp2501 = *(&local0);
org$frostlang$frostc$Type** $tmp2502 = &$tmp2501->type;
org$frostlang$frostc$Type* $tmp2503 = *$tmp2502;
org$frostlang$frostc$MethodDecl* $tmp2504 = *(&local3);
frost$core$Weak** $tmp2505 = &$tmp2504->owner;
frost$core$Weak* $tmp2506 = *$tmp2505;
frost$core$Object* $tmp2507 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2506);
org$frostlang$frostc$Type* $tmp2508 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp2503, ((org$frostlang$frostc$ClassDecl*) $tmp2507));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
org$frostlang$frostc$Type* $tmp2509 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2509));
*(&local6) = $tmp2508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2508));
// unreffing REF($142:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp2507);
// unreffing REF($140:frost.core.Weak.T)
// line 548
org$frostlang$frostc$Type* $tmp2510 = *(&local6);
frost$core$Bit $tmp2511 = frost$core$Bit$init$builtin_bit($tmp2510 != NULL);
bool $tmp2512 = $tmp2511.value;
if ($tmp2512) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp2513 = (frost$core$Int64) {548};
org$frostlang$frostc$ClassDecl* $tmp2514 = *(&local0);
org$frostlang$frostc$Type** $tmp2515 = &$tmp2514->type;
org$frostlang$frostc$Type* $tmp2516 = *$tmp2515;
frost$core$String* $tmp2517 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2518, ((frost$core$Object*) $tmp2516));
frost$core$String* $tmp2519 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2517, &$s2520);
org$frostlang$frostc$MethodDecl* $tmp2521 = *(&local3);
frost$core$Weak** $tmp2522 = &$tmp2521->owner;
frost$core$Weak* $tmp2523 = *$tmp2522;
frost$core$Object* $tmp2524 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2523);
frost$core$String** $tmp2525 = &((org$frostlang$frostc$ClassDecl*) $tmp2524)->name;
frost$core$String* $tmp2526 = *$tmp2525;
frost$core$String* $tmp2527 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2519, $tmp2526);
frost$core$String* $tmp2528 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2527, &$s2529);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2530, $tmp2513, $tmp2528);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
// unreffing REF($178:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
// unreffing REF($177:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2524);
// unreffing REF($173:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2519));
// unreffing REF($168:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2517));
// unreffing REF($167:frost.core.String)
abort(); // unreachable
block15:;
// line 550
org$frostlang$frostc$Type* $tmp2531 = *(&local6);
frost$core$Bit $tmp2532 = frost$core$Bit$init$builtin_bit($tmp2531 != NULL);
bool $tmp2533 = $tmp2532.value;
if ($tmp2533) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp2534 = (frost$core$Int64) {550};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2535, $tmp2534, &$s2536);
abort(); // unreachable
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
org$frostlang$frostc$Type* $tmp2537 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2537));
*(&local4) = $tmp2531;
org$frostlang$frostc$Type* $tmp2538 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2538));
// unreffing found
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
goto block10;
block10:;
goto block5;
block5:;
// line 552
org$frostlang$frostc$MethodDecl* $tmp2539 = *(&local3);
frost$core$Bit $tmp2540 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp2539);
frost$core$Bit $tmp2541 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2540);
bool $tmp2542 = $tmp2541.value;
if ($tmp2542) goto block19; else goto block20;
block19:;
// line 553
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2543 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2543));
// unreffing targetType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2544 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2544));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2545 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2545));
// unreffing target
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2546 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2546));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2547 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2547));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block20:;
// line 555
org$frostlang$frostc$IR$Value* $tmp2548 = *(&local2);
org$frostlang$frostc$MethodRef* $tmp2549 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp2550 = *(&local4);
org$frostlang$frostc$MethodDecl* $tmp2551 = *(&local3);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl($tmp2549, param0, $tmp2550, $tmp2551);
org$frostlang$frostc$IR$Value* $tmp2552 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2548, $tmp2549, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2552));
// unreffing REF($260:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2549));
// unreffing REF($256:org.frostlang.frostc.MethodRef)
org$frostlang$frostc$Type* $tmp2553 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2553));
// unreffing targetType
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2554 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2554));
// unreffing m
*(&local3) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2555 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2555));
// unreffing target
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2556 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2556));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2557 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2557));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2552;
block3:;
frost$core$Int64 $tmp2558 = (frost$core$Int64) {11};
frost$core$Bit $tmp2559 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2453, $tmp2558);
bool $tmp2560 = $tmp2559.value;
if ($tmp2560) goto block21; else goto block22;
block21:;
org$frostlang$frostc$IR$Value** $tmp2561 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2562 = *$tmp2561;
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2562));
org$frostlang$frostc$IR$Value* $tmp2563 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2563));
*(&local7) = $tmp2562;
org$frostlang$frostc$MethodDecl** $tmp2564 = (org$frostlang$frostc$MethodDecl**) (param2->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp2565 = *$tmp2564;
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2565));
org$frostlang$frostc$MethodDecl* $tmp2566 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
*(&local8) = $tmp2565;
org$frostlang$frostc$FixedArray** $tmp2567 = (org$frostlang$frostc$FixedArray**) (param2->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2568 = *$tmp2567;
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2568));
org$frostlang$frostc$FixedArray* $tmp2569 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2569));
*(&local9) = $tmp2568;
// line 559
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
// line 560
org$frostlang$frostc$IR$Value* $tmp2570 = *(&local7);
frost$core$Bit $tmp2571 = frost$core$Bit$init$builtin_bit($tmp2570 != NULL);
bool $tmp2572 = $tmp2571.value;
if ($tmp2572) goto block23; else goto block25;
block23:;
// line 561
org$frostlang$frostc$IR$Value* $tmp2573 = *(&local7);
frost$core$Bit $tmp2574 = frost$core$Bit$init$builtin_bit($tmp2573 != NULL);
bool $tmp2575 = $tmp2574.value;
if ($tmp2575) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp2576 = (frost$core$Int64) {561};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2577, $tmp2576, &$s2578);
abort(); // unreachable
block26:;
$fn2580 $tmp2579 = ($fn2580) $tmp2573->$class->vtable[2];
org$frostlang$frostc$Type* $tmp2581 = $tmp2579($tmp2573);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
org$frostlang$frostc$Type* $tmp2582 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
*(&local10) = $tmp2581;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2581));
// unreffing REF($345:org.frostlang.frostc.Type)
goto block24;
block25:;
// line 563
org$frostlang$frostc$MethodDecl* $tmp2583 = *(&local8);
org$frostlang$frostc$Annotations** $tmp2584 = &$tmp2583->annotations;
org$frostlang$frostc$Annotations* $tmp2585 = *$tmp2584;
frost$core$Bit $tmp2586 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp2585);
bool $tmp2587 = $tmp2586.value;
if ($tmp2587) goto block30; else goto block31;
block30:;
*(&local11) = $tmp2586;
goto block32;
block31:;
org$frostlang$frostc$MethodDecl* $tmp2588 = *(&local8);
org$frostlang$frostc$MethodDecl$Kind* $tmp2589 = &$tmp2588->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp2590 = *$tmp2589;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2591;
$tmp2591 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2591->value = $tmp2590;
frost$core$Int64 $tmp2592 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp2593 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp2592);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp2594;
$tmp2594 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp2594->value = $tmp2593;
ITable* $tmp2595 = ((frost$core$Equatable*) $tmp2591)->$class->itable;
while ($tmp2595->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp2595 = $tmp2595->next;
}
$fn2597 $tmp2596 = $tmp2595->methods[0];
frost$core$Bit $tmp2598 = $tmp2596(((frost$core$Equatable*) $tmp2591), ((frost$core$Equatable*) $tmp2594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2594)));
// unreffing REF($372:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp2591)));
// unreffing REF($368:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
*(&local11) = $tmp2598;
goto block32;
block32:;
frost$core$Bit $tmp2599 = *(&local11);
bool $tmp2600 = $tmp2599.value;
if ($tmp2600) goto block28; else goto block33;
block28:;
// line 564
org$frostlang$frostc$MethodDecl* $tmp2601 = *(&local8);
frost$core$Weak** $tmp2602 = &$tmp2601->owner;
frost$core$Weak* $tmp2603 = *$tmp2602;
frost$core$Object* $tmp2604 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2603);
org$frostlang$frostc$Type** $tmp2605 = &((org$frostlang$frostc$ClassDecl*) $tmp2604)->type;
org$frostlang$frostc$Type* $tmp2606 = *$tmp2605;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2606));
org$frostlang$frostc$Type* $tmp2607 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2607));
*(&local10) = $tmp2606;
frost$core$Frost$unref$frost$core$Object$Q($tmp2604);
// unreffing REF($391:frost.core.Weak.T)
goto block29;
block33:;
// line 1
// line 567
org$frostlang$frostc$ClassDecl* $tmp2608 = *(&local0);
org$frostlang$frostc$Type** $tmp2609 = &$tmp2608->type;
org$frostlang$frostc$Type* $tmp2610 = *$tmp2609;
org$frostlang$frostc$MethodDecl* $tmp2611 = *(&local8);
frost$core$Weak** $tmp2612 = &$tmp2611->owner;
frost$core$Weak* $tmp2613 = *$tmp2612;
frost$core$Object* $tmp2614 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2613);
org$frostlang$frostc$Type* $tmp2615 = org$frostlang$frostc$Compiler$findType$org$frostlang$frostc$Type$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$Type$Q(param0, $tmp2610, ((org$frostlang$frostc$ClassDecl*) $tmp2614));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
org$frostlang$frostc$Type* $tmp2616 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2616));
*(&local12) = $tmp2615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2615));
// unreffing REF($416:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q($tmp2614);
// unreffing REF($414:frost.core.Weak.T)
// line 568
org$frostlang$frostc$Type* $tmp2617 = *(&local12);
frost$core$Bit $tmp2618 = frost$core$Bit$init$builtin_bit($tmp2617 != NULL);
bool $tmp2619 = $tmp2618.value;
if ($tmp2619) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp2620 = (frost$core$Int64) {568};
org$frostlang$frostc$ClassDecl* $tmp2621 = *(&local0);
org$frostlang$frostc$Type** $tmp2622 = &$tmp2621->type;
org$frostlang$frostc$Type* $tmp2623 = *$tmp2622;
frost$core$String* $tmp2624 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s2625, ((frost$core$Object*) $tmp2623));
frost$core$String* $tmp2626 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2624, &$s2627);
org$frostlang$frostc$MethodDecl* $tmp2628 = *(&local8);
frost$core$Weak** $tmp2629 = &$tmp2628->owner;
frost$core$Weak* $tmp2630 = *$tmp2629;
frost$core$Object* $tmp2631 = frost$core$Weak$get$R$frost$core$Weak$T($tmp2630);
frost$core$String** $tmp2632 = &((org$frostlang$frostc$ClassDecl*) $tmp2631)->name;
frost$core$String* $tmp2633 = *$tmp2632;
frost$core$String* $tmp2634 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2626, $tmp2633);
frost$core$String* $tmp2635 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2634, &$s2636);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2637, $tmp2620, $tmp2635);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2635));
// unreffing REF($452:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2634));
// unreffing REF($451:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2631);
// unreffing REF($447:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2626));
// unreffing REF($442:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2624));
// unreffing REF($441:frost.core.String)
abort(); // unreachable
block34:;
// line 570
org$frostlang$frostc$Type* $tmp2638 = *(&local12);
frost$core$Bit $tmp2639 = frost$core$Bit$init$builtin_bit($tmp2638 != NULL);
bool $tmp2640 = $tmp2639.value;
if ($tmp2640) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp2641 = (frost$core$Int64) {570};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2642, $tmp2641, &$s2643);
abort(); // unreachable
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
org$frostlang$frostc$Type* $tmp2644 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2644));
*(&local10) = $tmp2638;
org$frostlang$frostc$Type* $tmp2645 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2645));
// unreffing found
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block29;
block29:;
goto block24;
block24:;
// line 572
org$frostlang$frostc$MethodDecl* $tmp2646 = *(&local8);
frost$core$Bit $tmp2647 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp2646);
frost$core$Bit $tmp2648 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2647);
bool $tmp2649 = $tmp2648.value;
if ($tmp2649) goto block38; else goto block39;
block38:;
// line 573
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2650 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2650));
// unreffing targetType
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp2651 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2651));
// unreffing types
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2652 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2652));
// unreffing m
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2653 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2653));
// unreffing target
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2654 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2654));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2655 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2655));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block39:;
// line 575
org$frostlang$frostc$IR$Value* $tmp2656 = *(&local7);
org$frostlang$frostc$MethodRef* $tmp2657 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(41, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type* $tmp2658 = *(&local10);
org$frostlang$frostc$MethodDecl* $tmp2659 = *(&local8);
org$frostlang$frostc$FixedArray* $tmp2660 = *(&local9);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q($tmp2657, param0, $tmp2658, $tmp2659, ((frost$collections$ListView*) $tmp2660));
org$frostlang$frostc$IR$Value* $tmp2661 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2656, $tmp2657, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2661));
// unreffing REF($541:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2657));
// unreffing REF($535:org.frostlang.frostc.MethodRef)
org$frostlang$frostc$Type* $tmp2662 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2662));
// unreffing targetType
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp2663 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2663));
// unreffing types
*(&local9) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp2664 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2664));
// unreffing m
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp2665 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2665));
// unreffing target
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2666 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2666));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2667 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2667));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2661;
block22:;
frost$core$Int64 $tmp2668 = (frost$core$Int64) {10};
frost$core$Bit $tmp2669 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2453, $tmp2668);
bool $tmp2670 = $tmp2669.value;
if ($tmp2670) goto block40; else goto block41;
block40:;
org$frostlang$frostc$IR$Value** $tmp2671 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2672 = *$tmp2671;
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2672));
org$frostlang$frostc$IR$Value* $tmp2673 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2673));
*(&local13) = $tmp2672;
org$frostlang$frostc$FixedArray** $tmp2674 = (org$frostlang$frostc$FixedArray**) (param2->$data + 8);
org$frostlang$frostc$FixedArray* $tmp2675 = *$tmp2674;
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2675));
org$frostlang$frostc$FixedArray* $tmp2676 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2676));
*(&local14) = $tmp2675;
// line 579
org$frostlang$frostc$IR$Value* $tmp2677 = *(&local13);
org$frostlang$frostc$FixedArray* $tmp2678 = *(&local14);
org$frostlang$frostc$Pair* $tmp2679 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, $tmp2677, ((frost$collections$ListView*) $tmp2678), param3, param4);
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
org$frostlang$frostc$Pair* $tmp2680 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2680));
*(&local15) = $tmp2679;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2679));
// unreffing REF($607:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
// line 580
org$frostlang$frostc$Pair* $tmp2681 = *(&local15);
frost$core$Bit $tmp2682 = frost$core$Bit$init$builtin_bit($tmp2681 != NULL);
bool $tmp2683 = $tmp2682.value;
if ($tmp2683) goto block42; else goto block43;
block42:;
// line 581
org$frostlang$frostc$Pair* $tmp2684 = *(&local15);
frost$core$Bit $tmp2685 = frost$core$Bit$init$builtin_bit($tmp2684 != NULL);
bool $tmp2686 = $tmp2685.value;
if ($tmp2686) goto block46; else goto block47;
block47:;
frost$core$Int64 $tmp2687 = (frost$core$Int64) {581};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2688, $tmp2687, &$s2689);
abort(); // unreachable
block46:;
frost$core$Object** $tmp2690 = &$tmp2684->first;
frost$core$Object* $tmp2691 = *$tmp2690;
ITable* $tmp2692 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2691))->$class->itable;
while ($tmp2692->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2692 = $tmp2692->next;
}
$fn2694 $tmp2693 = $tmp2692->methods[0];
frost$core$Int64 $tmp2695 = $tmp2693(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2691)));
frost$core$Int64 $tmp2696 = (frost$core$Int64) {1};
int64_t $tmp2697 = $tmp2695.value;
int64_t $tmp2698 = $tmp2696.value;
bool $tmp2699 = $tmp2697 > $tmp2698;
frost$core$Bit $tmp2700 = (frost$core$Bit) {$tmp2699};
bool $tmp2701 = $tmp2700.value;
if ($tmp2701) goto block44; else goto block45;
block44:;
// line 582
org$frostlang$frostc$Pair* $tmp2702 = *(&local15);
frost$core$Bit $tmp2703 = frost$core$Bit$init$builtin_bit($tmp2702 != NULL);
bool $tmp2704 = $tmp2703.value;
if ($tmp2704) goto block48; else goto block49;
block49:;
frost$core$Int64 $tmp2705 = (frost$core$Int64) {582};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2706, $tmp2705, &$s2707);
abort(); // unreachable
block48:;
frost$core$Object** $tmp2708 = &$tmp2702->first;
frost$core$Object* $tmp2709 = *$tmp2708;
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp2709), param3, param4);
// line 583
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp2710 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2710));
// unreffing best
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2711 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2711));
// unreffing methods
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2712 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2712));
// unreffing target
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2713 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2713));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2714 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2714));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block45:;
// line 585
org$frostlang$frostc$IR$Value* $tmp2715 = *(&local13);
org$frostlang$frostc$Pair* $tmp2716 = *(&local15);
frost$core$Bit $tmp2717 = frost$core$Bit$init$builtin_bit($tmp2716 != NULL);
bool $tmp2718 = $tmp2717.value;
if ($tmp2718) goto block50; else goto block51;
block51:;
frost$core$Int64 $tmp2719 = (frost$core$Int64) {585};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2720, $tmp2719, &$s2721);
abort(); // unreachable
block50:;
frost$core$Object** $tmp2722 = &$tmp2716->first;
frost$core$Object* $tmp2723 = *$tmp2722;
frost$core$Int64 $tmp2724 = (frost$core$Int64) {0};
ITable* $tmp2725 = ((frost$collections$ListView*) $tmp2723)->$class->itable;
while ($tmp2725->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2725 = $tmp2725->next;
}
$fn2727 $tmp2726 = $tmp2725->methods[0];
frost$core$Object* $tmp2728 = $tmp2726(((frost$collections$ListView*) $tmp2723), $tmp2724);
org$frostlang$frostc$IR$Value* $tmp2729 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2715, ((org$frostlang$frostc$MethodRef*) $tmp2728), param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2729));
// unreffing REF($709:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp2728);
// unreffing REF($707:frost.collections.ListView.T)
org$frostlang$frostc$Pair* $tmp2730 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2730));
// unreffing best
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2731 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2731));
// unreffing methods
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2732 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2732));
// unreffing target
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2733 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2733));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2734 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2734));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2729;
block43:;
// line 588
frost$collections$Array* $tmp2735 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2735);
*(&local16) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
frost$collections$Array* $tmp2736 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2736));
*(&local16) = $tmp2735;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2735));
// unreffing REF($745:frost.collections.Array<org.frostlang.frostc.Type>)
// line 589
ITable* $tmp2737 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2737->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2737 = $tmp2737->next;
}
$fn2739 $tmp2738 = $tmp2737->methods[0];
frost$collections$Iterator* $tmp2740 = $tmp2738(((frost$collections$Iterable*) param3));
goto block52;
block52:;
ITable* $tmp2741 = $tmp2740->$class->itable;
while ($tmp2741->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2741 = $tmp2741->next;
}
$fn2743 $tmp2742 = $tmp2741->methods[0];
frost$core$Bit $tmp2744 = $tmp2742($tmp2740);
bool $tmp2745 = $tmp2744.value;
if ($tmp2745) goto block54; else goto block53;
block53:;
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2746 = $tmp2740->$class->itable;
while ($tmp2746->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2746 = $tmp2746->next;
}
$fn2748 $tmp2747 = $tmp2746->methods[1];
frost$core$Object* $tmp2749 = $tmp2747($tmp2740);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2749)));
org$frostlang$frostc$ASTNode* $tmp2750 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2750));
*(&local17) = ((org$frostlang$frostc$ASTNode*) $tmp2749);
// line 590
org$frostlang$frostc$ASTNode* $tmp2751 = *(&local17);
org$frostlang$frostc$Type* $tmp2752 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp2751);
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
org$frostlang$frostc$Type* $tmp2753 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2753));
*(&local18) = $tmp2752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2752));
// unreffing REF($783:org.frostlang.frostc.Type?)
// line 591
org$frostlang$frostc$Type* $tmp2754 = *(&local18);
frost$core$Bit $tmp2755 = frost$core$Bit$init$builtin_bit($tmp2754 == NULL);
bool $tmp2756 = $tmp2755.value;
if ($tmp2756) goto block55; else goto block56;
block55:;
// line 593
frost$core$Int64* $tmp2757 = &param0->errorCount;
frost$core$Int64 $tmp2758 = *$tmp2757;
*(&local19) = $tmp2758;
// line 594
org$frostlang$frostc$ASTNode* $tmp2759 = *(&local17);
org$frostlang$frostc$IR$Value* $tmp2760 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2759);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2760));
// unreffing REF($806:org.frostlang.frostc.IR.Value?)
// line 595
frost$core$Int64* $tmp2761 = &param0->errorCount;
frost$core$Int64 $tmp2762 = *$tmp2761;
frost$core$Int64 $tmp2763 = *(&local19);
frost$core$Bit $tmp2764 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2762, $tmp2763);
bool $tmp2765 = $tmp2764.value;
if ($tmp2765) goto block57; else goto block58;
block57:;
// line 597
org$frostlang$frostc$FixedArray* $tmp2766 = *(&local14);
frost$core$Int64 $tmp2767 = (frost$core$Int64) {0};
frost$core$Object* $tmp2768 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2766, $tmp2767);
frost$core$String** $tmp2769 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2768))->name;
frost$core$String* $tmp2770 = *$tmp2769;
frost$core$String* $tmp2771 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2772, $tmp2770);
frost$core$String* $tmp2773 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2771, &$s2774);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2773);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2773));
// unreffing REF($827:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2771));
// unreffing REF($826:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2768);
// unreffing REF($821:org.frostlang.frostc.FixedArray.T)
goto block58;
block58:;
// line 599
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2775 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2775));
// unreffing preferred
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2749);
// unreffing REF($773:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2776 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2776));
// unreffing a
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
// unreffing REF($762:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$Array* $tmp2777 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2777));
// unreffing argTypes
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2778 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2778));
// unreffing best
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2779 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2779));
// unreffing methods
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2780 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2780));
// unreffing target
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2781 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2781));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2782 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2782));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block56:;
// line 601
frost$collections$Array* $tmp2783 = *(&local16);
org$frostlang$frostc$Type* $tmp2784 = *(&local18);
frost$core$Bit $tmp2785 = frost$core$Bit$init$builtin_bit($tmp2784 != NULL);
bool $tmp2786 = $tmp2785.value;
if ($tmp2786) goto block59; else goto block60;
block60:;
frost$core$Int64 $tmp2787 = (frost$core$Int64) {601};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2788, $tmp2787, &$s2789);
abort(); // unreachable
block59:;
frost$collections$Array$add$frost$collections$Array$T($tmp2783, ((frost$core$Object*) $tmp2784));
org$frostlang$frostc$Type* $tmp2790 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2790));
// unreffing preferred
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2749);
// unreffing REF($773:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2791 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2791));
// unreffing a
*(&local17) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block52;
block54:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2740));
// unreffing REF($762:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 603
org$frostlang$frostc$FixedArray* $tmp2792 = *(&local14);
frost$core$Int64 $tmp2793 = (frost$core$Int64) {0};
frost$core$Object* $tmp2794 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2792, $tmp2793);
frost$core$String** $tmp2795 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2794))->name;
frost$core$String* $tmp2796 = *$tmp2795;
frost$core$String* $tmp2797 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2798, $tmp2796);
frost$core$String* $tmp2799 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2797, &$s2800);
frost$collections$Array* $tmp2801 = *(&local16);
ITable* $tmp2802 = ((frost$collections$CollectionView*) $tmp2801)->$class->itable;
while ($tmp2802->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2802 = $tmp2802->next;
}
$fn2804 $tmp2803 = $tmp2802->methods[1];
frost$core$String* $tmp2805 = $tmp2803(((frost$collections$CollectionView*) $tmp2801));
frost$core$String* $tmp2806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2799, $tmp2805);
frost$core$String* $tmp2807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2806, &$s2808);
$fn2810 $tmp2809 = ($fn2810) param4->$class->vtable[2];
frost$core$String* $tmp2811 = $tmp2809(param4);
frost$core$String* $tmp2812 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2807, $tmp2811);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2812);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2812));
// unreffing REF($939:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2811));
// unreffing REF($938:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2807));
// unreffing REF($936:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2806));
// unreffing REF($935:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2805));
// unreffing REF($934:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2799));
// unreffing REF($930:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2797));
// unreffing REF($929:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2794);
// unreffing REF($924:org.frostlang.frostc.FixedArray.T)
// line 605
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$Array* $tmp2813 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2813));
// unreffing argTypes
*(&local16) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2814 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2814));
// unreffing best
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2815 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2815));
// unreffing methods
*(&local14) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2816 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2816));
// unreffing target
*(&local13) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2817 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2817));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2818 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2818));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block41:;
frost$core$Int64 $tmp2819 = (frost$core$Int64) {12};
frost$core$Bit $tmp2820 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2453, $tmp2819);
bool $tmp2821 = $tmp2820.value;
if ($tmp2821) goto block61; else goto block62;
block61:;
org$frostlang$frostc$IR$Value** $tmp2822 = (org$frostlang$frostc$IR$Value**) (param2->$data + 0);
org$frostlang$frostc$IR$Value* $tmp2823 = *$tmp2822;
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2823));
org$frostlang$frostc$IR$Value* $tmp2824 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2824));
*(&local20) = $tmp2823;
org$frostlang$frostc$FixedArray** $tmp2825 = (org$frostlang$frostc$FixedArray**) (param2->$data + 8);
org$frostlang$frostc$FixedArray* $tmp2826 = *$tmp2825;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2826));
org$frostlang$frostc$FixedArray* $tmp2827 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2827));
*(&local21) = $tmp2826;
org$frostlang$frostc$FixedArray** $tmp2828 = (org$frostlang$frostc$FixedArray**) (param2->$data + 16);
org$frostlang$frostc$FixedArray* $tmp2829 = *$tmp2828;
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2829));
org$frostlang$frostc$FixedArray* $tmp2830 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2830));
*(&local22) = $tmp2829;
// line 608
org$frostlang$frostc$IR$Value* $tmp2831 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp2832 = *(&local21);
org$frostlang$frostc$FixedArray* $tmp2833 = *(&local22);
org$frostlang$frostc$Pair* $tmp2834 = org$frostlang$frostc$expression$Call$findBestMethod$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$Q$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(param0, param1, $tmp2831, ((frost$collections$ListView*) $tmp2832), ((frost$collections$ListView*) $tmp2833), param3, param4);
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
org$frostlang$frostc$Pair* $tmp2835 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2835));
*(&local23) = $tmp2834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2834));
// unreffing REF($1036:org.frostlang.frostc.Pair<frost.collections.ListView<org.frostlang.frostc.MethodRef>, frost.core.Int64>?)
// line 609
org$frostlang$frostc$Pair* $tmp2836 = *(&local23);
frost$core$Bit $tmp2837 = frost$core$Bit$init$builtin_bit($tmp2836 != NULL);
bool $tmp2838 = $tmp2837.value;
if ($tmp2838) goto block63; else goto block64;
block63:;
// line 610
org$frostlang$frostc$Pair* $tmp2839 = *(&local23);
frost$core$Bit $tmp2840 = frost$core$Bit$init$builtin_bit($tmp2839 != NULL);
bool $tmp2841 = $tmp2840.value;
if ($tmp2841) goto block67; else goto block68;
block68:;
frost$core$Int64 $tmp2842 = (frost$core$Int64) {610};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2843, $tmp2842, &$s2844);
abort(); // unreachable
block67:;
frost$core$Object** $tmp2845 = &$tmp2839->first;
frost$core$Object* $tmp2846 = *$tmp2845;
ITable* $tmp2847 = ((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2846))->$class->itable;
while ($tmp2847->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2847 = $tmp2847->next;
}
$fn2849 $tmp2848 = $tmp2847->methods[0];
frost$core$Int64 $tmp2850 = $tmp2848(((frost$collections$CollectionView*) ((frost$collections$ListView*) $tmp2846)));
frost$core$Int64 $tmp2851 = (frost$core$Int64) {1};
int64_t $tmp2852 = $tmp2850.value;
int64_t $tmp2853 = $tmp2851.value;
bool $tmp2854 = $tmp2852 > $tmp2853;
frost$core$Bit $tmp2855 = (frost$core$Bit) {$tmp2854};
bool $tmp2856 = $tmp2855.value;
if ($tmp2856) goto block65; else goto block66;
block65:;
// line 611
org$frostlang$frostc$Pair* $tmp2857 = *(&local23);
frost$core$Bit $tmp2858 = frost$core$Bit$init$builtin_bit($tmp2857 != NULL);
bool $tmp2859 = $tmp2858.value;
if ($tmp2859) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp2860 = (frost$core$Int64) {611};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2861, $tmp2860, &$s2862);
abort(); // unreachable
block69:;
frost$core$Object** $tmp2863 = &$tmp2857->first;
frost$core$Object* $tmp2864 = *$tmp2863;
org$frostlang$frostc$Compiler$reportAmbiguousMatch$org$frostlang$frostc$Position$frost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext(param0, param1, ((frost$collections$ListView*) $tmp2864), param3, param4);
// line 612
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp2865 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2865));
// unreffing best
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2866 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2866));
// unreffing types
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2867 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2867));
// unreffing methods
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2868 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2868));
// unreffing target
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2869 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2869));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2870 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2870));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block66:;
// line 614
org$frostlang$frostc$IR$Value* $tmp2871 = *(&local20);
org$frostlang$frostc$Pair* $tmp2872 = *(&local23);
frost$core$Bit $tmp2873 = frost$core$Bit$init$builtin_bit($tmp2872 != NULL);
bool $tmp2874 = $tmp2873.value;
if ($tmp2874) goto block71; else goto block72;
block72:;
frost$core$Int64 $tmp2875 = (frost$core$Int64) {614};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2876, $tmp2875, &$s2877);
abort(); // unreachable
block71:;
frost$core$Object** $tmp2878 = &$tmp2872->first;
frost$core$Object* $tmp2879 = *$tmp2878;
frost$core$Int64 $tmp2880 = (frost$core$Int64) {0};
ITable* $tmp2881 = ((frost$collections$ListView*) $tmp2879)->$class->itable;
while ($tmp2881->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp2881 = $tmp2881->next;
}
$fn2883 $tmp2882 = $tmp2881->methods[0];
frost$core$Object* $tmp2884 = $tmp2882(((frost$collections$ListView*) $tmp2879), $tmp2880);
org$frostlang$frostc$IR$Value* $tmp2885 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp2871, ((org$frostlang$frostc$MethodRef*) $tmp2884), param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2885));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2885));
// unreffing REF($1143:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp2884);
// unreffing REF($1141:frost.collections.ListView.T)
org$frostlang$frostc$Pair* $tmp2886 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2886));
// unreffing best
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2887 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2887));
// unreffing types
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2888 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2888));
// unreffing methods
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2889 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2889));
// unreffing target
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2890 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2890));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2891 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2891));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2885;
block64:;
// line 617
frost$collections$Array* $tmp2892 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2892);
*(&local24) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
frost$collections$Array* $tmp2893 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2893));
*(&local24) = $tmp2892;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2892));
// unreffing REF($1184:frost.collections.Array<org.frostlang.frostc.Type>)
// line 618
ITable* $tmp2894 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp2894->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2894 = $tmp2894->next;
}
$fn2896 $tmp2895 = $tmp2894->methods[0];
frost$collections$Iterator* $tmp2897 = $tmp2895(((frost$collections$Iterable*) param3));
goto block73;
block73:;
ITable* $tmp2898 = $tmp2897->$class->itable;
while ($tmp2898->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2898 = $tmp2898->next;
}
$fn2900 $tmp2899 = $tmp2898->methods[0];
frost$core$Bit $tmp2901 = $tmp2899($tmp2897);
bool $tmp2902 = $tmp2901.value;
if ($tmp2902) goto block75; else goto block74;
block74:;
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp2903 = $tmp2897->$class->itable;
while ($tmp2903->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp2903 = $tmp2903->next;
}
$fn2905 $tmp2904 = $tmp2903->methods[1];
frost$core$Object* $tmp2906 = $tmp2904($tmp2897);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp2906)));
org$frostlang$frostc$ASTNode* $tmp2907 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2907));
*(&local25) = ((org$frostlang$frostc$ASTNode*) $tmp2906);
// line 619
org$frostlang$frostc$ASTNode* $tmp2908 = *(&local25);
org$frostlang$frostc$Type* $tmp2909 = org$frostlang$frostc$Compiler$preferredType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, $tmp2908);
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
org$frostlang$frostc$Type* $tmp2910 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2910));
*(&local26) = $tmp2909;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2909));
// unreffing REF($1222:org.frostlang.frostc.Type?)
// line 620
org$frostlang$frostc$Type* $tmp2911 = *(&local26);
frost$core$Bit $tmp2912 = frost$core$Bit$init$builtin_bit($tmp2911 == NULL);
bool $tmp2913 = $tmp2912.value;
if ($tmp2913) goto block76; else goto block77;
block76:;
// line 622
frost$core$Int64* $tmp2914 = &param0->errorCount;
frost$core$Int64 $tmp2915 = *$tmp2914;
*(&local27) = $tmp2915;
// line 623
org$frostlang$frostc$ASTNode* $tmp2916 = *(&local25);
org$frostlang$frostc$IR$Value* $tmp2917 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp2916);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2917));
// unreffing REF($1245:org.frostlang.frostc.IR.Value?)
// line 624
frost$core$Int64* $tmp2918 = &param0->errorCount;
frost$core$Int64 $tmp2919 = *$tmp2918;
frost$core$Int64 $tmp2920 = *(&local27);
frost$core$Bit $tmp2921 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2919, $tmp2920);
bool $tmp2922 = $tmp2921.value;
if ($tmp2922) goto block78; else goto block79;
block78:;
// line 626
org$frostlang$frostc$FixedArray* $tmp2923 = *(&local21);
frost$core$Int64 $tmp2924 = (frost$core$Int64) {0};
frost$core$Object* $tmp2925 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2923, $tmp2924);
frost$core$String** $tmp2926 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2925))->name;
frost$core$String* $tmp2927 = *$tmp2926;
frost$core$String* $tmp2928 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2929, $tmp2927);
frost$core$String* $tmp2930 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2928, &$s2931);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2930);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2930));
// unreffing REF($1266:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2928));
// unreffing REF($1265:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2925);
// unreffing REF($1260:org.frostlang.frostc.FixedArray.T)
goto block79;
block79:;
// line 628
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp2932 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2932));
// unreffing preferred
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2906);
// unreffing REF($1212:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2933 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2933));
// unreffing a
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
// unreffing REF($1201:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$collections$Array* $tmp2934 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2934));
// unreffing argTypes
*(&local24) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2935 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2935));
// unreffing best
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2936 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2936));
// unreffing types
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2937 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2937));
// unreffing methods
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2938 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2938));
// unreffing target
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2939 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2939));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2940 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2940));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block77:;
// line 630
frost$collections$Array* $tmp2941 = *(&local24);
org$frostlang$frostc$Type* $tmp2942 = *(&local26);
frost$core$Bit $tmp2943 = frost$core$Bit$init$builtin_bit($tmp2942 != NULL);
bool $tmp2944 = $tmp2943.value;
if ($tmp2944) goto block80; else goto block81;
block81:;
frost$core$Int64 $tmp2945 = (frost$core$Int64) {630};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2946, $tmp2945, &$s2947);
abort(); // unreachable
block80:;
frost$collections$Array$add$frost$collections$Array$T($tmp2941, ((frost$core$Object*) $tmp2942));
org$frostlang$frostc$Type* $tmp2948 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2948));
// unreffing preferred
*(&local26) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp2906);
// unreffing REF($1212:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp2949 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2949));
// unreffing a
*(&local25) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block73;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2897));
// unreffing REF($1201:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 632
org$frostlang$frostc$FixedArray* $tmp2950 = *(&local21);
frost$core$Int64 $tmp2951 = (frost$core$Int64) {0};
frost$core$Object* $tmp2952 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2950, $tmp2951);
frost$core$String** $tmp2953 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$MethodDecl*) $tmp2952))->name;
frost$core$String* $tmp2954 = *$tmp2953;
frost$core$String* $tmp2955 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2956, $tmp2954);
frost$core$String* $tmp2957 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2955, &$s2958);
frost$collections$Array* $tmp2959 = *(&local24);
ITable* $tmp2960 = ((frost$collections$CollectionView*) $tmp2959)->$class->itable;
while ($tmp2960->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2960 = $tmp2960->next;
}
$fn2962 $tmp2961 = $tmp2960->methods[1];
frost$core$String* $tmp2963 = $tmp2961(((frost$collections$CollectionView*) $tmp2959));
frost$core$String* $tmp2964 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2957, $tmp2963);
frost$core$String* $tmp2965 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2964, &$s2966);
$fn2968 $tmp2967 = ($fn2968) param4->$class->vtable[2];
frost$core$String* $tmp2969 = $tmp2967(param4);
frost$core$String* $tmp2970 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2965, $tmp2969);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp2970);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2970));
// unreffing REF($1383:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2969));
// unreffing REF($1382:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2965));
// unreffing REF($1380:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2964));
// unreffing REF($1379:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2963));
// unreffing REF($1378:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2957));
// unreffing REF($1374:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2955));
// unreffing REF($1373:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp2952);
// unreffing REF($1368:org.frostlang.frostc.FixedArray.T)
// line 634
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
frost$collections$Array* $tmp2971 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2971));
// unreffing argTypes
*(&local24) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Pair* $tmp2972 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2972));
// unreffing best
*(&local23) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$FixedArray* $tmp2973 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2973));
// unreffing types
*(&local22) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp2974 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2974));
// unreffing methods
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp2975 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2975));
// unreffing target
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp2976 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2976));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2977 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2977));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block62:;
frost$core$Int64 $tmp2978 = (frost$core$Int64) {5};
frost$core$Bit $tmp2979 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2453, $tmp2978);
bool $tmp2980 = $tmp2979.value;
if ($tmp2980) goto block82; else goto block83;
block83:;
frost$core$Int64 $tmp2981 = (frost$core$Int64) {7};
frost$core$Bit $tmp2982 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2453, $tmp2981);
bool $tmp2983 = $tmp2982.value;
if ($tmp2983) goto block82; else goto block84;
block82:;
// line 637
org$frostlang$frostc$IR$Value* $tmp2984 = org$frostlang$frostc$expression$Call$callMethodObject$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, param3, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2984));
// unreffing REF($1457:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR* $tmp2985 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2985));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp2986 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2986));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp2984;
block84:;
frost$core$Int64 $tmp2987 = (frost$core$Int64) {14};
frost$core$Bit $tmp2988 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2453, $tmp2987);
bool $tmp2989 = $tmp2988.value;
if ($tmp2989) goto block85; else goto block86;
block85:;
org$frostlang$frostc$Type** $tmp2990 = (org$frostlang$frostc$Type**) (param2->$data + 0);
org$frostlang$frostc$Type* $tmp2991 = *$tmp2990;
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2991));
org$frostlang$frostc$Type* $tmp2992 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2992));
*(&local28) = $tmp2991;
// line 640
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
// line 641
org$frostlang$frostc$Type* $tmp2993 = *(&local28);
frost$core$Bit $tmp2994 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp2993);
bool $tmp2995 = $tmp2994.value;
if ($tmp2995) goto block87; else goto block89;
block87:;
// line 642
org$frostlang$frostc$Type* $tmp2996 = *(&local28);
org$frostlang$frostc$FixedArray** $tmp2997 = &$tmp2996->subtypes;
org$frostlang$frostc$FixedArray* $tmp2998 = *$tmp2997;
frost$core$Bit $tmp2999 = frost$core$Bit$init$builtin_bit($tmp2998 != NULL);
bool $tmp3000 = $tmp2999.value;
if ($tmp3000) goto block90; else goto block91;
block91:;
frost$core$Int64 $tmp3001 = (frost$core$Int64) {642};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3002, $tmp3001, &$s3003);
abort(); // unreachable
block90:;
frost$core$Int64 $tmp3004 = (frost$core$Int64) {1};
frost$core$Object* $tmp3005 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp2998, $tmp3004);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp3005)));
org$frostlang$frostc$Type* $tmp3006 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3006));
*(&local29) = ((org$frostlang$frostc$Type*) $tmp3005);
frost$core$Frost$unref$frost$core$Object$Q($tmp3005);
// unreffing REF($1508:org.frostlang.frostc.FixedArray.T)
goto block88;
block89:;
// line 1
// line 645
org$frostlang$frostc$Type* $tmp3007 = *(&local28);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3007));
org$frostlang$frostc$Type* $tmp3008 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3008));
*(&local29) = $tmp3007;
goto block88;
block88:;
// line 647
org$frostlang$frostc$Type* $tmp3009 = *(&local29);
org$frostlang$frostc$ClassDecl* $tmp3010 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp3009);
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
org$frostlang$frostc$ClassDecl* $tmp3011 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3011));
*(&local30) = $tmp3010;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3010));
// unreffing REF($1532:org.frostlang.frostc.ClassDecl?)
// line 648
org$frostlang$frostc$ClassDecl* $tmp3012 = *(&local30);
frost$core$Bit $tmp3013 = frost$core$Bit$init$builtin_bit($tmp3012 == NULL);
bool $tmp3014 = $tmp3013.value;
if ($tmp3014) goto block92; else goto block93;
block92:;
// line 649
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp3015 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3015));
// unreffing cl
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp3016 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3016));
// unreffing finalType
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3017 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3017));
// unreffing t
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3018 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3018));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3019 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3019));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block93:;
// line 651
org$frostlang$frostc$ClassDecl* $tmp3020 = *(&local30);
frost$core$Bit $tmp3021 = frost$core$Bit$init$builtin_bit($tmp3020 != NULL);
bool $tmp3022 = $tmp3021.value;
if ($tmp3022) goto block96; else goto block97;
block97:;
frost$core$Int64 $tmp3023 = (frost$core$Int64) {651};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3024, $tmp3023, &$s3025);
abort(); // unreachable
block96:;
frost$core$Bit $tmp3026 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(param0, $tmp3020);
frost$core$Bit $tmp3027 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3026);
bool $tmp3028 = $tmp3027.value;
if ($tmp3028) goto block94; else goto block95;
block94:;
// line 652
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp3029 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3029));
// unreffing cl
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp3030 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3030));
// unreffing finalType
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3031 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3031));
// unreffing t
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3032 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3032));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3033 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3033));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block95:;
// line 654
org$frostlang$frostc$ClassDecl* $tmp3034 = *(&local30);
frost$core$Bit $tmp3035 = frost$core$Bit$init$builtin_bit($tmp3034 != NULL);
bool $tmp3036 = $tmp3035.value;
if ($tmp3036) goto block98; else goto block99;
block99:;
frost$core$Int64 $tmp3037 = (frost$core$Int64) {654};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3038, $tmp3037, &$s3039);
abort(); // unreachable
block98:;
org$frostlang$frostc$SymbolTable* $tmp3040 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp3034);
org$frostlang$frostc$Symbol* $tmp3041 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp3040, &$s3042);
*(&local31) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
org$frostlang$frostc$Symbol* $tmp3043 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3043));
*(&local31) = $tmp3041;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3041));
// unreffing REF($1632:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3040));
// unreffing REF($1631:org.frostlang.frostc.SymbolTable)
// line 655
org$frostlang$frostc$Symbol* $tmp3044 = *(&local31);
frost$core$Bit $tmp3045 = frost$core$Bit$init$builtin_bit($tmp3044 != NULL);
bool $tmp3046 = $tmp3045.value;
if ($tmp3046) goto block100; else goto block101;
block101:;
frost$core$Int64 $tmp3047 = (frost$core$Int64) {655};
org$frostlang$frostc$ClassDecl* $tmp3048 = *(&local30);
frost$core$Bit $tmp3049 = frost$core$Bit$init$builtin_bit($tmp3048 != NULL);
bool $tmp3050 = $tmp3049.value;
if ($tmp3050) goto block102; else goto block103;
block103:;
frost$core$Int64 $tmp3051 = (frost$core$Int64) {655};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3052, $tmp3051, &$s3053);
abort(); // unreachable
block102:;
frost$core$String** $tmp3054 = &$tmp3048->name;
frost$core$String* $tmp3055 = *$tmp3054;
frost$core$String* $tmp3056 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3057, $tmp3055);
frost$core$String* $tmp3058 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3056, &$s3059);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3060, $tmp3047, $tmp3058);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3058));
// unreffing REF($1665:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3056));
// unreffing REF($1664:frost.core.String)
abort(); // unreachable
block100:;
// line 656
org$frostlang$frostc$ClassDecl* $tmp3061 = *(&local30);
frost$core$Bit $tmp3062 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, $tmp3061);
bool $tmp3063 = $tmp3062.value;
if ($tmp3063) goto block104; else goto block105;
block104:;
// line 657
org$frostlang$frostc$Symbol* $tmp3064 = *(&local31);
frost$core$Bit $tmp3065 = frost$core$Bit$init$builtin_bit($tmp3064 != NULL);
bool $tmp3066 = $tmp3065.value;
if ($tmp3066) goto block106; else goto block107;
block107:;
frost$core$Int64 $tmp3067 = (frost$core$Int64) {658};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3068, $tmp3067, &$s3069);
abort(); // unreachable
block106:;
org$frostlang$frostc$IR$Value* $tmp3070 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), $tmp3064);
frost$core$Bit $tmp3071 = frost$core$Bit$init$builtin_bit($tmp3070 != NULL);
bool $tmp3072 = $tmp3071.value;
if ($tmp3072) goto block108; else goto block109;
block109:;
frost$core$Int64 $tmp3073 = (frost$core$Int64) {658};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3074, $tmp3073, &$s3075);
abort(); // unreachable
block108:;
org$frostlang$frostc$IR$Value* $tmp3076 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3070, param3, param4);
org$frostlang$frostc$Type* $tmp3077 = *(&local29);
org$frostlang$frostc$IR$Value* $tmp3078 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3076, $tmp3077);
org$frostlang$frostc$IR$Value* $tmp3079 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3078, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3079));
// unreffing REF($1701:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3078));
// unreffing REF($1700:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3076));
// unreffing REF($1698:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3070));
// unreffing REF($1689:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$Symbol* $tmp3080 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3080));
// unreffing inits
*(&local31) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3081 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3081));
// unreffing cl
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp3082 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3082));
// unreffing finalType
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3083 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3083));
// unreffing t
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3084 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3084));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3085 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3085));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3079;
block105:;
// line 661
org$frostlang$frostc$IR* $tmp3086 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3087 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3088 = (frost$core$Int64) {6};
org$frostlang$frostc$ClassDecl* $tmp3089 = *(&local30);
frost$core$Bit $tmp3090 = frost$core$Bit$init$builtin_bit($tmp3089 != NULL);
bool $tmp3091 = $tmp3090.value;
if ($tmp3091) goto block110; else goto block111;
block111:;
frost$core$Int64 $tmp3092 = (frost$core$Int64) {661};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3093, $tmp3092, &$s3094);
abort(); // unreachable
block110:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl($tmp3087, $tmp3088, param1, $tmp3089);
$fn3096 $tmp3095 = ($fn3096) $tmp3086->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3097 = $tmp3095($tmp3086, $tmp3087);
*(&local32) = $tmp3097;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3087));
// unreffing REF($1749:org.frostlang.frostc.IR.Statement)
// line 662
org$frostlang$frostc$IR$Value* $tmp3098 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3099 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3100 = *(&local32);
org$frostlang$frostc$Type* $tmp3101 = *(&local29);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3098, $tmp3099, $tmp3100, $tmp3101);
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
org$frostlang$frostc$IR$Value* $tmp3102 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3102));
*(&local33) = $tmp3098;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3098));
// unreffing REF($1768:org.frostlang.frostc.IR.Value)
// line 663
frost$collections$Stack** $tmp3103 = &param0->enclosingContexts;
frost$collections$Stack* $tmp3104 = *$tmp3103;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp3105 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp3106 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp3107 = *(&local33);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp3105, $tmp3106, $tmp3107);
frost$collections$Stack$push$frost$collections$Stack$T($tmp3104, ((frost$core$Object*) $tmp3105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3105));
// unreffing REF($1787:org.frostlang.frostc.Compiler.EnclosingContext)
// line 664
org$frostlang$frostc$IR$Value* $tmp3108 = *(&local33);
org$frostlang$frostc$Symbol* $tmp3109 = *(&local31);
frost$core$Bit $tmp3110 = frost$core$Bit$init$builtin_bit($tmp3109 != NULL);
bool $tmp3111 = $tmp3110.value;
if ($tmp3111) goto block112; else goto block113;
block113:;
frost$core$Int64 $tmp3112 = (frost$core$Int64) {664};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3113, $tmp3112, &$s3114);
abort(); // unreachable
block112:;
org$frostlang$frostc$IR$Value* $tmp3115 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3108, $tmp3109);
frost$core$Bit $tmp3116 = frost$core$Bit$init$builtin_bit($tmp3115 != NULL);
bool $tmp3117 = $tmp3116.value;
if ($tmp3117) goto block114; else goto block115;
block115:;
frost$core$Int64 $tmp3118 = (frost$core$Int64) {664};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3119, $tmp3118, &$s3120);
abort(); // unreachable
block114:;
org$frostlang$frostc$Compiler$TypeContext* $tmp3121 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp3122 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp3121, $tmp3122);
org$frostlang$frostc$IR$Value* $tmp3123 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3115, param3, $tmp3121);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3123));
// unreffing REF($1820:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3121));
// unreffing REF($1817:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3115));
// unreffing REF($1808:org.frostlang.frostc.IR.Value?)
// line 666
org$frostlang$frostc$IR$Value* $tmp3124 = *(&local33);
org$frostlang$frostc$IR$Value* $tmp3125 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3124, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3125));
// unreffing REF($1833:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR$Value* $tmp3126 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3126));
// unreffing constructRef
*(&local33) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Symbol* $tmp3127 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3127));
// unreffing inits
*(&local31) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3128 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3128));
// unreffing cl
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp3129 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3129));
// unreffing finalType
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3130 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3130));
// unreffing t
*(&local28) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3131 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3131));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3132 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3132));
// unreffing currentClass
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp3125;
block86:;
// line 669
frost$core$Bit $tmp3133 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3134 = $tmp3133.value;
if ($tmp3134) goto block116; else goto block117;
block117:;
frost$core$Int64 $tmp3135 = (frost$core$Int64) {669};
frost$core$String* $tmp3136 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s3137, ((frost$core$Object*) param2));
frost$core$String* $tmp3138 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3136, &$s3139);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3140, $tmp3135, $tmp3138);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3138));
// unreffing REF($1882:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3136));
// unreffing REF($1881:frost.core.String)
abort(); // unreachable
block116:;
goto block1;
block1:;
frost$core$Bit $tmp3141 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3142 = $tmp3141.value;
if ($tmp3142) goto block118; else goto block119;
block119:;
frost$core$Int64 $tmp3143 = (frost$core$Int64) {533};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3144, $tmp3143, &$s3145);
abort(); // unreachable
block118:;
abort(); // unreachable

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
// line 676
org$frostlang$frostc$Pair* $tmp3146 = org$frostlang$frostc$Compiler$getTryScope$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Block$ID$Q$Corg$frostlang$frostc$Variable$Q$GT$Q(param0);
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
org$frostlang$frostc$Pair* $tmp3147 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3147));
*(&local0) = $tmp3146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3146));
// unreffing REF($1:org.frostlang.frostc.Pair<org.frostlang.frostc.IR.Block.ID?, org.frostlang.frostc.Variable?>?)
// line 677
org$frostlang$frostc$Pair* $tmp3148 = *(&local0);
frost$core$Bit $tmp3149 = frost$core$Bit$init$builtin_bit($tmp3148 == NULL);
bool $tmp3150 = $tmp3149.value;
if ($tmp3150) goto block1; else goto block2;
block1:;
// line 678
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Pair* $tmp3151 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3151));
// unreffing tryScope
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return param2;
block2:;
// line 680
org$frostlang$frostc$IR** $tmp3152 = &param0->ir;
org$frostlang$frostc$IR* $tmp3153 = *$tmp3152;
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3153));
org$frostlang$frostc$IR* $tmp3154 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3154));
*(&local1) = $tmp3153;
// line 681
$fn3156 $tmp3155 = ($fn3156) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3157 = $tmp3155(param2);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
org$frostlang$frostc$Type* $tmp3158 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3158));
*(&local2) = $tmp3157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3157));
// unreffing REF($40:org.frostlang.frostc.Type)
// line 682
org$frostlang$frostc$Type* $tmp3159 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
org$frostlang$frostc$Type* $tmp3160 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3160));
*(&local3) = $tmp3159;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3159));
// unreffing REF($52:org.frostlang.frostc.Type)
// line 683
org$frostlang$frostc$Type* $tmp3161 = *(&local3);
org$frostlang$frostc$Type* $tmp3162 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp3161);
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
org$frostlang$frostc$Type* $tmp3163 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3163));
*(&local4) = $tmp3162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3162));
// unreffing REF($65:org.frostlang.frostc.Type)
// line 684
org$frostlang$frostc$Type* $tmp3164 = *(&local2);
org$frostlang$frostc$Type* $tmp3165 = *(&local4);
frost$core$Bit $tmp3166 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp3164, $tmp3165);
bool $tmp3167 = $tmp3166.value;
if ($tmp3167) goto block3; else goto block5;
block3:;
// line 685
org$frostlang$frostc$IR* $tmp3168 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3169 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3170 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$frost$core$String($tmp3169, $tmp3170, &$s3171);
$fn3173 $tmp3172 = ($fn3173) $tmp3168->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3174 = $tmp3172($tmp3168, $tmp3169);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3169));
// unreffing REF($84:org.frostlang.frostc.IR.Statement)
// line 686
org$frostlang$frostc$IR* $tmp3175 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3176 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3177 = (frost$core$Int64) {0};
frost$core$Int64 $tmp3178 = (frost$core$Int64) {21};
org$frostlang$frostc$expression$Binary$Operator $tmp3179 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp3178);
org$frostlang$frostc$IR$Value* $tmp3180 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3181 = (frost$core$Int64) {4};
org$frostlang$frostc$Type* $tmp3182 = *(&local4);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp3180, $tmp3181, $tmp3182);
org$frostlang$frostc$Type* $tmp3183 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp3176, $tmp3177, param1, param2, $tmp3179, $tmp3180, $tmp3183);
$fn3185 $tmp3184 = ($fn3185) $tmp3175->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3186 = $tmp3184($tmp3175, $tmp3176);
*(&local5) = $tmp3186;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3183));
// unreffing REF($102:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3180));
// unreffing REF($98:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3176));
// unreffing REF($94:org.frostlang.frostc.IR.Statement)
// line 688
org$frostlang$frostc$IR* $tmp3187 = *(&local1);
$fn3189 $tmp3188 = ($fn3189) $tmp3187->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3190 = $tmp3188($tmp3187, &$s3191);
*(&local6) = $tmp3190;
// line 689
org$frostlang$frostc$IR* $tmp3192 = *(&local1);
$fn3194 $tmp3193 = ($fn3194) $tmp3192->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3195 = $tmp3193($tmp3192, &$s3196);
*(&local7) = $tmp3195;
// line 690
org$frostlang$frostc$IR* $tmp3197 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3198 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3199 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp3200 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3201 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3202 = *(&local5);
org$frostlang$frostc$Type* $tmp3203 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3200, $tmp3201, $tmp3202, $tmp3203);
org$frostlang$frostc$IR$Block$ID $tmp3204 = *(&local6);
org$frostlang$frostc$IR$Block$ID $tmp3205 = *(&local7);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3198, $tmp3199, param1, $tmp3200, $tmp3204, $tmp3205);
$fn3207 $tmp3206 = ($fn3207) $tmp3197->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3208 = $tmp3206($tmp3197, $tmp3198);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3203));
// unreffing REF($133:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3200));
// unreffing REF($130:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3198));
// unreffing REF($128:org.frostlang.frostc.IR.Statement)
// line 692
org$frostlang$frostc$IR* $tmp3209 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp3210 = *(&local7);
$fn3212 $tmp3211 = ($fn3212) $tmp3209->$class->vtable[4];
$tmp3211($tmp3209, $tmp3210);
// line 693
org$frostlang$frostc$Pair* $tmp3213 = *(&local0);
frost$core$Bit $tmp3214 = frost$core$Bit$init$builtin_bit($tmp3213 != NULL);
bool $tmp3215 = $tmp3214.value;
if ($tmp3215) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp3216 = (frost$core$Int64) {693};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3217, $tmp3216, &$s3218);
abort(); // unreachable
block6:;
frost$core$Object** $tmp3219 = &$tmp3213->second;
frost$core$Object* $tmp3220 = *$tmp3219;
frost$core$Bit $tmp3221 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Variable*) $tmp3220) != NULL);
bool $tmp3222 = $tmp3221.value;
if ($tmp3222) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp3223 = (frost$core$Int64) {693};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3224, $tmp3223, &$s3225);
abort(); // unreachable
block8:;
org$frostlang$frostc$Variable$Storage** $tmp3226 = &((org$frostlang$frostc$Variable*) $tmp3220)->storage;
org$frostlang$frostc$Variable$Storage* $tmp3227 = *$tmp3226;
frost$core$Int64* $tmp3228 = &$tmp3227->$rawValue;
frost$core$Int64 $tmp3229 = *$tmp3228;
frost$core$Int64 $tmp3230 = (frost$core$Int64) {0};
frost$core$Bit $tmp3231 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3229, $tmp3230);
bool $tmp3232 = $tmp3231.value;
if ($tmp3232) goto block11; else goto block12;
block11:;
frost$core$Int64* $tmp3233 = (frost$core$Int64*) ($tmp3227->$data + 0);
frost$core$Int64 $tmp3234 = *$tmp3233;
*(&local8) = $tmp3234;
// line 695
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, param2);
// line 696
org$frostlang$frostc$IR* $tmp3235 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3236 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3237 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp3238 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3239 = (frost$core$Int64) {2};
frost$core$Int64 $tmp3240 = *(&local8);
org$frostlang$frostc$Type* $tmp3241 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp3238, $tmp3239, $tmp3240, $tmp3241);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp3236, $tmp3237, param1, param2, $tmp3238);
$fn3243 $tmp3242 = ($fn3243) $tmp3235->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3244 = $tmp3242($tmp3235, $tmp3236);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3238));
// unreffing REF($192:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3236));
// unreffing REF($190:org.frostlang.frostc.IR.Statement)
goto block10;
block12:;
// line 699
frost$core$Bit $tmp3245 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3246 = $tmp3245.value;
if ($tmp3246) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp3247 = (frost$core$Int64) {699};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3248, $tmp3247);
abort(); // unreachable
block13:;
goto block10;
block10:;
// line 702
org$frostlang$frostc$Compiler$leaveTryScope(param0);
// line 703
org$frostlang$frostc$IR* $tmp3249 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3250 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3251 = (frost$core$Int64) {1};
org$frostlang$frostc$Pair* $tmp3252 = *(&local0);
frost$core$Bit $tmp3253 = frost$core$Bit$init$builtin_bit($tmp3252 != NULL);
bool $tmp3254 = $tmp3253.value;
if ($tmp3254) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp3255 = (frost$core$Int64) {703};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3256, $tmp3255, &$s3257);
abort(); // unreachable
block15:;
frost$core$Object** $tmp3258 = &$tmp3252->first;
frost$core$Object* $tmp3259 = *$tmp3258;
frost$core$Bit $tmp3260 = frost$core$Bit$init$builtin_bit(($tmp3259 != NULL ? ((org$frostlang$frostc$IR$Block$ID$nullable) { ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp3259)->value, true }) : (org$frostlang$frostc$IR$Block$ID$nullable) { .nonnull = 0 }).nonnull);
bool $tmp3261 = $tmp3260.value;
if ($tmp3261) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp3262 = (frost$core$Int64) {703};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3263, $tmp3262, &$s3264);
abort(); // unreachable
block17:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3250, $tmp3251, param1, ((org$frostlang$frostc$IR$Block$ID) ($tmp3259 != NULL ? ((org$frostlang$frostc$IR$Block$ID$nullable) { ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp3259)->value, true }) : (org$frostlang$frostc$IR$Block$ID$nullable) { .nonnull = 0 }).value));
$fn3266 $tmp3265 = ($fn3266) $tmp3249->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3267 = $tmp3265($tmp3249, $tmp3250);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3250));
// unreffing REF($219:org.frostlang.frostc.IR.Statement)
// line 704
org$frostlang$frostc$IR* $tmp3268 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp3269 = *(&local6);
$fn3271 $tmp3270 = ($fn3271) $tmp3268->$class->vtable[4];
$tmp3270($tmp3268, $tmp3269);
// line 705
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp3272 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3272));
// unreffing nullableError
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3273 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3273));
// unreffing errorType
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3274 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3274));
// unreffing type
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3275 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3275));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Pair* $tmp3276 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3276));
// unreffing tryScope
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block5:;
// line 707
org$frostlang$frostc$Type* $tmp3277 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp3278 = &$tmp3277->typeKind;
org$frostlang$frostc$Type$Kind $tmp3279 = *$tmp3278;
org$frostlang$frostc$Type$Kind$wrapper* $tmp3280;
$tmp3280 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3280->value = $tmp3279;
frost$core$Int64 $tmp3281 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp3282 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp3281);
org$frostlang$frostc$Type$Kind$wrapper* $tmp3283;
$tmp3283 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp3283->value = $tmp3282;
ITable* $tmp3284 = ((frost$core$Equatable*) $tmp3280)->$class->itable;
while ($tmp3284->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3284 = $tmp3284->next;
}
$fn3286 $tmp3285 = $tmp3284->methods[0];
frost$core$Bit $tmp3287 = $tmp3285(((frost$core$Equatable*) $tmp3280), ((frost$core$Equatable*) $tmp3283));
bool $tmp3288 = $tmp3287.value;
if ($tmp3288) goto block21; else goto block22;
block21:;
org$frostlang$frostc$Type* $tmp3289 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp3290 = &$tmp3289->subtypes;
org$frostlang$frostc$FixedArray* $tmp3291 = *$tmp3290;
frost$core$Bit $tmp3292 = frost$core$Bit$init$builtin_bit($tmp3291 != NULL);
bool $tmp3293 = $tmp3292.value;
if ($tmp3293) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp3294 = (frost$core$Int64) {707};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3295, $tmp3294, &$s3296);
abort(); // unreachable
block24:;
frost$core$Int64 $tmp3297 = (frost$core$Int64) {0};
frost$core$Object* $tmp3298 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3291, $tmp3297);
frost$core$String** $tmp3299 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp3298))->name;
frost$core$String* $tmp3300 = *$tmp3299;
frost$core$Bit $tmp3301 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3300, &$s3302);
frost$core$Frost$unref$frost$core$Object$Q($tmp3298);
// unreffing REF($307:org.frostlang.frostc.FixedArray.T)
*(&local9) = $tmp3301;
goto block23;
block22:;
*(&local9) = $tmp3287;
goto block23;
block23:;
frost$core$Bit $tmp3303 = *(&local9);
bool $tmp3304 = $tmp3303.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3283)));
// unreffing REF($289:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3280)));
// unreffing REF($285:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
if ($tmp3304) goto block19; else goto block20;
block19:;
// line 708
org$frostlang$frostc$IR* $tmp3305 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3306 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3307 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$frost$core$String($tmp3306, $tmp3307, &$s3308);
$fn3310 $tmp3309 = ($fn3310) $tmp3305->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3311 = $tmp3309($tmp3305, $tmp3306);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3306));
// unreffing REF($331:org.frostlang.frostc.IR.Statement)
// line 709
org$frostlang$frostc$Type* $tmp3312 = *(&local2);
org$frostlang$frostc$ClassDecl* $tmp3313 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp3312);
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3313));
org$frostlang$frostc$ClassDecl* $tmp3314 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3314));
*(&local10) = $tmp3313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3313));
// unreffing REF($341:org.frostlang.frostc.ClassDecl?)
// line 710
org$frostlang$frostc$ClassDecl* $tmp3315 = *(&local10);
frost$core$Bit $tmp3316 = frost$core$Bit$init$builtin_bit($tmp3315 != NULL);
bool $tmp3317 = $tmp3316.value;
if ($tmp3317) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp3318 = (frost$core$Int64) {710};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3319, $tmp3318);
abort(); // unreachable
block26:;
// line 711
org$frostlang$frostc$ASTNode* $tmp3320 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp3321 = (frost$core$Int64) {26};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp3320, $tmp3321, param1, param2);
org$frostlang$frostc$IR$Value* $tmp3322 = org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3320, &$s3323);
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3322));
org$frostlang$frostc$IR$Value* $tmp3324 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3324));
*(&local11) = $tmp3322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3322));
// unreffing REF($365:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3320));
// unreffing REF($362:org.frostlang.frostc.ASTNode)
// line 713
org$frostlang$frostc$IR$Value* $tmp3325 = *(&local11);
frost$core$Bit $tmp3326 = frost$core$Bit$init$builtin_bit($tmp3325 != NULL);
bool $tmp3327 = $tmp3326.value;
if ($tmp3327) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp3328 = (frost$core$Int64) {713};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3329, $tmp3328);
abort(); // unreachable
block28:;
// line 714
org$frostlang$frostc$IR* $tmp3330 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3331 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3332 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Value* $tmp3333 = *(&local11);
frost$core$Bit $tmp3334 = frost$core$Bit$init$builtin_bit($tmp3333 != NULL);
bool $tmp3335 = $tmp3334.value;
if ($tmp3335) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp3336 = (frost$core$Int64) {715};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3337, $tmp3336, &$s3338);
abort(); // unreachable
block30:;
org$frostlang$frostc$IR$Value* $tmp3339 = org$frostlang$frostc$Compiler$extractBuiltinInt$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp3333);
frost$core$Int64 $tmp3340 = (frost$core$Int64) {6};
org$frostlang$frostc$expression$Binary$Operator $tmp3341 = org$frostlang$frostc$expression$Binary$Operator$init$frost$core$Int64($tmp3340);
org$frostlang$frostc$IR$Value* $tmp3342 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3343 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp3344 = (frost$core$UInt64) {0};
org$frostlang$frostc$Type* $tmp3345 = org$frostlang$frostc$Type$Int64$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp3342, $tmp3343, $tmp3344, $tmp3345);
org$frostlang$frostc$Type* $tmp3346 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type($tmp3331, $tmp3332, param1, $tmp3339, $tmp3341, $tmp3342, $tmp3346);
$fn3348 $tmp3347 = ($fn3348) $tmp3330->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3349 = $tmp3347($tmp3330, $tmp3331);
*(&local12) = $tmp3349;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3346));
// unreffing REF($409:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3345));
// unreffing REF($407:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3342));
// unreffing REF($404:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3339));
// unreffing REF($401:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3331));
// unreffing REF($390:org.frostlang.frostc.IR.Statement)
// line 717
org$frostlang$frostc$IR* $tmp3350 = *(&local1);
$fn3352 $tmp3351 = ($fn3352) $tmp3350->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3353 = $tmp3351($tmp3350, &$s3354);
*(&local13) = $tmp3353;
// line 718
org$frostlang$frostc$IR* $tmp3355 = *(&local1);
$fn3357 $tmp3356 = ($fn3357) $tmp3355->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp3358 = $tmp3356($tmp3355, &$s3359);
*(&local14) = $tmp3358;
// line 719
org$frostlang$frostc$IR* $tmp3360 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3361 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3362 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp3363 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3364 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3365 = *(&local12);
org$frostlang$frostc$Type* $tmp3366 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3363, $tmp3364, $tmp3365, $tmp3366);
org$frostlang$frostc$IR$Block$ID $tmp3367 = *(&local13);
org$frostlang$frostc$IR$Block$ID $tmp3368 = *(&local14);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp3361, $tmp3362, param1, $tmp3363, $tmp3367, $tmp3368);
$fn3370 $tmp3369 = ($fn3370) $tmp3360->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3371 = $tmp3369($tmp3360, $tmp3361);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3366));
// unreffing REF($446:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3363));
// unreffing REF($443:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3361));
// unreffing REF($441:org.frostlang.frostc.IR.Statement)
// line 721
org$frostlang$frostc$IR* $tmp3372 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp3373 = *(&local14);
$fn3375 $tmp3374 = ($fn3375) $tmp3372->$class->vtable[4];
$tmp3374($tmp3372, $tmp3373);
// line 722
org$frostlang$frostc$IR* $tmp3376 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3377 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3378 = (frost$core$Int64) {4};
org$frostlang$frostc$ClassDecl* $tmp3379 = *(&local10);
frost$core$Bit $tmp3380 = frost$core$Bit$init$builtin_bit($tmp3379 != NULL);
bool $tmp3381 = $tmp3380.value;
if ($tmp3381) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp3382 = (frost$core$Int64) {723};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3383, $tmp3382, &$s3384);
abort(); // unreachable
block32:;
frost$collections$Array** $tmp3385 = &$tmp3379->choiceCases;
frost$collections$Array* $tmp3386 = *$tmp3385;
frost$core$Int64 $tmp3387 = (frost$core$Int64) {1};
frost$core$Object* $tmp3388 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3386, $tmp3387);
frost$core$Int64 $tmp3389 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp3377, $tmp3378, param1, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp3388), $tmp3389);
$fn3391 $tmp3390 = ($fn3391) $tmp3376->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3392 = $tmp3390($tmp3376, $tmp3377);
*(&local15) = $tmp3392;
frost$core$Frost$unref$frost$core$Object$Q($tmp3388);
// unreffing REF($484:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3377));
// unreffing REF($469:org.frostlang.frostc.IR.Statement)
// line 724
org$frostlang$frostc$IR* $tmp3393 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3394 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3395 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp3396 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3397 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3398 = *(&local15);
org$frostlang$frostc$Type* $tmp3399 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3396, $tmp3397, $tmp3398, $tmp3399);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp3394, $tmp3395, param1, $tmp3396);
$fn3401 $tmp3400 = ($fn3401) $tmp3393->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3402 = $tmp3400($tmp3393, $tmp3394);
*(&local16) = $tmp3402;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3396));
// unreffing REF($501:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3394));
// unreffing REF($499:org.frostlang.frostc.IR.Statement)
// line 726
org$frostlang$frostc$IR$Value* $tmp3403 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3404 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3405 = *(&local16);
org$frostlang$frostc$Type* $tmp3406 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3403, $tmp3404, $tmp3405, $tmp3406);
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3403));
org$frostlang$frostc$IR$Value* $tmp3407 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3407));
*(&local17) = $tmp3403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3403));
// unreffing REF($517:org.frostlang.frostc.IR.Value)
// line 727
org$frostlang$frostc$IR$Value* $tmp3408 = *(&local17);
org$frostlang$frostc$Compiler$compileRef$org$frostlang$frostc$IR$Value(param0, $tmp3408);
// line 728
org$frostlang$frostc$Pair* $tmp3409 = *(&local0);
frost$core$Bit $tmp3410 = frost$core$Bit$init$builtin_bit($tmp3409 != NULL);
bool $tmp3411 = $tmp3410.value;
if ($tmp3411) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp3412 = (frost$core$Int64) {728};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3413, $tmp3412, &$s3414);
abort(); // unreachable
block34:;
frost$core$Object** $tmp3415 = &$tmp3409->second;
frost$core$Object* $tmp3416 = *$tmp3415;
frost$core$Bit $tmp3417 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$Variable*) $tmp3416) != NULL);
bool $tmp3418 = $tmp3417.value;
if ($tmp3418) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp3419 = (frost$core$Int64) {728};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3420, $tmp3419, &$s3421);
abort(); // unreachable
block36:;
org$frostlang$frostc$Variable$Storage** $tmp3422 = &((org$frostlang$frostc$Variable*) $tmp3416)->storage;
org$frostlang$frostc$Variable$Storage* $tmp3423 = *$tmp3422;
frost$core$Int64* $tmp3424 = &$tmp3423->$rawValue;
frost$core$Int64 $tmp3425 = *$tmp3424;
frost$core$Int64 $tmp3426 = (frost$core$Int64) {0};
frost$core$Bit $tmp3427 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3425, $tmp3426);
bool $tmp3428 = $tmp3427.value;
if ($tmp3428) goto block39; else goto block40;
block39:;
frost$core$Int64* $tmp3429 = (frost$core$Int64*) ($tmp3423->$data + 0);
frost$core$Int64 $tmp3430 = *$tmp3429;
*(&local18) = $tmp3430;
// line 730
org$frostlang$frostc$IR* $tmp3431 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3432 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3433 = (frost$core$Int64) {26};
org$frostlang$frostc$IR$Value* $tmp3434 = *(&local17);
org$frostlang$frostc$IR$Value* $tmp3435 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3436 = (frost$core$Int64) {2};
frost$core$Int64 $tmp3437 = *(&local18);
org$frostlang$frostc$Type* $tmp3438 = *(&local3);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp3435, $tmp3436, $tmp3437, $tmp3438);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp3432, $tmp3433, param1, $tmp3434, $tmp3435);
$fn3440 $tmp3439 = ($fn3440) $tmp3431->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3441 = $tmp3439($tmp3431, $tmp3432);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3435));
// unreffing REF($572:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3432));
// unreffing REF($569:org.frostlang.frostc.IR.Statement)
goto block38;
block40:;
// line 733
frost$core$Bit $tmp3442 = frost$core$Bit$init$builtin_bit(false);
bool $tmp3443 = $tmp3442.value;
if ($tmp3443) goto block41; else goto block42;
block42:;
frost$core$Int64 $tmp3444 = (frost$core$Int64) {733};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3445, $tmp3444);
abort(); // unreachable
block41:;
goto block38;
block38:;
// line 736
org$frostlang$frostc$Compiler$leaveTryScope(param0);
// line 737
org$frostlang$frostc$IR* $tmp3446 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3447 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3448 = (frost$core$Int64) {1};
org$frostlang$frostc$Pair* $tmp3449 = *(&local0);
frost$core$Bit $tmp3450 = frost$core$Bit$init$builtin_bit($tmp3449 != NULL);
bool $tmp3451 = $tmp3450.value;
if ($tmp3451) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp3452 = (frost$core$Int64) {737};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3453, $tmp3452, &$s3454);
abort(); // unreachable
block43:;
frost$core$Object** $tmp3455 = &$tmp3449->first;
frost$core$Object* $tmp3456 = *$tmp3455;
frost$core$Bit $tmp3457 = frost$core$Bit$init$builtin_bit(($tmp3456 != NULL ? ((org$frostlang$frostc$IR$Block$ID$nullable) { ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp3456)->value, true }) : (org$frostlang$frostc$IR$Block$ID$nullable) { .nonnull = 0 }).nonnull);
bool $tmp3458 = $tmp3457.value;
if ($tmp3458) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp3459 = (frost$core$Int64) {737};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3460, $tmp3459, &$s3461);
abort(); // unreachable
block45:;
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp3447, $tmp3448, param1, ((org$frostlang$frostc$IR$Block$ID) ($tmp3456 != NULL ? ((org$frostlang$frostc$IR$Block$ID$nullable) { ((org$frostlang$frostc$IR$Block$ID$wrapper*) $tmp3456)->value, true }) : (org$frostlang$frostc$IR$Block$ID$nullable) { .nonnull = 0 }).value));
$fn3463 $tmp3462 = ($fn3463) $tmp3446->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3464 = $tmp3462($tmp3446, $tmp3447);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3447));
// unreffing REF($599:org.frostlang.frostc.IR.Statement)
// line 738
org$frostlang$frostc$IR* $tmp3465 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp3466 = *(&local13);
$fn3468 $tmp3467 = ($fn3468) $tmp3465->$class->vtable[4];
$tmp3467($tmp3465, $tmp3466);
// line 739
org$frostlang$frostc$IR* $tmp3469 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3470 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3471 = (frost$core$Int64) {4};
org$frostlang$frostc$ClassDecl* $tmp3472 = *(&local10);
frost$core$Bit $tmp3473 = frost$core$Bit$init$builtin_bit($tmp3472 != NULL);
bool $tmp3474 = $tmp3473.value;
if ($tmp3474) goto block47; else goto block48;
block48:;
frost$core$Int64 $tmp3475 = (frost$core$Int64) {740};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3476, $tmp3475, &$s3477);
abort(); // unreachable
block47:;
frost$collections$Array** $tmp3478 = &$tmp3472->choiceCases;
frost$collections$Array* $tmp3479 = *$tmp3478;
frost$core$Int64 $tmp3480 = (frost$core$Int64) {0};
frost$core$Object* $tmp3481 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3479, $tmp3480);
frost$core$Int64 $tmp3482 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64($tmp3470, $tmp3471, param1, param2, ((org$frostlang$frostc$ChoiceCase*) $tmp3481), $tmp3482);
$fn3484 $tmp3483 = ($fn3484) $tmp3469->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3485 = $tmp3483($tmp3469, $tmp3470);
*(&local19) = $tmp3485;
frost$core$Frost$unref$frost$core$Object$Q($tmp3481);
// unreffing REF($649:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3470));
// unreffing REF($634:org.frostlang.frostc.IR.Statement)
// line 741
org$frostlang$frostc$IR* $tmp3486 = *(&local1);
org$frostlang$frostc$IR$Statement* $tmp3487 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp3488 = (frost$core$Int64) {13};
org$frostlang$frostc$IR$Value* $tmp3489 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3490 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3491 = *(&local19);
org$frostlang$frostc$Type* $tmp3492 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3489, $tmp3490, $tmp3491, $tmp3492);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp3487, $tmp3488, param1, $tmp3489);
$fn3494 $tmp3493 = ($fn3494) $tmp3486->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp3495 = $tmp3493($tmp3486, $tmp3487);
*(&local20) = $tmp3495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3492));
// unreffing REF($669:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3489));
// unreffing REF($666:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3487));
// unreffing REF($664:org.frostlang.frostc.IR.Statement)
// line 743
org$frostlang$frostc$IR$Value* $tmp3496 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp3497 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp3498 = *(&local20);
org$frostlang$frostc$Type* $tmp3499 = org$frostlang$frostc$Type$Any$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp3496, $tmp3497, $tmp3498, $tmp3499);
org$frostlang$frostc$Type* $tmp3500 = *(&local2);
org$frostlang$frostc$FixedArray** $tmp3501 = &$tmp3500->subtypes;
org$frostlang$frostc$FixedArray* $tmp3502 = *$tmp3501;
frost$core$Bit $tmp3503 = frost$core$Bit$init$builtin_bit($tmp3502 != NULL);
bool $tmp3504 = $tmp3503.value;
if ($tmp3504) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp3505 = (frost$core$Int64) {744};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3506, $tmp3505, &$s3507);
abort(); // unreachable
block49:;
frost$core$Int64 $tmp3508 = (frost$core$Int64) {1};
frost$core$Object* $tmp3509 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp3502, $tmp3508);
org$frostlang$frostc$IR$Value* $tmp3510 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3496, ((org$frostlang$frostc$Type*) $tmp3509));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
org$frostlang$frostc$IR$Value* $tmp3511 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3511));
*(&local21) = $tmp3510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3510));
// unreffing REF($706:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp3509);
// unreffing REF($704:org.frostlang.frostc.FixedArray.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3499));
// unreffing REF($688:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3496));
// unreffing REF($685:org.frostlang.frostc.IR.Value)
// line 745
org$frostlang$frostc$IR$Value* $tmp3512 = *(&local21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3512));
org$frostlang$frostc$IR$Value* $tmp3513 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3513));
// unreffing successCast
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3514 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3514));
// unreffing errorRef
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp3515 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3515));
// unreffing rawValue
*(&local11) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$ClassDecl* $tmp3516 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3516));
// unreffing cl
*(&local10) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp3517 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3517));
// unreffing nullableError
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3518 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3518));
// unreffing errorType
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3519 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3519));
// unreffing type
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3520 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3520));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Pair* $tmp3521 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3521));
// unreffing tryScope
*(&local0) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp3512;
block20:;
goto block4;
block4:;
// line 747
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type* $tmp3522 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3522));
// unreffing nullableError
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3523 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3523));
// unreffing errorType
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3524 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3524));
// unreffing type
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp3525 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3525));
// unreffing ir
*(&local1) = ((org$frostlang$frostc$IR*) NULL);
org$frostlang$frostc$Pair* $tmp3526 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3526));
// unreffing tryScope
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
// line 755
org$frostlang$frostc$IR** $tmp3527 = &param0->ir;
org$frostlang$frostc$IR* $tmp3528 = *$tmp3527;
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3528));
org$frostlang$frostc$IR* $tmp3529 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3529));
*(&local5) = $tmp3528;
// line 757
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodRef* $tmp3530 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3530));
*(&local6) = param3;
// line 758
org$frostlang$frostc$MethodRef* $tmp3531 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3532 = &$tmp3531->value;
org$frostlang$frostc$MethodDecl* $tmp3533 = *$tmp3532;
org$frostlang$frostc$MethodDecl$Kind* $tmp3534 = &$tmp3533->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3535 = *$tmp3534;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3536;
$tmp3536 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3536->value = $tmp3535;
frost$core$Int64 $tmp3537 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3538 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3537);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3539;
$tmp3539 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3539->value = $tmp3538;
ITable* $tmp3540 = ((frost$core$Equatable*) $tmp3536)->$class->itable;
while ($tmp3540->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3540 = $tmp3540->next;
}
$fn3542 $tmp3541 = $tmp3540->methods[0];
frost$core$Bit $tmp3543 = $tmp3541(((frost$core$Equatable*) $tmp3536), ((frost$core$Equatable*) $tmp3539));
bool $tmp3544 = $tmp3543.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3539)));
// unreffing REF($88:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3536)));
// unreffing REF($84:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp3544) goto block16; else goto block17;
block16:;
// line 759
frost$core$Bit $tmp3545 = frost$core$Bit$init$builtin_bit(false);
*(&local7) = $tmp3545;
// line 760
frost$core$Bit $tmp3546 = frost$core$Bit$init$builtin_bit(false);
*(&local8) = $tmp3546;
// line 761
frost$core$Bit $tmp3547 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3548 = $tmp3547.value;
if ($tmp3548) goto block18; else goto block20;
block18:;
// line 762
frost$core$Bit $tmp3549 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3550 = $tmp3549.value;
if ($tmp3550) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp3551 = (frost$core$Int64) {762};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3552, $tmp3551, &$s3553);
abort(); // unreachable
block21:;
frost$core$Int64* $tmp3554 = &param2->$rawValue;
frost$core$Int64 $tmp3555 = *$tmp3554;
frost$core$Int64 $tmp3556 = (frost$core$Int64) {5};
frost$core$Bit $tmp3557 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3555, $tmp3556);
bool $tmp3558 = $tmp3557.value;
if ($tmp3558) goto block24; else goto block25;
block24:;
frost$core$Int64* $tmp3559 = (frost$core$Int64*) (param2->$data + 0);
frost$core$Int64 $tmp3560 = *$tmp3559;
*(&local9) = $tmp3560;
org$frostlang$frostc$Type** $tmp3561 = (org$frostlang$frostc$Type**) (param2->$data + 8);
org$frostlang$frostc$Type* $tmp3562 = *$tmp3561;
// line 764
frost$core$Int64 $tmp3563 = *(&local9);
frost$core$Int64 $tmp3564 = (frost$core$Int64) {0};
frost$core$Bit $tmp3565 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3563, $tmp3564);
bool $tmp3566 = $tmp3565.value;
if ($tmp3566) goto block26; else goto block27;
block26:;
frost$core$Bit $tmp3567 = org$frostlang$frostc$Compiler$isClassContext$R$frost$core$Bit(param0);
frost$core$Bit $tmp3568 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3567);
*(&local10) = $tmp3568;
goto block28;
block27:;
*(&local10) = $tmp3565;
goto block28;
block28:;
frost$core$Bit $tmp3569 = *(&local10);
*(&local8) = $tmp3569;
// line 765
frost$core$Bit $tmp3570 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3570;
goto block23;
block25:;
frost$core$Int64 $tmp3571 = (frost$core$Int64) {7};
frost$core$Bit $tmp3572 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3555, $tmp3571);
bool $tmp3573 = $tmp3572.value;
if ($tmp3573) goto block29; else goto block30;
block29:;
org$frostlang$frostc$IR$Statement$ID* $tmp3574 = (org$frostlang$frostc$IR$Statement$ID*) (param2->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp3575 = *$tmp3574;
*(&local11) = $tmp3575;
org$frostlang$frostc$Type** $tmp3576 = (org$frostlang$frostc$Type**) (param2->$data + 8);
org$frostlang$frostc$Type* $tmp3577 = *$tmp3576;
// line 768
org$frostlang$frostc$IR$Statement$ID $tmp3578 = *(&local11);
org$frostlang$frostc$IR* $tmp3579 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3580 = &$tmp3579->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3581 = *$tmp3580;
frost$collections$Array** $tmp3582 = &$tmp3581->ids;
frost$collections$Array* $tmp3583 = *$tmp3582;
org$frostlang$frostc$IR* $tmp3584 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3585 = &$tmp3584->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3586 = *$tmp3585;
frost$collections$Array** $tmp3587 = &$tmp3586->ids;
frost$collections$Array* $tmp3588 = *$tmp3587;
ITable* $tmp3589 = ((frost$collections$CollectionView*) $tmp3588)->$class->itable;
while ($tmp3589->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3589 = $tmp3589->next;
}
$fn3591 $tmp3590 = $tmp3589->methods[0];
frost$core$Int64 $tmp3592 = $tmp3590(((frost$collections$CollectionView*) $tmp3588));
frost$core$Int64 $tmp3593 = (frost$core$Int64) {1};
int64_t $tmp3594 = $tmp3592.value;
int64_t $tmp3595 = $tmp3593.value;
int64_t $tmp3596 = $tmp3594 - $tmp3595;
frost$core$Int64 $tmp3597 = (frost$core$Int64) {$tmp3596};
frost$core$Object* $tmp3598 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3583, $tmp3597);
frost$core$Bit $tmp3599 = org$frostlang$frostc$IR$Statement$ID$$EQ$org$frostlang$frostc$IR$Statement$ID$R$frost$core$Bit($tmp3578, ((org$frostlang$frostc$IR$Statement$ID$wrapper*) $tmp3598)->value);
bool $tmp3600 = $tmp3599.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3598);
// unreffing REF($178:frost.collections.Array.T)
if ($tmp3600) goto block31; else goto block32;
block31:;
// line 769
org$frostlang$frostc$IR* $tmp3601 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3602 = &$tmp3601->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3603 = *$tmp3602;
frost$collections$Array** $tmp3604 = &$tmp3603->statements;
frost$collections$Array* $tmp3605 = *$tmp3604;
org$frostlang$frostc$IR* $tmp3606 = *(&local5);
org$frostlang$frostc$IR$Block** $tmp3607 = &$tmp3606->currentBlock;
org$frostlang$frostc$IR$Block* $tmp3608 = *$tmp3607;
frost$collections$Array** $tmp3609 = &$tmp3608->statements;
frost$collections$Array* $tmp3610 = *$tmp3609;
ITable* $tmp3611 = ((frost$collections$CollectionView*) $tmp3610)->$class->itable;
while ($tmp3611->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3611 = $tmp3611->next;
}
$fn3613 $tmp3612 = $tmp3611->methods[0];
frost$core$Int64 $tmp3614 = $tmp3612(((frost$collections$CollectionView*) $tmp3610));
frost$core$Int64 $tmp3615 = (frost$core$Int64) {1};
int64_t $tmp3616 = $tmp3614.value;
int64_t $tmp3617 = $tmp3615.value;
int64_t $tmp3618 = $tmp3616 - $tmp3617;
frost$core$Int64 $tmp3619 = (frost$core$Int64) {$tmp3618};
frost$core$Object* $tmp3620 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp3605, $tmp3619);
*(&local12) = ((org$frostlang$frostc$IR$Statement*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Statement*) $tmp3620)));
org$frostlang$frostc$IR$Statement* $tmp3621 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3621));
*(&local12) = ((org$frostlang$frostc$IR$Statement*) $tmp3620);
frost$core$Frost$unref$frost$core$Object$Q($tmp3620);
// unreffing REF($206:frost.collections.Array.T)
// line 770
org$frostlang$frostc$IR$Statement* $tmp3622 = *(&local12);
frost$core$Int64* $tmp3623 = &$tmp3622->$rawValue;
frost$core$Int64 $tmp3624 = *$tmp3623;
frost$core$Int64 $tmp3625 = (frost$core$Int64) {6};
frost$core$Bit $tmp3626 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3624, $tmp3625);
bool $tmp3627 = $tmp3626.value;
if ($tmp3627) goto block34; else goto block33;
block34:;
// line 772
frost$core$Bit $tmp3628 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3628;
goto block33;
block33:;
org$frostlang$frostc$IR$Statement* $tmp3629 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3629));
// unreffing last
*(&local12) = ((org$frostlang$frostc$IR$Statement*) NULL);
goto block32;
block32:;
goto block23;
block30:;
frost$core$Int64 $tmp3630 = (frost$core$Int64) {13};
frost$core$Bit $tmp3631 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3555, $tmp3630);
bool $tmp3632 = $tmp3631.value;
if ($tmp3632) goto block35; else goto block23;
block35:;
// line 778
frost$core$Bit $tmp3633 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp3633;
// line 779
frost$core$Bit $tmp3634 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3634;
goto block23;
block23:;
goto block19;
block20:;
// line 1
// line 784
org$frostlang$frostc$MethodRef* $tmp3635 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3636 = &$tmp3635->value;
org$frostlang$frostc$MethodDecl* $tmp3637 = *$tmp3636;
frost$core$Weak** $tmp3638 = &$tmp3637->owner;
frost$core$Weak* $tmp3639 = *$tmp3638;
frost$core$Object* $tmp3640 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3639);
frost$core$Bit $tmp3641 = org$frostlang$frostc$Compiler$isValue$org$frostlang$frostc$ClassDecl$Q$R$frost$core$Bit(param0, ((org$frostlang$frostc$ClassDecl*) $tmp3640));
bool $tmp3642 = $tmp3641.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3640);
// unreffing REF($257:frost.core.Weak.T)
if ($tmp3642) goto block36; else goto block38;
block36:;
// line 785
frost$core$Bit $tmp3643 = frost$core$Bit$init$builtin_bit(false);
*(&local8) = $tmp3643;
// line 786
frost$core$Bit $tmp3644 = frost$core$Bit$init$builtin_bit(true);
*(&local7) = $tmp3644;
goto block37;
block38:;
// line 1
// line 789
frost$core$Bit $tmp3645 = org$frostlang$frostc$Compiler$isClassContext$R$frost$core$Bit(param0);
frost$core$Bit $tmp3646 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3645);
*(&local8) = $tmp3646;
// line 790
frost$core$Bit $tmp3647 = *(&local8);
*(&local7) = $tmp3647;
goto block37;
block37:;
goto block19;
block19:;
// line 793
frost$core$Bit $tmp3648 = *(&local8);
bool $tmp3649 = $tmp3648.value;
if ($tmp3649) goto block41; else goto block42;
block41:;
frost$collections$Stack** $tmp3650 = &param0->currentMethod;
frost$collections$Stack* $tmp3651 = *$tmp3650;
frost$core$Int64 $tmp3652 = (frost$core$Int64) {0};
frost$core$Object* $tmp3653 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3651, $tmp3652);
org$frostlang$frostc$MethodDecl$Kind* $tmp3654 = &((org$frostlang$frostc$MethodDecl*) $tmp3653)->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp3655 = *$tmp3654;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3656;
$tmp3656 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3656->value = $tmp3655;
frost$core$Int64 $tmp3657 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp3658 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp3657);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp3659;
$tmp3659 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp3659->value = $tmp3658;
ITable* $tmp3660 = ((frost$core$Equatable*) $tmp3656)->$class->itable;
while ($tmp3660->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3660 = $tmp3660->next;
}
$fn3662 $tmp3661 = $tmp3660->methods[1];
frost$core$Bit $tmp3663 = $tmp3661(((frost$core$Equatable*) $tmp3656), ((frost$core$Equatable*) $tmp3659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3659)));
// unreffing REF($299:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp3656)));
// unreffing REF($295:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
frost$core$Frost$unref$frost$core$Object$Q($tmp3653);
// unreffing REF($291:frost.collections.Stack.T)
*(&local13) = $tmp3663;
goto block43;
block42:;
*(&local13) = $tmp3648;
goto block43;
block43:;
frost$core$Bit $tmp3664 = *(&local13);
bool $tmp3665 = $tmp3664.value;
if ($tmp3665) goto block39; else goto block40;
block39:;
// line 794
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s3666);
// line 795
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3667 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3667));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3668 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3668));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block40:;
// line 797
frost$core$Bit $tmp3669 = *(&local7);
frost$core$Bit $tmp3670 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3669);
bool $tmp3671 = $tmp3670.value;
if ($tmp3671) goto block44; else goto block45;
block44:;
// line 798
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s3672);
// line 799
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3673 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3673));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3674 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3674));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block45:;
goto block17;
block17:;
// line 802
ITable* $tmp3675 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3675->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3675 = $tmp3675->next;
}
$fn3677 $tmp3676 = $tmp3675->methods[0];
frost$core$Int64 $tmp3678 = $tmp3676(((frost$collections$CollectionView*) param4));
org$frostlang$frostc$MethodRef* $tmp3679 = *(&local6);
frost$core$Int64 $tmp3680 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3679);
int64_t $tmp3681 = $tmp3678.value;
int64_t $tmp3682 = $tmp3680.value;
bool $tmp3683 = $tmp3681 != $tmp3682;
frost$core$Bit $tmp3684 = (frost$core$Bit) {$tmp3683};
bool $tmp3685 = $tmp3684.value;
if ($tmp3685) goto block46; else goto block47;
block46:;
// line 803
org$frostlang$frostc$MethodRef* $tmp3686 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3687 = &$tmp3686->value;
org$frostlang$frostc$MethodDecl* $tmp3688 = *$tmp3687;
frost$core$String* $tmp3689 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3688);
frost$core$String* $tmp3690 = frost$core$String$get_asString$R$frost$core$String($tmp3689);
frost$core$String* $tmp3691 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3690, &$s3692);
org$frostlang$frostc$MethodRef* $tmp3693 = *(&local6);
frost$core$Int64 $tmp3694 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3693);
frost$core$Int64$wrapper* $tmp3695;
$tmp3695 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3695->value = $tmp3694;
frost$core$String* $tmp3696 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3691, ((frost$core$Object*) $tmp3695));
frost$core$String* $tmp3697 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3696, &$s3698);
org$frostlang$frostc$MethodRef* $tmp3699 = *(&local6);
frost$core$Int64 $tmp3700 = org$frostlang$frostc$MethodRef$get_parameterCount$R$frost$core$Int64($tmp3699);
frost$core$Int64 $tmp3701 = (frost$core$Int64) {1};
frost$core$Bit $tmp3702 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3700, $tmp3701);
frost$core$Bit$wrapper* $tmp3703;
$tmp3703 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp3703->value = $tmp3702;
ITable* $tmp3704 = ((frost$core$Formattable*) $tmp3703)->$class->itable;
while ($tmp3704->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp3704 = $tmp3704->next;
}
$fn3706 $tmp3705 = $tmp3704->methods[0];
frost$core$String* $tmp3707 = $tmp3705(((frost$core$Formattable*) $tmp3703), &$s3708);
frost$core$String* $tmp3709 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3710, $tmp3707);
frost$core$String* $tmp3711 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3709, &$s3712);
ITable* $tmp3713 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3713->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3713 = $tmp3713->next;
}
$fn3715 $tmp3714 = $tmp3713->methods[0];
frost$core$Int64 $tmp3716 = $tmp3714(((frost$collections$CollectionView*) param4));
frost$core$Int64$wrapper* $tmp3717;
$tmp3717 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp3717->value = $tmp3716;
frost$core$String* $tmp3718 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp3711, ((frost$core$Object*) $tmp3717));
frost$core$String* $tmp3719 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3718, &$s3720);
frost$core$String* $tmp3721 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3697, $tmp3719);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3721);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3721));
// unreffing REF($397:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3719));
// unreffing REF($396:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3718));
// unreffing REF($395:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3717));
// unreffing REF($394:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3711));
// unreffing REF($390:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3709));
// unreffing REF($389:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3707));
// unreffing REF($388:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Formattable*) $tmp3703)));
// unreffing REF($386:frost.core.Formattable)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3697));
// unreffing REF($381:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3696));
// unreffing REF($380:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3695));
// unreffing REF($379:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3691));
// unreffing REF($376:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3690));
// unreffing REF($375:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3689));
// unreffing REF($374:frost.core.String)
// line 805
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3722 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3722));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3723 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3723));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block47:;
// line 807
frost$core$Bit $tmp3724 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3725 = $tmp3724.value;
if ($tmp3725) goto block50; else goto block51;
block50:;
org$frostlang$frostc$MethodRef* $tmp3726 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3727 = &$tmp3726->value;
org$frostlang$frostc$MethodDecl* $tmp3728 = *$tmp3727;
org$frostlang$frostc$Annotations** $tmp3729 = &$tmp3728->annotations;
org$frostlang$frostc$Annotations* $tmp3730 = *$tmp3729;
frost$core$Bit $tmp3731 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3730);
*(&local14) = $tmp3731;
goto block52;
block51:;
*(&local14) = $tmp3724;
goto block52;
block52:;
frost$core$Bit $tmp3732 = *(&local14);
bool $tmp3733 = $tmp3732.value;
if ($tmp3733) goto block48; else goto block49;
block48:;
// line 808
frost$core$Bit $tmp3734 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3735 = $tmp3734.value;
if ($tmp3735) goto block53; else goto block54;
block54:;
frost$core$Int64 $tmp3736 = (frost$core$Int64) {808};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3737, $tmp3736, &$s3738);
abort(); // unreachable
block53:;
frost$core$Int64* $tmp3739 = &param2->$rawValue;
frost$core$Int64 $tmp3740 = *$tmp3739;
frost$core$Int64 $tmp3741 = (frost$core$Int64) {14};
frost$core$Bit $tmp3742 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3740, $tmp3741);
bool $tmp3743 = $tmp3742.value;
if ($tmp3743) goto block56; else goto block57;
block56:;
goto block55;
block57:;
// line 813
org$frostlang$frostc$MethodRef* $tmp3744 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3745 = &$tmp3744->value;
org$frostlang$frostc$MethodDecl* $tmp3746 = *$tmp3745;
frost$core$String* $tmp3747 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp3746);
frost$core$String* $tmp3748 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3749, $tmp3747);
frost$core$String* $tmp3750 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3748, &$s3751);
frost$core$String* $tmp3752 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp3750, &$s3753);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp3752);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3752));
// unreffing REF($497:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3750));
// unreffing REF($496:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3748));
// unreffing REF($495:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3747));
// unreffing REF($494:frost.core.String)
goto block55;
block55:;
goto block49;
block49:;
// line 818
org$frostlang$frostc$MethodRef* $tmp3754 = *(&local6);
org$frostlang$frostc$Pair* $tmp3755 = org$frostlang$frostc$expression$Call$compileIntrinsic$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$Pair$LTfrost$core$Bit$Corg$frostlang$frostc$IR$Value$Q$GT(param0, param1, param2, $tmp3754, param4);
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3755));
org$frostlang$frostc$Pair* $tmp3756 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3756));
*(&local15) = $tmp3755;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3755));
// unreffing REF($515:org.frostlang.frostc.Pair<frost.core.Bit, org.frostlang.frostc.IR.Value?>)
// line 819
org$frostlang$frostc$Pair* $tmp3757 = *(&local15);
frost$core$Object** $tmp3758 = &$tmp3757->first;
frost$core$Object* $tmp3759 = *$tmp3758;
bool $tmp3760 = ((frost$core$Bit$wrapper*) $tmp3759)->value.value;
if ($tmp3760) goto block58; else goto block59;
block58:;
// line 820
org$frostlang$frostc$Pair* $tmp3761 = *(&local15);
frost$core$Object** $tmp3762 = &$tmp3761->second;
frost$core$Object* $tmp3763 = *$tmp3762;
frost$core$Bit $tmp3764 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$IR$Value*) $tmp3763) != NULL);
bool $tmp3765 = $tmp3764.value;
if ($tmp3765) goto block60; else goto block61;
block60:;
// line 821
org$frostlang$frostc$Pair* $tmp3766 = *(&local15);
frost$core$Object** $tmp3767 = &$tmp3766->second;
frost$core$Object* $tmp3768 = *$tmp3767;
org$frostlang$frostc$IR$Value* $tmp3769 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) $tmp3768), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3769));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3769));
// unreffing REF($550:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$Pair* $tmp3770 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3770));
// unreffing intrinsic
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3771 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3771));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3772 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3772));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = $tmp3769;
goto block1;
block61:;
// line 823
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Pair* $tmp3773 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3773));
// unreffing intrinsic
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3774 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3774));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3775 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3775));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block59:;
// line 825
org$frostlang$frostc$MethodRef* $tmp3776 = *(&local6);
org$frostlang$frostc$MethodRef* $tmp3777 = org$frostlang$frostc$expression$Call$performTypeInference$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$R$org$frostlang$frostc$MethodRef$Q(param0, $tmp3776, param4);
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
org$frostlang$frostc$MethodRef* $tmp3778 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3778));
*(&local16) = $tmp3777;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3777));
// unreffing REF($595:org.frostlang.frostc.MethodRef?)
// line 826
org$frostlang$frostc$MethodRef* $tmp3779 = *(&local16);
frost$core$Bit $tmp3780 = frost$core$Bit$init$builtin_bit($tmp3779 == NULL);
bool $tmp3781 = $tmp3780.value;
if ($tmp3781) goto block62; else goto block63;
block62:;
// line 827
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$MethodRef* $tmp3782 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3782));
// unreffing inferred
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3783 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3783));
// unreffing intrinsic
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3784 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3784));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3785 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3785));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block63:;
// line 829
org$frostlang$frostc$MethodRef* $tmp3786 = *(&local16);
frost$core$Bit $tmp3787 = frost$core$Bit$init$builtin_bit($tmp3786 != NULL);
bool $tmp3788 = $tmp3787.value;
if ($tmp3788) goto block64; else goto block65;
block65:;
frost$core$Int64 $tmp3789 = (frost$core$Int64) {829};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3790, $tmp3789, &$s3791);
abort(); // unreachable
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3786));
org$frostlang$frostc$MethodRef* $tmp3792 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3792));
*(&local6) = $tmp3786;
// line 830
// line 831
frost$core$Bit $tmp3793 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3794 = $tmp3793.value;
if ($tmp3794) goto block66; else goto block68;
block66:;
// line 832
frost$core$Bit $tmp3795 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3796 = $tmp3795.value;
if ($tmp3796) goto block69; else goto block70;
block70:;
frost$core$Int64 $tmp3797 = (frost$core$Int64) {832};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3798, $tmp3797, &$s3799);
abort(); // unreachable
block69:;
frost$core$Int64* $tmp3800 = &param2->$rawValue;
frost$core$Int64 $tmp3801 = *$tmp3800;
frost$core$Int64 $tmp3802 = (frost$core$Int64) {13};
frost$core$Bit $tmp3803 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3801, $tmp3802);
bool $tmp3804 = $tmp3803.value;
if ($tmp3804) goto block72; else goto block73;
block72:;
// line 834
frost$core$Bit $tmp3805 = frost$core$Bit$init$builtin_bit(true);
*(&local17) = $tmp3805;
goto block71;
block73:;
// line 837
frost$core$Bit $tmp3806 = frost$core$Bit$init$builtin_bit(false);
*(&local17) = $tmp3806;
goto block71;
block71:;
goto block67;
block68:;
// line 1
// line 842
frost$core$Bit $tmp3807 = frost$core$Bit$init$builtin_bit(false);
*(&local17) = $tmp3807;
goto block67;
block67:;
// line 846
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
// line 847
org$frostlang$frostc$MethodRef* $tmp3808 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3809 = &$tmp3808->value;
org$frostlang$frostc$MethodDecl* $tmp3810 = *$tmp3809;
frost$core$Bit $tmp3811 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit($tmp3810);
bool $tmp3812 = $tmp3811.value;
if ($tmp3812) goto block74; else goto block76;
block74:;
// line 848
org$frostlang$frostc$MethodRef* $tmp3813 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3814 = &$tmp3813->value;
org$frostlang$frostc$MethodDecl* $tmp3815 = *$tmp3814;
org$frostlang$frostc$Type* $tmp3816 = org$frostlang$frostc$Compiler$inheritedTypeWithSelf$org$frostlang$frostc$MethodDecl$R$org$frostlang$frostc$Type(param0, $tmp3815);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3816));
org$frostlang$frostc$Type* $tmp3817 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3817));
*(&local18) = $tmp3816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3816));
// unreffing REF($701:org.frostlang.frostc.Type)
goto block75;
block76:;
// line 1
// line 851
org$frostlang$frostc$MethodRef* $tmp3818 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3819 = &$tmp3818->value;
org$frostlang$frostc$MethodDecl* $tmp3820 = *$tmp3819;
org$frostlang$frostc$MethodRef* $tmp3821 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3822 = &$tmp3821->value;
org$frostlang$frostc$MethodDecl* $tmp3823 = *$tmp3822;
frost$core$Weak** $tmp3824 = &$tmp3823->owner;
frost$core$Weak* $tmp3825 = *$tmp3824;
frost$core$Object* $tmp3826 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3825);
org$frostlang$frostc$Type** $tmp3827 = &((org$frostlang$frostc$ClassDecl*) $tmp3826)->type;
org$frostlang$frostc$Type* $tmp3828 = *$tmp3827;
frost$core$Bit $tmp3829 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp3830 = org$frostlang$frostc$Compiler$declaredTypeWithSelf$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type$frost$core$Bit$R$org$frostlang$frostc$Type(param0, $tmp3820, $tmp3828, $tmp3829);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
org$frostlang$frostc$Type* $tmp3831 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3831));
*(&local18) = $tmp3830;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3830));
// unreffing REF($728:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp3826);
// unreffing REF($723:frost.core.Weak.T)
goto block75;
block75:;
// line 853
org$frostlang$frostc$Type* $tmp3832 = *(&local18);
frost$core$Bit $tmp3833 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp3832);
bool $tmp3834 = $tmp3833.value;
if ($tmp3834) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp3835 = (frost$core$Int64) {853};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3836, $tmp3835);
abort(); // unreachable
block77:;
// line 854
org$frostlang$frostc$MethodRef* $tmp3837 = *(&local6);
org$frostlang$frostc$Type** $tmp3838 = &$tmp3837->effectiveType;
org$frostlang$frostc$Type* $tmp3839 = *$tmp3838;
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3839));
org$frostlang$frostc$Type* $tmp3840 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3840));
*(&local19) = $tmp3839;
// line 855
org$frostlang$frostc$Type* $tmp3841 = *(&local19);
frost$core$Bit $tmp3842 = org$frostlang$frostc$Type$get_isMethod$R$frost$core$Bit($tmp3841);
bool $tmp3843 = $tmp3842.value;
if ($tmp3843) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp3844 = (frost$core$Int64) {855};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s3845, $tmp3844);
abort(); // unreachable
block79:;
// line 856
frost$collections$Array* $tmp3846 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp3847 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3847->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3847 = $tmp3847->next;
}
$fn3849 $tmp3848 = $tmp3847->methods[0];
frost$core$Int64 $tmp3850 = $tmp3848(((frost$collections$CollectionView*) param4));
frost$collections$Array$init$frost$core$Int64($tmp3846, $tmp3850);
*(&local20) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3846));
frost$collections$Array* $tmp3851 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3851));
*(&local20) = $tmp3846;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3846));
// unreffing REF($770:frost.collections.Array<org.frostlang.frostc.IR.Value>)
// line 857
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 858
frost$core$Bit $tmp3852 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3853 = $tmp3852.value;
if ($tmp3853) goto block81; else goto block83;
block81:;
// line 859
frost$core$Bit $tmp3854 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3855 = $tmp3854.value;
if ($tmp3855) goto block84; else goto block85;
block85:;
frost$core$Int64 $tmp3856 = (frost$core$Int64) {859};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3857, $tmp3856, &$s3858);
abort(); // unreachable
block84:;
frost$core$Int64* $tmp3859 = &param2->$rawValue;
frost$core$Int64 $tmp3860 = *$tmp3859;
frost$core$Int64 $tmp3861 = (frost$core$Int64) {14};
frost$core$Bit $tmp3862 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3860, $tmp3861);
bool $tmp3863 = $tmp3862.value;
if ($tmp3863) goto block87; else goto block88;
block87:;
goto block86;
block88:;
// line 864
org$frostlang$frostc$MethodRef* $tmp3864 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3865 = &$tmp3864->value;
org$frostlang$frostc$MethodDecl* $tmp3866 = *$tmp3865;
frost$core$Weak** $tmp3867 = &$tmp3866->owner;
frost$core$Weak* $tmp3868 = *$tmp3867;
frost$core$Object* $tmp3869 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3868);
frost$core$String** $tmp3870 = &((org$frostlang$frostc$ClassDecl*) $tmp3869)->name;
frost$core$String* $tmp3871 = *$tmp3870;
frost$core$Bit $tmp3872 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp3871, &$s3873);
bool $tmp3874 = $tmp3872.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp3869);
// unreffing REF($816:frost.core.Weak.T)
if ($tmp3874) goto block89; else goto block91;
block89:;
// line 865
org$frostlang$frostc$Type* $tmp3875 = *(&local18);
frost$core$Int64 $tmp3876 = (frost$core$Int64) {0};
org$frostlang$frostc$Type* $tmp3877 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp3875, $tmp3876);
org$frostlang$frostc$IR$Value* $tmp3878 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp3877);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3878));
org$frostlang$frostc$IR$Value* $tmp3879 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3879));
*(&local21) = $tmp3878;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3878));
// unreffing REF($830:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3877));
// unreffing REF($829:org.frostlang.frostc.Type)
goto block90;
block91:;
// line 868
frost$core$Bit $tmp3880 = *(&local17);
bool $tmp3881 = $tmp3880.value;
if ($tmp3881) goto block92; else goto block94;
block92:;
// line 869
frost$core$Bit $tmp3882 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp3883 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3882);
org$frostlang$frostc$MethodRef* $tmp3884 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3885 = &$tmp3884->value;
org$frostlang$frostc$MethodDecl* $tmp3886 = *$tmp3885;
frost$core$Weak** $tmp3887 = &$tmp3886->owner;
frost$core$Weak* $tmp3888 = *$tmp3887;
frost$core$Object* $tmp3889 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3888);
org$frostlang$frostc$Type** $tmp3890 = &((org$frostlang$frostc$ClassDecl*) $tmp3889)->type;
org$frostlang$frostc$Type* $tmp3891 = *$tmp3890;
org$frostlang$frostc$IR$Value* $tmp3892 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3883, $tmp3891);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3892));
org$frostlang$frostc$IR$Value* $tmp3893 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3893));
*(&local21) = $tmp3892;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3892));
// unreffing REF($861:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp3889);
// unreffing REF($857:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3883));
// unreffing REF($850:org.frostlang.frostc.IR.Value?)
goto block93;
block94:;
// line 1
// line 874
org$frostlang$frostc$MethodRef* $tmp3894 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3895 = &$tmp3894->value;
org$frostlang$frostc$MethodDecl* $tmp3896 = *$tmp3895;
frost$core$Weak** $tmp3897 = &$tmp3896->owner;
frost$core$Weak* $tmp3898 = *$tmp3897;
frost$core$Object* $tmp3899 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3898);
org$frostlang$frostc$Type** $tmp3900 = &((org$frostlang$frostc$ClassDecl*) $tmp3899)->type;
org$frostlang$frostc$Type* $tmp3901 = *$tmp3900;
org$frostlang$frostc$IR$Value* $tmp3902 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp3901);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3902));
org$frostlang$frostc$IR$Value* $tmp3903 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3903));
*(&local21) = $tmp3902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3902));
// unreffing REF($890:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp3899);
// unreffing REF($886:frost.core.Weak.T)
goto block93;
block93:;
goto block90;
block90:;
// line 876
org$frostlang$frostc$IR$Value* $tmp3904 = *(&local21);
frost$core$Bit $tmp3905 = frost$core$Bit$init$builtin_bit($tmp3904 == NULL);
bool $tmp3906 = $tmp3905.value;
if ($tmp3906) goto block95; else goto block96;
block95:;
// line 877
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3907 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3907));
// unreffing finalTarget
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3908 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3908));
// unreffing finalArgs
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3909 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3909));
// unreffing effectiveType
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3910 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3910));
// unreffing actualType
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3911 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3911));
// unreffing inferred
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3912 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3912));
// unreffing intrinsic
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3913 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3913));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3914 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3914));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block96:;
// line 879
frost$collections$Array* $tmp3915 = *(&local20);
org$frostlang$frostc$IR$Value* $tmp3916 = *(&local21);
frost$core$Bit $tmp3917 = frost$core$Bit$init$builtin_bit($tmp3916 != NULL);
bool $tmp3918 = $tmp3917.value;
if ($tmp3918) goto block97; else goto block98;
block98:;
frost$core$Int64 $tmp3919 = (frost$core$Int64) {879};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3920, $tmp3919, &$s3921);
abort(); // unreachable
block97:;
frost$collections$Array$add$frost$collections$Array$T($tmp3915, ((frost$core$Object*) $tmp3916));
goto block86;
block86:;
goto block82;
block83:;
// line 883
org$frostlang$frostc$MethodRef* $tmp3922 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3923 = &$tmp3922->value;
org$frostlang$frostc$MethodDecl* $tmp3924 = *$tmp3923;
org$frostlang$frostc$Annotations** $tmp3925 = &$tmp3924->annotations;
org$frostlang$frostc$Annotations* $tmp3926 = *$tmp3925;
frost$core$Bit $tmp3927 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3926);
frost$core$Bit $tmp3928 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3927);
bool $tmp3929 = $tmp3928.value;
if ($tmp3929) goto block101; else goto block102;
block101:;
org$frostlang$frostc$MethodRef* $tmp3930 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3931 = &$tmp3930->value;
org$frostlang$frostc$MethodDecl* $tmp3932 = *$tmp3931;
frost$core$Bit $tmp3933 = org$frostlang$frostc$Compiler$isValueInit$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp3932);
frost$core$Bit $tmp3934 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3933);
*(&local22) = $tmp3934;
goto block103;
block102:;
*(&local22) = $tmp3928;
goto block103;
block103:;
frost$core$Bit $tmp3935 = *(&local22);
bool $tmp3936 = $tmp3935.value;
if ($tmp3936) goto block99; else goto block104;
block99:;
// line 884
frost$core$Bit $tmp3937 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$IR$Value* $tmp3938 = org$frostlang$frostc$Compiler$compileSelf$org$frostlang$frostc$Position$frost$core$Bit$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3937);
org$frostlang$frostc$MethodRef* $tmp3939 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3940 = &$tmp3939->value;
org$frostlang$frostc$MethodDecl* $tmp3941 = *$tmp3940;
frost$core$Weak** $tmp3942 = &$tmp3941->owner;
frost$core$Weak* $tmp3943 = *$tmp3942;
frost$core$Object* $tmp3944 = frost$core$Weak$get$R$frost$core$Weak$T($tmp3943);
org$frostlang$frostc$Type** $tmp3945 = &((org$frostlang$frostc$ClassDecl*) $tmp3944)->type;
org$frostlang$frostc$Type* $tmp3946 = *$tmp3945;
org$frostlang$frostc$IR$Value* $tmp3947 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp3938, $tmp3946);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
org$frostlang$frostc$IR$Value* $tmp3948 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3948));
*(&local21) = $tmp3947;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3947));
// unreffing REF($1007:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q($tmp3944);
// unreffing REF($1003:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3938));
// unreffing REF($996:org.frostlang.frostc.IR.Value?)
// line 886
org$frostlang$frostc$IR$Value* $tmp3949 = *(&local21);
frost$core$Bit $tmp3950 = frost$core$Bit$init$builtin_bit($tmp3949 == NULL);
bool $tmp3951 = $tmp3950.value;
if ($tmp3951) goto block105; else goto block106;
block105:;
// line 887
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3952 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3952));
// unreffing finalTarget
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp3953 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3953));
// unreffing finalArgs
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp3954 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3954));
// unreffing effectiveType
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp3955 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3955));
// unreffing actualType
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp3956 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3956));
// unreffing inferred
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp3957 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3957));
// unreffing intrinsic
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp3958 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3958));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp3959 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3959));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block106:;
// line 889
frost$collections$Array* $tmp3960 = *(&local20);
org$frostlang$frostc$IR$Value* $tmp3961 = *(&local21);
frost$core$Bit $tmp3962 = frost$core$Bit$init$builtin_bit($tmp3961 != NULL);
bool $tmp3963 = $tmp3962.value;
if ($tmp3963) goto block107; else goto block108;
block108:;
frost$core$Int64 $tmp3964 = (frost$core$Int64) {889};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3965, $tmp3964, &$s3966);
abort(); // unreachable
block107:;
frost$collections$Array$add$frost$collections$Array$T($tmp3960, ((frost$core$Object*) $tmp3961));
goto block100;
block104:;
// line 1
// line 892
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp3967 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3967));
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block100;
block100:;
goto block82;
block82:;
// line 894
// line 895
org$frostlang$frostc$MethodRef* $tmp3968 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp3969 = &$tmp3968->value;
org$frostlang$frostc$MethodDecl* $tmp3970 = *$tmp3969;
org$frostlang$frostc$Annotations** $tmp3971 = &$tmp3970->annotations;
org$frostlang$frostc$Annotations* $tmp3972 = *$tmp3971;
frost$core$Bit $tmp3973 = org$frostlang$frostc$Annotations$get_isClass$R$frost$core$Bit($tmp3972);
frost$core$Bit $tmp3974 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp3973);
bool $tmp3975 = $tmp3974.value;
if ($tmp3975) goto block111; else goto block112;
block111:;
frost$core$Bit $tmp3976 = frost$core$Bit$init$builtin_bit(param2 != NULL);
*(&local25) = $tmp3976;
goto block113;
block112:;
*(&local25) = $tmp3974;
goto block113;
block113:;
frost$core$Bit $tmp3977 = *(&local25);
bool $tmp3978 = $tmp3977.value;
if ($tmp3978) goto block114; else goto block115;
block114:;
frost$core$Bit $tmp3979 = frost$core$Bit$init$builtin_bit(param2 != NULL);
bool $tmp3980 = $tmp3979.value;
if ($tmp3980) goto block117; else goto block118;
block118:;
frost$core$Int64 $tmp3981 = (frost$core$Int64) {895};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s3982, $tmp3981, &$s3983);
abort(); // unreachable
block117:;
$fn3985 $tmp3984 = ($fn3985) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp3986 = $tmp3984(param2);
frost$core$Bit $tmp3987 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp3986);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3986));
// unreffing REF($1128:org.frostlang.frostc.Type)
*(&local24) = $tmp3987;
goto block116;
block115:;
*(&local24) = $tmp3977;
goto block116;
block116:;
frost$core$Bit $tmp3988 = *(&local24);
bool $tmp3989 = $tmp3988.value;
if ($tmp3989) goto block109; else goto block119;
block109:;
// line 896
frost$core$Int64 $tmp3990 = (frost$core$Int64) {0};
*(&local23) = $tmp3990;
goto block110;
block119:;
// line 1
// line 899
frost$core$Int64 $tmp3991 = (frost$core$Int64) {1};
*(&local23) = $tmp3991;
goto block110;
block110:;
// line 901
frost$core$Int64 $tmp3992 = (frost$core$Int64) {0};
ITable* $tmp3993 = ((frost$collections$CollectionView*) param4)->$class->itable;
while ($tmp3993->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3993 = $tmp3993->next;
}
$fn3995 $tmp3994 = $tmp3993->methods[0];
frost$core$Int64 $tmp3996 = $tmp3994(((frost$collections$CollectionView*) param4));
frost$core$Bit $tmp3997 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp3998 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp3992, $tmp3996, $tmp3997);
frost$core$Int64 $tmp3999 = $tmp3998.min;
*(&local26) = $tmp3999;
frost$core$Int64 $tmp4000 = $tmp3998.max;
frost$core$Bit $tmp4001 = $tmp3998.inclusive;
bool $tmp4002 = $tmp4001.value;
frost$core$Int64 $tmp4003 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp4004 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp4003);
if ($tmp4002) goto block123; else goto block124;
block123:;
int64_t $tmp4005 = $tmp3999.value;
int64_t $tmp4006 = $tmp4000.value;
bool $tmp4007 = $tmp4005 <= $tmp4006;
frost$core$Bit $tmp4008 = (frost$core$Bit) {$tmp4007};
bool $tmp4009 = $tmp4008.value;
if ($tmp4009) goto block120; else goto block121;
block124:;
int64_t $tmp4010 = $tmp3999.value;
int64_t $tmp4011 = $tmp4000.value;
bool $tmp4012 = $tmp4010 < $tmp4011;
frost$core$Bit $tmp4013 = (frost$core$Bit) {$tmp4012};
bool $tmp4014 = $tmp4013.value;
if ($tmp4014) goto block120; else goto block121;
block120:;
// line 902
frost$core$Int64 $tmp4015 = *(&local26);
ITable* $tmp4016 = param4->$class->itable;
while ($tmp4016->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp4016 = $tmp4016->next;
}
$fn4018 $tmp4017 = $tmp4016->methods[0];
frost$core$Object* $tmp4019 = $tmp4017(param4, $tmp4015);
org$frostlang$frostc$Compiler$TypeContext* $tmp4020 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp4021 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp4022 = *(&local19);
frost$core$Int64 $tmp4023 = *(&local26);
org$frostlang$frostc$Type* $tmp4024 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp4022, $tmp4023);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp4020, $tmp4021, $tmp4024);
org$frostlang$frostc$IR$Value* $tmp4025 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, ((org$frostlang$frostc$ASTNode*) $tmp4019), $tmp4020);
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4025));
org$frostlang$frostc$IR$Value* $tmp4026 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4026));
*(&local27) = $tmp4025;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4025));
// unreffing REF($1188:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4024));
// unreffing REF($1186:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4020));
// unreffing REF($1182:org.frostlang.frostc.Compiler.TypeContext)
frost$core$Frost$unref$frost$core$Object$Q($tmp4019);
// unreffing REF($1180:frost.collections.ListView.T)
// line 904
org$frostlang$frostc$IR$Value* $tmp4027 = *(&local27);
frost$core$Bit $tmp4028 = frost$core$Bit$init$builtin_bit($tmp4027 == NULL);
bool $tmp4029 = $tmp4028.value;
if ($tmp4029) goto block125; else goto block126;
block125:;
// line 905
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp4030 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4030));
// unreffing a
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp4031 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4031));
// unreffing finalTarget
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp4032 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4032));
// unreffing finalArgs
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp4033 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4033));
// unreffing effectiveType
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4034 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4034));
// unreffing actualType
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp4035 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4035));
// unreffing inferred
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp4036 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4036));
// unreffing intrinsic
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp4037 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4037));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp4038 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4038));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block126:;
// line 907
org$frostlang$frostc$IR$Value* $tmp4039 = *(&local27);
frost$core$Bit $tmp4040 = frost$core$Bit$init$builtin_bit($tmp4039 != NULL);
bool $tmp4041 = $tmp4040.value;
if ($tmp4041) goto block129; else goto block130;
block130:;
frost$core$Int64 $tmp4042 = (frost$core$Int64) {907};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4043, $tmp4042, &$s4044);
abort(); // unreachable
block129:;
$fn4046 $tmp4045 = ($fn4046) $tmp4039->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4047 = $tmp4045($tmp4039);
org$frostlang$frostc$Type* $tmp4048 = *(&local18);
frost$core$Int64 $tmp4049 = *(&local26);
frost$core$Int64 $tmp4050 = *(&local23);
int64_t $tmp4051 = $tmp4049.value;
int64_t $tmp4052 = $tmp4050.value;
int64_t $tmp4053 = $tmp4051 + $tmp4052;
frost$core$Int64 $tmp4054 = (frost$core$Int64) {$tmp4053};
org$frostlang$frostc$Type* $tmp4055 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp4048, $tmp4054);
ITable* $tmp4056 = ((frost$core$Equatable*) $tmp4047)->$class->itable;
while ($tmp4056->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4056 = $tmp4056->next;
}
$fn4058 $tmp4057 = $tmp4056->methods[1];
frost$core$Bit $tmp4059 = $tmp4057(((frost$core$Equatable*) $tmp4047), ((frost$core$Equatable*) $tmp4055));
bool $tmp4060 = $tmp4059.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4055));
// unreffing REF($1285:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4047));
// unreffing REF($1275:org.frostlang.frostc.Type)
if ($tmp4060) goto block127; else goto block128;
block127:;
// line 908
org$frostlang$frostc$IR$Value* $tmp4061 = *(&local27);
org$frostlang$frostc$Type* $tmp4062 = *(&local18);
frost$core$Int64 $tmp4063 = *(&local26);
frost$core$Int64 $tmp4064 = *(&local23);
int64_t $tmp4065 = $tmp4063.value;
int64_t $tmp4066 = $tmp4064.value;
int64_t $tmp4067 = $tmp4065 + $tmp4066;
frost$core$Int64 $tmp4068 = (frost$core$Int64) {$tmp4067};
org$frostlang$frostc$Type* $tmp4069 = org$frostlang$frostc$Type$parameterType$frost$core$Int64$R$org$frostlang$frostc$Type($tmp4062, $tmp4068);
org$frostlang$frostc$IR$Value* $tmp4070 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4061, $tmp4069);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4070));
org$frostlang$frostc$IR$Value* $tmp4071 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4071));
*(&local27) = $tmp4070;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4070));
// unreffing REF($1307:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4069));
// unreffing REF($1306:org.frostlang.frostc.Type)
goto block128;
block128:;
// line 910
org$frostlang$frostc$IR$Value* $tmp4072 = *(&local27);
frost$core$Bit $tmp4073 = frost$core$Bit$init$builtin_bit($tmp4072 == NULL);
bool $tmp4074 = $tmp4073.value;
if ($tmp4074) goto block131; else goto block132;
block131:;
// line 911
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp4075 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4075));
// unreffing a
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp4076 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4076));
// unreffing finalTarget
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp4077 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4077));
// unreffing finalArgs
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp4078 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4078));
// unreffing effectiveType
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4079 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4079));
// unreffing actualType
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp4080 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4080));
// unreffing inferred
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp4081 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4081));
// unreffing intrinsic
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp4082 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4082));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp4083 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4083));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block132:;
// line 913
frost$collections$Array* $tmp4084 = *(&local20);
org$frostlang$frostc$IR$Value* $tmp4085 = *(&local27);
frost$core$Bit $tmp4086 = frost$core$Bit$init$builtin_bit($tmp4085 != NULL);
bool $tmp4087 = $tmp4086.value;
if ($tmp4087) goto block133; else goto block134;
block134:;
frost$core$Int64 $tmp4088 = (frost$core$Int64) {913};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4089, $tmp4088, &$s4090);
abort(); // unreachable
block133:;
frost$collections$Array$add$frost$collections$Array$T($tmp4084, ((frost$core$Object*) $tmp4085));
org$frostlang$frostc$IR$Value* $tmp4091 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4091));
// unreffing a
*(&local27) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block122;
block122:;
frost$core$Int64 $tmp4092 = *(&local26);
int64_t $tmp4093 = $tmp4000.value;
int64_t $tmp4094 = $tmp4092.value;
int64_t $tmp4095 = $tmp4093 - $tmp4094;
frost$core$Int64 $tmp4096 = (frost$core$Int64) {$tmp4095};
frost$core$UInt64 $tmp4097 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp4096);
if ($tmp4002) goto block136; else goto block137;
block136:;
uint64_t $tmp4098 = $tmp4097.value;
uint64_t $tmp4099 = $tmp4004.value;
bool $tmp4100 = $tmp4098 >= $tmp4099;
frost$core$Bit $tmp4101 = (frost$core$Bit) {$tmp4100};
bool $tmp4102 = $tmp4101.value;
if ($tmp4102) goto block135; else goto block121;
block137:;
uint64_t $tmp4103 = $tmp4097.value;
uint64_t $tmp4104 = $tmp4004.value;
bool $tmp4105 = $tmp4103 > $tmp4104;
frost$core$Bit $tmp4106 = (frost$core$Bit) {$tmp4105};
bool $tmp4107 = $tmp4106.value;
if ($tmp4107) goto block135; else goto block121;
block135:;
int64_t $tmp4108 = $tmp4092.value;
int64_t $tmp4109 = $tmp4003.value;
int64_t $tmp4110 = $tmp4108 + $tmp4109;
frost$core$Int64 $tmp4111 = (frost$core$Int64) {$tmp4110};
*(&local26) = $tmp4111;
goto block120;
block121:;
// line 915
// line 916
frost$core$Bit $tmp4112 = *(&local17);
frost$core$Bit $tmp4113 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp4112);
bool $tmp4114 = $tmp4113.value;
if ($tmp4114) goto block140; else goto block141;
block140:;
org$frostlang$frostc$MethodRef* $tmp4115 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp4116 = &$tmp4115->value;
org$frostlang$frostc$MethodDecl* $tmp4117 = *$tmp4116;
frost$core$Bit $tmp4118 = org$frostlang$frostc$MethodDecl$get_isVirtual$R$frost$core$Bit($tmp4117);
*(&local29) = $tmp4118;
goto block142;
block141:;
*(&local29) = $tmp4113;
goto block142;
block142:;
frost$core$Bit $tmp4119 = *(&local29);
bool $tmp4120 = $tmp4119.value;
if ($tmp4120) goto block138; else goto block143;
block138:;
// line 917
// line 918
org$frostlang$frostc$MethodRef* $tmp4121 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp4122 = &$tmp4121->value;
org$frostlang$frostc$MethodDecl* $tmp4123 = *$tmp4122;
frost$core$Weak** $tmp4124 = &$tmp4123->owner;
frost$core$Weak* $tmp4125 = *$tmp4124;
frost$core$Object* $tmp4126 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4125);
org$frostlang$frostc$ClassDecl$Kind* $tmp4127 = &((org$frostlang$frostc$ClassDecl*) $tmp4126)->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp4128 = *$tmp4127;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp4129;
$tmp4129 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp4129->value = $tmp4128;
frost$core$Int64 $tmp4130 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp4131 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp4130);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp4132;
$tmp4132 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp4132->value = $tmp4131;
ITable* $tmp4133 = ((frost$core$Equatable*) $tmp4129)->$class->itable;
while ($tmp4133->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4133 = $tmp4133->next;
}
$fn4135 $tmp4134 = $tmp4133->methods[0];
frost$core$Bit $tmp4136 = $tmp4134(((frost$core$Equatable*) $tmp4129), ((frost$core$Equatable*) $tmp4132));
bool $tmp4137 = $tmp4136.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4132)));
// unreffing REF($1455:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4129)));
// unreffing REF($1451:frost.core.Equatable<org.frostlang.frostc.ClassDecl.Kind>)
frost$core$Frost$unref$frost$core$Object$Q($tmp4126);
// unreffing REF($1447:frost.core.Weak.T)
if ($tmp4137) goto block144; else goto block146;
block144:;
// line 919
org$frostlang$frostc$IR* $tmp4138 = *(&local5);
org$frostlang$frostc$IR$Statement* $tmp4139 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp4140 = (frost$core$Int64) {12};
org$frostlang$frostc$IR$Value* $tmp4141 = *(&local21);
frost$core$Bit $tmp4142 = frost$core$Bit$init$builtin_bit($tmp4141 != NULL);
bool $tmp4143 = $tmp4142.value;
if ($tmp4143) goto block147; else goto block148;
block148:;
frost$core$Int64 $tmp4144 = (frost$core$Int64) {919};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4145, $tmp4144, &$s4146);
abort(); // unreachable
block147:;
org$frostlang$frostc$MethodRef* $tmp4147 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp4148 = &$tmp4147->value;
org$frostlang$frostc$MethodDecl* $tmp4149 = *$tmp4148;
frost$core$Weak** $tmp4150 = &$tmp4149->owner;
frost$core$Weak* $tmp4151 = *$tmp4150;
frost$core$Object* $tmp4152 = frost$core$Weak$get$R$frost$core$Weak$T($tmp4151);
org$frostlang$frostc$MethodRef* $tmp4153 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp4154 = &$tmp4153->value;
org$frostlang$frostc$MethodDecl* $tmp4155 = *$tmp4154;
frost$core$Int64 $tmp4156 = org$frostlang$frostc$Compiler$getVTableIndex$org$frostlang$frostc$MethodDecl$R$frost$core$Int64(param0, $tmp4155);
org$frostlang$frostc$Type* $tmp4157 = org$frostlang$frostc$Type$Object$R$org$frostlang$frostc$Type();
org$frostlang$frostc$ClassDecl* $tmp4158 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp4157);
frost$core$Bit $tmp4159 = frost$core$Bit$init$builtin_bit($tmp4158 != NULL);
bool $tmp4160 = $tmp4159.value;
if ($tmp4160) goto block149; else goto block150;
block150:;
frost$core$Int64 $tmp4161 = (frost$core$Int64) {922};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4162, $tmp4161, &$s4163);
abort(); // unreachable
block149:;
frost$collections$ListView* $tmp4164 = org$frostlang$frostc$Compiler$getVTable$org$frostlang$frostc$ClassDecl$R$frost$collections$ListView$LTorg$frostlang$frostc$MethodDecl$GT(param0, $tmp4158);
ITable* $tmp4165 = ((frost$collections$CollectionView*) $tmp4164)->$class->itable;
while ($tmp4165->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4165 = $tmp4165->next;
}
$fn4167 $tmp4166 = $tmp4165->methods[0];
frost$core$Int64 $tmp4168 = $tmp4166(((frost$collections$CollectionView*) $tmp4164));
int64_t $tmp4169 = $tmp4156.value;
int64_t $tmp4170 = $tmp4168.value;
int64_t $tmp4171 = $tmp4169 - $tmp4170;
frost$core$Int64 $tmp4172 = (frost$core$Int64) {$tmp4171};
org$frostlang$frostc$Type* $tmp4173 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type($tmp4139, $tmp4140, param1, $tmp4141, ((org$frostlang$frostc$ClassDecl*) $tmp4152), $tmp4172, $tmp4173);
$fn4175 $tmp4174 = ($fn4175) $tmp4138->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp4176 = $tmp4174($tmp4138, $tmp4139);
*(&local30) = $tmp4176;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4164));
// unreffing REF($1504:frost.collections.ListView<org.frostlang.frostc.MethodDecl>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4158));
// unreffing REF($1495:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4157));
// unreffing REF($1494:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp4152);
// unreffing REF($1488:frost.core.Weak.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4139));
// unreffing REF($1471:org.frostlang.frostc.IR.Statement)
goto block145;
block146:;
// line 1
// line 926
org$frostlang$frostc$IR* $tmp4177 = *(&local5);
org$frostlang$frostc$IR$Statement* $tmp4178 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp4179 = (frost$core$Int64) {11};
org$frostlang$frostc$IR$Value* $tmp4180 = *(&local21);
frost$core$Bit $tmp4181 = frost$core$Bit$init$builtin_bit($tmp4180 != NULL);
bool $tmp4182 = $tmp4181.value;
if ($tmp4182) goto block151; else goto block152;
block152:;
frost$core$Int64 $tmp4183 = (frost$core$Int64) {926};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4184, $tmp4183, &$s4185);
abort(); // unreachable
block151:;
org$frostlang$frostc$MethodRef* $tmp4186 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp4187 = &$tmp4186->value;
org$frostlang$frostc$MethodDecl* $tmp4188 = *$tmp4187;
frost$core$Int64 $tmp4189 = org$frostlang$frostc$Compiler$getVTableIndex$org$frostlang$frostc$MethodDecl$R$frost$core$Int64(param0, $tmp4188);
org$frostlang$frostc$Type* $tmp4190 = *(&local18);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type($tmp4178, $tmp4179, param1, $tmp4180, $tmp4189, $tmp4190);
$fn4192 $tmp4191 = ($fn4192) $tmp4177->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp4193 = $tmp4191($tmp4177, $tmp4178);
*(&local30) = $tmp4193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4178));
// unreffing REF($1536:org.frostlang.frostc.IR.Statement)
goto block145;
block145:;
// line 929
org$frostlang$frostc$IR* $tmp4194 = *(&local5);
org$frostlang$frostc$IR$Statement* $tmp4195 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp4196 = (frost$core$Int64) {8};
org$frostlang$frostc$IR$Value* $tmp4197 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp4198 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp4199 = *(&local30);
org$frostlang$frostc$Type* $tmp4200 = *(&local18);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp4197, $tmp4198, $tmp4199, $tmp4200);
frost$collections$Array* $tmp4201 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp4202 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4201);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp4195, $tmp4196, param1, $tmp4197, $tmp4202);
$fn4204 $tmp4203 = ($fn4204) $tmp4194->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp4205 = $tmp4203($tmp4194, $tmp4195);
*(&local28) = $tmp4205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4202));
// unreffing REF($1571:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4197));
// unreffing REF($1564:org.frostlang.frostc.IR.Value)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4195));
// unreffing REF($1562:org.frostlang.frostc.IR.Statement)
goto block139;
block143:;
// line 1
// line 933
org$frostlang$frostc$IR* $tmp4206 = *(&local5);
org$frostlang$frostc$IR$Statement* $tmp4207 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp4208 = (frost$core$Int64) {25};
org$frostlang$frostc$MethodRef* $tmp4209 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp4210 = &$tmp4209->value;
org$frostlang$frostc$MethodDecl* $tmp4211 = *$tmp4210;
frost$collections$Array* $tmp4212 = *(&local20);
org$frostlang$frostc$FixedArray* $tmp4213 = org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT($tmp4212);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT($tmp4207, $tmp4208, param1, $tmp4211, $tmp4213);
$fn4215 $tmp4214 = ($fn4215) $tmp4206->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp4216 = $tmp4214($tmp4206, $tmp4207);
*(&local28) = $tmp4216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4213));
// unreffing REF($1597:org.frostlang.frostc.FixedArray<org.frostlang.frostc.FixedArray.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4207));
// unreffing REF($1590:org.frostlang.frostc.IR.Statement)
goto block139;
block139:;
// line 936
org$frostlang$frostc$MethodRef* $tmp4217 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp4218 = &$tmp4217->value;
org$frostlang$frostc$MethodDecl* $tmp4219 = *$tmp4218;
org$frostlang$frostc$Type** $tmp4220 = &$tmp4219->returnType;
org$frostlang$frostc$Type* $tmp4221 = *$tmp4220;
org$frostlang$frostc$Type* $tmp4222 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp4223 = ((frost$core$Equatable*) $tmp4221)->$class->itable;
while ($tmp4223->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4223 = $tmp4223->next;
}
$fn4225 $tmp4224 = $tmp4223->methods[1];
frost$core$Bit $tmp4226 = $tmp4224(((frost$core$Equatable*) $tmp4221), ((frost$core$Equatable*) $tmp4222));
bool $tmp4227 = $tmp4226.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4222));
// unreffing REF($1618:org.frostlang.frostc.Type)
if ($tmp4227) goto block153; else goto block154;
block153:;
// line 937
org$frostlang$frostc$IR$Value* $tmp4228 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp4229 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp4230 = *(&local28);
org$frostlang$frostc$Type* $tmp4231 = *(&local18);
org$frostlang$frostc$Type* $tmp4232 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp4231);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp4228, $tmp4229, $tmp4230, $tmp4232);
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4228));
org$frostlang$frostc$IR$Value* $tmp4233 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4233));
*(&local31) = $tmp4228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4232));
// unreffing REF($1632:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4228));
// unreffing REF($1628:org.frostlang.frostc.IR.Value)
// line 938
org$frostlang$frostc$Type* $tmp4234 = *(&local18);
org$frostlang$frostc$Type* $tmp4235 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp4234);
frost$core$Bit $tmp4236 = org$frostlang$frostc$Compiler$isRefCounted$org$frostlang$frostc$Type$R$frost$core$Bit(param0, $tmp4235);
bool $tmp4237 = $tmp4236.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4235));
// unreffing REF($1650:org.frostlang.frostc.Type)
if ($tmp4237) goto block155; else goto block156;
block155:;
// line 939
frost$collections$Stack** $tmp4238 = &param0->enclosingContexts;
frost$collections$Stack* $tmp4239 = *$tmp4238;
org$frostlang$frostc$Compiler$EnclosingContext* $tmp4240 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp4241 = (frost$core$Int64) {3};
org$frostlang$frostc$IR$Value* $tmp4242 = *(&local31);
frost$core$Bit $tmp4243 = frost$core$Bit$init$builtin_bit($tmp4242 != NULL);
bool $tmp4244 = $tmp4243.value;
if ($tmp4244) goto block157; else goto block158;
block158:;
frost$core$Int64 $tmp4245 = (frost$core$Int64) {939};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4246, $tmp4245, &$s4247);
abort(); // unreachable
block157:;
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value($tmp4240, $tmp4241, $tmp4242);
frost$collections$Stack$push$frost$collections$Stack$T($tmp4239, ((frost$core$Object*) $tmp4240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4240));
// unreffing REF($1661:org.frostlang.frostc.Compiler.EnclosingContext)
goto block156;
block156:;
// line 941
org$frostlang$frostc$IR$Value* $tmp4248 = *(&local31);
frost$core$Bit $tmp4249 = frost$core$Bit$init$builtin_bit($tmp4248 != NULL);
bool $tmp4250 = $tmp4249.value;
if ($tmp4250) goto block159; else goto block160;
block160:;
frost$core$Int64 $tmp4251 = (frost$core$Int64) {941};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4252, $tmp4251, &$s4253);
abort(); // unreachable
block159:;
org$frostlang$frostc$IR$Value* $tmp4254 = org$frostlang$frostc$expression$Call$handleErrors$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4248);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4254));
org$frostlang$frostc$IR$Value* $tmp4255 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4255));
*(&local31) = $tmp4254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4254));
// unreffing REF($1689:org.frostlang.frostc.IR.Value?)
// line 942
org$frostlang$frostc$IR$Value* $tmp4256 = *(&local31);
frost$core$Bit $tmp4257 = frost$core$Bit$init$builtin_bit($tmp4256 == NULL);
bool $tmp4258 = $tmp4257.value;
if ($tmp4258) goto block161; else goto block162;
block161:;
// line 943
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp4259 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4259));
// unreffing resultCast
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp4260 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4260));
// unreffing finalTarget
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp4261 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4261));
// unreffing finalArgs
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp4262 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4262));
// unreffing effectiveType
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4263 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4263));
// unreffing actualType
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp4264 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4264));
// unreffing inferred
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp4265 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4265));
// unreffing intrinsic
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp4266 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4266));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp4267 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4267));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block162:;
// line 945
org$frostlang$frostc$MethodRef* $tmp4268 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp4269 = &$tmp4268->value;
org$frostlang$frostc$MethodDecl* $tmp4270 = *$tmp4269;
org$frostlang$frostc$MethodDecl$Kind* $tmp4271 = &$tmp4270->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp4272 = *$tmp4271;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp4273;
$tmp4273 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp4273->value = $tmp4272;
frost$core$Int64 $tmp4274 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp4275 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp4274);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp4276;
$tmp4276 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp4276->value = $tmp4275;
ITable* $tmp4277 = ((frost$core$Equatable*) $tmp4273)->$class->itable;
while ($tmp4277->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4277 = $tmp4277->next;
}
$fn4279 $tmp4278 = $tmp4277->methods[1];
frost$core$Bit $tmp4280 = $tmp4278(((frost$core$Equatable*) $tmp4273), ((frost$core$Equatable*) $tmp4276));
bool $tmp4281 = $tmp4280.value;
if ($tmp4281) goto block165; else goto block166;
block165:;
org$frostlang$frostc$Type* $tmp4282 = *(&local19);
org$frostlang$frostc$Type* $tmp4283 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp4282);
org$frostlang$frostc$Type* $tmp4284 = *(&local18);
org$frostlang$frostc$Type* $tmp4285 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp4284);
ITable* $tmp4286 = ((frost$core$Equatable*) $tmp4283)->$class->itable;
while ($tmp4286->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4286 = $tmp4286->next;
}
$fn4288 $tmp4287 = $tmp4286->methods[1];
frost$core$Bit $tmp4289 = $tmp4287(((frost$core$Equatable*) $tmp4283), ((frost$core$Equatable*) $tmp4285));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4285));
// unreffing REF($1775:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4283));
// unreffing REF($1771:org.frostlang.frostc.Type)
*(&local32) = $tmp4289;
goto block167;
block166:;
*(&local32) = $tmp4280;
goto block167;
block167:;
frost$core$Bit $tmp4290 = *(&local32);
bool $tmp4291 = $tmp4290.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4276)));
// unreffing REF($1765:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4273)));
// unreffing REF($1761:frost.core.Equatable<org.frostlang.frostc.MethodDecl.Kind>)
if ($tmp4291) goto block163; else goto block164;
block163:;
// line 947
org$frostlang$frostc$IR$Value* $tmp4292 = *(&local31);
org$frostlang$frostc$Type* $tmp4293 = *(&local19);
org$frostlang$frostc$Type* $tmp4294 = org$frostlang$frostc$Type$get_returnType$R$org$frostlang$frostc$Type($tmp4293);
org$frostlang$frostc$IR$Value* $tmp4295 = org$frostlang$frostc$Compiler$cast$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Type$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4292, $tmp4294);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4295));
org$frostlang$frostc$IR$Value* $tmp4296 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4296));
*(&local31) = $tmp4295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4295));
// unreffing REF($1802:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4294));
// unreffing REF($1801:org.frostlang.frostc.Type)
// line 948
org$frostlang$frostc$IR$Value* $tmp4297 = *(&local31);
frost$core$Bit $tmp4298 = frost$core$Bit$init$builtin_bit($tmp4297 == NULL);
bool $tmp4299 = $tmp4298.value;
if ($tmp4299) goto block168; else goto block169;
block168:;
// line 949
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp4300 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4300));
// unreffing resultCast
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp4301 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4301));
// unreffing finalTarget
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp4302 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4302));
// unreffing finalArgs
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp4303 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4303));
// unreffing effectiveType
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4304 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4304));
// unreffing actualType
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp4305 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4305));
// unreffing inferred
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp4306 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4306));
// unreffing intrinsic
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp4307 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4307));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp4308 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4308));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block169:;
goto block164;
block164:;
// line 952
org$frostlang$frostc$IR$Value* $tmp4309 = *(&local31);
org$frostlang$frostc$IR$Value* $tmp4310 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4309, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4310));
// unreffing REF($1874:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR$Value* $tmp4311 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4311));
// unreffing resultCast
*(&local31) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp4312 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4312));
// unreffing finalTarget
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp4313 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4313));
// unreffing finalArgs
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp4314 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4314));
// unreffing effectiveType
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4315 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4315));
// unreffing actualType
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp4316 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4316));
// unreffing inferred
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp4317 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4317));
// unreffing intrinsic
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp4318 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4318));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp4319 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4319));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = $tmp4310;
goto block1;
block154:;
// line 954
org$frostlang$frostc$Compiler$TypeContext* $tmp4320 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp4321 = (frost$core$Int64) {0};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp4320, $tmp4321);
ITable* $tmp4322 = ((frost$core$Equatable*) param5)->$class->itable;
while ($tmp4322->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4322 = $tmp4322->next;
}
$fn4324 $tmp4323 = $tmp4322->methods[1];
frost$core$Bit $tmp4325 = $tmp4323(((frost$core$Equatable*) param5), ((frost$core$Equatable*) $tmp4320));
bool $tmp4326 = $tmp4325.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4320));
// unreffing REF($1930:org.frostlang.frostc.Compiler.TypeContext)
if ($tmp4326) goto block170; else goto block171;
block170:;
// line 955
org$frostlang$frostc$MethodRef* $tmp4327 = *(&local6);
org$frostlang$frostc$MethodDecl** $tmp4328 = &$tmp4327->value;
org$frostlang$frostc$MethodDecl* $tmp4329 = *$tmp4328;
frost$core$String* $tmp4330 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp4329);
frost$core$String* $tmp4331 = frost$core$String$get_asString$R$frost$core$String($tmp4330);
frost$core$String* $tmp4332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4331, &$s4333);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp4332);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4332));
// unreffing REF($1947:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4331));
// unreffing REF($1946:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4330));
// unreffing REF($1945:frost.core.String)
goto block171;
block171:;
// line 957
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp4334 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4334));
// unreffing finalTarget
*(&local21) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$collections$Array* $tmp4335 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4335));
// unreffing finalArgs
*(&local20) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp4336 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4336));
// unreffing effectiveType
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp4337 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4337));
// unreffing actualType
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodRef* $tmp4338 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4338));
// unreffing inferred
*(&local16) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$Pair* $tmp4339 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4339));
// unreffing intrinsic
*(&local15) = ((org$frostlang$frostc$Pair*) NULL);
org$frostlang$frostc$MethodRef* $tmp4340 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4340));
// unreffing m
*(&local6) = ((org$frostlang$frostc$MethodRef*) NULL);
org$frostlang$frostc$IR* $tmp4341 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4341));
// unreffing ir
*(&local5) = ((org$frostlang$frostc$IR*) NULL);
*(&local0) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block1:;
org$frostlang$frostc$Type* $tmp4342 = org$frostlang$frostc$MethodRef$get_returnType$R$org$frostlang$frostc$Type(param3);
org$frostlang$frostc$Type* $tmp4343 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp4344 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp4342, $tmp4343);
bool $tmp4345 = $tmp4344.value;
if ($tmp4345) goto block2; else goto block3;
block2:;
org$frostlang$frostc$IR$Value* $tmp4346 = *(&local0);
frost$core$Bit $tmp4347 = frost$core$Bit$init$builtin_bit($tmp4346 == NULL);
*(&local4) = $tmp4347;
goto block4;
block3:;
*(&local4) = $tmp4344;
goto block4;
block4:;
frost$core$Bit $tmp4348 = *(&local4);
bool $tmp4349 = $tmp4348.value;
if ($tmp4349) goto block5; else goto block6;
block5:;
*(&local3) = $tmp4348;
goto block7;
block6:;
org$frostlang$frostc$IR$Value* $tmp4350 = *(&local0);
frost$core$Bit $tmp4351 = frost$core$Bit$init$builtin_bit($tmp4350 != NULL);
*(&local3) = $tmp4351;
goto block7;
block7:;
frost$core$Bit $tmp4352 = *(&local3);
bool $tmp4353 = $tmp4352.value;
if ($tmp4353) goto block8; else goto block9;
block8:;
*(&local2) = $tmp4352;
goto block10;
block9:;
frost$core$Int64* $tmp4354 = &param0->errorCount;
frost$core$Int64 $tmp4355 = *$tmp4354;
frost$core$Int64 $tmp4356 = (frost$core$Int64) {0};
int64_t $tmp4357 = $tmp4355.value;
int64_t $tmp4358 = $tmp4356.value;
bool $tmp4359 = $tmp4357 > $tmp4358;
frost$core$Bit $tmp4360 = (frost$core$Bit) {$tmp4359};
*(&local2) = $tmp4360;
goto block10;
block10:;
frost$core$Bit $tmp4361 = *(&local2);
bool $tmp4362 = $tmp4361.value;
if ($tmp4362) goto block11; else goto block12;
block11:;
*(&local1) = $tmp4361;
goto block13;
block12:;
frost$core$Bit* $tmp4363 = &param0->reportErrors;
frost$core$Bit $tmp4364 = *$tmp4363;
frost$core$Bit $tmp4365 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp4364);
*(&local1) = $tmp4365;
goto block13;
block13:;
frost$core$Bit $tmp4366 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4343));
// unreffing REF($1:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4342));
// unreffing REF($0:org.frostlang.frostc.Type)
bool $tmp4367 = $tmp4366.value;
if ($tmp4367) goto block14; else goto block15;
block14:;
org$frostlang$frostc$IR$Value* $tmp4368 = *(&local0);
return $tmp4368;
block15:;
frost$core$Int64 $tmp4369 = (frost$core$Int64) {753};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4370, $tmp4369, &$s4371);
abort(); // unreachable

}
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$IR$Value* param2, frost$core$String* param3, frost$collections$ListView* param4, org$frostlang$frostc$Compiler$TypeContext* param5) {

org$frostlang$frostc$ClassDecl* local0 = NULL;
org$frostlang$frostc$Symbol* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
// line 963
$fn4373 $tmp4372 = ($fn4373) param2->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4374 = $tmp4372(param2);
org$frostlang$frostc$ClassDecl* $tmp4375 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp4374);
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4375));
org$frostlang$frostc$ClassDecl* $tmp4376 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4376));
*(&local0) = $tmp4375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4375));
// unreffing REF($3:org.frostlang.frostc.ClassDecl?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4374));
// unreffing REF($2:org.frostlang.frostc.Type)
// line 964
org$frostlang$frostc$ClassDecl* $tmp4377 = *(&local0);
frost$core$Bit $tmp4378 = frost$core$Bit$init$builtin_bit($tmp4377 == NULL);
bool $tmp4379 = $tmp4378.value;
if ($tmp4379) goto block1; else goto block2;
block1:;
// line 965
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp4380 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4380));
// unreffing cl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 967
org$frostlang$frostc$ClassDecl* $tmp4381 = *(&local0);
frost$core$Bit $tmp4382 = frost$core$Bit$init$builtin_bit($tmp4381 != NULL);
bool $tmp4383 = $tmp4382.value;
if ($tmp4383) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp4384 = (frost$core$Int64) {967};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4385, $tmp4384, &$s4386);
abort(); // unreachable
block3:;
org$frostlang$frostc$SymbolTable* $tmp4387 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp4381);
org$frostlang$frostc$Symbol* $tmp4388 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp4387, param3);
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4388));
org$frostlang$frostc$Symbol* $tmp4389 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4389));
*(&local1) = $tmp4388;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4388));
// unreffing REF($43:org.frostlang.frostc.Symbol?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4387));
// unreffing REF($42:org.frostlang.frostc.SymbolTable)
// line 968
org$frostlang$frostc$Symbol* $tmp4390 = *(&local1);
frost$core$Bit $tmp4391 = frost$core$Bit$init$builtin_bit($tmp4390 == NULL);
bool $tmp4392 = $tmp4391.value;
if ($tmp4392) goto block5; else goto block6;
block5:;
// line 969
org$frostlang$frostc$ClassDecl* $tmp4393 = *(&local0);
frost$core$Bit $tmp4394 = frost$core$Bit$init$builtin_bit($tmp4393 != NULL);
bool $tmp4395 = $tmp4394.value;
if ($tmp4395) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp4396 = (frost$core$Int64) {969};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4397, $tmp4396, &$s4398);
abort(); // unreachable
block7:;
frost$core$String** $tmp4399 = &$tmp4393->name;
frost$core$String* $tmp4400 = *$tmp4399;
frost$core$String* $tmp4401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4402, $tmp4400);
frost$core$String* $tmp4403 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4401, &$s4404);
frost$core$String* $tmp4405 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4403, param3);
frost$core$String* $tmp4406 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4405, &$s4407);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp4406);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4406));
// unreffing REF($78:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4405));
// unreffing REF($77:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4403));
// unreffing REF($76:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4401));
// unreffing REF($75:frost.core.String)
// line 970
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Symbol* $tmp4408 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4408));
// unreffing s
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4409 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4409));
// unreffing cl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block6:;
// line 972
org$frostlang$frostc$Symbol* $tmp4410 = *(&local1);
frost$core$Bit $tmp4411 = frost$core$Bit$init$builtin_bit($tmp4410 != NULL);
bool $tmp4412 = $tmp4411.value;
if ($tmp4412) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp4413 = (frost$core$Int64) {972};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4414, $tmp4413, &$s4415);
abort(); // unreachable
block9:;
org$frostlang$frostc$IR$Value* $tmp4416 = org$frostlang$frostc$Compiler$symbolRef$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Symbol$R$org$frostlang$frostc$IR$Value$Q(param0, param1, param2, $tmp4410);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4416));
org$frostlang$frostc$IR$Value* $tmp4417 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4417));
*(&local2) = $tmp4416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4416));
// unreffing REF($117:org.frostlang.frostc.IR.Value?)
// line 973
org$frostlang$frostc$IR$Value* $tmp4418 = *(&local2);
frost$core$Bit $tmp4419 = frost$core$Bit$init$builtin_bit($tmp4418 != NULL);
bool $tmp4420 = $tmp4419.value;
if ($tmp4420) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp4421 = (frost$core$Int64) {973};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4422, $tmp4421, &$s4423);
abort(); // unreachable
block11:;
org$frostlang$frostc$IR$Value* $tmp4424 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4418, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4424));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4424));
// unreffing REF($138:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$IR$Value* $tmp4425 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4425));
// unreffing ref
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Symbol* $tmp4426 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4426));
// unreffing s
*(&local1) = ((org$frostlang$frostc$Symbol*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4427 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4427));
// unreffing cl
*(&local0) = ((org$frostlang$frostc$ClassDecl*) NULL);
return $tmp4424;

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
// line 982
frost$core$Int64* $tmp4428 = &param2->$rawValue;
frost$core$Int64 $tmp4429 = *$tmp4428;
frost$core$Int64 $tmp4430 = (frost$core$Int64) {21};
frost$core$Bit $tmp4431 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4429, $tmp4430);
bool $tmp4432 = $tmp4431.value;
if ($tmp4432) goto block2; else goto block1;
block2:;
org$frostlang$frostc$Position* $tmp4433 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp4434 = *$tmp4433;
frost$core$String** $tmp4435 = (frost$core$String**) (param2->$data + 16);
frost$core$String* $tmp4436 = *$tmp4435;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4436));
frost$core$String* $tmp4437 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4437));
*(&local0) = $tmp4436;
org$frostlang$frostc$FixedArray** $tmp4438 = (org$frostlang$frostc$FixedArray**) (param2->$data + 24);
org$frostlang$frostc$FixedArray* $tmp4439 = *$tmp4438;
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4439));
org$frostlang$frostc$FixedArray* $tmp4440 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4440));
*(&local1) = $tmp4439;
// line 984
org$frostlang$frostc$Type* $tmp4441 = org$frostlang$frostc$Compiler$tryResolveType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(param0, param2);
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4441));
org$frostlang$frostc$Type* $tmp4442 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4442));
*(&local2) = $tmp4441;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4441));
// unreffing REF($28:org.frostlang.frostc.Type?)
// line 985
org$frostlang$frostc$Type* $tmp4443 = *(&local2);
frost$core$Bit $tmp4444 = frost$core$Bit$init$builtin_bit($tmp4443 != NULL);
bool $tmp4445 = $tmp4444.value;
if ($tmp4445) goto block3; else goto block4;
block3:;
// line 986
org$frostlang$frostc$Type* $tmp4446 = *(&local2);
frost$core$Bit $tmp4447 = frost$core$Bit$init$builtin_bit($tmp4446 != NULL);
bool $tmp4448 = $tmp4447.value;
if ($tmp4448) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp4449 = (frost$core$Int64) {986};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4450, $tmp4449, &$s4451);
abort(); // unreachable
block5:;
frost$core$Bit $tmp4452 = org$frostlang$frostc$Type$get_isClassLiteral$R$frost$core$Bit($tmp4446);
frost$core$Bit $tmp4453 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp4452);
bool $tmp4454 = $tmp4453.value;
if ($tmp4454) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp4455 = (frost$core$Int64) {986};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4456, $tmp4455);
abort(); // unreachable
block7:;
// line 987
org$frostlang$frostc$IR$Value* $tmp4457 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp4458 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp4459 = *(&local2);
frost$core$Bit $tmp4460 = frost$core$Bit$init$builtin_bit($tmp4459 != NULL);
bool $tmp4461 = $tmp4460.value;
if ($tmp4461) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp4462 = (frost$core$Int64) {987};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4463, $tmp4462, &$s4464);
abort(); // unreachable
block9:;
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp4457, $tmp4458, $tmp4459);
org$frostlang$frostc$IR$Value* $tmp4465 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4457, ((frost$collections$ListView*) param3), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4465));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4465));
// unreffing REF($76:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4457));
// unreffing REF($63:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$Type* $tmp4466 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4466));
// unreffing resolved
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp4467 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4467));
// unreffing types
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4468 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4468));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp4465;
block4:;
// line 989
frost$core$Bit $tmp4469 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Type* $tmp4470 = org$frostlang$frostc$Compiler$tryResolveType$org$frostlang$frostc$ASTNode$frost$core$Bit$R$org$frostlang$frostc$Type$Q(param0, param2, $tmp4469);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4470));
org$frostlang$frostc$Type* $tmp4471 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4471));
*(&local2) = $tmp4470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4470));
// unreffing REF($103:org.frostlang.frostc.Type?)
// line 990
org$frostlang$frostc$Type* $tmp4472 = *(&local2);
frost$core$Bit $tmp4473 = frost$core$Bit$init$builtin_bit($tmp4472 != NULL);
bool $tmp4474 = $tmp4473.value;
if ($tmp4474) goto block11; else goto block12;
block11:;
// line 992
org$frostlang$frostc$Scanner** $tmp4475 = &param0->scanner;
org$frostlang$frostc$Scanner* $tmp4476 = *$tmp4475;
org$frostlang$frostc$Type* $tmp4477 = org$frostlang$frostc$Scanner$convertType$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type($tmp4476, param2);
org$frostlang$frostc$Type* $tmp4478 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type$Q(param0, $tmp4477);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4478));
// unreffing REF($123:org.frostlang.frostc.Type?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4477));
// unreffing REF($122:org.frostlang.frostc.Type)
// line 993
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Type* $tmp4479 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4479));
// unreffing resolved
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp4480 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4480));
// unreffing types
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4481 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4481));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block12:;
// line 996
frost$core$String* $tmp4482 = *(&local0);
frost$collections$Array* $tmp4483 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp4482, &$s4484);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4483));
frost$collections$Array* $tmp4485 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4485));
*(&local3) = $tmp4483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4483));
// unreffing REF($151:frost.collections.Array<frost.core.String>)
// line 997
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
// line 998
frost$collections$Array* $tmp4486 = *(&local3);
ITable* $tmp4487 = ((frost$collections$CollectionView*) $tmp4486)->$class->itable;
while ($tmp4487->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4487 = $tmp4487->next;
}
$fn4489 $tmp4488 = $tmp4487->methods[0];
frost$core$Int64 $tmp4490 = $tmp4488(((frost$collections$CollectionView*) $tmp4486));
frost$core$Int64 $tmp4491 = (frost$core$Int64) {1};
frost$core$Bit $tmp4492 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4490, $tmp4491);
bool $tmp4493 = $tmp4492.value;
if ($tmp4493) goto block13; else goto block15;
block13:;
// line 999
org$frostlang$frostc$ASTNode* $tmp4494 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4495 = (frost$core$Int64) {23};
frost$core$String* $tmp4496 = *(&local0);
org$frostlang$frostc$FixedArray* $tmp4497 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4494, $tmp4495, param1, $tmp4496, $tmp4497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4494));
org$frostlang$frostc$ASTNode* $tmp4498 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4498));
*(&local4) = $tmp4494;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4494));
// unreffing REF($174:org.frostlang.frostc.ASTNode)
goto block14;
block15:;
// line 1
// line 1002
org$frostlang$frostc$ASTNode* $tmp4499 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4500 = (frost$core$Int64) {22};
frost$collections$Array* $tmp4501 = *(&local3);
frost$core$Int64 $tmp4502 = (frost$core$Int64) {0};
frost$core$Object* $tmp4503 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4501, $tmp4502);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp4499, $tmp4500, param1, ((frost$core$String*) $tmp4503));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4499));
org$frostlang$frostc$ASTNode* $tmp4504 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4504));
*(&local4) = $tmp4499;
frost$core$Frost$unref$frost$core$Object$Q($tmp4503);
// unreffing REF($196:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4499));
// unreffing REF($191:org.frostlang.frostc.ASTNode)
// line 1003
frost$core$Int64 $tmp4505 = (frost$core$Int64) {1};
frost$collections$Array* $tmp4506 = *(&local3);
ITable* $tmp4507 = ((frost$collections$CollectionView*) $tmp4506)->$class->itable;
while ($tmp4507->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4507 = $tmp4507->next;
}
$fn4509 $tmp4508 = $tmp4507->methods[0];
frost$core$Int64 $tmp4510 = $tmp4508(((frost$collections$CollectionView*) $tmp4506));
frost$core$Int64 $tmp4511 = (frost$core$Int64) {1};
int64_t $tmp4512 = $tmp4510.value;
int64_t $tmp4513 = $tmp4511.value;
int64_t $tmp4514 = $tmp4512 - $tmp4513;
frost$core$Int64 $tmp4515 = (frost$core$Int64) {$tmp4514};
frost$core$Bit $tmp4516 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp4517 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp4505, $tmp4515, $tmp4516);
frost$core$Int64 $tmp4518 = $tmp4517.min;
*(&local5) = $tmp4518;
frost$core$Int64 $tmp4519 = $tmp4517.max;
frost$core$Bit $tmp4520 = $tmp4517.inclusive;
bool $tmp4521 = $tmp4520.value;
frost$core$Int64 $tmp4522 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp4523 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp4522);
if ($tmp4521) goto block19; else goto block20;
block19:;
int64_t $tmp4524 = $tmp4518.value;
int64_t $tmp4525 = $tmp4519.value;
bool $tmp4526 = $tmp4524 <= $tmp4525;
frost$core$Bit $tmp4527 = (frost$core$Bit) {$tmp4526};
bool $tmp4528 = $tmp4527.value;
if ($tmp4528) goto block16; else goto block17;
block20:;
int64_t $tmp4529 = $tmp4518.value;
int64_t $tmp4530 = $tmp4519.value;
bool $tmp4531 = $tmp4529 < $tmp4530;
frost$core$Bit $tmp4532 = (frost$core$Bit) {$tmp4531};
bool $tmp4533 = $tmp4532.value;
if ($tmp4533) goto block16; else goto block17;
block16:;
// line 1004
org$frostlang$frostc$ASTNode* $tmp4534 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4535 = (frost$core$Int64) {16};
org$frostlang$frostc$ASTNode* $tmp4536 = *(&local4);
frost$collections$Array* $tmp4537 = *(&local3);
frost$core$Int64 $tmp4538 = *(&local5);
frost$core$Object* $tmp4539 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4537, $tmp4538);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String($tmp4534, $tmp4535, param1, $tmp4536, ((frost$core$String*) $tmp4539));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4534));
org$frostlang$frostc$ASTNode* $tmp4540 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4540));
*(&local4) = $tmp4534;
frost$core$Frost$unref$frost$core$Object$Q($tmp4539);
// unreffing REF($251:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4534));
// unreffing REF($245:org.frostlang.frostc.ASTNode)
goto block18;
block18:;
frost$core$Int64 $tmp4541 = *(&local5);
int64_t $tmp4542 = $tmp4519.value;
int64_t $tmp4543 = $tmp4541.value;
int64_t $tmp4544 = $tmp4542 - $tmp4543;
frost$core$Int64 $tmp4545 = (frost$core$Int64) {$tmp4544};
frost$core$UInt64 $tmp4546 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp4545);
if ($tmp4521) goto block22; else goto block23;
block22:;
uint64_t $tmp4547 = $tmp4546.value;
uint64_t $tmp4548 = $tmp4523.value;
bool $tmp4549 = $tmp4547 >= $tmp4548;
frost$core$Bit $tmp4550 = (frost$core$Bit) {$tmp4549};
bool $tmp4551 = $tmp4550.value;
if ($tmp4551) goto block21; else goto block17;
block23:;
uint64_t $tmp4552 = $tmp4546.value;
uint64_t $tmp4553 = $tmp4523.value;
bool $tmp4554 = $tmp4552 > $tmp4553;
frost$core$Bit $tmp4555 = (frost$core$Bit) {$tmp4554};
bool $tmp4556 = $tmp4555.value;
if ($tmp4556) goto block21; else goto block17;
block21:;
int64_t $tmp4557 = $tmp4541.value;
int64_t $tmp4558 = $tmp4522.value;
int64_t $tmp4559 = $tmp4557 + $tmp4558;
frost$core$Int64 $tmp4560 = (frost$core$Int64) {$tmp4559};
*(&local5) = $tmp4560;
goto block16;
block17:;
// line 1006
org$frostlang$frostc$ASTNode* $tmp4561 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp4562 = (frost$core$Int64) {17};
org$frostlang$frostc$ASTNode* $tmp4563 = *(&local4);
frost$collections$Array* $tmp4564 = *(&local3);
frost$collections$Array* $tmp4565 = *(&local3);
ITable* $tmp4566 = ((frost$collections$CollectionView*) $tmp4565)->$class->itable;
while ($tmp4566->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4566 = $tmp4566->next;
}
$fn4568 $tmp4567 = $tmp4566->methods[0];
frost$core$Int64 $tmp4569 = $tmp4567(((frost$collections$CollectionView*) $tmp4565));
frost$core$Int64 $tmp4570 = (frost$core$Int64) {1};
int64_t $tmp4571 = $tmp4569.value;
int64_t $tmp4572 = $tmp4570.value;
int64_t $tmp4573 = $tmp4571 - $tmp4572;
frost$core$Int64 $tmp4574 = (frost$core$Int64) {$tmp4573};
frost$core$Object* $tmp4575 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp4564, $tmp4574);
org$frostlang$frostc$FixedArray* $tmp4576 = *(&local1);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT($tmp4561, $tmp4562, param1, $tmp4563, ((frost$core$String*) $tmp4575), $tmp4576);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4561));
org$frostlang$frostc$ASTNode* $tmp4577 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4577));
*(&local4) = $tmp4561;
frost$core$Frost$unref$frost$core$Object$Q($tmp4575);
// unreffing REF($307:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4561));
// unreffing REF($293:org.frostlang.frostc.ASTNode)
goto block14;
block14:;
// line 1009
org$frostlang$frostc$ASTNode* $tmp4578 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp4579 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$frost$core$Bit$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4578, param3, param4, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4579));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4579));
// unreffing REF($326:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$ASTNode* $tmp4580 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4580));
// unreffing target
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$collections$Array* $tmp4581 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4581));
// unreffing components
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp4582 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4582));
// unreffing resolved
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp4583 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4583));
// unreffing types
*(&local1) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$String* $tmp4584 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4584));
// unreffing name
*(&local0) = ((frost$core$String*) NULL);
return $tmp4579;
block1:;
// line 1012
org$frostlang$frostc$Pair* $tmp4585 = org$frostlang$frostc$Compiler$getChoiceCase$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Corg$frostlang$frostc$ChoiceCase$GT$Q(param0, param2);
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4585));
org$frostlang$frostc$Pair* $tmp4586 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4586));
*(&local6) = $tmp4585;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4585));
// unreffing REF($359:org.frostlang.frostc.Pair<org.frostlang.frostc.Type, org.frostlang.frostc.ChoiceCase>?)
// line 1013
org$frostlang$frostc$Pair* $tmp4587 = *(&local6);
frost$core$Bit $tmp4588 = frost$core$Bit$init$builtin_bit($tmp4587 != NULL);
bool $tmp4589 = $tmp4588.value;
if ($tmp4589) goto block24; else goto block25;
block24:;
// line 1014
org$frostlang$frostc$Pair* $tmp4590 = *(&local6);
frost$core$Bit $tmp4591 = frost$core$Bit$init$builtin_bit($tmp4590 != NULL);
bool $tmp4592 = $tmp4591.value;
if ($tmp4592) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp4593 = (frost$core$Int64) {1014};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4594, $tmp4593, &$s4595);
abort(); // unreachable
block26:;
frost$core$Object** $tmp4596 = &$tmp4590->first;
frost$core$Object* $tmp4597 = *$tmp4596;
org$frostlang$frostc$Pair* $tmp4598 = *(&local6);
frost$core$Bit $tmp4599 = frost$core$Bit$init$builtin_bit($tmp4598 != NULL);
bool $tmp4600 = $tmp4599.value;
if ($tmp4600) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp4601 = (frost$core$Int64) {1014};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4602, $tmp4601, &$s4603);
abort(); // unreachable
block28:;
frost$core$Object** $tmp4604 = &$tmp4598->second;
frost$core$Object* $tmp4605 = *$tmp4604;
org$frostlang$frostc$IR$Value* $tmp4606 = org$frostlang$frostc$Compiler$compileChoiceCaseReference$org$frostlang$frostc$Position$org$frostlang$frostc$Type$org$frostlang$frostc$ChoiceCase$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$Type*) $tmp4597), ((org$frostlang$frostc$ChoiceCase*) $tmp4605), param3, param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4606));
// unreffing REF($401:org.frostlang.frostc.IR.Value?)
org$frostlang$frostc$Pair* $tmp4607 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4607));
// unreffing cc
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp4606;
block25:;
// line 1016
frost$core$Int64* $tmp4608 = &param2->$rawValue;
frost$core$Int64 $tmp4609 = *$tmp4608;
frost$core$Int64 $tmp4610 = (frost$core$Int64) {16};
frost$core$Bit $tmp4611 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4609, $tmp4610);
bool $tmp4612 = $tmp4611.value;
if ($tmp4612) goto block31; else goto block30;
block31:;
org$frostlang$frostc$Position* $tmp4613 = (org$frostlang$frostc$Position*) (param2->$data + 0);
org$frostlang$frostc$Position $tmp4614 = *$tmp4613;
*(&local7) = $tmp4614;
org$frostlang$frostc$ASTNode** $tmp4615 = (org$frostlang$frostc$ASTNode**) (param2->$data + 16);
org$frostlang$frostc$ASTNode* $tmp4616 = *$tmp4615;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4616));
org$frostlang$frostc$ASTNode* $tmp4617 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4617));
*(&local8) = $tmp4616;
frost$core$String** $tmp4618 = (frost$core$String**) (param2->$data + 24);
frost$core$String* $tmp4619 = *$tmp4618;
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4619));
frost$core$String* $tmp4620 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4620));
*(&local9) = $tmp4619;
// line 1018
org$frostlang$frostc$ASTNode* $tmp4621 = *(&local8);
frost$core$Int64* $tmp4622 = &$tmp4621->$rawValue;
frost$core$Int64 $tmp4623 = *$tmp4622;
frost$core$Int64 $tmp4624 = (frost$core$Int64) {41};
frost$core$Bit $tmp4625 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4623, $tmp4624);
bool $tmp4626 = $tmp4625.value;
if ($tmp4626) goto block33; else goto block32;
block33:;
// line 1020
org$frostlang$frostc$SymbolTable** $tmp4627 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp4628 = *$tmp4627;
org$frostlang$frostc$Symbol* $tmp4629 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp4628, &$s4630);
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4629));
org$frostlang$frostc$Symbol* $tmp4631 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4631));
*(&local10) = $tmp4629;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4629));
// unreffing REF($452:org.frostlang.frostc.Symbol?)
// line 1021
org$frostlang$frostc$Symbol* $tmp4632 = *(&local10);
frost$core$Bit $tmp4633 = frost$core$Bit$init$builtin_bit($tmp4632 == NULL);
bool $tmp4634 = $tmp4633.value;
if ($tmp4634) goto block34; else goto block35;
block34:;
// line 1022
org$frostlang$frostc$SymbolTable** $tmp4635 = &param0->symbolTable;
org$frostlang$frostc$SymbolTable* $tmp4636 = *$tmp4635;
org$frostlang$frostc$Symbol* $tmp4637 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp4636, &$s4638);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4637));
org$frostlang$frostc$Symbol* $tmp4639 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4639));
*(&local10) = $tmp4637;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4637));
// unreffing REF($472:org.frostlang.frostc.Symbol?)
goto block35;
block35:;
// line 1024
org$frostlang$frostc$Symbol* $tmp4640 = *(&local10);
frost$core$Bit $tmp4641 = frost$core$Bit$init$builtin_bit($tmp4640 == NULL);
bool $tmp4642 = $tmp4641.value;
if ($tmp4642) goto block36; else goto block37;
block36:;
// line 1025
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Symbol* $tmp4643 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4643));
// unreffing s
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp4644 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4644));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4645 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4645));
// unreffing base
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp4646 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4646));
// unreffing cc
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block37:;
// line 1027
frost$collections$Array* $tmp4647 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4647);
*(&local11) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4647));
frost$collections$Array* $tmp4648 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4648));
*(&local11) = $tmp4647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4647));
// unreffing REF($514:frost.collections.Array<org.frostlang.frostc.Type>)
// line 1028
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
// line 1029
org$frostlang$frostc$Symbol* $tmp4649 = *(&local10);
frost$core$Bit $tmp4650 = frost$core$Bit$init$builtin_bit($tmp4649 != NULL);
bool $tmp4651 = $tmp4650.value;
if ($tmp4651) goto block38; else goto block39;
block39:;
frost$core$Int64 $tmp4652 = (frost$core$Int64) {1029};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4653, $tmp4652, &$s4654);
abort(); // unreachable
block38:;
org$frostlang$frostc$Symbol$Kind* $tmp4655 = &$tmp4649->kind;
org$frostlang$frostc$Symbol$Kind $tmp4656 = *$tmp4655;
frost$core$Int64 $tmp4657 = $tmp4656.$rawValue;
frost$core$Int64 $tmp4658 = (frost$core$Int64) {9};
frost$core$Bit $tmp4659 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4657, $tmp4658);
bool $tmp4660 = $tmp4659.value;
if ($tmp4660) goto block41; else goto block42;
block41:;
// line 1031
org$frostlang$frostc$Symbol* $tmp4661 = *(&local10);
org$frostlang$frostc$Type** $tmp4662 = &((org$frostlang$frostc$Variable*) $tmp4661)->type;
org$frostlang$frostc$Type* $tmp4663 = *$tmp4662;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4663));
org$frostlang$frostc$Type* $tmp4664 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4664));
*(&local12) = $tmp4663;
goto block40;
block42:;
frost$core$Int64 $tmp4665 = (frost$core$Int64) {2};
frost$core$Bit $tmp4666 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp4657, $tmp4665);
bool $tmp4667 = $tmp4666.value;
if ($tmp4667) goto block43; else goto block44;
block43:;
// line 1034
org$frostlang$frostc$Symbol* $tmp4668 = *(&local10);
org$frostlang$frostc$Type** $tmp4669 = &((org$frostlang$frostc$FieldDecl*) $tmp4668)->type;
org$frostlang$frostc$Type* $tmp4670 = *$tmp4669;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4670));
org$frostlang$frostc$Type* $tmp4671 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4671));
*(&local12) = $tmp4670;
goto block40;
block44:;
// line 1037
frost$core$Bit $tmp4672 = frost$core$Bit$init$builtin_bit(false);
bool $tmp4673 = $tmp4672.value;
if ($tmp4673) goto block45; else goto block46;
block46:;
frost$core$Int64 $tmp4674 = (frost$core$Int64) {1037};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s4675, $tmp4674);
abort(); // unreachable
block45:;
goto block40;
block40:;
// line 1040
org$frostlang$frostc$Type* $tmp4676 = *(&local12);
org$frostlang$frostc$ClassDecl* $tmp4677 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp4676);
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4677));
org$frostlang$frostc$ClassDecl* $tmp4678 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4678));
*(&local13) = $tmp4677;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4677));
// unreffing REF($584:org.frostlang.frostc.ClassDecl?)
// line 1041
org$frostlang$frostc$ClassDecl* $tmp4679 = *(&local13);
frost$core$Bit $tmp4680 = frost$core$Bit$init$builtin_bit($tmp4679 == NULL);
bool $tmp4681 = $tmp4680.value;
if ($tmp4681) goto block47; else goto block48;
block47:;
// line 1042
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$ClassDecl* $tmp4682 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4682));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp4683 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4683));
// unreffing selfType
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp4684 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4684));
// unreffing result
*(&local11) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp4685 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4685));
// unreffing s
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp4686 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4686));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4687 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4687));
// unreffing base
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp4688 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4688));
// unreffing cc
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block48:;
// line 1044
org$frostlang$frostc$Type* $tmp4689 = *(&local12);
org$frostlang$frostc$ClassDecl* $tmp4690 = *(&local13);
frost$core$Bit $tmp4691 = frost$core$Bit$init$builtin_bit($tmp4690 != NULL);
bool $tmp4692 = $tmp4691.value;
if ($tmp4692) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp4693 = (frost$core$Int64) {1044};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4694, $tmp4693, &$s4695);
abort(); // unreachable
block49:;
org$frostlang$frostc$Type** $tmp4696 = &$tmp4690->rawSuper;
org$frostlang$frostc$Type* $tmp4697 = *$tmp4696;
frost$core$Bit $tmp4698 = frost$core$Bit$init$builtin_bit($tmp4697 != NULL);
bool $tmp4699 = $tmp4698.value;
if ($tmp4699) goto block51; else goto block52;
block52:;
frost$core$Int64 $tmp4700 = (frost$core$Int64) {1044};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4701, $tmp4700, &$s4702);
abort(); // unreachable
block51:;
org$frostlang$frostc$Type* $tmp4703 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(param0, $tmp4689, $tmp4697);
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4703));
org$frostlang$frostc$Type* $tmp4704 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4704));
*(&local14) = $tmp4703;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4703));
// unreffing REF($661:org.frostlang.frostc.Type)
// line 1045
org$frostlang$frostc$Position $tmp4705 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp4706 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp4707 = (frost$core$Int64) {13};
org$frostlang$frostc$Type* $tmp4708 = *(&local14);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp4706, $tmp4707, $tmp4708);
frost$core$String* $tmp4709 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp4710 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, $tmp4705, $tmp4706, $tmp4709, ((frost$collections$ListView*) param3), param5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4710));
// unreffing REF($680:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4706));
// unreffing REF($674:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$Type* $tmp4711 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4711));
// unreffing supertype
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$ClassDecl* $tmp4712 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4712));
// unreffing cl
*(&local13) = ((org$frostlang$frostc$ClassDecl*) NULL);
org$frostlang$frostc$Type* $tmp4713 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4713));
// unreffing selfType
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$collections$Array* $tmp4714 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4714));
// unreffing result
*(&local11) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Symbol* $tmp4715 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4715));
// unreffing s
*(&local10) = ((org$frostlang$frostc$Symbol*) NULL);
frost$core$String* $tmp4716 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4716));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4717 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4717));
// unreffing base
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
org$frostlang$frostc$Pair* $tmp4718 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4718));
// unreffing cc
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp4710;
block32:;
frost$core$String* $tmp4719 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4719));
// unreffing name
*(&local9) = ((frost$core$String*) NULL);
org$frostlang$frostc$ASTNode* $tmp4720 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4720));
// unreffing base
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block30;
block30:;
// line 1051
org$frostlang$frostc$Compiler$TypeContext* $tmp4721 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp4722 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp4721, $tmp4722);
org$frostlang$frostc$IR$Value* $tmp4723 = org$frostlang$frostc$Compiler$compileMethodExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp4721);
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4723));
org$frostlang$frostc$IR$Value* $tmp4724 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4724));
*(&local15) = $tmp4723;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4723));
// unreffing REF($745:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4721));
// unreffing REF($742:org.frostlang.frostc.Compiler.TypeContext)
// line 1052
org$frostlang$frostc$IR$Value* $tmp4725 = *(&local15);
frost$core$Bit $tmp4726 = frost$core$Bit$init$builtin_bit($tmp4725 == NULL);
bool $tmp4727 = $tmp4726.value;
if ($tmp4727) goto block53; else goto block54;
block53:;
// line 1053
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp4728 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4728));
// unreffing compiledM
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp4729 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4729));
// unreffing cc
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block54:;
// line 1055
org$frostlang$frostc$IR$Value* $tmp4730 = *(&local15);
frost$core$Bit $tmp4731 = frost$core$Bit$init$builtin_bit($tmp4730 != NULL);
bool $tmp4732 = $tmp4731.value;
if ($tmp4732) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp4733 = (frost$core$Int64) {1055};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4734, $tmp4733, &$s4735);
abort(); // unreachable
block55:;
org$frostlang$frostc$IR$Value* $tmp4736 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp4730, ((frost$collections$ListView*) param3), param5);
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4736));
org$frostlang$frostc$IR$Value* $tmp4737 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4737));
*(&local16) = $tmp4736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4736));
// unreffing REF($790:org.frostlang.frostc.IR.Value?)
// line 1056
bool $tmp4738 = param4.value;
if ($tmp4738) goto block59; else goto block60;
block59:;
org$frostlang$frostc$IR$Value* $tmp4739 = *(&local16);
frost$core$Bit $tmp4740 = frost$core$Bit$init$builtin_bit($tmp4739 != NULL);
*(&local17) = $tmp4740;
goto block61;
block60:;
*(&local17) = param4;
goto block61;
block61:;
frost$core$Bit $tmp4741 = *(&local17);
bool $tmp4742 = $tmp4741.value;
if ($tmp4742) goto block57; else goto block58;
block57:;
// line 1057
org$frostlang$frostc$IR$Value* $tmp4743 = *(&local16);
frost$core$Bit $tmp4744 = frost$core$Bit$init$builtin_bit($tmp4743 != NULL);
bool $tmp4745 = $tmp4744.value;
if ($tmp4745) goto block62; else goto block63;
block63:;
frost$core$Int64 $tmp4746 = (frost$core$Int64) {1057};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4747, $tmp4746, &$s4748);
abort(); // unreachable
block62:;
$fn4750 $tmp4749 = ($fn4750) $tmp4743->$class->vtable[2];
org$frostlang$frostc$Type* $tmp4751 = $tmp4749($tmp4743);
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4751));
org$frostlang$frostc$Type* $tmp4752 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4752));
*(&local18) = $tmp4751;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4751));
// unreffing REF($825:org.frostlang.frostc.Type)
// line 1058
org$frostlang$frostc$Type* $tmp4753 = *(&local18);
org$frostlang$frostc$Type* $tmp4754 = org$frostlang$frostc$Type$Error$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Type* $tmp4755 = org$frostlang$frostc$Type$nullable$R$org$frostlang$frostc$Type($tmp4754);
frost$core$Bit $tmp4756 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp4753, $tmp4755);
bool $tmp4757 = $tmp4756.value;
if ($tmp4757) goto block66; else goto block67;
block66:;
*(&local19) = $tmp4756;
goto block68;
block67:;
org$frostlang$frostc$Type* $tmp4758 = *(&local18);
org$frostlang$frostc$Type$Kind* $tmp4759 = &$tmp4758->typeKind;
org$frostlang$frostc$Type$Kind $tmp4760 = *$tmp4759;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4761;
$tmp4761 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4761->value = $tmp4760;
frost$core$Int64 $tmp4762 = (frost$core$Int64) {11};
org$frostlang$frostc$Type$Kind $tmp4763 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp4762);
org$frostlang$frostc$Type$Kind$wrapper* $tmp4764;
$tmp4764 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4764->value = $tmp4763;
ITable* $tmp4765 = ((frost$core$Equatable*) $tmp4761)->$class->itable;
while ($tmp4765->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp4765 = $tmp4765->next;
}
$fn4767 $tmp4766 = $tmp4765->methods[0];
frost$core$Bit $tmp4768 = $tmp4766(((frost$core$Equatable*) $tmp4761), ((frost$core$Equatable*) $tmp4764));
bool $tmp4769 = $tmp4768.value;
if ($tmp4769) goto block69; else goto block70;
block69:;
org$frostlang$frostc$Type* $tmp4770 = *(&local18);
org$frostlang$frostc$FixedArray** $tmp4771 = &$tmp4770->subtypes;
org$frostlang$frostc$FixedArray* $tmp4772 = *$tmp4771;
frost$core$Bit $tmp4773 = frost$core$Bit$init$builtin_bit($tmp4772 != NULL);
bool $tmp4774 = $tmp4773.value;
if ($tmp4774) goto block72; else goto block73;
block73:;
frost$core$Int64 $tmp4775 = (frost$core$Int64) {1060};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s4776, $tmp4775, &$s4777);
abort(); // unreachable
block72:;
frost$core$Int64 $tmp4778 = (frost$core$Int64) {0};
frost$core$Object* $tmp4779 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp4772, $tmp4778);
frost$core$String** $tmp4780 = &((org$frostlang$frostc$Symbol*) ((org$frostlang$frostc$Type*) $tmp4779))->name;
frost$core$String* $tmp4781 = *$tmp4780;
frost$core$Bit $tmp4782 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp4781, &$s4783);
frost$core$Frost$unref$frost$core$Object$Q($tmp4779);
// unreffing REF($870:org.frostlang.frostc.FixedArray.T)
*(&local20) = $tmp4782;
goto block71;
block70:;
*(&local20) = $tmp4768;
goto block71;
block71:;
frost$core$Bit $tmp4784 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4764)));
// unreffing REF($852:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp4761)));
// unreffing REF($848:frost.core.Equatable<org.frostlang.frostc.Type.Kind>)
*(&local19) = $tmp4784;
goto block68;
block68:;
frost$core$Bit $tmp4785 = *(&local19);
bool $tmp4786 = $tmp4785.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4755));
// unreffing REF($839:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4754));
// unreffing REF($838:org.frostlang.frostc.Type)
if ($tmp4786) goto block64; else goto block65;
block64:;
// line 1061
org$frostlang$frostc$Type* $tmp4787 = *(&local18);
frost$core$String** $tmp4788 = &((org$frostlang$frostc$Symbol*) $tmp4787)->name;
frost$core$String* $tmp4789 = *$tmp4788;
frost$core$String* $tmp4790 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4791, $tmp4789);
frost$core$String* $tmp4792 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp4790, &$s4793);
frost$core$String* $tmp4794 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s4795, $tmp4792);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, $tmp4794);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4794));
// unreffing REF($908:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4792));
// unreffing REF($907:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4790));
// unreffing REF($906:frost.core.String)
goto block65;
block65:;
org$frostlang$frostc$Type* $tmp4796 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4796));
// unreffing resultType
*(&local18) = ((org$frostlang$frostc$Type*) NULL);
goto block58;
block58:;
// line 1065
org$frostlang$frostc$IR$Value* $tmp4797 = *(&local16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4797));
org$frostlang$frostc$IR$Value* $tmp4798 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4798));
// unreffing result
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp4799 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4799));
// unreffing compiledM
*(&local15) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Pair* $tmp4800 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4800));
// unreffing cc
*(&local6) = ((org$frostlang$frostc$Pair*) NULL);
return $tmp4797;

}
void org$frostlang$frostc$expression$Call$init(org$frostlang$frostc$expression$Call* param0) {

return;

}
void org$frostlang$frostc$expression$Call$cleanup(org$frostlang$frostc$expression$Call* param0) {

// line 20
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

